/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/yuuya/Documents/workspace/AppLab/fpga-filter-hardware-20181204/sobelfilter.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {2, 0};



static void Always_75_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 7304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 7624);
    *((int *)t2) = 1;
    t3 = (t0 + 7336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t0 + 1504U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t34 = (t7 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t7);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(96, ng0);

LAB13:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 2624U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 9, t3, 8, t4, 8);
    t2 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t2, t7, 0, 0, 9, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2144U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t2, 32, t4, 8);
    t3 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t3, t7, 0, 0, 9, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t0 + 2944U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 9, t3, 8, t4, 8);
    t2 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t2, t7, 0, 0, 9, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2464U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t2, 32, t4, 8);
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t7, 0, 0, 9, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 1984U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 9, t3, 8, t4, 8);
    t2 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t2, t7, 0, 0, 9, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1824U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t2, 32, t4, 8);
    t3 = (t0 + 5264);
    xsi_vlogvar_wait_assign_value(t3, t7, 0, 0, 9, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2624U);
    t3 = *((char **)t2);
    t2 = (t0 + 2944U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 9, t3, 8, t4, 8);
    t2 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t2, t7, 0, 0, 9, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2784U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t2, 32, t4, 8);
    t3 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t3, t7, 0, 0, 9, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4144);
    t6 = (t5 + 56U);
    t11 = *((char **)t6);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 10, t4, 9, t11, 9);
    t12 = (t0 + 4624);
    xsi_vlogvar_wait_assign_value(t12, t7, 0, 0, 10, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4464);
    t6 = (t5 + 56U);
    t11 = *((char **)t6);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 10, t4, 9, t11, 9);
    t12 = (t0 + 4784);
    xsi_vlogvar_wait_assign_value(t12, t7, 0, 0, 10, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5264);
    t6 = (t5 + 56U);
    t11 = *((char **)t6);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 10, t4, 9, t11, 9);
    t12 = (t0 + 5744);
    xsi_vlogvar_wait_assign_value(t12, t7, 0, 0, 10, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5584);
    t6 = (t5 + 56U);
    t11 = *((char **)t6);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 10, t4, 9, t11, 9);
    t12 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t12, t7, 0, 0, 10, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4784);
    t6 = (t5 + 56U);
    t11 = *((char **)t6);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 11, t4, 10, t11, 10);
    t12 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t12, t7, 0, 0, 11, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5904);
    t6 = (t5 + 56U);
    t11 = *((char **)t6);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 11, t4, 10, t11, 10);
    t12 = (t0 + 6064);
    xsi_vlogvar_wait_assign_value(t12, t7, 0, 0, 11, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_rshift(t7, 10, t3, 10, t2, 32);
    t4 = (t0 + 6224);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3264U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_rshift(t7, 10, t3, 10, t2, 32);
    t4 = (t0 + 6384);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3424U);
    t3 = *((char **)t2);
    t2 = (t0 + 3824);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB11:    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB8;

LAB9:    xsi_set_current_line(76, ng0);

LAB12:    xsi_set_current_line(78, ng0);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 3824);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 8, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4304);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4624);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4784);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4944);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5424);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB11;

}


extern void work_m_00000000001435782759_0872850489_init()
{
	static char *pe[] = {(void *)Always_75_0};
	xsi_register_didat("work_m_00000000001435782759_0872850489", "isim/operation_test_v_isim_beh.exe.sim/work/m_00000000001435782759_0872850489.didat");
	xsi_register_executes(pe);
}
