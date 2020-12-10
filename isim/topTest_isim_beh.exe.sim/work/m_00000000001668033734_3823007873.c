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
static const char *ng0 = "C:/Users/nino/Desktop/TsotneLab/470labhw7-7segment_display/sevenSegmentDisplay/top.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {15, 0};
static int ng4[] = {12, 0};
static int ng5[] = {5, 0};
static int ng6[] = {11, 0};
static int ng7[] = {8, 0};
static int ng8[] = {9, 0};
static int ng9[] = {7, 0};
static int ng10[] = {4, 0};
static int ng11[] = {3, 0};
static unsigned int ng12[] = {14U, 0U};
static unsigned int ng13[] = {64U, 0U};
static unsigned int ng14[] = {121U, 0U};
static int ng15[] = {2, 0};
static unsigned int ng16[] = {36U, 0U};
static unsigned int ng17[] = {48U, 0U};
static unsigned int ng18[] = {25U, 0U};
static unsigned int ng19[] = {18U, 0U};
static int ng20[] = {6, 0};
static unsigned int ng21[] = {32U, 0U};
static unsigned int ng22[] = {120U, 0U};
static unsigned int ng23[] = {0U, 0U};
static unsigned int ng24[] = {16U, 0U};
static unsigned int ng25[] = {13U, 0U};
static unsigned int ng26[] = {11U, 0U};
static unsigned int ng27[] = {7U, 0U};



static void Always_14_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4280);
    *((int *)t2) = 1;
    t3 = (t0 + 3496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 2064);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 15, t7, 32);
    t9 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 15, 0LL);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB9;

LAB6:    if (t19 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(18, ng0);

LAB13:    xsi_set_current_line(19, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 15, 0LL);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t5) == 0)
        goto LAB14;

LAB16:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB17:    t7 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t8) = 1;
    goto LAB17;

}

static void Cont_24_1(char *t0)
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

LAB0:    t1 = (t0 + 3712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4392);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 4296);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_29_2(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    unsigned int t18;
    int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4312);
    *((int *)t2) = 1;
    t3 = (t0 + 3992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2384);
    t9 = (t0 + 2384);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    t13 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2384);
    t4 = (t0 + 2384);
    t5 = (t4 + 72U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng6)));
    t11 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t6 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    t13 = (t7 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t14 = (t8 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2384);
    t4 = (t0 + 2384);
    t5 = (t4 + 72U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng9)));
    t11 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t6 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    t13 = (t7 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t14 = (t8 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2384);
    t4 = (t0 + 2384);
    t5 = (t4 + 72U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng11)));
    t11 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t6 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    t13 = (t7 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t14 = (t8 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB14:    t5 = ((char*)((ng2)));
    t16 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t16 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t16 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng15)));
    t16 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t16 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t16 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t16 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB6:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t5, t4, t26, *((unsigned int *)t7), t30);
    goto LAB7;

LAB8:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, t26, *((unsigned int *)t7), t30);
    goto LAB9;

LAB10:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, t26, *((unsigned int *)t7), t30);
    goto LAB11;

LAB12:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t3, t2, t26, *((unsigned int *)t7), t30);
    goto LAB13;

LAB15:    xsi_set_current_line(36, ng0);

LAB24:    xsi_set_current_line(37, ng0);
    t9 = ((char*)((ng12)));
    t10 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 4, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t9 = (t6 + 4);
    t10 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t18 = (t15 >> 12);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t10);
    t25 = (t22 >> 12);
    *((unsigned int *)t9) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 15U);
    t28 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t28 & 15U);

LAB25:    t11 = ((char*)((ng2)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 32, t11, 32);
    if (t16 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t16 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng15)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t16 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng11)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t16 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng10)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t16 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t16 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng20)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t16 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng9)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t16 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng7)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t16 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng8)));
    t16 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t16 == 1)
        goto LAB44;

LAB45:
LAB47:
LAB46:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB48:    goto LAB23;

LAB17:    xsi_set_current_line(53, ng0);

LAB49:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng25)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t18 = (t15 >> 8);
    *((unsigned int *)t7) = t18;
    t22 = *((unsigned int *)t10);
    t25 = (t22 >> 8);
    *((unsigned int *)t9) = t25;
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 15U);
    t28 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t28 & 15U);

LAB50:    t11 = ((char*)((ng2)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 32, t11, 32);
    if (t16 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 32, t2, 32);
    if (t16 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng15)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 32, t2, 32);
    if (t16 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng11)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 32, t2, 32);
    if (t16 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng10)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 32, t2, 32);
    if (t16 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 32, t2, 32);
    if (t16 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng20)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 32, t2, 32);
    if (t16 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng9)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 32, t2, 32);
    if (t16 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng7)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 32, t2, 32);
    if (t16 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng8)));
    t16 = xsi_vlog_unsigned_case_compare(t7, 32, t2, 32);
    if (t16 == 1)
        goto LAB69;

