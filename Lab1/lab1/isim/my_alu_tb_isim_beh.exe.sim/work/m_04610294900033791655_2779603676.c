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
static const char *ng0 = "/home/csmajs/taror002/Desktop/Lab1/lab1/my_alu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};



static void Cont_22_0(char *t0)
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

LAB0:    t1 = (t0 + 3936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 5128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t2, 0, 15);
    t16 = (t0 + 5000);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_23_1(char *t0)
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

LAB0:    t1 = (t0 + 4184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    t2 = (t0 + 5192);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
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
    xsi_driver_vfirst_trans(t2, 0, 15);
    t16 = (t0 + 5016);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_25_2(char *t0)
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

LAB0:    t1 = (t0 + 4432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
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
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 5032);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_27_3(char *t0)
{
    char t14[8];
    char t17[8];
    char t29[8];
    char t32[8];
    char t40[8];
    char t79[8];
    char t80[8];
    char t81[8];
    char t115[8];
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
    int t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;

LAB0:    t1 = (t0 + 4680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 5048);
    *((int *)t2) = 1;
    t3 = (t0 + 4712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);

LAB10:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(94, ng0);

LAB232:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_signed_unary_minus(t14, 32, t2, 32);
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 16);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2704);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB30:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1824U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_signed_equal(t14, 32, t4, 16, t2, 32);
    t5 = (t14 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB233;

LAB234:    xsi_set_current_line(106, ng0);

LAB237:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2864);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB235:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(29, ng0);

LAB9:    xsi_set_current_line(30, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3024);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 16);
    goto LAB8;

LAB12:    xsi_set_current_line(39, ng0);

LAB31:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t0 + 1504U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 16, t5, 16, t11, 16);
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 16);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 1344U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB33;

LAB32:    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t5) < *((unsigned int *)t12))
        goto LAB34;

LAB35:    memset(t17, 0, 8);
    t18 = (t14 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t18) != 0)
        goto LAB39;

LAB40:    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB41;

LAB42:    memcpy(t40, t17, 8);

LAB43:    t71 = (t40 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(44, ng0);

LAB60:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2544);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB58:    goto LAB30;

LAB14:    xsi_set_current_line(48, ng0);

LAB61:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1984U);
    t5 = *((char **)t4);
    t4 = (t0 + 2144U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 16, t5, 16, t11, 16);
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 16);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_signed_greatereq(t14, 32, t4, 16, t2, 32);
    memset(t17, 0, 8);
    t5 = (t14 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t5) != 0)
        goto LAB64;

LAB65:    t12 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB66;

LAB67:    memcpy(t81, t17, 8);

LAB68:    t107 = (t81 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t81);
    t111 = (t110 & t109);
    t112 = (t111 != 0);
    if (t112 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_signed_less(t14, 32, t4, 16, t2, 32);
    memset(t17, 0, 8);
    t5 = (t14 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t5) != 0)
        goto LAB94;

LAB95:    t12 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB96;

LAB97:    memcpy(t40, t17, 8);

LAB98:    memset(t79, 0, 8);
    t28 = (t40 + 4);
    t72 = *((unsigned int *)t28);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t28) != 0)
        goto LAB108;

LAB109:    t31 = (t79 + 4);
    t82 = *((unsigned int *)t79);
    t83 = *((unsigned int *)t31);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB110;

LAB111:    memcpy(t115, t79, 8);

LAB112:    t107 = (t115 + 4);
    t121 = *((unsigned int *)t107);
    t122 = (~(t121));
    t123 = *((unsigned int *)t115);
    t124 = (t123 & t122);
    t125 = (t124 != 0);
    if (t125 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(58, ng0);

LAB124:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2704);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB122:
LAB90:    goto LAB30;

LAB16:    xsi_set_current_line(61, ng0);

LAB125:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t0 + 1504U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 16, t5, 16, t11, 16);
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 16);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 1344U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB127;

