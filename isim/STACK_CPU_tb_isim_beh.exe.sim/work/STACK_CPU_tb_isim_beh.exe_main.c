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
    work_m_00000000001060544383_3790364664_init();
    work_m_00000000004250046340_0075087644_init();
    work_m_00000000000534981804_3091120567_init();
    work_m_00000000004164496159_0886308060_init();
    work_m_00000000003750635409_0848006593_init();
    work_m_00000000003672507402_1938219760_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003672507402_1938219760");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
