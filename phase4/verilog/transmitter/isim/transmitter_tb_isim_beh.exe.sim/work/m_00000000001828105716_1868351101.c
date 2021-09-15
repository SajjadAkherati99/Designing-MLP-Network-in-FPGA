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
static const char *ng0 = "E:/my_files/course/term8/FPGA/project/phase4/verilog/transmitter/data_interleaver.v";
static unsigned int ng1[] = {5U, 0U};
static unsigned int ng2[] = {47U, 0U};
static unsigned int ng3[] = {9U, 0U};
static unsigned int ng4[] = {95U, 0U};
static unsigned int ng5[] = {23U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {12U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {1U, 0U};
static unsigned int ng10[] = {0U, 0U};
static unsigned int ng11[] = {1431634175U, 0U, 5U, 0U};
static int ng12[] = {0, 0};
static int ng13[] = {35, 0};
static int ng14[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng15[] = {36, 0};
static int ng16[] = {191, 0};
static int ng17[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {2U, 0U};
static unsigned int ng20[] = {17U, 0U};



static void Cont_30_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t38[8];
    char t39[8];
    char t42[8];
    char *t1;
    char *t2;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;

LAB0:    t1 = (t0 + 5952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1912U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t75 = (t0 + 7408);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memset(t79, 0, 8);
    t80 = 255U;
    t81 = t80;
    t82 = (t3 + 4);
    t83 = *((unsigned int *)t3);
    t80 = (t80 & t83);
    t84 = *((unsigned int *)t82);
    t81 = (t81 & t84);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t86 | t80);
    t87 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t87 | t81);
    xsi_driver_vfirst_trans(t75, 0, 7);
    t88 = (t0 + 7264);
    *((int *)t88) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = (t0 + 1912U);
    t41 = *((char **)t40);
    t40 = ((char*)((ng3)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t40);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB24;

LAB21:    if (t54 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t39, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB28:    t65 = (t39 + 4);
    t66 = *((unsigned int *)t39);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t70 = *((unsigned int *)t39);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t39) > 0)
        goto LAB35;

LAB36:    memcpy(t38, t74, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 8, t33, 8, t38, 8);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t39) = 1;
    goto LAB28;

LAB27:    t64 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB29:    t69 = ((char*)((ng4)));
    goto LAB30;

LAB31:    t74 = ((char*)((ng5)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t38, 8, t69, 8, t74, 8);
    goto LAB37;

LAB35:    memcpy(t38, t69, 8);
    goto LAB37;

}

static void Cont_34_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t38[8];
    char t39[8];
    char t42[8];
    char *t1;
    char *t2;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;

LAB0:    t1 = (t0 + 6200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1912U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t75 = (t0 + 7472);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memset(t79, 0, 8);
    t80 = 15U;
    t81 = t80;
    t82 = (t3 + 4);
    t83 = *((unsigned int *)t3);
    t80 = (t80 & t83);
    t84 = *((unsigned int *)t82);
    t81 = (t81 & t84);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t86 | t80);
    t87 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t87 | t81);
    xsi_driver_vfirst_trans(t75, 0, 3);
    t88 = (t0 + 7280);
    *((int *)t88) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng6)));
    goto LAB13;

LAB14:    t40 = (t0 + 1912U);
    t41 = *((char **)t40);
    t40 = ((char*)((ng3)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t40);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB24;

LAB21:    if (t54 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t39, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB28:    t65 = (t39 + 4);
    t66 = *((unsigned int *)t39);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t70 = *((unsigned int *)t39);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t39) > 0)
        goto LAB35;

LAB36:    memcpy(t38, t74, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 4, t33, 4, t38, 4);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t39) = 1;
    goto LAB28;

LAB27:    t64 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB29:    t69 = ((char*)((ng7)));
    goto LAB30;

LAB31:    t74 = ((char*)((ng8)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t38, 4, t69, 4, t74, 4);
    goto LAB37;

LAB35:    memcpy(t38, t69, 8);
    goto LAB37;

}

