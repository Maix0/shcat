/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_166.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_830(t_small_parse_table_array *v)
{
	v->a[16600] = actions(1745);
	v->a[16601] = 1;
	v->a[16602] = aux_sym_number_token1;
	v->a[16603] = actions(1747);
	v->a[16604] = 1;
	v->a[16605] = aux_sym_number_token2;
	v->a[16606] = actions(1749);
	v->a[16607] = 1;
	v->a[16608] = anon_sym_DOLLAR_LBRACE;
	v->a[16609] = actions(1751);
	v->a[16610] = 1;
	v->a[16611] = anon_sym_DOLLAR_LPAREN;
	v->a[16612] = actions(1753);
	v->a[16613] = 1;
	v->a[16614] = anon_sym_BQUOTE;
	v->a[16615] = actions(1755);
	v->a[16616] = 1;
	v->a[16617] = anon_sym_DOLLAR_BQUOTE;
	v->a[16618] = actions(1761);
	v->a[16619] = 1;
	small_parse_table_831(v);
}

void	small_parse_table_831(t_small_parse_table_array *v)
{
	v->a[16620] = sym__brace_start;
	v->a[16621] = actions(2672);
	v->a[16622] = 1;
	v->a[16623] = sym__special_character;
	v->a[16624] = actions(2674);
	v->a[16625] = 1;
	v->a[16626] = aux_sym__simple_variable_name_token1;
	v->a[16627] = actions(2676);
	v->a[16628] = 1;
	v->a[16629] = sym_test_operator;
	v->a[16630] = state(1219);
	v->a[16631] = 1;
	v->a[16632] = aux_sym__literal_repeat1;
	v->a[16633] = actions(1246);
	v->a[16634] = 2;
	v->a[16635] = sym_file_descriptor;
	v->a[16636] = aux_sym_heredoc_redirect_token1;
	v->a[16637] = actions(2670);
	v->a[16638] = 2;
	v->a[16639] = sym_raw_string;
	small_parse_table_832(v);
}

void	small_parse_table_832(t_small_parse_table_array *v)
{
	v->a[16640] = sym_word;
	v->a[16641] = state(495);
	v->a[16642] = 2;
	v->a[16643] = sym_concatenation;
	v->a[16644] = aux_sym_unset_command_repeat1;
	v->a[16645] = state(1351);
	v->a[16646] = 7;
	v->a[16647] = sym_arithmetic_expansion;
	v->a[16648] = sym_brace_expression;
	v->a[16649] = sym_string;
	v->a[16650] = sym_number;
	v->a[16651] = sym_simple_expansion;
	v->a[16652] = sym_expansion;
	v->a[16653] = sym_command_substitution;
	v->a[16654] = actions(1244);
	v->a[16655] = 16;
	v->a[16656] = anon_sym_PIPE;
	v->a[16657] = anon_sym_PIPE_AMP;
	v->a[16658] = anon_sym_AMP_AMP;
	v->a[16659] = anon_sym_PIPE_PIPE;
	small_parse_table_833(v);
}

void	small_parse_table_833(t_small_parse_table_array *v)
{
	v->a[16660] = anon_sym_LT;
	v->a[16661] = anon_sym_GT;
	v->a[16662] = anon_sym_GT_GT;
	v->a[16663] = anon_sym_AMP_GT;
	v->a[16664] = anon_sym_AMP_GT_GT;
	v->a[16665] = anon_sym_LT_AMP;
	v->a[16666] = anon_sym_GT_AMP;
	v->a[16667] = anon_sym_GT_PIPE;
	v->a[16668] = anon_sym_LT_AMP_DASH;
	v->a[16669] = anon_sym_GT_AMP_DASH;
	v->a[16670] = anon_sym_LT_LT;
	v->a[16671] = anon_sym_LT_LT_DASH;
	v->a[16672] = 4;
	v->a[16673] = actions(57);
	v->a[16674] = 1;
	v->a[16675] = sym_comment;
	v->a[16676] = actions(1997);
	v->a[16677] = 1;
	v->a[16678] = anon_sym_BQUOTE;
	v->a[16679] = actions(1691);
	small_parse_table_834(v);
}

void	small_parse_table_834(t_small_parse_table_array *v)
{
	v->a[16680] = 16;
	v->a[16681] = sym_file_descriptor;
	v->a[16682] = sym_variable_name;
	v->a[16683] = sym_test_operator;
	v->a[16684] = sym__brace_start;
	v->a[16685] = anon_sym_LPAREN;
	v->a[16686] = anon_sym_LBRACE;
	v->a[16687] = anon_sym_GT_GT;
	v->a[16688] = anon_sym_AMP_GT_GT;
	v->a[16689] = anon_sym_GT_PIPE;
	v->a[16690] = anon_sym_LT_AMP_DASH;
	v->a[16691] = anon_sym_GT_AMP_DASH;
	v->a[16692] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16693] = anon_sym_DQUOTE;
	v->a[16694] = sym_raw_string;
	v->a[16695] = anon_sym_DOLLAR_LBRACE;
	v->a[16696] = anon_sym_DOLLAR_BQUOTE;
	v->a[16697] = actions(1689);
	v->a[16698] = 26;
	v->a[16699] = anon_sym_for;
	small_parse_table_835(v);
}

/* EOF small_parse_table_166.c */
