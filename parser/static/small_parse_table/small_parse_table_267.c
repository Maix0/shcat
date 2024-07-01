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
	v->a[26700] = anon_sym_EQ_EQ;
	v->a[26701] = anon_sym_BANG_EQ;
	v->a[26702] = anon_sym_LT_EQ;
	v->a[26703] = anon_sym_GT_EQ;
	v->a[26704] = anon_sym_QMARK;
	v->a[26705] = anon_sym_COLON;
	v->a[26706] = 11;
	v->a[26707] = actions(3);
	v->a[26708] = 1;
	v->a[26709] = sym_comment;
	v->a[26710] = actions(682);
	v->a[26711] = 1;
	v->a[26712] = anon_sym_PIPE;
	v->a[26713] = actions(690);
	v->a[26714] = 1;
	v->a[26715] = sym_file_descriptor;
	v->a[26716] = actions(926);
	v->a[26717] = 1;
	v->a[26718] = sym_variable_name;
	v->a[26719] = state(721);
	small_parse_table_1336(v);
}

void	small_parse_table_1336(t_small_parse_table_array *v)
{
	v->a[26720] = 1;
	v->a[26721] = sym_terminator;
	v->a[26722] = actions(754);
	v->a[26723] = 2;
	v->a[26724] = anon_sym_LT_LT;
	v->a[26725] = anon_sym_LT_LT_DASH;
	v->a[26726] = actions(924);
	v->a[26727] = 2;
	v->a[26728] = anon_sym_AMP_AMP;
	v->a[26729] = anon_sym_PIPE_PIPE;
	v->a[26730] = state(1298);
	v->a[26731] = 2;
	v->a[26732] = sym_variable_assignment;
	v->a[26733] = aux_sym__variable_assignments_repeat1;
	v->a[26734] = state(1268);
	v->a[26735] = 3;
	v->a[26736] = sym_file_redirect;
	v->a[26737] = sym_heredoc_redirect;
	v->a[26738] = aux_sym_redirected_statement_repeat1;
	v->a[26739] = actions(750);
	small_parse_table_1337(v);
}

void	small_parse_table_1337(t_small_parse_table_array *v)
{
	v->a[26740] = 4;
	v->a[26741] = anon_sym_SEMI_SEMI;
	v->a[26742] = aux_sym_heredoc_redirect_token1;
	v->a[26743] = anon_sym_AMP;
	v->a[26744] = anon_sym_SEMI;
	v->a[26745] = actions(678);
	v->a[26746] = 17;
	v->a[26747] = anon_sym_LT;
	v->a[26748] = anon_sym_GT;
	v->a[26749] = anon_sym_GT_GT;
	v->a[26750] = anon_sym_LT_AMP;
	v->a[26751] = anon_sym_GT_AMP;
	v->a[26752] = anon_sym_GT_PIPE;
	v->a[26753] = anon_sym_LT_AMP_DASH;
	v->a[26754] = anon_sym_GT_AMP_DASH;
	v->a[26755] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26756] = anon_sym_DOLLAR;
	v->a[26757] = anon_sym_DQUOTE;
	v->a[26758] = sym_raw_string;
	v->a[26759] = sym_number;
	small_parse_table_1338(v);
}

void	small_parse_table_1338(t_small_parse_table_array *v)
{
	v->a[26760] = anon_sym_DOLLAR_LBRACE;
	v->a[26761] = anon_sym_DOLLAR_LPAREN;
	v->a[26762] = anon_sym_BQUOTE;
	v->a[26763] = sym_word;
	v->a[26764] = 11;
	v->a[26765] = actions(3);
	v->a[26766] = 1;
	v->a[26767] = sym_comment;
	v->a[26768] = actions(682);
	v->a[26769] = 1;
	v->a[26770] = anon_sym_PIPE;
	v->a[26771] = actions(690);
	v->a[26772] = 1;
	v->a[26773] = sym_file_descriptor;
	v->a[26774] = actions(926);
	v->a[26775] = 1;
	v->a[26776] = sym_variable_name;
	v->a[26777] = state(886);
	v->a[26778] = 1;
	v->a[26779] = sym_terminator;
	small_parse_table_1339(v);
}

void	small_parse_table_1339(t_small_parse_table_array *v)
{
	v->a[26780] = actions(754);
	v->a[26781] = 2;
	v->a[26782] = anon_sym_LT_LT;
	v->a[26783] = anon_sym_LT_LT_DASH;
	v->a[26784] = actions(924);
	v->a[26785] = 2;
	v->a[26786] = anon_sym_AMP_AMP;
	v->a[26787] = anon_sym_PIPE_PIPE;
	v->a[26788] = state(1298);
	v->a[26789] = 2;
	v->a[26790] = sym_variable_assignment;
	v->a[26791] = aux_sym__variable_assignments_repeat1;
	v->a[26792] = state(1268);
	v->a[26793] = 3;
	v->a[26794] = sym_file_redirect;
	v->a[26795] = sym_heredoc_redirect;
	v->a[26796] = aux_sym_redirected_statement_repeat1;
	v->a[26797] = actions(750);
	v->a[26798] = 4;
	v->a[26799] = anon_sym_SEMI_SEMI;
	small_parse_table_1340(v);
}

/* EOF small_parse_table_267.c */
