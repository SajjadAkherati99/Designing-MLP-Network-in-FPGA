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
static const char *ng0 = "\t\t\t\tplease ignore the first ouput, this is for my latency";
static const char *ng1 = "";
static const char *ng2 = "\tinput = %b \t\tAND \toutput = %b\t";
static unsigned int ng3[] = {106U, 0U};
static const char *ng4 = "D:/sajjad/course/term6/fpga/hws/hw5/testbench4/testbench4/test.v";
static unsigned int ng5[] = {192U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {53U, 0U};

void Monitor_40_4(char *);
void Monitor_42_6(char *);
void Monitor_40_4(char *);
void Monitor_42_6(char *);


static void Monitor_40_4_Func(char *t0)
{

LAB0:    xsi_vlogfile_write(1, 0, 3, ng0, 1, t0);

LAB1:    return;
}

static void Monitor_42_6_Func(char *t0)
{
    char t1[16];
    char t7[8];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng1, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 1448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 8, t5, 8, t6, 8);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 3, ng2, 3, t0, (char)118, t7, 8, (char)118, t9, 8);

LAB1:    return;
}

static void Initial_22_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng4);

LAB4:    xsi_set_current_line(24, ng4);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(25, ng4);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng4);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29, ng4);
    t2 = (t0 + 2656);
    xsi_process_wait(t2, 15000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(30, ng4);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

static void Always_36_1(char *t0)
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

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng4);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng4);
    t4 = (t0 + 1608);
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
    t24 = (t0 + 1608);
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

static void Always_38_2(char *t0)
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

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng4);
    t2 = (t0 + 4904);
    *((int *)t2) = 1;
    t3 = (t0 + 3376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng4);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t6, 8, t7, 8);
    t9 = (t0 + 1448);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    goto LAB2;

}

static void Initial_39_3(char *t0)
{

LAB0:    xsi_set_current_line(40, ng4);
    Monitor_40_4(t0);

LAB1:    return;
}

static void Initial_41_5(char *t0)
{

LAB0:    xsi_set_current_line(42, ng4);
    Monitor_42_6(t0);

LAB1:    return;
}

void Monitor_40_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3896);
    t2 = (t0 + 4920);
    xsi_vlogfile_monitor((void *)Monitor_40_4_Func, t1, t2);

LAB1:    return;
}

void Monitor_42_6(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4144);
    t2 = (t0 + 4936);
    xsi_vlogfile_monitor((void *)Monitor_42_6_Func, t1, t2);

LAB1:    return;
}

static void impl1_execute(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4952);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t3 = (t0 + 1928);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 8, t6, 8, t7, 8);
    xsi_vlogimplicitvar_assign_value(t3, t8, 8);
    goto LAB2;

}


extern void work_m_00000000002107604097_1985558087_init()
{
	static char *pe[] = {(void *)Initial_22_0,(void *)Always_36_1,(void *)Always_38_2,(void *)Initial_39_3,(void *)Initial_41_5,(void *)Monitor_40_4,(void *)Monitor_42_6,(void *)impl1_execute};
	xsi_register_didat("work_m_00000000002107604097_1985558087", "isim/test_isim_beh.exe.sim/work/m_00000000002107604097_1985558087.didat");
	xsi_register_executes(pe);
}
