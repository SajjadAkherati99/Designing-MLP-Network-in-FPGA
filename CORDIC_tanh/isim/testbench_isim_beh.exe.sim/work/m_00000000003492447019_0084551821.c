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
static const char *ng0 = "E:/my_files/course/term8/FPGA/hws/hw4/CORDIC Files/CORDIC_tanh/CORDIC_tanh.v";
static int ng1[] = {0, 0, 0, 0};
static unsigned int ng2[] = {0U, 0U, 262144U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {12U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {11U, 0U};
static unsigned int ng10[] = {13U, 0U};
static unsigned int ng11[] = {8192U, 0U};
static unsigned int ng12[] = {0U, 131071U};



static void Always_24_0(char *t0)
{
    char t4[8];
    char t13[8];
    char t29[8];
    char t37[8];
    char t74[16];
    char t78[16];
    char t79[16];
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
    char *t14;
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
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    char *t80;

LAB0:    t1 = (t0 + 4400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 4968);
    *((int *)t2) = 1;
    t3 = (t0 + 4432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t5 = (t0 + 1480U);
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

LAB9:    memset(t13, 0, 8);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) != 0)
        goto LAB12;

LAB13:    t21 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (!(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB14;

LAB15:    memcpy(t37, t13, 8);

LAB16:    t65 = (t37 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t37);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(35, ng0);

LAB28:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t12 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t14 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t14);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t22 = (~(t19));
    t23 = (t16 & t22);
    if (t23 != 0)
        goto LAB32;

LAB29:    if (t19 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t4) = 1;

LAB32:    t21 = (t4 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t31 = *((unsigned int *)t4);
    t32 = (t31 & t25);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(57, ng0);

LAB60:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t14 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t14);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t22 = (~(t19));
    t23 = (t16 & t22);
    if (t23 != 0)
        goto LAB64;

LAB61:    if (t19 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t4) = 1;

LAB64:    t21 = (t4 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t31 = *((unsigned int *)t4);
    t32 = (t31 & t25);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(62, ng0);

LAB69:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t12 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);

LAB67:
LAB35:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB70:    t6 = ((char*)((ng6)));
    t56 = xsi_vlog_unsigned_case_compare(t5, 1, t6, 1);
    if (t56 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng7)));
    t56 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 1);
    if (t56 == 1)
        goto LAB73;

LAB74:
LAB75:
LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB14:    t26 = (t0 + 3320);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t30) != 0)
        goto LAB19;

LAB20:    t38 = *((unsigned int *)t13);
    t39 = *((unsigned int *)t29);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = (t13 + 4);
    t42 = (t29 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t29) = 1;
    goto LAB20;

LAB19:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB21:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t13 + 4);
    t52 = (t29 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t13);
    t56 = (t55 & t54);
    t57 = *((unsigned int *)t52);
    t58 = (~(t57));
    t59 = *((unsigned int *)t29);
    t60 = (t59 & t58);
    t61 = (~(t56));
    t62 = (~(t60));
    t63 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t63 & t61);
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    goto LAB23;

LAB24:    xsi_set_current_line(25, ng0);

LAB27:    xsi_set_current_line(26, ng0);
    t71 = ((char*)((ng1)));
    t72 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t72, t71, 0, 0, 54, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 54, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_arith_lshift(t4, 17, t3, 16, t2, 32);
    t5 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 17, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB26;

LAB31:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(37, ng0);

LAB36:    xsi_set_current_line(38, ng0);
    t26 = (t0 + 3480);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t28 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t38 = *((unsigned int *)t28);
    t39 = (t38 & t35);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(47, ng0);

LAB50:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t14 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t14);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t22 = (~(t19));
    t23 = (t16 & t22);
    if (t23 != 0)
        goto LAB54;

LAB51:    if (t19 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t4) = 1;

LAB54:    t21 = (t4 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t31 = *((unsigned int *)t4);
    t32 = (t31 & t25);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(52, ng0);

LAB59:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t12 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);

