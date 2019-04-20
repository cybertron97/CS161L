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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/csmajs/taror002/Desktop/CS161L-master/Lab2/fixedfloat.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {31, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {127, 0};
static int ng7[] = {23, 0};



static void Always_42_0(char *t0)
{
    char t8[8];
    char t14[8];
    char t38[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
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
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5328);
    *((int *)t2) = 1;
    t3 = (t0 + 4792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(55, ng0);

LAB12:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t0 + 2568);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t7, t11, 2, t12, 32, 1);
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t15 = (t8 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB16;

LAB13:    if (t26 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t14) = 1;

LAB16:    t30 = (t14 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(61, ng0);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB21:    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t5, 32, t7, 32);
    t9 = (t8 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2728);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 32, t10, 5);
    t11 = ((char*)((ng6)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t8, 32, t11, 32);
    t12 = (t0 + 3368);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 8);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    t9 = (t0 + 3048);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t7, 32, t11, 32);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_lshift(t14, 32, t5, 32, t8, 32);
    t12 = (t0 + 2568);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 8);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 8);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t21 & 16777215U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 16777215U);
    t10 = (t0 + 3688);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 23);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t14, 23, 23, 1U, t5, 23);
    t7 = (t0 + 3368);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t38, 8, 8, 1U, t10, 8);
    t11 = (t0 + 3208);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlogtype_concat(t50, 1, 1, 1U, t13, 1);
    xsi_vlogtype_concat(t8, 32, 32, 3U, t50, 1, t38, 8, t14, 23);
    t15 = (t0 + 2248);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 32);
    goto LAB11;

LAB9:    xsi_set_current_line(80, ng0);

LAB33:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t8) = t19;
    t20 = *((unsigned int *)t10);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t9) = t22;
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 23);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 23);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t21 & 255U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 255U);
    t10 = ((char*)((ng6)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t8, 32, t10, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t7 = (t8 + 4);
    t9 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 0);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t21 & 8388607U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 8388607U);
    t10 = (t0 + 3688);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 23);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = (t0 + 2728);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t7, 32, t11, 5);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t2, 32, t8, 32);
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t5, 32, t7, 32);
    t9 = (t8 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_leq(t8, 32, t5, 32, t7, 32);
    t9 = (t8 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB38;

LAB39:
LAB40:
LAB36:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t9);
    t25 = *((unsigned int *)t10);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB45;

LAB42:    if (t26 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t8) = 1;

LAB45:    t12 = (t8 + 4);
    t31 = *((unsigned int *)t12);
    t32 = (~(t31));
    t33 = *((unsigned int *)t8);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    goto LAB11;

LAB15:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(57, ng0);

LAB20:    xsi_set_current_line(58, ng0);
    t36 = ((char*)((ng4)));
    t37 = (t0 + 3208);
    xsi_vlogvar_assign_value(t37, t36, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_unary_minus(t8, 32, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB19;

LAB22:    xsi_set_current_line(62, ng0);

LAB24:    xsi_set_current_line(63, ng0);
    t10 = (t0 + 1368U);
    t11 = *((char **)t10);
    t10 = (t0 + 1328U);
    t12 = (t10 + 72U);
    t13 = *((char **)t12);
    t15 = (t0 + 2888);
    t16 = (t15 + 56U);
    t29 = *((char **)t16);
    xsi_vlog_generic_get_index_select_value(t14, 32, t11, t13, 2, t29, 32, 1);
    t30 = ((char*)((ng3)));
    memset(t38, 0, 8);
    t36 = (t14 + 4);
    t37 = (t30 + 4);
    t22 = *((unsigned int *)t14);
    t23 = *((unsigned int *)t30);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t36);
    t26 = *((unsigned int *)t37);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t31 = *((unsigned int *)t36);
    t32 = *((unsigned int *)t37);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t28 & t34);
    if (t35 != 0)
        goto LAB28;

LAB25:    if (t33 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t38) = 1;

LAB28:    t40 = (t38 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t38);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t7, 32);
    t9 = (t0 + 2888);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB21;

LAB27:    t39 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(64, ng0);

LAB32:    xsi_set_current_line(65, ng0);
    t46 = (t0 + 2888);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t0 + 3048);
    xsi_vlogvar_assign_value(t49, t48, 0, 0, 32);
    goto LAB31;

LAB34:    xsi_set_current_line(86, ng0);

LAB37:    xsi_set_current_line(87, ng0);
    t10 = (t0 + 3848);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 3048);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_rshift(t14, 32, t12, 32, t16, 32);
    t29 = (t0 + 3848);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 32);
    goto LAB36;

LAB38:    xsi_set_current_line(90, ng0);

LAB41:    xsi_set_current_line(91, ng0);
    t10 = (t0 + 3848);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 3048);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    xsi_vlog_signed_unary_minus(t14, 32, t16, 32);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_lshift(t38, 32, t12, 32, t14, 32);
    t29 = (t0 + 3848);
    xsi_vlogvar_assign_value(t29, t38, 0, 0, 32);
    goto LAB40;

LAB44:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(94, ng0);

LAB49:    xsi_set_current_line(95, ng0);
    t13 = (t0 + 3848);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_unary_minus(t14, 32, t16, 32);
    t29 = (t0 + 3848);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 32);
    goto LAB48;

}

static void Always_113_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5344);
    *((int *)t2) = 1;
    t3 = (t0 + 5040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(113, ng0);

LAB5:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 1208U);
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
LAB12:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t31, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t31) = 1;

LAB17:    memset(t30, 0, 8);
    t8 = (t31 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t31);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t8) != 0)
        goto LAB20;

LAB21:    t22 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t22);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB22;

LAB23:    t36 = *((unsigned int *)t30);
    t37 = (~(t36));
    t38 = *((unsigned int *)t22);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t22) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t30) > 0)
        goto LAB28;

LAB29:    memcpy(t6, t42, 8);

LAB30:    t43 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t43, t6, 0, 0, 32, 0LL);
    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(116, ng0);

LAB13:    xsi_set_current_line(117, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    t7 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t30) = 1;
    goto LAB21;

LAB20:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB22:    t28 = (t0 + 2408);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    goto LAB23;

LAB24:    t40 = (t0 + 2248);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t6, 32, t35, 32, t42, 32);
    goto LAB30;

LAB28:    memcpy(t6, t35, 8);
    goto LAB30;

}


extern void work_m_01746329537070797303_0029548194_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Always_113_1};
	xsi_register_didat("work_m_01746329537070797303_0029548194", "isim/test_float_tb_isim_beh.exe.sim/work/m_01746329537070797303_0029548194.didat");
	xsi_register_executes(pe);
}
