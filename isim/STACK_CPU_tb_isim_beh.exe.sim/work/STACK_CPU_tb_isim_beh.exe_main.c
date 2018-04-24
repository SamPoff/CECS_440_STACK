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
    work_m_00000000004021927700_1393068579_init();
    work_m_00000000001060544383_3568826723_init();
    work_m_00000000002295733891_0075087644_init();
    work_m_00000000003064534351_3091120567_init();
    work_m_00000000001551540361_0886308060_init();
    work_m_00000000002016621955_0848006593_init();
    work_m_00000000003672507402_1938219760_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003672507402_1938219760");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
