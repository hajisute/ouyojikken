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
static int ng0[] = {1, 0};
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 1U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {48U, 0U};
static unsigned int ng6[] = {49U, 0U};
static unsigned int ng7[] = {50U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {51U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {52U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {53U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {54U, 0U};
static unsigned int ng16[] = {6U, 0U};
static unsigned int ng17[] = {55U, 0U};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {56U, 0U};
static unsigned int ng20[] = {8U, 0U};
static unsigned int ng21[] = {57U, 0U};
static unsigned int ng22[] = {9U, 0U};
static unsigned int ng23[] = {65U, 0U};
static unsigned int ng24[] = {10U, 0U};
static unsigned int ng25[] = {66U, 0U};
static unsigned int ng26[] = {11U, 0U};
static unsigned int ng27[] = {67U, 0U};
static unsigned int ng28[] = {12U, 0U};
static unsigned int ng29[] = {68U, 0U};
static unsigned int ng30[] = {13U, 0U};
static unsigned int ng31[] = {69U, 0U};
static unsigned int ng32[] = {14U, 0U};
static unsigned int ng33[] = {70U, 0U};
static unsigned int ng34[] = {15U, 0U};
static unsigned int ng35[] = {97U, 0U};
static unsigned int ng36[] = {98U, 0U};
static unsigned int ng37[] = {99U, 0U};
static unsigned int ng38[] = {100U, 0U};
static unsigned int ng39[] = {101U, 0U};
static unsigned int ng40[] = {102U, 0U};
static const char *ng41 = "ERROR in %m at time %t : NOT A HEX CHARACTER";
static unsigned int ng42[] = {15U, 15U};
static int ng43[] = {4, 0};
static int ng44[] = {8, 0};
static int ng45[] = {48, 0, 0, 0};
static int ng46[] = {778922342, 0, 1836020345, 0, 861891941, 0, 2003133803, 0};
static int ng47[] = {2, 0};
static const char *ng48 = "Error in %m at time %t: c_write_mode = %s is not WRITE_FIRST, READ_FIRST or NO_CHANGE.";
static const char *ng49 = "Invalid Address Warning #1: Warning in %m at time %t: Block memory address %d (%b) invalid. Valid depth configured as 0 to %d";
static const char *ng50 = "Invalid Address Warning #2: Warning in %m at time %t: Block memory address %d (%b) invalid. Valid depth configured as 0 to %d";
static const char *ng51 = "Invalid Address Warning #3: Warning in %m at time %t: Block memory address %d (%b) invalid. Valid depth configured as 0 to %d";
static const char *ng52 = "Invalid Address Warning #4: Warning in %m at time %t: Block memory address %d (%b) invalid. Valid depth configured as 0 to %d";
static const char *ng53 = "Invalid Address Warning #5: Warning in %m at time %t: Block memory address %d (%b) invalid. Valid depth configured as 0 to %d";



static int sp_defval(char *t1, char *t2)
{
    char t7[8];
    char t33[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t0 = 1;

LAB2:    t3 = (t1 + 17152);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng0)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB6;

LAB3:    if (t19 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t7) = 1;

LAB6:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB7;

LAB8:    t3 = (t1 + 17312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 16832);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);

LAB9:    t0 = 0;

LAB1:    return t0;
LAB5:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB6;

LAB7:
LAB10:    t29 = (t1 + 17472);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng0)));
    memset(t33, 0, 8);
    t34 = (t31 + 4);
    t35 = (t32 + 4);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB14;

LAB11:    if (t45 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t33) = 1;

LAB14:    t49 = (t33 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t33);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB15;

LAB16:    t3 = (t1 + 16992);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t6 = (t5 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB21;

LAB19:    if (*((unsigned int *)t6) == 0)
        goto LAB18;

LAB20:    t8 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;

LAB21:    t9 = (t7 + 4);
    t22 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t7) = t16;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB23;

LAB22:    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 1U);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t24 & 1U);
    t23 = (t1 + 16832);
    xsi_vlogvar_assign_value(t23, t7, 0, 0, 1);

LAB17:    goto LAB9;

LAB13:    t48 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB14;

LAB15:    t55 = (t1 + 16992);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t1 + 16832);
    xsi_vlogvar_assign_value(t58, t57, 0, 0, 1);
    goto LAB17;

LAB18:    *((unsigned int *)t7) = 1;
    goto LAB21;

LAB23:    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t22);
    *((unsigned int *)t7) = (t17 | t18);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t22);
    *((unsigned int *)t9) = (t19 | t20);
    goto LAB22;

}

static int sp_max(char *t1, char *t2)
{
    char t3[8];
    char t4[8];
    char t11[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t0 = 1;

LAB2:    t5 = (t1 + 17792);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 17952);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t12 = (t7 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB4;

LAB3:    t13 = (t10 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB4;

LAB7:    if (*((unsigned int *)t7) > *((unsigned int *)t10))
        goto LAB5;

LAB6:    memset(t4, 0, 8);
    t15 = (t11 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t11);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB11:    t22 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB12;

LAB13:    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t31 = *((unsigned int *)t22);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t22) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t35, 8);

LAB20:    t36 = (t1 + 17632);
    xsi_vlogvar_assign_value(t36, t3, 0, 0, 1);
    t0 = 0;

LAB1:    return t0;
LAB4:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB6;

LAB5:    *((unsigned int *)t11) = 1;
    goto LAB6;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB11;

LAB12:    t26 = (t1 + 17792);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    goto LAB13;

LAB14:    t33 = (t1 + 17952);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t28, 1, t35, 1);
    goto LAB20;

LAB18:    memcpy(t3, t28, 8);
    goto LAB20;

}

static int sp_a_is_X(char *t1, char *t2)
{
    char t8[8];
    char t17[8];
    char t25[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;

LAB0:    t0 = 1;

LAB2:    t3 = ((char*)((ng1)));
    t4 = (t1 + 18112);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 18432);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 18432);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 2920);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t5, 32, t7, 32);
    t6 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:
LAB6:    t14 = (t1 + 18272);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t18 = (t1 + 18272);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t1 + 18432);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t17, 1, t16, t20, 2, t23, 32, 1);
    t24 = ((char*)((ng3)));
    memset(t25, 0, 8);
    if (*((unsigned int *)t17) != *((unsigned int *)t24))
        goto LAB9;

LAB7:    t26 = (t17 + 4);
    t27 = (t24 + 4);
    if (*((unsigned int *)t26) != *((unsigned int *)t27))
        goto LAB9;

LAB8:    *((unsigned int *)t25) = 1;

LAB9:    t28 = (t25 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t25);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB10;

LAB11:
LAB12:    t3 = (t1 + 18432);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng0)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t6, 32);
    t7 = (t1 + 18432);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB3;

LAB10:    t34 = ((char*)((ng4)));
    t35 = (t1 + 18112);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 1);
    goto LAB12;

}

static int sp_hexstr_conv(char *t1, char *t2)
{
    char t5[8];
    char t14[8];
    char t30[16];
    char t31[8];
    char t32[8];
    char t34[8];
    char t38[8];
    char t46[8];
    char t54[8];
    char t58[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t59;

LAB0:    t0 = 1;

LAB2:    t3 = ((char*)((ng2)));
    t4 = (t1 + 18912);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 18592);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    t3 = (t1 + 2920);
    t4 = *((char **)t3);
    t3 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t4, 32, t3, 32);
    t6 = (t1 + 19072);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB3:    t3 = (t1 + 19072);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_greatereq(t5, 32, t6, 32, t7, 32);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:
LAB6:    t15 = (t1 + 18752);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t14, 0, 8);
    t18 = (t14 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t14) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t24 & 255U);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 255U);

LAB7:    t26 = ((char*)((ng1)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t26, 8);
    if (t27 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng5)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng6)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng7)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng9)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng11)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng13)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng15)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng17)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB24;

