/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2360.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11800(t_small_parse_table_array *v)
{
	v->a[236000] = actions(8492);
	v->a[236001] = 1;
	v->a[236002] = anon_sym_BQUOTE;
	v->a[236003] = actions(8494);
	v->a[236004] = 1;
	v->a[236005] = anon_sym_DOLLAR_BQUOTE;
	v->a[236006] = actions(8504);
	v->a[236007] = 1;
	v->a[236008] = sym__brace_start;
	v->a[236009] = actions(10720);
	v->a[236010] = 1;
	v->a[236011] = sym_word;
	v->a[236012] = actions(10728);
	v->a[236013] = 1;
	v->a[236014] = sym__comment_word;
	v->a[236015] = actions(8470);
	v->a[236016] = 2;
	v->a[236017] = anon_sym_LPAREN_LPAREN;
	v->a[236018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[236019] = actions(8496);
	small_parse_table_11801(v);
}

void	small_parse_table_11801(t_small_parse_table_array *v)
{
	v->a[236020] = 2;
	v->a[236021] = anon_sym_LT_LPAREN;
	v->a[236022] = anon_sym_GT_LPAREN;
	v->a[236023] = actions(10724);
	v->a[236024] = 2;
	v->a[236025] = sym_test_operator;
	v->a[236026] = sym__special_character;
	v->a[236027] = actions(10726);
	v->a[236028] = 3;
	v->a[236029] = sym__bare_dollar;
	v->a[236030] = sym_raw_string;
	v->a[236031] = sym_ansi_c_string;
	v->a[236032] = state(1625);
	v->a[236033] = 9;
	v->a[236034] = sym_arithmetic_expansion;
	v->a[236035] = sym_brace_expression;
	v->a[236036] = sym_string;
	v->a[236037] = sym_translated_string;
	v->a[236038] = sym_number;
	v->a[236039] = sym_simple_expansion;
	small_parse_table_11802(v);
}

void	small_parse_table_11802(t_small_parse_table_array *v)
{
	v->a[236040] = sym_expansion;
	v->a[236041] = sym_command_substitution;
	v->a[236042] = sym_process_substitution;
	v->a[236043] = 21;
	v->a[236044] = actions(71);
	v->a[236045] = 1;
	v->a[236046] = sym_comment;
	v->a[236047] = actions(3064);
	v->a[236048] = 1;
	v->a[236049] = sym_variable_name;
	v->a[236050] = actions(9278);
	v->a[236051] = 1;
	v->a[236052] = anon_sym_LPAREN;
	v->a[236053] = actions(9280);
	v->a[236054] = 1;
	v->a[236055] = anon_sym_BANG;
	v->a[236056] = actions(9286);
	v->a[236057] = 1;
	v->a[236058] = anon_sym_TILDE;
	v->a[236059] = actions(9288);
	small_parse_table_11803(v);
}

void	small_parse_table_11803(t_small_parse_table_array *v)
{
	v->a[236060] = 1;
	v->a[236061] = anon_sym_DOLLAR;
	v->a[236062] = actions(9290);
	v->a[236063] = 1;
	v->a[236064] = anon_sym_DQUOTE;
	v->a[236065] = actions(9292);
	v->a[236066] = 1;
	v->a[236067] = aux_sym_number_token1;
	v->a[236068] = actions(9294);
	v->a[236069] = 1;
	v->a[236070] = aux_sym_number_token2;
	v->a[236071] = actions(9296);
	v->a[236072] = 1;
	v->a[236073] = anon_sym_DOLLAR_LBRACE;
	v->a[236074] = actions(9298);
	v->a[236075] = 1;
	v->a[236076] = anon_sym_DOLLAR_LPAREN;
	v->a[236077] = actions(9300);
	v->a[236078] = 1;
	v->a[236079] = anon_sym_BQUOTE;
	small_parse_table_11804(v);
}

void	small_parse_table_11804(t_small_parse_table_array *v)
{
	v->a[236080] = actions(9302);
	v->a[236081] = 1;
	v->a[236082] = anon_sym_DOLLAR_BQUOTE;
	v->a[236083] = actions(11118);
	v->a[236084] = 1;
	v->a[236085] = aux_sym__simple_variable_name_token1;
	v->a[236086] = state(2801);
	v->a[236087] = 1;
	v->a[236088] = sym__arithmetic_binary_expression;
	v->a[236089] = state(2803);
	v->a[236090] = 1;
	v->a[236091] = sym__arithmetic_ternary_expression;
	v->a[236092] = state(2809);
	v->a[236093] = 1;
	v->a[236094] = sym__arithmetic_unary_expression;
	v->a[236095] = state(2825);
	v->a[236096] = 1;
	v->a[236097] = sym__arithmetic_postfix_expression;
	v->a[236098] = actions(9282);
	v->a[236099] = 2;
	small_parse_table_11805(v);
}

/* EOF small_parse_table_2360.c */
