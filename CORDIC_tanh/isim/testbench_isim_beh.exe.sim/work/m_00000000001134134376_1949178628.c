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
static const char *ng0 = "E:/my_files/course/term8/FPGA/hws/hw4/CORDIC Files/CORDIC_tanh/testbench.v";
static unsigned int ng1[] = {16384U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "Verilog_FixedPoint_for_test_in_MATLAB.txt";
static const char *ng5 = "w";
static const char *ng6 = "Verilog_FixedPoint.txt";
static unsigned int ng7[] = {1U, 0U};
static int ng8[] = {8192, 0, 0, 0};
static int ng9[] = {4096, 0, 0, 0};
static const char *ng10 = "%.14f\n";
static const char *ng11 = "CORDIC_tanh(%.12f) = %.13f; \n";



static void Initial_28_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);

LAB4:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_unary_minus(t3, 16, t2, 16);
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng4, ng5);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng6, ng5);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3296);
    xsi_process_wait(t2, 11796480000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(44, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_47_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_48_2(char *t0)
{
    char t18[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    double t15;
    double t16;
    double t17;
    char *t19;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4304);
    *((int *)t2) = 1;
    t3 = (t0 + 4016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t5) == 0)
        goto LAB10;

LAB12:    t6 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t6) = 1;

LAB13:    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t18, 0, 0, 1);
    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);

LAB9:    xsi_set_current_line(50, ng0);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    t15 = xsi_vlog_convert_to_real(t14, 17, 1);
    t13 = (t0 + 2408);
    xsi_vlogvar_assign_value_double(t13, t15, 0);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t15 = *((double *)t4);
    t5 = ((char*)((ng8)));
    t16 = xsi_vlog_convert_to_real(t5, 32, 1);
    t17 = (t15 / t16);
    t6 = (t0 + 2408);
    xsi_vlogvar_assign_value_double(t6, t17, 0);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t15 = xsi_vlog_convert_to_real(t4, 16, 1);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value_double(t5, t15, 0);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t15 = *((double *)t4);
    t5 = ((char*)((ng9)));
    t16 = xsi_vlog_convert_to_real(t5, 32, 1);
    t17 = (t15 / t16);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value_double(t6, t17, 0);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t15 = *((double *)t7);
    *((double *)t18) = t15;
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng10, 2, t0, (char)114, t18, 64);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t15 = *((double *)t7);
    *((double *)t18) = t15;
    t13 = (t0 + 2408);
    t14 = (t13 + 56U);
    t19 = *((char **)t14);
    t16 = *((double *)t19);
    *((double *)t20) = t16;
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng11, 3, t0, (char)114, t18, 64, (char)114, t20, 64);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t15 = *((double *)t4);
    *((double *)t18) = t15;
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t16 = *((double *)t7);
    *((double *)t20) = t16;
    xsi_vlogfile_write(1, 0, 0, ng11, 3, t0, (char)114, t18, 64, (char)114, t20, 64);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 16, t4, 16, t5, 16);
    t6 = (t0 + 1448);
    xsi_vlogvar_assign_value(t6, t18, 0, 0, 16);
    goto LAB8;

LAB10:    *((unsigned int *)t18) = 1;
    goto LAB13;

}


extern void work_m_00000000001134134376_1949178628_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_47_1,(void *)Always_48_2};
	xsi_register_didat("work_m_00000000001134134376_1949178628", "isim/testbench_isim_beh.exe.sim/work/m_00000000001134134376_1949178628.didat");
	xsi_register_executes(pe);
}