LAB126:    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB127;

LAB130:    if (*((unsigned int *)t5) > *((unsigned int *)t12))
        goto LAB128;

LAB129:    memset(t17, 0, 8);
    t18 = (t14 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB131;

LAB132:    if (*((unsigned int *)t18) != 0)
        goto LAB133;

LAB134:    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB135;

LAB136:    memcpy(t40, t17, 8);

LAB137:    t71 = (t40 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB150;

LAB151:    xsi_set_current_line(66, ng0);

LAB154:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2544);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB152:    goto LAB30;

LAB18:    xsi_set_current_line(70, ng0);

LAB155:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 1984U);
    t5 = *((char **)t4);
    t4 = (t0 + 2144U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 16, t5, 16, t11, 16);
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 16);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_signed_less(t14, 32, t4, 16, t2, 32);
    memset(t17, 0, 8);
    t5 = (t14 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB156;

LAB157:    if (*((unsigned int *)t5) != 0)
        goto LAB158;

LAB159:    t12 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB160;

LAB161:    memcpy(t81, t17, 8);

LAB162:    t107 = (t81 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t81);
    t111 = (t110 & t109);
    t112 = (t111 != 0);
    if (t112 > 0)
        goto LAB182;

LAB183:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1984U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_signed_greatereq(t14, 32, t4, 16, t2, 32);
    memset(t17, 0, 8);
    t5 = (t14 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB186;

LAB187:    if (*((unsigned int *)t5) != 0)
        goto LAB188;

LAB189:    t12 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB190;

LAB191:    memcpy(t40, t17, 8);

LAB192:    memset(t79, 0, 8);
    t28 = (t40 + 4);
    t72 = *((unsigned int *)t28);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB200;

LAB201:    if (*((unsigned int *)t28) != 0)
        goto LAB202;

LAB203:    t31 = (t79 + 4);
    t82 = *((unsigned int *)t79);
    t83 = *((unsigned int *)t31);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB204;

LAB205:    memcpy(t115, t79, 8);

LAB206:    t107 = (t115 + 4);
    t121 = *((unsigned int *)t107);
    t122 = (~(t121));
    t123 = *((unsigned int *)t115);
    t124 = (t123 & t122);
    t125 = (t124 != 0);
    if (t125 > 0)
        goto LAB214;

LAB215:    xsi_set_current_line(80, ng0);

LAB218:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2704);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB216:
LAB184:    goto LAB30;

LAB20:    xsi_set_current_line(82, ng0);

LAB219:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t0 + 1504U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 & t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t15 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t21 = (t9 | t10);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB220;

LAB221:
LAB222:    t19 = (t0 + 3024);
    xsi_vlogvar_assign_value(t19, t14, 0, 0, 16);
    goto LAB30;

LAB22:    xsi_set_current_line(85, ng0);

LAB223:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t0 + 1504U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 | t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t15 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t21 = (t9 | t10);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB224;

LAB225:
LAB226:    t19 = (t0 + 3024);
    xsi_vlogvar_assign_value(t19, t14, 0, 0, 16);
    goto LAB30;

LAB24:    xsi_set_current_line(88, ng0);

LAB227:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t0 + 1504U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t15 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t21 = (t9 | t10);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB228;

LAB229:
LAB230:    t16 = (t0 + 3024);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 16);
    goto LAB30;

LAB26:    xsi_set_current_line(91, ng0);

LAB231:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t14, 16, t5, 16, t4, 32);
    t11 = (t0 + 3024);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 16);
    goto LAB30;

LAB33:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t14) = 1;
    goto LAB35;

LAB37:    *((unsigned int *)t17) = 1;
    goto LAB40;

LAB39:    t19 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB40;

LAB41:    t24 = (t0 + 3024);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 1504U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t27 = (t26 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB45;

LAB44:    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB45;

LAB48:    if (*((unsigned int *)t26) < *((unsigned int *)t28))
        goto LAB46;

LAB47:    memset(t32, 0, 8);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t33) != 0)
        goto LAB51;

