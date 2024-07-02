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
	v->a[41300] = anon_sym_GT;
	v->a[41301] = anon_sym_GT_GT;
	v->a[41302] = anon_sym_LT_AMP;
	v->a[41303] = anon_sym_GT_AMP;
	v->a[41304] = anon_sym_GT_PIPE;
	v->a[41305] = anon_sym_LT_GT;
	v->a[41306] = anon_sym_LT_LT;
	v->a[41307] = anon_sym_LT_LT_DASH;
	v->a[41308] = aux_sym_heredoc_redirect_token1;
	v->a[41309] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41310] = anon_sym_AMP;
	v->a[41311] = anon_sym_DOLLAR;
	v->a[41312] = anon_sym_DQUOTE;
	v->a[41313] = sym_raw_string;
	v->a[41314] = sym_number;
	v->a[41315] = anon_sym_DOLLAR_LBRACE;
	v->a[41316] = anon_sym_DOLLAR_LPAREN;
	v->a[41317] = anon_sym_BQUOTE;
	v->a[41318] = sym_word;
	v->a[41319] = anon_sym_SEMI;
	small_parse_table_2066(v);
}

void	small_parse_table_2066(t_small_parse_table_array *v)
{
	v->a[41320] = 7;
	v->a[41321] = actions(3);
	v->a[41322] = 1;
	v->a[41323] = sym_comment;
	v->a[41324] = actions(1435);
	v->a[41325] = 1;
	v->a[41326] = sym_file_descriptor;
	v->a[41327] = actions(1438);
	v->a[41328] = 1;
	v->a[41329] = sym_variable_name;
	v->a[41330] = actions(1471);
	v->a[41331] = 1;
	v->a[41332] = anon_sym_RPAREN;
	v->a[41333] = actions(1432);
	v->a[41334] = 7;
	v->a[41335] = anon_sym_LT;
	v->a[41336] = anon_sym_GT;
	v->a[41337] = anon_sym_GT_GT;
	v->a[41338] = anon_sym_LT_AMP;
	v->a[41339] = anon_sym_GT_AMP;
	small_parse_table_2067(v);
}

void	small_parse_table_2067(t_small_parse_table_array *v)
{
	v->a[41340] = anon_sym_GT_PIPE;
	v->a[41341] = anon_sym_LT_GT;
	v->a[41342] = actions(1428);
	v->a[41343] = 9;
	v->a[41344] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41345] = anon_sym_DOLLAR;
	v->a[41346] = anon_sym_DQUOTE;
	v->a[41347] = sym_raw_string;
	v->a[41348] = sym_number;
	v->a[41349] = anon_sym_DOLLAR_LBRACE;
	v->a[41350] = anon_sym_DOLLAR_LPAREN;
	v->a[41351] = anon_sym_BQUOTE;
	v->a[41352] = sym_word;
	v->a[41353] = actions(1430);
	v->a[41354] = 9;
	v->a[41355] = anon_sym_PIPE;
	v->a[41356] = anon_sym_SEMI_SEMI;
	v->a[41357] = anon_sym_AMP_AMP;
	v->a[41358] = anon_sym_PIPE_PIPE;
	v->a[41359] = anon_sym_LT_LT;
	small_parse_table_2068(v);
}

void	small_parse_table_2068(t_small_parse_table_array *v)
{
	v->a[41360] = anon_sym_LT_LT_DASH;
	v->a[41361] = aux_sym_heredoc_redirect_token1;
	v->a[41362] = anon_sym_AMP;
	v->a[41363] = anon_sym_SEMI;
	v->a[41364] = 16;
	v->a[41365] = actions(3);
	v->a[41366] = 1;
	v->a[41367] = sym_comment;
	v->a[41368] = actions(55);
	v->a[41369] = 1;
	v->a[41370] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41371] = actions(57);
	v->a[41372] = 1;
	v->a[41373] = anon_sym_DOLLAR;
	v->a[41374] = actions(59);
	v->a[41375] = 1;
	v->a[41376] = anon_sym_DQUOTE;
	v->a[41377] = actions(63);
	v->a[41378] = 1;
	v->a[41379] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2069(v);
}

void	small_parse_table_2069(t_small_parse_table_array *v)
{
	v->a[41380] = actions(65);
	v->a[41381] = 1;
	v->a[41382] = anon_sym_DOLLAR_LPAREN;
	v->a[41383] = actions(67);
	v->a[41384] = 1;
	v->a[41385] = anon_sym_BQUOTE;
	v->a[41386] = actions(359);
	v->a[41387] = 1;
	v->a[41388] = sym_variable_name;
	v->a[41389] = actions(1164);
	v->a[41390] = 1;
	v->a[41391] = sym_file_descriptor;
	v->a[41392] = state(174);
	v->a[41393] = 1;
	v->a[41394] = sym_command_name;
	v->a[41395] = state(584);
	v->a[41396] = 1;
	v->a[41397] = sym_concatenation;
	v->a[41398] = state(1218);
	v->a[41399] = 1;
	small_parse_table_2070(v);
}

/* EOF small_parse_table_413.c */
