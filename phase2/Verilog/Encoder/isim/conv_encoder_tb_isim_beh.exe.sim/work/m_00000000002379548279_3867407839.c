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
static const char *ng0 = "E:/my_files/course/term8/FPGA/project/phase2/Verilog/Encoder/conv_encoder.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {6, 0};
static unsigned int ng5[] = {3U, 0U};



static void Always_14_0(char *t0)
{
    char t4[8];
    char t23[8];
    char t24[8];
    char t25[8];
    char t66[8];
    char t75[8];
    char t92[8];
    char t101[8];
    char t116[8];
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
    char *t21;
    int t22;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    int t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
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
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    unsigned int t122;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t5 = (t0 + 1528U);
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

LAB11:    xsi_set_current_line(18, ng0);

LAB14:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:
LAB17:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15, ng0);

LAB13:    xsi_set_current_line(16, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(19, ng0);

LAB18:    xsi_set_current_line(20, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 2408);
    t12 = (t0 + 2408);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t19, 2, t20, 32, 1);
    t21 = (t4 + 4);
    t14 = *((unsigned int *)t21);
    t22 = (!(t14));
    if (t22 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 31U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 31U);
    t13 = (t0 + 2408);
    t19 = (t0 + 2408);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t26 = ((char*)((ng3)));
    t27 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t21)), 2, t26, 32, 1, t27, 32, 1);
    t28 = (t23 + 4);
    t15 = *((unsigned int *)t28);
    t22 = (!(t15));
    t29 = (t24 + 4);
    t16 = *((unsigned int *)t29);
    t30 = (!(t16));
    t31 = (t22 && t30);
    t32 = (t25 + 4);
    t17 = *((unsigned int *)t32);
    t33 = (!(t17));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 4);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 4);
    t14 = (t11 & 1);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    *((unsigned int *)t23) = t17;
    t19 = (t3 + 4);
    t20 = (t4 + 4);
    t21 = (t23 + 4);
    t18 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t20);
    t37 = (t18 | t36);
    *((unsigned int *)t21) = t37;
    t40 = *((unsigned int *)t21);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB23;

LAB24:
LAB25:    t26 = (t0 + 2408);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t24, 0, 8);
    t29 = (t24 + 4);
    t32 = (t28 + 4);
    t44 = *((unsigned int *)t28);
    t45 = (t44 >> 3);
    t46 = (t45 & 1);
    *((unsigned int *)t24) = t46;
    t47 = *((unsigned int *)t32);
    t48 = (t47 >> 3);
    t49 = (t48 & 1);
    *((unsigned int *)t29) = t49;
    t50 = *((unsigned int *)t23);
    t51 = *((unsigned int *)t24);
    t52 = (t50 ^ t51);
    *((unsigned int *)t25) = t52;
    t53 = (t23 + 4);
    t54 = (t24 + 4);
    t55 = (t25 + 4);
    t56 = *((unsigned int *)t53);
    t57 = *((unsigned int *)t54);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB26;

LAB27:
LAB28:    t63 = (t0 + 2408);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memset(t66, 0, 8);
    t67 = (t66 + 4);
    t68 = (t65 + 4);
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 1);
    t71 = (t70 & 1);
    *((unsigned int *)t66) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 >> 1);
    t74 = (t73 & 1);
    *((unsigned int *)t67) = t74;
    t76 = *((unsigned int *)t25);
    t77 = *((unsigned int *)t66);
    t78 = (t76 ^ t77);
    *((unsigned int *)t75) = t78;
    t79 = (t25 + 4);
    t80 = (t66 + 4);
    t81 = (t75 + 4);
    t82 = *((unsigned int *)t79);
    t83 = *((unsigned int *)t80);
    t84 = (t82 | t83);
    *((unsigned int *)t81) = t84;
    t85 = *((unsigned int *)t81);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB29;

LAB30:
LAB31:    t89 = (t0 + 2408);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memset(t92, 0, 8);
    t93 = (t92 + 4);
    t94 = (t91 + 4);
    t95 = *((unsigned int *)t91);
    t96 = (t95 >> 0);
    t97 = (t96 & 1);
    *((unsigned int *)t92) = t97;
    t98 = *((unsigned int *)t94);
    t99 = (t98 >> 0);
    t100 = (t99 & 1);
    *((unsigned int *)t93) = t100;
    t102 = *((unsigned int *)t75);
    t103 = *((unsigned int *)t92);
    t104 = (t102 ^ t103);
    *((unsigned int *)t101) = t104;
    t105 = (t75 + 4);
    t106 = (t92 + 4);
    t107 = (t101 + 4);
    t108 = *((unsigned int *)t105);
    t109 = *((unsigned int *)t106);
    t110 = (t108 | t109);
    *((unsigned int *)t107) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 != 0);
    if (t112 == 1)
        goto LAB32;

LAB33:
LAB34:    t115 = (t0 + 1928);
    t117 = (t0 + 1928);
    t118 = (t117 + 72U);
    t119 = *((char **)t118);
    t120 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t116, t119, 2, t120, 32, 1);
    t121 = (t116 + 4);
    t122 = *((unsigned int *)t121);
    t22 = (!(t122));
    if (t22 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 5);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 5);
    t14 = (t11 & 1);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    *((unsigned int *)t23) = t17;
    t19 = (t3 + 4);
    t20 = (t4 + 4);
    t21 = (t23 + 4);
    t18 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t20);
    t37 = (t18 | t36);
    *((unsigned int *)t21) = t37;
    t40 = *((unsigned int *)t21);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB37;