LAB52:    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t17 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB43;

LAB45:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB47;

LAB46:    *((unsigned int *)t29) = 1;
    goto LAB47;

LAB49:    *((unsigned int *)t32) = 1;
    goto LAB52;

LAB51:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB52;

LAB53:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t17 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t17);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t13 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t13));
    t66 = (~(t64));
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB55;

LAB56:    xsi_set_current_line(41, ng0);

LAB59:    xsi_set_current_line(42, ng0);
    t77 = ((char*)((ng3)));
    t78 = (t0 + 2544);
    xsi_vlogvar_assign_value(t78, t77, 0, 0, 1);
    goto LAB58;

LAB62:    *((unsigned int *)t17) = 1;
    goto LAB65;

LAB64:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB65;

LAB66:    t15 = (t0 + 2144U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_greatereq(t29, 32, t16, 16, t15, 32);
    t18 = (t0 + 3024);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t32, 0, 8);
    t24 = (t20 + 4);
    t34 = *((unsigned int *)t20);
    t35 = *((unsigned int *)t24);
    t36 = (t34 | t35);
    if (t36 != 65535U)
        goto LAB70;

LAB69:    if (*((unsigned int *)t24) == 0)
        goto LAB71;

LAB72:    t25 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t25) = 1;

LAB70:    t26 = ((char*)((ng1)));
    memset(t40, 0, 8);
    t27 = (t32 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB74;

LAB73:    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB74;

LAB77:    if (*((unsigned int *)t32) < *((unsigned int *)t26))
        goto LAB75;

LAB76:    t37 = *((unsigned int *)t29);
    t38 = *((unsigned int *)t40);
    t41 = (t37 & t38);
    *((unsigned int *)t79) = t41;
    t31 = (t29 + 4);
    t33 = (t40 + 4);
    t39 = (t79 + 4);
    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t33);
    t47 = (t42 | t43);
    *((unsigned int *)t39) = t47;
    t48 = *((unsigned int *)t39);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB78;

LAB79:
LAB80:    memset(t80, 0, 8);
    t46 = (t79 + 4);
    t69 = *((unsigned int *)t46);
    t70 = (~(t69));
    t72 = *((unsigned int *)t79);
    t73 = (t72 & t70);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t46) != 0)
        goto LAB83;

LAB84:    t75 = *((unsigned int *)t17);
    t76 = *((unsigned int *)t80);
    t82 = (t75 & t76);
    *((unsigned int *)t81) = t82;
    t55 = (t17 + 4);
    t71 = (t80 + 4);
    t77 = (t81 + 4);
    t83 = *((unsigned int *)t55);
    t84 = *((unsigned int *)t71);
    t85 = (t83 | t84);
    *((unsigned int *)t77) = t85;
    t86 = *((unsigned int *)t77);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB68;

LAB71:    *((unsigned int *)t32) = 1;
    goto LAB70;

LAB74:    t30 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB76;

LAB75:    *((unsigned int *)t40) = 1;
    goto LAB76;

LAB78:    t50 = *((unsigned int *)t79);
    t51 = *((unsigned int *)t39);
    *((unsigned int *)t79) = (t50 | t51);
    t44 = (t29 + 4);
    t45 = (t40 + 4);
    t52 = *((unsigned int *)t29);
    t53 = (~(t52));
    t56 = *((unsigned int *)t44);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (~(t58));
    t60 = *((unsigned int *)t45);
    t61 = (~(t60));
    t13 = (t53 & t57);
    t64 = (t59 & t61);
    t62 = (~(t13));
    t63 = (~(t64));
    t65 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t65 & t62);
    t66 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t66 & t63);
    t67 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t67 & t62);
    t68 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t68 & t63);
    goto LAB80;

LAB81:    *((unsigned int *)t80) = 1;
    goto LAB84;

