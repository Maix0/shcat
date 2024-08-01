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
	v->a[31700] = actions(1042);
	v->a[31701] = 1;
	v->a[31702] = anon_sym_BQUOTE;
	v->a[31703] = actions(1044);
	v->a[31704] = 1;
	v->a[31705] = sym_variable_name;
	v->a[31706] = actions(1040);
	v->a[31707] = 19;
	v->a[31708] = anon_sym_for;
	v->a[31709] = anon_sym_while;
	v->a[31710] = anon_sym_until;
	v->a[31711] = anon_sym_if;
	v->a[31712] = anon_sym_case;
	v->a[31713] = anon_sym_LPAREN;
	v->a[31714] = anon_sym_LBRACE;
	v->a[31715] = anon_sym_BANG;
	v->a[31716] = anon_sym_LT;
	v->a[31717] = anon_sym_GT;
	v->a[31718] = anon_sym_GT_GT;
	v->a[31719] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1586(v);
}

void	small_parse_table_1586(t_small_parse_table_array *v)
{
	v->a[31720] = anon_sym_DOLLAR;
	v->a[31721] = anon_sym_DQUOTE;
	v->a[31722] = sym_raw_string;
	v->a[31723] = sym_number;
	v->a[31724] = anon_sym_DOLLAR_LBRACE;
	v->a[31725] = anon_sym_DOLLAR_LPAREN;
	v->a[31726] = sym_word;
	v->a[31727] = 3;
	v->a[31728] = actions(3);
	v->a[31729] = 1;
	v->a[31730] = sym_comment;
	v->a[31731] = actions(841);
	v->a[31732] = 1;
	v->a[31733] = sym__bare_dollar;
	v->a[31734] = actions(833);
	v->a[31735] = 20;
	v->a[31736] = anon_sym_PIPE;
	v->a[31737] = anon_sym_RPAREN;
	v->a[31738] = anon_sym_SEMI_SEMI;
	v->a[31739] = anon_sym_AMP_AMP;
	small_parse_table_1587(v);
}

void	small_parse_table_1587(t_small_parse_table_array *v)
{
	v->a[31740] = anon_sym_PIPE_PIPE;
	v->a[31741] = anon_sym_LT;
	v->a[31742] = anon_sym_GT;
	v->a[31743] = anon_sym_GT_GT;
	v->a[31744] = anon_sym_LT_LT;
	v->a[31745] = aux_sym_heredoc_redirect_token1;
	v->a[31746] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31747] = anon_sym_DOLLAR;
	v->a[31748] = anon_sym_DQUOTE;
	v->a[31749] = sym_raw_string;
	v->a[31750] = sym_number;
	v->a[31751] = anon_sym_DOLLAR_LBRACE;
	v->a[31752] = anon_sym_DOLLAR_LPAREN;
	v->a[31753] = anon_sym_BQUOTE;
	v->a[31754] = sym_word;
	v->a[31755] = anon_sym_SEMI;
	v->a[31756] = 6;
	v->a[31757] = actions(3);
	v->a[31758] = 1;
	v->a[31759] = sym_comment;
	small_parse_table_1588(v);
}

void	small_parse_table_1588(t_small_parse_table_array *v)
{
	v->a[31760] = actions(1257);
	v->a[31761] = 1;
	v->a[31762] = sym_variable_name;
	v->a[31763] = actions(1301);
	v->a[31764] = 1;
	v->a[31765] = ts_builtin_sym_end;
	v->a[31766] = actions(1254);
	v->a[31767] = 3;
	v->a[31768] = anon_sym_LT;
	v->a[31769] = anon_sym_GT;
	v->a[31770] = anon_sym_GT_GT;
	v->a[31771] = actions(1249);
	v->a[31772] = 7;
	v->a[31773] = anon_sym_PIPE;
	v->a[31774] = anon_sym_SEMI_SEMI;
	v->a[31775] = anon_sym_AMP_AMP;
	v->a[31776] = anon_sym_PIPE_PIPE;
	v->a[31777] = anon_sym_LT_LT;
	v->a[31778] = aux_sym_heredoc_redirect_token1;
	v->a[31779] = anon_sym_SEMI;
	small_parse_table_1589(v);
}

void	small_parse_table_1589(t_small_parse_table_array *v)
{
	v->a[31780] = actions(1247);
	v->a[31781] = 9;
	v->a[31782] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31783] = anon_sym_DOLLAR;
	v->a[31784] = anon_sym_DQUOTE;
	v->a[31785] = sym_raw_string;
	v->a[31786] = sym_number;
	v->a[31787] = anon_sym_DOLLAR_LBRACE;
	v->a[31788] = anon_sym_DOLLAR_LPAREN;
	v->a[31789] = anon_sym_BQUOTE;
	v->a[31790] = sym_word;
	v->a[31791] = 4;
	v->a[31792] = actions(3);
	v->a[31793] = 1;
	v->a[31794] = sym_comment;
	v->a[31795] = actions(1278);
	v->a[31796] = 1;
	v->a[31797] = sym_variable_name;
	v->a[31798] = actions(576);
	v->a[31799] = 9;
	small_parse_table_1590(v);
}

/* EOF small_parse_table_317.c */
