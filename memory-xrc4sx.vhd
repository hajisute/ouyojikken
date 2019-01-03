--
-- memory-xrc4sx.vhd - This module is the top level, and wraps up the
--                     'memory_main' module so that it targets the ADM-XRC-4SX.
--
-- SYNTHESIZABLE
--
-- (C) Copyright Alpha Data Parallel Systems Ltd. 2005-2006
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

library work;
use work.memif.all;

entity memory is
    generic(
        -- Memory bank parameters
        bank0             : in    bank_t := (enable => true, ra_width => 21, rc_width => 8, rd_width => 32);
        bank1             : in    bank_t := (enable => true, ra_width => 21, rc_width => 8, rd_width => 32);
        bank2             : in    bank_t := (enable => true, ra_width => 21, rc_width => 8, rd_width => 32);
        bank3             : in    bank_t := (enable => true, ra_width => 21, rc_width => 8, rd_width => 32);
        bank4             : in    bank_t := no_bank;
        bank5             : in    bank_t := no_bank;
        bank6             : in    bank_t := no_bank;
        bank7             : in    bank_t := no_bank;
        bank8             : in    bank_t := no_bank;
        bank9             : in    bank_t := no_bank;
        bank10            : in    bank_t := no_bank;
        bank11            : in    bank_t := no_bank;
        bank12            : in    bank_t := no_bank;
        bank13            : in    bank_t := no_bank;
        bank14            : in    bank_t := no_bank;
        bank15            : in    bank_t := no_bank;
        num_ramclk        : in    natural := 4);
    port(
        -- Local bus
        lclk              : in    std_logic;
        lreset_l          : in    std_logic; 
        lwrite            : in    std_logic;
        lads_l            : in    std_logic;
        lblast_l          : in    std_logic;
        lbe_l             : in    std_logic_vector(3 downto 0);
        la                : in    std_logic_vector(31 downto 2);
        ld                : inout std_logic_vector(31 downto 0);
        lbterm_l          : inout std_logic;
        lready_l          : inout std_logic; 
        fholda            : in    std_logic;
        -- General purpose clock
        mclk_n            : in    std_logic;
        mclk_p            : in    std_logic;
        -- Reference clock
        refclk_n          : in    std_logic;
        refclk_p          : in    std_logic;
        -- Memory banks (up to 16 supported by this design)
        ra0               : out   std_logic_vector(bank0.ra_width - 1 downto 0);
        rc0               : inout std_logic_vector(bank0.rc_width - 1 downto 0);
        rd0               : inout std_logic_vector(bank0.rd_width - 1 downto 0);
        ra1               : out   std_logic_vector(bank1.ra_width - 1 downto 0);
        rc1               : inout std_logic_vector(bank1.rc_width - 1 downto 0);
        rd1               : inout std_logic_vector(bank1.rd_width - 1 downto 0);
        ra2               : out   std_logic_vector(bank2.ra_width - 1 downto 0);
        rc2               : inout std_logic_vector(bank2.rc_width - 1 downto 0);
        rd2               : inout std_logic_vector(bank2.rd_width - 1 downto 0);
        ra3               : out   std_logic_vector(bank3.ra_width - 1 downto 0);
        rc3               : inout std_logic_vector(bank3.rc_width - 1 downto 0);
        rd3               : inout std_logic_vector(bank3.rd_width - 1 downto 0);
        ra4               : out   std_logic_vector(bank4.ra_width - 1 downto 0);
        rc4               : inout std_logic_vector(bank4.rc_width - 1 downto 0);
        rd4               : inout std_logic_vector(bank4.rd_width - 1 downto 0);
        ra5               : out   std_logic_vector(bank5.ra_width - 1 downto 0);
        rc5               : inout std_logic_vector(bank5.rc_width - 1 downto 0);
        rd5               : inout std_logic_vector(bank5.rd_width - 1 downto 0);
        ra6               : out   std_logic_vector(bank6.ra_width - 1 downto 0);
        rc6               : inout std_logic_vector(bank6.rc_width - 1 downto 0);
        rd6               : inout std_logic_vector(bank6.rd_width - 1 downto 0);
        ra7               : out   std_logic_vector(bank7.ra_width - 1 downto 0);
        rc7               : inout std_logic_vector(bank7.rc_width - 1 downto 0);
        rd7               : inout std_logic_vector(bank7.rd_width - 1 downto 0);
        ra8               : out   std_logic_vector(bank8.ra_width - 1 downto 0);
        rc8               : inout std_logic_vector(bank8.rc_width - 1 downto 0);
        rd8               : inout std_logic_vector(bank8.rd_width - 1 downto 0);
        ra9               : out   std_logic_vector(bank9.ra_width - 1 downto 0);
        rc9               : inout std_logic_vector(bank9.rc_width - 1 downto 0);
        rd9               : inout std_logic_vector(bank9.rd_width - 1 downto 0);
        ra10              : out   std_logic_vector(bank10.ra_width - 1 downto 0);
        rc10              : inout std_logic_vector(bank10.rc_width - 1 downto 0);
        rd10              : inout std_logic_vector(bank10.rd_width - 1 downto 0);
        ra11              : out   std_logic_vector(bank11.ra_width - 1 downto 0);
        rc11              : inout std_logic_vector(bank11.rc_width - 1 downto 0);
        rd11              : inout std_logic_vector(bank11.rd_width - 1 downto 0);
        ra12              : out   std_logic_vector(bank12.ra_width - 1 downto 0);
        rc12              : inout std_logic_vector(bank12.rc_width - 1 downto 0);
        rd12              : inout std_logic_vector(bank12.rd_width - 1 downto 0);
        ra13              : out   std_logic_vector(bank13.ra_width - 1 downto 0);
        rc13              : inout std_logic_vector(bank13.rc_width - 1 downto 0);
        rd13              : inout std_logic_vector(bank13.rd_width - 1 downto 0);
        ra14              : out   std_logic_vector(bank14.ra_width - 1 downto 0);
        rc14              : inout std_logic_vector(bank14.rc_width - 1 downto 0);
        rd14              : inout std_logic_vector(bank14.rd_width - 1 downto 0);
        ra15              : out   std_logic_vector(bank15.ra_width - 1 downto 0);
        rc15              : inout std_logic_vector(bank15.rc_width - 1 downto 0);
        rd15              : inout std_logic_vector(bank15.rd_width - 1 downto 0);
        ramclki           : in    std_logic_vector(num_ramclk - 1 downto 0);
        ramclko           : out   std_logic_vector(num_ramclk - 1 downto 0));
