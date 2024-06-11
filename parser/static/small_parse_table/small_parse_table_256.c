/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_256.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1280(t_small_parse_table_array *v)
{
	v->a[25600] = anon_sym_GT_PIPE;
	v->a[25601] = anon_sym_LT_AMP_DASH;
	v->a[25602] = anon_sym_GT_AMP_DASH;
	v->a[25603] = anon_sym_LT_LT;
	v->a[25604] = anon_sym_LT_LT_DASH;
	v->a[25605] = aux_sym_heredoc_redirect_token1;
	v->a[25606] = anon_sym_AMP;
	v->a[25607] = anon_sym_SEMI;
	v->a[25608] = 11;
	v->a[25609] = actions(3);
	v->a[25610] = 1;
	v->a[25611] = sym_comment;
	v->a[25612] = actions(807);
	v->a[25613] = 1;
	v->a[25614] = anon_sym_PIPE;
	v->a[25615] = actions(811);
	v->a[25616] = 1;
	v->a[25617] = sym_file_descriptor;
	v->a[25618] = actions(813);
	v->a[25619] = 1;
	small_parse_table_1281(v);
}

void	small_parse_table_1281(t_small_parse_table_array *v)
{
	v->a[25620] = sym_variable_name;
	v->a[25621] = actions(930);
	v->a[25622] = 1;
	v->a[25623] = ts_builtin_sym_end;
	v->a[25624] = actions(861);
	v->a[25625] = 2;
	v->a[25626] = anon_sym_LT_LT;
	v->a[25627] = anon_sym_LT_LT_DASH;
	v->a[25628] = actions(934);
	v->a[25629] = 2;
	v->a[25630] = anon_sym_AMP_AMP;
	v->a[25631] = anon_sym_PIPE_PIPE;
	v->a[25632] = state(1285);
	v->a[25633] = 2;
	v->a[25634] = sym_variable_assignment;
	v->a[25635] = aux_sym_variable_assignments_repeat1;
	v->a[25636] = state(1289);
	v->a[25637] = 3;
	v->a[25638] = sym_file_redirect;
	v->a[25639] = sym_heredoc_redirect;
	small_parse_table_1282(v);
}

void	small_parse_table_1282(t_small_parse_table_array *v)
{
	v->a[25640] = aux_sym_redirected_statement_repeat1;
	v->a[25641] = actions(932);
	v->a[25642] = 4;
	v->a[25643] = anon_sym_SEMI_SEMI;
	v->a[25644] = aux_sym_heredoc_redirect_token1;
	v->a[25645] = anon_sym_AMP;
	v->a[25646] = anon_sym_SEMI;
	v->a[25647] = actions(805);
	v->a[25648] = 19;
	v->a[25649] = anon_sym_LT;
	v->a[25650] = anon_sym_GT;
	v->a[25651] = anon_sym_GT_GT;
	v->a[25652] = anon_sym_AMP_GT;
	v->a[25653] = anon_sym_AMP_GT_GT;
	v->a[25654] = anon_sym_LT_AMP;
	v->a[25655] = anon_sym_GT_AMP;
	v->a[25656] = anon_sym_GT_PIPE;
	v->a[25657] = anon_sym_LT_AMP_DASH;
	v->a[25658] = anon_sym_GT_AMP_DASH;
	v->a[25659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1283(v);
}

void	small_parse_table_1283(t_small_parse_table_array *v)
{
	v->a[25660] = anon_sym_DOLLAR;
	v->a[25661] = anon_sym_DQUOTE;
	v->a[25662] = sym_raw_string;
	v->a[25663] = sym_number;
	v->a[25664] = anon_sym_DOLLAR_LBRACE;
	v->a[25665] = anon_sym_DOLLAR_LPAREN;
	v->a[25666] = anon_sym_BQUOTE;
	v->a[25667] = sym_word;
	v->a[25668] = 12;
	v->a[25669] = actions(3);
	v->a[25670] = 1;
	v->a[25671] = sym_comment;
	v->a[25672] = actions(559);
	v->a[25673] = 1;
	v->a[25674] = sym_file_descriptor;
	v->a[25675] = actions(764);
	v->a[25676] = 1;
	v->a[25677] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25678] = actions(767);
	v->a[25679] = 1;
	small_parse_table_1284(v);
}

void	small_parse_table_1284(t_small_parse_table_array *v)
{
	v->a[25680] = anon_sym_DOLLAR;
	v->a[25681] = actions(770);
	v->a[25682] = 1;
	v->a[25683] = anon_sym_DQUOTE;
	v->a[25684] = actions(773);
	v->a[25685] = 1;
	v->a[25686] = anon_sym_DOLLAR_LBRACE;
	v->a[25687] = actions(776);
	v->a[25688] = 1;
	v->a[25689] = anon_sym_DOLLAR_LPAREN;
	v->a[25690] = actions(779);
	v->a[25691] = 1;
	v->a[25692] = anon_sym_BQUOTE;
	v->a[25693] = state(260);
	v->a[25694] = 2;
	v->a[25695] = sym_concatenation;
	v->a[25696] = aux_sym_for_statement_repeat1;
	v->a[25697] = actions(936);
	v->a[25698] = 3;
	v->a[25699] = sym_raw_string;
	small_parse_table_1285(v);
}

/* EOF small_parse_table_256.c */
