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
	v->a[26700] = anon_sym_PIPE_PIPE;
	v->a[26701] = anon_sym_LT;
	v->a[26702] = anon_sym_GT;
	v->a[26703] = anon_sym_GT_GT;
	v->a[26704] = anon_sym_LT_AMP;
	v->a[26705] = anon_sym_GT_AMP;
	v->a[26706] = anon_sym_GT_PIPE;
	v->a[26707] = anon_sym_LT_GT;
	v->a[26708] = anon_sym_LT_LT;
	v->a[26709] = anon_sym_LT_LT_DASH;
	v->a[26710] = aux_sym_heredoc_redirect_token1;
	v->a[26711] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26712] = anon_sym_DOLLAR;
	v->a[26713] = anon_sym_DQUOTE;
	v->a[26714] = sym_raw_string;
	v->a[26715] = sym_number;
	v->a[26716] = anon_sym_DOLLAR_LBRACE;
	v->a[26717] = anon_sym_DOLLAR_LPAREN;
	v->a[26718] = anon_sym_BQUOTE;
	v->a[26719] = sym_word;
	small_parse_table_1336(v);
}

void	small_parse_table_1336(t_small_parse_table_array *v)
{
	v->a[26720] = anon_sym_SEMI;
	v->a[26721] = 13;
	v->a[26722] = actions(3);
	v->a[26723] = 1;
	v->a[26724] = sym_comment;
	v->a[26725] = actions(325);
	v->a[26726] = 1;
	v->a[26727] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26728] = actions(327);
	v->a[26729] = 1;
	v->a[26730] = anon_sym_DOLLAR;
	v->a[26731] = actions(329);
	v->a[26732] = 1;
	v->a[26733] = anon_sym_DQUOTE;
	v->a[26734] = actions(333);
	v->a[26735] = 1;
	v->a[26736] = anon_sym_DOLLAR_LBRACE;
	v->a[26737] = actions(335);
	v->a[26738] = 1;
	v->a[26739] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1337(v);
}

void	small_parse_table_1337(t_small_parse_table_array *v)
{
	v->a[26740] = actions(337);
	v->a[26741] = 1;
	v->a[26742] = anon_sym_BQUOTE;
	v->a[26743] = actions(1075);
	v->a[26744] = 1;
	v->a[26745] = sym__bare_dollar;
	v->a[26746] = state(335);
	v->a[26747] = 1;
	v->a[26748] = aux_sym_command_repeat2;
	v->a[26749] = state(750);
	v->a[26750] = 1;
	v->a[26751] = sym_concatenation;
	v->a[26752] = actions(1073);
	v->a[26753] = 3;
	v->a[26754] = sym_raw_string;
	v->a[26755] = sym_number;
	v->a[26756] = sym_word;
	v->a[26757] = state(630);
	v->a[26758] = 5;
	v->a[26759] = sym_arithmetic_expansion;
	small_parse_table_1338(v);
}

void	small_parse_table_1338(t_small_parse_table_array *v)
{
	v->a[26760] = sym_string;
	v->a[26761] = sym_simple_expansion;
	v->a[26762] = sym_expansion;
	v->a[26763] = sym_command_substitution;
	v->a[26764] = actions(565);
	v->a[26765] = 12;
	v->a[26766] = anon_sym_PIPE;
	v->a[26767] = anon_sym_AMP_AMP;
	v->a[26768] = anon_sym_PIPE_PIPE;
	v->a[26769] = anon_sym_LT;
	v->a[26770] = anon_sym_GT;
	v->a[26771] = anon_sym_GT_GT;
	v->a[26772] = anon_sym_LT_AMP;
	v->a[26773] = anon_sym_GT_AMP;
	v->a[26774] = anon_sym_GT_PIPE;
	v->a[26775] = anon_sym_LT_GT;
	v->a[26776] = anon_sym_LT_LT;
	v->a[26777] = anon_sym_LT_LT_DASH;
	v->a[26778] = 6;
	v->a[26779] = actions(3);
	small_parse_table_1339(v);
}

void	small_parse_table_1339(t_small_parse_table_array *v)
{
	v->a[26780] = 1;
	v->a[26781] = sym_comment;
	v->a[26782] = actions(979);
	v->a[26783] = 1;
	v->a[26784] = aux_sym_concatenation_token1;
	v->a[26785] = actions(981);
	v->a[26786] = 1;
	v->a[26787] = sym__concat;
	v->a[26788] = state(348);
	v->a[26789] = 1;
	v->a[26790] = aux_sym_concatenation_repeat1;
	v->a[26791] = actions(1077);
	v->a[26792] = 2;
	v->a[26793] = sym__bare_dollar;
	v->a[26794] = ts_builtin_sym_end;
	v->a[26795] = actions(1079);
	v->a[26796] = 24;
	v->a[26797] = anon_sym_PIPE;
	v->a[26798] = anon_sym_SEMI_SEMI;
	v->a[26799] = anon_sym_AMP_AMP;
	small_parse_table_1340(v);
}

/* EOF small_parse_table_267.c */