LAB25:    t3 = ((char*)((ng19)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB26;

LAB27:    t3 = ((char*)((ng21)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB28;

LAB29:    t3 = ((char*)((ng23)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB30;

LAB31:    t3 = ((char*)((ng25)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB32;

LAB33:    t3 = ((char*)((ng27)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB34;

LAB35:    t3 = ((char*)((ng29)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB36;

LAB37:    t3 = ((char*)((ng31)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB38;

LAB39:    t3 = ((char*)((ng33)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB40;

LAB41:    t3 = ((char*)((ng35)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB42;

LAB43:    t3 = ((char*)((ng36)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB44;

LAB45:    t3 = ((char*)((ng37)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB46;

LAB47:    t3 = ((char*)((ng38)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB48;

LAB49:    t3 = ((char*)((ng39)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB50;

LAB51:    t3 = ((char*)((ng40)));
    t27 = xsi_vlog_unsigned_case_compare(t14, 8, t3, 8);
    if (t27 == 1)
        goto LAB52;

LAB53:
LAB55:
LAB54:
LAB58:    t3 = (t1 + 4552);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t4, 32, t3, 32);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB59;

LAB60:
LAB61:    t3 = ((char*)((ng42)));
    t4 = (t1 + 19392);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);

LAB56:    t3 = ((char*)((ng2)));
    t4 = (t1 + 19232);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB63:    t3 = (t1 + 19232);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng43)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t6, 32, t7, 32);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB64;

LAB65:    t3 = (t1 + 18912);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 18912);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    t3 = (t1 + 18752);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng44)));
    xsi_vlog_unsigned_rshift(t30, 64, t6, 64, t7, 32);
    t8 = (t1 + 18752);
    xsi_vlogvar_assign_value(t8, t30, 0, 0, 64);
    t3 = (t1 + 19072);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 19072);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    goto LAB3;

LAB8:
LAB57:    t28 = ((char*)((ng1)));
    t29 = (t1 + 19392);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    t3 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_unary_minus(t5, 32, t3, 32);
    t4 = (t1 + 19072);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB56;

LAB10:    t4 = ((char*)((ng1)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB12:    t4 = ((char*)((ng4)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB14:    t4 = ((char*)((ng8)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB16:    t4 = ((char*)((ng10)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB18:    t4 = ((char*)((ng12)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB20:    t4 = ((char*)((ng14)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB22:    t4 = ((char*)((ng16)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB24:    t4 = ((char*)((ng18)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB26:    t4 = ((char*)((ng20)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB28:    t4 = ((char*)((ng22)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB30:    t4 = ((char*)((ng24)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB32:    t4 = ((char*)((ng26)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB34:    t4 = ((char*)((ng28)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB36:    t4 = ((char*)((ng30)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB38:    t4 = ((char*)((ng32)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB40:    t4 = ((char*)((ng34)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB42:    t4 = ((char*)((ng24)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB44:    t4 = ((char*)((ng26)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB46:    t4 = ((char*)((ng28)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB48:    t4 = ((char*)((ng30)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB50:    t4 = ((char*)((ng32)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB52:    t4 = ((char*)((ng34)));
    t6 = (t1 + 19392);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB56;

LAB59:
LAB62:    t7 = xsi_vlog_time(t30, 1000.0000000000000, 100.00000000000000);
    t8 = (t1 + 6360);
    xsi_vlogfile_write(1, 0, 0, ng41, 2, t8, (char)118, t30, 64);
    goto LAB61;

LAB64:
LAB66:    t15 = (t1 + 18912);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng43)));
    memset(t31, 0, 8);
    xsi_vlog_signed_multiply(t31, 32, t17, 32, t18, 32);
    t19 = (t1 + 19232);
    t26 = (t19 + 56U);
    t28 = *((char **)t26);
    memset(t32, 0, 8);
    xsi_vlog_signed_add(t32, 32, t31, 32, t28, 32);
    t29 = (t1 + 2920);
    t33 = *((char **)t29);
    memset(t34, 0, 8);
    xsi_vlog_signed_less(t34, 32, t32, 32, t33, 32);
    t29 = (t34 + 4);
    t20 = *((unsigned int *)t29);
    t21 = (~(t20));
    t22 = *((unsigned int *)t34);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB67;

LAB68:
LAB69:    t3 = (t1 + 19232);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = ((char*)((ng0)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t6, 32, t7, 32);
    t8 = (t1 + 19232);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 32);
    goto LAB63;

LAB67:
LAB70:    t35 = (t1 + 19392);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t39 = (t1 + 19392);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t1 + 19232);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlog_generic_get_index_select_value(t38, 1, t37, t41, 2, t44, 32, 1);
    t45 = (t1 + 18592);
    t47 = (t1 + 18592);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = (t1 + 18912);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng43)));
    memset(t54, 0, 8);
    xsi_vlog_signed_multiply(t54, 32, t52, 32, t53, 32);
    t55 = (t1 + 19232);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memset(t58, 0, 8);
    xsi_vlog_signed_add(t58, 32, t54, 32, t57, 32);
    xsi_vlog_generic_convert_bit_index(t46, t49, 2, t58, 32, 1);
    t59 = (t46 + 4);
    t25 = *((unsigned int *)t59);
    t27 = (!(t25));
    if (t27 == 1)
        goto LAB71;

LAB72:    goto LAB69;

LAB71:    xsi_vlogvar_assign_value(t45, t38, 0, *((unsigned int *)t46), 1);
    goto LAB72;

}

static void NetDecl_113_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 20312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 10272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26752);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7U);
    t18 = (t0 + 26336);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_118_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 20560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7152U);
    t3 = *((char **)t2);
    t2 = (t0 + 26816);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 3U);
    t16 = (t0 + 26352);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_156_2(char *t0)
{
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 20808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7632U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    t4 = ((char*)((ng0)));
    t5 = (t0 + 3328);
    t6 = *((char **)t5);
    t5 = (t0 + 20616);
    t7 = (t0 + 5064);
    t8 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    t9 = (t0 + 16992);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 17152);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 17312);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 17472);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);

LAB4:    t13 = (t0 + 20712);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB6;

LAB5:    t14 = (t0 + 20712);
    t22 = *((char **)t14);
    t14 = (t0 + 16832);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 5064);
    t27 = (t0 + 20616);
    t28 = 0;
    xsi_delete_subprogram_invocation(t26, t22, t0, t27, t28);
    t29 = (t0 + 26880);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t25 + 4);
    t37 = *((unsigned int *)t25);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 26368);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t13 = (t0 + 20808U);
    *((char **)t13) = &&LAB4;
    goto LAB1;

}

static void Cont_157_3(char *t0)
{
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 21056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7792U);
    t3 = *((char **)t2);
    t2 = (t0 + 2104);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4416);
    t6 = *((char **)t5);
    t5 = (t0 + 20864);
    t7 = (t0 + 5064);
    t8 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    t9 = (t0 + 16992);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 17152);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);
    t11 = (t0 + 17312);
    xsi_vlogvar_assign_value(t11, t2, 0, 0, 1);
    t12 = (t0 + 17472);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);

LAB4:    t13 = (t0 + 20960);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB6;

LAB5:    t14 = (t0 + 20960);
    t22 = *((char **)t14);
    t14 = (t0 + 16832);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 5064);
    t27 = (t0 + 20864);
    t28 = 0;
    xsi_delete_subprogram_invocation(t26, t22, t0, t27, t28);
    t29 = (t0 + 26944);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t25 + 4);
    t37 = *((unsigned int *)t25);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 26384);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t13 = (t0 + 21056U);
    *((char **)t13) = &&LAB4;
    goto LAB1;

}

static void Cont_158_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 21304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1152);
    t5 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t18, 8);

LAB16:    t25 = (t0 + 27008);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t29, 0, 8);
    t30 = 255U;
    t31 = t30;
    t32 = (t3 + 4);
    t33 = *((unsigned int *)t3);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 | t30);
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 | t31);
    xsi_driver_vfirst_trans(t25, 0, 7);
    t38 = (t0 + 26400);
    *((int *)t38) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 7312U);
    t19 = *((char **)t18);
    memcpy(t20, t19, 8);
    goto LAB9;

LAB10:    t18 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t18, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Cont_159_5(char *t0)
{
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 21552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7472U);
    t3 = *((char **)t2);
    t2 = (t0 + 1288);
    t4 = *((char **)t2);
    t2 = ((char*)((ng0)));
    t5 = (t0 + 3464);
    t6 = *((char **)t5);
    t5 = (t0 + 21360);
    t7 = (t0 + 5064);
    t8 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    t9 = (t0 + 16992);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 17152);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);
    t11 = (t0 + 17312);
    xsi_vlogvar_assign_value(t11, t2, 0, 0, 1);
    t12 = (t0 + 17472);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);

LAB4:    t13 = (t0 + 21456);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB6;

LAB5:    t14 = (t0 + 21456);
    t22 = *((char **)t14);
    t14 = (t0 + 16832);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 5064);
    t27 = (t0 + 21360);
    t28 = 0;
    xsi_delete_subprogram_invocation(t26, t22, t0, t27, t28);
    t29 = (t0 + 27072);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t25 + 4);
    t37 = *((unsigned int *)t25);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 26416);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t13 = (t0 + 21552U);
    *((char **)t13) = &&LAB4;
    goto LAB1;

}

static void Cont_160_6(char *t0)
{
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 21800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7952U);
    t3 = *((char **)t2);
    t2 = (t0 + 1968);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4008);
    t6 = *((char **)t5);
    t5 = (t0 + 21608);
    t7 = (t0 + 5064);
    t8 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    t9 = (t0 + 16992);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 17152);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);
    t11 = (t0 + 17312);
    xsi_vlogvar_assign_value(t11, t2, 0, 0, 1);
    t12 = (t0 + 17472);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);

LAB4:    t13 = (t0 + 21704);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB6;

LAB5:    t14 = (t0 + 21704);
    t22 = *((char **)t14);
    t14 = (t0 + 16832);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 5064);
    t27 = (t0 + 21608);
    t28 = 0;
    xsi_delete_subprogram_invocation(t26, t22, t0, t27, t28);
    t29 = (t0 + 27136);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t25 + 4);
    t37 = *((unsigned int *)t25);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 26432);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t13 = (t0 + 21800U);
    *((char **)t13) = &&LAB4;
    goto LAB1;

}

static void Cont_161_7(char *t0)
{
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 22048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8112U);
    t3 = *((char **)t2);
    t2 = (t0 + 1560);
    t4 = *((char **)t2);
    t2 = ((char*)((ng0)));
    t5 = ((char*)((ng0)));
    t6 = (t0 + 21856);
    t7 = (t0 + 5064);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    t9 = (t0 + 16992);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 1);
    t10 = (t0 + 17152);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 1);
    t11 = (t0 + 17312);
    xsi_vlogvar_assign_value(t11, t2, 0, 0, 1);
    t12 = (t0 + 17472);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 1);

LAB4:    t13 = (t0 + 21952);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB6;

LAB5:    t14 = (t0 + 21952);
    t22 = *((char **)t14);
    t14 = (t0 + 16832);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 5064);
    t27 = (t0 + 21856);
    t28 = 0;
    xsi_delete_subprogram_invocation(t26, t22, t0, t27, t28);
    t29 = (t0 + 27200);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t25 + 4);
    t37 = *((unsigned int *)t25);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 26448);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t13 = (t0 + 22048U);
    *((char **)t13) = &&LAB4;
    goto LAB1;

}

static void Initial_266_8(char *t0)
{
    char t4[16];
    char t21[8];
    char t31[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
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
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    int t42;
    int t43;

LAB0:    t1 = (t0 + 22296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:
LAB4:    t2 = ((char*)((ng1)));
    t3 = (t0 + 13152);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    t2 = ((char*)((ng45)));
    memcpy(t4, t2, 8);
    t3 = (t4 + 8);
    memset(t3, 0, 8);
    t5 = (t0 + 22104);
    t6 = (t0 + 6360);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    t8 = (t0 + 18752);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 64);

LAB5:    t9 = (t0 + 22200);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB7;

LAB6:    t10 = (t0 + 22200);
    t18 = *((char **)t10);
    t10 = (t0 + 18592);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 6360);
    t23 = (t0 + 22104);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 12672);
    xsi_vlogvar_assign_value(t25, t21, 0, 0, 8);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t3, 32, t2, 32);
    t5 = (t21 + 4);
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB8;

LAB9:
LAB10:    t2 = ((char*)((ng2)));
    t3 = (t0 + 14912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 14912);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 744);
    t7 = *((char **)t6);
    memset(t21, 0, 8);
    xsi_vlog_signed_less(t21, 32, t5, 32, t7, 32);
    t6 = (t21 + 4);
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB15;

LAB16:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t3, 32, t2, 32);
    t5 = (t21 + 4);
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB19;

LAB20:
LAB21:    t2 = ((char*)((ng2)));
    t3 = (t0 + 15232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB22:    t2 = (t0 + 15232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2512);
    t7 = *((char **)t6);
    memset(t21, 0, 8);
    xsi_vlog_signed_leq(t21, 32, t5, 32, t7, 32);
    t6 = (t21 + 4);
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB23;

LAB24:    t2 = ((char*)((ng2)));
    t3 = (t0 + 15552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB27:    t2 = (t0 + 15552);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2512);
    t7 = *((char **)t6);
    memset(t21, 0, 8);
    xsi_vlog_signed_leq(t21, 32, t5, 32, t7, 32);
    t6 = (t21 + 4);
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB28;

LAB29:    t2 = (t0 + 13152);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 12512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 12032);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 12192);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = (t0 + 22104);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB32;

