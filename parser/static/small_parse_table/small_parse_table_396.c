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
	v->a[39600] = anon_sym_PIPE_PIPE;
	v->a[39601] = anon_sym_LT;
	v->a[39602] = anon_sym_GT;
	v->a[39603] = anon_sym_GT_GT;
	v->a[39604] = anon_sym_AMP_GT;
	v->a[39605] = anon_sym_AMP_GT_GT;
	v->a[39606] = anon_sym_LT_AMP;
	v->a[39607] = anon_sym_GT_AMP;
	v->a[39608] = anon_sym_GT_PIPE;
	v->a[39609] = anon_sym_LT_AMP_DASH;
	v->a[39610] = anon_sym_GT_AMP_DASH;
	v->a[39611] = anon_sym_LT_LT;
	v->a[39612] = anon_sym_LT_LT_DASH;
	v->a[39613] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39614] = anon_sym_AMP;
	v->a[39615] = aux_sym_concatenation_token1;
	v->a[39616] = anon_sym_DOLLAR;
	v->a[39617] = sym__special_character;
	v->a[39618] = anon_sym_DQUOTE;
	v->a[39619] = sym_raw_string;
	small_parse_table_1981(v);
}

void	small_parse_table_1981(t_small_parse_table_array *v)
{
	v->a[39620] = aux_sym_number_token1;
	v->a[39621] = aux_sym_number_token2;
	v->a[39622] = anon_sym_DOLLAR_LBRACE;
	v->a[39623] = anon_sym_DOLLAR_LPAREN;
	v->a[39624] = anon_sym_BQUOTE;
	v->a[39625] = anon_sym_DOLLAR_BQUOTE;
	v->a[39626] = aux_sym__simple_variable_name_token1;
	v->a[39627] = sym_word;
	v->a[39628] = anon_sym_SEMI;
	v->a[39629] = 3;
	v->a[39630] = actions(3);
	v->a[39631] = 1;
	v->a[39632] = sym_comment;
	v->a[39633] = actions(2908);
	v->a[39634] = 6;
	v->a[39635] = sym_file_descriptor;
	v->a[39636] = sym__concat;
	v->a[39637] = sym_variable_name;
	v->a[39638] = sym_test_operator;
	v->a[39639] = sym__brace_start;
	small_parse_table_1982(v);
}

void	small_parse_table_1982(t_small_parse_table_array *v)
{
	v->a[39640] = aux_sym_heredoc_redirect_token1;
	v->a[39641] = actions(2906);
	v->a[39642] = 34;
	v->a[39643] = anon_sym_PIPE;
	v->a[39644] = anon_sym_SEMI_SEMI;
	v->a[39645] = anon_sym_SEMI_AMP;
	v->a[39646] = anon_sym_SEMI_SEMI_AMP;
	v->a[39647] = anon_sym_PIPE_AMP;
	v->a[39648] = anon_sym_AMP_AMP;
	v->a[39649] = anon_sym_PIPE_PIPE;
	v->a[39650] = anon_sym_LT;
	v->a[39651] = anon_sym_GT;
	v->a[39652] = anon_sym_GT_GT;
	v->a[39653] = anon_sym_AMP_GT;
	v->a[39654] = anon_sym_AMP_GT_GT;
	v->a[39655] = anon_sym_LT_AMP;
	v->a[39656] = anon_sym_GT_AMP;
	v->a[39657] = anon_sym_GT_PIPE;
	v->a[39658] = anon_sym_LT_AMP_DASH;
	v->a[39659] = anon_sym_GT_AMP_DASH;
	small_parse_table_1983(v);
}

void	small_parse_table_1983(t_small_parse_table_array *v)
{
	v->a[39660] = anon_sym_LT_LT;
	v->a[39661] = anon_sym_LT_LT_DASH;
	v->a[39662] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39663] = anon_sym_AMP;
	v->a[39664] = aux_sym_concatenation_token1;
	v->a[39665] = anon_sym_DOLLAR;
	v->a[39666] = sym__special_character;
	v->a[39667] = anon_sym_DQUOTE;
	v->a[39668] = sym_raw_string;
	v->a[39669] = aux_sym_number_token1;
	v->a[39670] = aux_sym_number_token2;
	v->a[39671] = anon_sym_DOLLAR_LBRACE;
	v->a[39672] = anon_sym_DOLLAR_LPAREN;
	v->a[39673] = anon_sym_BQUOTE;
	v->a[39674] = anon_sym_DOLLAR_BQUOTE;
	v->a[39675] = sym_word;
	v->a[39676] = anon_sym_SEMI;
	v->a[39677] = 5;
	v->a[39678] = actions(3);
	v->a[39679] = 1;
	small_parse_table_1984(v);
}

void	small_parse_table_1984(t_small_parse_table_array *v)
{
	v->a[39680] = sym_comment;
	v->a[39681] = actions(3521);
	v->a[39682] = 1;
	v->a[39683] = sym__special_character;
	v->a[39684] = state(971);
	v->a[39685] = 1;
	v->a[39686] = aux_sym__literal_repeat1;
	v->a[39687] = actions(3549);
	v->a[39688] = 5;
	v->a[39689] = sym_file_descriptor;
	v->a[39690] = sym_variable_name;
	v->a[39691] = sym_test_operator;
	v->a[39692] = sym__brace_start;
	v->a[39693] = aux_sym_heredoc_redirect_token1;
	v->a[39694] = actions(3547);
	v->a[39695] = 33;
	v->a[39696] = anon_sym_esac;
	v->a[39697] = anon_sym_PIPE;
	v->a[39698] = anon_sym_SEMI_SEMI;
	v->a[39699] = anon_sym_SEMI_AMP;
	small_parse_table_1985(v);
}

/* EOF small_parse_table_396.c */
