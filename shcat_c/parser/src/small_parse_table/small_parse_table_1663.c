/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1663.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8315(t_small_parse_table_array *v)
{
	v->a[166300] = actions(7240);
	v->a[166301] = 2;
	v->a[166302] = anon_sym_LT_LPAREN;
	v->a[166303] = anon_sym_GT_LPAREN;
	v->a[166304] = state(3423);
	v->a[166305] = 2;
	v->a[166306] = sym_case_item;
	v->a[166307] = aux_sym_case_statement_repeat1;
	v->a[166308] = state(6695);
	v->a[166309] = 2;
	v->a[166310] = sym_concatenation;
	v->a[166311] = sym__extglob_blob;
	v->a[166312] = state(6303);
	v->a[166313] = 9;
	v->a[166314] = sym_arithmetic_expansion;
	v->a[166315] = sym_brace_expression;
	v->a[166316] = sym_string;
	v->a[166317] = sym_translated_string;
	v->a[166318] = sym_number;
	v->a[166319] = sym_simple_expansion;
	small_parse_table_8316(v);
}

void	small_parse_table_8316(t_small_parse_table_array *v)
{
	v->a[166320] = sym_expansion;
	v->a[166321] = sym_command_substitution;
	v->a[166322] = sym_process_substitution;
	v->a[166323] = 20;
	v->a[166324] = actions(71);
	v->a[166325] = 1;
	v->a[166326] = sym_comment;
	v->a[166327] = actions(7220);
	v->a[166328] = 1;
	v->a[166329] = anon_sym_STAR_STAR;
	v->a[166330] = actions(7222);
	v->a[166331] = 1;
	v->a[166332] = sym_test_operator;
	v->a[166333] = actions(7376);
	v->a[166334] = 1;
	v->a[166335] = anon_sym_EQ;
	v->a[166336] = actions(7380);
	v->a[166337] = 1;
	v->a[166338] = anon_sym_PIPE_PIPE;
	v->a[166339] = actions(7382);
	small_parse_table_8317(v);
}

void	small_parse_table_8317(t_small_parse_table_array *v)
{
	v->a[166340] = 1;
	v->a[166341] = anon_sym_AMP_AMP;
	v->a[166342] = actions(7384);
	v->a[166343] = 1;
	v->a[166344] = anon_sym_PIPE;
	v->a[166345] = actions(7386);
	v->a[166346] = 1;
	v->a[166347] = anon_sym_CARET;
	v->a[166348] = actions(7388);
	v->a[166349] = 1;
	v->a[166350] = anon_sym_AMP;
	v->a[166351] = actions(7390);
	v->a[166352] = 1;
	v->a[166353] = anon_sym_EQ_TILDE;
	v->a[166354] = actions(7392);
	v->a[166355] = 1;
	v->a[166356] = anon_sym_QMARK;
	v->a[166357] = actions(7517);
	v->a[166358] = 1;
	v->a[166359] = anon_sym_RPAREN_RPAREN;
	small_parse_table_8318(v);
}

void	small_parse_table_8318(t_small_parse_table_array *v)
{
	v->a[166360] = actions(6793);
	v->a[166361] = 2;
	v->a[166362] = anon_sym_PLUS_PLUS;
	v->a[166363] = anon_sym_DASH_DASH;
	v->a[166364] = actions(7208);
	v->a[166365] = 2;
	v->a[166366] = anon_sym_EQ_EQ;
	v->a[166367] = anon_sym_BANG_EQ;
	v->a[166368] = actions(7210);
	v->a[166369] = 2;
	v->a[166370] = anon_sym_LT;
	v->a[166371] = anon_sym_GT;
	v->a[166372] = actions(7212);
	v->a[166373] = 2;
	v->a[166374] = anon_sym_LT_EQ;
	v->a[166375] = anon_sym_GT_EQ;
	v->a[166376] = actions(7214);
	v->a[166377] = 2;
	v->a[166378] = anon_sym_LT_LT;
	v->a[166379] = anon_sym_GT_GT;
	small_parse_table_8319(v);
}

void	small_parse_table_8319(t_small_parse_table_array *v)
{
	v->a[166380] = actions(7216);
	v->a[166381] = 2;
	v->a[166382] = anon_sym_PLUS;
	v->a[166383] = anon_sym_DASH;
	v->a[166384] = actions(7218);
	v->a[166385] = 3;
	v->a[166386] = anon_sym_STAR;
	v->a[166387] = anon_sym_SLASH;
	v->a[166388] = anon_sym_PERCENT;
	v->a[166389] = actions(7378);
	v->a[166390] = 11;
	v->a[166391] = anon_sym_PLUS_EQ;
	v->a[166392] = anon_sym_DASH_EQ;
	v->a[166393] = anon_sym_STAR_EQ;
	v->a[166394] = anon_sym_SLASH_EQ;
	v->a[166395] = anon_sym_PERCENT_EQ;
	v->a[166396] = anon_sym_STAR_STAR_EQ;
	v->a[166397] = anon_sym_LT_LT_EQ;
	v->a[166398] = anon_sym_GT_GT_EQ;
	v->a[166399] = anon_sym_AMP_EQ;
	small_parse_table_8320(v);
}

/* EOF small_parse_table_1663.c */
