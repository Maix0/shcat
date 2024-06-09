/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_267.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1335(t_small_parse_table_array *v)
{
	v->a[26700] = anon_sym_LT;
	v->a[26701] = anon_sym_GT;
	v->a[26702] = anon_sym_GT_GT;
	v->a[26703] = anon_sym_AMP_GT;
	v->a[26704] = anon_sym_AMP_GT_GT;
	v->a[26705] = anon_sym_LT_AMP;
	v->a[26706] = anon_sym_GT_AMP;
	v->a[26707] = anon_sym_GT_PIPE;
	v->a[26708] = anon_sym_LT_AMP_DASH;
	v->a[26709] = anon_sym_GT_AMP_DASH;
	v->a[26710] = anon_sym_LT_LT;
	v->a[26711] = anon_sym_LT_LT_DASH;
	v->a[26712] = aux_sym_heredoc_redirect_token1;
	v->a[26713] = anon_sym_AMP;
	v->a[26714] = anon_sym_BQUOTE;
	v->a[26715] = anon_sym_SEMI;
	v->a[26716] = 22;
	v->a[26717] = actions(3);
	v->a[26718] = 1;
	v->a[26719] = sym_comment;
	small_parse_table_1336(v);
}

void	small_parse_table_1336(t_small_parse_table_array *v)
{
	v->a[26720] = actions(933);
	v->a[26721] = 1;
	v->a[26722] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26723] = actions(935);
	v->a[26724] = 1;
	v->a[26725] = anon_sym_DOLLAR;
	v->a[26726] = actions(937);
	v->a[26727] = 1;
	v->a[26728] = anon_sym_DQUOTE;
	v->a[26729] = actions(939);
	v->a[26730] = 1;
	v->a[26731] = aux_sym_number_token1;
	v->a[26732] = actions(941);
	v->a[26733] = 1;
	v->a[26734] = aux_sym_number_token2;
	v->a[26735] = actions(943);
	v->a[26736] = 1;
	v->a[26737] = anon_sym_DOLLAR_LBRACE;
	v->a[26738] = actions(945);
	v->a[26739] = 1;
	small_parse_table_1337(v);
}

void	small_parse_table_1337(t_small_parse_table_array *v)
{
	v->a[26740] = anon_sym_DOLLAR_LPAREN;
	v->a[26741] = actions(947);
	v->a[26742] = 1;
	v->a[26743] = anon_sym_BQUOTE;
	v->a[26744] = actions(949);
	v->a[26745] = 1;
	v->a[26746] = sym_file_descriptor;
	v->a[26747] = actions(998);
	v->a[26748] = 1;
	v->a[26749] = aux_sym_heredoc_redirect_token1;
	v->a[26750] = state(1332);
	v->a[26751] = 1;
	v->a[26752] = aux_sym__heredoc_command;
	v->a[26753] = state(1832);
	v->a[26754] = 1;
	v->a[26755] = sym_concatenation;
	v->a[26756] = state(2155);
	v->a[26757] = 1;
	v->a[26758] = sym__heredoc_expression;
	v->a[26759] = state(2156);
	small_parse_table_1338(v);
}

void	small_parse_table_1338(t_small_parse_table_array *v)
{
	v->a[26760] = 1;
	v->a[26761] = sym__heredoc_pipeline;
	v->a[26762] = actions(921);
	v->a[26763] = 2;
	v->a[26764] = sym_raw_string;
	v->a[26765] = sym_word;
	v->a[26766] = actions(923);
	v->a[26767] = 2;
	v->a[26768] = anon_sym_PIPE;
	v->a[26769] = anon_sym_PIPE_AMP;
	v->a[26770] = actions(925);
	v->a[26771] = 2;
	v->a[26772] = anon_sym_AMP_AMP;
	v->a[26773] = anon_sym_PIPE_PIPE;
	v->a[26774] = actions(929);
	v->a[26775] = 2;
	v->a[26776] = anon_sym_LT_AMP_DASH;
	v->a[26777] = anon_sym_GT_AMP_DASH;
	v->a[26778] = state(1513);
	v->a[26779] = 2;
	small_parse_table_1339(v);
}

void	small_parse_table_1339(t_small_parse_table_array *v)
{
	v->a[26780] = sym_file_redirect;
	v->a[26781] = aux_sym_redirected_statement_repeat2;
	v->a[26782] = state(1614);
	v->a[26783] = 6;
	v->a[26784] = sym_arithmetic_expansion;
	v->a[26785] = sym_string;
	v->a[26786] = sym_number;
	v->a[26787] = sym_simple_expansion;
	v->a[26788] = sym_expansion;
	v->a[26789] = sym_command_substitution;
	v->a[26790] = actions(927);
	v->a[26791] = 8;
	v->a[26792] = anon_sym_LT;
	v->a[26793] = anon_sym_GT;
	v->a[26794] = anon_sym_GT_GT;
	v->a[26795] = anon_sym_AMP_GT;
	v->a[26796] = anon_sym_AMP_GT_GT;
	v->a[26797] = anon_sym_LT_AMP;
	v->a[26798] = anon_sym_GT_AMP;
	v->a[26799] = anon_sym_GT_PIPE;
	small_parse_table_1340(v);
}

/* EOF small_parse_table_267.c */