LAB1:    return;
LAB7:    t9 = (t0 + 22296U);
    *((char **)t9) = &&LAB5;
    goto LAB1;

LAB8:    t6 = ((char*)((ng45)));
    memcpy(t4, t6, 8);
    t7 = (t4 + 8);
    memset(t7, 0, 8);
    t8 = (t0 + 22104);
    t9 = (t0 + 6360);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    t11 = (t0 + 18752);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 64);

LAB11:    t12 = (t0 + 22200);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t18 = *((char **)t16);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t17 = ((int  (*)(char *, char *))t20)(t0, t13);
    if (t17 != 0)
        goto LAB13;

LAB12:    t13 = (t0 + 22200);
    t22 = *((char **)t13);
    t13 = (t0 + 18592);
    t23 = (t13 + 56U);
    t24 = *((char **)t23);
    memcpy(t31, t24, 8);
    t25 = (t0 + 6360);
    t32 = (t0 + 22104);
    t33 = 0;
    xsi_delete_subprogram_invocation(t25, t22, t0, t32, t33);
    t34 = (t0 + 13152);
    xsi_vlogvar_assign_value(t34, t31, 0, 0, 8);
    goto LAB10;

LAB13:    t12 = (t0 + 22296U);
    *((char **)t12) = &&LAB11;
    goto LAB1;

LAB15:    t8 = (t0 + 12672);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 10432);
    t12 = (t0 + 10432);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 10432);
    t16 = (t15 + 64U);
    t18 = *((char **)t16);
    t19 = (t0 + 14912);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t31, t35, t14, t18, 2, 1, t22, 32, 1);
    t23 = (t31 + 4);
    t36 = *((unsigned int *)t23);
    t17 = (!(t36));
    t24 = (t35 + 4);
    t37 = *((unsigned int *)t24);
    t38 = (!(t37));
    t39 = (t17 && t38);
    if (t39 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 14912);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t5, 32, t6, 32);
    t7 = (t0 + 14912);
    xsi_vlogvar_assign_value(t7, t21, 0, 0, 32);
    goto LAB14;

LAB17:    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t35);
    t42 = (t40 - t41);
    t43 = (t42 + 1);
    xsi_vlogvar_assign_value(t11, t10, 0, *((unsigned int *)t35), t43);
    goto LAB18;

LAB19:    t6 = ((char*)((ng46)));
    t7 = (t0 + 10432);
    xsi_vlogfile_readmemb(t6, 128, t7, 0, 0, 0, 0);
    goto LAB21;

