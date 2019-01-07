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
static const char *ng0 = "C:/Users/yuuya/git/ouyojikken/abs.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};



static void Always_31_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t17[8];
    char t42[8];
    char t55[8];
    char t62[8];
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
    unsigned int t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;

LAB0:    t1 = (t0 + 2824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3144);
    *((int *)t2) = 1;
    t3 = (t0 + 2856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(34, ng0);

LAB10:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 10);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 10);
    t16 = (t10 & 1);
    *((unsigned int *)t2) = t16;
    t5 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t11 = (t15 + 4);
    t12 = (t5 + 4);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t5);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t12);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB14;

LAB11:    if (t27 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t17) = 1;

LAB14:    memset(t14, 0, 8);
    t31 = (t17 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t17);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t31) != 0)
        goto LAB17;

LAB18:    t38 = (t14 + 4);
    t39 = *((unsigned int *)t14);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB19;

LAB20:    t56 = *((unsigned int *)t14);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t38) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t14) > 0)
        goto LAB25;

LAB26:    memcpy(t13, t62, 8);

LAB27:    t60 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t60, t13, 0, 0, 10, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 10, 0LL);
    goto LAB8;

LAB13:    t30 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB17:    t37 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB18;

LAB19:    t43 = (t0 + 1184U);
    t44 = *((char **)t43);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t45 = (t44 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    *((unsigned int *)t42) = t47;
    *((unsigned int *)t43) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB29;

LAB28:    t52 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t52 & 4294967295U);
    t53 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t53 & 4294967295U);
    t54 = ((char*)((ng3)));
    memset(t55, 0, 8);
    xsi_vlog_unsigned_add(t55, 32, t42, 32, t54, 32);
    goto LAB20;

LAB21:    t60 = (t0 + 1184U);
    t61 = *((char **)t60);
    memcpy(t62, t61, 8);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t13, 32, t55, 32, t62, 32);
    goto LAB27;

LAB25:    memcpy(t13, t55, 8);
    goto LAB27;

LAB29:    t48 = *((unsigned int *)t42);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t42) = (t48 | t49);
    t50 = *((unsigned int *)t43);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t43) = (t50 | t51);
    goto LAB28;

}


extern void work_m_00000000000409351119_3583260397_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000000409351119_3583260397", "isim/operation_test_v_isim_beh.exe.sim/work/m_00000000000409351119_3583260397.didat");
	xsi_register_executes(pe);
}