LAB83:    t54 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB84;

LAB85:    t88 = *((unsigned int *)t81);
    t89 = *((unsigned int *)t77);
    *((unsigned int *)t81) = (t88 | t89);
    t78 = (t17 + 4);
    t90 = (t80 + 4);
    t91 = *((unsigned int *)t17);
    t92 = (~(t91));
    t93 = *((unsigned int *)t78);
    t94 = (~(t93));
    t95 = *((unsigned int *)t80);
    t96 = (~(t95));
    t97 = *((unsigned int *)t90);
    t98 = (~(t97));
    t99 = (t92 & t94);
    t100 = (t96 & t98);
    t101 = (~(t99));
    t102 = (~(t100));
    t103 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t103 & t101);
    t104 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t104 & t102);
    t105 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t105 & t101);
    t106 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t106 & t102);
    goto LAB87;

LAB88:    xsi_set_current_line(51, ng0);

LAB91:    xsi_set_current_line(52, ng0);
    t113 = ((char*)((ng3)));
    t114 = (t0 + 2704);
    xsi_vlogvar_assign_value(t114, t113, 0, 0, 1);
    goto LAB90;

LAB92:    *((unsigned int *)t17) = 1;
    goto LAB95;

LAB94:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB95;

LAB96:    t15 = (t0 + 2144U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_less(t29, 32, t16, 16, t15, 32);
    memset(t32, 0, 8);
    t18 = (t29 + 4);
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t18) != 0)
        goto LAB101;

LAB102:    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t20 = (t17 + 4);
    t24 = (t32 + 4);
    t25 = (t40 + 4);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t24);
    t49 = (t47 | t48);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t25);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB103;

LAB104:
LAB105:    goto LAB98;

LAB99:    *((unsigned int *)t32) = 1;
    goto LAB102;

LAB101:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB102;

LAB103:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t40) = (t52 | t53);
    t26 = (t17 + 4);
    t27 = (t32 + 4);
    t56 = *((unsigned int *)t17);
    t57 = (~(t56));
    t58 = *((unsigned int *)t26);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (~(t62));
    t13 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t13));
    t66 = (~(t64));
    t67 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t67 & t65);
    t68 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB105;

LAB106:    *((unsigned int *)t79) = 1;
    goto LAB109;

LAB108:    t30 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB109;

LAB110:    t33 = (t0 + 3024);
    t39 = (t33 + 56U);
    t44 = *((char **)t39);
    t45 = ((char*)((ng1)));
    memset(t80, 0, 8);
    xsi_vlog_signed_greatereq(t80, 32, t44, 16, t45, 32);
    memset(t81, 0, 8);
    t46 = (t80 + 4);
    t85 = *((unsigned int *)t46);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t46) != 0)
        goto LAB115;

LAB116:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t81);
    t93 = (t91 & t92);
    *((unsigned int *)t115) = t93;
    t55 = (t79 + 4);
    t71 = (t81 + 4);
    t77 = (t115 + 4);
    t94 = *((unsigned int *)t55);
    t95 = *((unsigned int *)t71);
    t96 = (t94 | t95);
    *((unsigned int *)t77) = t96;
    t97 = *((unsigned int *)t77);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB117;

LAB118:
LAB119:    goto LAB112;

LAB113:    *((unsigned int *)t81) = 1;
    goto LAB116;

LAB115:    t54 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB116;

LAB117:    t101 = *((unsigned int *)t115);
    t102 = *((unsigned int *)t77);
    *((unsigned int *)t115) = (t101 | t102);
    t78 = (t79 + 4);
    t90 = (t81 + 4);
    t103 = *((unsigned int *)t79);
    t104 = (~(t103));
    t105 = *((unsigned int *)t78);
    t106 = (~(t105));
    t108 = *((unsigned int *)t81);
    t109 = (~(t108));
    t110 = *((unsigned int *)t90);
    t111 = (~(t110));
    t99 = (t104 & t106);
    t100 = (t109 & t111);
    t112 = (~(t99));
    t116 = (~(t100));
    t117 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t117 & t112);
    t118 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t118 & t116);
    t119 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t119 & t112);
    t120 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t120 & t116);
    goto LAB119;

