/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_123.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_615(t_small_parse_table_array *v)
{
	v->a[12300] = 1;
	v->a[12301] = sym_word;
	v->a[12302] = state(528);
	v->a[12303] = 1;
	v->a[12304] = sym_command_name;
	v->a[12305] = state(925);
	v->a[12306] = 1;
	v->a[12307] = aux_sym_command_repeat1;
	v->a[12308] = state(926);
	v->a[12309] = 1;
	v->a[12310] = aux_sym__literal_repeat1;
	v->a[12311] = state(1082);
	v->a[12312] = 1;
	v->a[12313] = sym_concatenation;
	v->a[12314] = state(1703);
	v->a[12315] = 1;
	v->a[12316] = sym_variable_assignment;
	v->a[12317] = state(4945);
	v->a[12318] = 1;
	v->a[12319] = sym_command;
	small_parse_table_616(v);
}

void	small_parse_table_616(t_small_parse_table_array *v)
{
	v->a[12320] = state(6736);
	v->a[12321] = 1;
	v->a[12322] = sym_subscript;
	v->a[12323] = actions(459);
	v->a[12324] = 2;
	v->a[12325] = sym_raw_string;
	v->a[12326] = sym_ansi_c_string;
	v->a[12327] = actions(473);
	v->a[12328] = 2;
	v->a[12329] = anon_sym_LT_LPAREN;
	v->a[12330] = anon_sym_GT_LPAREN;
	v->a[12331] = actions(1392);
	v->a[12332] = 2;
	v->a[12333] = anon_sym_LT_AMP_DASH;
	v->a[12334] = anon_sym_GT_AMP_DASH;
	v->a[12335] = state(3581);
	v->a[12336] = 2;
	v->a[12337] = sym_file_redirect;
	v->a[12338] = sym_herestring_redirect;
	v->a[12339] = state(4943);
	small_parse_table_617(v);
}

void	small_parse_table_617(t_small_parse_table_array *v)
{
	v->a[12340] = 2;
	v->a[12341] = sym_subshell;
	v->a[12342] = sym_test_command;
	v->a[12343] = actions(1390);
	v->a[12344] = 3;
	v->a[12345] = anon_sym_GT_GT;
	v->a[12346] = anon_sym_AMP_GT_GT;
	v->a[12347] = anon_sym_GT_PIPE;
	v->a[12348] = actions(1388);
	v->a[12349] = 5;
	v->a[12350] = anon_sym_LT;
	v->a[12351] = anon_sym_GT;
	v->a[12352] = anon_sym_AMP_GT;
	v->a[12353] = anon_sym_LT_AMP;
	v->a[12354] = anon_sym_GT_AMP;
	v->a[12355] = state(815);
	v->a[12356] = 9;
	v->a[12357] = sym_arithmetic_expansion;
	v->a[12358] = sym_brace_expression;
	v->a[12359] = sym_string;
	small_parse_table_618(v);
}

void	small_parse_table_618(t_small_parse_table_array *v)
{
	v->a[12360] = sym_translated_string;
	v->a[12361] = sym_number;
	v->a[12362] = sym_simple_expansion;
	v->a[12363] = sym_expansion;
	v->a[12364] = sym_command_substitution;
	v->a[12365] = sym_process_substitution;
	v->a[12366] = 21;
	v->a[12367] = actions(3);
	v->a[12368] = 1;
	v->a[12369] = sym_comment;
	v->a[12370] = actions(2602);
	v->a[12371] = 1;
	v->a[12372] = anon_sym_DOLLAR_LBRACK;
	v->a[12373] = actions(2604);
	v->a[12374] = 1;
	v->a[12375] = anon_sym_DOLLAR;
	v->a[12376] = actions(2606);
	v->a[12377] = 1;
	v->a[12378] = sym__special_character;
	v->a[12379] = actions(2608);
	small_parse_table_619(v);
}

void	small_parse_table_619(t_small_parse_table_array *v)
{
	v->a[12380] = 1;
	v->a[12381] = anon_sym_DQUOTE;
	v->a[12382] = actions(2610);
	v->a[12383] = 1;
	v->a[12384] = aux_sym_number_token1;
	v->a[12385] = actions(2612);
	v->a[12386] = 1;
	v->a[12387] = aux_sym_number_token2;
	v->a[12388] = actions(2614);
	v->a[12389] = 1;
	v->a[12390] = anon_sym_DOLLAR_LBRACE;
	v->a[12391] = actions(2616);
	v->a[12392] = 1;
	v->a[12393] = anon_sym_DOLLAR_LPAREN;
	v->a[12394] = actions(2618);
	v->a[12395] = 1;
	v->a[12396] = anon_sym_BQUOTE;
	v->a[12397] = actions(2620);
	v->a[12398] = 1;
	v->a[12399] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_620(v);
}

/* EOF small_parse_table_123.c */
