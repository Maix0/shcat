/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_306.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1530(t_small_parse_table_array *v)
{
	v->a[30600] = anon_sym_GT;
	v->a[30601] = anon_sym_GT_GT;
	v->a[30602] = anon_sym_AMP_GT;
	v->a[30603] = anon_sym_AMP_GT_GT;
	v->a[30604] = anon_sym_LT_AMP;
	v->a[30605] = anon_sym_GT_AMP;
	v->a[30606] = anon_sym_GT_PIPE;
	v->a[30607] = anon_sym_LT_AMP_DASH;
	v->a[30608] = anon_sym_GT_AMP_DASH;
	v->a[30609] = anon_sym_LT_LT;
	v->a[30610] = anon_sym_LT_LT_DASH;
	v->a[30611] = aux_sym_heredoc_redirect_token1;
	v->a[30612] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30613] = anon_sym_AMP;
	v->a[30614] = aux_sym_concatenation_token1;
	v->a[30615] = anon_sym_DOLLAR;
	v->a[30616] = anon_sym_DQUOTE;
	v->a[30617] = sym_raw_string;
	v->a[30618] = sym_number;
	v->a[30619] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1531(v);
}

void	small_parse_table_1531(t_small_parse_table_array *v)
{
	v->a[30620] = anon_sym_DOLLAR_LPAREN;
	v->a[30621] = anon_sym_BQUOTE;
	v->a[30622] = sym_word;
	v->a[30623] = anon_sym_SEMI;
	v->a[30624] = 21;
	v->a[30625] = actions(3);
	v->a[30626] = 1;
	v->a[30627] = sym_comment;
	v->a[30628] = actions(17);
	v->a[30629] = 1;
	v->a[30630] = anon_sym_LPAREN;
	v->a[30631] = actions(59);
	v->a[30632] = 1;
	v->a[30633] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30634] = actions(61);
	v->a[30635] = 1;
	v->a[30636] = anon_sym_DOLLAR;
	v->a[30637] = actions(63);
	v->a[30638] = 1;
	v->a[30639] = anon_sym_DQUOTE;
	small_parse_table_1532(v);
}

void	small_parse_table_1532(t_small_parse_table_array *v)
{
	v->a[30640] = actions(67);
	v->a[30641] = 1;
	v->a[30642] = anon_sym_DOLLAR_LBRACE;
	v->a[30643] = actions(69);
	v->a[30644] = 1;
	v->a[30645] = anon_sym_DOLLAR_LPAREN;
	v->a[30646] = actions(71);
	v->a[30647] = 1;
	v->a[30648] = anon_sym_BQUOTE;
	v->a[30649] = actions(75);
	v->a[30650] = 1;
	v->a[30651] = sym_variable_name;
	v->a[30652] = actions(1068);
	v->a[30653] = 1;
	v->a[30654] = sym_file_descriptor;
	v->a[30655] = state(189);
	v->a[30656] = 1;
	v->a[30657] = sym_command_name;
	v->a[30658] = state(624);
	v->a[30659] = 1;
	small_parse_table_1533(v);
}

void	small_parse_table_1533(t_small_parse_table_array *v)
{
	v->a[30660] = sym_concatenation;
	v->a[30661] = state(672);
	v->a[30662] = 1;
	v->a[30663] = aux_sym_command_repeat1;
	v->a[30664] = state(786);
	v->a[30665] = 1;
	v->a[30666] = sym_variable_assignment;
	v->a[30667] = state(1283);
	v->a[30668] = 1;
	v->a[30669] = sym_subshell;
	v->a[30670] = state(1298);
	v->a[30671] = 1;
	v->a[30672] = sym_command;
	v->a[30673] = state(1343);
	v->a[30674] = 1;
	v->a[30675] = sym_file_redirect;
	v->a[30676] = actions(1066);
	v->a[30677] = 2;
	v->a[30678] = anon_sym_LT_AMP_DASH;
	v->a[30679] = anon_sym_GT_AMP_DASH;
	small_parse_table_1534(v);
}

void	small_parse_table_1534(t_small_parse_table_array *v)
{
	v->a[30680] = actions(65);
	v->a[30681] = 3;
	v->a[30682] = sym_raw_string;
	v->a[30683] = sym_number;
	v->a[30684] = sym_word;
	v->a[30685] = state(420);
	v->a[30686] = 5;
	v->a[30687] = sym_arithmetic_expansion;
	v->a[30688] = sym_string;
	v->a[30689] = sym_simple_expansion;
	v->a[30690] = sym_expansion;
	v->a[30691] = sym_command_substitution;
	v->a[30692] = actions(1064);
	v->a[30693] = 8;
	v->a[30694] = anon_sym_LT;
	v->a[30695] = anon_sym_GT;
	v->a[30696] = anon_sym_GT_GT;
	v->a[30697] = anon_sym_AMP_GT;
	v->a[30698] = anon_sym_AMP_GT_GT;
	v->a[30699] = anon_sym_LT_AMP;
	small_parse_table_1535(v);
}

/* EOF small_parse_table_306.c */
