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
static const char *ng0 = "E:/my_files/course/term8/FPGA/project/phase1/Verilog/Phase1/deScrambler.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {23U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {17U, 0U};
static unsigned int ng7[] = {15U, 0U};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {1, 0};
static int ng10[] = {2, 0};
static int ng11[] = {7, 0};
static unsigned int ng12[] = {2U, 0U};



static void Cont_19_0(char *t0)
{
    char t3[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 4032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t3, 15, 15, 2U, t6, 12, t2, 3);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 15, t3, 15, t7, 15);
    t9 = (t0 + 4696);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 32767U;
    t15 = t14;
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t9, 0, 14);
    t22 = (t0 + 4600);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Always_21_1(char *t0)
{
    char t4[8];
    char t27[8];
    char t30[8];
    char t34[8];
    char t40[8];
    char t77[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
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
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 4616);
    *((int *)t2) = 1;
    t3 = (t0 + 4312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(22, ng0);
    t5 = (t0 + 1752U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(26, ng0);

LAB14:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB15:    t6 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng12)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB22;

LAB23:
LAB24:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(22, ng0);

LAB13:    xsi_set_current_line(23, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 15, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(28, ng0);

LAB25:    xsi_set_current_line(29, ng0);
    t12 = (t0 + 1912U);
    t13 = *((char **)t12);
    t12 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB27;

LAB26:    t19 = (t12 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t6) < *((unsigned int *)t12))
        goto LAB28;

LAB29:    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(33, ng0);

LAB34:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);

LAB33:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2952);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t2 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB36;

LAB35:    t19 = (t12 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t2) < *((unsigned int *)t12))
        goto LAB37;

LAB38:    memset(t27, 0, 8);
    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t22) != 0)
        goto LAB42;

LAB43:    t24 = (t27 + 4);
    t14 = *((unsigned int *)t27);
    t15 = *((unsigned int *)t24);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB44;

LAB45:    memcpy(t40, t27, 8);

LAB46:    t71 = (t40 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB59;

LAB60:
LAB61:    goto LAB24;

LAB18:    xsi_set_current_line(42, ng0);

LAB62:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2952);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t19 = (t12 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB64;

LAB63:    t20 = (t13 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB64;

LAB67:    if (*((unsigned int *)t12) < *((unsigned int *)t13))
        goto LAB65;

LAB66:    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(46, ng0);

LAB72:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);

LAB70:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2632);
    t6 = (t0 + 2632);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t19, 32, 1);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t21 = (!(t7));
    if (t21 == 1)
        goto LAB73;

LAB74:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 1);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 63U);
    t19 = (t0 + 2632);
    t20 = (t0 + 2632);
    t22 = (t20 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng10)));
    t25 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t27, t30, t34, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t26 = (t27 + 4);
    t15 = *((unsigned int *)t26);
    t21 = (!(t15));
    t28 = (t30 + 4);
    t16 = *((unsigned int *)t28);
    t64 = (!(t16));
    t92 = (t21 && t64);
    t29 = (t34 + 4);
    t17 = *((unsigned int *)t29);
    t93 = (!(t17));
    t94 = (t92 && t93);
    if (t94 == 1)
        goto LAB75;

LAB76:    goto LAB24;

LAB20:    xsi_set_current_line(55, ng0);

LAB77:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 2952);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 2072U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB79;

LAB78:    t20 = (t19 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB79;

LAB82:    if (*((unsigned int *)t12) < *((unsigned int *)t19))
        goto LAB80;

LAB81:    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(59, ng0);

LAB87:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);