static void Cont_38_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t35[8];
    char t37[8];
    char t42[8];
    char t44[8];
    char t49[8];
    char t53[8];
    char t58[8];
    char t59[8];
    char t62[8];
    char t89[8];
    char t91[8];
    char t96[8];
    char t98[8];
    char t103[8];
    char t107[8];
    char t112[8];
    char t113[8];
    char t116[8];
    char t143[8];
    char t145[8];
    char t150[8];
    char t152[8];
    char t157[8];
    char t161[8];
    char t166[8];
    char t168[8];
    char t173[8];
    char t175[8];
    char t180[8];
    char t184[8];
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
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
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
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t90;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t114;
    char *t115;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t144;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t151;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t158;
    char *t159;
    char *t160;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t167;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t174;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t181;
    char *t182;
    char *t183;
    char *t185;
    char *t186;
    char *t187;
    char *t188;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;

LAB0:    t1 = (t0 + 6448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4712);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
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

LAB13:    t54 = *((unsigned int *)t4);
    t55 = (~(t54));
    t56 = *((unsigned int *)t31);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t58, 8);

LAB20:    t185 = (t0 + 7536);
    t186 = (t185 + 56U);
    t187 = *((char **)t186);
    t188 = (t187 + 56U);
    t189 = *((char **)t188);
    memset(t189, 0, 8);
    t190 = 255U;
    t191 = t190;
    t192 = (t3 + 4);
    t193 = *((unsigned int *)t3);
    t190 = (t190 & t193);
    t194 = *((unsigned int *)t192);
    t191 = (t191 & t194);
    t195 = (t189 + 4);
    t196 = *((unsigned int *)t189);
    *((unsigned int *)t189) = (t196 | t190);
    t197 = *((unsigned int *)t195);
    *((unsigned int *)t195) = (t197 | t191);
    xsi_driver_vfirst_trans(t185, 0, 7);
    t198 = (t0 + 7296);
    *((int *)t198) = 1;

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

LAB12:    t36 = ((char*)((ng10)));
    t38 = (t0 + 4072);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlogtype_concat(t37, 3, 3, 1U, t40, 3);
    t41 = ((char*)((ng10)));
    xsi_vlogtype_concat(t35, 8, 8, 3U, t41, 3, t37, 3, t36, 2);
    t43 = ((char*)((ng10)));
    t45 = (t0 + 4072);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    xsi_vlogtype_concat(t44, 3, 3, 1U, t47, 3);
    t48 = ((char*)((ng10)));
    xsi_vlogtype_concat(t42, 8, 8, 3U, t48, 4, t44, 3, t43, 1);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_add(t49, 8, t35, 8, t42, 8);
    t50 = (t0 + 4232);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 8, t49, 8, t52, 4);
    goto LAB13;

LAB14:    t60 = (t0 + 2552U);
    t61 = *((char **)t60);
    t60 = ((char*)((ng6)));
    memset(t62, 0, 8);
    t63 = (t61 + 4);
    t64 = (t60 + 4);
    t65 = *((unsigned int *)t61);
    t66 = *((unsigned int *)t60);
    t67 = (t65 ^ t66);
    t68 = *((unsigned int *)t63);
    t69 = *((unsigned int *)t64);
    t70 = (t68 ^ t69);
    t71 = (t67 | t70);
    t72 = *((unsigned int *)t63);
    t73 = *((unsigned int *)t64);
    t74 = (t72 | t73);
    t75 = (~(t74));
    t76 = (t71 & t75);
    if (t76 != 0)
        goto LAB24;

LAB21:    if (t74 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t62) = 1;

LAB24:    memset(t59, 0, 8);
    t78 = (t62 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t62);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t78) != 0)
        goto LAB27;

LAB28:    t85 = (t59 + 4);
    t86 = *((unsigned int *)t59);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB29;

LAB30:    t108 = *((unsigned int *)t59);
    t109 = (~(t108));
    t110 = *((unsigned int *)t85);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t85) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t59) > 0)
        goto LAB35;

