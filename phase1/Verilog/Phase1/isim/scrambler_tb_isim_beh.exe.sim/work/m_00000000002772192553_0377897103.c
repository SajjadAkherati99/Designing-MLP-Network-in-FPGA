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
static const char *ng0 = "E:/my_files/course/term8/FPGA/project/phase1/Verilog/Phase1/Scrambler.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {15U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {2, 0};
static int ng5[] = {7, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {23U, 0U};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {17U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {6U, 0U};



static void Cont_26_0(char *t0)
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

LAB0:    t1 = (t0 + 4512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t3, 16, 15, 2U, t6, 12, t2, 3);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 16, t3, 16, t7, 16);
    t9 = (t0 + 5176);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 65535U;
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
    xsi_driver_vfirst_trans(t9, 0, 15);
    t22 = (t0 + 5080);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Always_28_1(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t23[8];
    char t57[8];
    char t83[8];
    char t84[8];
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
    char *t24;
    char *t25;
    int t26;
    char *t27;
    int t28;
    int t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
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
    char *t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
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
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 5096);
    *((int *)t2) = 1;
    t3 = (t0 + 4792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
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

LAB11:    xsi_set_current_line(35, ng0);

LAB21:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB22:    t6 = ((char*)((ng1)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t26 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng8)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t26 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t26 == 1)
        goto LAB27;

LAB28:
LAB29:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);

LAB13:    xsi_set_current_line(30, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 63U);
    t6 = (t0 + 3272);
    t12 = (t0 + 3272);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng4)));
    t24 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t21, t22, t23, ((int*)(t19)), 2, t20, 32, 1, t24, 32, 1);
    t25 = (t21 + 4);
    t15 = *((unsigned int *)t25);
    t26 = (!(t15));
    t27 = (t22 + 4);
    t16 = *((unsigned int *)t27);
    t28 = (!(t16));
    t29 = (t26 && t28);
    t30 = (t23 + 4);
    t17 = *((unsigned int *)t30);
    t31 = (!(t17));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2072U);
    t12 = *((char **)t6);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t13 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 3);
    t17 = (t16 & 1);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t34 = (t18 >> 3);
    t35 = (t34 & 1);
    *((unsigned int *)t6) = t35;
    t38 = *((unsigned int *)t4);
    t39 = *((unsigned int *)t21);
    t40 = (t38 ^ t39);
    *((unsigned int *)t22) = t40;
    t19 = (t4 + 4);
    t20 = (t21 + 4);
    t24 = (t22 + 4);
    t41 = *((unsigned int *)t19);
    t42 = *((unsigned int *)t20);
    t43 = (t41 | t42);
    *((unsigned int *)t24) = t43;
    t44 = *((unsigned int *)t24);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB16;

LAB17:
LAB18:    t25 = (t0 + 3272);
    t27 = (t0 + 3272);
    t30 = (t27 + 72U);
    t48 = *((char **)t30);
    t49 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t23, t48, 2, t49, 32, 1);
    t50 = (t23 + 4);
    t51 = *((unsigned int *)t50);
    t26 = (!(t51));
    if (t26 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB12;

LAB14:    t18 = *((unsigned int *)t23);
    t33 = (t18 + 0);
    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t22);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t6, t4, t33, *((unsigned int *)t22), t37, 0LL);
    goto LAB15;

LAB16:    t46 = *((unsigned int *)t22);
    t47 = *((unsigned int *)t24);
    *((unsigned int *)t22) = (t46 | t47);
    goto LAB18;

LAB19:    xsi_vlogvar_wait_assign_value(t25, t22, 0, *((unsigned int *)t23), 1, 0LL);
    goto LAB20;

LAB23:    xsi_set_current_line(37, ng0);

LAB30:    xsi_set_current_line(38, ng0);
    t12 = (t0 + 1912U);
    t13 = *((char **)t12);
    t12 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB32;

LAB31:    t19 = (t12 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t6) < *((unsigned int *)t12))
        goto LAB33;

LAB34:    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(42, ng0);

LAB39:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB38:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng9)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB41;

LAB40:    t19 = (t12 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB41;

LAB44:    if (*((unsigned int *)t6) < *((unsigned int *)t12))
        goto LAB42;

LAB43:    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3432);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t2 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB49;

LAB48:    t19 = (t12 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t2) < *((unsigned int *)t12))
        goto LAB50;

LAB51:    memset(t21, 0, 8);
    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t24) != 0)
        goto LAB55;

LAB56:    t27 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t27);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB57;

LAB58:    memcpy(t57, t21, 8);

