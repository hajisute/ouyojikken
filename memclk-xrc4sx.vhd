--
-- memclk-xrc4sx.vhd - generate memory interface clocks (Virtex-4)
--
-- Performs deskew of clocks driven to the ZBT SSRAM.
--
-- SYNTHESIZABLE
--
-- Targets models:
--
--   o ADM-XRC-4SX
--

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_misc.all;
use ieee.std_logic_unsigned.all;

-- synopsys translate_off
library unisim;
use unisim.vcomponents.all;
-- synopsys translate_on

entity memclk is
    generic(
        num_clock     : in    natural);
    port(
        rst           : in    std_logic;
        mclk_i        : in    std_logic;
        memclk0       : out   std_logic;
        ramclko       : out   std_logic_vector(num_clock - 1 downto 0);
        ramclki       : in    std_logic_vector(num_clock - 1 downto 0);
        locked        : out   std_logic_vector(1 downto 0);
        memrst        : out   std_logic);
end entity;

architecture struct of memclk is

    signal locked_memclk : std_logic;
    signal umemclk0, bmemclk0 : std_logic;

    signal rst_ramclk : std_logic;
    signal locked_ramclk : std_logic;
    signal ramclki_ibufg : std_logic_vector(0 downto 0);
    signal ramclk0 : std_logic;
    signal ramclk0_bufg : std_logic;
    signal ramclk0_bufg_l : std_logic;

    signal logic0, logic1 : std_logic;

    component DCM_STANDBY
        port(
            CLK0          : OUT std_logic;
            CLK180        : OUT std_logic;
            CLK270        : OUT std_logic;
            CLK2X         : OUT std_logic;
            CLK2X180      : OUT std_logic;
            CLK90         : OUT std_logic;
            CLKDV         : OUT std_logic;
            CLKFX         : OUT std_logic;
            CLKFX180      : OUT std_logic;
            LOCKED        : OUT std_logic;
            DO            : OUT std_logic_vector(15 DOWNTO 0);
            PSDONE        : OUT std_logic;
            CLKFB         : IN  std_logic;
            CLKIN         : IN  std_logic;
            PSCLK         : IN  std_logic;
            PSEN          : IN  std_logic;
            PSINCDEC      : IN  std_logic;
            RST           : IN  std_logic);
    end component;

    component FDDRRSE
        port(
            D0 : in  std_logic;
            D1 : in  std_logic;
            C0 : in  std_logic;
            C1 : in  std_logic;
            CE : in  std_logic;
            R  : in  std_logic;
            S  : in  std_logic;
            Q  : out std_logic);
    end component;

    component IBUFG
        port(
            I : in  std_logic;
            O : out std_logic);
    end component;
    
    component BUFG
        port(
            I : in  std_logic;
            O : out std_logic);
    end component;
    
    attribute DLL_FREQUENCY_MODE : string;
    attribute DUTY_CYCLE_CORRECTION : string;
    attribute STARTUP_WAIT : string;
    attribute CLK_FEEDBACK : string;

--    attribute DLL_FREQUENCY_MODE of dll_memclk : label is "LOW";
--    attribute DUTY_CYCLE_CORRECTION of dll_memclk : label is "TRUE";
--    attribute STARTUP_WAIT of dll_memclk : label is "FALSE";
--    attribute CLK_FEEDBACK of dll_memclk : label is "1X";
    
    --
    -- If the synthesizer replicates an asynchronous reset signal due high fanout,
    -- this can prevent flip-flops being mapped into IOBs. We set the maximum
    -- fanout for such nets to a high enough value that replication never occurs.
    --
    attribute MAX_FANOUT : string;
    attribute MAX_FANOUT of memrst : signal is "1000000";

begin

    --
    -- Define constant values
    --
    logic0 <= '0';
    logic1 <= '1';

    memclk0 <= bmemclk0;

    locked <= locked_ramclk & locked_memclk;

    memrst <= not locked_ramclk or not locked_memclk;

    dll_memclk : DCM_STANDBY
        port map(
            CLKIN    => mclk_i,
            CLKFB    => bmemclk0,
            PSINCDEC => logic0,
            PSEN     => logic0,
            PSCLK    => logic0,
            RST      => rst,
            CLK0     => umemclk0,
            CLK90    => open,
            CLK180   => open,
            CLK270   => open,
            LOCKED   => locked_memclk);


    bufg_memclk0 : BUFG
        port map(
            I => umemclk0,
            O => bmemclk0);

    --
    -- Generate the SSRAM clocks
    --
    
    rst_ramclk <= not locked_memclk;
    
    ibufg0 : IBUFG
        port map(
            I => ramclki(0),
            O => ramclki_ibufg(0));
            
    dll_ramclk0 : DCM_STANDBY
        port map(
            CLKIN    => bmemclk0,
            CLKFB    => ramclki_ibufg(0),
            PSINCDEC => logic0,
            PSEN     => logic0,
            PSCLK    => logic0,
            RST      => rst_ramclk,
            CLK0     => ramclk0,
            LOCKED   => locked_ramclk);

    bufg_ramclk0 : BUFG
        port map(
            I => ramclk0,
            O => ramclk0_bufg);

    ramclk0_bufg_l <= not ramclk0_bufg;

    gen_ramclko : for i in 0 to num_clock - 1 generate
        u0 : FDDRRSE
            port map(
                D0 => logic1,
                D1 => logic0,
                C0 => ramclk0_bufg,
                C1 => ramclk0_bufg_l,
                CE => logic1,
                R => logic0,
                S => logic0,
                Q => ramclko(i));
    end generate;

end architecture;
