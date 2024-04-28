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
	v->a[26700] = sym_test_operator;
	v->a[26701] = sym__bare_dollar;
	v->a[26702] = sym__brace_start;
	v->a[26703] = aux_sym_heredoc_redirect_token1;
	v->a[26704] = actions(1271);
	v->a[26705] = 43;
	v->a[26706] = anon_sym_LPAREN_LPAREN;
	v->a[26707] = anon_sym_SEMI;
	v->a[26708] = anon_sym_PIPE_PIPE;
	v->a[26709] = anon_sym_AMP_AMP;
	v->a[26710] = anon_sym_PIPE;
	v->a[26711] = anon_sym_AMP;
	v->a[26712] = anon_sym_EQ_EQ;
	v->a[26713] = anon_sym_LT;
	v->a[26714] = anon_sym_GT;
	v->a[26715] = anon_sym_LT_LT;
	v->a[26716] = anon_sym_GT_GT;
	v->a[26717] = anon_sym_LPAREN;
	v->a[26718] = anon_sym_esac;
	v->a[26719] = anon_sym_SEMI_SEMI;
	small_parse_table_1336(v);
}

void	small_parse_table_1336(t_small_parse_table_array *v)
{
	v->a[26720] = anon_sym_SEMI_AMP;
	v->a[26721] = anon_sym_SEMI_SEMI_AMP;
	v->a[26722] = anon_sym_PIPE_AMP;
	v->a[26723] = anon_sym_EQ_TILDE;
	v->a[26724] = anon_sym_AMP_GT;
	v->a[26725] = anon_sym_AMP_GT_GT;
	v->a[26726] = anon_sym_LT_AMP;
	v->a[26727] = anon_sym_GT_AMP;
	v->a[26728] = anon_sym_GT_PIPE;
	v->a[26729] = anon_sym_LT_AMP_DASH;
	v->a[26730] = anon_sym_GT_AMP_DASH;
	v->a[26731] = anon_sym_LT_LT_DASH;
	v->a[26732] = anon_sym_LT_LT_LT;
	v->a[26733] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26734] = anon_sym_DOLLAR_LBRACK;
	v->a[26735] = anon_sym_DOLLAR;
	v->a[26736] = sym__special_character;
	v->a[26737] = anon_sym_DQUOTE;
	v->a[26738] = sym_raw_string;
	v->a[26739] = sym_ansi_c_string;
	small_parse_table_1337(v);
}

void	small_parse_table_1337(t_small_parse_table_array *v)
{
	v->a[26740] = aux_sym_number_token1;
	v->a[26741] = aux_sym_number_token2;
	v->a[26742] = anon_sym_DOLLAR_LBRACE;
	v->a[26743] = anon_sym_DOLLAR_LPAREN;
	v->a[26744] = anon_sym_BQUOTE;
	v->a[26745] = anon_sym_DOLLAR_BQUOTE;
	v->a[26746] = anon_sym_LT_LPAREN;
	v->a[26747] = anon_sym_GT_LPAREN;
	v->a[26748] = sym_word;
	v->a[26749] = 6;
	v->a[26750] = actions(3);
	v->a[26751] = 1;
	v->a[26752] = sym_comment;
	v->a[26753] = state(1744);
	v->a[26754] = 1;
	v->a[26755] = aux_sym__literal_repeat1;
	v->a[26756] = state(811);
	v->a[26757] = 2;
	v->a[26758] = sym_concatenation;
	v->a[26759] = aux_sym_for_statement_repeat1;
	small_parse_table_1338(v);
}

void	small_parse_table_1338(t_small_parse_table_array *v)
{
	v->a[26760] = actions(2096);
	v->a[26761] = 5;
	v->a[26762] = sym_file_descriptor;
	v->a[26763] = sym_variable_name;
	v->a[26764] = sym_test_operator;
	v->a[26765] = sym__brace_start;
	v->a[26766] = aux_sym_heredoc_redirect_token1;
	v->a[26767] = state(2337);
	v->a[26768] = 9;
	v->a[26769] = sym_arithmetic_expansion;
	v->a[26770] = sym_brace_expression;
	v->a[26771] = sym_string;
	v->a[26772] = sym_translated_string;
	v->a[26773] = sym_number;
	v->a[26774] = sym_simple_expansion;
	v->a[26775] = sym_expansion;
	v->a[26776] = sym_command_substitution;
	v->a[26777] = sym_process_substitution;
	v->a[26778] = actions(2094);
	v->a[26779] = 34;
	small_parse_table_1339(v);
}

void	small_parse_table_1339(t_small_parse_table_array *v)
{
	v->a[26780] = anon_sym_LPAREN_LPAREN;
	v->a[26781] = anon_sym_PIPE_PIPE;
	v->a[26782] = anon_sym_AMP_AMP;
	v->a[26783] = anon_sym_PIPE;
	v->a[26784] = anon_sym_LT;
	v->a[26785] = anon_sym_GT;
	v->a[26786] = anon_sym_LT_LT;
	v->a[26787] = anon_sym_GT_GT;
	v->a[26788] = anon_sym_PIPE_AMP;
	v->a[26789] = anon_sym_AMP_GT;
	v->a[26790] = anon_sym_AMP_GT_GT;
	v->a[26791] = anon_sym_LT_AMP;
	v->a[26792] = anon_sym_GT_AMP;
	v->a[26793] = anon_sym_GT_PIPE;
	v->a[26794] = anon_sym_LT_AMP_DASH;
	v->a[26795] = anon_sym_GT_AMP_DASH;
	v->a[26796] = anon_sym_LT_LT_DASH;
	v->a[26797] = anon_sym_LT_LT_LT;
	v->a[26798] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26799] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_1340(v);
}

/* EOF small_parse_table_267.c */
