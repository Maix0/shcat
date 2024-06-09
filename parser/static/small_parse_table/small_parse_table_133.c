/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_133.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_665(t_small_parse_table_array *v)
{
	v->a[13300] = anon_sym_for;
	v->a[13301] = actions(13);
	v->a[13302] = 1;
	v->a[13303] = anon_sym_if;
	v->a[13304] = actions(15);
	v->a[13305] = 1;
	v->a[13306] = anon_sym_case;
	v->a[13307] = actions(17);
	v->a[13308] = 1;
	v->a[13309] = anon_sym_LPAREN;
	v->a[13310] = actions(19);
	v->a[13311] = 1;
	v->a[13312] = anon_sym_LBRACE;
	v->a[13313] = actions(63);
	v->a[13314] = 1;
	v->a[13315] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13316] = actions(65);
	v->a[13317] = 1;
	v->a[13318] = anon_sym_DOLLAR;
	v->a[13319] = actions(67);
	small_parse_table_666(v);
}

void	small_parse_table_666(t_small_parse_table_array *v)
{
	v->a[13320] = 1;
	v->a[13321] = anon_sym_DQUOTE;
	v->a[13322] = actions(69);
	v->a[13323] = 1;
	v->a[13324] = sym_raw_string;
	v->a[13325] = actions(71);
	v->a[13326] = 1;
	v->a[13327] = aux_sym_number_token1;
	v->a[13328] = actions(73);
	v->a[13329] = 1;
	v->a[13330] = aux_sym_number_token2;
	v->a[13331] = actions(75);
	v->a[13332] = 1;
	v->a[13333] = anon_sym_DOLLAR_LBRACE;
	v->a[13334] = actions(77);
	v->a[13335] = 1;
	v->a[13336] = anon_sym_DOLLAR_LPAREN;
	v->a[13337] = actions(79);
	v->a[13338] = 1;
	v->a[13339] = anon_sym_BQUOTE;
	small_parse_table_667(v);
}

void	small_parse_table_667(t_small_parse_table_array *v)
{
	v->a[13340] = actions(81);
	v->a[13341] = 1;
	v->a[13342] = sym_file_descriptor;
	v->a[13343] = actions(83);
	v->a[13344] = 1;
	v->a[13345] = sym_variable_name;
	v->a[13346] = actions(238);
	v->a[13347] = 1;
	v->a[13348] = sym_word;
	v->a[13349] = actions(240);
	v->a[13350] = 1;
	v->a[13351] = anon_sym_BANG;
	v->a[13352] = state(132);
	v->a[13353] = 1;
	v->a[13354] = aux_sym__statements_repeat1;
	v->a[13355] = state(185);
	v->a[13356] = 1;
	v->a[13357] = sym_command_name;
	v->a[13358] = state(297);
	v->a[13359] = 1;
	small_parse_table_668(v);
}

void	small_parse_table_668(t_small_parse_table_array *v)
{
	v->a[13360] = sym_variable_assignment;
	v->a[13361] = state(582);
	v->a[13362] = 1;
	v->a[13363] = sym_concatenation;
	v->a[13364] = state(614);
	v->a[13365] = 1;
	v->a[13366] = aux_sym_command_repeat1;
	v->a[13367] = state(769);
	v->a[13368] = 1;
	v->a[13369] = sym_file_redirect;
	v->a[13370] = state(1133);
	v->a[13371] = 1;
	v->a[13372] = aux_sym_redirected_statement_repeat2;
	v->a[13373] = state(1142);
	v->a[13374] = 1;
	v->a[13375] = sym_pipeline;
	v->a[13376] = state(2041);
	v->a[13377] = 1;
	v->a[13378] = sym__statement_not_pipeline;
	v->a[13379] = state(2214);
	small_parse_table_669(v);
}

void	small_parse_table_669(t_small_parse_table_array *v)
{
	v->a[13380] = 1;
	v->a[13381] = sym__statements;
	v->a[13382] = actions(11);
	v->a[13383] = 2;
	v->a[13384] = anon_sym_while;
	v->a[13385] = anon_sym_until;
	v->a[13386] = actions(61);
	v->a[13387] = 2;
	v->a[13388] = anon_sym_LT_AMP_DASH;
	v->a[13389] = anon_sym_GT_AMP_DASH;
	v->a[13390] = state(397);
	v->a[13391] = 6;
	v->a[13392] = sym_arithmetic_expansion;
	v->a[13393] = sym_string;
	v->a[13394] = sym_number;
	v->a[13395] = sym_simple_expansion;
	v->a[13396] = sym_expansion;
	v->a[13397] = sym_command_substitution;
	v->a[13398] = actions(59);
	v->a[13399] = 8;
	small_parse_table_670(v);
}

/* EOF small_parse_table_133.c */