LAB36:    memcpy(t58, t112, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 8, t53, 8, t58, 8);
    goto LAB20;

LAB18:    memcpy(t3, t53, 8);
    goto LAB20;

LAB23:    t77 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t59) = 1;
    goto LAB28;

LAB27:    t84 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB28;

LAB29:    t90 = ((char*)((ng10)));
    t92 = (t0 + 4072);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    xsi_vlogtype_concat(t91, 3, 3, 1U, t94, 3);
    t95 = ((char*)((ng10)));
    xsi_vlogtype_concat(t89, 8, 8, 3U, t95, 2, t91, 3, t90, 3);
    t97 = ((char*)((ng10)));
    t99 = (t0 + 4072);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    xsi_vlogtype_concat(t98, 3, 3, 1U, t101, 3);
    t102 = ((char*)((ng10)));
    xsi_vlogtype_concat(t96, 8, 8, 3U, t102, 3, t98, 3, t97, 2);
    memset(t103, 0, 8);
    xsi_vlog_unsigned_add(t103, 8, t89, 8, t96, 8);
    t104 = (t0 + 4232);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    memset(t107, 0, 8);
    xsi_vlog_unsigned_add(t107, 8, t103, 8, t106, 4);
    goto LAB30;

LAB31:    t114 = (t0 + 2552U);
    t115 = *((char **)t114);
    t114 = ((char*)((ng7)));
    memset(t116, 0, 8);
    t117 = (t115 + 4);
    t118 = (t114 + 4);
    t119 = *((unsigned int *)t115);
    t120 = *((unsigned int *)t114);
    t121 = (t119 ^ t120);
    t122 = *((unsigned int *)t117);
    t123 = *((unsigned int *)t118);
    t124 = (t122 ^ t123);
    t125 = (t121 | t124);
    t126 = *((unsigned int *)t117);
    t127 = *((unsigned int *)t118);
    t128 = (t126 | t127);
    t129 = (~(t128));
    t130 = (t125 & t129);
    if (t130 != 0)
        goto LAB41;

LAB38:    if (t128 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t116) = 1;

LAB41:    memset(t113, 0, 8);
    t132 = (t116 + 4);
    t133 = *((unsigned int *)t132);
    t134 = (~(t133));
    t135 = *((unsigned int *)t116);
    t136 = (t135 & t134);
    t137 = (t136 & 1U);
    if (t137 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t132) != 0)
        goto LAB44;

LAB45:    t139 = (t113 + 4);
    t140 = *((unsigned int *)t113);
    t141 = *((unsigned int *)t139);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB46;

LAB47:    t162 = *((unsigned int *)t113);
    t163 = (~(t162));
    t164 = *((unsigned int *)t139);
    t165 = (t163 || t164);
    if (t165 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t139) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t113) > 0)
        goto LAB52;

LAB53:    memcpy(t112, t184, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t58, 8, t107, 8, t112, 8);
    goto LAB37;

LAB35:    memcpy(t58, t107, 8);
    goto LAB37;

LAB40:    t131 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t113) = 1;
    goto LAB45;

LAB44:    t138 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB45;

LAB46:    t144 = ((char*)((ng10)));
    t146 = (t0 + 4072);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    xsi_vlogtype_concat(t145, 3, 3, 1U, t148, 3);
    t149 = ((char*)((ng10)));
    xsi_vlogtype_concat(t143, 8, 8, 3U, t149, 1, t145, 3, t144, 4);
    t151 = ((char*)((ng10)));
    t153 = (t0 + 4072);
    t154 = (t153 + 56U);
    t155 = *((char **)t154);
    xsi_vlogtype_concat(t152, 3, 3, 1U, t155, 3);
    t156 = ((char*)((ng10)));
    xsi_vlogtype_concat(t150, 8, 8, 3U, t156, 2, t152, 3, t151, 3);
    memset(t157, 0, 8);
    xsi_vlog_unsigned_add(t157, 8, t143, 8, t150, 8);
    t158 = (t0 + 4232);
    t159 = (t158 + 56U);
    t160 = *((char **)t159);
    memset(t161, 0, 8);
    xsi_vlog_unsigned_add(t161, 8, t157, 8, t160, 4);
    goto LAB47;