LAB120:    xsi_set_current_line(55, ng0);

LAB123:    xsi_set_current_line(56, ng0);
    t113 = ((char*)((ng3)));
    t114 = (t0 + 2704);
    xsi_vlogvar_assign_value(t114, t113, 0, 0, 1);
    goto LAB122;

LAB127:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB129;

LAB128:    *((unsigned int *)t14) = 1;
    goto LAB129;

LAB131:    *((unsigned int *)t17) = 1;
    goto LAB134;

LAB133:    t19 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB134;

LAB135:    t24 = (t0 + 3024);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 1504U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t27 = (t26 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB139;

LAB138:    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB139;

LAB142:    if (*((unsigned int *)t26) > *((unsigned int *)t28))
        goto LAB140;

LAB141:    memset(t32, 0, 8);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t33) != 0)
        goto LAB145;

LAB146:    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t17 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB147;

LAB148:
LAB149:    goto LAB137;

LAB139:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB141;

LAB140:    *((unsigned int *)t29) = 1;
    goto LAB141;

LAB143:    *((unsigned int *)t32) = 1;
    goto LAB146;

LAB145:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB146;

LAB147:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t17 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t17);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t13 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t13));
    t66 = (~(t64));
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB149;

LAB150:    xsi_set_current_line(63, ng0);

LAB153:    xsi_set_current_line(64, ng0);
    t77 = ((char*)((ng3)));
    t78 = (t0 + 2544);
    xsi_vlogvar_assign_value(t78, t77, 0, 0, 1);
    goto LAB152;

LAB156:    *((unsigned int *)t17) = 1;
    goto LAB159;

LAB158:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB159;

LAB160:    t15 = (t0 + 2144U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_greatereq(t29, 32, t16, 16, t15, 32);
    t18 = (t0 + 3024);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t32, 0, 8);
    t24 = (t20 + 4);
    t34 = *((unsigned int *)t20);
    t35 = *((unsigned int *)t24);
    t36 = (t34 | t35);
    if (t36 != 65535U)
        goto LAB164;

LAB163:    if (*((unsigned int *)t24) == 0)
        goto LAB165;

LAB166:    t25 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t25) = 1;

LAB164:    t26 = ((char*)((ng1)));
    memset(t40, 0, 8);
    t27 = (t32 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB168;

LAB167:    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB168;

LAB171:    if (*((unsigned int *)t32) < *((unsigned int *)t26))
        goto LAB170;

LAB169:    *((unsigned int *)t40) = 1;

LAB170:    t37 = *((unsigned int *)t29);
    t38 = *((unsigned int *)t40);
    t41 = (t37 & t38);
    *((unsigned int *)t79) = t41;
    t31 = (t29 + 4);
    t33 = (t40 + 4);
    t39 = (t79 + 4);
    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t33);
    t47 = (t42 | t43);
    *((unsigned int *)t39) = t47;
    t48 = *((unsigned int *)t39);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB172;

LAB173:
LAB174:    memset(t80, 0, 8);
    t46 = (t79 + 4);
    t69 = *((unsigned int *)t46);
    t70 = (~(t69));
    t72 = *((unsigned int *)t79);
    t73 = (t72 & t70);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB175;

LAB176:    if (*((unsigned int *)t46) != 0)
        goto LAB177;

LAB178:    t75 = *((unsigned int *)t17);
    t76 = *((unsigned int *)t80);
    t82 = (t75 & t76);
    *((unsigned int *)t81) = t82;
    t55 = (t17 + 4);
    t71 = (t80 + 4);
    t77 = (t81 + 4);
    t83 = *((unsigned int *)t55);
    t84 = *((unsigned int *)t71);
    t85 = (t83 | t84);
    *((unsigned int *)t77) = t85;
    t86 = *((unsigned int *)t77);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB179;

