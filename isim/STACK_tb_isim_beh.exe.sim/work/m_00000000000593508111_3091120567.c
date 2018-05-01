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
static const char *ng0 = "C:/Users/Sam/Desktop/440/Stack_CPU/STACK.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {2, 0};
static int ng5[] = {0, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};
static int ng8[] = {5, 0};
static int ng9[] = {6, 0};
static int ng10[] = {7, 0};
static int ng11[] = {8, 0};
static int ng12[] = {9, 0};
static int ng13[] = {10, 0};
static int ng14[] = {11, 0};
static int ng15[] = {12, 0};
static int ng16[] = {13, 0};
static int ng17[] = {14, 0};
static int ng18[] = {15, 0};



static void Cont_25_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t43[8];
    char t54[8];
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
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
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

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 8);

LAB20:    t55 = (t0 + 4416);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memcpy(t59, t3, 8);
    xsi_driver_vfirst_trans(t55, 0, 31);
    t60 = (t0 + 4304);
    *((int *)t60) = 1;

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

LAB12:    t35 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t40 = (t0 + 2568);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t44 = (t0 + 2568);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 2568);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 2408);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng2)));
    memset(t54, 0, 8);
    xsi_vlog_unsigned_minus(t54, 32, t52, 4, t53, 32);
    xsi_vlog_generic_get_array_select_value(t43, 32, t42, t46, t49, 2, 1, t54, 32, 2);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t43, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Cont_26_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t31[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB5;

LAB4:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) > *((unsigned int *)t7))
        goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB12:    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB13;

LAB14:    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t19) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t31, 8);

LAB21:    t43 = (t0 + 4480);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t3, 8);
    xsi_driver_vfirst_trans(t43, 0, 31);
    t48 = (t0 + 4320);
    *((int *)t48) = 1;

LAB1:    return;
LAB5:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t18 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB12;

LAB13:    t23 = ((char*)((ng1)));
    goto LAB14;

LAB15:    t28 = (t0 + 2568);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t32 = (t0 + 2568);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2568);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 2408);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng4)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_minus(t42, 32, t40, 4, t41, 32);
    xsi_vlog_generic_get_array_select_value(t31, 32, t30, t34, t37, 2, 1, t42, 32, 2);
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 32, t23, 32, t31, 32);
    goto LAB21;

LAB19:    memcpy(t3, t23, 8);
    goto LAB21;

}

static void Always_29_2(char *t0)
{
    char t13[8];
    char t14[8];
    char t54[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
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
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4336);
    *((int *)t2) = 1;
    t3 = (t0 + 4016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t23 = (t9 | t10);
    *((unsigned int *)t11) = t23;
    t26 = *((unsigned int *)t11);
    t29 = (t26 != 0);
    if (t29 == 1)
        goto LAB42;

LAB43:
LAB44:    t16 = (t13 + 4);
    t44 = *((unsigned int *)t16);
    t45 = (~(t44));
    t46 = *((unsigned int *)t13);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(66, ng0);

LAB59:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB47:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);

LAB9:    xsi_set_current_line(36, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    t15 = (t0 + 2568);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2568);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t21, 32, 1);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng13)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t15 = (t12 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t11, t16, 2, 1, t17, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t24 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t27 = (!(t7));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB10:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB11;

LAB12:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB13;

LAB14:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB15;

LAB16:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB17;

LAB18:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB19;

LAB20:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB21;

LAB22:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB23;

LAB24:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB25;

LAB26:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB27;

LAB28:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB29;

LAB30:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB31;

LAB32:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB33;

LAB34:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB35;

LAB36:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB37;

LAB38:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB39;

LAB40:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t14);
    t31 = (t8 - t9);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB41;

LAB42:    t30 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t30 | t33);
    t12 = (t3 + 4);
    t15 = (t4 + 4);
    t34 = *((unsigned int *)t12);
    t35 = (~(t34));
    t36 = *((unsigned int *)t3);
    t24 = (t36 & t35);
    t37 = *((unsigned int *)t15);
    t38 = (~(t37));
    t39 = *((unsigned int *)t4);
    t27 = (t39 & t38);
    t40 = (~(t24));
    t41 = (~(t27));
    t42 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t42 & t40);
    t43 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t43 & t41);
    goto LAB44;

LAB45:    xsi_set_current_line(46, ng0);

LAB48:    xsi_set_current_line(51, ng0);
    t17 = (t0 + 1368U);
    t18 = *((char **)t17);
    t17 = (t18 + 4);
    t49 = *((unsigned int *)t17);
    t50 = (~(t49));
    t51 = *((unsigned int *)t18);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB49;

LAB50:
LAB51:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB55;

LAB56:
LAB57:    goto LAB47;

LAB49:    xsi_set_current_line(51, ng0);

LAB52:    xsi_set_current_line(52, ng0);
    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    t19 = (t0 + 2568);
    t21 = (t0 + 2568);
    t22 = (t21 + 72U);
    t25 = *((char **)t22);
    t55 = (t0 + 2568);
    t56 = (t55 + 64U);
    t57 = *((char **)t56);
    t58 = (t0 + 2408);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    xsi_vlog_generic_convert_array_indices(t14, t54, t25, t57, 2, 1, t60, 4, 2);
    t61 = (t14 + 4);
    t62 = *((unsigned int *)t61);
    t28 = (!(t62));
    t63 = (t54 + 4);
    t64 = *((unsigned int *)t63);
    t31 = (!(t64));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB53;

LAB54:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t4, 4, t5, 4);
    t11 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);
    goto LAB51;

LAB53:    t65 = *((unsigned int *)t14);
    t66 = *((unsigned int *)t54);
    t67 = (t65 - t66);
    t68 = (t67 + 1);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, *((unsigned int *)t54), t68, 0LL);
    goto LAB54;

LAB55:    xsi_set_current_line(59, ng0);

LAB58:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 4, t11, 4, t12, 4);
    t15 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t15, t13, 0, 0, 4, 0LL);
    goto LAB57;

}


extern void work_m_00000000000593508111_3091120567_init()
{
	static char *pe[] = {(void *)Cont_25_0,(void *)Cont_26_1,(void *)Always_29_2};
	xsi_register_didat("work_m_00000000000593508111_3091120567", "isim/STACK_tb_isim_beh.exe.sim/work/m_00000000000593508111_3091120567.didat");
	xsi_register_executes(pe);
}
