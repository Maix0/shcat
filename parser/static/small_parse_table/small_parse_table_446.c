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
	v->a[44600] = anon_sym_until;
	v->a[44601] = anon_sym_if;
	v->a[44602] = anon_sym_fi;
	v->a[44603] = anon_sym_elif;
	v->a[44604] = anon_sym_else;
	v->a[44605] = anon_sym_case;
	v->a[44606] = anon_sym_LPAREN;
	v->a[44607] = anon_sym_LBRACE;
	v->a[44608] = anon_sym_BANG;
	v->a[44609] = anon_sym_LT;
	v->a[44610] = anon_sym_GT;
	v->a[44611] = anon_sym_GT_GT;
	v->a[44612] = anon_sym_AMP_GT;
	v->a[44613] = anon_sym_AMP_GT_GT;
	v->a[44614] = anon_sym_LT_AMP;
	v->a[44615] = anon_sym_GT_AMP;
	v->a[44616] = anon_sym_GT_PIPE;
	v->a[44617] = anon_sym_LT_AMP_DASH;
	v->a[44618] = anon_sym_GT_AMP_DASH;
	v->a[44619] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2231(v);
}

void	small_parse_table_2231(t_small_parse_table_array *v)
{
	v->a[44620] = anon_sym_DOLLAR;
	v->a[44621] = anon_sym_DQUOTE;
	v->a[44622] = sym_raw_string;
	v->a[44623] = sym_number;
	v->a[44624] = anon_sym_DOLLAR_LBRACE;
	v->a[44625] = anon_sym_DOLLAR_LPAREN;
	v->a[44626] = anon_sym_BQUOTE;
	v->a[44627] = sym_word;
	v->a[44628] = 6;
	v->a[44629] = actions(3);
	v->a[44630] = 1;
	v->a[44631] = sym_comment;
	v->a[44632] = actions(1219);
	v->a[44633] = 1;
	v->a[44634] = sym_file_descriptor;
	v->a[44635] = actions(1344);
	v->a[44636] = 1;
	v->a[44637] = aux_sym_concatenation_token1;
	v->a[44638] = actions(1494);
	v->a[44639] = 1;
	small_parse_table_2232(v);
}

void	small_parse_table_2232(t_small_parse_table_array *v)
{
	v->a[44640] = sym__concat;
	v->a[44641] = state(632);
	v->a[44642] = 1;
	v->a[44643] = aux_sym_concatenation_repeat1;
	v->a[44644] = actions(1215);
	v->a[44645] = 28;
	v->a[44646] = anon_sym_PIPE;
	v->a[44647] = anon_sym_SEMI_SEMI;
	v->a[44648] = anon_sym_AMP_AMP;
	v->a[44649] = anon_sym_PIPE_PIPE;
	v->a[44650] = anon_sym_LT;
	v->a[44651] = anon_sym_GT;
	v->a[44652] = anon_sym_GT_GT;
	v->a[44653] = anon_sym_AMP_GT;
	v->a[44654] = anon_sym_AMP_GT_GT;
	v->a[44655] = anon_sym_LT_AMP;
	v->a[44656] = anon_sym_GT_AMP;
	v->a[44657] = anon_sym_GT_PIPE;
	v->a[44658] = anon_sym_LT_AMP_DASH;
	v->a[44659] = anon_sym_GT_AMP_DASH;
	small_parse_table_2233(v);
}

void	small_parse_table_2233(t_small_parse_table_array *v)
{
	v->a[44660] = anon_sym_LT_LT;
	v->a[44661] = anon_sym_LT_LT_DASH;
	v->a[44662] = aux_sym_heredoc_redirect_token1;
	v->a[44663] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44664] = anon_sym_AMP;
	v->a[44665] = anon_sym_DOLLAR;
	v->a[44666] = anon_sym_DQUOTE;
	v->a[44667] = sym_raw_string;
	v->a[44668] = sym_number;
	v->a[44669] = anon_sym_DOLLAR_LBRACE;
	v->a[44670] = anon_sym_DOLLAR_LPAREN;
	v->a[44671] = anon_sym_BQUOTE;
	v->a[44672] = sym_word;
	v->a[44673] = anon_sym_SEMI;
	v->a[44674] = 3;
	v->a[44675] = actions(3);
	v->a[44676] = 1;
	v->a[44677] = sym_comment;
	v->a[44678] = actions(991);
	v->a[44679] = 2;
	small_parse_table_2234(v);
}

void	small_parse_table_2234(t_small_parse_table_array *v)
{
	v->a[44680] = sym_file_descriptor;
	v->a[44681] = sym__bare_dollar;
	v->a[44682] = actions(984);
	v->a[44683] = 30;
	v->a[44684] = anon_sym_LPAREN;
	v->a[44685] = anon_sym_PIPE;
	v->a[44686] = anon_sym_RPAREN;
	v->a[44687] = anon_sym_SEMI_SEMI;
	v->a[44688] = anon_sym_AMP_AMP;
	v->a[44689] = anon_sym_PIPE_PIPE;
	v->a[44690] = anon_sym_LT;
	v->a[44691] = anon_sym_GT;
	v->a[44692] = anon_sym_GT_GT;
	v->a[44693] = anon_sym_AMP_GT;
	v->a[44694] = anon_sym_AMP_GT_GT;
	v->a[44695] = anon_sym_LT_AMP;
	v->a[44696] = anon_sym_GT_AMP;
	v->a[44697] = anon_sym_GT_PIPE;
	v->a[44698] = anon_sym_LT_AMP_DASH;
	v->a[44699] = anon_sym_GT_AMP_DASH;
	small_parse_table_2235(v);
}

/* EOF small_parse_table_446.c */
