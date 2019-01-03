--
-- memory_banks-xrc4sx.vhd - Memory banks for ADM-XRC-4SX
--
-- (C) Copyright Alpha Data 2007-2008
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

library work;
use work.memif.all;
use work.memory_common.all;

-- synopsys translate_off
library unisim;
use unisim.vcomponents.all;
-- synopsys translate_on

entity memory_banks is
    generic(
        addr_width    : in    natural;
        data_width    : in    natural;
        bank0         : in    bank_t;
        bank1         : in    bank_t;
        bank2         : in    bank_t;
        bank3         : in    bank_t;
        bank4         : in    bank_t;
        bank5         : in    bank_t;
        bank6         : in    bank_t;
        bank7         : in    bank_t;
        bank8         : in    bank_t;
        bank9         : in    bank_t;
        bank10        : in    bank_t;
        bank11        : in    bank_t;
        bank12        : in    bank_t;
        bank13        : in    bank_t;
        bank14        : in    bank_t;
        bank15        : in    bank_t;
        num_ramclk    : in    natural);
    port(
        rst           : in    std_logic;
        clk           : in    std_logic;
        mclk_i        : in    std_logic;
        refclk_i      : in    std_logic; -- 200MHz clock from oscillator
        -- To/from local bus
        sel_bank_1h   : in    std_logic_vector(15 downto 0);
        bank_reg      : in    std_logic_vector(3 downto 0);
        mode_reg      : in    std_logic_vector(511 downto 0);
        mem_ce        : in    std_logic;
        mem_term      : in    std_logic;
        mem_cw        : in    std_logic;
        mem_adv       : in    std_logic;
        mem_wr        : in    std_logic;
        mem_a         : in    std_logic_vector(addr_width - 1 downto 0);
        mem_d         : in    std_logic_vector(data_width - 1 downto 0);
        mem_be        : in    std_logic_vector(data_width / 8 - 1 downto 0);
        mem_q         : out   std_logic_vector(data_width - 1 downto 0);
        mem_wf        : out   std_logic;
        mem_wpf       : out   std_logic;
        mem_re        : out   std_logic;
        mem_rpe       : out   std_logic;
        locked        : out   std_logic_vector(7 downto 0);
        trained       : out   std_logic_vector(15 downto 0);
        -- To/from user application
        user_req      : in    control_vector_t(max_num_bank - 1 downto 0);
        user_ce       : in    control_vector_t(max_num_bank - 1 downto 0);
        user_w        : in    control_vector_t(max_num_bank - 1 downto 0);
        user_a        : in    address_vector_t(max_num_bank - 1 downto 0);
        user_tag      : in    tag_vector_t(max_num_bank - 1 downto 0);
        user_d        : in    data_vector_t(max_num_bank - 1 downto 0);
        user_be       : in    be_vector_t(max_num_bank - 1 downto 0);
        user_rst      : out   std_logic;
        user_clk      : out   std_logic;
        user_valid    : out   control_vector_t(max_num_bank - 1 downto 0);
        user_q        : out   data_vector_t(max_num_bank - 1 downto 0);
        user_qtag     : out   tag_vector_t(max_num_bank - 1 downto 0);
        user_ready    : out   control_vector_t(max_num_bank - 1 downto 0);
        -- To/from FPGA memory pins
        ra0           : out   std_logic_vector(bank0.ra_width - 1 downto 0);
        rc0           : inout std_logic_vector(bank0.rc_width - 1 downto 0);
        rd0           : inout std_logic_vector(bank0.rd_width - 1 downto 0);
        ra1           : out   std_logic_vector(bank1.ra_width - 1 downto 0);
        rc1           : inout std_logic_vector(bank1.rc_width - 1 downto 0);
        rd1           : inout std_logic_vector(bank1.rd_width - 1 downto 0);
        ra2           : out   std_logic_vector(bank2.ra_width - 1 downto 0);
        rc2           : inout std_logic_vector(bank2.rc_width - 1 downto 0);
        rd2           : inout std_logic_vector(bank2.rd_width - 1 downto 0);
        ra3           : out   std_logic_vector(bank3.ra_width - 1 downto 0);
        rc3           : inout std_logic_vector(bank3.rc_width - 1 downto 0);
        rd3           : inout std_logic_vector(bank3.rd_width - 1 downto 0);
        ra4           : out   std_logic_vector(bank4.ra_width - 1 downto 0);
        rc4           : inout std_logic_vector(bank4.rc_width - 1 downto 0);
        rd4           : inout std_logic_vector(bank4.rd_width - 1 downto 0);
        ra5           : out   std_logic_vector(bank5.ra_width - 1 downto 0);
        rc5           : inout std_logic_vector(bank5.rc_width - 1 downto 0);
        rd5           : inout std_logic_vector(bank5.rd_width - 1 downto 0);
        ra6           : out   std_logic_vector(bank6.ra_width - 1 downto 0);
        rc6           : inout std_logic_vector(bank6.rc_width - 1 downto 0);
        rd6           : inout std_logic_vector(bank6.rd_width - 1 downto 0);
        ra7           : out   std_logic_vector(bank7.ra_width - 1 downto 0);
        rc7           : inout std_logic_vector(bank7.rc_width - 1 downto 0);
        rd7           : inout std_logic_vector(bank7.rd_width - 1 downto 0);
        ra8           : out   std_logic_vector(bank8.ra_width - 1 downto 0);
        rc8           : inout std_logic_vector(bank8.rc_width - 1 downto 0);
        rd8           : inout std_logic_vector(bank8.rd_width - 1 downto 0);
        ra9           : out   std_logic_vector(bank9.ra_width - 1 downto 0);
        rc9           : inout std_logic_vector(bank9.rc_width - 1 downto 0);
        rd9           : inout std_logic_vector(bank9.rd_width - 1 downto 0);
        ra10          : out   std_logic_vector(bank10.ra_width - 1 downto 0);
        rc10          : inout std_logic_vector(bank10.rc_width - 1 downto 0);
        rd10          : inout std_logic_vector(bank10.rd_width - 1 downto 0);
        ra11          : out   std_logic_vector(bank11.ra_width - 1 downto 0);
        rc11          : inout std_logic_vector(bank11.rc_width - 1 downto 0);
        rd11          : inout std_logic_vector(bank11.rd_width - 1 downto 0);
        ra12          : out   std_logic_vector(bank12.ra_width - 1 downto 0);
        rc12          : inout std_logic_vector(bank12.rc_width - 1 downto 0);
        rd12          : inout std_logic_vector(bank12.rd_width - 1 downto 0);
        ra13          : out   std_logic_vector(bank13.ra_width - 1 downto 0);
        rc13          : inout std_logic_vector(bank13.rc_width - 1 downto 0);
        rd13          : inout std_logic_vector(bank13.rd_width - 1 downto 0);
        ra14          : out   std_logic_vector(bank14.ra_width - 1 downto 0);
        rc14          : inout std_logic_vector(bank14.rc_width - 1 downto 0);
        rd14          : inout std_logic_vector(bank14.rd_width - 1 downto 0);
        ra15          : out   std_logic_vector(bank15.ra_width - 1 downto 0);
        rc15          : inout std_logic_vector(bank15.rc_width - 1 downto 0);
        rd15          : inout std_logic_vector(bank15.rd_width - 1 downto 0);
        ramclki       : in    std_logic_vector(num_ramclk - 1 downto 0);
        ramclko       : out   std_logic_vector(num_ramclk - 1 downto 0));