LAB38:
LAB39:    t26 = (t0 + 2408);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t24, 0, 8);
    t29 = (t24 + 4);
    t32 = (t28 + 4);
    t44 = *((unsigned int *)t28);
    t45 = (t44 >> 4);
    t46 = (t45 & 1);
    *((unsigned int *)t24) = t46;
    t47 = *((unsigned int *)t32);
    t48 = (t47 >> 4);
    t49 = (t48 & 1);
    *((unsigned int *)t29) = t49;
    t50 = *((unsigned int *)t23);
    t51 = *((unsigned int *)t24);
    t52 = (t50 ^ t51);
    *((unsigned int *)t25) = t52;
    t53 = (t23 + 4);
    t54 = (t24 + 4);
    t55 = (t25 + 4);
    t56 = *((unsigned int *)t53);
    t57 = *((unsigned int *)t54);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB40;

LAB41:
LAB42:    t63 = (t0 + 2408);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memset(t66, 0, 8);
    t67 = (t66 + 4);
    t68 = (t65 + 4);
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 3);
    t71 = (t70 & 1);
    *((unsigned int *)t66) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 >> 3);
    t74 = (t73 & 1);
    *((unsigned int *)t67) = t74;
    t76 = *((unsigned int *)t25);
    t77 = *((unsigned int *)t66);
    t78 = (t76 ^ t77);
    *((unsigned int *)t75) = t78;
    t79 = (t25 + 4);
    t80 = (t66 + 4);
    t81 = (t75 + 4);
    t82 = *((unsigned int *)t79);
    t83 = *((unsigned int *)t80);
    t84 = (t82 | t83);
    *((unsigned int *)t81) = t84;
    t85 = *((unsigned int *)t81);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB43;

LAB44:
LAB45:    t89 = (t0 + 2408);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memset(t92, 0, 8);
    t93 = (t92 + 4);
    t94 = (t91 + 4);
    t95 = *((unsigned int *)t91);
    t96 = (t95 >> 0);
    t97 = (t96 & 1);
    *((unsigned int *)t92) = t97;
    t98 = *((unsigned int *)t94);
    t99 = (t98 >> 0);
    t100 = (t99 & 1);
    *((unsigned int *)t93) = t100;
    t102 = *((unsigned int *)t75);
    t103 = *((unsigned int *)t92);
    t104 = (t102 ^ t103);
    *((unsigned int *)t101) = t104;
    t105 = (t75 + 4);
    t106 = (t92 + 4);
    t107 = (t101 + 4);
    t108 = *((unsigned int *)t105);
    t109 = *((unsigned int *)t106);
    t110 = (t108 | t109);
    *((unsigned int *)t107) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 != 0);
    if (t112 == 1)
        goto LAB46;

LAB47:
LAB48:    t115 = (t0 + 1928);
    t117 = (t0 + 1928);
    t118 = (t117 + 72U);
    t119 = *((char **)t118);
    t120 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t116, t119, 2, t120, 32, 1);
    t121 = (t116 + 4);
    t122 = *((unsigned int *)t121);
    t22 = (!(t122));
    if (t22 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB17;

LAB19:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB20;

LAB21:    t18 = *((unsigned int *)t25);
    t35 = (t18 + 0);
    t36 = *((unsigned int *)t23);
    t37 = *((unsigned int *)t24);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t13, t4, t35, *((unsigned int *)t24), t39, 0LL);
    goto LAB22;

LAB23:    t42 = *((unsigned int *)t23);
    t43 = *((unsigned int *)t21);
    *((unsigned int *)t23) = (t42 | t43);
    goto LAB25;

LAB26:    t61 = *((unsigned int *)t25);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t25) = (t61 | t62);
    goto LAB28;

LAB29:    t87 = *((unsigned int *)t75);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t75) = (t87 | t88);
    goto LAB31;

LAB32:    t113 = *((unsigned int *)t101);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t101) = (t113 | t114);
    goto LAB34;

LAB35:    xsi_vlogvar_wait_assign_value(t115, t101, 0, *((unsigned int *)t116), 1, 0LL);
    goto LAB36;

LAB37:    t42 = *((unsigned int *)t23);
    t43 = *((unsigned int *)t21);
    *((unsigned int *)t23) = (t42 | t43);
    goto LAB39;

LAB40:    t61 = *((unsigned int *)t25);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t25) = (t61 | t62);
    goto LAB42;

LAB43:    t87 = *((unsigned int *)t75);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t75) = (t87 | t88);
    goto LAB45;

LAB46:    t113 = *((unsigned int *)t101);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t101) = (t113 | t114);
    goto LAB48;

LAB49:    xsi_vlogvar_wait_assign_value(t115, t101, 0, *((unsigned int *)t116), 1, 0LL);
    goto LAB50;

}


extern void work_m_00000000002379548279_3867407839_init()
{
	static char *pe[] = {(void *)Always_14_0};
	xsi_register_didat("work_m_00000000002379548279_3867407839", "isim/conv_encoder_tb_isim_beh.exe.sim/work/m_00000000002379548279_3867407839.didat");
	xsi_register_executes(pe);
}