LAB48:    t167 = ((char*)((ng10)));
    t169 = (t0 + 4072);
    t170 = (t169 + 56U);
    t171 = *((char **)t170);
    xsi_vlogtype_concat(t168, 3, 3, 1U, t171, 3);
    t172 = ((char*)((ng10)));
    xsi_vlogtype_concat(t166, 8, 8, 3U, t172, 3, t168, 3, t167, 2);
    t174 = ((char*)((ng10)));
    t176 = (t0 + 4072);
    t177 = (t176 + 56U);
    t178 = *((char **)t177);
    xsi_vlogtype_concat(t175, 3, 3, 1U, t178, 3);
    t179 = ((char*)((ng10)));
    xsi_vlogtype_concat(t173, 8, 8, 3U, t179, 4, t175, 3, t174, 1);
    memset(t180, 0, 8);
    xsi_vlog_unsigned_add(t180, 8, t166, 8, t173, 8);
    t181 = (t0 + 4232);
    t182 = (t181 + 56U);
    t183 = *((char **)t182);
    memset(t184, 0, 8);
    xsi_vlog_unsigned_add(t184, 8, t180, 8, t183, 4);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t112, 8, t161, 8, t184, 8);
    goto LAB54;

LAB52:    memcpy(t112, t161, 8);
    goto LAB54;

}

static void Always_46_3(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t23[8];
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
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    char *t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;

LAB0:    t1 = (t0 + 6696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 7312);
    *((int *)t2) = 1;
    t3 = (t0 + 6728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
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

LAB11:    xsi_set_current_line(56, ng0);

LAB18:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2392U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(47, ng0);

LAB13:    xsi_set_current_line(48, ng0);
    t19 = ((char*)((ng11)));
    t20 = (t0 + 3912);
    t24 = (t0 + 3912);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng12)));
    t28 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t21, t22, t23, ((int*)(t26)), 2, t27, 32, 1, t28, 32, 1);
    t29 = (t21 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t22 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    t36 = (t23 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3912);
    t5 = (t0 + 3912);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng15)));
    t19 = ((char*)((ng16)));
    xsi_vlog_convert_partindices(t4, t21, t22, ((int*)(t12)), 2, t13, 32, 1, t19, 32, 1);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t24 = (t21 + 4);
    t8 = *((unsigned int *)t24);
    t34 = (!(t8));
    t35 = (t31 && t34);
    t25 = (t22 + 4);
    t9 = *((unsigned int *)t25);
    t38 = (!(t9));
    t39 = (t35 && t38);
    if (t39 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 192, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4712);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB12;

LAB14:    t40 = *((unsigned int *)t23);
    t41 = (t40 + 0);
    t42 = *((unsigned int *)t21);
    t43 = *((unsigned int *)t22);
    t44 = (t42 - t43);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t20, t19, t41, *((unsigned int *)t22), t45, 0LL);
    goto LAB15;

LAB16:    t10 = *((unsigned int *)t22);
    t41 = (t10 + 0);
    t11 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t21);
    t44 = (t11 - t14);
    t45 = (t44 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t41, *((unsigned int *)t21), t45, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(57, ng0);

LAB22:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 4712);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);

