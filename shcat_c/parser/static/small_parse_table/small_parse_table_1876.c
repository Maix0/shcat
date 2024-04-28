/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1876.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9380(t_small_parse_table_array *v)
{
	v->a[187600] = sym_word;
	v->a[187601] = actions(7826);
	v->a[187602] = 1;
	v->a[187603] = anon_sym_RBRACE3;
	v->a[187604] = actions(7828);
	v->a[187605] = 1;
	v->a[187606] = sym_test_operator;
	v->a[187607] = actions(7830);
	v->a[187608] = 1;
	v->a[187609] = sym__expansion_word;
	v->a[187610] = state(6353);
	v->a[187611] = 1;
	v->a[187612] = sym_command_substitution;
	v->a[187613] = state(6530);
	v->a[187614] = 1;
	v->a[187615] = aux_sym__literal_repeat1;
	v->a[187616] = actions(7779);
	v->a[187617] = 2;
	v->a[187618] = anon_sym_LPAREN_LPAREN;
	v->a[187619] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_9381(v);
}

void	small_parse_table_9381(t_small_parse_table_array *v)
{
	v->a[187620] = actions(7807);
	v->a[187621] = 2;
	v->a[187622] = anon_sym_LT_LPAREN;
	v->a[187623] = anon_sym_GT_LPAREN;
	v->a[187624] = actions(7824);
	v->a[187625] = 2;
	v->a[187626] = sym_raw_string;
	v->a[187627] = sym_ansi_c_string;
	v->a[187628] = state(6379);
	v->a[187629] = 5;
	v->a[187630] = sym_string;
	v->a[187631] = sym_array;
	v->a[187632] = sym_simple_expansion;
	v->a[187633] = sym_expansion;
	v->a[187634] = sym_process_substitution;
	v->a[187635] = state(6788);
	v->a[187636] = 5;
	v->a[187637] = sym_arithmetic_expansion;
	v->a[187638] = sym_brace_expression;
	v->a[187639] = sym_translated_string;
	small_parse_table_9382(v);
}

void	small_parse_table_9382(t_small_parse_table_array *v)
{
	v->a[187640] = sym_number;
	v->a[187641] = sym__concatenation_in_expansion;
	v->a[187642] = 5;
	v->a[187643] = actions(71);
	v->a[187644] = 1;
	v->a[187645] = sym_comment;
	v->a[187646] = state(3461);
	v->a[187647] = 1;
	v->a[187648] = aux_sym_concatenation_repeat1;
	v->a[187649] = actions(7751);
	v->a[187650] = 2;
	v->a[187651] = sym__concat;
	v->a[187652] = aux_sym_concatenation_token1;
	v->a[187653] = actions(2094);
	v->a[187654] = 11;
	v->a[187655] = anon_sym_LT;
	v->a[187656] = anon_sym_GT;
	v->a[187657] = anon_sym_AMP_GT;
	v->a[187658] = anon_sym_LT_AMP;
	v->a[187659] = anon_sym_GT_AMP;
	small_parse_table_9383(v);
}

void	small_parse_table_9383(t_small_parse_table_array *v)
{
	v->a[187660] = anon_sym_DOLLAR;
	v->a[187661] = aux_sym_number_token1;
	v->a[187662] = aux_sym_number_token2;
	v->a[187663] = anon_sym_DOLLAR_LPAREN;
	v->a[187664] = anon_sym_BQUOTE;
	v->a[187665] = sym_word;
	v->a[187666] = actions(2096);
	v->a[187667] = 21;
	v->a[187668] = sym_file_descriptor;
	v->a[187669] = sym_variable_name;
	v->a[187670] = sym_test_operator;
	v->a[187671] = sym__brace_start;
	v->a[187672] = anon_sym_LPAREN_LPAREN;
	v->a[187673] = anon_sym_GT_GT;
	v->a[187674] = anon_sym_AMP_GT_GT;
	v->a[187675] = anon_sym_GT_PIPE;
	v->a[187676] = anon_sym_LT_AMP_DASH;
	v->a[187677] = anon_sym_GT_AMP_DASH;
	v->a[187678] = anon_sym_LT_LT_LT;
	v->a[187679] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_9384(v);
}

void	small_parse_table_9384(t_small_parse_table_array *v)
{
	v->a[187680] = anon_sym_DOLLAR_LBRACK;
	v->a[187681] = sym__special_character;
	v->a[187682] = anon_sym_DQUOTE;
	v->a[187683] = sym_raw_string;
	v->a[187684] = sym_ansi_c_string;
	v->a[187685] = anon_sym_DOLLAR_LBRACE;
	v->a[187686] = anon_sym_DOLLAR_BQUOTE;
	v->a[187687] = anon_sym_LT_LPAREN;
	v->a[187688] = anon_sym_GT_LPAREN;
	v->a[187689] = 5;
	v->a[187690] = actions(71);
	v->a[187691] = 1;
	v->a[187692] = sym_comment;
	v->a[187693] = state(3459);
	v->a[187694] = 1;
	v->a[187695] = aux_sym_concatenation_repeat1;
	v->a[187696] = actions(7751);
	v->a[187697] = 2;
	v->a[187698] = sym__concat;
	v->a[187699] = aux_sym_concatenation_token1;
	small_parse_table_9385(v);
}

/* EOF small_parse_table_1876.c */
