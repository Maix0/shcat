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
	v->a[41300] = actions(55);
	v->a[41301] = 1;
	v->a[41302] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41303] = actions(57);
	v->a[41304] = 1;
	v->a[41305] = anon_sym_DOLLAR;
	v->a[41306] = actions(59);
	v->a[41307] = 1;
	v->a[41308] = anon_sym_DQUOTE;
	v->a[41309] = actions(63);
	v->a[41310] = 1;
	v->a[41311] = anon_sym_DOLLAR_LBRACE;
	v->a[41312] = actions(65);
	v->a[41313] = 1;
	v->a[41314] = anon_sym_DOLLAR_LPAREN;
	v->a[41315] = actions(67);
	v->a[41316] = 1;
	v->a[41317] = anon_sym_BQUOTE;
	v->a[41318] = actions(359);
	v->a[41319] = 1;
	small_parse_table_2066(v);
}

void	small_parse_table_2066(t_small_parse_table_array *v)
{
	v->a[41320] = sym_variable_name;
	v->a[41321] = actions(1152);
	v->a[41322] = 1;
	v->a[41323] = sym_file_descriptor;
	v->a[41324] = state(181);
	v->a[41325] = 1;
	v->a[41326] = sym_command_name;
	v->a[41327] = state(603);
	v->a[41328] = 1;
	v->a[41329] = sym_concatenation;
	v->a[41330] = state(1225);
	v->a[41331] = 1;
	v->a[41332] = sym_file_redirect;
	v->a[41333] = state(1024);
	v->a[41334] = 2;
	v->a[41335] = sym_variable_assignment;
	v->a[41336] = aux_sym_command_repeat1;
	v->a[41337] = actions(61);
	v->a[41338] = 3;
	v->a[41339] = sym_raw_string;
	small_parse_table_2067(v);
}

void	small_parse_table_2067(t_small_parse_table_array *v)
{
	v->a[41340] = sym_number;
	v->a[41341] = sym_word;
	v->a[41342] = state(436);
	v->a[41343] = 5;
	v->a[41344] = sym_arithmetic_expansion;
	v->a[41345] = sym_string;
	v->a[41346] = sym_simple_expansion;
	v->a[41347] = sym_expansion;
	v->a[41348] = sym_command_substitution;
	v->a[41349] = actions(1150);
	v->a[41350] = 7;
	v->a[41351] = anon_sym_LT;
	v->a[41352] = anon_sym_GT;
	v->a[41353] = anon_sym_GT_GT;
	v->a[41354] = anon_sym_LT_AMP;
	v->a[41355] = anon_sym_GT_AMP;
	v->a[41356] = anon_sym_GT_PIPE;
	v->a[41357] = anon_sym_LT_GT;
	v->a[41358] = 3;
	v->a[41359] = actions(3);
	small_parse_table_2068(v);
}

void	small_parse_table_2068(t_small_parse_table_array *v)
{
	v->a[41360] = 1;
	v->a[41361] = sym_comment;
	v->a[41362] = actions(1158);
	v->a[41363] = 2;
	v->a[41364] = sym_file_descriptor;
	v->a[41365] = sym__bare_dollar;
	v->a[41366] = actions(1154);
	v->a[41367] = 26;
	v->a[41368] = anon_sym_esac;
	v->a[41369] = anon_sym_PIPE;
	v->a[41370] = anon_sym_SEMI_SEMI;
	v->a[41371] = anon_sym_AMP_AMP;
	v->a[41372] = anon_sym_PIPE_PIPE;
	v->a[41373] = anon_sym_LT;
	v->a[41374] = anon_sym_GT;
	v->a[41375] = anon_sym_GT_GT;
	v->a[41376] = anon_sym_LT_AMP;
	v->a[41377] = anon_sym_GT_AMP;
	v->a[41378] = anon_sym_GT_PIPE;
	v->a[41379] = anon_sym_LT_GT;
	small_parse_table_2069(v);
}

void	small_parse_table_2069(t_small_parse_table_array *v)
{
	v->a[41380] = anon_sym_LT_LT;
	v->a[41381] = anon_sym_LT_LT_DASH;
	v->a[41382] = aux_sym_heredoc_redirect_token1;
	v->a[41383] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41384] = anon_sym_AMP;
	v->a[41385] = anon_sym_DOLLAR;
	v->a[41386] = anon_sym_DQUOTE;
	v->a[41387] = sym_raw_string;
	v->a[41388] = sym_number;
	v->a[41389] = anon_sym_DOLLAR_LBRACE;
	v->a[41390] = anon_sym_DOLLAR_LPAREN;
	v->a[41391] = anon_sym_BQUOTE;
	v->a[41392] = sym_word;
	v->a[41393] = anon_sym_SEMI;
	v->a[41394] = 6;
	v->a[41395] = actions(3);
	v->a[41396] = 1;
	v->a[41397] = sym_comment;
	v->a[41398] = actions(1432);
	v->a[41399] = 1;
	small_parse_table_2070(v);
}

/* EOF small_parse_table_413.c */
