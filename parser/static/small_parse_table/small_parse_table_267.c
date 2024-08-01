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
	v->a[26700] = anon_sym_SEMI;
	v->a[26701] = 3;
	v->a[26702] = actions(3);
	v->a[26703] = 1;
	v->a[26704] = sym_comment;
	v->a[26705] = actions(1083);
	v->a[26706] = 2;
	v->a[26707] = sym__concat;
	v->a[26708] = sym_variable_name;
	v->a[26709] = actions(1085);
	v->a[26710] = 21;
	v->a[26711] = anon_sym_PIPE;
	v->a[26712] = anon_sym_RPAREN;
	v->a[26713] = anon_sym_SEMI_SEMI;
	v->a[26714] = anon_sym_AMP_AMP;
	v->a[26715] = anon_sym_PIPE_PIPE;
	v->a[26716] = anon_sym_LT;
	v->a[26717] = anon_sym_GT;
	v->a[26718] = anon_sym_GT_GT;
	v->a[26719] = anon_sym_LT_LT;
	small_parse_table_1336(v);
}

void	small_parse_table_1336(t_small_parse_table_array *v)
{
	v->a[26720] = aux_sym_heredoc_redirect_token1;
	v->a[26721] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26722] = aux_sym_concatenation_token1;
	v->a[26723] = anon_sym_DOLLAR;
	v->a[26724] = anon_sym_DQUOTE;
	v->a[26725] = sym_raw_string;
	v->a[26726] = sym_number;
	v->a[26727] = anon_sym_DOLLAR_LBRACE;
	v->a[26728] = anon_sym_DOLLAR_LPAREN;
	v->a[26729] = anon_sym_BQUOTE;
	v->a[26730] = sym_word;
	v->a[26731] = anon_sym_SEMI;
	v->a[26732] = 15;
	v->a[26733] = actions(3);
	v->a[26734] = 1;
	v->a[26735] = sym_comment;
	v->a[26736] = actions(53);
	v->a[26737] = 1;
	v->a[26738] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26739] = actions(55);
	small_parse_table_1337(v);
}

void	small_parse_table_1337(t_small_parse_table_array *v)
{
	v->a[26740] = 1;
	v->a[26741] = anon_sym_DOLLAR;
	v->a[26742] = actions(57);
	v->a[26743] = 1;
	v->a[26744] = anon_sym_DQUOTE;
	v->a[26745] = actions(61);
	v->a[26746] = 1;
	v->a[26747] = anon_sym_DOLLAR_LBRACE;
	v->a[26748] = actions(63);
	v->a[26749] = 1;
	v->a[26750] = anon_sym_DOLLAR_LPAREN;
	v->a[26751] = actions(65);
	v->a[26752] = 1;
	v->a[26753] = anon_sym_BQUOTE;
	v->a[26754] = actions(341);
	v->a[26755] = 1;
	v->a[26756] = sym_variable_name;
	v->a[26757] = state(205);
	v->a[26758] = 1;
	v->a[26759] = sym_command_name;
	small_parse_table_1338(v);
}

void	small_parse_table_1338(t_small_parse_table_array *v)
{
	v->a[26760] = state(555);
	v->a[26761] = 1;
	v->a[26762] = sym_concatenation;
	v->a[26763] = state(1083);
	v->a[26764] = 1;
	v->a[26765] = sym_file_redirect;
	v->a[26766] = state(792);
	v->a[26767] = 2;
	v->a[26768] = sym_variable_assignment;
	v->a[26769] = aux_sym_command_repeat1;
	v->a[26770] = actions(59);
	v->a[26771] = 3;
	v->a[26772] = sym_raw_string;
	v->a[26773] = sym_number;
	v->a[26774] = sym_word;
	v->a[26775] = actions(758);
	v->a[26776] = 3;
	v->a[26777] = anon_sym_LT;
	v->a[26778] = anon_sym_GT;
	v->a[26779] = anon_sym_GT_GT;
	small_parse_table_1339(v);
}

void	small_parse_table_1339(t_small_parse_table_array *v)
{
	v->a[26780] = state(401);
	v->a[26781] = 5;
	v->a[26782] = sym_arithmetic_expansion;
	v->a[26783] = sym_string;
	v->a[26784] = sym_simple_expansion;
	v->a[26785] = sym_expansion;
	v->a[26786] = sym_command_substitution;
	v->a[26787] = 3;
	v->a[26788] = actions(3);
	v->a[26789] = 1;
	v->a[26790] = sym_comment;
	v->a[26791] = actions(1060);
	v->a[26792] = 2;
	v->a[26793] = sym__concat;
	v->a[26794] = sym__bare_dollar;
	v->a[26795] = actions(1058);
	v->a[26796] = 21;
	v->a[26797] = anon_sym_PIPE;
	v->a[26798] = anon_sym_RPAREN;
	v->a[26799] = anon_sym_SEMI_SEMI;
	small_parse_table_1340(v);
}

/* EOF small_parse_table_267.c */
