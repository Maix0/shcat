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
	v->a[30600] = actions(107);
	v->a[30601] = 1;
	v->a[30602] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30603] = actions(109);
	v->a[30604] = 1;
	v->a[30605] = anon_sym_DOLLAR;
	v->a[30606] = actions(111);
	v->a[30607] = 1;
	v->a[30608] = anon_sym_DQUOTE;
	v->a[30609] = actions(115);
	v->a[30610] = 1;
	v->a[30611] = anon_sym_DOLLAR_LBRACE;
	v->a[30612] = actions(117);
	v->a[30613] = 1;
	v->a[30614] = anon_sym_DOLLAR_LPAREN;
	v->a[30615] = actions(119);
	v->a[30616] = 1;
	v->a[30617] = anon_sym_BQUOTE;
	v->a[30618] = actions(123);
	v->a[30619] = 1;
	small_parse_table_1531(v);
}

void	small_parse_table_1531(t_small_parse_table_array *v)
{
	v->a[30620] = sym_variable_name;
	v->a[30621] = actions(1152);
	v->a[30622] = 1;
	v->a[30623] = sym_file_descriptor;
	v->a[30624] = state(178);
	v->a[30625] = 1;
	v->a[30626] = sym_command_name;
	v->a[30627] = state(592);
	v->a[30628] = 1;
	v->a[30629] = sym_concatenation;
	v->a[30630] = state(638);
	v->a[30631] = 1;
	v->a[30632] = sym_variable_assignment;
	v->a[30633] = state(662);
	v->a[30634] = 1;
	v->a[30635] = aux_sym_command_repeat1;
	v->a[30636] = state(1220);
	v->a[30637] = 1;
	v->a[30638] = sym_subshell;
	v->a[30639] = state(1225);
	small_parse_table_1532(v);
}

void	small_parse_table_1532(t_small_parse_table_array *v)
{
	v->a[30640] = 1;
	v->a[30641] = sym_file_redirect;
	v->a[30642] = state(1230);
	v->a[30643] = 1;
	v->a[30644] = sym_command;
	v->a[30645] = actions(113);
	v->a[30646] = 3;
	v->a[30647] = sym_raw_string;
	v->a[30648] = sym_number;
	v->a[30649] = sym_word;
	v->a[30650] = state(359);
	v->a[30651] = 5;
	v->a[30652] = sym_arithmetic_expansion;
	v->a[30653] = sym_string;
	v->a[30654] = sym_simple_expansion;
	v->a[30655] = sym_expansion;
	v->a[30656] = sym_command_substitution;
	v->a[30657] = actions(1150);
	v->a[30658] = 7;
	v->a[30659] = anon_sym_LT;
	small_parse_table_1533(v);
}

void	small_parse_table_1533(t_small_parse_table_array *v)
{
	v->a[30660] = anon_sym_GT;
	v->a[30661] = anon_sym_GT_GT;
	v->a[30662] = anon_sym_LT_AMP;
	v->a[30663] = anon_sym_GT_AMP;
	v->a[30664] = anon_sym_GT_PIPE;
	v->a[30665] = anon_sym_LT_GT;
	v->a[30666] = 3;
	v->a[30667] = actions(3);
	v->a[30668] = 1;
	v->a[30669] = sym_comment;
	v->a[30670] = actions(662);
	v->a[30671] = 4;
	v->a[30672] = sym_file_descriptor;
	v->a[30673] = sym__concat;
	v->a[30674] = sym__bare_dollar;
	v->a[30675] = ts_builtin_sym_end;
	v->a[30676] = actions(660);
	v->a[30677] = 27;
	v->a[30678] = anon_sym_LPAREN;
	v->a[30679] = anon_sym_PIPE;
	small_parse_table_1534(v);
}

void	small_parse_table_1534(t_small_parse_table_array *v)
{
	v->a[30680] = anon_sym_SEMI_SEMI;
	v->a[30681] = anon_sym_AMP_AMP;
	v->a[30682] = anon_sym_PIPE_PIPE;
	v->a[30683] = anon_sym_LT;
	v->a[30684] = anon_sym_GT;
	v->a[30685] = anon_sym_GT_GT;
	v->a[30686] = anon_sym_LT_AMP;
	v->a[30687] = anon_sym_GT_AMP;
	v->a[30688] = anon_sym_GT_PIPE;
	v->a[30689] = anon_sym_LT_GT;
	v->a[30690] = anon_sym_LT_LT;
	v->a[30691] = anon_sym_LT_LT_DASH;
	v->a[30692] = aux_sym_heredoc_redirect_token1;
	v->a[30693] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30694] = anon_sym_AMP;
	v->a[30695] = aux_sym_concatenation_token1;
	v->a[30696] = anon_sym_DOLLAR;
	v->a[30697] = anon_sym_DQUOTE;
	v->a[30698] = sym_raw_string;
	v->a[30699] = sym_number;
	small_parse_table_1535(v);
}

/* EOF small_parse_table_306.c */
