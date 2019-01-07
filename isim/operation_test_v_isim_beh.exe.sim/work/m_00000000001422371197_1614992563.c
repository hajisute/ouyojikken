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
static const char *ng0 = "C:/Users/yuuya/git/ouyojikken/Queue.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {2, 0};



static void Always_48_0(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;

LAB0:    t1 = (t0 + 3552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3872);
    *((int *)t2) = 1;
    t3 = (t0 + 3584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(55, ng0);

LAB16:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2632);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng1)));
    t18 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t13, 2, t4, ((int*)(t12)), 2, t14, 32, 1, t18, 32, 1, 1);
    t19 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 2);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 65535U);
    t26 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t26 & 65535U);
    t12 = (t0 + 1592U);
    t14 = *((char **)t12);
    xsi_vlogtype_concat(t13, 18, 18, 2U, t14, 2, t15, 16);
    t12 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 18, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    xsi_set_current_line(51, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2472);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    t5 = (t13 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(51, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t12 = ((char*)((ng2)));
    t14 = (t0 + 2632);
    t18 = (t0 + 2632);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2472);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng3)));
    xsi_vlog_convert_indexed_partindices(t15, t16, t17, ((int*)(t20)), 2, t23, 32, 1, t24, 32, 1, 1);
    t25 = (t15 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t16 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    t32 = (t17 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t11, 32);
    t5 = (t0 + 2472);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t36 = *((unsigned int *)t17);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t16);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, t37, *((unsigned int *)t16), t41, 0LL);
    goto LAB15;

}


extern void work_m_00000000001422371197_1614992563_init()
{
	static char *pe[] = {(void *)Always_48_0};
	xsi_register_didat("work_m_00000000001422371197_1614992563", "isim/operation_test_v_isim_beh.exe.sim/work/m_00000000001422371197_1614992563.didat");
	xsi_register_executes(pe);
}