LAB23:    t13 = ((char*)((ng9)));
    t31 = xsi_vlog_unsigned_case_compare(t12, 2, t13, 2);
    if (t31 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng8)));
    t31 = xsi_vlog_unsigned_case_compare(t12, 2, t2, 2);
    if (t31 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB21;

LAB24:    xsi_set_current_line(59, ng0);

LAB29:    xsi_set_current_line(60, ng0);
    t19 = (t0 + 2072U);
    t20 = *((char **)t19);
    t19 = (t0 + 3752);
    t24 = (t0 + 3752);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t0 + 2712U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_bit_index(t4, t26, 2, t28, 8, 2);
    t27 = (t4 + 4);
    t14 = *((unsigned int *)t27);
    t34 = (!(t14));
    if (t34 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 3752);
    t5 = (t0 + 3752);
    t6 = (t5 + 72U);
    t13 = *((char **)t6);
    t19 = (t0 + 2712U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng8)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 8, t20, 8, t19, 8);
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t21, 8, 2);
    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t31 = (!(t7));
    if (t31 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng18)));
    memset(t4, 0, 8);
    t13 = (t5 + 4);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t30 = (~(t18));
    t33 = (t15 & t30);
    if (t33 != 0)
        goto LAB37;

LAB34:    if (t18 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t4) = 1;

LAB37:    t24 = (t4 + 4);
    t37 = *((unsigned int *)t24);
    t40 = (~(t37));
    t42 = *((unsigned int *)t4);
    t43 = (t42 & t40);
    t46 = (t43 != 0);
    if (t46 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(76, ng0);

LAB55:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 3, t5, 3, t6, 3);
    t13 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 3, 0LL);

LAB40:    goto LAB28;

LAB26:    xsi_set_current_line(81, ng0);

LAB56:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 2072U);
    t5 = *((char **)t3);
    t3 = (t0 + 3752);
    t6 = (t0 + 3752);
    t13 = (t6 + 72U);
    t19 = *((char **)t13);
    t20 = (t0 + 2712U);
    t24 = *((char **)t20);
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t24, 8, 2);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t34 = (!(t7));
    if (t34 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 3752);
    t5 = (t0 + 3752);
    t6 = (t5 + 72U);
    t13 = *((char **)t6);
    t19 = (t0 + 2712U);
    t20 = *((char **)t19);
    t19 = (t0 + 2552U);
    t24 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 8, t20, 8, t24, 4);
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t21, 8, 2);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t31 = (!(t7));
    if (t31 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng18)));
    memset(t4, 0, 8);
    t13 = (t5 + 4);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t30 = (~(t18));
    t33 = (t15 & t30);
    if (t33 != 0)
        goto LAB64;

LAB61:    if (t18 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t4) = 1;

LAB64:    t24 = (t4 + 4);
    t37 = *((unsigned int *)t24);
    t40 = (~(t37));
    t42 = *((unsigned int *)t4);
    t43 = (t42 & t40);
    t46 = (t43 != 0);
    if (t46 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(97, ng0);

LAB82:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 3, t5, 3, t6, 3);
    t13 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 3, 0LL);

LAB67:    goto LAB28;

LAB30:    xsi_vlogvar_wait_assign_value(t19, t20, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB31;

LAB32:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB33;

LAB36:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(62, ng0);

LAB41:    xsi_set_current_line(63, ng0);
    t25 = ((char*)((ng12)));
    t26 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t26, t25, 0, 0, 3, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng19)));
    memset(t4, 0, 8);
    t13 = (t5 + 4);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t30 = (~(t18));
    t33 = (t15 & t30);
    if (t33 != 0)
        goto LAB45;

LAB42:    if (t18 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t4) = 1;

LAB45:    t24 = (t4 + 4);
    t37 = *((unsigned int *)t24);
    t40 = (~(t37));
    t42 = *((unsigned int *)t4);
    t43 = (t42 & t40);
    t46 = (t43 != 0);
    if (t46 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(72, ng0);

LAB54:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 4, t5, 4, t6, 4);
    t13 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 4, 0LL);

LAB48:    goto LAB40;

LAB44:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(64, ng0);

