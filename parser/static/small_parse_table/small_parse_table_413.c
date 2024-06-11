/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_413.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2065(t_small_parse_table_array *v)
{
	v->a[41300] = anon_sym_DQUOTE;
	v->a[41301] = actions(773);
	v->a[41302] = 1;
	v->a[41303] = anon_sym_DOLLAR_LBRACE;
	v->a[41304] = actions(776);
	v->a[41305] = 1;
	v->a[41306] = anon_sym_DOLLAR_LPAREN;
	v->a[41307] = actions(779);
	v->a[41308] = 1;
	v->a[41309] = anon_sym_BQUOTE;
	v->a[41310] = state(573);
	v->a[41311] = 2;
	v->a[41312] = sym_concatenation;
	v->a[41313] = aux_sym_for_statement_repeat1;
	v->a[41314] = actions(1491);
	v->a[41315] = 3;
	v->a[41316] = sym_raw_string;
	v->a[41317] = sym_number;
	v->a[41318] = sym_word;
	v->a[41319] = state(941);
	small_parse_table_2066(v);
}

void	small_parse_table_2066(t_small_parse_table_array *v)
{
	v->a[41320] = 5;
	v->a[41321] = sym_arithmetic_expansion;
	v->a[41322] = sym_string;
	v->a[41323] = sym_simple_expansion;
	v->a[41324] = sym_expansion;
	v->a[41325] = sym_command_substitution;
	v->a[41326] = actions(564);
	v->a[41327] = 16;
	v->a[41328] = anon_sym_PIPE;
	v->a[41329] = anon_sym_AMP_AMP;
	v->a[41330] = anon_sym_PIPE_PIPE;
	v->a[41331] = anon_sym_LT;
	v->a[41332] = anon_sym_GT;
	v->a[41333] = anon_sym_GT_GT;
	v->a[41334] = anon_sym_AMP_GT;
	v->a[41335] = anon_sym_AMP_GT_GT;
	v->a[41336] = anon_sym_LT_AMP;
	v->a[41337] = anon_sym_GT_AMP;
	v->a[41338] = anon_sym_GT_PIPE;
	v->a[41339] = anon_sym_LT_AMP_DASH;
	small_parse_table_2067(v);
}

void	small_parse_table_2067(t_small_parse_table_array *v)
{
	v->a[41340] = anon_sym_GT_AMP_DASH;
	v->a[41341] = anon_sym_LT_LT;
	v->a[41342] = anon_sym_LT_LT_DASH;
	v->a[41343] = aux_sym_heredoc_redirect_token1;
	v->a[41344] = 3;
	v->a[41345] = actions(3);
	v->a[41346] = 1;
	v->a[41347] = sym_comment;
	v->a[41348] = actions(1076);
	v->a[41349] = 3;
	v->a[41350] = sym_file_descriptor;
	v->a[41351] = sym__concat;
	v->a[41352] = sym__bare_dollar;
	v->a[41353] = actions(1074);
	v->a[41354] = 30;
	v->a[41355] = anon_sym_PIPE;
	v->a[41356] = anon_sym_RPAREN;
	v->a[41357] = anon_sym_SEMI_SEMI;
	v->a[41358] = anon_sym_AMP_AMP;
	v->a[41359] = anon_sym_PIPE_PIPE;
	small_parse_table_2068(v);
}

void	small_parse_table_2068(t_small_parse_table_array *v)
{
	v->a[41360] = anon_sym_LT;
	v->a[41361] = anon_sym_GT;
	v->a[41362] = anon_sym_GT_GT;
	v->a[41363] = anon_sym_AMP_GT;
	v->a[41364] = anon_sym_AMP_GT_GT;
	v->a[41365] = anon_sym_LT_AMP;
	v->a[41366] = anon_sym_GT_AMP;
	v->a[41367] = anon_sym_GT_PIPE;
	v->a[41368] = anon_sym_LT_AMP_DASH;
	v->a[41369] = anon_sym_GT_AMP_DASH;
	v->a[41370] = anon_sym_LT_LT;
	v->a[41371] = anon_sym_LT_LT_DASH;
	v->a[41372] = aux_sym_heredoc_redirect_token1;
	v->a[41373] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41374] = anon_sym_AMP;
	v->a[41375] = aux_sym_concatenation_token1;
	v->a[41376] = anon_sym_DOLLAR;
	v->a[41377] = anon_sym_DQUOTE;
	v->a[41378] = sym_raw_string;
	v->a[41379] = sym_number;
	small_parse_table_2069(v);
}

void	small_parse_table_2069(t_small_parse_table_array *v)
{
	v->a[41380] = anon_sym_DOLLAR_LBRACE;
	v->a[41381] = anon_sym_DOLLAR_LPAREN;
	v->a[41382] = anon_sym_BQUOTE;
	v->a[41383] = sym_word;
	v->a[41384] = anon_sym_SEMI;
	v->a[41385] = 3;
	v->a[41386] = actions(3);
	v->a[41387] = 1;
	v->a[41388] = sym_comment;
	v->a[41389] = actions(1141);
	v->a[41390] = 3;
	v->a[41391] = sym_file_descriptor;
	v->a[41392] = sym__concat;
	v->a[41393] = sym__bare_dollar;
	v->a[41394] = actions(1139);
	v->a[41395] = 30;
	v->a[41396] = anon_sym_PIPE;
	v->a[41397] = anon_sym_RPAREN;
	v->a[41398] = anon_sym_SEMI_SEMI;
	v->a[41399] = anon_sym_AMP_AMP;
	small_parse_table_2070(v);
}

/* EOF small_parse_table_413.c */
