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
	v->a[31700] = anon_sym_AMP;
	v->a[31701] = aux_sym_concatenation_token1;
	v->a[31702] = anon_sym_DOLLAR;
	v->a[31703] = anon_sym_DQUOTE;
	v->a[31704] = sym_raw_string;
	v->a[31705] = sym_number;
	v->a[31706] = anon_sym_DOLLAR_LBRACE;
	v->a[31707] = anon_sym_DOLLAR_LPAREN;
	v->a[31708] = anon_sym_BQUOTE;
	v->a[31709] = sym_word;
	v->a[31710] = anon_sym_SEMI;
	v->a[31711] = 20;
	v->a[31712] = actions(3);
	v->a[31713] = 1;
	v->a[31714] = sym_comment;
	v->a[31715] = actions(17);
	v->a[31716] = 1;
	v->a[31717] = anon_sym_LPAREN;
	v->a[31718] = actions(55);
	v->a[31719] = 1;
	small_parse_table_1586(v);
}

void	small_parse_table_1586(t_small_parse_table_array *v)
{
	v->a[31720] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31721] = actions(57);
	v->a[31722] = 1;
	v->a[31723] = anon_sym_DOLLAR;
	v->a[31724] = actions(59);
	v->a[31725] = 1;
	v->a[31726] = anon_sym_DQUOTE;
	v->a[31727] = actions(63);
	v->a[31728] = 1;
	v->a[31729] = anon_sym_DOLLAR_LBRACE;
	v->a[31730] = actions(65);
	v->a[31731] = 1;
	v->a[31732] = anon_sym_DOLLAR_LPAREN;
	v->a[31733] = actions(67);
	v->a[31734] = 1;
	v->a[31735] = anon_sym_BQUOTE;
	v->a[31736] = actions(71);
	v->a[31737] = 1;
	v->a[31738] = sym_variable_name;
	v->a[31739] = actions(1152);
	small_parse_table_1587(v);
}

void	small_parse_table_1587(t_small_parse_table_array *v)
{
	v->a[31740] = 1;
	v->a[31741] = sym_file_descriptor;
	v->a[31742] = state(179);
	v->a[31743] = 1;
	v->a[31744] = sym_command_name;
	v->a[31745] = state(603);
	v->a[31746] = 1;
	v->a[31747] = sym_concatenation;
	v->a[31748] = state(658);
	v->a[31749] = 1;
	v->a[31750] = aux_sym_command_repeat1;
	v->a[31751] = state(755);
	v->a[31752] = 1;
	v->a[31753] = sym_variable_assignment;
	v->a[31754] = state(1096);
	v->a[31755] = 1;
	v->a[31756] = sym_subshell;
	v->a[31757] = state(1097);
	v->a[31758] = 1;
	v->a[31759] = sym_command;
	small_parse_table_1588(v);
}

void	small_parse_table_1588(t_small_parse_table_array *v)
{
	v->a[31760] = state(1225);
	v->a[31761] = 1;
	v->a[31762] = sym_file_redirect;
	v->a[31763] = actions(61);
	v->a[31764] = 3;
	v->a[31765] = sym_raw_string;
	v->a[31766] = sym_number;
	v->a[31767] = sym_word;
	v->a[31768] = state(436);
	v->a[31769] = 5;
	v->a[31770] = sym_arithmetic_expansion;
	v->a[31771] = sym_string;
	v->a[31772] = sym_simple_expansion;
	v->a[31773] = sym_expansion;
	v->a[31774] = sym_command_substitution;
	v->a[31775] = actions(1150);
	v->a[31776] = 7;
	v->a[31777] = anon_sym_LT;
	v->a[31778] = anon_sym_GT;
	v->a[31779] = anon_sym_GT_GT;
	small_parse_table_1589(v);
}

void	small_parse_table_1589(t_small_parse_table_array *v)
{
	v->a[31780] = anon_sym_LT_AMP;
	v->a[31781] = anon_sym_GT_AMP;
	v->a[31782] = anon_sym_GT_PIPE;
	v->a[31783] = anon_sym_LT_GT;
	v->a[31784] = 3;
	v->a[31785] = actions(3);
	v->a[31786] = 1;
	v->a[31787] = sym_comment;
	v->a[31788] = actions(795);
	v->a[31789] = 4;
	v->a[31790] = sym_file_descriptor;
	v->a[31791] = sym__concat;
	v->a[31792] = sym__bare_dollar;
	v->a[31793] = ts_builtin_sym_end;
	v->a[31794] = actions(793);
	v->a[31795] = 27;
	v->a[31796] = anon_sym_LPAREN;
	v->a[31797] = anon_sym_PIPE;
	v->a[31798] = anon_sym_SEMI_SEMI;
	v->a[31799] = anon_sym_AMP_AMP;
	small_parse_table_1590(v);
}

/* EOF small_parse_table_317.c */
