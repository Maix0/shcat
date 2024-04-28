/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1363.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6815(t_small_parse_table_array *v)
{
	v->a[136300] = actions(71);
	v->a[136301] = 1;
	v->a[136302] = sym_comment;
	v->a[136303] = actions(1308);
	v->a[136304] = 14;
	v->a[136305] = anon_sym_EQ;
	v->a[136306] = anon_sym_PIPE;
	v->a[136307] = anon_sym_CARET;
	v->a[136308] = anon_sym_AMP;
	v->a[136309] = anon_sym_LT;
	v->a[136310] = anon_sym_GT;
	v->a[136311] = anon_sym_LT_LT;
	v->a[136312] = anon_sym_GT_GT;
	v->a[136313] = anon_sym_PLUS;
	v->a[136314] = anon_sym_DASH;
	v->a[136315] = anon_sym_STAR;
	v->a[136316] = anon_sym_SLASH;
	v->a[136317] = anon_sym_PERCENT;
	v->a[136318] = anon_sym_STAR_STAR;
	v->a[136319] = actions(1310);
	small_parse_table_6816(v);
}

void	small_parse_table_6816(t_small_parse_table_array *v)
{
	v->a[136320] = 25;
	v->a[136321] = sym__concat;
	v->a[136322] = sym_test_operator;
	v->a[136323] = anon_sym_PLUS_PLUS;
	v->a[136324] = anon_sym_DASH_DASH;
	v->a[136325] = anon_sym_PLUS_EQ;
	v->a[136326] = anon_sym_DASH_EQ;
	v->a[136327] = anon_sym_STAR_EQ;
	v->a[136328] = anon_sym_SLASH_EQ;
	v->a[136329] = anon_sym_PERCENT_EQ;
	v->a[136330] = anon_sym_STAR_STAR_EQ;
	v->a[136331] = anon_sym_LT_LT_EQ;
	v->a[136332] = anon_sym_GT_GT_EQ;
	v->a[136333] = anon_sym_AMP_EQ;
	v->a[136334] = anon_sym_CARET_EQ;
	v->a[136335] = anon_sym_PIPE_EQ;
	v->a[136336] = anon_sym_PIPE_PIPE;
	v->a[136337] = anon_sym_AMP_AMP;
	v->a[136338] = anon_sym_EQ_EQ;
	v->a[136339] = anon_sym_BANG_EQ;
	small_parse_table_6817(v);
}

void	small_parse_table_6817(t_small_parse_table_array *v)
{
	v->a[136340] = anon_sym_LT_EQ;
	v->a[136341] = anon_sym_GT_EQ;
	v->a[136342] = anon_sym_RBRACK;
	v->a[136343] = anon_sym_EQ_TILDE;
	v->a[136344] = anon_sym_QMARK;
	v->a[136345] = aux_sym_concatenation_token1;
	v->a[136346] = 3;
	v->a[136347] = actions(71);
	v->a[136348] = 1;
	v->a[136349] = sym_comment;
	v->a[136350] = actions(1332);
	v->a[136351] = 14;
	v->a[136352] = anon_sym_PIPE;
	v->a[136353] = anon_sym_LT;
	v->a[136354] = anon_sym_GT;
	v->a[136355] = anon_sym_LT_LT;
	v->a[136356] = anon_sym_AMP_GT;
	v->a[136357] = anon_sym_LT_AMP;
	v->a[136358] = anon_sym_GT_AMP;
	v->a[136359] = anon_sym_DOLLAR;
	small_parse_table_6818(v);
}

void	small_parse_table_6818(t_small_parse_table_array *v)
{
	v->a[136360] = sym__special_character;
	v->a[136361] = aux_sym_number_token1;
	v->a[136362] = aux_sym_number_token2;
	v->a[136363] = anon_sym_DOLLAR_LPAREN;
	v->a[136364] = anon_sym_BQUOTE;
	v->a[136365] = sym_word;
	v->a[136366] = actions(1334);
	v->a[136367] = 25;
	v->a[136368] = sym_file_descriptor;
	v->a[136369] = sym__concat;
	v->a[136370] = sym_test_operator;
	v->a[136371] = sym__brace_start;
	v->a[136372] = anon_sym_LPAREN_LPAREN;
	v->a[136373] = anon_sym_PIPE_PIPE;
	v->a[136374] = anon_sym_AMP_AMP;
	v->a[136375] = anon_sym_GT_GT;
	v->a[136376] = anon_sym_PIPE_AMP;
	v->a[136377] = anon_sym_RBRACK;
	v->a[136378] = anon_sym_AMP_GT_GT;
	v->a[136379] = anon_sym_GT_PIPE;
	small_parse_table_6819(v);
}

void	small_parse_table_6819(t_small_parse_table_array *v)
{
	v->a[136380] = anon_sym_LT_AMP_DASH;
	v->a[136381] = anon_sym_GT_AMP_DASH;
	v->a[136382] = anon_sym_LT_LT_DASH;
	v->a[136383] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136384] = anon_sym_DOLLAR_LBRACK;
	v->a[136385] = aux_sym_concatenation_token1;
	v->a[136386] = anon_sym_DQUOTE;
	v->a[136387] = sym_raw_string;
	v->a[136388] = sym_ansi_c_string;
	v->a[136389] = anon_sym_DOLLAR_LBRACE;
	v->a[136390] = anon_sym_DOLLAR_BQUOTE;
	v->a[136391] = anon_sym_LT_LPAREN;
	v->a[136392] = anon_sym_GT_LPAREN;
	v->a[136393] = 3;
	v->a[136394] = actions(71);
	v->a[136395] = 1;
	v->a[136396] = sym_comment;
	v->a[136397] = actions(1292);
	v->a[136398] = 14;
	v->a[136399] = anon_sym_PIPE;
	small_parse_table_6820(v);
}

/* EOF small_parse_table_1363.c */
