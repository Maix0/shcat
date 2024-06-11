/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_951.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4755(t_small_parse_table_array *v)
{
	v->a[95100] = 4;
	v->a[95101] = actions(3);
	v->a[95102] = 1;
	v->a[95103] = sym_comment;
	v->a[95104] = actions(3736);
	v->a[95105] = 1;
	v->a[95106] = sym_variable_name;
	v->a[95107] = actions(3734);
	v->a[95108] = 2;
	v->a[95109] = aux_sym__simple_variable_name_token1;
	v->a[95110] = aux_sym__multiline_variable_name_token1;
	v->a[95111] = actions(3732);
	v->a[95112] = 9;
	v->a[95113] = anon_sym_BANG;
	v->a[95114] = anon_sym_DASH;
	v->a[95115] = anon_sym_STAR;
	v->a[95116] = anon_sym_QMARK;
	v->a[95117] = anon_sym_DOLLAR;
	v->a[95118] = anon_sym_POUND;
	v->a[95119] = anon_sym_AT;
	small_parse_table_4756(v);
}

void	small_parse_table_4756(t_small_parse_table_array *v)
{
	v->a[95120] = anon_sym_0;
	v->a[95121] = anon_sym__;
	v->a[95122] = 10;
	v->a[95123] = actions(3);
	v->a[95124] = 1;
	v->a[95125] = sym_comment;
	v->a[95126] = actions(3856);
	v->a[95127] = 1;
	v->a[95128] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95129] = actions(3862);
	v->a[95130] = 1;
	v->a[95131] = sym_string_content;
	v->a[95132] = actions(3864);
	v->a[95133] = 1;
	v->a[95134] = anon_sym_DOLLAR_LBRACE;
	v->a[95135] = actions(3866);
	v->a[95136] = 1;
	v->a[95137] = anon_sym_DOLLAR_LPAREN;
	v->a[95138] = actions(3868);
	v->a[95139] = 1;
	small_parse_table_4757(v);
}

void	small_parse_table_4757(t_small_parse_table_array *v)
{
	v->a[95140] = anon_sym_BQUOTE;
	v->a[95141] = actions(3938);
	v->a[95142] = 1;
	v->a[95143] = anon_sym_DOLLAR;
	v->a[95144] = actions(3940);
	v->a[95145] = 1;
	v->a[95146] = anon_sym_DQUOTE;
	v->a[95147] = state(1980);
	v->a[95148] = 1;
	v->a[95149] = aux_sym_string_repeat1;
	v->a[95150] = state(2107);
	v->a[95151] = 4;
	v->a[95152] = sym_arithmetic_expansion;
	v->a[95153] = sym_simple_expansion;
	v->a[95154] = sym_expansion;
	v->a[95155] = sym_command_substitution;
	v->a[95156] = 10;
	v->a[95157] = actions(3);
	v->a[95158] = 1;
	v->a[95159] = sym_comment;
	small_parse_table_4758(v);
}

void	small_parse_table_4758(t_small_parse_table_array *v)
{
	v->a[95160] = actions(3856);
	v->a[95161] = 1;
	v->a[95162] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95163] = actions(3862);
	v->a[95164] = 1;
	v->a[95165] = sym_string_content;
	v->a[95166] = actions(3864);
	v->a[95167] = 1;
	v->a[95168] = anon_sym_DOLLAR_LBRACE;
	v->a[95169] = actions(3866);
	v->a[95170] = 1;
	v->a[95171] = anon_sym_DOLLAR_LPAREN;
	v->a[95172] = actions(3868);
	v->a[95173] = 1;
	v->a[95174] = anon_sym_BQUOTE;
	v->a[95175] = actions(3942);
	v->a[95176] = 1;
	v->a[95177] = anon_sym_DOLLAR;
	v->a[95178] = actions(3944);
	v->a[95179] = 1;
	small_parse_table_4759(v);
}

void	small_parse_table_4759(t_small_parse_table_array *v)
{
	v->a[95180] = anon_sym_DQUOTE;
	v->a[95181] = state(1998);
	v->a[95182] = 1;
	v->a[95183] = aux_sym_string_repeat1;
	v->a[95184] = state(2107);
	v->a[95185] = 4;
	v->a[95186] = sym_arithmetic_expansion;
	v->a[95187] = sym_simple_expansion;
	v->a[95188] = sym_expansion;
	v->a[95189] = sym_command_substitution;
	v->a[95190] = 6;
	v->a[95191] = actions(1094);
	v->a[95192] = 1;
	v->a[95193] = sym_comment;
	v->a[95194] = actions(3952);
	v->a[95195] = 1;
	v->a[95196] = anon_sym_LT_LT;
	v->a[95197] = actions(3954);
	v->a[95198] = 1;
	v->a[95199] = anon_sym_LT_LT_DASH;
	small_parse_table_4760(v);
}

/* EOF small_parse_table_951.c */
