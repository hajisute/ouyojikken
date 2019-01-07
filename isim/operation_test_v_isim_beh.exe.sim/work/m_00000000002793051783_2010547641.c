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
static const char *ng0 = "C:/Users/yuuya/git/ouyojikken/medianfilter.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {7, 0};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};
static int ng8[] = {4, 0};
static int ng9[] = {5, 0};
static int ng10[] = {6, 0};



static void Always_94_0(char *t0)
{
    char t7[8];
    char t42[8];
    char t43[8];
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
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    int t50;
    int t51;
    int t52;

LAB0:    t1 = (t0 + 4880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6688);
    *((int *)t2) = 1;
    t3 = (t0 + 4912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
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

LAB10:    xsi_set_current_line(102, ng0);

LAB21:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3080U);
    t3 = *((char **)t2);
    t2 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 1, t20, 32, 1);
    t21 = (t0 + 3800);
    t34 = (t0 + 3800);
    t40 = (t34 + 72U);
    t41 = *((char **)t40);
    t44 = (t0 + 3800);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t42, t43, t41, t46, 2, 1, t47, 32, 1);
    t48 = (t42 + 4);
    t8 = *((unsigned int *)t48);
    t25 = (!(t8));
    t49 = (t43 + 4);
    t9 = *((unsigned int *)t49);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 1, t20, 32, 1);
    t21 = (t0 + 3800);
    t34 = (t0 + 3800);
    t40 = (t34 + 72U);
    t41 = *((char **)t40);
    t44 = (t0 + 3800);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t42, t43, t41, t46, 2, 1, t47, 32, 1);
    t48 = (t42 + 4);
    t8 = *((unsigned int *)t48);
    t25 = (!(t8));
    t49 = (t43 + 4);
    t9 = *((unsigned int *)t49);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 1, t20, 32, 1);
    t21 = (t0 + 3800);
    t34 = (t0 + 3800);
    t40 = (t34 + 72U);
    t41 = *((char **)t40);
    t44 = (t0 + 3800);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t42, t43, t41, t46, 2, 1, t47, 32, 1);
    t48 = (t42 + 4);
    t8 = *((unsigned int *)t48);
    t25 = (!(t8));
    t49 = (t43 + 4);
    t9 = *((unsigned int *)t49);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 1, t20, 32, 1);
    t21 = (t0 + 3800);
    t34 = (t0 + 3800);
    t40 = (t34 + 72U);
    t41 = *((char **)t40);
    t44 = (t0 + 3800);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t42, t43, t41, t46, 2, 1, t47, 32, 1);
    t48 = (t42 + 4);
    t8 = *((unsigned int *)t48);
    t25 = (!(t8));
    t49 = (t43 + 4);
    t9 = *((unsigned int *)t49);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 1, t20, 32, 1);
    t21 = (t0 + 3800);
    t34 = (t0 + 3800);
    t40 = (t34 + 72U);
    t41 = *((char **)t40);
    t44 = (t0 + 3800);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t42, t43, t41, t46, 2, 1, t47, 32, 1);
    t48 = (t42 + 4);
    t8 = *((unsigned int *)t48);
    t25 = (!(t8));
    t49 = (t43 + 4);
    t9 = *((unsigned int *)t49);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 1, t20, 32, 1);
    t21 = (t0 + 3800);
    t34 = (t0 + 3800);
    t40 = (t34 + 72U);
    t41 = *((char **)t40);
    t44 = (t0 + 3800);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t42, t43, t41, t46, 2, 1, t47, 32, 1);
    t48 = (t42 + 4);
    t8 = *((unsigned int *)t48);
    t25 = (!(t8));
    t49 = (t43 + 4);
    t9 = *((unsigned int *)t49);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 2880U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 2880U);
    t11 = (t6 + 48U);
    t12 = *((char **)t11);
    t20 = ((char*)((ng10)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t3, t5, t12, 2, 1, t20, 32, 1);
    t21 = (t0 + 3800);
    t34 = (t0 + 3800);
    t40 = (t34 + 72U);
    t41 = *((char **)t40);
    t44 = (t0 + 3800);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t42, t43, t41, t46, 2, 1, t47, 32, 1);
    t48 = (t42 + 4);
    t8 = *((unsigned int *)t48);
    t25 = (!(t8));
    t49 = (t43 + 4);
    t9 = *((unsigned int *)t49);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t0 + 3640);
    t4 = (t0 + 3640);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t11 = (t0 + 3640);
    t12 = (t11 + 64U);
    t20 = *((char **)t12);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t7, t42, t6, t20, 2, 1, t21, 32, 1);
    t34 = (t7 + 4);
    t8 = *((unsigned int *)t34);
    t25 = (!(t8));
    t40 = (t42 + 4);
    t9 = *((unsigned int *)t40);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 3640);
    t4 = (t0 + 3640);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t11 = (t0 + 3640);
    t12 = (t11 + 64U);
    t20 = *((char **)t12);
    t21 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t7, t42, t6, t20, 2, 1, t21, 32, 1);
    t34 = (t7 + 4);
    t8 = *((unsigned int *)t34);
    t25 = (!(t8));
    t40 = (t42 + 4);
    t9 = *((unsigned int *)t40);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 3640);
    t4 = (t0 + 3640);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t11 = (t0 + 3640);
    t12 = (t11 + 64U);
    t20 = *((char **)t12);
    t21 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t7, t42, t6, t20, 2, 1, t21, 32, 1);
    t34 = (t7 + 4);
    t8 = *((unsigned int *)t34);
    t25 = (!(t8));
    t40 = (t42 + 4);
    t9 = *((unsigned int *)t40);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 3640);
    t4 = (t0 + 3640);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t11 = (t0 + 3640);
    t12 = (t11 + 64U);
    t20 = *((char **)t12);
    t21 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t7, t42, t6, t20, 2, 1, t21, 32, 1);
    t34 = (t7 + 4);
    t8 = *((unsigned int *)t34);
    t25 = (!(t8));
    t40 = (t42 + 4);
    t9 = *((unsigned int *)t40);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2440U);
    t3 = *((char **)t2);
    t2 = (t0 + 3640);
    t4 = (t0 + 3640);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t11 = (t0 + 3640);
    t12 = (t11 + 64U);
    t20 = *((char **)t12);
    t21 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t7, t42, t6, t20, 2, 1, t21, 32, 1);
    t34 = (t7 + 4);
    t8 = *((unsigned int *)t34);
    t25 = (!(t8));
    t40 = (t42 + 4);
    t9 = *((unsigned int *)t40);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2600U);
    t3 = *((char **)t2);
    t2 = (t0 + 3640);
    t4 = (t0 + 3640);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t11 = (t0 + 3640);
    t12 = (t11 + 64U);
    t20 = *((char **)t12);
    t21 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t7, t42, t6, t20, 2, 1, t21, 32, 1);
    t34 = (t7 + 4);
    t8 = *((unsigned int *)t34);
    t25 = (!(t8));
    t40 = (t42 + 4);
    t9 = *((unsigned int *)t40);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2760U);
    t3 = *((char **)t2);
    t2 = (t0 + 3640);
    t4 = (t0 + 3640);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t11 = (t0 + 3640);
    t12 = (t11 + 64U);
    t20 = *((char **)t12);
    t21 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t7, t42, t6, t20, 2, 1, t21, 32, 1);
    t34 = (t7 + 4);
    t8 = *((unsigned int *)t34);
    t25 = (!(t8));
    t40 = (t42 + 4);
    t9 = *((unsigned int *)t40);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB48;