LAB49:    xsi_set_current_line(65, ng0);
    t25 = ((char*)((ng12)));
    t26 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t26, t25, 0, 0, 4, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4712);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 192, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = (t0 + 3912);
    t5 = (t0 + 3912);
    t6 = (t5 + 72U);
    t13 = *((char **)t6);
    t19 = (t0 + 2712U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t20, 8, 2);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t31 = (!(t7));
    if (t31 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 3912);
    t5 = (t0 + 3912);
    t6 = (t5 + 72U);
    t13 = *((char **)t6);
    t19 = (t0 + 2712U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng8)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 8, t20, 8, t19, 8);
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t21, 8, 2);
    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t31 = (!(t7));
    if (t31 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB48;

LAB50:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB51;

LAB52:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB53;

LAB57:    xsi_vlogvar_wait_assign_value(t3, t5, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB58;

LAB59:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB60;

LAB63:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(84, ng0);

LAB68:    xsi_set_current_line(85, ng0);
    t25 = ((char*)((ng12)));
    t26 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t26, t25, 0, 0, 3, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2552U);
    t13 = *((char **)t6);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 4, t13, 4, t6, 4);
    memset(t21, 0, 8);
    t19 = (t5 + 4);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t19);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t30 = (~(t18));
    t33 = (t15 & t30);
    if (t33 != 0)
        goto LAB72;

LAB69:    if (t18 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t21) = 1;

LAB72:    t25 = (t21 + 4);
    t37 = *((unsigned int *)t25);
    t40 = (~(t37));
    t42 = *((unsigned int *)t21);
    t43 = (t42 & t40);
    t46 = (t43 != 0);
    if (t46 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(93, ng0);

LAB81:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 4, t5, 4, t6, 4);
    t13 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 4, 0LL);

LAB75:    goto LAB67;

LAB71:    t24 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(86, ng0);

LAB76:    xsi_set_current_line(87, ng0);
    t26 = ((char*)((ng12)));
    t27 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 4, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 192, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = (t0 + 3912);
    t5 = (t0 + 3912);
    t6 = (t5 + 72U);
    t13 = *((char **)t6);
    t19 = (t0 + 2712U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t20, 8, 2);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t31 = (!(t7));
    if (t31 == 1)
        goto LAB77;

LAB78:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 3912);
    t5 = (t0 + 3912);
    t6 = (t5 + 72U);
    t13 = *((char **)t6);
    t19 = (t0 + 2712U);
    t20 = *((char **)t19);
    t19 = (t0 + 2552U);
    t24 = *((char **)t19);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 8, t20, 8, t24, 4);
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t21, 8, 2);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t31 = (!(t7));
    if (t31 == 1)
        goto LAB79;

LAB80:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB75;

LAB77:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB78;

LAB79:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB80;

}

static void Always_106_4(char *t0)
{
    char t4[8];
    char t24[8];
    char t56[8];
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
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
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;

LAB0:    t1 = (t0 + 6944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 7328);
    *((int *)t2) = 1;
    t3 = (t0 + 6976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);

LAB5:    xsi_set_current_line(107, ng0);
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

LAB11:    xsi_set_current_line(113, ng0);

LAB14:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB15:    t6 = ((char*)((ng10)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng9)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB20;

LAB21:
LAB22:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(107, ng0);

LAB13:    xsi_set_current_line(108, ng0);
    t19 = ((char*)((ng12)));
    t20 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 7, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(115, ng0);

LAB23:    xsi_set_current_line(116, ng0);
    t12 = (t0 + 3912);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t0 + 3912);
    t22 = (t20 + 72U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng10)));
    t26 = (t0 + 4392);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlogtype_concat(t24, 8, 8, 2U, t28, 7, t25, 1);
    xsi_vlog_generic_get_index_select_value(t4, 1, t19, t23, 2, t24, 8, 2);
    t29 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 3912);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng9)));
    t22 = (t0 + 4392);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    xsi_vlogtype_concat(t24, 8, 8, 2U, t25, 7, t20, 1);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t19, 2, t24, 8, 2);
    t26 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng20)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB25;

LAB24:    t19 = (t12 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t6) > *((unsigned int *)t12))
        goto LAB27;

LAB26:    *((unsigned int *)t4) = 1;

LAB27:    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB31:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB33;

LAB32:    t19 = (t12 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t6) < *((unsigned int *)t12))
        goto LAB34;

LAB35:    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB39:    goto LAB22;

