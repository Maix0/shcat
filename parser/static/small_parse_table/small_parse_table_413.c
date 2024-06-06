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
	v->a[41300] = sym_comment;
	v->a[41301] = actions(3159);
	v->a[41302] = 6;
	v->a[41303] = sym_file_descriptor;
	v->a[41304] = sym__concat;
	v->a[41305] = sym_variable_name;
	v->a[41306] = sym_test_operator;
	v->a[41307] = sym__brace_start;
	v->a[41308] = aux_sym_heredoc_redirect_token1;
	v->a[41309] = actions(3157);
	v->a[41310] = 34;
	v->a[41311] = anon_sym_PIPE;
	v->a[41312] = anon_sym_SEMI_SEMI;
	v->a[41313] = anon_sym_SEMI_AMP;
	v->a[41314] = anon_sym_SEMI_SEMI_AMP;
	v->a[41315] = anon_sym_PIPE_AMP;
	v->a[41316] = anon_sym_AMP_AMP;
	v->a[41317] = anon_sym_PIPE_PIPE;
	v->a[41318] = anon_sym_LT;
	v->a[41319] = anon_sym_GT;
	small_parse_table_2066(v);
}

void	small_parse_table_2066(t_small_parse_table_array *v)
{
	v->a[41320] = anon_sym_GT_GT;
	v->a[41321] = anon_sym_AMP_GT;
	v->a[41322] = anon_sym_AMP_GT_GT;
	v->a[41323] = anon_sym_LT_AMP;
	v->a[41324] = anon_sym_GT_AMP;
	v->a[41325] = anon_sym_GT_PIPE;
	v->a[41326] = anon_sym_LT_AMP_DASH;
	v->a[41327] = anon_sym_GT_AMP_DASH;
	v->a[41328] = anon_sym_LT_LT;
	v->a[41329] = anon_sym_LT_LT_DASH;
	v->a[41330] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41331] = anon_sym_AMP;
	v->a[41332] = aux_sym_concatenation_token1;
	v->a[41333] = anon_sym_DOLLAR;
	v->a[41334] = sym__special_character;
	v->a[41335] = anon_sym_DQUOTE;
	v->a[41336] = sym_raw_string;
	v->a[41337] = aux_sym_number_token1;
	v->a[41338] = aux_sym_number_token2;
	v->a[41339] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2067(v);
}

void	small_parse_table_2067(t_small_parse_table_array *v)
{
	v->a[41340] = anon_sym_DOLLAR_LPAREN;
	v->a[41341] = anon_sym_BQUOTE;
	v->a[41342] = anon_sym_DOLLAR_BQUOTE;
	v->a[41343] = sym_word;
	v->a[41344] = anon_sym_SEMI;
	v->a[41345] = 6;
	v->a[41346] = actions(3);
	v->a[41347] = 1;
	v->a[41348] = sym_comment;
	v->a[41349] = actions(3434);
	v->a[41350] = 1;
	v->a[41351] = aux_sym_concatenation_token1;
	v->a[41352] = actions(3582);
	v->a[41353] = 1;
	v->a[41354] = sym__concat;
	v->a[41355] = state(915);
	v->a[41356] = 1;
	v->a[41357] = aux_sym_concatenation_repeat1;
	v->a[41358] = actions(2696);
	v->a[41359] = 5;
	small_parse_table_2068(v);
}

void	small_parse_table_2068(t_small_parse_table_array *v)
{
	v->a[41360] = sym_file_descriptor;
	v->a[41361] = sym_test_operator;
	v->a[41362] = sym__brace_start;
	v->a[41363] = ts_builtin_sym_end;
	v->a[41364] = aux_sym_heredoc_redirect_token1;
	v->a[41365] = actions(2694);
	v->a[41366] = 32;
	v->a[41367] = anon_sym_PIPE;
	v->a[41368] = anon_sym_SEMI_SEMI;
	v->a[41369] = anon_sym_PIPE_AMP;
	v->a[41370] = anon_sym_AMP_AMP;
	v->a[41371] = anon_sym_PIPE_PIPE;
	v->a[41372] = anon_sym_LT;
	v->a[41373] = anon_sym_GT;
	v->a[41374] = anon_sym_GT_GT;
	v->a[41375] = anon_sym_AMP_GT;
	v->a[41376] = anon_sym_AMP_GT_GT;
	v->a[41377] = anon_sym_LT_AMP;
	v->a[41378] = anon_sym_GT_AMP;
	v->a[41379] = anon_sym_GT_PIPE;
	small_parse_table_2069(v);
}

void	small_parse_table_2069(t_small_parse_table_array *v)
{
	v->a[41380] = anon_sym_LT_AMP_DASH;
	v->a[41381] = anon_sym_GT_AMP_DASH;
	v->a[41382] = anon_sym_LT_LT;
	v->a[41383] = anon_sym_LT_LT_DASH;
	v->a[41384] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41385] = anon_sym_AMP;
	v->a[41386] = anon_sym_DOLLAR;
	v->a[41387] = sym__special_character;
	v->a[41388] = anon_sym_DQUOTE;
	v->a[41389] = sym_raw_string;
	v->a[41390] = aux_sym_number_token1;
	v->a[41391] = aux_sym_number_token2;
	v->a[41392] = anon_sym_DOLLAR_LBRACE;
	v->a[41393] = anon_sym_DOLLAR_LPAREN;
	v->a[41394] = anon_sym_BQUOTE;
	v->a[41395] = anon_sym_DOLLAR_BQUOTE;
	v->a[41396] = aux_sym__simple_variable_name_token1;
	v->a[41397] = sym_word;
	v->a[41398] = anon_sym_SEMI;
	v->a[41399] = 3;
	small_parse_table_2070(v);
}

/* EOF small_parse_table_413.c */
