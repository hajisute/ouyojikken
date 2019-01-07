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
static const char *ng0 = "C:/Users/yuuya/git/ouyojikken/operation_test.v";
static unsigned int ng1[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};



static void Always_36_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4368);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    t4 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 10, 0LL);
    goto LAB2;

}

static void Initial_51_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(51, ng0);

LAB2:    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1584);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 810);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1744);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1904);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2064);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_65_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);

LAB4:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(68, ng0);

LAB6:    xsi_set_current_line(68, ng0);

LAB7:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 3608);
    xsi_process_wait(t3, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1744);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2384);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB10:    goto LAB1;

}

static void Initial_75_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);

LAB4:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3856);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}


extern void work_m_00000000004181490192_2844295308_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Initial_51_1,(void *)Initial_65_2,(void *)Initial_75_3};
	xsi_register_didat("work_m_00000000004181490192_2844295308", "isim/operation_test_v_isim_beh.exe.sim/work/m_00000000004181490192_2844295308.didat");
	xsi_register_executes(pe);
}
