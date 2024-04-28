/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2760.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13800(t_small_parse_table_array *v)
{
	v->a[276000] = sym_extglob_pattern;
	v->a[276001] = sym__brace_start;
	v->a[276002] = anon_sym_LPAREN_LPAREN;
	v->a[276003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[276004] = anon_sym_DOLLAR_LBRACK;
	v->a[276005] = sym__special_character;
	v->a[276006] = anon_sym_DQUOTE;
	v->a[276007] = sym_raw_string;
	v->a[276008] = sym_ansi_c_string;
	v->a[276009] = anon_sym_DOLLAR_LBRACE;
	v->a[276010] = anon_sym_BQUOTE;
	v->a[276011] = anon_sym_DOLLAR_BQUOTE;
	v->a[276012] = anon_sym_LT_LPAREN;
	v->a[276013] = anon_sym_GT_LPAREN;
	v->a[276014] = 4;
	v->a[276015] = actions(71);
	v->a[276016] = 1;
	v->a[276017] = sym_comment;
	v->a[276018] = actions(12386);
	v->a[276019] = 1;
	small_parse_table_13801(v);
}

void	small_parse_table_13801(t_small_parse_table_array *v)
{
	v->a[276020] = anon_sym_esac;
	v->a[276021] = actions(12382);
	v->a[276022] = 6;
	v->a[276023] = anon_sym_LPAREN;
	v->a[276024] = anon_sym_DOLLAR;
	v->a[276025] = aux_sym_number_token1;
	v->a[276026] = aux_sym_number_token2;
	v->a[276027] = anon_sym_DOLLAR_LPAREN;
	v->a[276028] = sym_word;
	v->a[276029] = actions(12384);
	v->a[276030] = 15;
	v->a[276031] = sym_test_operator;
	v->a[276032] = sym_extglob_pattern;
	v->a[276033] = sym__brace_start;
	v->a[276034] = anon_sym_LPAREN_LPAREN;
	v->a[276035] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[276036] = anon_sym_DOLLAR_LBRACK;
	v->a[276037] = sym__special_character;
	v->a[276038] = anon_sym_DQUOTE;
	v->a[276039] = sym_raw_string;
	small_parse_table_13802(v);
}

void	small_parse_table_13802(t_small_parse_table_array *v)
{
	v->a[276040] = sym_ansi_c_string;
	v->a[276041] = anon_sym_DOLLAR_LBRACE;
	v->a[276042] = anon_sym_BQUOTE;
	v->a[276043] = anon_sym_DOLLAR_BQUOTE;
	v->a[276044] = anon_sym_LT_LPAREN;
	v->a[276045] = anon_sym_GT_LPAREN;
	v->a[276046] = 6;
	v->a[276047] = actions(3);
	v->a[276048] = 1;
	v->a[276049] = sym_comment;
	v->a[276050] = actions(12388);
	v->a[276051] = 1;
	v->a[276052] = sym_variable_name;
	v->a[276053] = state(6746);
	v->a[276054] = 1;
	v->a[276055] = sym_subscript;
	v->a[276056] = actions(11290);
	v->a[276057] = 2;
	v->a[276058] = sym_file_descriptor;
	v->a[276059] = aux_sym_heredoc_redirect_token1;
	small_parse_table_13803(v);
}

void	small_parse_table_13803(t_small_parse_table_array *v)
{
	v->a[276060] = state(5147);
	v->a[276061] = 2;
	v->a[276062] = sym_variable_assignment;
	v->a[276063] = aux_sym_variable_assignments_repeat1;
	v->a[276064] = actions(11288);
	v->a[276065] = 16;
	v->a[276066] = anon_sym_PIPE_PIPE;
	v->a[276067] = anon_sym_AMP_AMP;
	v->a[276068] = anon_sym_PIPE;
	v->a[276069] = anon_sym_LT;
	v->a[276070] = anon_sym_GT;
	v->a[276071] = anon_sym_LT_LT;
	v->a[276072] = anon_sym_GT_GT;
	v->a[276073] = anon_sym_PIPE_AMP;
	v->a[276074] = anon_sym_AMP_GT;
	v->a[276075] = anon_sym_AMP_GT_GT;
	v->a[276076] = anon_sym_LT_AMP;
	v->a[276077] = anon_sym_GT_AMP;
	v->a[276078] = anon_sym_GT_PIPE;
	v->a[276079] = anon_sym_LT_AMP_DASH;
	small_parse_table_13804(v);
}

void	small_parse_table_13804(t_small_parse_table_array *v)
{
	v->a[276080] = anon_sym_GT_AMP_DASH;
	v->a[276081] = anon_sym_LT_LT_DASH;
	v->a[276082] = 6;
	v->a[276083] = actions(3);
	v->a[276084] = 1;
	v->a[276085] = sym_comment;
	v->a[276086] = actions(12391);
	v->a[276087] = 1;
	v->a[276088] = sym_variable_name;
	v->a[276089] = state(6746);
	v->a[276090] = 1;
	v->a[276091] = sym_subscript;
	v->a[276092] = actions(11329);
	v->a[276093] = 2;
	v->a[276094] = sym_file_descriptor;
	v->a[276095] = aux_sym_heredoc_redirect_token1;
	v->a[276096] = state(5147);
	v->a[276097] = 2;
	v->a[276098] = sym_variable_assignment;
	v->a[276099] = aux_sym_variable_assignments_repeat1;
	small_parse_table_13805(v);
}

/* EOF small_parse_table_2760.c */
