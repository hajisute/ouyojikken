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
static const char *ng0 = "C:/Users/yuuya/git/ouyojikken/sqrt.v";
static int ng1[] = {0, 0};
static int ng2[] = {13, 0};



static void Always_38_0(char *t0)
{
    char t13[8];
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

LAB0:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4104);
    *((int *)t2) = 1;
    t3 = (t0 + 3816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);

LAB10:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 1184U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 16, t3, 8, t4, 8);
    t2 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t2, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 1344U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 16, t3, 8, t4, 8);
    t2 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t2, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2544);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 17, t4, 16, t12, 16);
    t14 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 17, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 17, t4, 17, t5, 32);
    t11 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 17, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

}


extern void work_m_00000000002042366317_3921294355_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000002042366317_3921294355", "isim/operation_test_v_isim_beh.exe.sim/work/m_00000000002042366317_3921294355.didat");
	xsi_register_executes(pe);
}