LAB23:    t8 = (t0 + 13152);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 13312);
    t12 = (t0 + 13312);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 13312);
    t16 = (t15 + 64U);
    t18 = *((char **)t16);
    t19 = (t0 + 15232);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t31, t35, t14, t18, 2, 1, t22, 32, 1);
    t23 = (t31 + 4);
    t36 = *((unsigned int *)t23);
    t17 = (!(t36));
    t24 = (t35 + 4);
    t37 = *((unsigned int *)t24);
    t38 = (!(t37));
    t39 = (t17 && t38);
    if (t39 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 15232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t5, 32, t6, 32);
    t7 = (t0 + 15232);
    xsi_vlogvar_assign_value(t7, t21, 0, 0, 32);
    goto LAB22;

LAB25:    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t35);
    t42 = (t40 - t41);
    t43 = (t42 + 1);
    xsi_vlogvar_assign_value(t11, t10, 0, *((unsigned int *)t35), t43);
    goto LAB26;

LAB28:    t8 = ((char*)((ng2)));
    t9 = (t0 + 13472);
    t10 = (t0 + 13472);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 13472);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 15552);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t31, t35, t12, t15, 2, 1, t19, 32, 1);
    t20 = (t31 + 4);
    t36 = *((unsigned int *)t20);
    t17 = (!(t36));
    t22 = (t35 + 4);
    t37 = *((unsigned int *)t22);
    t38 = (!(t37));
    t39 = (t17 && t38);
    if (t39 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 15552);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_signed_add(t21, 32, t5, 32, t6, 32);
    t7 = (t0 + 15552);
    xsi_vlogvar_assign_value(t7, t21, 0, 0, 32);
    goto LAB27;

LAB30:    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t35);
    t42 = (t40 - t41);
    t43 = (t42 + 1);
    xsi_vlogvar_assign_value(t9, t8, 0, *((unsigned int *)t35), t43);
    goto LAB31;

LAB32:    t3 = (t0 + 13152);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 10272);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB1;

}

static void Always_291_9(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 22544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26464);
    *((int *)t2) = 1;
    t3 = (t0 + 22576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1832);
    t5 = *((char **)t4);
    t4 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t4, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    t2 = ((char*)((ng1)));
    t3 = (t0 + 9792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    t13 = (t0 + 11552);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 9792);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 1);
    goto LAB8;

}

static void Always_299_10(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 22792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26480);
    *((int *)t2) = 1;
    t3 = (t0 + 22824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 8752U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    t2 = ((char*)((ng1)));
    t3 = (t0 + 11552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    t28 = ((char*)((ng4)));
    t29 = (t0 + 11552);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB12;

}

static void Always_307_11(char *t0)
{
    char t6[8];
    char t7[8];
    char t21[8];
    char t22[8];
    char t30[8];
    char t62[8];
    char t76[8];
    char t77[8];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
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
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;

LAB0:    t1 = (t0 + 23040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26496);
    *((int *)t2) = 1;
    t3 = (t0 + 23072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1696);
    t5 = *((char **)t4);
    t4 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t4, 32);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB9:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB10;

LAB11:    memcpy(t30, t7, 8);

LAB12:    memset(t62, 0, 8);
    t63 = (t30 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t30);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t63) != 0)
        goto LAB22;

LAB23:    t70 = (t62 + 4);
    t71 = *((unsigned int *)t62);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB24;

LAB25:    memcpy(t85, t62, 8);

LAB26:    t117 = (t85 + 4);
    t118 = *((unsigned int *)t117);
    t119 = (~(t118));
    t120 = *((unsigned int *)t85);
    t121 = (t120 & t119);
    t122 = (t121 != 0);
    if (t122 > 0)
        goto LAB34;

LAB35:    t2 = ((char*)((ng1)));
    t3 = (t0 + 9952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB36:    goto LAB2;

LAB6:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB10:    t19 = (t0 + 1560);
    t20 = *((char **)t19);
    t19 = ((char*)((ng0)));
    memset(t21, 0, 8);
    xsi_vlog_signed_equal(t21, 32, t20, 32, t19, 32);
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t21);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t23) != 0)
        goto LAB15;

LAB16:    t31 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t22);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t7 + 4);
    t35 = (t22 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t22) = 1;
    goto LAB16;

LAB15:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB16;

LAB17:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t7 + 4);
    t45 = (t22 + 4);
    t46 = *((unsigned int *)t7);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t22);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB19;

LAB20:    *((unsigned int *)t62) = 1;
    goto LAB23;

LAB22:    t69 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB23;

LAB24:    t74 = (t0 + 1832);
    t75 = *((char **)t74);
    t74 = ((char*)((ng0)));
    memset(t76, 0, 8);
    xsi_vlog_signed_equal(t76, 32, t75, 32, t74, 32);
    memset(t77, 0, 8);
    t78 = (t76 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t76);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t78) != 0)
        goto LAB29;

LAB30:    t86 = *((unsigned int *)t62);
    t87 = *((unsigned int *)t77);
    t88 = (t86 & t87);
    *((unsigned int *)t85) = t88;
    t89 = (t62 + 4);
    t90 = (t77 + 4);
    t91 = (t85 + 4);
    t92 = *((unsigned int *)t89);
    t93 = *((unsigned int *)t90);
    t94 = (t92 | t93);
    *((unsigned int *)t91) = t94;
    t95 = *((unsigned int *)t91);
    t96 = (t95 != 0);
    if (t96 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB26;

LAB27:    *((unsigned int *)t77) = 1;
    goto LAB30;

LAB29:    t84 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB30;

LAB31:    t97 = *((unsigned int *)t85);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t85) = (t97 | t98);
    t99 = (t62 + 4);
    t100 = (t77 + 4);
    t101 = *((unsigned int *)t62);
    t102 = (~(t101));
    t103 = *((unsigned int *)t99);
    t104 = (~(t103));
    t105 = *((unsigned int *)t77);
    t106 = (~(t105));
    t107 = *((unsigned int *)t100);
    t108 = (~(t107));
    t109 = (t102 & t104);
    t110 = (t106 & t108);
    t111 = (~(t109));
    t112 = (~(t110));
    t113 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t113 & t111);
    t114 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t114 & t112);
    t115 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t115 & t111);
    t116 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t116 & t112);
    goto LAB33;

LAB34:    t123 = (t0 + 11712);
    t124 = (t123 + 56U);
    t125 = *((char **)t124);
    t126 = (t0 + 9952);
    xsi_vlogvar_assign_value(t126, t125, 0, 0, 1);
    goto LAB36;

}

static void Cont_315_12(char *t0)
{
    char t4[8];
    char t17[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t1 = (t0 + 23288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8752U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t24, t4, 8);

LAB10:    t56 = (t0 + 27264);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t60, 0, 8);
    t61 = 1U;
    t62 = t61;
    t63 = (t24 + 4);
    t64 = *((unsigned int *)t24);
    t61 = (t61 & t64);
    t65 = *((unsigned int *)t63);
    t62 = (t62 & t65);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 | t61);
    t68 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t68 | t62);
    xsi_driver_vfirst_trans(t56, 0, 0);
    t69 = (t0 + 26512);
    *((int *)t69) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t15 = (t0 + 9392U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t16 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB14:    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t17);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4);
    t29 = (t17 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB13:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB15:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t17 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t17);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB17;

}

static void Always_319_13(char *t0)
{
    char t6[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 23536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26528);
    *((int *)t2) = 1;
    t3 = (t0 + 23568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 8752U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    t2 = (t0 + 11872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11872);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:
LAB13:    t28 = (t0 + 9072U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB17;

LAB14:    if (t42 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t30) = 1;

LAB17:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB18;

LAB19:    t2 = (t0 + 9232U);
    t3 = *((char **)t2);
    t2 = (t0 + 11872);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB20:    goto LAB12;

LAB16:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB17;

LAB18:    t52 = ((char*)((ng1)));
    t53 = (t0 + 11872);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 1, 0LL);
    goto LAB20;

}

static void Always_333_14(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 23784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26544);
    *((int *)t2) = 1;
    t3 = (t0 + 23816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 8752U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:
LAB13:    t28 = (t0 + 8432U);
    t29 = *((char **)t28);
    t28 = (t0 + 12032);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 8, 0LL);
    t2 = (t0 + 8272U);
    t3 = *((char **)t2);
    t2 = (t0 + 12192);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    t2 = (t0 + 8912U);
    t3 = *((char **)t2);
    t2 = (t0 + 11392);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_345_15(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 24032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26560);
    *((int *)t2) = 1;
    t3 = (t0 + 24064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2648);
    t5 = *((char **)t4);
    t4 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t4, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    t2 = (t0 + 8912U);
    t3 = *((char **)t2);
    t2 = (t0 + 11232);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    t13 = (t0 + 11392);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 11232);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 1);
    goto LAB8;

}