LAB85:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t12) = t14;
    t19 = (t0 + 2632);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memset(t27, 0, 8);
    t23 = (t27 + 4);
    t24 = (t22 + 4);
    t15 = *((unsigned int *)t22);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t27) = t17;
    t18 = *((unsigned int *)t24);
    t36 = (t18 >> 0);
    t37 = (t36 & 1);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t4);
    t41 = *((unsigned int *)t27);
    t42 = (t38 ^ t41);
    *((unsigned int *)t30) = t42;
    t25 = (t4 + 4);
    t26 = (t27 + 4);
    t28 = (t30 + 4);
    t43 = *((unsigned int *)t25);
    t47 = *((unsigned int *)t26);
    t48 = (t43 | t47);
    *((unsigned int *)t28) = t48;
    t49 = *((unsigned int *)t28);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB88;

LAB89:
LAB90:    t29 = (t0 + 2632);
    t31 = (t0 + 2632);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t35 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t34, t33, 2, t35, 32, 1);
    t39 = (t34 + 4);
    t53 = *((unsigned int *)t39);
    t21 = (!(t53));
    if (t21 == 1)
        goto LAB91;

LAB92:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 1);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 63U);
    t19 = (t0 + 2632);
    t20 = (t0 + 2632);
    t22 = (t20 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng10)));
    t25 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t27, t30, t34, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t26 = (t27 + 4);
    t15 = *((unsigned int *)t26);
    t21 = (!(t15));
    t28 = (t30 + 4);
    t16 = *((unsigned int *)t28);
    t64 = (!(t16));
    t92 = (t21 && t64);
    t29 = (t34 + 4);
    t17 = *((unsigned int *)t29);
    t93 = (!(t17));
    t94 = (t92 && t93);
    if (t94 == 1)
        goto LAB93;

LAB94:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2632);
    t6 = (t2 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t4 + 4);
    t19 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t19);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t13) = t14;
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    *((unsigned int *)t27) = t17;
    t20 = (t3 + 4);
    t22 = (t4 + 4);
    t23 = (t27 + 4);
    t18 = *((unsigned int *)t20);
    t36 = *((unsigned int *)t22);
    t37 = (t18 | t36);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t23);
    t41 = (t38 != 0);
    if (t41 == 1)
        goto LAB95;

LAB96:
LAB97:    t24 = (t0 + 2632);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t30, 0, 8);
    t28 = (t30 + 4);
    t29 = (t26 + 4);
    t47 = *((unsigned int *)t26);
    t48 = (t47 >> 0);
    t49 = (t48 & 1);
    *((unsigned int *)t30) = t49;
    t50 = *((unsigned int *)t29);
    t51 = (t50 >> 0);
    t52 = (t51 & 1);
    *((unsigned int *)t28) = t52;
    t53 = *((unsigned int *)t27);
    t56 = *((unsigned int *)t30);
    t57 = (t53 ^ t56);
    *((unsigned int *)t34) = t57;
    t31 = (t27 + 4);
    t32 = (t30 + 4);
    t33 = (t34 + 4);
    t58 = *((unsigned int *)t31);
    t59 = *((unsigned int *)t32);
    t60 = (t58 | t59);
    *((unsigned int *)t33) = t60;
    t61 = *((unsigned int *)t33);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB98;

LAB99:
LAB100:    t35 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 1, 0LL);
    goto LAB24;

LAB22:    xsi_set_current_line(68, ng0);

LAB101:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng3)));
    t6 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    goto LAB24;

LAB27:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(32, ng0);
    t23 = (t0 + 2952);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng2)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 15, t25, 15, t26, 15);
    t28 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 15, 0LL);
    goto LAB33;

LAB36:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB38;

LAB37:    *((unsigned int *)t4) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t27) = 1;
    goto LAB43;

LAB42:    t23 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB43;

LAB44:    t25 = (t0 + 2952);
    t26 = (t25 + 56U);
    t28 = *((char **)t26);
    t29 = ((char*)((ng6)));
    memset(t30, 0, 8);
    t31 = (t28 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB48;

LAB47:    t32 = (t29 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t28) < *((unsigned int *)t29))
        goto LAB49;

LAB50:    memset(t34, 0, 8);
    t35 = (t30 + 4);
    t17 = *((unsigned int *)t35);
    t18 = (~(t17));
    t36 = *((unsigned int *)t30);
    t37 = (t36 & t18);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t35) != 0)
        goto LAB54;

