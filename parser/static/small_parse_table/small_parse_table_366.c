/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_366.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1830(t_small_parse_table_array *v)
{
	v->a[36600] = anon_sym_PERCENT_EQ;
	v->a[36601] = anon_sym_LT_LT_EQ;
	v->a[36602] = anon_sym_GT_GT_EQ;
	v->a[36603] = anon_sym_AMP_EQ;
	v->a[36604] = anon_sym_CARET_EQ;
	v->a[36605] = anon_sym_PIPE_EQ;
	v->a[36606] = 6;
	v->a[36607] = actions(3);
	v->a[36608] = 1;
	v->a[36609] = sym_comment;
	v->a[36610] = actions(961);
	v->a[36611] = 1;
	v->a[36612] = sym_file_descriptor;
	v->a[36613] = actions(1320);
	v->a[36614] = 1;
	v->a[36615] = aux_sym_concatenation_token1;
	v->a[36616] = actions(1322);
	v->a[36617] = 1;
	v->a[36618] = sym__concat;
	v->a[36619] = state(446);
	small_parse_table_1831(v);
}

void	small_parse_table_1831(t_small_parse_table_array *v)
{
	v->a[36620] = 1;
	v->a[36621] = aux_sym_concatenation_repeat1;
	v->a[36622] = actions(957);
	v->a[36623] = 29;
	v->a[36624] = anon_sym_PIPE;
	v->a[36625] = anon_sym_RPAREN;
	v->a[36626] = anon_sym_SEMI_SEMI;
	v->a[36627] = anon_sym_AMP_AMP;
	v->a[36628] = anon_sym_PIPE_PIPE;
	v->a[36629] = anon_sym_LT;
	v->a[36630] = anon_sym_GT;
	v->a[36631] = anon_sym_GT_GT;
	v->a[36632] = anon_sym_AMP_GT;
	v->a[36633] = anon_sym_AMP_GT_GT;
	v->a[36634] = anon_sym_LT_AMP;
	v->a[36635] = anon_sym_GT_AMP;
	v->a[36636] = anon_sym_GT_PIPE;
	v->a[36637] = anon_sym_LT_AMP_DASH;
	v->a[36638] = anon_sym_GT_AMP_DASH;
	v->a[36639] = anon_sym_LT_LT;
	small_parse_table_1832(v);
}

void	small_parse_table_1832(t_small_parse_table_array *v)
{
	v->a[36640] = anon_sym_LT_LT_DASH;
	v->a[36641] = aux_sym_heredoc_redirect_token1;
	v->a[36642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36643] = anon_sym_AMP;
	v->a[36644] = anon_sym_DOLLAR;
	v->a[36645] = anon_sym_DQUOTE;
	v->a[36646] = sym_raw_string;
	v->a[36647] = sym_number;
	v->a[36648] = anon_sym_DOLLAR_LBRACE;
	v->a[36649] = anon_sym_DOLLAR_LPAREN;
	v->a[36650] = anon_sym_BQUOTE;
	v->a[36651] = sym_word;
	v->a[36652] = anon_sym_SEMI;
	v->a[36653] = 17;
	v->a[36654] = actions(1074);
	v->a[36655] = 1;
	v->a[36656] = sym_comment;
	v->a[36657] = actions(1136);
	v->a[36658] = 1;
	v->a[36659] = anon_sym_PIPE;
	small_parse_table_1833(v);
}

void	small_parse_table_1833(t_small_parse_table_array *v)
{
	v->a[36660] = actions(1138);
	v->a[36661] = 1;
	v->a[36662] = anon_sym_AMP_AMP;
	v->a[36663] = actions(1140);
	v->a[36664] = 1;
	v->a[36665] = anon_sym_PIPE_PIPE;
	v->a[36666] = actions(1150);
	v->a[36667] = 1;
	v->a[36668] = anon_sym_CARET;
	v->a[36669] = actions(1152);
	v->a[36670] = 1;
	v->a[36671] = anon_sym_AMP;
	v->a[36672] = actions(1239);
	v->a[36673] = 1;
	v->a[36674] = anon_sym_EQ;
	v->a[36675] = actions(1241);
	v->a[36676] = 1;
	v->a[36677] = anon_sym_QMARK;
	v->a[36678] = actions(1324);
	v->a[36679] = 1;
	small_parse_table_1834(v);
}

void	small_parse_table_1834(t_small_parse_table_array *v)
{
	v->a[36680] = anon_sym_RPAREN_RPAREN;
	v->a[36681] = actions(1144);
	v->a[36682] = 2;
	v->a[36683] = anon_sym_LT;
	v->a[36684] = anon_sym_GT;
	v->a[36685] = actions(1146);
	v->a[36686] = 2;
	v->a[36687] = anon_sym_GT_GT;
	v->a[36688] = anon_sym_LT_LT;
	v->a[36689] = actions(1154);
	v->a[36690] = 2;
	v->a[36691] = anon_sym_EQ_EQ;
	v->a[36692] = anon_sym_BANG_EQ;
	v->a[36693] = actions(1156);
	v->a[36694] = 2;
	v->a[36695] = anon_sym_LT_EQ;
	v->a[36696] = anon_sym_GT_EQ;
	v->a[36697] = actions(1158);
	v->a[36698] = 2;
	v->a[36699] = anon_sym_PLUS;
	small_parse_table_1835(v);
}

/* EOF small_parse_table_366.c */