static void Always_355_16(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 24280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26576);
    *((int *)t2) = 1;
    t3 = (t0 + 24312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2648);
    t5 = *((char **)t4);
    t4 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t4, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    t2 = (t0 + 8432U);
    t3 = *((char **)t2);
    t2 = (t0 + 11072);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);

LAB8:    goto LAB2;

LAB6:    t13 = (t0 + 12032);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 11072);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 8);
    goto LAB8;

}

static void Always_363_17(char *t0)
{
    char t6[8];
    char t24[8];
    char t36[8];
    char t37[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 24528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26592);
    *((int *)t2) = 1;
    t3 = (t0 + 24560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2648);
    t5 = *((char **)t4);
    t4 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t4, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB31:    t2 = (t0 + 8272U);
    t3 = *((char **)t2);
    t2 = (t0 + 10912);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    t2 = (t0 + 8912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB35;

LAB32:    if (t21 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t6) = 1;

LAB35:    memset(t24, 0, 8);
    t13 = (t6 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t13) != 0)
        goto LAB38;

LAB39:    t15 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t15);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB40;

LAB41:    memcpy(t45, t24, 8);

LAB42:    t59 = (t45 + 4);
    t78 = *((unsigned int *)t59);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB50;

LAB51:    t2 = (t0 + 9232U);
    t3 = *((char **)t2);
    t2 = (t0 + 12352);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB52:
LAB8:    goto LAB2;

LAB6:
LAB9:    t13 = (t0 + 12192);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 10912);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 4);
    t2 = (t0 + 11392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t13 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t13);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB13;

LAB10:    if (t21 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t6) = 1;

LAB13:    memset(t24, 0, 8);
    t15 = (t6 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t15) != 0)
        goto LAB16;

LAB17:    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB18;

LAB19:    memcpy(t45, t24, 8);

LAB20:    t77 = (t45 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB28;

LAB29:    t2 = (t0 + 11872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12352);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB30:    goto LAB8;

LAB12:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t24) = 1;
    goto LAB17;

LAB16:    t16 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB17;

LAB18:    t34 = (t0 + 3056);
    t35 = *((char **)t34);
    t34 = ((char*)((ng47)));
    memset(t36, 0, 8);
    xsi_vlog_signed_equal(t36, 32, t35, 32, t34, 32);
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t36);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t38) != 0)
        goto LAB23;

LAB24:    t46 = *((unsigned int *)t24);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t24 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB20;

LAB21:    *((unsigned int *)t37) = 1;
    goto LAB24;

LAB23:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB24;

LAB25:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t24 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t24);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB27;

LAB28:    t83 = ((char*)((ng1)));
    t84 = (t0 + 12352);
    xsi_vlogvar_assign_value(t84, t83, 0, 0, 1);
    goto LAB30;

LAB34:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t24) = 1;
    goto LAB39;

LAB38:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB39;

LAB40:    t16 = (t0 + 3056);
    t30 = *((char **)t16);
    t16 = ((char*)((ng47)));
    memset(t36, 0, 8);
    xsi_vlog_signed_equal(t36, 32, t30, 32, t16, 32);
    memset(t37, 0, 8);
    t34 = (t36 + 4);
    t39 = *((unsigned int *)t34);
    t40 = (~(t39));
    t41 = *((unsigned int *)t36);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t34) != 0)
        goto LAB45;

LAB46:    t46 = *((unsigned int *)t24);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t38 = (t24 + 4);
    t44 = (t37 + 4);
    t49 = (t45 + 4);
    t52 = *((unsigned int *)t38);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t49);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB42;

LAB43:    *((unsigned int *)t37) = 1;
    goto LAB46;

LAB45:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB46;

LAB47:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t49);
    *((unsigned int *)t45) = (t57 | t58);
    t50 = (t24 + 4);
    t51 = (t37 + 4);
    t61 = *((unsigned int *)t24);
    t62 = (~(t61));
    t63 = *((unsigned int *)t50);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t51);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t73 & t71);
    t74 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB49;

LAB50:    t60 = ((char*)((ng1)));
    t77 = (t0 + 12352);
    xsi_vlogvar_assign_value(t77, t60, 0, 0, 1);
    goto LAB52;

}

static void Always_385_18(char *t0)
{
    char t6[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 24776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26608);
    *((int *)t2) = 1;
    t3 = (t0 + 24808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 8752U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:
LAB13:    t28 = (t0 + 9072U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB17;

LAB14:    if (t42 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t30) = 1;

LAB17:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB18;

LAB19:    t2 = (t0 + 12352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12512);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB20:    goto LAB12;

LAB16:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB17;

LAB18:    t52 = ((char*)((ng2)));
    t53 = (t0 + 12512);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 1, 0LL);
    goto LAB20;

}

static void Initial_396_19(char *t0)
{
    char t6[8];
    char t12[16];
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    char *t15;

LAB0:
LAB2:    t1 = (t0 + 3056);
    t2 = *((char **)t1);

LAB3:    t1 = ((char*)((ng2)));
    t3 = xsi_vlog_signed_case_compare(t2, 32, t1, 32);
    if (t3 == 1)
        goto LAB4;

LAB5:    t1 = ((char*)((ng0)));
    t3 = xsi_vlog_signed_case_compare(t2, 32, t1, 32);
    if (t3 == 1)
        goto LAB6;

LAB7:    t1 = ((char*)((ng47)));
    t3 = xsi_vlog_signed_case_compare(t2, 32, t1, 32);
    if (t3 == 1)
        goto LAB8;

LAB9:
LAB11:
LAB10:
LAB13:    t1 = (t0 + 4552);
    t4 = *((char **)t1);
    t1 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t1, 32);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_vlog_finish(1);

LAB12:
LAB1:    return;
LAB4:    t4 = ((char*)((ng1)));
    t5 = (t0 + 10752);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    goto LAB12;

LAB6:    t4 = ((char*)((ng4)));
    t5 = (t0 + 10752);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    goto LAB12;

LAB8:    t4 = ((char*)((ng8)));
    t5 = (t0 + 10752);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    goto LAB12;

LAB14:
LAB17:    t13 = xsi_vlog_time(t12, 1000.0000000000000, 100.00000000000000);
    t14 = (t0 + 3056);
    t15 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng48, 3, t0, (char)118, t12, 64, (char)119, t15, 32);
    goto LAB16;

}