LAB18:    xsi_set_current_line(128, ng0);

LAB40:    xsi_set_current_line(129, ng0);
    t3 = (t0 + 3912);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 3912);
    t19 = (t13 + 72U);
    t20 = *((char **)t19);
    t22 = ((char*)((ng10)));
    t23 = (t0 + 4392);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    xsi_vlogtype_concat(t24, 8, 8, 2U, t26, 7, t22, 1);
    xsi_vlog_generic_get_index_select_value(t4, 1, t12, t20, 2, t24, 8, 2);
    t27 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t27, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 3912);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng9)));
    t22 = (t0 + 4392);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    xsi_vlogtype_concat(t24, 8, 8, 2U, t25, 7, t20, 1);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t19, 2, t24, 8, 2);
    t26 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB42;

LAB41:    t19 = (t12 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB42;

LAB45:    if (*((unsigned int *)t6) > *((unsigned int *)t12))
        goto LAB44;

LAB43:    *((unsigned int *)t4) = 1;

LAB44:    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB48:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 2872U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB50;

LAB49:    t19 = (t13 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB50;

LAB53:    if (*((unsigned int *)t6) < *((unsigned int *)t13))
        goto LAB51;

LAB52:    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB56:    goto LAB22;

LAB20:    xsi_set_current_line(141, ng0);

LAB57:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 5032);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (~(t7));
    t9 = *((unsigned int *)t12);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(146, ng0);

LAB62:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 3912);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng10)));
    t22 = (t0 + 4392);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    xsi_vlogtype_concat(t24, 8, 8, 2U, t25, 7, t20, 1);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t19, 2, t24, 8, 2);
    t26 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 3912);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng9)));
    t22 = (t0 + 4392);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    xsi_vlogtype_concat(t24, 8, 8, 2U, t25, 7, t20, 1);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t19, 2, t24, 8, 2);
    t26 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 1, 0LL);

LAB60:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 2872U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB64;

LAB63:    t19 = (t13 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB64;

LAB67:    if (*((unsigned int *)t6) > *((unsigned int *)t13))
        goto LAB66;

LAB65:    *((unsigned int *)t4) = 1;

LAB66:    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB70:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 2872U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB72;

LAB71:    t19 = (t13 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB72;

LAB75:    if (*((unsigned int *)t6) < *((unsigned int *)t13))
        goto LAB73;

LAB74:    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB78:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t6 = (t3 + 4);
    t12 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t12);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t32 = (~(t18));
    t33 = (t15 & t32);
    if (t33 != 0)
        goto LAB82;

LAB79:    if (t18 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t4) = 1;

LAB82:    t19 = (t4 + 4);
    t34 = *((unsigned int *)t19);
    t35 = (~(t34));
    t36 = *((unsigned int *)t4);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB83;

LAB84:
LAB85:    goto LAB22;

LAB25:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB27;

LAB29:    xsi_set_current_line(119, ng0);
    t23 = ((char*)((ng9)));
    t25 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t25, t23, 0, 0, 1, 0LL);
    goto LAB31;

LAB33:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB37:    xsi_set_current_line(123, ng0);
    t23 = (t0 + 4392);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng9)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 7, t26, 7, t27, 7);
    t28 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t28, t24, 0, 0, 7, 0LL);
    goto LAB39;

LAB42:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB44;

LAB46:    xsi_set_current_line(132, ng0);
    t23 = ((char*)((ng9)));
    t25 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t25, t23, 0, 0, 1, 0LL);
    goto LAB48;

LAB50:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB52;

LAB51:    *((unsigned int *)t4) = 1;
    goto LAB52;

LAB54:    xsi_set_current_line(136, ng0);
    t23 = (t0 + 4392);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng9)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 7, t26, 7, t27, 7);
    t28 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t28, t24, 0, 0, 7, 0LL);
    goto LAB56;

LAB58:    xsi_set_current_line(142, ng0);