LAB57:
LAB39:    goto LAB35;

LAB37:    xsi_set_current_line(38, ng0);

LAB40:    xsi_set_current_line(39, ng0);
    t36 = (t0 + 2840);
    t41 = (t36 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t51 = (t42 + 4);
    t52 = (t43 + 4);
    t44 = *((unsigned int *)t42);
    t45 = *((unsigned int *)t43);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t51);
    t48 = *((unsigned int *)t52);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t53 = *((unsigned int *)t51);
    t54 = *((unsigned int *)t52);
    t55 = (t53 | t54);
    t57 = (~(t55));
    t58 = (t50 & t57);
    if (t58 != 0)
        goto LAB44;

LAB41:    if (t55 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t13) = 1;

LAB44:    t71 = (t13 + 4);
    t59 = *((unsigned int *)t71);
    t61 = (~(t59));
    t62 = *((unsigned int *)t13);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(43, ng0);

LAB49:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 5, t5, 5, t6, 5);
    t12 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 5, 0LL);

LAB47:    goto LAB39;

LAB43:    t65 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(39, ng0);

LAB48:    xsi_set_current_line(40, ng0);
    t72 = ((char*)((ng7)));
    t73 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t73, t72, 0, 0, 5, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB53:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(48, ng0);

LAB58:    xsi_set_current_line(49, ng0);
    t26 = ((char*)((ng7)));
    t27 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB57;

LAB63:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(58, ng0);

LAB68:    xsi_set_current_line(59, ng0);
    t26 = ((char*)((ng6)));
    t27 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB67;

LAB71:    xsi_set_current_line(67, ng0);

LAB76:    xsi_set_current_line(68, ng0);
    t12 = (t0 + 2680);
    t14 = (t12 + 56U);
    t20 = *((char **)t14);
    t21 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t20, 17, t21, 32);
    t26 = (t4 + 4);
    t7 = *((unsigned int *)t26);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(80, ng0);

LAB86:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(86, ng0);

LAB91:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 2520);
    t14 = (t12 + 56U);
    t20 = *((char **)t14);
    t21 = (t0 + 2840);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_signed_arith_rshift(t74, 54, t20, 54, t27, 5);
    xsi_vlog_signed_add(t78, 54, t6, 54, t74, 54);
    t28 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t28, t78, 0, 0, 54, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 2360);
    t14 = (t12 + 56U);
    t20 = *((char **)t14);
    t21 = (t0 + 2840);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_signed_arith_rshift(t74, 54, t20, 54, t27, 5);
    xsi_vlog_signed_add(t78, 54, t6, 54, t74, 54);
    t28 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t28, t78, 0, 0, 54, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 1960U);
    t14 = *((char **)t12);
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 17, t6, 17, t14, 17);
    t12 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 17, 0LL);

LAB89:
LAB79:    goto LAB75;

LAB73:    xsi_set_current_line(94, ng0);

LAB92:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 2520);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t14 = ((char*)((ng1)));
    xsi_vlog_signed_less(t74, 54, t12, 54, t14, 32);
    t20 = (t74 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t74);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(104, ng0);

LAB106:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 2360);
    t14 = (t12 + 56U);
    t20 = *((char **)t14);
    t21 = (t0 + 2840);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_signed_arith_rshift(t74, 54, t20, 54, t27, 5);
    xsi_vlog_signed_minus(t78, 54, t6, 54, t74, 54);
    t28 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t28, t78, 0, 0, 54, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t20 = (t12 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t14);
    t11 = *((unsigned int *)t20);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t20);
    t19 = (t17 | t18);
    t22 = (~(t19));
    t23 = (t16 & t22);
    if (t23 != 0)
        goto LAB110;

LAB107:    if (t19 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t4) = 1;