LAB55:    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t34);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t27 + 4);
    t45 = (t34 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB46;

LAB48:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t30) = 1;
    goto LAB50;

LAB52:    *((unsigned int *)t34) = 1;
    goto LAB55;

LAB54:    t39 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB55;

LAB56:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t27 + 4);
    t55 = (t34 + 4);
    t56 = *((unsigned int *)t27);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t34);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t21 = (t57 & t59);
    t64 = (t61 & t63);
    t65 = (~(t21));
    t66 = (~(t64));
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB58;

LAB59:    xsi_set_current_line(39, ng0);
    t79 = (t0 + 2792);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t78, 0, 8);
    t82 = (t78 + 4);
    t83 = (t81 + 4);
    t84 = *((unsigned int *)t81);
    t85 = (t84 >> 1);
    *((unsigned int *)t78) = t85;
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 1);
    *((unsigned int *)t82) = t87;
    t88 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t88 & 2047U);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t89 & 2047U);
    t90 = (t0 + 1912U);
    t91 = *((char **)t90);
    xsi_vlogtype_concat(t77, 12, 12, 2U, t91, 1, t78, 11);
    t90 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t90, t77, 0, 0, 12, 0LL);
    goto LAB61;

LAB64:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB66;

LAB65:    *((unsigned int *)t4) = 1;
    goto LAB66;

LAB68:    xsi_set_current_line(43, ng0);

LAB71:    xsi_set_current_line(44, ng0);
    t24 = (t0 + 2952);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t28 = ((char*)((ng2)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 15, t26, 15, t28, 15);
    t29 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t29, t27, 0, 0, 15, 0LL);
    goto LAB70;

LAB73:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB74;

LAB75:    t18 = *((unsigned int *)t34);
    t95 = (t18 + 0);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t30);
    t96 = (t36 - t37);
    t97 = (t96 + 1);
    xsi_vlogvar_wait_assign_value(t19, t4, t95, *((unsigned int *)t30), t97, 0LL);
    goto LAB76;

LAB79:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB81;

LAB80:    *((unsigned int *)t4) = 1;
    goto LAB81;

LAB83:    xsi_set_current_line(56, ng0);

LAB86:    xsi_set_current_line(57, ng0);
    t24 = (t0 + 2952);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t28 = ((char*)((ng2)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 15, t26, 15, t28, 15);
    t29 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t29, t27, 0, 0, 15, 0LL);
    goto LAB85;

LAB88:    t51 = *((unsigned int *)t30);
    t52 = *((unsigned int *)t28);
    *((unsigned int *)t30) = (t51 | t52);
    goto LAB90;

LAB91:    xsi_vlogvar_wait_assign_value(t29, t30, 0, *((unsigned int *)t34), 1, 0LL);
    goto LAB92;

LAB93:    t18 = *((unsigned int *)t34);
    t95 = (t18 + 0);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t30);
    t96 = (t36 - t37);
    t97 = (t96 + 1);
    xsi_vlogvar_wait_assign_value(t19, t4, t95, *((unsigned int *)t30), t97, 0LL);
    goto LAB94;

LAB95:    t42 = *((unsigned int *)t27);
    t43 = *((unsigned int *)t23);
    *((unsigned int *)t27) = (t42 | t43);
    goto LAB97;

LAB98:    t63 = *((unsigned int *)t34);
    t65 = *((unsigned int *)t33);
    *((unsigned int *)t34) = (t63 | t65);
    goto LAB100;

}


extern void work_m_00000000003380715343_1321687838_init()
{
	static char *pe[] = {(void *)Cont_19_0,(void *)Always_21_1};
	xsi_register_didat("work_m_00000000003380715343_1321687838", "isim/deScrambler_tb_isim_beh.exe.sim/work/m_00000000003380715343_1321687838.didat");
	xsi_register_executes(pe);
}
