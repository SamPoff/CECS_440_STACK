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
static const char *ng0 = "C:/Users/Sam/Desktop/440/Stack_CPU/CONTROL_UNIT.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {32U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {16U, 0U};
static unsigned int ng5[] = {3U, 0U};



static void Always_26_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(28, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t7, 4, 0, 1);
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t7, 5, 0, 1);
    goto LAB13;

LAB9:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t3, 4, 0, 1);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t3, 5, 0, 1);
    goto LAB13;

LAB11:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t3, 4, 0, 1);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t3, 5, 0, 1);
    goto LAB13;

}


extern void work_m_00000000004250046340_0075087644_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000004250046340_0075087644", "isim/STACK_CPU_tb_isim_beh.exe.sim/work/m_00000000004250046340_0075087644.didat");
	xsi_register_executes(pe);
}