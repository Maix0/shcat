/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_253.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1265(t_small_parse_table_array *v)
{
	v->a[25300] = actions(4155);
	v->a[25301] = 1;
	v->a[25302] = sym__special_character;
	v->a[25303] = actions(4157);
	v->a[25304] = 1;
	v->a[25305] = anon_sym_DQUOTE;
	v->a[25306] = actions(4161);
	v->a[25307] = 1;
	v->a[25308] = aux_sym_number_token1;
	v->a[25309] = actions(4163);
	v->a[25310] = 1;
	v->a[25311] = aux_sym_number_token2;
	v->a[25312] = actions(4165);
	v->a[25313] = 1;
	v->a[25314] = anon_sym_DOLLAR_LBRACE;
	v->a[25315] = actions(4167);
	v->a[25316] = 1;
	v->a[25317] = anon_sym_DOLLAR_LPAREN;
	v->a[25318] = actions(4169);
	v->a[25319] = 1;
	small_parse_table_1266(v);
}

void	small_parse_table_1266(t_small_parse_table_array *v)
{
	v->a[25320] = anon_sym_BQUOTE;
	v->a[25321] = actions(4171);
	v->a[25322] = 1;
	v->a[25323] = anon_sym_DOLLAR_BQUOTE;
	v->a[25324] = actions(4175);
	v->a[25325] = 1;
	v->a[25326] = aux_sym__simple_variable_name_token1;
	v->a[25327] = actions(4177);
	v->a[25328] = 1;
	v->a[25329] = sym_variable_name;
	v->a[25330] = actions(4179);
	v->a[25331] = 1;
	v->a[25332] = sym_test_operator;
	v->a[25333] = actions(4181);
	v->a[25334] = 1;
	v->a[25335] = sym__brace_start;
	v->a[25336] = state(2688);
	v->a[25337] = 1;
	v->a[25338] = aux_sym__literal_repeat1;
	v->a[25339] = state(6751);
	small_parse_table_1267(v);
}

void	small_parse_table_1267(t_small_parse_table_array *v)
{
	v->a[25340] = 1;
	v->a[25341] = sym_subscript;
	v->a[25342] = actions(4149);
	v->a[25343] = 2;
	v->a[25344] = anon_sym_LPAREN_LPAREN;
	v->a[25345] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25346] = actions(4159);
	v->a[25347] = 2;
	v->a[25348] = sym_raw_string;
	v->a[25349] = sym_ansi_c_string;
	v->a[25350] = actions(4173);
	v->a[25351] = 2;
	v->a[25352] = anon_sym_LT_LPAREN;
	v->a[25353] = anon_sym_GT_LPAREN;
	v->a[25354] = state(803);
	v->a[25355] = 3;
	v->a[25356] = sym_variable_assignment;
	v->a[25357] = sym_concatenation;
	v->a[25358] = aux_sym_declaration_command_repeat1;
	v->a[25359] = actions(1797);
	small_parse_table_1268(v);
}

void	small_parse_table_1268(t_small_parse_table_array *v)
{
	v->a[25360] = 7;
	v->a[25361] = anon_sym_PIPE;
	v->a[25362] = anon_sym_LT;
	v->a[25363] = anon_sym_GT;
	v->a[25364] = anon_sym_LT_LT;
	v->a[25365] = anon_sym_AMP_GT;
	v->a[25366] = anon_sym_LT_AMP;
	v->a[25367] = anon_sym_GT_AMP;
	v->a[25368] = state(2419);
	v->a[25369] = 9;
	v->a[25370] = sym_arithmetic_expansion;
	v->a[25371] = sym_brace_expression;
	v->a[25372] = sym_string;
	v->a[25373] = sym_translated_string;
	v->a[25374] = sym_number;
	v->a[25375] = sym_simple_expansion;
	v->a[25376] = sym_expansion;
	v->a[25377] = sym_command_substitution;
	v->a[25378] = sym_process_substitution;
	v->a[25379] = actions(1799);
	small_parse_table_1269(v);
}

void	small_parse_table_1269(t_small_parse_table_array *v)
{
	v->a[25380] = 10;
	v->a[25381] = sym_file_descriptor;
	v->a[25382] = anon_sym_PIPE_PIPE;
	v->a[25383] = anon_sym_AMP_AMP;
	v->a[25384] = anon_sym_GT_GT;
	v->a[25385] = anon_sym_PIPE_AMP;
	v->a[25386] = anon_sym_AMP_GT_GT;
	v->a[25387] = anon_sym_GT_PIPE;
	v->a[25388] = anon_sym_LT_AMP_DASH;
	v->a[25389] = anon_sym_GT_AMP_DASH;
	v->a[25390] = anon_sym_LT_LT_DASH;
	v->a[25391] = 21;
	v->a[25392] = actions(3);
	v->a[25393] = 1;
	v->a[25394] = sym_comment;
	v->a[25395] = actions(4078);
	v->a[25396] = 1;
	v->a[25397] = anon_sym_DOLLAR_LBRACK;
	v->a[25398] = actions(4080);
	v->a[25399] = 1;
	small_parse_table_1270(v);
}

/* EOF small_parse_table_253.c */
