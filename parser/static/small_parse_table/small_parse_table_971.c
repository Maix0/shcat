/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_971.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4855(t_small_parse_table_array *v)
{
	v->a[97100] = 10;
	v->a[97101] = actions(3);
	v->a[97102] = 1;
	v->a[97103] = sym_comment;
	v->a[97104] = actions(3856);
	v->a[97105] = 1;
	v->a[97106] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97107] = actions(3862);
	v->a[97108] = 1;
	v->a[97109] = sym_string_content;
	v->a[97110] = actions(3864);
	v->a[97111] = 1;
	v->a[97112] = anon_sym_DOLLAR_LBRACE;
	v->a[97113] = actions(3866);
	v->a[97114] = 1;
	v->a[97115] = anon_sym_DOLLAR_LPAREN;
	v->a[97116] = actions(3868);
	v->a[97117] = 1;
	v->a[97118] = anon_sym_BQUOTE;
	v->a[97119] = actions(4194);
	small_parse_table_4856(v);
}

void	small_parse_table_4856(t_small_parse_table_array *v)
{
	v->a[97120] = 1;
	v->a[97121] = anon_sym_DOLLAR;
	v->a[97122] = actions(4196);
	v->a[97123] = 1;
	v->a[97124] = anon_sym_DQUOTE;
	v->a[97125] = state(1987);
	v->a[97126] = 1;
	v->a[97127] = aux_sym_string_repeat1;
	v->a[97128] = state(2107);
	v->a[97129] = 4;
	v->a[97130] = sym_arithmetic_expansion;
	v->a[97131] = sym_simple_expansion;
	v->a[97132] = sym_expansion;
	v->a[97133] = sym_command_substitution;
	v->a[97134] = 10;
	v->a[97135] = actions(3);
	v->a[97136] = 1;
	v->a[97137] = sym_comment;
	v->a[97138] = actions(3856);
	v->a[97139] = 1;
	small_parse_table_4857(v);
}

void	small_parse_table_4857(t_small_parse_table_array *v)
{
	v->a[97140] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97141] = actions(3862);
	v->a[97142] = 1;
	v->a[97143] = sym_string_content;
	v->a[97144] = actions(3864);
	v->a[97145] = 1;
	v->a[97146] = anon_sym_DOLLAR_LBRACE;
	v->a[97147] = actions(3866);
	v->a[97148] = 1;
	v->a[97149] = anon_sym_DOLLAR_LPAREN;
	v->a[97150] = actions(3868);
	v->a[97151] = 1;
	v->a[97152] = anon_sym_BQUOTE;
	v->a[97153] = actions(4198);
	v->a[97154] = 1;
	v->a[97155] = anon_sym_DOLLAR;
	v->a[97156] = actions(4200);
	v->a[97157] = 1;
	v->a[97158] = anon_sym_DQUOTE;
	v->a[97159] = state(1987);
	small_parse_table_4858(v);
}

void	small_parse_table_4858(t_small_parse_table_array *v)
{
	v->a[97160] = 1;
	v->a[97161] = aux_sym_string_repeat1;
	v->a[97162] = state(2107);
	v->a[97163] = 4;
	v->a[97164] = sym_arithmetic_expansion;
	v->a[97165] = sym_simple_expansion;
	v->a[97166] = sym_expansion;
	v->a[97167] = sym_command_substitution;
	v->a[97168] = 6;
	v->a[97169] = actions(1094);
	v->a[97170] = 1;
	v->a[97171] = sym_comment;
	v->a[97172] = actions(3896);
	v->a[97173] = 1;
	v->a[97174] = anon_sym_LT_LT;
	v->a[97175] = actions(3898);
	v->a[97176] = 1;
	v->a[97177] = anon_sym_LT_LT_DASH;
	v->a[97178] = actions(4206);
	v->a[97179] = 2;
	small_parse_table_4859(v);
}

void	small_parse_table_4859(t_small_parse_table_array *v)
{
	v->a[97180] = anon_sym_LT_AMP_DASH;
	v->a[97181] = anon_sym_GT_AMP_DASH;
	v->a[97182] = actions(4204);
	v->a[97183] = 3;
	v->a[97184] = anon_sym_GT_GT;
	v->a[97185] = anon_sym_AMP_GT_GT;
	v->a[97186] = anon_sym_GT_PIPE;
	v->a[97187] = actions(4202);
	v->a[97188] = 5;
	v->a[97189] = anon_sym_LT;
	v->a[97190] = anon_sym_GT;
	v->a[97191] = anon_sym_AMP_GT;
	v->a[97192] = anon_sym_LT_AMP;
	v->a[97193] = anon_sym_GT_AMP;
	v->a[97194] = 10;
	v->a[97195] = actions(3);
	v->a[97196] = 1;
	v->a[97197] = sym_comment;
	v->a[97198] = actions(3856);
	v->a[97199] = 1;
	small_parse_table_4860(v);
}

/* EOF small_parse_table_971.c */