LAB59:    t77 = (t57 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t57);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB72;

LAB73:
LAB74:    goto LAB29;

LAB25:    xsi_set_current_line(54, ng0);

LAB75:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 3432);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 2392U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB77;

LAB76:    t20 = (t19 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB77;

LAB80:    if (*((unsigned int *)t12) < *((unsigned int *)t19))
        goto LAB78;

LAB79:    t25 = (t4 + 4);
    t7 = *((unsigned int *)t25);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(58, ng0);

LAB85:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB83:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3272);
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
    t19 = (t0 + 3272);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    memset(t21, 0, 8);
    t25 = (t21 + 4);
    t27 = (t24 + 4);
    t15 = *((unsigned int *)t24);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t27);
    t34 = (t18 >> 0);
    t35 = (t34 & 1);
    *((unsigned int *)t25) = t35;
    t38 = *((unsigned int *)t4);
    t39 = *((unsigned int *)t21);
    t40 = (t38 ^ t39);
    *((unsigned int *)t22) = t40;
    t30 = (t4 + 4);
    t48 = (t21 + 4);
    t49 = (t22 + 4);
    t41 = *((unsigned int *)t30);
    t42 = *((unsigned int *)t48);
    t43 = (t41 | t42);
    *((unsigned int *)t49) = t43;
    t44 = *((unsigned int *)t49);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB86;

LAB87:
LAB88:    t50 = (t0 + 3272);
    t52 = (t0 + 3272);
    t53 = (t52 + 72U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t23, t54, 2, t55, 32, 1);
    t56 = (t23 + 4);
    t51 = *((unsigned int *)t56);
    t26 = (!(t51));
    if (t26 == 1)
        goto LAB89;

LAB90:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 3272);
    t6 = (t2 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t4 + 4);
    t19 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 6);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t19);
    t11 = (t10 >> 6);
    t14 = (t11 & 1);
    *((unsigned int *)t13) = t14;
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    *((unsigned int *)t21) = t17;
    t20 = (t3 + 4);
    t24 = (t4 + 4);
    t25 = (t21 + 4);
    t18 = *((unsigned int *)t20);
    t34 = *((unsigned int *)t24);
    t35 = (t18 | t34);
    *((unsigned int *)t25) = t35;
    t38 = *((unsigned int *)t25);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB91;

LAB92:
LAB93:    t27 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t27, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3272);
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
    t19 = (t0 + 3272);
    t20 = (t0 + 3272);
    t24 = (t20 + 72U);
    t25 = *((char **)t24);
    t27 = ((char*)((ng4)));
    t30 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t21, t22, t23, ((int*)(t25)), 2, t27, 32, 1, t30, 32, 1);
    t48 = (t21 + 4);
    t15 = *((unsigned int *)t48);
    t26 = (!(t15));
    t49 = (t22 + 4);
    t16 = *((unsigned int *)t49);
    t28 = (!(t16));
    t29 = (t26 && t28);
    t50 = (t23 + 4);
    t17 = *((unsigned int *)t50);
    t31 = (!(t17));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB94;

LAB95:    goto LAB29;

LAB27:    xsi_set_current_line(67, ng0);

LAB96:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 3432);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 2232U);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB98;

LAB97:    t20 = (t19 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB98;

LAB101:    if (*((unsigned int *)t12) < *((unsigned int *)t19))
        goto LAB99;

LAB100:    t25 = (t4 + 4);
    t7 = *((unsigned int *)t25);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(71, ng0);

LAB106:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB104:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng13)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB108;

LAB107:    t19 = (t12 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB108;

LAB111:    if (*((unsigned int *)t6) < *((unsigned int *)t12))
        goto LAB109;

LAB110:    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB112;

LAB113:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 3272);
    t6 = (t2 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t4 + 4);
    t19 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 6);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t19);
    t11 = (t10 >> 6);
    t14 = (t11 & 1);
    *((unsigned int *)t13) = t14;
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    *((unsigned int *)t21) = t17;
    t20 = (t3 + 4);
    t24 = (t4 + 4);
    t25 = (t21 + 4);
    t18 = *((unsigned int *)t20);
    t34 = *((unsigned int *)t24);
    t35 = (t18 | t34);
    *((unsigned int *)t25) = t35;
    t38 = *((unsigned int *)t25);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB115;

LAB116:
LAB117:    t27 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t27, t21, 0, 0, 1, 0LL);

