/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_396.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1980(t_small_parse_table_array *v)
{
	v->a[39600] = actions(981);
	v->a[39601] = 4;
	v->a[39602] = sym__concat;
	v->a[39603] = sym_variable_name;
	v->a[39604] = ts_builtin_sym_end;
	v->a[39605] = aux_sym_heredoc_redirect_token1;
	v->a[39606] = actions(973);
	v->a[39607] = 12;
	v->a[39608] = anon_sym_PIPE;
	v->a[39609] = anon_sym_RPAREN;
	v->a[39610] = anon_sym_SEMI_SEMI;
	v->a[39611] = anon_sym_AMP_AMP;
	v->a[39612] = anon_sym_PIPE_PIPE;
	v->a[39613] = anon_sym_LT;
	v->a[39614] = anon_sym_GT;
	v->a[39615] = anon_sym_GT_GT;
	v->a[39616] = anon_sym_LT_LT;
	v->a[39617] = aux_sym_concatenation_token1;
	v->a[39618] = anon_sym_BQUOTE;
	v->a[39619] = anon_sym_SEMI;
	small_parse_table_1981(v);
}

void	small_parse_table_1981(t_small_parse_table_array *v)
{
	v->a[39620] = 6;
	v->a[39621] = actions(3);
	v->a[39622] = 1;
	v->a[39623] = sym_comment;
	v->a[39624] = actions(917);
	v->a[39625] = 1;
	v->a[39626] = sym_variable_name;
	v->a[39627] = actions(1826);
	v->a[39628] = 1;
	v->a[39629] = aux_sym_concatenation_token1;
	v->a[39630] = actions(1828);
	v->a[39631] = 1;
	v->a[39632] = sym__concat;
	v->a[39633] = state(812);
	v->a[39634] = 1;
	v->a[39635] = aux_sym_concatenation_repeat1;
	v->a[39636] = actions(919);
	v->a[39637] = 12;
	v->a[39638] = anon_sym_LT;
	v->a[39639] = anon_sym_GT;
	small_parse_table_1982(v);
}

void	small_parse_table_1982(t_small_parse_table_array *v)
{
	v->a[39640] = anon_sym_GT_GT;
	v->a[39641] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39642] = anon_sym_DOLLAR;
	v->a[39643] = anon_sym_DQUOTE;
	v->a[39644] = sym_raw_string;
	v->a[39645] = sym_number;
	v->a[39646] = anon_sym_DOLLAR_LBRACE;
	v->a[39647] = anon_sym_DOLLAR_LPAREN;
	v->a[39648] = anon_sym_BQUOTE;
	v->a[39649] = sym_word;
	v->a[39650] = 15;
	v->a[39651] = actions(3);
	v->a[39652] = 1;
	v->a[39653] = sym_comment;
	v->a[39654] = actions(784);
	v->a[39655] = 1;
	v->a[39656] = anon_sym_DOLLAR;
	v->a[39657] = actions(786);
	v->a[39658] = 1;
	v->a[39659] = anon_sym_DQUOTE;
	small_parse_table_1983(v);
}

void	small_parse_table_1983(t_small_parse_table_array *v)
{
	v->a[39660] = actions(788);
	v->a[39661] = 1;
	v->a[39662] = anon_sym_DOLLAR_LBRACE;
	v->a[39663] = actions(790);
	v->a[39664] = 1;
	v->a[39665] = anon_sym_DOLLAR_LPAREN;
	v->a[39666] = actions(792);
	v->a[39667] = 1;
	v->a[39668] = anon_sym_BQUOTE;
	v->a[39669] = actions(1830);
	v->a[39670] = 1;
	v->a[39671] = anon_sym_RBRACE;
	v->a[39672] = actions(1832);
	v->a[39673] = 1;
	v->a[39674] = sym_raw_string;
	v->a[39675] = actions(1834);
	v->a[39676] = 1;
	v->a[39677] = aux_sym__word_no_brace_token1;
	v->a[39678] = actions(1836);
	v->a[39679] = 1;
	small_parse_table_1984(v);
}

void	small_parse_table_1984(t_small_parse_table_array *v)
{
	v->a[39680] = sym_variable_name;
	v->a[39681] = actions(1838);
	v->a[39682] = 1;
	v->a[39683] = sym__expansion_word;
	v->a[39684] = state(1521);
	v->a[39685] = 1;
	v->a[39686] = sym__word_no_brace;
	v->a[39687] = state(1594);
	v->a[39688] = 1;
	v->a[39689] = sym__concatenation_in_expansion;
	v->a[39690] = state(1516);
	v->a[39691] = 2;
	v->a[39692] = sym_string;
	v->a[39693] = sym_expansion;
	v->a[39694] = state(1533);
	v->a[39695] = 2;
	v->a[39696] = sym_simple_expansion;
	v->a[39697] = sym_command_substitution;
	v->a[39698] = 3;
	v->a[39699] = actions(3);
	small_parse_table_1985(v);
}

/* EOF small_parse_table_396.c */
