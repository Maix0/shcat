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
	v->a[122600] = sym_raw_string;
	v->a[122601] = state(796);
	v->a[122602] = 7;
	v->a[122603] = sym_arithmetic_expansion;
	v->a[122604] = sym_brace_expression;
	v->a[122605] = sym_string;
	v->a[122606] = sym_number;
	v->a[122607] = sym_simple_expansion;
	v->a[122608] = sym_expansion;
	v->a[122609] = sym_command_substitution;
	v->a[122610] = 16;
	v->a[122611] = actions(3);
	v->a[122612] = 1;
	v->a[122613] = sym_comment;
	v->a[122614] = actions(2160);
	v->a[122615] = 1;
	v->a[122616] = aux_sym_number_token1;
	v->a[122617] = actions(2162);
	v->a[122618] = 1;
	v->a[122619] = aux_sym_number_token2;
	small_parse_table_6131(v);
}

void	small_parse_table_6131(t_small_parse_table_array *v)
{
	v->a[122620] = actions(2166);
	v->a[122621] = 1;
	v->a[122622] = anon_sym_DOLLAR_LPAREN;
	v->a[122623] = actions(2174);
	v->a[122624] = 1;
	v->a[122625] = sym__brace_start;
	v->a[122626] = actions(5989);
	v->a[122627] = 1;
	v->a[122628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122629] = actions(5993);
	v->a[122630] = 1;
	v->a[122631] = anon_sym_DQUOTE;
	v->a[122632] = actions(5995);
	v->a[122633] = 1;
	v->a[122634] = anon_sym_DOLLAR_LBRACE;
	v->a[122635] = actions(5997);
	v->a[122636] = 1;
	v->a[122637] = anon_sym_BQUOTE;
	v->a[122638] = actions(5999);
	v->a[122639] = 1;
	small_parse_table_6132(v);
}

void	small_parse_table_6132(t_small_parse_table_array *v)
{
	v->a[122640] = anon_sym_DOLLAR_BQUOTE;
	v->a[122641] = actions(6432);
	v->a[122642] = 1;
	v->a[122643] = sym_word;
	v->a[122644] = actions(6436);
	v->a[122645] = 1;
	v->a[122646] = sym__special_character;
	v->a[122647] = actions(6440);
	v->a[122648] = 1;
	v->a[122649] = sym__comment_word;
	v->a[122650] = actions(7070);
	v->a[122651] = 1;
	v->a[122652] = anon_sym_DOLLAR;
	v->a[122653] = actions(6438);
	v->a[122654] = 3;
	v->a[122655] = sym_test_operator;
	v->a[122656] = sym__bare_dollar;
	v->a[122657] = sym_raw_string;
	v->a[122658] = state(1201);
	v->a[122659] = 7;
	small_parse_table_6133(v);
}

void	small_parse_table_6133(t_small_parse_table_array *v)
{
	v->a[122660] = sym_arithmetic_expansion;
	v->a[122661] = sym_brace_expression;
	v->a[122662] = sym_string;
	v->a[122663] = sym_number;
	v->a[122664] = sym_simple_expansion;
	v->a[122665] = sym_expansion;
	v->a[122666] = sym_command_substitution;
	v->a[122667] = 16;
	v->a[122668] = actions(3);
	v->a[122669] = 1;
	v->a[122670] = sym_comment;
	v->a[122671] = actions(2362);
	v->a[122672] = 1;
	v->a[122673] = aux_sym_number_token1;
	v->a[122674] = actions(2364);
	v->a[122675] = 1;
	v->a[122676] = aux_sym_number_token2;
	v->a[122677] = actions(2368);
	v->a[122678] = 1;
	v->a[122679] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6134(v);
}

void	small_parse_table_6134(t_small_parse_table_array *v)
{
	v->a[122680] = actions(2376);
	v->a[122681] = 1;
	v->a[122682] = sym__brace_start;
	v->a[122683] = actions(6811);
	v->a[122684] = 1;
	v->a[122685] = sym_word;
	v->a[122686] = actions(6813);
	v->a[122687] = 1;
	v->a[122688] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122689] = actions(6815);
	v->a[122690] = 1;
	v->a[122691] = sym__special_character;
	v->a[122692] = actions(6817);
	v->a[122693] = 1;
	v->a[122694] = anon_sym_DQUOTE;
	v->a[122695] = actions(6821);
	v->a[122696] = 1;
	v->a[122697] = anon_sym_DOLLAR_LBRACE;
	v->a[122698] = actions(6823);
	v->a[122699] = 1;
	small_parse_table_6135(v);
}

/* EOF small_parse_table_1226.c */
