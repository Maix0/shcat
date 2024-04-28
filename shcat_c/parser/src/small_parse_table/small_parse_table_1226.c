/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1226.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6130(t_small_parse_table_array *v)
{
	v->a[122600] = aux_sym_number_token2;
	v->a[122601] = anon_sym_DOLLAR_LBRACE;
	v->a[122602] = anon_sym_DOLLAR_LPAREN;
	v->a[122603] = anon_sym_BQUOTE;
	v->a[122604] = anon_sym_DOLLAR_BQUOTE;
	v->a[122605] = anon_sym_LT_LPAREN;
	v->a[122606] = anon_sym_GT_LPAREN;
	v->a[122607] = aux_sym__simple_variable_name_token1;
	v->a[122608] = sym_word;
	v->a[122609] = 3;
	v->a[122610] = actions(71);
	v->a[122611] = 1;
	v->a[122612] = sym_comment;
	v->a[122613] = actions(1320);
	v->a[122614] = 15;
	v->a[122615] = anon_sym_PIPE;
	v->a[122616] = anon_sym_EQ_EQ;
	v->a[122617] = anon_sym_LT;
	v->a[122618] = anon_sym_GT;
	v->a[122619] = anon_sym_LT_LT;
	small_parse_table_6131(v);
}

void	small_parse_table_6131(t_small_parse_table_array *v)
{
	v->a[122620] = anon_sym_EQ_TILDE;
	v->a[122621] = anon_sym_AMP_GT;
	v->a[122622] = anon_sym_LT_AMP;
	v->a[122623] = anon_sym_GT_AMP;
	v->a[122624] = anon_sym_DOLLAR;
	v->a[122625] = aux_sym_number_token1;
	v->a[122626] = aux_sym_number_token2;
	v->a[122627] = anon_sym_DOLLAR_LPAREN;
	v->a[122628] = anon_sym_BQUOTE;
	v->a[122629] = sym_word;
	v->a[122630] = actions(1322);
	v->a[122631] = 27;
	v->a[122632] = sym_file_descriptor;
	v->a[122633] = sym__concat;
	v->a[122634] = sym_test_operator;
	v->a[122635] = sym__bare_dollar;
	v->a[122636] = sym__brace_start;
	v->a[122637] = anon_sym_LPAREN_LPAREN;
	v->a[122638] = anon_sym_PIPE_PIPE;
	v->a[122639] = anon_sym_AMP_AMP;
	small_parse_table_6132(v);
}

void	small_parse_table_6132(t_small_parse_table_array *v)
{
	v->a[122640] = anon_sym_GT_GT;
	v->a[122641] = anon_sym_PIPE_AMP;
	v->a[122642] = anon_sym_AMP_GT_GT;
	v->a[122643] = anon_sym_GT_PIPE;
	v->a[122644] = anon_sym_LT_AMP_DASH;
	v->a[122645] = anon_sym_GT_AMP_DASH;
	v->a[122646] = anon_sym_LT_LT_DASH;
	v->a[122647] = anon_sym_LT_LT_LT;
	v->a[122648] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122649] = anon_sym_DOLLAR_LBRACK;
	v->a[122650] = aux_sym_concatenation_token1;
	v->a[122651] = sym__special_character;
	v->a[122652] = anon_sym_DQUOTE;
	v->a[122653] = sym_raw_string;
	v->a[122654] = sym_ansi_c_string;
	v->a[122655] = anon_sym_DOLLAR_LBRACE;
	v->a[122656] = anon_sym_DOLLAR_BQUOTE;
	v->a[122657] = anon_sym_LT_LPAREN;
	v->a[122658] = anon_sym_GT_LPAREN;
	v->a[122659] = 3;
	small_parse_table_6133(v);
}

void	small_parse_table_6133(t_small_parse_table_array *v)
{
	v->a[122660] = actions(71);
	v->a[122661] = 1;
	v->a[122662] = sym_comment;
	v->a[122663] = actions(1251);
	v->a[122664] = 15;
	v->a[122665] = anon_sym_PIPE;
	v->a[122666] = anon_sym_EQ_EQ;
	v->a[122667] = anon_sym_LT;
	v->a[122668] = anon_sym_GT;
	v->a[122669] = anon_sym_LT_LT;
	v->a[122670] = anon_sym_EQ_TILDE;
	v->a[122671] = anon_sym_AMP_GT;
	v->a[122672] = anon_sym_LT_AMP;
	v->a[122673] = anon_sym_GT_AMP;
	v->a[122674] = anon_sym_DOLLAR;
	v->a[122675] = aux_sym_number_token1;
	v->a[122676] = aux_sym_number_token2;
	v->a[122677] = anon_sym_DOLLAR_LPAREN;
	v->a[122678] = anon_sym_BQUOTE;
	v->a[122679] = sym_word;
	small_parse_table_6134(v);
}

void	small_parse_table_6134(t_small_parse_table_array *v)
{
	v->a[122680] = actions(1253);
	v->a[122681] = 27;
	v->a[122682] = sym_file_descriptor;
	v->a[122683] = sym__concat;
	v->a[122684] = sym_test_operator;
	v->a[122685] = sym__bare_dollar;
	v->a[122686] = sym__brace_start;
	v->a[122687] = anon_sym_LPAREN_LPAREN;
	v->a[122688] = anon_sym_PIPE_PIPE;
	v->a[122689] = anon_sym_AMP_AMP;
	v->a[122690] = anon_sym_GT_GT;
	v->a[122691] = anon_sym_PIPE_AMP;
	v->a[122692] = anon_sym_AMP_GT_GT;
	v->a[122693] = anon_sym_GT_PIPE;
	v->a[122694] = anon_sym_LT_AMP_DASH;
	v->a[122695] = anon_sym_GT_AMP_DASH;
	v->a[122696] = anon_sym_LT_LT_DASH;
	v->a[122697] = anon_sym_LT_LT_LT;
	v->a[122698] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122699] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_6135(v);
}

/* EOF small_parse_table_1226.c */
