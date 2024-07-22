/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_221.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1105(t_small_parse_table_array *v)
{
	v->a[22100] = anon_sym_GT_EQ;
	v->a[22101] = anon_sym_QMARK;
	v->a[22102] = anon_sym_COLON;
	v->a[22103] = anon_sym_PLUS_PLUS2;
	v->a[22104] = anon_sym_DASH_DASH2;
	v->a[22105] = 5;
	v->a[22106] = actions(3);
	v->a[22107] = 1;
	v->a[22108] = sym_comment;
	v->a[22109] = state(215);
	v->a[22110] = 2;
	v->a[22111] = sym_concatenation;
	v->a[22112] = aux_sym_for_statement_repeat1;
	v->a[22113] = actions(678);
	v->a[22114] = 3;
	v->a[22115] = sym_file_descriptor;
	v->a[22116] = sym_variable_name;
	v->a[22117] = ts_builtin_sym_end;
	v->a[22118] = state(387);
	v->a[22119] = 5;
	small_parse_table_1106(v);
}

void	small_parse_table_1106(t_small_parse_table_array *v)
{
	v->a[22120] = sym_arithmetic_expansion;
	v->a[22121] = sym_string;
	v->a[22122] = sym_simple_expansion;
	v->a[22123] = sym_expansion;
	v->a[22124] = sym_command_substitution;
	v->a[22125] = actions(676);
	v->a[22126] = 24;
	v->a[22127] = anon_sym_PIPE;
	v->a[22128] = anon_sym_SEMI_SEMI;
	v->a[22129] = anon_sym_AMP_AMP;
	v->a[22130] = anon_sym_PIPE_PIPE;
	v->a[22131] = anon_sym_LT;
	v->a[22132] = anon_sym_GT;
	v->a[22133] = anon_sym_GT_GT;
	v->a[22134] = anon_sym_LT_AMP;
	v->a[22135] = anon_sym_GT_AMP;
	v->a[22136] = anon_sym_GT_PIPE;
	v->a[22137] = anon_sym_LT_GT;
	v->a[22138] = anon_sym_LT_LT;
	v->a[22139] = anon_sym_LT_LT_DASH;
	small_parse_table_1107(v);
}

void	small_parse_table_1107(t_small_parse_table_array *v)
{
	v->a[22140] = aux_sym_heredoc_redirect_token1;
	v->a[22141] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22142] = anon_sym_DOLLAR;
	v->a[22143] = anon_sym_DQUOTE;
	v->a[22144] = sym_raw_string;
	v->a[22145] = sym_number;
	v->a[22146] = anon_sym_DOLLAR_LBRACE;
	v->a[22147] = anon_sym_DOLLAR_LPAREN;
	v->a[22148] = anon_sym_BQUOTE;
	v->a[22149] = sym_word;
	v->a[22150] = anon_sym_SEMI;
	v->a[22151] = 5;
	v->a[22152] = actions(3);
	v->a[22153] = 1;
	v->a[22154] = sym_comment;
	v->a[22155] = actions(529);
	v->a[22156] = 2;
	v->a[22157] = sym_file_descriptor;
	v->a[22158] = sym_variable_name;
	v->a[22159] = state(203);
	small_parse_table_1108(v);
}

void	small_parse_table_1108(t_small_parse_table_array *v)
{
	v->a[22160] = 2;
	v->a[22161] = sym_concatenation;
	v->a[22162] = aux_sym_for_statement_repeat1;
	v->a[22163] = state(396);
	v->a[22164] = 5;
	v->a[22165] = sym_arithmetic_expansion;
	v->a[22166] = sym_string;
	v->a[22167] = sym_simple_expansion;
	v->a[22168] = sym_expansion;
	v->a[22169] = sym_command_substitution;
	v->a[22170] = actions(531);
	v->a[22171] = 25;
	v->a[22172] = anon_sym_PIPE;
	v->a[22173] = anon_sym_RPAREN;
	v->a[22174] = anon_sym_SEMI_SEMI;
	v->a[22175] = anon_sym_AMP_AMP;
	v->a[22176] = anon_sym_PIPE_PIPE;
	v->a[22177] = anon_sym_LT;
	v->a[22178] = anon_sym_GT;
	v->a[22179] = anon_sym_GT_GT;
	small_parse_table_1109(v);
}

void	small_parse_table_1109(t_small_parse_table_array *v)
{
	v->a[22180] = anon_sym_LT_AMP;
	v->a[22181] = anon_sym_GT_AMP;
	v->a[22182] = anon_sym_GT_PIPE;
	v->a[22183] = anon_sym_LT_GT;
	v->a[22184] = anon_sym_LT_LT;
	v->a[22185] = anon_sym_LT_LT_DASH;
	v->a[22186] = aux_sym_heredoc_redirect_token1;
	v->a[22187] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22188] = anon_sym_DOLLAR;
	v->a[22189] = anon_sym_DQUOTE;
	v->a[22190] = sym_raw_string;
	v->a[22191] = sym_number;
	v->a[22192] = anon_sym_DOLLAR_LBRACE;
	v->a[22193] = anon_sym_DOLLAR_LPAREN;
	v->a[22194] = anon_sym_BQUOTE;
	v->a[22195] = sym_word;
	v->a[22196] = anon_sym_SEMI;
	v->a[22197] = 5;
	v->a[22198] = actions(3);
	v->a[22199] = 1;
	small_parse_table_1110(v);
}

/* EOF small_parse_table_221.c */
