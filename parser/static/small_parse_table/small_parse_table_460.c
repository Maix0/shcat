/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_460.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2300(t_small_parse_table_array *v)
{
	v->a[46000] = sym_simple_expansion;
	v->a[46001] = sym_expansion;
	v->a[46002] = state(273);
	v->a[46003] = 8;
	v->a[46004] = sym__arithmetic_expression;
	v->a[46005] = sym_arithmetic_literal;
	v->a[46006] = sym_arithmetic_binary_expression;
	v->a[46007] = sym_arithmetic_ternary_expression;
	v->a[46008] = sym_arithmetic_unary_expression;
	v->a[46009] = sym_arithmetic_postfix_expression;
	v->a[46010] = sym_arithmetic_parenthesized_expression;
	v->a[46011] = sym_command_substitution;
	v->a[46012] = 18;
	v->a[46013] = actions(3);
	v->a[46014] = 1;
	v->a[46015] = sym_comment;
	v->a[46016] = actions(1634);
	v->a[46017] = 1;
	v->a[46018] = anon_sym_LPAREN;
	v->a[46019] = actions(1638);
	small_parse_table_2301(v);
}

void	small_parse_table_2301(t_small_parse_table_array *v)
{
	v->a[46020] = 1;
	v->a[46021] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46022] = actions(1640);
	v->a[46023] = 1;
	v->a[46024] = anon_sym_DOLLAR;
	v->a[46025] = actions(1642);
	v->a[46026] = 1;
	v->a[46027] = anon_sym_DQUOTE;
	v->a[46028] = actions(1644);
	v->a[46029] = 1;
	v->a[46030] = anon_sym_DOLLAR_LBRACE;
	v->a[46031] = actions(1646);
	v->a[46032] = 1;
	v->a[46033] = anon_sym_DOLLAR_LPAREN;
	v->a[46034] = actions(1648);
	v->a[46035] = 1;
	v->a[46036] = anon_sym_BQUOTE;
	v->a[46037] = actions(1650);
	v->a[46038] = 1;
	v->a[46039] = sym_extglob_pattern;
	small_parse_table_2302(v);
}

void	small_parse_table_2302(t_small_parse_table_array *v)
{
	v->a[46040] = actions(1699);
	v->a[46041] = 1;
	v->a[46042] = anon_sym_esac;
	v->a[46043] = state(968);
	v->a[46044] = 1;
	v->a[46045] = sym_terminator;
	v->a[46046] = state(1056);
	v->a[46047] = 1;
	v->a[46048] = aux_sym_case_statement_repeat1;
	v->a[46049] = state(1713);
	v->a[46050] = 1;
	v->a[46051] = sym_case_item;
	v->a[46052] = state(2099);
	v->a[46053] = 1;
	v->a[46054] = sym__case_item_last;
	v->a[46055] = state(1871);
	v->a[46056] = 2;
	v->a[46057] = sym_concatenation;
	v->a[46058] = sym__extglob_blob;
	v->a[46059] = actions(1630);
	small_parse_table_2303(v);
}

void	small_parse_table_2303(t_small_parse_table_array *v)
{
	v->a[46060] = 3;
	v->a[46061] = sym_raw_string;
	v->a[46062] = sym_number;
	v->a[46063] = sym_word;
	v->a[46064] = actions(1636);
	v->a[46065] = 4;
	v->a[46066] = anon_sym_SEMI_SEMI;
	v->a[46067] = aux_sym_heredoc_redirect_token1;
	v->a[46068] = anon_sym_AMP;
	v->a[46069] = anon_sym_SEMI;
	v->a[46070] = state(1804);
	v->a[46071] = 5;
	v->a[46072] = sym_arithmetic_expansion;
	v->a[46073] = sym_string;
	v->a[46074] = sym_simple_expansion;
	v->a[46075] = sym_expansion;
	v->a[46076] = sym_command_substitution;
	v->a[46077] = 4;
	v->a[46078] = actions(3);
	v->a[46079] = 1;
	small_parse_table_2304(v);
}

void	small_parse_table_2304(t_small_parse_table_array *v)
{
	v->a[46080] = sym_comment;
	v->a[46081] = actions(1612);
	v->a[46082] = 1;
	v->a[46083] = ts_builtin_sym_end;
	v->a[46084] = actions(1441);
	v->a[46085] = 2;
	v->a[46086] = sym_file_descriptor;
	v->a[46087] = sym_variable_name;
	v->a[46088] = actions(1437);
	v->a[46089] = 24;
	v->a[46090] = anon_sym_for;
	v->a[46091] = anon_sym_while;
	v->a[46092] = anon_sym_until;
	v->a[46093] = anon_sym_if;
	v->a[46094] = anon_sym_case;
	v->a[46095] = anon_sym_LPAREN;
	v->a[46096] = anon_sym_LBRACE;
	v->a[46097] = anon_sym_BANG;
	v->a[46098] = anon_sym_LT;
	v->a[46099] = anon_sym_GT;
	small_parse_table_2305(v);
}

/* EOF small_parse_table_460.c */