end entity;

architecture mixed of memory_banks is

    constant mux_order : natural := 0;
    constant num_sram_bank : natural := 4;
    constant num_bank : natural := num_sram_bank;

    constant port_width : natural := 32;
    constant port_be_width : natural := port_width / 8;
    constant port_addr_width : natural := addr_width - mux_order;

    signal logic0, logic1 : std_logic;

    signal memclk0 : std_logic;
    signal memrst : std_logic;

    signal rep_be : std_logic_vector(port_be_width - 1 downto 0);
    signal rep_d : std_logic_vector(port_width - 1 downto 0);
    signal rep_valid : std_logic;
    signal rep_final : std_logic;

    constant tag_width : natural := 2;
    subtype tag_t is std_logic_vector(tag_width - 1 downto 0);
    type tag_vector_t is array(natural range <>) of tag_t;

    signal tag_base : std_logic_vector(tag_width - 1 downto 0);
    signal tag_mask : std_logic_vector(tag_width - 1 downto 0);

    type port_pq_t is array(0 to num_bank - 1) of std_logic_vector(port_width - 1 downto 0);
    signal port_pce : std_logic_vector(num_bank - 1 downto 0);
    signal port_pcw : std_logic_vector(num_bank - 1 downto 0);
    signal port_pterm : std_logic_vector(num_bank - 1 downto 0);
    signal port_padv : std_logic_vector(num_bank - 1 downto 0);
    signal port_pwr : std_logic_vector(num_bank - 1 downto 0);
    signal port_pq : port_pq_t;
    signal port_pwf : std_logic_vector(num_bank - 1 downto 0);
    signal port_pwpf : std_logic_vector(num_bank - 1 downto 0);
    signal port_pre : std_logic_vector(num_bank - 1 downto 0);
    signal port_prpe : std_logic_vector(num_bank - 1 downto 0);

    signal port_plast : std_logic;
    signal port_pq_muxed : std_logic_vector(port_width - 1 downto 0);

    type port_sa_t is array(0 to num_bank - 1) of std_logic_vector(port_addr_width - 1 downto 0);
    type port_sd_t is array(0 to num_bank - 1) of std_logic_vector(port_width - 1 downto 0);
    type port_sbe_t is array(0 to num_bank - 1) of std_logic_vector(port_be_width - 1 downto 0);
    type port_stag_t is array(0 to num_bank - 1) of std_logic_vector(tag_width - 1 downto 0);
    signal port_sce : std_logic_vector(num_bank - 1 downto 0);
    signal port_sw : std_logic_vector(num_bank - 1 downto 0);
    signal port_stag : port_stag_t;
    signal port_sa : port_sa_t;
    signal port_sd : port_sd_t;
    signal port_sbe : port_sbe_t;
    signal port_sq : port_sd_t;
    signal port_sqtag : port_stag_t;
    signal port_svalid : std_logic_vector(num_bank - 1 downto 0);
    signal port_sready : std_logic_vector(num_bank - 1 downto 0);
    signal port_sreq : std_logic_vector(num_bank - 1 downto 0);

    signal arb_ce : std_logic_vector(num_bank - 1 downto 0);
    signal arb_w : std_logic_vector(num_bank - 1 downto 0);
    signal arb_tag : port_stag_t;
    signal arb_a : port_sa_t;
    signal arb_d : port_sd_t;
    signal arb_be : port_sbe_t;
    signal arb_q : port_sd_t;
    signal arb_qtag : port_stag_t;
    signal arb_valid : std_logic_vector(num_bank - 1 downto 0);
    signal arb_ready : std_logic_vector(num_bank - 1 downto 0);

    component memclk
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
    end component;

    component IOBUF
	port(
            O : out   std_logic;
            IO: inout std_logic;
            I : in    std_logic;
            T : in    std_logic);
    end component;

    component OBUFT
	port(
            O : out   std_logic;
            I : in    std_logic;
            T : in    std_logic);
    end component;

