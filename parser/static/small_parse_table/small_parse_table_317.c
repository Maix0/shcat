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
	v->a[31700] = actions(1061);
	v->a[31701] = 1;
	v->a[31702] = anon_sym_CARET;
	v->a[31703] = actions(1063);
	v->a[31704] = 1;
	v->a[31705] = anon_sym_AMP;
	v->a[31706] = actions(1073);
	v->a[31707] = 1;
	v->a[31708] = anon_sym_QMARK;
	v->a[31709] = actions(1152);
	v->a[31710] = 1;
	v->a[31711] = anon_sym_EQ;
	v->a[31712] = actions(1178);
	v->a[31713] = 1;
	v->a[31714] = anon_sym_RPAREN;
	v->a[31715] = actions(1057);
	v->a[31716] = 2;
	v->a[31717] = anon_sym_LT;
	v->a[31718] = anon_sym_GT;
	v->a[31719] = actions(1059);
	small_parse_table_1586(v);
}

void	small_parse_table_1586(t_small_parse_table_array *v)
{
	v->a[31720] = 2;
	v->a[31721] = anon_sym_GT_GT;
	v->a[31722] = anon_sym_LT_LT;
	v->a[31723] = actions(1065);
	v->a[31724] = 2;
	v->a[31725] = anon_sym_EQ_EQ;
	v->a[31726] = anon_sym_BANG_EQ;
	v->a[31727] = actions(1067);
	v->a[31728] = 2;
	v->a[31729] = anon_sym_LT_EQ;
	v->a[31730] = anon_sym_GT_EQ;
	v->a[31731] = actions(1069);
	v->a[31732] = 2;
	v->a[31733] = anon_sym_PLUS;
	v->a[31734] = anon_sym_DASH;
	v->a[31735] = actions(1075);
	v->a[31736] = 2;
	v->a[31737] = anon_sym_PLUS_PLUS2;
	v->a[31738] = anon_sym_DASH_DASH2;
	v->a[31739] = actions(1071);
	small_parse_table_1587(v);
}

void	small_parse_table_1587(t_small_parse_table_array *v)
{
	v->a[31740] = 3;
	v->a[31741] = anon_sym_STAR;
	v->a[31742] = anon_sym_SLASH;
	v->a[31743] = anon_sym_PERCENT;
	v->a[31744] = actions(1180);
	v->a[31745] = 10;
	v->a[31746] = anon_sym_PLUS_EQ;
	v->a[31747] = anon_sym_DASH_EQ;
	v->a[31748] = anon_sym_STAR_EQ;
	v->a[31749] = anon_sym_SLASH_EQ;
	v->a[31750] = anon_sym_PERCENT_EQ;
	v->a[31751] = anon_sym_LT_LT_EQ;
	v->a[31752] = anon_sym_GT_GT_EQ;
	v->a[31753] = anon_sym_AMP_EQ;
	v->a[31754] = anon_sym_CARET_EQ;
	v->a[31755] = anon_sym_PIPE_EQ;
	v->a[31756] = 7;
	v->a[31757] = actions(3);
	v->a[31758] = 1;
	v->a[31759] = sym_comment;
	small_parse_table_1588(v);
}

void	small_parse_table_1588(t_small_parse_table_array *v)
{
	v->a[31760] = actions(1083);
	v->a[31761] = 1;
	v->a[31762] = aux_sym_concatenation_token1;
	v->a[31763] = actions(1182);
	v->a[31764] = 1;
	v->a[31765] = anon_sym_LPAREN;
	v->a[31766] = actions(1185);
	v->a[31767] = 1;
	v->a[31768] = sym__concat;
	v->a[31769] = state(316);
	v->a[31770] = 1;
	v->a[31771] = aux_sym_concatenation_repeat1;
	v->a[31772] = actions(1095);
	v->a[31773] = 2;
	v->a[31774] = sym_file_descriptor;
	v->a[31775] = sym__bare_dollar;
	v->a[31776] = actions(1097);
	v->a[31777] = 27;
	v->a[31778] = anon_sym_PIPE;
	v->a[31779] = anon_sym_RPAREN;
	small_parse_table_1589(v);
}

void	small_parse_table_1589(t_small_parse_table_array *v)
{
	v->a[31780] = anon_sym_SEMI_SEMI;
	v->a[31781] = anon_sym_AMP_AMP;
	v->a[31782] = anon_sym_PIPE_PIPE;
	v->a[31783] = anon_sym_LT;
	v->a[31784] = anon_sym_GT;
	v->a[31785] = anon_sym_GT_GT;
	v->a[31786] = anon_sym_LT_AMP;
	v->a[31787] = anon_sym_GT_AMP;
	v->a[31788] = anon_sym_GT_PIPE;
	v->a[31789] = anon_sym_LT_AMP_DASH;
	v->a[31790] = anon_sym_GT_AMP_DASH;
	v->a[31791] = anon_sym_LT_LT;
	v->a[31792] = anon_sym_LT_LT_DASH;
	v->a[31793] = aux_sym_heredoc_redirect_token1;
	v->a[31794] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31795] = anon_sym_AMP;
	v->a[31796] = anon_sym_DOLLAR;
	v->a[31797] = anon_sym_DQUOTE;
	v->a[31798] = sym_raw_string;
	v->a[31799] = sym_number;
	small_parse_table_1590(v);
}

/* EOF small_parse_table_317.c */
