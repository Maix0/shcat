/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_315.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1575(t_small_parse_table_array *v)
{
	v->a[31500] = 12;
	v->a[31501] = actions(3);
	v->a[31502] = 1;
	v->a[31503] = sym_comment;
	v->a[31504] = actions(1995);
	v->a[31505] = 1;
	v->a[31506] = anon_sym_BQUOTE;
	v->a[31507] = actions(3368);
	v->a[31508] = 1;
	v->a[31509] = sym_variable_name;
	v->a[31510] = actions(3403);
	v->a[31511] = 1;
	v->a[31512] = aux_sym_heredoc_redirect_token1;
	v->a[31513] = actions(2516);
	v->a[31514] = 2;
	v->a[31515] = anon_sym_PIPE;
	v->a[31516] = anon_sym_PIPE_AMP;
	v->a[31517] = actions(2945);
	v->a[31518] = 2;
	v->a[31519] = anon_sym_LT_LT;
	small_parse_table_1576(v);
}

void	small_parse_table_1576(t_small_parse_table_array *v)
{
	v->a[31520] = anon_sym_LT_LT_DASH;
	v->a[31521] = actions(3377);
	v->a[31522] = 2;
	v->a[31523] = anon_sym_AMP_AMP;
	v->a[31524] = anon_sym_PIPE_PIPE;
	v->a[31525] = state(2139);
	v->a[31526] = 2;
	v->a[31527] = sym_variable_assignment;
	v->a[31528] = aux_sym_variable_assignments_repeat1;
	v->a[31529] = actions(2526);
	v->a[31530] = 3;
	v->a[31531] = sym_file_descriptor;
	v->a[31532] = sym_test_operator;
	v->a[31533] = sym__brace_start;
	v->a[31534] = actions(3401);
	v->a[31535] = 3;
	v->a[31536] = anon_sym_SEMI_SEMI;
	v->a[31537] = anon_sym_AMP;
	v->a[31538] = anon_sym_SEMI;
	v->a[31539] = state(2140);
	small_parse_table_1577(v);
}

void	small_parse_table_1577(t_small_parse_table_array *v)
{
	v->a[31540] = 3;
	v->a[31541] = sym_file_redirect;
	v->a[31542] = sym_heredoc_redirect;
	v->a[31543] = aux_sym_redirected_statement_repeat1;
	v->a[31544] = actions(2512);
	v->a[31545] = 21;
	v->a[31546] = anon_sym_LT;
	v->a[31547] = anon_sym_GT;
	v->a[31548] = anon_sym_GT_GT;
	v->a[31549] = anon_sym_AMP_GT;
	v->a[31550] = anon_sym_AMP_GT_GT;
	v->a[31551] = anon_sym_LT_AMP;
	v->a[31552] = anon_sym_GT_AMP;
	v->a[31553] = anon_sym_GT_PIPE;
	v->a[31554] = anon_sym_LT_AMP_DASH;
	v->a[31555] = anon_sym_GT_AMP_DASH;
	v->a[31556] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31557] = anon_sym_DOLLAR;
	v->a[31558] = sym__special_character;
	v->a[31559] = anon_sym_DQUOTE;
	small_parse_table_1578(v);
}

void	small_parse_table_1578(t_small_parse_table_array *v)
{
	v->a[31560] = sym_raw_string;
	v->a[31561] = aux_sym_number_token1;
	v->a[31562] = aux_sym_number_token2;
	v->a[31563] = anon_sym_DOLLAR_LBRACE;
	v->a[31564] = anon_sym_DOLLAR_LPAREN;
	v->a[31565] = anon_sym_DOLLAR_BQUOTE;
	v->a[31566] = sym_word;
	v->a[31567] = 6;
	v->a[31568] = actions(3);
	v->a[31569] = 1;
	v->a[31570] = sym_comment;
	v->a[31571] = actions(3358);
	v->a[31572] = 1;
	v->a[31573] = aux_sym_concatenation_token1;
	v->a[31574] = actions(3405);
	v->a[31575] = 1;
	v->a[31576] = sym__concat;
	v->a[31577] = state(666);
	v->a[31578] = 1;
	v->a[31579] = aux_sym_concatenation_repeat1;
	small_parse_table_1579(v);
}

void	small_parse_table_1579(t_small_parse_table_array *v)
{
	v->a[31580] = actions(2690);
	v->a[31581] = 5;
	v->a[31582] = sym_file_descriptor;
	v->a[31583] = sym_test_operator;
	v->a[31584] = sym__bare_dollar;
	v->a[31585] = sym__brace_start;
	v->a[31586] = aux_sym_heredoc_redirect_token1;
	v->a[31587] = actions(2688);
	v->a[31588] = 33;
	v->a[31589] = anon_sym_LPAREN;
	v->a[31590] = anon_sym_PIPE;
	v->a[31591] = anon_sym_RPAREN;
	v->a[31592] = anon_sym_SEMI_SEMI;
	v->a[31593] = anon_sym_PIPE_AMP;
	v->a[31594] = anon_sym_AMP_AMP;
	v->a[31595] = anon_sym_PIPE_PIPE;
	v->a[31596] = anon_sym_LT;
	v->a[31597] = anon_sym_GT;
	v->a[31598] = anon_sym_GT_GT;
	v->a[31599] = anon_sym_AMP_GT;
	small_parse_table_1580(v);
}

/* EOF small_parse_table_315.c */