LAB180:
LAB181:    goto LAB162;

LAB165:    *((unsigned int *)t32) = 1;
    goto LAB164;

LAB168:    t30 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB170;

LAB172:    t50 = *((unsigned int *)t79);
    t51 = *((unsigned int *)t39);
    *((unsigned int *)t79) = (t50 | t51);
    t44 = (t29 + 4);
    t45 = (t40 + 4);
    t52 = *((unsigned int *)t29);
    t53 = (~(t52));
    t56 = *((unsigned int *)t44);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (~(t58));
    t60 = *((unsigned int *)t45);
    t61 = (~(t60));
    t13 = (t53 & t57);
    t64 = (t59 & t61);
    t62 = (~(t13));
    t63 = (~(t64));
    t65 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t65 & t62);
    t66 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t66 & t63);
    t67 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t67 & t62);
    t68 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t68 & t63);
    goto LAB174;

LAB175:    *((unsigned int *)t80) = 1;
    goto LAB178;

LAB177:    t54 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB178;

LAB179:    t88 = *((unsigned int *)t81);
    t89 = *((unsigned int *)t77);
    *((unsigned int *)t81) = (t88 | t89);
    t78 = (t17 + 4);
    t90 = (t80 + 4);
    t91 = *((unsigned int *)t17);
    t92 = (~(t91));
    t93 = *((unsigned int *)t78);
    t94 = (~(t93));
    t95 = *((unsigned int *)t80);
    t96 = (~(t95));
    t97 = *((unsigned int *)t90);
    t98 = (~(t97));
    t99 = (t92 & t94);
    t100 = (t96 & t98);
    t101 = (~(t99));
    t102 = (~(t100));
    t103 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t103 & t101);
    t104 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t104 & t102);
    t105 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t105 & t101);
    t106 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t106 & t102);
    goto LAB181;

LAB182:    xsi_set_current_line(73, ng0);

LAB185:    xsi_set_current_line(74, ng0);
    t113 = ((char*)((ng3)));
    t114 = (t0 + 2704);
    xsi_vlogvar_assign_value(t114, t113, 0, 0, 1);
    goto LAB184;

LAB186:    *((unsigned int *)t17) = 1;
    goto LAB189;

LAB188:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB189;

LAB190:    t15 = (t0 + 2144U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_signed_less(t29, 32, t16, 16, t15, 32);
    memset(t32, 0, 8);
    t18 = (t29 + 4);
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB193;

LAB194:    if (*((unsigned int *)t18) != 0)
        goto LAB195;

LAB196:    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t20 = (t17 + 4);
    t24 = (t32 + 4);
    t25 = (t40 + 4);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t24);
    t49 = (t47 | t48);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t25);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB197;

LAB198:
LAB199:    goto LAB192;

LAB193:    *((unsigned int *)t32) = 1;
    goto LAB196;

LAB195:    t19 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB196;

LAB197:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t25);
    *((unsigned int *)t40) = (t52 | t53);
    t26 = (t17 + 4);
    t27 = (t32 + 4);
    t56 = *((unsigned int *)t17);
    t57 = (~(t56));
    t58 = *((unsigned int *)t26);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (~(t62));
    t13 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t13));
    t66 = (~(t64));
    t67 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t67 & t65);
    t68 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB199;

LAB200:    *((unsigned int *)t79) = 1;
    goto LAB203;

LAB202:    t30 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB203;

LAB204:    t33 = (t0 + 3024);
    t39 = (t33 + 56U);
    t44 = *((char **)t39);
    t45 = ((char*)((ng1)));
    memset(t80, 0, 8);
    xsi_vlog_signed_less(t80, 32, t44, 16, t45, 32);
    memset(t81, 0, 8);
    t46 = (t80 + 4);
    t85 = *((unsigned int *)t46);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB207;