static void Always_414_20(char *t0)
{
    char t6[8];
    char t30[8];
    char t59[8];
    char t72[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;

LAB0:    t1 = (t0 + 25272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26624);
    *((int *)t2) = 1;
    t3 = (t0 + 25304);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 8752U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:
LAB13:    t28 = (t0 + 9072U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB17;

LAB14:    if (t42 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t30) = 1;

LAB17:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB18;

LAB19:
LAB22:    t2 = (t0 + 11232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB26;

LAB23:    if (t18 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t6) = 1;

LAB26:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB27;

LAB28:
LAB84:    t2 = (t0 + 10912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB86;

LAB85:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB86;

LAB89:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB87;

LAB88:    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB90;

LAB91:    t2 = (t0 + 4552);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t3, 32, t2, 32);
    t4 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB93;

LAB94:
LAB95:
LAB92:
LAB29:
LAB20:    goto LAB12;

LAB16:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB17;

LAB18:
LAB21:    t52 = (t0 + 13152);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t0 + 10112);
    xsi_vlogvar_wait_assign_value(t55, t54, 0, 0, 8, 0LL);
    goto LAB20;

LAB25:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB26;

LAB27:
LAB30:    t28 = (t0 + 10752);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t32 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t45 = (t31 + 4);
    t46 = (t32 + 4);
    t33 = *((unsigned int *)t31);
    t34 = *((unsigned int *)t32);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t45);
    t37 = *((unsigned int *)t46);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t45);
    t41 = *((unsigned int *)t46);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB34;

LAB31:    if (t42 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t30) = 1;

LAB34:    t53 = (t30 + 4);
    t47 = *((unsigned int *)t53);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB35;

LAB36:    t2 = (t0 + 10752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB54;

LAB51:    if (t18 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t6) = 1;

LAB54:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB55;

LAB56:
LAB71:    t2 = (t0 + 10912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB73;

LAB72:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB73;

LAB76:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB74;

LAB75:    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB77;

LAB78:    t2 = (t0 + 4552);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t3, 32, t2, 32);
    t4 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB80;

LAB81:
LAB82:
LAB79:
LAB57:
LAB37:    goto LAB29;

LAB33:    t52 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB34;

LAB35:
LAB38:    t54 = (t0 + 10912);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t0 + 744);
    t58 = *((char **)t57);
    memset(t59, 0, 8);
    t57 = (t56 + 4);
    if (*((unsigned int *)t57) != 0)
        goto LAB40;

LAB39:    t60 = (t58 + 4);
    if (*((unsigned int *)t60) != 0)
        goto LAB40;

LAB43:    if (*((unsigned int *)t56) < *((unsigned int *)t58))
        goto LAB41;

LAB42:    t62 = (t59 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t59);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB44;

LAB45:    t2 = (t0 + 4552);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t3, 32, t2, 32);
    t4 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB47;

LAB48:
LAB49:
LAB46:    goto LAB37;

LAB40:    t61 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB42;

LAB41:    *((unsigned int *)t59) = 1;
    goto LAB42;

LAB44:    t68 = (t0 + 11072);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t0 + 10112);
    xsi_vlogvar_wait_assign_value(t71, t70, 0, 0, 8, 0LL);
    goto LAB46;

LAB47:
LAB50:    t5 = xsi_vlog_time(t72, 1000.0000000000000, 100.00000000000000);
    t7 = (t0 + 10912);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 10912);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t31 = (t0 + 744);
    t32 = *((char **)t31);
    t31 = ((char*)((ng0)));
    memset(t30, 0, 8);
    xsi_vlog_signed_minus(t30, 32, t32, 32, t31, 32);
    xsi_vlogfile_write(1, 0, 0, ng49, 5, t0, (char)118, t72, 64, (char)118, t21, 4, (char)118, t29, 4, (char)119, t30, 32);
    goto LAB49;

LAB53:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB54;

LAB55:
LAB58:    t28 = (t0 + 10912);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t32 = (t0 + 744);
    t45 = *((char **)t32);
    memset(t30, 0, 8);
    t32 = (t31 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB60;

LAB59:    t46 = (t45 + 4);
    if (*((unsigned int *)t46) != 0)
        goto LAB60;

LAB63:    if (*((unsigned int *)t31) < *((unsigned int *)t45))
        goto LAB61;

LAB62:    t53 = (t30 + 4);
    t33 = *((unsigned int *)t53);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB64;

LAB65:    t2 = (t0 + 4552);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t3, 32, t2, 32);
    t4 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB67;

LAB68:
LAB69:
LAB66:    goto LAB57;

LAB60:    t52 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB62;

LAB61:    *((unsigned int *)t30) = 1;
    goto LAB62;

LAB64:    t54 = (t0 + 10432);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t0 + 10432);
    t58 = (t57 + 72U);
    t60 = *((char **)t58);
    t61 = (t0 + 10432);
    t62 = (t61 + 64U);
    t68 = *((char **)t62);
    t69 = (t0 + 10912);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    xsi_vlog_generic_get_array_select_value(t59, 8, t56, t60, t68, 2, 1, t71, 4, 2);
    t73 = (t0 + 10112);
    xsi_vlogvar_wait_assign_value(t73, t59, 0, 0, 8, 0LL);
    goto LAB66;

LAB67:
LAB70:    t5 = xsi_vlog_time(t72, 1000.0000000000000, 100.00000000000000);
    t7 = (t0 + 10912);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 10912);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t31 = (t0 + 744);
    t32 = *((char **)t31);
    t31 = ((char*)((ng0)));
    memset(t30, 0, 8);
    xsi_vlog_signed_minus(t30, 32, t32, 32, t31, 32);
    xsi_vlogfile_write(1, 0, 0, ng50, 5, t0, (char)118, t72, 64, (char)118, t21, 4, (char)118, t29, 4, (char)119, t30, 32);
    goto LAB69;

LAB73:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB75;

LAB74:    *((unsigned int *)t6) = 1;
    goto LAB75;

LAB77:    t28 = (t0 + 10112);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t32 = (t0 + 10112);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 8, 0LL);
    goto LAB79;

LAB80:
LAB83:    t5 = xsi_vlog_time(t72, 1000.0000000000000, 100.00000000000000);
    t7 = (t0 + 10912);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 10912);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t31 = (t0 + 744);
    t32 = *((char **)t31);
    t31 = ((char*)((ng0)));
    memset(t30, 0, 8);
    xsi_vlog_signed_minus(t30, 32, t32, 32, t31, 32);
    xsi_vlogfile_write(1, 0, 0, ng51, 5, t0, (char)118, t72, 64, (char)118, t21, 4, (char)118, t29, 4, (char)119, t30, 32);
    goto LAB82;

LAB86:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB88;

LAB87:    *((unsigned int *)t6) = 1;
    goto LAB88;

LAB90:    t28 = (t0 + 10432);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t32 = (t0 + 10432);
    t45 = (t32 + 72U);
    t46 = *((char **)t45);
    t52 = (t0 + 10432);
    t53 = (t52 + 64U);
    t54 = *((char **)t53);
    t55 = (t0 + 10912);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    xsi_vlog_generic_get_array_select_value(t30, 8, t31, t46, t54, 2, 1, t57, 4, 2);
    t58 = (t0 + 10112);
    xsi_vlogvar_wait_assign_value(t58, t30, 0, 0, 8, 0LL);
    goto LAB92;

LAB93:
LAB96:    t5 = xsi_vlog_time(t72, 1000.0000000000000, 100.00000000000000);
    t7 = (t0 + 10912);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 10912);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t31 = (t0 + 744);
    t32 = *((char **)t31);
    t31 = ((char*)((ng0)));
    memset(t30, 0, 8);
    xsi_vlog_signed_minus(t30, 32, t32, 32, t31, 32);
    xsi_vlogfile_write(1, 0, 0, ng52, 5, t0, (char)118, t72, 64, (char)118, t21, 4, (char)118, t29, 4, (char)119, t30, 32);
    goto LAB95;

}

static void Always_473_21(char *t0)
{
    char t6[8];
    char t22[8];
    char t38[8];
    char t54[8];
    char t62[8];
    char t105[8];
    char t118[8];
    char t119[8];
    char t140[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    int t131;
    char *t132;
    unsigned int t133;
    int t134;
    int t135;
    unsigned int t136;
    unsigned int t137;
    int t138;
    int t139;

LAB0:    t1 = (t0 + 25520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26640);
    *((int *)t2) = 1;
    t3 = (t0 + 25552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 8752U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t62, t22, 8);

LAB16:    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 11232);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng4)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB20;

LAB17:    if (t50 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t38) = 1;

LAB20:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t55) != 0)
        goto LAB23;

LAB24:    t63 = *((unsigned int *)t22);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t22 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB23:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB24;

LAB25:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t22 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t22);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB27;

LAB28:
LAB31:    t100 = (t0 + 10912);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    t103 = (t0 + 744);
    t104 = *((char **)t103);
    memset(t105, 0, 8);
    t103 = (t102 + 4);
    if (*((unsigned int *)t103) != 0)
        goto LAB33;

LAB32:    t106 = (t104 + 4);
    if (*((unsigned int *)t106) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t102) < *((unsigned int *)t104))
        goto LAB34;

LAB35:    t108 = (t105 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t105);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB37;

LAB38:    t2 = (t0 + 4552);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t3, 32, t2, 32);
    t4 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB42;

