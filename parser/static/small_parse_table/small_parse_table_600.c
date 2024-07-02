/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_600.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3000(t_small_parse_table_array *v)
{
	v->a[60000] = sym_raw_string;
	v->a[60001] = sym_number;
	v->a[60002] = sym_word;
	v->a[60003] = state(1806);
	v->a[60004] = 5;
	v->a[60005] = sym_arithmetic_expansion;
	v->a[60006] = sym_string;
	v->a[60007] = sym_simple_expansion;
	v->a[60008] = sym_expansion;
	v->a[60009] = sym_command_substitution;
	v->a[60010] = 6;
	v->a[60011] = actions(3);
	v->a[60012] = 1;
	v->a[60013] = sym_comment;
	v->a[60014] = actions(1925);
	v->a[60015] = 1;
	v->a[60016] = aux_sym_concatenation_token1;
	v->a[60017] = actions(2026);
	v->a[60018] = 1;
	v->a[60019] = sym__concat;
	small_parse_table_3001(v);
}

void	small_parse_table_3001(t_small_parse_table_array *v)
{
	v->a[60020] = state(1071);
	v->a[60021] = 1;
	v->a[60022] = aux_sym_concatenation_repeat1;
	v->a[60023] = actions(1043);
	v->a[60024] = 2;
	v->a[60025] = sym_file_descriptor;
	v->a[60026] = sym_variable_name;
	v->a[60027] = actions(1045);
	v->a[60028] = 16;
	v->a[60029] = anon_sym_LT;
	v->a[60030] = anon_sym_GT;
	v->a[60031] = anon_sym_GT_GT;
	v->a[60032] = anon_sym_LT_AMP;
	v->a[60033] = anon_sym_GT_AMP;
	v->a[60034] = anon_sym_GT_PIPE;
	v->a[60035] = anon_sym_LT_GT;
	v->a[60036] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60037] = anon_sym_DOLLAR;
	v->a[60038] = anon_sym_DQUOTE;
	v->a[60039] = sym_raw_string;
	small_parse_table_3002(v);
}

void	small_parse_table_3002(t_small_parse_table_array *v)
{
	v->a[60040] = sym_number;
	v->a[60041] = anon_sym_DOLLAR_LBRACE;
	v->a[60042] = anon_sym_DOLLAR_LPAREN;
	v->a[60043] = anon_sym_BQUOTE;
	v->a[60044] = sym_word;
	v->a[60045] = 11;
	v->a[60046] = actions(3);
	v->a[60047] = 1;
	v->a[60048] = sym_comment;
	v->a[60049] = actions(692);
	v->a[60050] = 1;
	v->a[60051] = anon_sym_PIPE;
	v->a[60052] = actions(724);
	v->a[60053] = 1;
	v->a[60054] = anon_sym_SEMI_SEMI;
	v->a[60055] = actions(1857);
	v->a[60056] = 1;
	v->a[60057] = aux_sym_heredoc_redirect_token1;
	v->a[60058] = actions(1946);
	v->a[60059] = 1;
	small_parse_table_3003(v);
}

void	small_parse_table_3003(t_small_parse_table_array *v)
{
	v->a[60060] = sym_file_descriptor;
	v->a[60061] = state(618);
	v->a[60062] = 1;
	v->a[60063] = sym_terminator;
	v->a[60064] = actions(696);
	v->a[60065] = 2;
	v->a[60066] = anon_sym_AMP;
	v->a[60067] = anon_sym_SEMI;
	v->a[60068] = actions(700);
	v->a[60069] = 2;
	v->a[60070] = anon_sym_LT_LT;
	v->a[60071] = anon_sym_LT_LT_DASH;
	v->a[60072] = actions(914);
	v->a[60073] = 2;
	v->a[60074] = anon_sym_AMP_AMP;
	v->a[60075] = anon_sym_PIPE_PIPE;
	v->a[60076] = state(1134);
	v->a[60077] = 3;
	v->a[60078] = sym_file_redirect;
	v->a[60079] = sym_heredoc_redirect;
	small_parse_table_3004(v);
}

void	small_parse_table_3004(t_small_parse_table_array *v)
{
	v->a[60080] = aux_sym_redirected_statement_repeat1;
	v->a[60081] = actions(1942);
	v->a[60082] = 7;
	v->a[60083] = anon_sym_LT;
	v->a[60084] = anon_sym_GT;
	v->a[60085] = anon_sym_GT_GT;
	v->a[60086] = anon_sym_LT_AMP;
	v->a[60087] = anon_sym_GT_AMP;
	v->a[60088] = anon_sym_GT_PIPE;
	v->a[60089] = anon_sym_LT_GT;
	v->a[60090] = 10;
	v->a[60091] = actions(3);
	v->a[60092] = 1;
	v->a[60093] = sym_comment;
	v->a[60094] = actions(724);
	v->a[60095] = 1;
	v->a[60096] = anon_sym_BQUOTE;
	v->a[60097] = actions(1857);
	v->a[60098] = 1;
	v->a[60099] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3005(v);
}

/* EOF small_parse_table_600.c */
