/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_446.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2230(t_small_parse_table_array *v)
{
	v->a[44600] = actions(1253);
	v->a[44601] = 5;
	v->a[44602] = sym_file_descriptor;
	v->a[44603] = sym_variable_name;
	v->a[44604] = sym_test_operator;
	v->a[44605] = sym__brace_start;
	v->a[44606] = aux_sym_heredoc_redirect_token1;
	v->a[44607] = actions(1251);
	v->a[44608] = 40;
	v->a[44609] = anon_sym_LPAREN_LPAREN;
	v->a[44610] = anon_sym_SEMI;
	v->a[44611] = anon_sym_PIPE_PIPE;
	v->a[44612] = anon_sym_AMP_AMP;
	v->a[44613] = anon_sym_PIPE;
	v->a[44614] = anon_sym_AMP;
	v->a[44615] = anon_sym_LT;
	v->a[44616] = anon_sym_GT;
	v->a[44617] = anon_sym_LT_LT;
	v->a[44618] = anon_sym_GT_GT;
	v->a[44619] = anon_sym_esac;
	small_parse_table_2231(v);
}

void	small_parse_table_2231(t_small_parse_table_array *v)
{
	v->a[44620] = anon_sym_SEMI_SEMI;
	v->a[44621] = anon_sym_SEMI_AMP;
	v->a[44622] = anon_sym_SEMI_SEMI_AMP;
	v->a[44623] = anon_sym_PIPE_AMP;
	v->a[44624] = anon_sym_AMP_GT;
	v->a[44625] = anon_sym_AMP_GT_GT;
	v->a[44626] = anon_sym_LT_AMP;
	v->a[44627] = anon_sym_GT_AMP;
	v->a[44628] = anon_sym_GT_PIPE;
	v->a[44629] = anon_sym_LT_AMP_DASH;
	v->a[44630] = anon_sym_GT_AMP_DASH;
	v->a[44631] = anon_sym_LT_LT_DASH;
	v->a[44632] = anon_sym_LT_LT_LT;
	v->a[44633] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44634] = anon_sym_DOLLAR_LBRACK;
	v->a[44635] = anon_sym_DOLLAR;
	v->a[44636] = sym__special_character;
	v->a[44637] = anon_sym_DQUOTE;
	v->a[44638] = sym_raw_string;
	v->a[44639] = sym_ansi_c_string;
	small_parse_table_2232(v);
}

void	small_parse_table_2232(t_small_parse_table_array *v)
{
	v->a[44640] = aux_sym_number_token1;
	v->a[44641] = aux_sym_number_token2;
	v->a[44642] = anon_sym_DOLLAR_LBRACE;
	v->a[44643] = anon_sym_DOLLAR_LPAREN;
	v->a[44644] = anon_sym_BQUOTE;
	v->a[44645] = anon_sym_DOLLAR_BQUOTE;
	v->a[44646] = anon_sym_LT_LPAREN;
	v->a[44647] = anon_sym_GT_LPAREN;
	v->a[44648] = sym_word;
	v->a[44649] = 7;
	v->a[44650] = actions(3);
	v->a[44651] = 1;
	v->a[44652] = sym_comment;
	v->a[44653] = actions(4699);
	v->a[44654] = 1;
	v->a[44655] = aux_sym_concatenation_token1;
	v->a[44656] = actions(4701);
	v->a[44657] = 1;
	v->a[44658] = sym__concat;
	v->a[44659] = actions(5242);
	small_parse_table_2233(v);
}

void	small_parse_table_2233(t_small_parse_table_array *v)
{
	v->a[44660] = 1;
	v->a[44661] = anon_sym_LPAREN;
	v->a[44662] = state(1054);
	v->a[44663] = 1;
	v->a[44664] = aux_sym_concatenation_repeat1;
	v->a[44665] = actions(1281);
	v->a[44666] = 5;
	v->a[44667] = sym_file_descriptor;
	v->a[44668] = sym_test_operator;
	v->a[44669] = sym__bare_dollar;
	v->a[44670] = sym__brace_start;
	v->a[44671] = aux_sym_heredoc_redirect_token1;
	v->a[44672] = actions(1271);
	v->a[44673] = 39;
	v->a[44674] = anon_sym_LPAREN_LPAREN;
	v->a[44675] = anon_sym_SEMI;
	v->a[44676] = anon_sym_PIPE_PIPE;
	v->a[44677] = anon_sym_AMP_AMP;
	v->a[44678] = anon_sym_PIPE;
	v->a[44679] = anon_sym_AMP;
	small_parse_table_2234(v);
}

void	small_parse_table_2234(t_small_parse_table_array *v)
{
	v->a[44680] = anon_sym_EQ_EQ;
	v->a[44681] = anon_sym_LT;
	v->a[44682] = anon_sym_GT;
	v->a[44683] = anon_sym_LT_LT;
	v->a[44684] = anon_sym_GT_GT;
	v->a[44685] = anon_sym_SEMI_SEMI;
	v->a[44686] = anon_sym_PIPE_AMP;
	v->a[44687] = anon_sym_EQ_TILDE;
	v->a[44688] = anon_sym_AMP_GT;
	v->a[44689] = anon_sym_AMP_GT_GT;
	v->a[44690] = anon_sym_LT_AMP;
	v->a[44691] = anon_sym_GT_AMP;
	v->a[44692] = anon_sym_GT_PIPE;
	v->a[44693] = anon_sym_LT_AMP_DASH;
	v->a[44694] = anon_sym_GT_AMP_DASH;
	v->a[44695] = anon_sym_LT_LT_DASH;
	v->a[44696] = anon_sym_LT_LT_LT;
	v->a[44697] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44698] = anon_sym_DOLLAR_LBRACK;
	v->a[44699] = anon_sym_DOLLAR;
	small_parse_table_2235(v);
}

/* EOF small_parse_table_446.c */