LAB43:
LAB44:
LAB39:    goto LAB30;

LAB33:    t107 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t105) = 1;
    goto LAB35;

LAB37:    t114 = (t0 + 11072);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    t117 = (t0 + 10432);
    t120 = (t0 + 10432);
    t121 = (t120 + 72U);
    t122 = *((char **)t121);
    t123 = (t0 + 10432);
    t124 = (t123 + 64U);
    t125 = *((char **)t124);
    t126 = (t0 + 10912);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    xsi_vlog_generic_convert_array_indices(t118, t119, t122, t125, 2, 1, t128, 4, 2);
    t129 = (t118 + 4);
    t130 = *((unsigned int *)t129);
    t131 = (!(t130));
    t132 = (t119 + 4);
    t133 = *((unsigned int *)t132);
    t134 = (!(t133));
    t135 = (t131 && t134);
    if (t135 == 1)
        goto LAB40;

LAB41:    goto LAB39;

LAB40:    t136 = *((unsigned int *)t118);
    t137 = *((unsigned int *)t119);
    t138 = (t136 - t137);
    t139 = (t138 + 1);
    xsi_vlogvar_wait_assign_value(t117, t116, 0, *((unsigned int *)t119), t139, 0LL);
    goto LAB41;

LAB42:
LAB45:    t5 = xsi_vlog_time(t140, 1000.0000000000000, 100.00000000000000);
    t7 = (t0 + 10912);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t23 = (t0 + 10912);
    t29 = (t23 + 56U);
    t30 = *((char **)t29);
    t34 = (t0 + 744);
    t35 = *((char **)t34);
    t34 = ((char*)((ng0)));
    memset(t22, 0, 8);
    xsi_vlog_signed_minus(t22, 32, t35, 32, t34, 32);
    xsi_vlogfile_write(1, 0, 0, ng53, 5, t0, (char)118, t140, 64, (char)118, t21, 4, (char)118, t30, 4, (char)119, t22, 32);
    goto LAB44;

}

static void Always_488_22(char *t0)
{
    char t6[8];
    char t22[8];
    char t36[8];
    char t37[8];
    char t45[8];
    char t85[8];
    char t111[8];
    char t112[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    unsigned int t123;
    int t124;
    char *t125;
    unsigned int t126;
    int t127;
    int t128;
    unsigned int t129;
    unsigned int t130;
    int t131;
    int t132;

LAB0:    t1 = (t0 + 25768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26656);
    *((int *)t2) = 1;
    t3 = (t0 + 25800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 8752U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t45, t22, 8);

LAB16:    t77 = (t45 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 2512);
    t35 = *((char **)t34);
    t34 = ((char*)((ng2)));
    memset(t36, 0, 8);
    xsi_vlog_signed_greater(t36, 32, t35, 32, t34, 32);
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t36);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t38) != 0)
        goto LAB19;

LAB20:    t46 = *((unsigned int *)t22);
    t47 = *((unsigned int *)t37);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t22 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t37) = 1;
    goto LAB20;

LAB19:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB20;

LAB21:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t22 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t22);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB23;

LAB24:
LAB27:    t83 = (t0 + 2512);
    t84 = *((char **)t83);
    t83 = (t0 + 14912);
    xsi_vlogvar_assign_value(t83, t84, 0, 0, 32);

LAB28:    t2 = (t0 + 14912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB29;

LAB30:    goto LAB26;

LAB29:
LAB31:    t8 = (t0 + 9072U);
    t21 = *((char **)t8);
    t8 = ((char*)((ng4)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    t29 = (t8 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t23);
    t18 = *((unsigned int *)t29);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t24 = *((unsigned int *)t23);
    t25 = *((unsigned int *)t29);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t20 & t27);
    if (t28 != 0)
        goto LAB35;

LAB32:    if (t26 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t22) = 1;

LAB35:    memset(t36, 0, 8);
    t34 = (t22 + 4);
    t31 = *((unsigned int *)t34);
    t32 = (~(t31));
    t33 = *((unsigned int *)t22);
    t39 = (t33 & t32);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t34) != 0)
        goto LAB38;

LAB39:    t38 = (t36 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t38);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB40;

LAB41:    memcpy(t85, t36, 8);

LAB42:    t101 = (t85 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (~(t102));
    t104 = *((unsigned int *)t85);
    t105 = (t104 & t103);
    t106 = (t105 != 0);
    if (t106 > 0)
        goto LAB54;

LAB55:
LAB62:    t2 = (t0 + 14912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB63;

LAB64:
LAB69:    t2 = (t0 + 13312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 13312);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 13312);
    t23 = (t21 + 64U);
    t29 = *((char **)t23);
    t30 = (t0 + 14912);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t38 = ((char*)((ng0)));
    memset(t22, 0, 8);
    xsi_vlog_signed_minus(t22, 32, t35, 32, t38, 32);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t29, 2, 1, t22, 32, 1);
    t44 = (t0 + 13312);
    t49 = (t0 + 13312);
    t50 = (t49 + 72U);
    t51 = *((char **)t50);
    t59 = (t0 + 13312);
    t60 = (t59 + 64U);
    t77 = *((char **)t60);
    t83 = (t0 + 14912);
    t84 = (t83 + 56U);
    t86 = *((char **)t84);
    xsi_vlog_generic_convert_array_indices(t36, t37, t51, t77, 2, 1, t86, 32, 1);
    t87 = (t36 + 4);
    t9 = *((unsigned int *)t87);
    t69 = (!(t9));
    t88 = (t37 + 4);
    t10 = *((unsigned int *)t88);
    t70 = (!(t10));
    t124 = (t69 && t70);
    if (t124 == 1)
        goto LAB70;

LAB71:
LAB65:    t2 = (t0 + 14912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB72;

LAB73:
LAB78:    t2 = (t0 + 13472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 13472);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 13472);
    t23 = (t21 + 64U);
    t29 = *((char **)t23);
    t30 = (t0 + 14912);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t38 = ((char*)((ng0)));
    memset(t22, 0, 8);
    xsi_vlog_signed_minus(t22, 32, t35, 32, t38, 32);
    xsi_vlog_generic_get_array_select_value(t6, 1, t4, t8, t29, 2, 1, t22, 32, 1);
    t44 = (t0 + 13472);
    t49 = (t0 + 13472);
    t50 = (t49 + 72U);
    t51 = *((char **)t50);
    t59 = (t0 + 13472);
    t60 = (t59 + 64U);
    t77 = *((char **)t60);
    t83 = (t0 + 14912);
    t84 = (t83 + 56U);
    t86 = *((char **)t84);
    xsi_vlog_generic_convert_array_indices(t36, t37, t51, t77, 2, 1, t86, 32, 1);
    t87 = (t36 + 4);
    t9 = *((unsigned int *)t87);
    t69 = (!(t9));
    t88 = (t37 + 4);
    t10 = *((unsigned int *)t88);
    t70 = (!(t10));
    t124 = (t69 && t70);
    if (t124 == 1)
        goto LAB79;

LAB80:
LAB74:
LAB56:    t2 = (t0 + 14912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 14912);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB28;

LAB34:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t36) = 1;
    goto LAB39;

LAB38:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB39;

LAB40:    t44 = (t0 + 8752U);
    t49 = *((char **)t44);
    t44 = ((char*)((ng4)));
    memset(t37, 0, 8);
    t50 = (t49 + 4);
    t51 = (t44 + 4);
    t46 = *((unsigned int *)t49);
    t47 = *((unsigned int *)t44);
    t48 = (t46 ^ t47);
    t52 = *((unsigned int *)t50);
    t53 = *((unsigned int *)t51);
    t54 = (t52 ^ t53);
    t55 = (t48 | t54);
    t56 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t51);
    t58 = (t56 | t57);
    t61 = (~(t58));
    t62 = (t55 & t61);
    if (t62 != 0)
        goto LAB46;

LAB43:    if (t58 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t37) = 1;

LAB46:    memset(t45, 0, 8);
    t60 = (t37 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (~(t63));
    t65 = *((unsigned int *)t37);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t60) != 0)
        goto LAB49;