LAB49:
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

LAB9:    xsi_set_current_line(95, ng0);

LAB12:    xsi_set_current_line(96, ng0);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 8, 0LL);
    xsi_set_current_line(98, ng0);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB13:    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t5, 32);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t13 = (t10 & t9);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB14;

LAB15:    goto LAB11;

LAB14:    xsi_set_current_line(98, ng0);

LAB16:    xsi_set_current_line(99, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 3800);
    t20 = (t0 + 3800);
    t21 = (t20 + 72U);
    t34 = *((char **)t21);
    t40 = (t0 + 3800);
    t41 = (t40 + 64U);
    t44 = *((char **)t41);
    t45 = (t0 + 3960);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    xsi_vlog_generic_convert_array_indices(t42, t43, t34, t44, 2, 1, t47, 32, 1);
    t48 = (t42 + 4);
    t15 = *((unsigned int *)t48);
    t25 = (!(t15));
    t49 = (t43 + 4);
    t16 = *((unsigned int *)t49);
    t29 = (!(t16));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3640);
    t4 = (t0 + 3640);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t11 = (t0 + 3640);
    t12 = (t11 + 64U);
    t20 = *((char **)t12);
    t21 = (t0 + 3960);
    t34 = (t21 + 56U);
    t40 = *((char **)t34);
    xsi_vlog_generic_convert_array_indices(t7, t42, t6, t20, 2, 1, t40, 32, 1);
    t41 = (t7 + 4);
    t8 = *((unsigned int *)t41);
    t25 = (!(t8));
    t44 = (t42 + 4);
    t9 = *((unsigned int *)t44);
    t29 = (!(t9));
    t50 = (t25 && t29);
    if (t50 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 3960);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB13;