end entity;

architecture struct of memory is

    signal rst : std_logic;
    signal clk : std_logic;
    signal clk_locked : std_logic;
    signal mclk_ibufg : std_logic;
    signal refclk_ibufg : std_logic;
    signal refclk_bufg : std_logic;

    signal ld_o : std_logic_vector(31 downto 0);
    signal ld_oe_l : std_logic_vector(31 downto 0);

    signal scl : std_logic;
    signal sda : std_logic;

    component memory_main
        generic(
            -- Bit of local bus address that is used to decode FPGA space
            la_top            : in    natural;
            -- Memory bank parameters
            bank0             : in    bank_t;
            bank1             : in    bank_t;
            bank2             : in    bank_t;
            bank3             : in    bank_t;
            bank4             : in    bank_t;
            bank5             : in    bank_t;
            bank6             : in    bank_t;
            bank7             : in    bank_t;
            bank8             : in    bank_t;
            bank9             : in    bank_t;
            bank10            : in    bank_t;
            bank11            : in    bank_t;
            bank12            : in    bank_t;
            bank13            : in    bank_t;
            bank14            : in    bank_t;
            bank15            : in    bank_t;
            num_ramclk        : in    natural);
        port(
            -- Local bus
            clk               : in    std_logic;
            clk_locked        : in    std_logic;
            rst               : in    std_logic; 
            lwrite            : in    std_logic;
            lads_l            : in    std_logic;
            lblast_l          : in    std_logic;
            lbe_l             : in    std_logic_vector(3 downto 0);
            la_i              : in    std_logic_vector(la_top downto 2);
            ld_i              : in    std_logic_vector(31 downto 0);
            ld_o              : out   std_logic_vector(31 downto 0);
            ld_oe_l           : out   std_logic_vector(31 downto 0);
            lbterm_l          : inout std_logic;
            lready_l          : inout std_logic; 
            fholda            : in    std_logic;
            -- General purpose clock
            mclk_i            : in    std_logic;
            -- Reference clock for IDELAY elements (might be unused)
            refclk_i          : in    std_logic;
            -- Memory banks (up to 16 supported by this design)
            ra0               : out   std_logic_vector(bank0.ra_width - 1 downto 0);
            rc0               : inout std_logic_vector(bank0.rc_width - 1 downto 0);
            rd0               : inout std_logic_vector(bank0.rd_width - 1 downto 0);
            ra1               : out   std_logic_vector(bank1.ra_width - 1 downto 0);
            rc1               : inout std_logic_vector(bank1.rc_width - 1 downto 0);
            rd1               : inout std_logic_vector(bank1.rd_width - 1 downto 0);
            ra2               : out   std_logic_vector(bank2.ra_width - 1 downto 0);
            rc2               : inout std_logic_vector(bank2.rc_width - 1 downto 0);
            rd2               : inout std_logic_vector(bank2.rd_width - 1 downto 0);
            ra3               : out   std_logic_vector(bank3.ra_width - 1 downto 0);
            rc3               : inout std_logic_vector(bank3.rc_width - 1 downto 0);
            rd3               : inout std_logic_vector(bank3.rd_width - 1 downto 0);
            ra4               : out   std_logic_vector(bank4.ra_width - 1 downto 0);
            rc4               : inout std_logic_vector(bank4.rc_width - 1 downto 0);
            rd4               : inout std_logic_vector(bank4.rd_width - 1 downto 0);
            ra5               : out   std_logic_vector(bank5.ra_width - 1 downto 0);
            rc5               : inout std_logic_vector(bank5.rc_width - 1 downto 0);
            rd5               : inout std_logic_vector(bank5.rd_width - 1 downto 0);
            ra6               : out   std_logic_vector(bank6.ra_width - 1 downto 0);
            rc6               : inout std_logic_vector(bank6.rc_width - 1 downto 0);
            rd6               : inout std_logic_vector(bank6.rd_width - 1 downto 0);
            ra7               : out   std_logic_vector(bank7.ra_width - 1 downto 0);
            rc7               : inout std_logic_vector(bank7.rc_width - 1 downto 0);
            rd7               : inout std_logic_vector(bank7.rd_width - 1 downto 0);
            ra8               : out   std_logic_vector(bank8.ra_width - 1 downto 0);
            rc8               : inout std_logic_vector(bank8.rc_width - 1 downto 0);
            rd8               : inout std_logic_vector(bank8.rd_width - 1 downto 0);
            ra9               : out   std_logic_vector(bank9.ra_width - 1 downto 0);
            rc9               : inout std_logic_vector(bank9.rc_width - 1 downto 0);
            rd9               : inout std_logic_vector(bank9.rd_width - 1 downto 0);
            ra10              : out   std_logic_vector(bank10.ra_width - 1 downto 0);
            rc10              : inout std_logic_vector(bank10.rc_width - 1 downto 0);
            rd10              : inout std_logic_vector(bank10.rd_width - 1 downto 0);
            ra11              : out   std_logic_vector(bank11.ra_width - 1 downto 0);
            rc11              : inout std_logic_vector(bank11.rc_width - 1 downto 0);
            rd11              : inout std_logic_vector(bank11.rd_width - 1 downto 0);
            ra12              : out   std_logic_vector(bank12.ra_width - 1 downto 0);
            rc12              : inout std_logic_vector(bank12.rc_width - 1 downto 0);
            rd12              : inout std_logic_vector(bank12.rd_width - 1 downto 0);
            ra13              : out   std_logic_vector(bank13.ra_width - 1 downto 0);
            rc13              : inout std_logic_vector(bank13.rc_width - 1 downto 0);
            rd13              : inout std_logic_vector(bank13.rd_width - 1 downto 0);
            ra14              : out   std_logic_vector(bank14.ra_width - 1 downto 0);
            rc14              : inout std_logic_vector(bank14.rc_width - 1 downto 0);
            rd14              : inout std_logic_vector(bank14.rd_width - 1 downto 0);
            ra15              : out   std_logic_vector(bank15.ra_width - 1 downto 0);
            rc15              : inout std_logic_vector(bank15.rc_width - 1 downto 0);
            rd15              : inout std_logic_vector(bank15.rd_width - 1 downto 0);
            ramclki           : in    std_logic_vector(num_ramclk - 1 downto 0);
            ramclko           : out   std_logic_vector(num_ramclk - 1 downto 0);
            scl_i             : in    std_logic;
            scl_o             : out   std_logic;
            sda_i             : in    std_logic;
            sda_o             : out   std_logic);
    end component;
    
    component lclk_dcm
        port(
            rst           : in    std_logic;
            refclk        : in    std_logic;
            lclk          : in    std_logic;
            clk           : out   std_logic;
            locked        : out   std_logic);
    end component;

    component BUFG
        port(
            I : in  std_logic;
            O : out std_logic);
    end component;

    component IBUFGDS
        port(
            I  : in  std_logic;
            IB : in  std_logic;
            O  : out std_logic);
    end component;

    --
    -- If the synthesizer replicates an asynchronous reset signal due high fanout,
    -- this can prevent flip-flops being mapped into IOBs. We set the maximum
    -- fanout for such nets to a high enough value that replication never occurs.
    --
    attribute MAX_FANOUT : string;
    attribute MAX_FANOUT of rst : signal is "1000000";