LAB114:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3272);
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
    t19 = (t0 + 3272);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    memset(t21, 0, 8);
    t25 = (t21 + 4);
    t27 = (t24 + 4);
    t15 = *((unsigned int *)t24);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t27);
    t34 = (t18 >> 0);
    t35 = (t34 & 1);
    *((unsigned int *)t25) = t35;
    t38 = *((unsigned int *)t4);
    t39 = *((unsigned int *)t21);
    t40 = (t38 ^ t39);
    *((unsigned int *)t22) = t40;
    t30 = (t4 + 4);
    t48 = (t21 + 4);
    t49 = (t22 + 4);
    t41 = *((unsigned int *)t30);
    t42 = *((unsigned int *)t48);
    t43 = (t41 | t42);
    *((unsigned int *)t49) = t43;
    t44 = *((unsigned int *)t49);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB118;

LAB119:
LAB120:    t50 = (t0 + 3272);
    t52 = (t0 + 3272);
    t53 = (t52 + 72U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t23, t54, 2, t55, 32, 1);
    t56 = (t23 + 4);
    t51 = *((unsigned int *)t56);
    t26 = (!(t51));
    if (t26 == 1)
        goto LAB121;

LAB122:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3272);
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
    t19 = (t0 + 3272);
    t20 = (t0 + 3272);
    t24 = (t20 + 72U);
    t25 = *((char **)t24);
    t27 = ((char*)((ng4)));
    t30 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t21, t22, t23, ((int*)(t25)), 2, t27, 32, 1, t30, 32, 1);
    t48 = (t21 + 4);
    t15 = *((unsigned int *)t48);
    t26 = (!(t15));
    t49 = (t22 + 4);
    t16 = *((unsigned int *)t49);
    t28 = (!(t16));
    t29 = (t26 && t28);
    t50 = (t23 + 4);
    t17 = *((unsigned int *)t50);
    t31 = (!(t17));
    t32 = (t29 && t31);
    if (t32 == 1)
        goto LAB123;

LAB124:    goto LAB29;

LAB32:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t4) = 1;
    goto LAB34;

LAB36:    xsi_set_current_line(41, ng0);
    t25 = (t0 + 3432);
    t27 = (t25 + 56U);
    t30 = *((char **)t27);
    t48 = ((char*)((ng8)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 16, t30, 16, t48, 16);
    t49 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t49, t21, 0, 0, 16, 0LL);
    goto LAB38;

LAB41:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB43;

LAB42:    *((unsigned int *)t4) = 1;
    goto LAB43;

LAB45:    xsi_set_current_line(48, ng0);
    t25 = (t0 + 1912U);
    t27 = *((char **)t25);
    t25 = (t0 + 2952);
    t30 = (t25 + 56U);
    t48 = *((char **)t30);
    memset(t22, 0, 8);
    t49 = (t22 + 4);
    t50 = (t48 + 4);
    t14 = *((unsigned int *)t48);
    t15 = (t14 >> 0);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t50);
    t17 = (t16 >> 0);
    *((unsigned int *)t49) = t17;
    t18 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t18 & 7U);
    t34 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t34 & 7U);
    xsi_vlogtype_concat(t21, 4, 4, 2U, t22, 3, t27, 1);
    t52 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t52, t21, 0, 0, 4, 0LL);
    goto LAB47;

LAB49:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t4) = 1;
    goto LAB51;

LAB53:    *((unsigned int *)t21) = 1;
    goto LAB56;

LAB55:    t25 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB56;

LAB57:    t30 = (t0 + 3432);
    t48 = (t30 + 56U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng10)));
    memset(t22, 0, 8);
    t52 = (t49 + 4);
    if (*((unsigned int *)t52) != 0)
        goto LAB61;

LAB60:    t53 = (t50 + 4);
    if (*((unsigned int *)t53) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t49) < *((unsigned int *)t50))
        goto LAB62;

LAB63:    memset(t23, 0, 8);
    t55 = (t22 + 4);
    t17 = *((unsigned int *)t55);
    t18 = (~(t17));
    t34 = *((unsigned int *)t22);
    t35 = (t34 & t18);
    t38 = (t35 & 1U);
    if (t38 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t55) != 0)
        goto LAB67;

LAB68:    t39 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t23);
    t41 = (t39 & t40);
    *((unsigned int *)t57) = t41;
    t58 = (t21 + 4);
    t59 = (t23 + 4);
    t60 = (t57 + 4);
    t42 = *((unsigned int *)t58);
    t43 = *((unsigned int *)t59);
    t44 = (t42 | t43);
    *((unsigned int *)t60) = t44;
    t45 = *((unsigned int *)t60);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB59;

LAB61:    t54 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t22) = 1;
    goto LAB63;

LAB65:    *((unsigned int *)t23) = 1;
    goto LAB68;

