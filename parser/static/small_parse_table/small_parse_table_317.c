/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_317.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1585(t_small_parse_table_array *v)
{
	v->a[31700] = 3;
	v->a[31701] = sym_file_descriptor;
	v->a[31702] = sym_variable_name;
	v->a[31703] = ts_builtin_sym_end;
	v->a[31704] = actions(1172);
	v->a[31705] = 28;
	v->a[31706] = anon_sym_PIPE;
	v->a[31707] = anon_sym_SEMI_SEMI;
	v->a[31708] = anon_sym_AMP_AMP;
	v->a[31709] = anon_sym_PIPE_PIPE;
	v->a[31710] = anon_sym_LT;
	v->a[31711] = anon_sym_GT;
	v->a[31712] = anon_sym_GT_GT;
	v->a[31713] = anon_sym_AMP_GT;
	v->a[31714] = anon_sym_AMP_GT_GT;
	v->a[31715] = anon_sym_LT_AMP;
	v->a[31716] = anon_sym_GT_AMP;
	v->a[31717] = anon_sym_GT_PIPE;
	v->a[31718] = anon_sym_LT_AMP_DASH;
	v->a[31719] = anon_sym_GT_AMP_DASH;
	small_parse_table_1586(v);
}

void	small_parse_table_1586(t_small_parse_table_array *v)
{
	v->a[31720] = anon_sym_LT_LT;
	v->a[31721] = anon_sym_LT_LT_DASH;
	v->a[31722] = aux_sym_heredoc_redirect_token1;
	v->a[31723] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31724] = anon_sym_AMP;
	v->a[31725] = anon_sym_DOLLAR;
	v->a[31726] = anon_sym_DQUOTE;
	v->a[31727] = sym_raw_string;
	v->a[31728] = sym_number;
	v->a[31729] = anon_sym_DOLLAR_LBRACE;
	v->a[31730] = anon_sym_DOLLAR_LPAREN;
	v->a[31731] = anon_sym_BQUOTE;
	v->a[31732] = sym_word;
	v->a[31733] = anon_sym_SEMI;
	v->a[31734] = 5;
	v->a[31735] = actions(3);
	v->a[31736] = 1;
	v->a[31737] = sym_comment;
	v->a[31738] = actions(548);
	v->a[31739] = 2;
	small_parse_table_1587(v);
}

void	small_parse_table_1587(t_small_parse_table_array *v)
{
	v->a[31740] = sym_file_descriptor;
	v->a[31741] = sym_variable_name;
	v->a[31742] = state(383);
	v->a[31743] = 2;
	v->a[31744] = sym_concatenation;
	v->a[31745] = aux_sym_for_statement_repeat1;
	v->a[31746] = state(795);
	v->a[31747] = 5;
	v->a[31748] = sym_arithmetic_expansion;
	v->a[31749] = sym_string;
	v->a[31750] = sym_simple_expansion;
	v->a[31751] = sym_expansion;
	v->a[31752] = sym_command_substitution;
	v->a[31753] = actions(546);
	v->a[31754] = 25;
	v->a[31755] = anon_sym_PIPE;
	v->a[31756] = anon_sym_AMP_AMP;
	v->a[31757] = anon_sym_PIPE_PIPE;
	v->a[31758] = anon_sym_LT;
	v->a[31759] = anon_sym_GT;
	small_parse_table_1588(v);
}

void	small_parse_table_1588(t_small_parse_table_array *v)
{
	v->a[31760] = anon_sym_GT_GT;
	v->a[31761] = anon_sym_AMP_GT;
	v->a[31762] = anon_sym_AMP_GT_GT;
	v->a[31763] = anon_sym_LT_AMP;
	v->a[31764] = anon_sym_GT_AMP;
	v->a[31765] = anon_sym_GT_PIPE;
	v->a[31766] = anon_sym_LT_AMP_DASH;
	v->a[31767] = anon_sym_GT_AMP_DASH;
	v->a[31768] = anon_sym_LT_LT;
	v->a[31769] = anon_sym_LT_LT_DASH;
	v->a[31770] = aux_sym_heredoc_redirect_token1;
	v->a[31771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31772] = anon_sym_DOLLAR;
	v->a[31773] = anon_sym_DQUOTE;
	v->a[31774] = sym_raw_string;
	v->a[31775] = sym_number;
	v->a[31776] = anon_sym_DOLLAR_LBRACE;
	v->a[31777] = anon_sym_DOLLAR_LPAREN;
	v->a[31778] = anon_sym_BQUOTE;
	v->a[31779] = sym_word;
	small_parse_table_1589(v);
}

void	small_parse_table_1589(t_small_parse_table_array *v)
{
	v->a[31780] = 6;
	v->a[31781] = actions(3);
	v->a[31782] = 1;
	v->a[31783] = sym_comment;
	v->a[31784] = actions(1219);
	v->a[31785] = 1;
	v->a[31786] = aux_sym_concatenation_token1;
	v->a[31787] = actions(1222);
	v->a[31788] = 1;
	v->a[31789] = sym__concat;
	v->a[31790] = state(379);
	v->a[31791] = 1;
	v->a[31792] = aux_sym_concatenation_repeat1;
	v->a[31793] = actions(988);
	v->a[31794] = 2;
	v->a[31795] = sym_file_descriptor;
	v->a[31796] = sym__bare_dollar;
	v->a[31797] = actions(983);
	v->a[31798] = 29;
	v->a[31799] = anon_sym_esac;
	small_parse_table_1590(v);
}

/* EOF small_parse_table_317.c */
