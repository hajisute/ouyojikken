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
static const char *ng0 = "C:/Users/yuuya/git/ouyojikken/compare.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {5, 0};
static int ng8[] = {6, 0};



static void Always_49_0(char *t0)
{
    char t7[8];
    char t42[8];
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
    char *t43;

LAB0:    t1 = (t0 + 5200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5520);
    *((int *)t2) = 1;
    t3 = (t0 + 5232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t0 + 1640U);
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

LAB10:    xsi_set_current_line(59, ng0);

LAB13:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t3, 32, t2, 32);
    t4 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t13 = (t10 & t9);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(68, ng0);

LAB18:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng3)));
    t21 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 2, t20, 32, 1, t21, 32, 1);
    t34 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t34, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng3)));
    t21 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 2, t20, 32, 1, t21, 32, 1);
    t34 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t34, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng3)));
    t21 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 2, t20, 32, 1, t21, 32, 1);
    t34 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t34, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng3)));
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 2, t20, 32, 1, t21, 32, 1);
    t34 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t34, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng3)));
    t21 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 2, t20, 32, 1, t21, 32, 1);
    t34 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t34, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng3)));
    t21 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 2, t20, 32, 1, t21, 32, 1);
    t34 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t34, t7, 0, 0, 8, 0LL);

LAB16:
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

LAB9:    xsi_set_current_line(50, ng0);

LAB12:    xsi_set_current_line(52, ng0);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 8, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB11;

LAB14:    xsi_set_current_line(60, ng0);

LAB17:    xsi_set_current_line(61, ng0);
    t5 = (t0 + 2920U);
    t6 = *((char **)t5);
    t5 = (t0 + 2880U);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t20 = (t0 + 2880U);
    t21 = (t20 + 48U);
    t34 = *((char **)t21);
    t40 = ((char*)((ng2)));
    t41 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t42, 8, t6, t12, t34, 2, 2, t40, 32, 1, t41, 32, 1);
    t43 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t43, t42, 0, 0, 8, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng2)));
    t21 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 2, t20, 32, 1, t21, 32, 1);
    t34 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t34, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng2)));
    t21 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 2, t20, 32, 1, t21, 32, 1);
    t34 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t34, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng2)));
    t21 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 2, t20, 32, 1, t21, 32, 1);
    t34 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t34, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng2)));
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 2, t20, 32, 1, t21, 32, 1);
    t34 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t34, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng2)));
    t21 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 2, t20, 32, 1, t21, 32, 1);
    t34 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t34, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2760U);
    t3 = *((char **)t2);
    t2 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB16;

}


extern void work_m_00000000000226173205_0163017594_init()
{
	static char *pe[] = {(void *)Always_49_0};
	xsi_register_didat("work_m_00000000000226173205_0163017594", "isim/operation_test_v_isim_beh.exe.sim/work/m_00000000000226173205_0163017594.didat");
	xsi_register_executes(pe);
}