begin

    logic0 <= '0';
    logic1 <= '1';

    mem_wf <= OR_reduce(sel_bank_1h(num_bank - 1 downto 0) and port_pwf);
    mem_wpf <= OR_reduce(sel_bank_1h(num_bank - 1 downto 0) and port_pwpf);
    mem_re <= OR_reduce(sel_bank_1h(num_bank - 1 downto 0) and port_pre);
    mem_rpe <= OR_reduce(sel_bank_1h(num_bank - 1 downto 0) and port_prpe);

    user_rst <= memrst;
    user_clk <= memclk0;

    locked(7 downto 2) <= (others => '0');

    trained(15 downto 4) <= (others => '0'); -- unused memory banks

    --
    -- Instantiate logic to generate memory clocks
    --

    memclk_0 : memclk
        generic map(
            num_clock => num_ramclk)
        port map(
            rst => rst,
            mclk_i => mclk_i,
            memclk0 => memclk0,
            ramclki => ramclki,
            ramclko => ramclko,
            locked => locked(1 downto 0),
            memrst => memrst);

    --
    -- There is no outbound data replicator here, since the
    -- width of the local bus data is the same as the width of
    -- a ZBT SRAM port on the ADM-XRC-4SX.
    --

    rep_d <= mem_d;
    rep_be <= mem_be;
    rep_valid <= mem_wr;
    rep_final <= mem_term;

    --
    -- Select data from selected bank
    --

    gen_port_pq_muxed : process(
        port_pq,
        sel_bank_1h)
        variable x : std_logic_vector(port_width - 1 downto 0);
    begin
        x := (others => '0');
        for i in 0 to num_bank - 1 loop
            if sel_bank_1h(i) = '1' then
                x := x or port_pq(i);
            end if;
        end loop;
        port_pq_muxed <= x;
    end process;

    --
    -- There is no inbound data multiplexor here, since the
    -- width of the local bus data is the same as the width of
    -- a ZBT SRAM port on the ADM-XRC-II.
    --

    mem_q <= port_pq_muxed;

    --
    -- Tags used by local bus to memory interface are "00" and "01", leaving
    -- "10" and "11" spare.
    --

    tag_base <= EXT("00", tag_width);
    tag_mask <= EXT("01", tag_width);

    --
    -- Instantiate 'async_port' components for memory banks.
    --
    -- These instances decouple the local bus clock domain from the
    -- memory interface clock domain.
    --

    gen_async_ports : for i in 0 to num_bank - 1 generate
        port_pce(i) <= sel_bank_1h(i) and mem_ce;
        port_pcw(i) <= mem_cw;
        port_pterm(i) <= sel_bank_1h(i) and rep_final;
        port_padv(i) <= sel_bank_1h(i) and mem_adv;
        port_pwr(i) <= sel_bank_1h(i) and rep_valid;

        async_port_0 : async_port
            generic map(
                family => family_virtex4,
                order => 5,
                iwpfl => 3,
                orpel => 2,
                owpfl => 8,
                addr_width => port_addr_width,
                data_width => port_width,
                tag_width => tag_width)
            port map(
                rst => memrst,
                pclk => clk,
                psr => logic0,
                pce => port_pce(i),
                pcw => port_pcw(i),
                pterm => port_pterm(i),
                padv => port_padv(i),
                pwr => port_pwr(i),
                pa => mem_a(addr_width - 1 downto mux_order),
                pd => rep_d,
                pbe => rep_be,
                pq => port_pq(i),
                pwf => port_pwf(i),
                pwpf => port_pwpf(i),
                pre => port_pre(i),
                prpe => port_prpe(i),
                sclk => memclk0,
                sce => port_sce(i),
                sw => port_sw(i),
                stag => port_stag(i),
                sa => port_sa(i),
                sd => port_sd(i),
                sbe => port_sbe(i),
                sq => port_sq(i),
                sqtag => port_sqtag(i),
                svalid => port_svalid(i),
                sready => port_sready(i),
                sreq => port_sreq(i),
                tag_base => tag_base,
                tag_mask => tag_mask);
    end generate;

    --
    -- Arbitrate between the two clients that require access to the memory banks:
    --
    --   1. Local bus interface
    --   2. Matcher
    --
    -- The local bus interface is given priority, because PCI/PCI-X transfers targetting
    -- memory banks may time out if timely access to the memory is not granted.
    --

    gen_arbiters : for i in 0 to num_bank - 1 generate
        U0 : arbiter_2
            generic map(
                registered => true,
                ready_delay => 1,
                latency => 16,
                unfair => true,
                bias => 0,
                a_width => port_addr_width,
                d_width => port_width,
                tag_width => tag_width)
            port map(
                rst => memrst,
                clk => memclk0,
                sr => logic0,
                ce => arb_ce(i),
                w => arb_w(i),
                tag => arb_tag(i),
                a => arb_a(i),
                d => arb_d(i),
                be => arb_be(i),
                q => arb_q(i),
                qtag => arb_qtag(i),
                valid => arb_valid(i),
                ready => arb_ready(i),
                req0 => port_sreq(i),
                ce0 => port_sce(i),
                w0 => port_sw(i),
                tag0 => port_stag(i),
                a0 => port_sa(i),
                d0 => port_sd(i),
                be0 => port_sbe(i),
                q0 => port_sq(i),
                qtag0 => port_sqtag(i),
                valid0 => port_svalid(i),
                ready0 => port_sready(i),
                req1 => user_req(i),
                ce1 => user_ce(i),
                w1 => user_w(i),
                tag1 => user_tag(i),
                a1 => user_a(i)(port_addr_width - 1 downto 0),
                d1 => user_d(i)(port_width - 1 downto 0),
                be1 => user_be(i)(port_be_width - 1 downto 0),
                q1 => user_q(i)(port_width - 1 downto 0),
                qtag1 => user_qtag(i),
                valid1 => user_valid(i),
                ready1 => user_ready(i));
    end generate;

    --
    -- Instantiate ZBT SRAM ports
    --

    sram_port_0 : zbtsram_port
        generic map(
            pinout => zbtsram_pinout_admxrc4sx,
            ra_width => bank0.ra_width,
            rc_width => bank0.rc_width,
            rd_width => bank0.rd_width,
            a_width => port_addr_width,
            d_width => port_width,
            tag_width => tag_width)
        port map(
            clk0 => memclk0,
            rst => memrst,
            sr => logic0,
            ce => arb_ce(0),
            w => arb_w(0),
            tag => arb_tag(0),
            a => arb_a(0),
            d => arb_d(0),
            be => arb_be(0),
            q => arb_q(0),
            qtag => arb_qtag(0),
            valid => arb_valid(0),
            ready => arb_ready(0),
            pipeline => mode_reg(32 * 0),
            trained => trained(0),
            ra => ra0,
            rc => rc0,
            rd => rd0);

    sram_port_1 : zbtsram_port
        generic map(
            pinout => zbtsram_pinout_admxrc4sx,
            ra_width => bank1.ra_width,
            rc_width => bank1.rc_width,
            rd_width => bank1.rd_width,
            a_width => port_addr_width,
            d_width => port_width,
            tag_width => tag_width)
        port map(
            clk0 => memclk0,
            rst => memrst,
            sr => logic0,
            ce => arb_ce(1),
            w => arb_w(1),
            tag => arb_tag(1),
            a => arb_a(1),
            d => arb_d(1),
            be => arb_be(1),
            q => arb_q(1),
            qtag => arb_qtag(1),
            valid => arb_valid(1),
            ready => arb_ready(1),
            pipeline => mode_reg(32 * 1),
            trained => trained(1),
            ra => ra1,
            rc => rc1,
            rd => rd1);

    sram_port_2 : zbtsram_port
        generic map(
            pinout => zbtsram_pinout_admxrc4sx,
            ra_width => bank2.ra_width,
            rc_width => bank2.rc_width,
            rd_width => bank2.rd_width,
            a_width => port_addr_width,
            d_width => port_width,
            tag_width => tag_width)
        port map(
            clk0 => memclk0,
            rst => memrst,
            sr => logic0,
            ce => arb_ce(2),
            w => arb_w(2),
            tag => arb_tag(2),
            a => arb_a(2),
            d => arb_d(2),
            be => arb_be(2),
            q => arb_q(2),
            qtag => arb_qtag(2),
            valid => arb_valid(2),
            ready => arb_ready(2),
            pipeline => mode_reg(32 * 2),
            trained => trained(2),
            ra => ra2,
            rc => rc2,
            rd => rd2);

    sram_port_3 : zbtsram_port
        generic map(
            pinout => zbtsram_pinout_admxrc4sx,
            ra_width => bank3.ra_width,
            rc_width => bank3.rc_width,
            rd_width => bank3.rd_width,
            a_width => port_addr_width,
            d_width => port_width,
            tag_width => tag_width)
        port map(
            clk0 => memclk0,
            rst => memrst,
            sr => logic0,
            ce => arb_ce(3),
            w => arb_w(3),
            tag => arb_tag(3),
            a => arb_a(3),
            d => arb_d(3),
            be => arb_be(3),
            q => arb_q(3),
            qtag => arb_qtag(3),
            valid => arb_valid(3),
            ready => arb_ready(3),
            pipeline => mode_reg(32 * 3),
            trained => trained(3),
            ra => ra3,
            rc => rc3,
            rd => rd3);

    --
    -- Banks 4-15 are not present/used.
    --

    ra4 <= (others => 'Z');
    rc4 <= (others => 'Z');
    rd4 <= (others => 'Z');
    ra5 <= (others => 'Z');
    rc5 <= (others => 'Z');
    rd5 <= (others => 'Z');
    ra6 <= (others => 'Z');
    rc6 <= (others => 'Z');
    rd6 <= (others => 'Z');
    ra7 <= (others => 'Z');
    rc7 <= (others => 'Z');
    rd7 <= (others => 'Z');
    ra8 <= (others => 'Z');
    rc8 <= (others => 'Z');
    rd8 <= (others => 'Z');
    ra9 <= (others => 'Z');
    rc9 <= (others => 'Z');
    rd9 <= (others => 'Z');
    ra10 <= (others => 'Z');
    rc10 <= (others => 'Z');
    rd10 <= (others => 'Z');
    ra11 <= (others => 'Z');
    rc11 <= (others => 'Z');
    rd11 <= (others => 'Z');
    ra12 <= (others => 'Z');
    rc12 <= (others => 'Z');
    rd12 <= (others => 'Z');
    ra13 <= (others => 'Z');
    rc13 <= (others => 'Z');
    rd13 <= (others => 'Z');
    ra14 <= (others => 'Z');
    rc14 <= (others => 'Z');
    rd14 <= (others => 'Z');
    ra15 <= (others => 'Z');
    rc15 <= (others => 'Z');
    rd15 <= (others => 'Z');

end mixed;