LAB110:    t26 = (t4 + 4);
    t24 = *((unsigned int *)t26);
    t25 = (~(t24));
    t31 = *((unsigned int *)t4);
    t32 = (t31 & t25);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(109, ng0);

LAB115:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng11)));
    t14 = (t0 + 2840);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t4, 17, t12, 17, t21, 5);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 17, t6, 17, t4, 17);
    t26 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 17, 0LL);

LAB113:
LAB95:    goto LAB75;

LAB77:    xsi_set_current_line(68, ng0);

LAB80:    xsi_set_current_line(69, ng0);
    t27 = (t0 + 3480);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t36 = (t30 + 4);
    t15 = *((unsigned int *)t36);
    t16 = (~(t15));
    t17 = *((unsigned int *)t30);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(74, ng0);

LAB85:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 2520);
    t14 = (t12 + 56U);
    t20 = *((char **)t14);
    t21 = (t0 + 2840);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_signed_arith_rshift(t74, 54, t20, 54, t27, 5);
    xsi_vlog_signed_minus(t78, 54, t6, 54, t74, 54);
    t28 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t28, t78, 0, 0, 54, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 2360);
    t14 = (t12 + 56U);
    t20 = *((char **)t14);
    t21 = (t0 + 2840);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_signed_arith_rshift(t74, 54, t20, 54, t27, 5);
    xsi_vlog_signed_minus(t78, 54, t6, 54, t74, 54);
    t28 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t28, t78, 0, 0, 54, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 1960U);
    t14 = *((char **)t12);
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 17, t6, 17, t14, 17);
    t12 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 17, 0LL);

LAB83:    goto LAB79;

LAB81:    xsi_set_current_line(69, ng0);

LAB84:    xsi_set_current_line(70, ng0);
    t41 = (t0 + 2360);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t51 = (t0 + 2520);
    t52 = (t51 + 56U);
    t65 = *((char **)t52);
    xsi_vlog_signed_minus(t74, 54, t43, 54, t65, 54);
    t71 = (t0 + 2520);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    t75 = (t0 + 2840);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    xsi_vlog_signed_arith_rshift(t78, 54, t73, 54, t77, 5);
    xsi_vlog_signed_add(t79, 54, t74, 54, t78, 54);
    t80 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t80, t79, 0, 0, 54, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 2360);
    t14 = (t12 + 56U);
    t20 = *((char **)t14);
    xsi_vlog_signed_minus(t74, 54, t6, 54, t20, 54);
    t21 = (t0 + 2360);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2840);
    t30 = (t28 + 56U);
    t36 = *((char **)t30);
    xsi_vlog_signed_arith_rshift(t78, 54, t27, 54, t36, 5);
    xsi_vlog_signed_add(t79, 54, t74, 54, t78, 54);
    t41 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t41, t79, 0, 0, 54, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 1960U);
    t14 = *((char **)t12);
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 17, t6, 17, t14, 17);
    t12 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 17, 0LL);
    goto LAB83;

LAB87:    xsi_set_current_line(81, ng0);

LAB90:    xsi_set_current_line(82, ng0);
    t14 = (t0 + 2360);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t26 = (t0 + 2520);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_signed_add(t74, 54, t21, 54, t28, 54);
    t30 = (t0 + 2520);
    t36 = (t30 + 56U);
    t41 = *((char **)t36);
    t42 = (t0 + 2840);
    t43 = (t42 + 56U);
    t51 = *((char **)t43);
    xsi_vlog_signed_arith_rshift(t78, 54, t41, 54, t51, 5);
    xsi_vlog_signed_minus(t79, 54, t74, 54, t78, 54);
    t52 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t52, t79, 0, 0, 54, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 2360);
    t14 = (t12 + 56U);
    t20 = *((char **)t14);
    xsi_vlog_signed_add(t74, 54, t6, 54, t20, 54);
    t21 = (t0 + 2360);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2840);
    t30 = (t28 + 56U);
    t36 = *((char **)t30);
    xsi_vlog_signed_arith_rshift(t78, 54, t27, 54, t36, 5);
    xsi_vlog_signed_minus(t79, 54, t74, 54, t78, 54);
    t41 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t41, t79, 0, 0, 54, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 1960U);
    t14 = *((char **)t12);
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 17, t6, 17, t14, 17);
    t12 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 17, 0LL);
    goto LAB89;