LAB61:    xsi_set_current_line(143, ng0);
    t19 = (t0 + 3912);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    t23 = (t0 + 3912);
    t25 = (t23 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng9)));
    t28 = (t0 + 4392);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlogtype_concat(t24, 8, 8, 2U, t30, 7, t27, 1);
    xsi_vlog_generic_get_index_select_value(t4, 1, t22, t26, 2, t24, 8, 2);
    t31 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t31, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 3912);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng10)));
    t22 = (t0 + 4392);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    xsi_vlogtype_concat(t24, 8, 8, 2U, t25, 7, t20, 1);
    xsi_vlog_generic_get_index_select_value(t4, 1, t6, t19, 2, t24, 8, 2);
    t26 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t26, t4, 0, 0, 1, 0LL);
    goto LAB60;

LAB64:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB66;

LAB68:    xsi_set_current_line(151, ng0);
    t23 = ((char*)((ng9)));
    t25 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t25, t23, 0, 0, 1, 0LL);
    goto LAB70;

LAB72:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB74;

LAB73:    *((unsigned int *)t4) = 1;
    goto LAB74;

LAB76:    xsi_set_current_line(155, ng0);
    t23 = (t0 + 4392);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng9)));
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 7, t26, 7, t27, 7);
    t28 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t28, t24, 0, 0, 7, 0LL);
    goto LAB78;

LAB81:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(158, ng0);

LAB86:    xsi_set_current_line(159, ng0);
    t20 = (t0 + 4552);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    t25 = ((char*)((ng1)));
    memset(t24, 0, 8);
    t26 = (t23 + 4);
    t27 = (t25 + 4);
    t39 = *((unsigned int *)t23);
    t40 = *((unsigned int *)t25);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t26);
    t43 = *((unsigned int *)t27);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t26);
    t47 = *((unsigned int *)t27);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB90;

LAB87:    if (t48 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t24) = 1;

LAB90:    t29 = (t24 + 4);
    t51 = *((unsigned int *)t29);
    t52 = (~(t51));
    t53 = *((unsigned int *)t24);
    t54 = (t53 & t52);
    t55 = (t54 != 0);
    if (t55 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(163, ng0);

LAB101:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 3, t6, 3, t12, 3);
    t13 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 3, 0LL);

LAB93:    goto LAB85;

LAB89:    t28 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(159, ng0);

LAB94:    xsi_set_current_line(160, ng0);
    t30 = (t0 + 5032);
    t31 = (t30 + 56U);
    t57 = *((char **)t31);
    memset(t56, 0, 8);
    t58 = (t57 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB98;

LAB96:    if (*((unsigned int *)t58) == 0)
        goto LAB95;

LAB97:    t64 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t64) = 1;

LAB98:    t65 = (t56 + 4);
    t66 = (t57 + 4);
    t67 = *((unsigned int *)t57);
    t68 = (~(t67));
    *((unsigned int *)t56) = t68;
    *((unsigned int *)t65) = 0;
    if (*((unsigned int *)t66) != 0)
        goto LAB100;

LAB99:    t73 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t73 & 1U);
    t74 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t74 & 1U);
    t75 = (t0 + 5032);
    xsi_vlogvar_wait_assign_value(t75, t56, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB93;

LAB95:    *((unsigned int *)t56) = 1;
    goto LAB98;

LAB100:    t69 = *((unsigned int *)t56);
    t70 = *((unsigned int *)t66);
    *((unsigned int *)t56) = (t69 | t70);
    t71 = *((unsigned int *)t65);
    t72 = *((unsigned int *)t66);
    *((unsigned int *)t65) = (t71 | t72);
    goto LAB99;

}


extern void work_m_00000000001828105716_1868351101_init()
{
	static char *pe[] = {(void *)Cont_30_0,(void *)Cont_34_1,(void *)Cont_38_2,(void *)Always_46_3,(void *)Always_106_4};
	xsi_register_didat("work_m_00000000001828105716_1868351101", "isim/transmitter_tb_isim_beh.exe.sim/work/m_00000000001828105716_1868351101.didat");
	xsi_register_executes(pe);
}