LAB70:
LAB72:
LAB71:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB73:    goto LAB23;

LAB19:    xsi_set_current_line(70, ng0);

LAB74:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t18 = (t15 >> 4);
    *((unsigned int *)t8) = t18;
    t22 = *((unsigned int *)t10);
    t25 = (t22 >> 4);
    *((unsigned int *)t9) = t25;
    t27 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t27 & 15U);
    t28 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t28 & 15U);

LAB75:    t11 = ((char*)((ng2)));
    t16 = xsi_vlog_unsigned_case_compare(t8, 32, t11, 32);
    if (t16 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t16 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng15)));
    t16 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t16 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng11)));
    t16 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t16 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng10)));
    t16 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t16 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t16 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng20)));
    t16 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t16 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng9)));
    t16 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t16 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng7)));
    t16 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t16 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng8)));
    t16 = xsi_vlog_unsigned_case_compare(t8, 32, t2, 32);
    if (t16 == 1)
        goto LAB94;

LAB95:
LAB97:
LAB96:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB98:    goto LAB23;

LAB21:    xsi_set_current_line(87, ng0);

LAB99:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng27)));
    t5 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t31, 0, 8);
    t9 = (t31 + 4);
    t10 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t18 = (t15 >> 0);
    *((unsigned int *)t31) = t18;
    t22 = *((unsigned int *)t10);
    t25 = (t22 >> 0);
    *((unsigned int *)t9) = t25;
    t27 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t27 & 15U);
    t28 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t28 & 15U);

LAB100:    t11 = ((char*)((ng2)));
    t16 = xsi_vlog_unsigned_case_compare(t31, 32, t11, 32);
    if (t16 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t31, 32, t2, 32);
    if (t16 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng15)));
    t16 = xsi_vlog_unsigned_case_compare(t31, 32, t2, 32);
    if (t16 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng11)));
    t16 = xsi_vlog_unsigned_case_compare(t31, 32, t2, 32);
    if (t16 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng10)));
    t16 = xsi_vlog_unsigned_case_compare(t31, 32, t2, 32);
    if (t16 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t31, 32, t2, 32);
    if (t16 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng20)));
    t16 = xsi_vlog_unsigned_case_compare(t31, 32, t2, 32);
    if (t16 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng9)));
    t16 = xsi_vlog_unsigned_case_compare(t31, 32, t2, 32);
    if (t16 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng7)));
    t16 = xsi_vlog_unsigned_case_compare(t31, 32, t2, 32);
    if (t16 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng8)));
    t16 = xsi_vlog_unsigned_case_compare(t31, 32, t2, 32);
    if (t16 == 1)
        goto LAB119;

LAB120:
LAB122:
LAB121:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB123:    goto LAB23;

LAB26:    xsi_set_current_line(40, ng0);
    t12 = ((char*)((ng13)));
    t13 = (t0 + 1744);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 7);
    goto LAB48;

LAB28:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB48;

LAB30:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB48;

LAB32:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB48;

LAB34:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB48;

LAB36:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB48;

LAB38:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB48;

LAB40:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB48;

LAB42:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB48;

LAB44:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB48;

LAB51:    xsi_set_current_line(57, ng0);
    t12 = ((char*)((ng13)));
    t13 = (t0 + 1744);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 7);
    goto LAB73;

LAB53:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB55:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB57:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB59:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB61:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB63:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB65:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB67:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB69:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB73;

LAB76:    xsi_set_current_line(74, ng0);
    t12 = ((char*)((ng13)));
    t13 = (t0 + 1744);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 7);
    goto LAB98;

LAB78:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB98;

LAB80:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB98;

LAB82:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB98;

LAB84:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB98;

LAB86:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB98;

LAB88:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB98;

LAB90:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB98;

LAB92:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB98;

LAB94:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB98;

LAB101:    xsi_set_current_line(91, ng0);
    t12 = ((char*)((ng13)));
    t13 = (t0 + 1744);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 7);
    goto LAB123;

LAB103:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB123;

LAB105:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB123;

LAB107:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB123;

LAB109:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB123;

LAB111:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng19)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB123;

LAB113:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB123;

LAB115:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB123;

LAB117:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng23)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB123;

LAB119:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 1744);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB123;

}


extern void work_m_00000000001668033734_3823007873_init()
{
	static char *pe[] = {(void *)Always_14_0,(void *)Cont_24_1,(void *)Always_29_2};
	xsi_register_didat("work_m_00000000001668033734_3823007873", "isim/topTest_isim_beh.exe.sim/work/m_00000000001668033734_3823007873.didat");
	xsi_register_executes(pe);
}
