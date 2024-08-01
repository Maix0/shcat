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
	v->a[41300] = sym_number;
	v->a[41301] = anon_sym_DOLLAR_LBRACE;
	v->a[41302] = anon_sym_DOLLAR_LPAREN;
	v->a[41303] = anon_sym_BQUOTE;
	v->a[41304] = sym_word;
	v->a[41305] = 3;
	v->a[41306] = actions(3);
	v->a[41307] = 1;
	v->a[41308] = sym_comment;
	v->a[41309] = actions(1108);
	v->a[41310] = 2;
	v->a[41311] = sym__concat;
	v->a[41312] = sym_variable_name;
	v->a[41313] = actions(1106);
	v->a[41314] = 13;
	v->a[41315] = anon_sym_LT;
	v->a[41316] = anon_sym_GT;
	v->a[41317] = anon_sym_GT_GT;
	v->a[41318] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41319] = aux_sym_concatenation_token1;
	small_parse_table_2066(v);
}

void	small_parse_table_2066(t_small_parse_table_array *v)
{
	v->a[41320] = anon_sym_DOLLAR;
	v->a[41321] = anon_sym_DQUOTE;
	v->a[41322] = sym_raw_string;
	v->a[41323] = sym_number;
	v->a[41324] = anon_sym_DOLLAR_LBRACE;
	v->a[41325] = anon_sym_DOLLAR_LPAREN;
	v->a[41326] = anon_sym_BQUOTE;
	v->a[41327] = sym_word;
	v->a[41328] = 10;
	v->a[41329] = actions(3);
	v->a[41330] = 1;
	v->a[41331] = sym_comment;
	v->a[41332] = actions(580);
	v->a[41333] = 1;
	v->a[41334] = anon_sym_PIPE;
	v->a[41335] = actions(591);
	v->a[41336] = 1;
	v->a[41337] = anon_sym_BQUOTE;
	v->a[41338] = actions(597);
	v->a[41339] = 1;
	small_parse_table_2067(v);
}

void	small_parse_table_2067(t_small_parse_table_array *v)
{
	v->a[41340] = anon_sym_LT_LT;
	v->a[41341] = actions(1870);
	v->a[41342] = 1;
	v->a[41343] = aux_sym_heredoc_redirect_token1;
	v->a[41344] = state(543);
	v->a[41345] = 1;
	v->a[41346] = sym_terminator;
	v->a[41347] = actions(593);
	v->a[41348] = 2;
	v->a[41349] = anon_sym_SEMI_SEMI;
	v->a[41350] = anon_sym_SEMI;
	v->a[41351] = actions(762);
	v->a[41352] = 2;
	v->a[41353] = anon_sym_AMP_AMP;
	v->a[41354] = anon_sym_PIPE_PIPE;
	v->a[41355] = actions(1880);
	v->a[41356] = 3;
	v->a[41357] = anon_sym_LT;
	v->a[41358] = anon_sym_GT;
	v->a[41359] = anon_sym_GT_GT;
	small_parse_table_2068(v);
}

void	small_parse_table_2068(t_small_parse_table_array *v)
{
	v->a[41360] = state(925);
	v->a[41361] = 3;
	v->a[41362] = sym_file_redirect;
	v->a[41363] = sym_heredoc_redirect;
	v->a[41364] = aux_sym_redirected_statement_repeat1;
	v->a[41365] = 6;
	v->a[41366] = actions(3);
	v->a[41367] = 1;
	v->a[41368] = sym_comment;
	v->a[41369] = actions(1884);
	v->a[41370] = 1;
	v->a[41371] = aux_sym_concatenation_token1;
	v->a[41372] = actions(1886);
	v->a[41373] = 1;
	v->a[41374] = sym__concat;
	v->a[41375] = state(891);
	v->a[41376] = 1;
	v->a[41377] = aux_sym_concatenation_repeat1;
	v->a[41378] = actions(917);
	v->a[41379] = 2;
	small_parse_table_2069(v);
}

void	small_parse_table_2069(t_small_parse_table_array *v)
{
	v->a[41380] = sym_variable_name;
	v->a[41381] = aux_sym_heredoc_redirect_token1;
	v->a[41382] = actions(919);
	v->a[41383] = 10;
	v->a[41384] = anon_sym_esac;
	v->a[41385] = anon_sym_PIPE;
	v->a[41386] = anon_sym_SEMI_SEMI;
	v->a[41387] = anon_sym_AMP_AMP;
	v->a[41388] = anon_sym_PIPE_PIPE;
	v->a[41389] = anon_sym_LT;
	v->a[41390] = anon_sym_GT;
	v->a[41391] = anon_sym_GT_GT;
	v->a[41392] = anon_sym_LT_LT;
	v->a[41393] = anon_sym_SEMI;
	v->a[41394] = 10;
	v->a[41395] = actions(3);
	v->a[41396] = 1;
	v->a[41397] = sym_comment;
	v->a[41398] = actions(580);
	v->a[41399] = 1;
	small_parse_table_2070(v);
}

/* EOF small_parse_table_413.c */