LAB67:    t56 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB68;

LAB69:    t47 = *((unsigned int *)t57);
    t51 = *((unsigned int *)t60);
    *((unsigned int *)t57) = (t47 | t51);
    t61 = (t21 + 4);
    t62 = (t23 + 4);
    t63 = *((unsigned int *)t21);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t23);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t26 = (t64 & t66);
    t28 = (t68 & t70);
    t71 = (~(t26));
    t72 = (~(t28));
    t73 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t73 & t71);
    t74 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t74 & t72);
    t75 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t75 & t71);
    t76 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t76 & t72);
    goto LAB71;

LAB72:    xsi_set_current_line(51, ng0);
    t85 = (t0 + 3112);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t84, 0, 8);
    t88 = (t84 + 4);
    t89 = (t87 + 4);
    t90 = *((unsigned int *)t87);
    t91 = (t90 >> 1);
    *((unsigned int *)t84) = t91;
    t92 = *((unsigned int *)t89);
    t93 = (t92 >> 1);
    *((unsigned int *)t88) = t93;
    t94 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t94 & 2047U);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t95 & 2047U);
    t96 = (t0 + 1912U);
    t97 = *((char **)t96);
    xsi_vlogtype_concat(t83, 12, 12, 2U, t97, 1, t84, 11);
    t96 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t96, t83, 0, 0, 12, 0LL);
    goto LAB74;

LAB77:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB79;

LAB78:    *((unsigned int *)t4) = 1;
    goto LAB79;

LAB81:    xsi_set_current_line(55, ng0);

LAB84:    xsi_set_current_line(56, ng0);
    t27 = (t0 + 3432);
    t30 = (t27 + 56U);
    t48 = *((char **)t30);
    t49 = ((char*)((ng8)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 16, t48, 16, t49, 16);
    t50 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t50, t21, 0, 0, 16, 0LL);
    goto LAB83;

LAB86:    t46 = *((unsigned int *)t22);
    t47 = *((unsigned int *)t49);
    *((unsigned int *)t22) = (t46 | t47);
    goto LAB88;

LAB89:    xsi_vlogvar_wait_assign_value(t50, t22, 0, *((unsigned int *)t23), 1, 0LL);
    goto LAB90;

LAB91:    t40 = *((unsigned int *)t21);
    t41 = *((unsigned int *)t25);
    *((unsigned int *)t21) = (t40 | t41);
    goto LAB93;

LAB94:    t18 = *((unsigned int *)t23);
    t33 = (t18 + 0);
    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t22);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t19, t4, t33, *((unsigned int *)t22), t37, 0LL);
    goto LAB95;

LAB98:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB100;

LAB99:    *((unsigned int *)t4) = 1;
    goto LAB100;

LAB102:    xsi_set_current_line(68, ng0);

LAB105:    xsi_set_current_line(69, ng0);
    t27 = (t0 + 3432);
    t30 = (t27 + 56U);
    t48 = *((char **)t30);
    t49 = ((char*)((ng8)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 16, t48, 16, t49, 16);
    t50 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t50, t21, 0, 0, 16, 0LL);
    goto LAB104;

LAB108:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB110;

LAB109:    *((unsigned int *)t4) = 1;
    goto LAB110;

LAB112:    xsi_set_current_line(75, ng0);
    t25 = (t0 + 1912U);
    t27 = *((char **)t25);
    t25 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t25, t27, 0, 0, 1, 0LL);
    goto LAB114;

LAB115:    t40 = *((unsigned int *)t21);
    t41 = *((unsigned int *)t25);
    *((unsigned int *)t21) = (t40 | t41);
    goto LAB117;

LAB118:    t46 = *((unsigned int *)t22);
    t47 = *((unsigned int *)t49);
    *((unsigned int *)t22) = (t46 | t47);
    goto LAB120;

LAB121:    xsi_vlogvar_wait_assign_value(t50, t22, 0, *((unsigned int *)t23), 1, 0LL);
    goto LAB122;

LAB123:    t18 = *((unsigned int *)t23);
    t33 = (t18 + 0);
    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t22);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t19, t4, t33, *((unsigned int *)t22), t37, 0LL);
    goto LAB124;

}


extern void work_m_00000000002772192553_0377897103_init()
{
	static char *pe[] = {(void *)Cont_26_0,(void *)Always_28_1};
	xsi_register_didat("work_m_00000000002772192553_0377897103", "isim/scrambler_tb_isim_beh.exe.sim/work/m_00000000002772192553_0377897103.didat");
	xsi_register_executes(pe);
}
