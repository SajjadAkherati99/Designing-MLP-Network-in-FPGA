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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002772192553_0377897103_init();
    work_m_00000000002379548279_3867407839_init();
    work_m_00000000001828105716_1868351101_init();
    work_m_00000000002266380449_4260589381_init();
    work_m_00000000000580216100_3140231294_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000580216100_3140231294");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
