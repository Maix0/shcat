/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2810.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14050(t_small_parse_table_array *v)
{
	v->a[281000] = actions(71);
	v->a[281001] = 1;
	v->a[281002] = sym_comment;
	v->a[281003] = actions(4253);
	v->a[281004] = 1;
	v->a[281005] = anon_sym_PIPE;
	v->a[281006] = actions(4348);
	v->a[281007] = 1;
	v->a[281008] = anon_sym_PIPE_AMP;
	v->a[281009] = actions(5994);
	v->a[281010] = 1;
	v->a[281011] = anon_sym_LT_LT;
	v->a[281012] = actions(5996);
	v->a[281013] = 1;
	v->a[281014] = anon_sym_LT_LT_DASH;
	v->a[281015] = actions(7517);
	v->a[281016] = 1;
	v->a[281017] = anon_sym_RBRACK;
	v->a[281018] = actions(12686);
	v->a[281019] = 1;
	small_parse_table_14051(v);
}

void	small_parse_table_14051(t_small_parse_table_array *v)
{
	v->a[281020] = sym_file_descriptor;
	v->a[281021] = actions(5992);
	v->a[281022] = 2;
	v->a[281023] = anon_sym_PIPE_PIPE;
	v->a[281024] = anon_sym_AMP_AMP;
	v->a[281025] = actions(12502);
	v->a[281026] = 2;
	v->a[281027] = anon_sym_LT_AMP_DASH;
	v->a[281028] = anon_sym_GT_AMP_DASH;
	v->a[281029] = actions(12500);
	v->a[281030] = 3;
	v->a[281031] = anon_sym_GT_GT;
	v->a[281032] = anon_sym_AMP_GT_GT;
	v->a[281033] = anon_sym_GT_PIPE;
	v->a[281034] = state(5350);
	v->a[281035] = 3;
	v->a[281036] = sym_file_redirect;
	v->a[281037] = sym_heredoc_redirect;
	v->a[281038] = aux_sym_redirected_statement_repeat1;
	v->a[281039] = actions(12498);
	small_parse_table_14052(v);
}

void	small_parse_table_14052(t_small_parse_table_array *v)
{
	v->a[281040] = 5;
	v->a[281041] = anon_sym_LT;
	v->a[281042] = anon_sym_GT;
	v->a[281043] = anon_sym_AMP_GT;
	v->a[281044] = anon_sym_LT_AMP;
	v->a[281045] = anon_sym_GT_AMP;
	v->a[281046] = 5;
	v->a[281047] = actions(71);
	v->a[281048] = 1;
	v->a[281049] = sym_comment;
	v->a[281050] = state(5471);
	v->a[281051] = 1;
	v->a[281052] = aux_sym_concatenation_repeat1;
	v->a[281053] = actions(12688);
	v->a[281054] = 2;
	v->a[281055] = sym__concat;
	v->a[281056] = aux_sym_concatenation_token1;
	v->a[281057] = actions(1261);
	v->a[281058] = 7;
	v->a[281059] = anon_sym_PIPE;
	small_parse_table_14053(v);
}

void	small_parse_table_14053(t_small_parse_table_array *v)
{
	v->a[281060] = anon_sym_LT;
	v->a[281061] = anon_sym_GT;
	v->a[281062] = anon_sym_LT_LT;
	v->a[281063] = anon_sym_AMP_GT;
	v->a[281064] = anon_sym_LT_AMP;
	v->a[281065] = anon_sym_GT_AMP;
	v->a[281066] = actions(1263);
	v->a[281067] = 11;
	v->a[281068] = sym_file_descriptor;
	v->a[281069] = anon_sym_PIPE_PIPE;
	v->a[281070] = anon_sym_AMP_AMP;
	v->a[281071] = anon_sym_GT_GT;
	v->a[281072] = anon_sym_PIPE_AMP;
	v->a[281073] = anon_sym_AMP_GT_GT;
	v->a[281074] = anon_sym_GT_PIPE;
	v->a[281075] = anon_sym_LT_AMP_DASH;
	v->a[281076] = anon_sym_GT_AMP_DASH;
	v->a[281077] = anon_sym_LT_LT_DASH;
	v->a[281078] = sym__special_character;
	v->a[281079] = 3;
	small_parse_table_14054(v);
}

void	small_parse_table_14054(t_small_parse_table_array *v)
{
	v->a[281080] = actions(71);
	v->a[281081] = 1;
	v->a[281082] = sym_comment;
	v->a[281083] = actions(12690);
	v->a[281084] = 6;
	v->a[281085] = anon_sym_LPAREN;
	v->a[281086] = anon_sym_DOLLAR;
	v->a[281087] = aux_sym_number_token1;
	v->a[281088] = aux_sym_number_token2;
	v->a[281089] = anon_sym_DOLLAR_LPAREN;
	v->a[281090] = sym_word;
	v->a[281091] = actions(12692);
	v->a[281092] = 15;
	v->a[281093] = sym_test_operator;
	v->a[281094] = sym_extglob_pattern;
	v->a[281095] = sym__brace_start;
	v->a[281096] = anon_sym_LPAREN_LPAREN;
	v->a[281097] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[281098] = anon_sym_DOLLAR_LBRACK;
	v->a[281099] = sym__special_character;
	small_parse_table_14055(v);
}

/* EOF small_parse_table_2810.c */