LAB17:    t17 = *((unsigned int *)t42);
    t18 = *((unsigned int *)t43);
    t51 = (t17 - t18);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t43), t52, 0LL);
    goto LAB18;

LAB19:    t10 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t42);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t42), t52, 0LL);
    goto LAB20;

LAB22:    t10 = *((unsigned int *)t42);
    t13 = *((unsigned int *)t43);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t21, t7, 0, *((unsigned int *)t43), t52, 0LL);
    goto LAB23;

LAB24:    t10 = *((unsigned int *)t42);
    t13 = *((unsigned int *)t43);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t21, t7, 0, *((unsigned int *)t43), t52, 0LL);
    goto LAB25;

LAB26:    t10 = *((unsigned int *)t42);
    t13 = *((unsigned int *)t43);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t21, t7, 0, *((unsigned int *)t43), t52, 0LL);
    goto LAB27;

LAB28:    t10 = *((unsigned int *)t42);
    t13 = *((unsigned int *)t43);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t21, t7, 0, *((unsigned int *)t43), t52, 0LL);
    goto LAB29;

LAB30:    t10 = *((unsigned int *)t42);
    t13 = *((unsigned int *)t43);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t21, t7, 0, *((unsigned int *)t43), t52, 0LL);
    goto LAB31;

LAB32:    t10 = *((unsigned int *)t42);
    t13 = *((unsigned int *)t43);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t21, t7, 0, *((unsigned int *)t43), t52, 0LL);
    goto LAB33;

LAB34:    t10 = *((unsigned int *)t42);
    t13 = *((unsigned int *)t43);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t21, t7, 0, *((unsigned int *)t43), t52, 0LL);
    goto LAB35;

LAB36:    t10 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t42);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t42), t52, 0LL);
    goto LAB37;

LAB38:    t10 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t42);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t42), t52, 0LL);
    goto LAB39;

LAB40:    t10 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t42);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t42), t52, 0LL);
    goto LAB41;

LAB42:    t10 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t42);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t42), t52, 0LL);
    goto LAB43;

LAB44:    t10 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t42);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t42), t52, 0LL);
    goto LAB45;

LAB46:    t10 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t42);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t42), t52, 0LL);
    goto LAB47;

LAB48:    t10 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t42);
    t51 = (t10 - t13);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t42), t52, 0LL);
    goto LAB49;

}

static void Cont_122_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 5128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3800);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3800);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 6864);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 255U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 8, 15);
    t26 = (t0 + 6704);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_123_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 5376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3800);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3800);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 6928);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 255U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 16, 23);
    t26 = (t0 + 6720);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_124_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 5624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3800);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3800);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 6992);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 255U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 24, 31);
    t26 = (t0 + 6736);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_125_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 5872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3800);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3800);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 7056);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 255U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 32, 39);
    t26 = (t0 + 6752);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_126_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 6120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3800);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3800);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng8)));
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 7120);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 255U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 40, 47);
    t26 = (t0 + 6768);
    *((int *)t26) = 1;

LAB1:    return;
}

static void Cont_127_6(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 6368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3800);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3800);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 7184);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 255U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 48, 55);
    t26 = (t0 + 6784);
    *((int *)t26) = 1;

LAB1:    return;
}


extern void work_m_00000000002793051783_2010547641_init()
{
	static char *pe[] = {(void *)Always_94_0,(void *)Cont_122_1,(void *)Cont_123_2,(void *)Cont_124_3,(void *)Cont_125_4,(void *)Cont_126_5,(void *)Cont_127_6};
	xsi_register_didat("work_m_00000000002793051783_2010547641", "isim/operation_test_v_isim_beh.exe.sim/work/m_00000000002793051783_2010547641.didat");
	xsi_register_executes(pe);
}