LAB50:    t68 = *((unsigned int *)t36);
    t71 = *((unsigned int *)t45);
    t72 = (t68 & t71);
    *((unsigned int *)t85) = t72;
    t83 = (t36 + 4);
    t84 = (t45 + 4);
    t86 = (t85 + 4);
    t73 = *((unsigned int *)t83);
    t74 = *((unsigned int *)t84);
    t75 = (t73 | t74);
    *((unsigned int *)t86) = t75;
    t76 = *((unsigned int *)t86);
    t78 = (t76 != 0);
    if (t78 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB45:    t59 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t45) = 1;
    goto LAB50;

LAB49:    t77 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB50;

LAB51:    t79 = *((unsigned int *)t85);
    t80 = *((unsigned int *)t86);
    *((unsigned int *)t85) = (t79 | t80);
    t87 = (t36 + 4);
    t88 = (t45 + 4);
    t81 = *((unsigned int *)t36);
    t82 = (~(t81));
    t89 = *((unsigned int *)t87);
    t90 = (~(t89));
    t91 = *((unsigned int *)t45);
    t92 = (~(t91));
    t93 = *((unsigned int *)t88);
    t94 = (~(t93));
    t69 = (t82 & t90);
    t70 = (t92 & t94);
    t95 = (~(t69));
    t96 = (~(t70));
    t97 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t97 & t95);
    t98 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t98 & t96);
    t99 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t99 & t95);
    t100 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t100 & t96);
    goto LAB53;

LAB54:
LAB57:    t107 = (t0 + 13152);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    t110 = (t0 + 13312);
    t113 = (t0 + 13312);
    t114 = (t113 + 72U);
    t115 = *((char **)t114);
    t116 = (t0 + 13312);
    t117 = (t116 + 64U);
    t118 = *((char **)t117);
    t119 = (t0 + 14912);
    t120 = (t119 + 56U);
    t121 = *((char **)t120);
    xsi_vlog_generic_convert_array_indices(t111, t112, t115, t118, 2, 1, t121, 32, 1);
    t122 = (t111 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (!(t123));
    t125 = (t112 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (!(t126));
    t128 = (t124 && t127);
    if (t128 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng2)));
    t3 = (t0 + 13472);
    t4 = (t0 + 13472);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 13472);
    t21 = (t8 + 64U);
    t23 = *((char **)t21);
    t29 = (t0 + 14912);
    t30 = (t29 + 56U);
    t34 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t6, t22, t7, t23, 2, 1, t34, 32, 1);
    t35 = (t6 + 4);
    t9 = *((unsigned int *)t35);
    t69 = (!(t9));
    t38 = (t22 + 4);
    t10 = *((unsigned int *)t38);
    t70 = (!(t10));
    t124 = (t69 && t70);
    if (t124 == 1)
        goto LAB60;

LAB61:    goto LAB56;

LAB58:    t129 = *((unsigned int *)t111);
    t130 = *((unsigned int *)t112);
    t131 = (t129 - t130);
    t132 = (t131 + 1);
    xsi_vlogvar_wait_assign_value(t110, t109, 0, *((unsigned int *)t112), t132, 0LL);
    goto LAB59;

LAB60:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t22);
    t127 = (t11 - t12);
    t128 = (t127 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t22), t128, 0LL);
    goto LAB61;

LAB63:
LAB66:    t8 = (t0 + 10112);
    t21 = (t8 + 56U);
    t23 = *((char **)t21);
    t29 = (t0 + 13312);
    t30 = (t0 + 13312);
    t34 = (t30 + 72U);
    t35 = *((char **)t34);
    t38 = (t0 + 13312);
    t44 = (t38 + 64U);
    t49 = *((char **)t44);
    t50 = (t0 + 14912);
    t51 = (t50 + 56U);
    t59 = *((char **)t51);
    xsi_vlog_generic_convert_array_indices(t22, t36, t35, t49, 2, 1, t59, 32, 1);
    t60 = (t22 + 4);
    t14 = *((unsigned int *)t60);
    t69 = (!(t14));
    t77 = (t36 + 4);
    t15 = *((unsigned int *)t77);
    t70 = (!(t15));
    t124 = (t69 && t70);
    if (t124 == 1)
        goto LAB67;

LAB68:    goto LAB65;

LAB67:    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t36);
    t127 = (t16 - t17);
    t128 = (t127 + 1);
    xsi_vlogvar_wait_assign_value(t29, t23, 0, *((unsigned int *)t36), t128, 0LL);
    goto LAB68;

LAB70:    t11 = *((unsigned int *)t36);
    t12 = *((unsigned int *)t37);
    t127 = (t11 - t12);
    t128 = (t127 + 1);
    xsi_vlogvar_wait_assign_value(t44, t6, 0, *((unsigned int *)t37), t128, 0LL);
    goto LAB71;

LAB72:
LAB75:    t8 = (t0 + 12512);
    t21 = (t8 + 56U);
    t23 = *((char **)t21);
    t29 = (t0 + 13472);
    t30 = (t0 + 13472);
    t34 = (t30 + 72U);
    t35 = *((char **)t34);
    t38 = (t0 + 13472);
    t44 = (t38 + 64U);
    t49 = *((char **)t44);
    t50 = (t0 + 14912);
    t51 = (t50 + 56U);
    t59 = *((char **)t51);
    xsi_vlog_generic_convert_array_indices(t22, t36, t35, t49, 2, 1, t59, 32, 1);
    t60 = (t22 + 4);
    t14 = *((unsigned int *)t60);
    t69 = (!(t14));
    t77 = (t36 + 4);
    t15 = *((unsigned int *)t77);
    t70 = (!(t15));
    t124 = (t69 && t70);
    if (t124 == 1)
        goto LAB76;

LAB77:    goto LAB74;

LAB76:    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t36);
    t127 = (t16 - t17);
    t128 = (t127 + 1);
    xsi_vlogvar_wait_assign_value(t29, t23, 0, *((unsigned int *)t36), t128, 0LL);
    goto LAB77;

LAB79:    t11 = *((unsigned int *)t36);
    t12 = *((unsigned int *)t37);
    t127 = (t11 - t12);
    t128 = (t127 + 1);
    xsi_vlogvar_wait_assign_value(t44, t6, 0, *((unsigned int *)t37), t128, 0LL);
    goto LAB80;

}

static void Always_527_23(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 26016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 26672);
    *((int *)t2) = 1;
    t3 = (t0 + 26048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2512);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t4, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB10:    t2 = (t0 + 13472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 13472);
    t7 = (t5 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 13472);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 1, t4, t13, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 11712);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 1);
    t2 = (t0 + 13312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 13312);
    t7 = (t5 + 72U);
    t13 = *((char **)t7);
    t14 = (t0 + 13312);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t13, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 10272);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 8);

LAB8:    goto LAB2;

LAB6:
LAB9:    t13 = (t0 + 10112);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 10272);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 8);
    t2 = (t0 + 12512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11712);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB8;

}


extern void xilinxcorelib_ver_m_00000000003339124563_3600210637_init()
{
	static char *pe[] = {(void *)NetDecl_113_0,(void *)NetDecl_118_1,(void *)Cont_156_2,(void *)Cont_157_3,(void *)Cont_158_4,(void *)Cont_159_5,(void *)Cont_160_6,(void *)Cont_161_7,(void *)Initial_266_8,(void *)Always_291_9,(void *)Always_299_10,(void *)Always_307_11,(void *)Cont_315_12,(void *)Always_319_13,(void *)Always_333_14,(void *)Always_345_15,(void *)Always_355_16,(void *)Always_363_17,(void *)Always_385_18,(void *)Initial_396_19,(void *)Always_414_20,(void *)Always_473_21,(void *)Always_488_22,(void *)Always_527_23};
	static char *se[] = {(void *)sp_defval,(void *)sp_max,(void *)sp_a_is_X,(void *)sp_hexstr_conv};
	xsi_register_didat("xilinxcorelib_ver_m_00000000003339124563_3600210637", "isim/operation_test_v_isim_beh.exe.sim/xilinxcorelib_ver/m_00000000003339124563_3600210637.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