LAB93:    xsi_set_current_line(95, ng0);

LAB96:    xsi_set_current_line(96, ng0);
    t21 = (t0 + 2520);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 2360);
    t30 = (t28 + 56U);
    t36 = *((char **)t30);
    t41 = (t0 + 2840);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_signed_arith_rshift(t78, 54, t36, 54, t43, 5);
    xsi_vlog_signed_add(t79, 54, t27, 54, t78, 54);
    t51 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t51, t79, 0, 0, 54, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t20 = (t12 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t14);
    t11 = *((unsigned int *)t20);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t20);
    t19 = (t17 | t18);
    t22 = (~(t19));
    t23 = (t16 & t22);
    if (t23 != 0)
        goto LAB100;

LAB97:    if (t19 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t4) = 1;

LAB100:    t26 = (t4 + 4);
    t24 = *((unsigned int *)t26);
    t25 = (~(t24));
    t31 = *((unsigned int *)t4);
    t32 = (t31 & t25);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(100, ng0);

LAB105:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng11)));
    t14 = (t0 + 2840);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t4, 17, t12, 17, t21, 5);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 17, t6, 17, t4, 17);
    t26 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t26, t13, 0, 0, 17, 0LL);

LAB103:    goto LAB95;

LAB99:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(97, ng0);

LAB104:    xsi_set_current_line(98, ng0);
    t27 = ((char*)((ng11)));
    t28 = (t0 + 2840);
    t30 = (t28 + 56U);
    t36 = *((char **)t30);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t29, 17, t27, 17, t36, 5);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_unary_minus(t13, 17, t29, 17);
    t41 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t41, t13, 0, 0, 17, 0LL);
    goto LAB103;

LAB109:    t21 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(106, ng0);

LAB114:    xsi_set_current_line(107, ng0);
    t27 = ((char*)((ng11)));
    t28 = (t0 + 2840);
    t30 = (t28 + 56U);
    t36 = *((char **)t30);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_arith_rshift(t13, 17, t27, 17, t36, 5);
    t41 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t41, t13, 0, 0, 17, 0LL);
    goto LAB113;

}

static void Cont_118_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t22;
    char *t23;
    char *t24;
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
    char *t36;
    char *t37;
    char *t38;
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
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3320);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t47 = *((unsigned int *)t4);
    t48 = (~(t47));
    t49 = *((unsigned int *)t31);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t51, 8);

LAB20:    t52 = (t0 + 5064);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t56, 0, 8);
    t57 = 131071U;
    t58 = t57;
    t59 = (t3 + 4);
    t60 = *((unsigned int *)t3);
    t57 = (t57 & t60);
    t61 = *((unsigned int *)t59);
    t58 = (t58 & t61);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t63 | t57);
    t64 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t64 | t58);
    xsi_driver_vfirst_trans(t52, 0, 16);
    t65 = (t0 + 4984);
    *((int *)t65) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t36 = (t0 + 2680);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t35, 0, 8);
    t39 = (t35 + 4);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 0);
    *((unsigned int *)t35) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t45 & 131071U);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 131071U);
    goto LAB13;

LAB14:    t51 = ((char*)((ng12)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 17, t35, 17, t51, 17);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}


extern void work_m_00000000003492447019_0084551821_init()
{
	static char *pe[] = {(void *)Always_24_0,(void *)Cont_118_1};
	xsi_register_didat("work_m_00000000003492447019_0084551821", "isim/testbench_isim_beh.exe.sim/work/m_00000000003492447019_0084551821.didat");
	xsi_register_executes(pe);
}
