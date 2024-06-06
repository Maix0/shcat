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
	v->a[26700] = 1;
	v->a[26701] = aux_sym_number_token2;
	v->a[26702] = actions(3278);
	v->a[26703] = 1;
	v->a[26704] = anon_sym_DOLLAR_LBRACE;
	v->a[26705] = actions(3280);
	v->a[26706] = 1;
	v->a[26707] = anon_sym_DOLLAR_LPAREN;
	v->a[26708] = actions(3282);
	v->a[26709] = 1;
	v->a[26710] = anon_sym_BQUOTE;
	v->a[26711] = actions(3284);
	v->a[26712] = 1;
	v->a[26713] = anon_sym_DOLLAR_BQUOTE;
	v->a[26714] = actions(3286);
	v->a[26715] = 1;
	v->a[26716] = sym__brace_start;
	v->a[26717] = state(1679);
	v->a[26718] = 1;
	v->a[26719] = aux_sym__literal_repeat1;
	small_parse_table_1336(v);
}

void	small_parse_table_1336(t_small_parse_table_array *v)
{
	v->a[26720] = actions(3272);
	v->a[26721] = 2;
	v->a[26722] = sym_test_operator;
	v->a[26723] = sym_raw_string;
	v->a[26724] = state(630);
	v->a[26725] = 2;
	v->a[26726] = sym_concatenation;
	v->a[26727] = aux_sym_for_statement_repeat1;
	v->a[26728] = actions(1180);
	v->a[26729] = 7;
	v->a[26730] = anon_sym_PIPE;
	v->a[26731] = anon_sym_LT;
	v->a[26732] = anon_sym_GT;
	v->a[26733] = anon_sym_AMP_GT;
	v->a[26734] = anon_sym_LT_AMP;
	v->a[26735] = anon_sym_GT_AMP;
	v->a[26736] = anon_sym_LT_LT;
	v->a[26737] = state(1566);
	v->a[26738] = 7;
	v->a[26739] = sym_arithmetic_expansion;
	small_parse_table_1337(v);
}

void	small_parse_table_1337(t_small_parse_table_array *v)
{
	v->a[26740] = sym_brace_expression;
	v->a[26741] = sym_string;
	v->a[26742] = sym_number;
	v->a[26743] = sym_simple_expansion;
	v->a[26744] = sym_expansion;
	v->a[26745] = sym_command_substitution;
	v->a[26746] = actions(1182);
	v->a[26747] = 10;
	v->a[26748] = sym_file_descriptor;
	v->a[26749] = anon_sym_PIPE_AMP;
	v->a[26750] = anon_sym_AMP_AMP;
	v->a[26751] = anon_sym_PIPE_PIPE;
	v->a[26752] = anon_sym_GT_GT;
	v->a[26753] = anon_sym_AMP_GT_GT;
	v->a[26754] = anon_sym_GT_PIPE;
	v->a[26755] = anon_sym_LT_AMP_DASH;
	v->a[26756] = anon_sym_GT_AMP_DASH;
	v->a[26757] = anon_sym_LT_LT_DASH;
	v->a[26758] = 3;
	v->a[26759] = actions(3);
	small_parse_table_1338(v);
}

void	small_parse_table_1338(t_small_parse_table_array *v)
{
	v->a[26760] = 1;
	v->a[26761] = sym_comment;
	v->a[26762] = actions(3034);
	v->a[26763] = 6;
	v->a[26764] = sym_file_descriptor;
	v->a[26765] = sym__concat;
	v->a[26766] = sym_test_operator;
	v->a[26767] = sym__bare_dollar;
	v->a[26768] = sym__brace_start;
	v->a[26769] = aux_sym_heredoc_redirect_token1;
	v->a[26770] = actions(3032);
	v->a[26771] = 35;
	v->a[26772] = anon_sym_LPAREN;
	v->a[26773] = anon_sym_PIPE;
	v->a[26774] = anon_sym_SEMI_SEMI;
	v->a[26775] = anon_sym_SEMI_AMP;
	v->a[26776] = anon_sym_SEMI_SEMI_AMP;
	v->a[26777] = anon_sym_PIPE_AMP;
	v->a[26778] = anon_sym_AMP_AMP;
	v->a[26779] = anon_sym_PIPE_PIPE;
	small_parse_table_1339(v);
}

void	small_parse_table_1339(t_small_parse_table_array *v)
{
	v->a[26780] = anon_sym_LT;
	v->a[26781] = anon_sym_GT;
	v->a[26782] = anon_sym_GT_GT;
	v->a[26783] = anon_sym_AMP_GT;
	v->a[26784] = anon_sym_AMP_GT_GT;
	v->a[26785] = anon_sym_LT_AMP;
	v->a[26786] = anon_sym_GT_AMP;
	v->a[26787] = anon_sym_GT_PIPE;
	v->a[26788] = anon_sym_LT_AMP_DASH;
	v->a[26789] = anon_sym_GT_AMP_DASH;
	v->a[26790] = anon_sym_LT_LT;
	v->a[26791] = anon_sym_LT_LT_DASH;
	v->a[26792] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26793] = anon_sym_AMP;
	v->a[26794] = aux_sym_concatenation_token1;
	v->a[26795] = anon_sym_DOLLAR;
	v->a[26796] = sym__special_character;
	v->a[26797] = anon_sym_DQUOTE;
	v->a[26798] = sym_raw_string;
	v->a[26799] = aux_sym_number_token1;
	small_parse_table_1340(v);
}

/* EOF small_parse_table_267.c */
