/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_415.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2075(t_small_parse_table_array *v)
{
	v->a[41500] = anon_sym_LT_LPAREN;
	v->a[41501] = anon_sym_GT_LPAREN;
	v->a[41502] = sym_word;
	v->a[41503] = 12;
	v->a[41504] = actions(3);
	v->a[41505] = 1;
	v->a[41506] = sym_comment;
	v->a[41507] = actions(5101);
	v->a[41508] = 1;
	v->a[41509] = aux_sym_heredoc_redirect_token1;
	v->a[41510] = actions(5103);
	v->a[41511] = 1;
	v->a[41512] = sym_variable_name;
	v->a[41513] = state(6727);
	v->a[41514] = 1;
	v->a[41515] = sym_subscript;
	v->a[41516] = actions(4253);
	v->a[41517] = 2;
	v->a[41518] = anon_sym_PIPE;
	v->a[41519] = anon_sym_PIPE_AMP;
	small_parse_table_2076(v);
}

void	small_parse_table_2076(t_small_parse_table_array *v)
{
	v->a[41520] = actions(4692);
	v->a[41521] = 2;
	v->a[41522] = anon_sym_LT_LT;
	v->a[41523] = anon_sym_LT_LT_DASH;
	v->a[41524] = actions(5099);
	v->a[41525] = 2;
	v->a[41526] = anon_sym_PIPE_PIPE;
	v->a[41527] = anon_sym_AMP_AMP;
	v->a[41528] = state(4787);
	v->a[41529] = 2;
	v->a[41530] = sym_variable_assignment;
	v->a[41531] = aux_sym_variable_assignments_repeat1;
	v->a[41532] = actions(4261);
	v->a[41533] = 3;
	v->a[41534] = sym_file_descriptor;
	v->a[41535] = sym_test_operator;
	v->a[41536] = sym__brace_start;
	v->a[41537] = actions(5097);
	v->a[41538] = 3;
	v->a[41539] = anon_sym_SEMI;
	small_parse_table_2077(v);
}

void	small_parse_table_2077(t_small_parse_table_array *v)
{
	v->a[41540] = anon_sym_AMP;
	v->a[41541] = anon_sym_SEMI_SEMI;
	v->a[41542] = state(4986);
	v->a[41543] = 3;
	v->a[41544] = sym_file_redirect;
	v->a[41545] = sym_heredoc_redirect;
	v->a[41546] = aux_sym_redirected_statement_repeat1;
	v->a[41547] = actions(4247);
	v->a[41548] = 28;
	v->a[41549] = anon_sym_LPAREN_LPAREN;
	v->a[41550] = anon_sym_LT;
	v->a[41551] = anon_sym_GT;
	v->a[41552] = anon_sym_GT_GT;
	v->a[41553] = anon_sym_AMP_GT;
	v->a[41554] = anon_sym_AMP_GT_GT;
	v->a[41555] = anon_sym_LT_AMP;
	v->a[41556] = anon_sym_GT_AMP;
	v->a[41557] = anon_sym_GT_PIPE;
	v->a[41558] = anon_sym_LT_AMP_DASH;
	v->a[41559] = anon_sym_GT_AMP_DASH;
	small_parse_table_2078(v);
}

void	small_parse_table_2078(t_small_parse_table_array *v)
{
	v->a[41560] = anon_sym_LT_LT_LT;
	v->a[41561] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41562] = anon_sym_DOLLAR_LBRACK;
	v->a[41563] = anon_sym_DOLLAR;
	v->a[41564] = sym__special_character;
	v->a[41565] = anon_sym_DQUOTE;
	v->a[41566] = sym_raw_string;
	v->a[41567] = sym_ansi_c_string;
	v->a[41568] = aux_sym_number_token1;
	v->a[41569] = aux_sym_number_token2;
	v->a[41570] = anon_sym_DOLLAR_LBRACE;
	v->a[41571] = anon_sym_DOLLAR_LPAREN;
	v->a[41572] = anon_sym_BQUOTE;
	v->a[41573] = anon_sym_DOLLAR_BQUOTE;
	v->a[41574] = anon_sym_LT_LPAREN;
	v->a[41575] = anon_sym_GT_LPAREN;
	v->a[41576] = sym_word;
	v->a[41577] = 3;
	v->a[41578] = actions(3);
	v->a[41579] = 1;
	small_parse_table_2079(v);
}

void	small_parse_table_2079(t_small_parse_table_array *v)
{
	v->a[41580] = sym_comment;
	v->a[41581] = actions(1354);
	v->a[41582] = 7;
	v->a[41583] = sym_file_descriptor;
	v->a[41584] = sym__concat;
	v->a[41585] = sym_test_operator;
	v->a[41586] = sym__bare_dollar;
	v->a[41587] = sym__brace_start;
	v->a[41588] = ts_builtin_sym_end;
	v->a[41589] = aux_sym_heredoc_redirect_token1;
	v->a[41590] = actions(1352);
	v->a[41591] = 41;
	v->a[41592] = anon_sym_LPAREN_LPAREN;
	v->a[41593] = anon_sym_SEMI;
	v->a[41594] = anon_sym_PIPE_PIPE;
	v->a[41595] = anon_sym_AMP_AMP;
	v->a[41596] = anon_sym_PIPE;
	v->a[41597] = anon_sym_AMP;
	v->a[41598] = anon_sym_EQ_EQ;
	v->a[41599] = anon_sym_LT;
	small_parse_table_2080(v);
}

/* EOF small_parse_table_415.c */