LAB208:    if (*((unsigned int *)t46) != 0)
        goto LAB209;

LAB210:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t81);
    t93 = (t91 & t92);
    *((unsigned int *)t115) = t93;
    t55 = (t79 + 4);
    t71 = (t81 + 4);
    t77 = (t115 + 4);
    t94 = *((unsigned int *)t55);
    t95 = *((unsigned int *)t71);
    t96 = (t94 | t95);
    *((unsigned int *)t77) = t96;
    t97 = *((unsigned int *)t77);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB211;

LAB212:
LAB213:    goto LAB206;

LAB207:    *((unsigned int *)t81) = 1;
    goto LAB210;

LAB209:    t54 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB210;

LAB211:    t101 = *((unsigned int *)t115);
    t102 = *((unsigned int *)t77);
    *((unsigned int *)t115) = (t101 | t102);
    t78 = (t79 + 4);
    t90 = (t81 + 4);
    t103 = *((unsigned int *)t79);
    t104 = (~(t103));
    t105 = *((unsigned int *)t78);
    t106 = (~(t105));
    t108 = *((unsigned int *)t81);
    t109 = (~(t108));
    t110 = *((unsigned int *)t90);
    t111 = (~(t110));
    t99 = (t104 & t106);
    t100 = (t109 & t111);
    t112 = (~(t99));
    t116 = (~(t100));
    t117 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t117 & t112);
    t118 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t118 & t116);
    t119 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t119 & t112);
    t120 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t120 & t116);
    goto LAB213;

LAB214:    xsi_set_current_line(77, ng0);

LAB217:    xsi_set_current_line(78, ng0);
    t113 = ((char*)((ng3)));
    t114 = (t0 + 2704);
    xsi_vlogvar_assign_value(t114, t113, 0, 0, 1);
    goto LAB216;

LAB220:    t34 = *((unsigned int *)t14);
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t34 | t35);
    t16 = (t5 + 4);
    t18 = (t11 + 4);
    t36 = *((unsigned int *)t5);
    t37 = (~(t36));
    t38 = *((unsigned int *)t16);
    t41 = (~(t38));
    t42 = *((unsigned int *)t11);
    t43 = (~(t42));
    t47 = *((unsigned int *)t18);
    t48 = (~(t47));
    t64 = (t37 & t41);
    t99 = (t43 & t48);
    t49 = (~(t64));
    t50 = (~(t99));
    t51 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t51 & t49);
    t52 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t52 & t50);
    t53 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t53 & t49);
    t56 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t56 & t50);
    goto LAB222;

LAB224:    t34 = *((unsigned int *)t14);
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t34 | t35);
    t16 = (t5 + 4);
    t18 = (t11 + 4);
    t36 = *((unsigned int *)t16);
    t37 = (~(t36));
    t38 = *((unsigned int *)t5);
    t64 = (t38 & t37);
    t41 = *((unsigned int *)t18);
    t42 = (~(t41));
    t43 = *((unsigned int *)t11);
    t99 = (t43 & t42);
    t47 = (~(t64));
    t48 = (~(t99));
    t49 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t49 & t47);
    t50 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t50 & t48);
    goto LAB226;

LAB228:    t34 = *((unsigned int *)t14);
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t34 | t35);
    goto LAB230;

LAB233:    xsi_set_current_line(102, ng0);

LAB236:    xsi_set_current_line(103, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2864);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB235;

}


extern void work_m_04610294900033791655_2779603676_init()
{
	static char *pe[] = {(void *)Cont_22_0,(void *)Cont_23_1,(void *)Cont_25_2,(void *)Always_27_3};
	xsi_register_didat("work_m_04610294900033791655_2779603676", "isim/my_alu_tb_isim_beh.exe.sim/work/m_04610294900033791655_2779603676.didat");
	xsi_register_executes(pe);
}
