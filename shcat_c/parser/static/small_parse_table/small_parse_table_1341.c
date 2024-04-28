/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1341.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6705(t_small_parse_table_array *v)
{
	v->a[134100] = sym_test_operator;
	v->a[134101] = sym__brace_start;
	v->a[134102] = anon_sym_LPAREN_LPAREN;
	v->a[134103] = anon_sym_PIPE_PIPE;
	v->a[134104] = anon_sym_AMP_AMP;
	v->a[134105] = anon_sym_GT_GT;
	v->a[134106] = anon_sym_PIPE_AMP;
	v->a[134107] = anon_sym_AMP_GT_GT;
	v->a[134108] = anon_sym_GT_PIPE;
	v->a[134109] = anon_sym_LT_AMP_DASH;
	v->a[134110] = anon_sym_GT_AMP_DASH;
	v->a[134111] = anon_sym_LT_LT_DASH;
	v->a[134112] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[134113] = anon_sym_DOLLAR_LBRACK;
	v->a[134114] = sym__special_character;
	v->a[134115] = anon_sym_DQUOTE;
	v->a[134116] = sym_raw_string;
	v->a[134117] = sym_ansi_c_string;
	v->a[134118] = anon_sym_DOLLAR_LBRACE;
	v->a[134119] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6706(v);
}

void	small_parse_table_6706(t_small_parse_table_array *v)
{
	v->a[134120] = anon_sym_LT_LPAREN;
	v->a[134121] = anon_sym_GT_LPAREN;
	v->a[134122] = 3;
	v->a[134123] = actions(71);
	v->a[134124] = 1;
	v->a[134125] = sym_comment;
	v->a[134126] = actions(1308);
	v->a[134127] = 13;
	v->a[134128] = anon_sym_PIPE;
	v->a[134129] = anon_sym_LT;
	v->a[134130] = anon_sym_GT;
	v->a[134131] = anon_sym_LT_LT;
	v->a[134132] = anon_sym_AMP_GT;
	v->a[134133] = anon_sym_LT_AMP;
	v->a[134134] = anon_sym_GT_AMP;
	v->a[134135] = anon_sym_DOLLAR;
	v->a[134136] = aux_sym_number_token1;
	v->a[134137] = aux_sym_number_token2;
	v->a[134138] = anon_sym_DOLLAR_LPAREN;
	v->a[134139] = anon_sym_BQUOTE;
	small_parse_table_6707(v);
}

void	small_parse_table_6707(t_small_parse_table_array *v)
{
	v->a[134140] = sym_word;
	v->a[134141] = actions(1310);
	v->a[134142] = 27;
	v->a[134143] = sym_file_descriptor;
	v->a[134144] = sym__concat;
	v->a[134145] = sym_variable_name;
	v->a[134146] = sym_test_operator;
	v->a[134147] = sym__brace_start;
	v->a[134148] = anon_sym_LPAREN_LPAREN;
	v->a[134149] = anon_sym_PIPE_PIPE;
	v->a[134150] = anon_sym_AMP_AMP;
	v->a[134151] = anon_sym_GT_GT;
	v->a[134152] = anon_sym_PIPE_AMP;
	v->a[134153] = anon_sym_AMP_GT_GT;
	v->a[134154] = anon_sym_GT_PIPE;
	v->a[134155] = anon_sym_LT_AMP_DASH;
	v->a[134156] = anon_sym_GT_AMP_DASH;
	v->a[134157] = anon_sym_LT_LT_DASH;
	v->a[134158] = anon_sym_LT_LT_LT;
	v->a[134159] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_6708(v);
}

void	small_parse_table_6708(t_small_parse_table_array *v)
{
	v->a[134160] = anon_sym_DOLLAR_LBRACK;
	v->a[134161] = aux_sym_concatenation_token1;
	v->a[134162] = sym__special_character;
	v->a[134163] = anon_sym_DQUOTE;
	v->a[134164] = sym_raw_string;
	v->a[134165] = sym_ansi_c_string;
	v->a[134166] = anon_sym_DOLLAR_LBRACE;
	v->a[134167] = anon_sym_DOLLAR_BQUOTE;
	v->a[134168] = anon_sym_LT_LPAREN;
	v->a[134169] = anon_sym_GT_LPAREN;
	v->a[134170] = 6;
	v->a[134171] = actions(71);
	v->a[134172] = 1;
	v->a[134173] = sym_comment;
	v->a[134174] = actions(1105);
	v->a[134175] = 1;
	v->a[134176] = aux_sym_concatenation_token1;
	v->a[134177] = actions(6744);
	v->a[134178] = 1;
	v->a[134179] = sym__concat;
	small_parse_table_6709(v);
}

void	small_parse_table_6709(t_small_parse_table_array *v)
{
	v->a[134180] = state(2511);
	v->a[134181] = 1;
	v->a[134182] = aux_sym_concatenation_repeat1;
	v->a[134183] = actions(1265);
	v->a[134184] = 14;
	v->a[134185] = anon_sym_EQ;
	v->a[134186] = anon_sym_PIPE;
	v->a[134187] = anon_sym_CARET;
	v->a[134188] = anon_sym_AMP;
	v->a[134189] = anon_sym_LT;
	v->a[134190] = anon_sym_GT;
	v->a[134191] = anon_sym_LT_LT;
	v->a[134192] = anon_sym_GT_GT;
	v->a[134193] = anon_sym_PLUS;
	v->a[134194] = anon_sym_DASH;
	v->a[134195] = anon_sym_STAR;
	v->a[134196] = anon_sym_SLASH;
	v->a[134197] = anon_sym_PERCENT;
	v->a[134198] = anon_sym_STAR_STAR;
	v->a[134199] = actions(1267);
	small_parse_table_6710(v);
}

/* EOF small_parse_table_1341.c */
