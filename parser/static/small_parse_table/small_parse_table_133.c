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
	v->a[13300] = 1;
	v->a[13301] = anon_sym_if;
	v->a[13302] = actions(15);
	v->a[13303] = 1;
	v->a[13304] = anon_sym_case;
	v->a[13305] = actions(17);
	v->a[13306] = 1;
	v->a[13307] = anon_sym_LPAREN;
	v->a[13308] = actions(19);
	v->a[13309] = 1;
	v->a[13310] = anon_sym_LBRACE;
	v->a[13311] = actions(59);
	v->a[13312] = 1;
	v->a[13313] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13314] = actions(61);
	v->a[13315] = 1;
	v->a[13316] = anon_sym_DOLLAR;
	v->a[13317] = actions(63);
	v->a[13318] = 1;
	v->a[13319] = anon_sym_DQUOTE;
	small_parse_table_666(v);
}

void	small_parse_table_666(t_small_parse_table_array *v)
{
	v->a[13320] = actions(67);
	v->a[13321] = 1;
	v->a[13322] = anon_sym_DOLLAR_LBRACE;
	v->a[13323] = actions(69);
	v->a[13324] = 1;
	v->a[13325] = anon_sym_DOLLAR_LPAREN;
	v->a[13326] = actions(71);
	v->a[13327] = 1;
	v->a[13328] = anon_sym_BQUOTE;
	v->a[13329] = actions(220);
	v->a[13330] = 1;
	v->a[13331] = sym_word;
	v->a[13332] = actions(222);
	v->a[13333] = 1;
	v->a[13334] = anon_sym_BANG;
	v->a[13335] = actions(230);
	v->a[13336] = 1;
	v->a[13337] = sym_file_descriptor;
	v->a[13338] = actions(232);
	v->a[13339] = 1;
	small_parse_table_667(v);
}

void	small_parse_table_667(t_small_parse_table_array *v)
{
	v->a[13340] = sym_variable_name;
	v->a[13341] = state(138);
	v->a[13342] = 1;
	v->a[13343] = aux_sym__statements_repeat1;
	v->a[13344] = state(185);
	v->a[13345] = 1;
	v->a[13346] = sym_command_name;
	v->a[13347] = state(235);
	v->a[13348] = 1;
	v->a[13349] = sym_variable_assignment;
	v->a[13350] = state(624);
	v->a[13351] = 1;
	v->a[13352] = sym_concatenation;
	v->a[13353] = state(700);
	v->a[13354] = 1;
	v->a[13355] = sym_file_redirect;
	v->a[13356] = state(765);
	v->a[13357] = 1;
	v->a[13358] = aux_sym_command_repeat1;
	v->a[13359] = state(1110);
	small_parse_table_668(v);
}

void	small_parse_table_668(t_small_parse_table_array *v)
{
	v->a[13360] = 1;
	v->a[13361] = sym_pipeline;
	v->a[13362] = state(1188);
	v->a[13363] = 1;
	v->a[13364] = aux_sym_redirected_statement_repeat2;
	v->a[13365] = state(2115);
	v->a[13366] = 1;
	v->a[13367] = sym__statement_not_pipeline;
	v->a[13368] = state(2233);
	v->a[13369] = 1;
	v->a[13370] = sym__statements;
	v->a[13371] = actions(11);
	v->a[13372] = 2;
	v->a[13373] = anon_sym_while;
	v->a[13374] = anon_sym_until;
	v->a[13375] = actions(226);
	v->a[13376] = 2;
	v->a[13377] = anon_sym_LT_AMP_DASH;
	v->a[13378] = anon_sym_GT_AMP_DASH;
	v->a[13379] = actions(228);
	small_parse_table_669(v);
}

void	small_parse_table_669(t_small_parse_table_array *v)
{
	v->a[13380] = 2;
	v->a[13381] = sym_raw_string;
	v->a[13382] = sym_number;
	v->a[13383] = state(299);
	v->a[13384] = 5;
	v->a[13385] = sym_arithmetic_expansion;
	v->a[13386] = sym_string;
	v->a[13387] = sym_simple_expansion;
	v->a[13388] = sym_expansion;
	v->a[13389] = sym_command_substitution;
	v->a[13390] = actions(224);
	v->a[13391] = 8;
	v->a[13392] = anon_sym_LT;
	v->a[13393] = anon_sym_GT;
	v->a[13394] = anon_sym_GT_GT;
	v->a[13395] = anon_sym_AMP_GT;
	v->a[13396] = anon_sym_AMP_GT_GT;
	v->a[13397] = anon_sym_LT_AMP;
	v->a[13398] = anon_sym_GT_AMP;
	v->a[13399] = anon_sym_GT_PIPE;
	small_parse_table_670(v);
}

/* EOF small_parse_table_133.c */
