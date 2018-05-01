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
static const char *ng0 = "C:/Users/Sam/Desktop/440/Stack_CPU/STACK_CPU_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {67108881U, 0U};
static unsigned int ng4[] = {67108898U, 0U};
static unsigned int ng5[] = {67108915U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {67108932U, 0U};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {67108949U, 0U};
static int ng10[] = {4, 0};
static unsigned int ng11[] = {0U, 0U};
static int ng12[] = {5, 0};
static unsigned int ng13[] = {201326592U, 0U};
static int ng14[] = {6, 0};
static int ng15[] = {7, 0};
static unsigned int ng16[] = {134217728U, 0U};
static int ng17[] = {8, 0};
static int ng18[] = {9, 0};
static int ng19[] = {10, 0};
static int ng20[] = {11, 0};
static int ng21[] = {12, 0};
static int ng22[] = {13, 0};
static int ng23[] = {14, 0};
static int ng24[] = {15, 0};



static void Always_37_0(char *t0)
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

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1288);
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
    t24 = (t0 + 1288);
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

static void Initial_39_1(char *t0)
{
    char t5[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;

LAB0:    t1 = (t0 + 2616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);

LAB4:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4516);
    t4 = *((char **)t3);
    t7 = (t0 + 4540);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 4564);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4588);
    t4 = *((char **)t3);
    t7 = (t0 + 4612);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 4636);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4660);
    t4 = *((char **)t3);
    t7 = (t0 + 4684);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 4708);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4732);
    t4 = *((char **)t3);
    t7 = (t0 + 4756);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 4780);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4804);
    t4 = *((char **)t3);
    t7 = (t0 + 4828);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 4852);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4876);
    t4 = *((char **)t3);
    t7 = (t0 + 4900);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 4924);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4948);
    t4 = *((char **)t3);
    t7 = (t0 + 4972);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 4996);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5020);
    t4 = *((char **)t3);
    t7 = (t0 + 5044);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5068);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5092);
    t4 = *((char **)t3);
    t7 = (t0 + 5116);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5140);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5164);
    t4 = *((char **)t3);
    t7 = (t0 + 5188);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5212);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5236);
    t4 = *((char **)t3);
    t7 = (t0 + 5260);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5284);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5308);
    t4 = *((char **)t3);
    t7 = (t0 + 5332);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5356);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5380);
    t4 = *((char **)t3);
    t7 = (t0 + 5404);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5428);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng21)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5452);
    t4 = *((char **)t3);
    t7 = (t0 + 5476);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5500);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5524);
    t4 = *((char **)t3);
    t7 = (t0 + 5548);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5572);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng23)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5596);
    t4 = *((char **)t3);
    t7 = (t0 + 5620);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5644);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng24)));
    xsi_vlog_generic_convert_array_indices(t5, t6, t10, t14, 2, 1, t15, 32, 1);
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2424);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB37;

LAB1:    return;
LAB5:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB6;

LAB7:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB8;

LAB9:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB10;

LAB11:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB12;

LAB13:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB14;

LAB15:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB16;

LAB17:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB18;

LAB19:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB20;

LAB21:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB22;

LAB23:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB24;

LAB25:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB26;

LAB27:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB28;

LAB29:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB30;

LAB31:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB32;

LAB33:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB34;

LAB35:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t6);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(((char*)(t4)), t2, 0, *((unsigned int *)t6), t26);
    goto LAB36;

LAB37:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2424);
    xsi_process_wait(t2, 90000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(67, ng0);
    xsi_vlog_stop(1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2424);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(69, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}


extern void work_m_00000000003672507402_1938219760_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Initial_39_1};
	xsi_register_didat("work_m_00000000003672507402_1938219760", "isim/STACK_CPU_tb_isim_beh.exe.sim/work/m_00000000003672507402_1938219760.didat");
	xsi_register_executes(pe);
}
