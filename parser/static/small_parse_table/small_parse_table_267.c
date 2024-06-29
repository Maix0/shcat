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
	v->a[26700] = actions(766);
	v->a[26701] = 1;
	v->a[26702] = anon_sym_PIPE;
	v->a[26703] = actions(774);
	v->a[26704] = 1;
	v->a[26705] = sym_file_descriptor;
	v->a[26706] = actions(895);
	v->a[26707] = 1;
	v->a[26708] = sym_variable_name;
	v->a[26709] = state(825);
	v->a[26710] = 1;
	v->a[26711] = sym_terminator;
	v->a[26712] = actions(804);
	v->a[26713] = 2;
	v->a[26714] = anon_sym_LT_LT;
	v->a[26715] = anon_sym_LT_LT_DASH;
	v->a[26716] = actions(893);
	v->a[26717] = 2;
	v->a[26718] = anon_sym_AMP_AMP;
	v->a[26719] = anon_sym_PIPE_PIPE;
	small_parse_table_1336(v);
}

void	small_parse_table_1336(t_small_parse_table_array *v)
{
	v->a[26720] = state(1270);
	v->a[26721] = 2;
	v->a[26722] = sym_variable_assignment;
	v->a[26723] = aux_sym__variable_assignments_repeat1;
	v->a[26724] = state(1256);
	v->a[26725] = 3;
	v->a[26726] = sym_file_redirect;
	v->a[26727] = sym_heredoc_redirect;
	v->a[26728] = aux_sym_redirected_statement_repeat1;
	v->a[26729] = actions(800);
	v->a[26730] = 4;
	v->a[26731] = anon_sym_SEMI_SEMI;
	v->a[26732] = aux_sym_heredoc_redirect_token1;
	v->a[26733] = anon_sym_AMP;
	v->a[26734] = anon_sym_SEMI;
	v->a[26735] = actions(762);
	v->a[26736] = 19;
	v->a[26737] = anon_sym_LT;
	v->a[26738] = anon_sym_GT;
	v->a[26739] = anon_sym_GT_GT;
	small_parse_table_1337(v);
}

void	small_parse_table_1337(t_small_parse_table_array *v)
{
	v->a[26740] = anon_sym_AMP_GT;
	v->a[26741] = anon_sym_AMP_GT_GT;
	v->a[26742] = anon_sym_LT_AMP;
	v->a[26743] = anon_sym_GT_AMP;
	v->a[26744] = anon_sym_GT_PIPE;
	v->a[26745] = anon_sym_LT_AMP_DASH;
	v->a[26746] = anon_sym_GT_AMP_DASH;
	v->a[26747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26748] = anon_sym_DOLLAR;
	v->a[26749] = anon_sym_DQUOTE;
	v->a[26750] = sym_raw_string;
	v->a[26751] = sym_number;
	v->a[26752] = anon_sym_DOLLAR_LBRACE;
	v->a[26753] = anon_sym_DOLLAR_LPAREN;
	v->a[26754] = anon_sym_BQUOTE;
	v->a[26755] = sym_word;
	v->a[26756] = 20;
	v->a[26757] = actions(3);
	v->a[26758] = 1;
	v->a[26759] = sym_comment;
	small_parse_table_1338(v);
}

void	small_parse_table_1338(t_small_parse_table_array *v)
{
	v->a[26760] = actions(859);
	v->a[26761] = 1;
	v->a[26762] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26763] = actions(861);
	v->a[26764] = 1;
	v->a[26765] = anon_sym_DOLLAR;
	v->a[26766] = actions(863);
	v->a[26767] = 1;
	v->a[26768] = anon_sym_DQUOTE;
	v->a[26769] = actions(865);
	v->a[26770] = 1;
	v->a[26771] = anon_sym_DOLLAR_LBRACE;
	v->a[26772] = actions(867);
	v->a[26773] = 1;
	v->a[26774] = anon_sym_DOLLAR_LPAREN;
	v->a[26775] = actions(869);
	v->a[26776] = 1;
	v->a[26777] = anon_sym_BQUOTE;
	v->a[26778] = actions(871);
	v->a[26779] = 1;
	small_parse_table_1339(v);
}

void	small_parse_table_1339(t_small_parse_table_array *v)
{
	v->a[26780] = sym_file_descriptor;
	v->a[26781] = actions(947);
	v->a[26782] = 1;
	v->a[26783] = aux_sym_heredoc_redirect_token1;
	v->a[26784] = state(1491);
	v->a[26785] = 1;
	v->a[26786] = aux_sym__heredoc_command;
	v->a[26787] = state(1953);
	v->a[26788] = 1;
	v->a[26789] = sym_concatenation;
	v->a[26790] = state(2155);
	v->a[26791] = 1;
	v->a[26792] = sym__heredoc_pipeline;
	v->a[26793] = state(2156);
	v->a[26794] = 1;
	v->a[26795] = sym__heredoc_expression;
	v->a[26796] = actions(849);
	v->a[26797] = 2;
	v->a[26798] = anon_sym_PIPE;
	v->a[26799] = anon_sym_PIPE_AMP;
	small_parse_table_1340(v);
}

/* EOF small_parse_table_267.c */