begin

    rst <= not lreset_l;

    ibufg_mclk : IBUFGDS
        port map(
            I  => mclk_p,
            IB => mclk_n,
            O  => mclk_ibufg);
    
    ibufg_refclk : IBUFGDS
        port map(
            I  => refclk_p,
            IB => refclk_n,
            O  => refclk_ibufg);
    
    bufg_refclk : BUFG
        port map(
            I  => refclk_ibufg,
            O  => refclk_bufg);
    
    lclk_dcm_0 : lclk_dcm
        port map(
            rst => rst,
            refclk => refclk_bufg,
            lclk => lclk,
            clk => clk,
            locked => clk_locked);

    gen_ld : for i in ld'range generate
        ld(i) <= ld_o(i) when ld_oe_l(i) = '0' else 'Z';
    end generate;

    memory_main_0 : memory_main
        generic map(
            la_top => 23,
            bank0 => bank0,
            bank1 => bank1,
            bank2 => bank2,
            bank3 => bank3,
            bank4 => bank4,
            bank5 => bank5,
            bank6 => bank6,
            bank7 => bank7,
            bank8 => bank8,
            bank9 => bank9,
            bank10 => bank10,
            bank11 => bank11,
            bank12 => bank12,
            bank13 => bank13,
            bank14 => bank14,
            bank15 => bank15,
            num_ramclk => num_ramclk)
        port map(
            clk => clk,
            clk_locked => clk_locked,
            rst => rst,
            lwrite => lwrite,
            lads_l => lads_l,
            lblast_l => lblast_l,
            lbe_l => lbe_l,
            la_i => la(23 downto 2),
            ld_i => ld,
            ld_o => ld_o,
            ld_oe_l => ld_oe_l,
            lbterm_l => lbterm_l,
            lready_l => lready_l,
            fholda => fholda,
            mclk_i => mclk_ibufg,
            refclk_i => refclk_bufg,
            ra0 => ra0,
            rc0 => rc0,
            rd0 => rd0,
            ra1 => ra1,
            rc1 => rc1,
            rd1 => rd1,
            ra2 => ra2,
            rc2 => rc2,
            rd2 => rd2,
            ra3 => ra3,
            rc3 => rc3,
            rd3 => rd3,
            ra4 => ra4,
            rc4 => rc4,
            rd4 => rd4,
            ra5 => ra5,
            rc5 => rc5,
            rd5 => rd5,
            ra6 => ra6,
            rc6 => rc6,
            rd6 => rd6,
            ra7 => ra7,
            rc7 => rc7,
            rd7 => rd7,
            ra8 => ra8,
            rc8 => rc8,
            rd8 => rd8,
            ra9 => ra9,
            rc9 => rc9,
            rd9 => rd9,
            ra10 => ra10,
            rc10 => rc10,
            rd10 => rd10,
            ra11 => ra11,
            rc11 => rc11,
            rd11 => rd11,
            ra12 => ra12,
            rc12 => rc12,
            rd12 => rd12,
            ra13 => ra13,
            rc13 => rc13,
            rd13 => rd13,
            ra14 => ra14,
            rc14 => rc14,
            rd14 => rd14,
            ra15 => ra15,
            rc15 => rc15,
            rd15 => rd15,
            ramclki => ramclki,
            ramclko => ramclko,
            scl_i => scl,
            scl_o => scl,
            sda_i => sda,
            sda_o => sda);

end architecture;
