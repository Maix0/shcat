/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_203.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1015(t_small_parse_table_array *v)
{
	v->a[20300] = state(247);
	v->a[20301] = 1;
	v->a[20302] = sym_command_name;
	v->a[20303] = state(582);
	v->a[20304] = 1;
	v->a[20305] = sym_concatenation;
	v->a[20306] = state(585);
	v->a[20307] = 1;
	v->a[20308] = aux_sym_command_repeat1;
	v->a[20309] = state(718);
	v->a[20310] = 1;
	v->a[20311] = sym_file_redirect;
	v->a[20312] = state(1037);
	v->a[20313] = 1;
	v->a[20314] = sym_variable_assignment;
	v->a[20315] = state(1313);
	v->a[20316] = 1;
	v->a[20317] = aux_sym_redirected_statement_repeat2;
	v->a[20318] = actions(11);
	v->a[20319] = 2;
	small_parse_table_1016(v);
}

void	small_parse_table_1016(t_small_parse_table_array *v)
{
	v->a[20320] = anon_sym_while;
	v->a[20321] = anon_sym_until;
	v->a[20322] = actions(355);
	v->a[20323] = 2;
	v->a[20324] = anon_sym_LT_AMP_DASH;
	v->a[20325] = anon_sym_GT_AMP_DASH;
	v->a[20326] = actions(357);
	v->a[20327] = 2;
	v->a[20328] = sym_raw_string;
	v->a[20329] = sym_word;
	v->a[20330] = state(686);
	v->a[20331] = 6;
	v->a[20332] = sym_arithmetic_expansion;
	v->a[20333] = sym_string;
	v->a[20334] = sym_number;
	v->a[20335] = sym_simple_expansion;
	v->a[20336] = sym_expansion;
	v->a[20337] = sym_command_substitution;
	v->a[20338] = state(1141);
	v->a[20339] = 7;
	small_parse_table_1017(v);
}

void	small_parse_table_1017(t_small_parse_table_array *v)
{
	v->a[20340] = sym_for_statement;
	v->a[20341] = sym_while_statement;
	v->a[20342] = sym_if_statement;
	v->a[20343] = sym_compound_statement;
	v->a[20344] = sym_subshell;
	v->a[20345] = sym_command;
	v->a[20346] = sym_variable_assignments;
	v->a[20347] = actions(353);
	v->a[20348] = 8;
	v->a[20349] = anon_sym_LT;
	v->a[20350] = anon_sym_GT;
	v->a[20351] = anon_sym_GT_GT;
	v->a[20352] = anon_sym_AMP_GT;
	v->a[20353] = anon_sym_AMP_GT_GT;
	v->a[20354] = anon_sym_LT_AMP;
	v->a[20355] = anon_sym_GT_AMP;
	v->a[20356] = anon_sym_GT_PIPE;
	v->a[20357] = 27;
	v->a[20358] = actions(3);
	v->a[20359] = 1;
	small_parse_table_1018(v);
}

void	small_parse_table_1018(t_small_parse_table_array *v)
{
	v->a[20360] = sym_comment;
	v->a[20361] = actions(97);
	v->a[20362] = 1;
	v->a[20363] = anon_sym_for;
	v->a[20364] = actions(101);
	v->a[20365] = 1;
	v->a[20366] = anon_sym_if;
	v->a[20367] = actions(105);
	v->a[20368] = 1;
	v->a[20369] = anon_sym_LPAREN;
	v->a[20370] = actions(109);
	v->a[20371] = 1;
	v->a[20372] = anon_sym_LBRACE;
	v->a[20373] = actions(117);
	v->a[20374] = 1;
	v->a[20375] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20376] = actions(119);
	v->a[20377] = 1;
	v->a[20378] = anon_sym_DOLLAR;
	v->a[20379] = actions(121);
	small_parse_table_1019(v);
}

void	small_parse_table_1019(t_small_parse_table_array *v)
{
	v->a[20380] = 1;
	v->a[20381] = anon_sym_DQUOTE;
	v->a[20382] = actions(125);
	v->a[20383] = 1;
	v->a[20384] = aux_sym_number_token1;
	v->a[20385] = actions(127);
	v->a[20386] = 1;
	v->a[20387] = aux_sym_number_token2;
	v->a[20388] = actions(129);
	v->a[20389] = 1;
	v->a[20390] = anon_sym_DOLLAR_LBRACE;
	v->a[20391] = actions(131);
	v->a[20392] = 1;
	v->a[20393] = anon_sym_DOLLAR_LPAREN;
	v->a[20394] = actions(133);
	v->a[20395] = 1;
	v->a[20396] = anon_sym_BQUOTE;
	v->a[20397] = actions(135);
	v->a[20398] = 1;
	v->a[20399] = sym_file_descriptor;
	small_parse_table_1020(v);
}

/* EOF small_parse_table_203.c */
