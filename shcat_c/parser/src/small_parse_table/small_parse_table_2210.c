/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2210.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11050(t_small_parse_table_array *v)
{
	v->a[221000] = sym_arithmetic_expansion;
	v->a[221001] = sym_brace_expression;
	v->a[221002] = sym_string;
	v->a[221003] = sym_translated_string;
	v->a[221004] = sym_number;
	v->a[221005] = sym_simple_expansion;
	v->a[221006] = sym_expansion;
	v->a[221007] = sym_command_substitution;
	v->a[221008] = sym_process_substitution;
	v->a[221009] = 18;
	v->a[221010] = actions(3);
	v->a[221011] = 1;
	v->a[221012] = sym_comment;
	v->a[221013] = actions(4947);
	v->a[221014] = 1;
	v->a[221015] = anon_sym_DOLLAR_LBRACK;
	v->a[221016] = actions(4953);
	v->a[221017] = 1;
	v->a[221018] = anon_sym_DQUOTE;
	v->a[221019] = actions(4957);
	small_parse_table_11051(v);
}

void	small_parse_table_11051(t_small_parse_table_array *v)
{
	v->a[221020] = 1;
	v->a[221021] = aux_sym_number_token1;
	v->a[221022] = actions(4959);
	v->a[221023] = 1;
	v->a[221024] = aux_sym_number_token2;
	v->a[221025] = actions(4961);
	v->a[221026] = 1;
	v->a[221027] = anon_sym_DOLLAR_LBRACE;
	v->a[221028] = actions(4963);
	v->a[221029] = 1;
	v->a[221030] = anon_sym_DOLLAR_LPAREN;
	v->a[221031] = actions(4965);
	v->a[221032] = 1;
	v->a[221033] = anon_sym_BQUOTE;
	v->a[221034] = actions(4967);
	v->a[221035] = 1;
	v->a[221036] = anon_sym_DOLLAR_BQUOTE;
	v->a[221037] = actions(4973);
	v->a[221038] = 1;
	v->a[221039] = sym__brace_start;
	small_parse_table_11052(v);
}

void	small_parse_table_11052(t_small_parse_table_array *v)
{
	v->a[221040] = actions(10228);
	v->a[221041] = 1;
	v->a[221042] = sym_word;
	v->a[221043] = actions(10234);
	v->a[221044] = 1;
	v->a[221045] = sym__comment_word;
	v->a[221046] = actions(10580);
	v->a[221047] = 1;
	v->a[221048] = anon_sym_DOLLAR;
	v->a[221049] = actions(4945);
	v->a[221050] = 2;
	v->a[221051] = anon_sym_LPAREN_LPAREN;
	v->a[221052] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[221053] = actions(4969);
	v->a[221054] = 2;
	v->a[221055] = anon_sym_LT_LPAREN;
	v->a[221056] = anon_sym_GT_LPAREN;
	v->a[221057] = actions(10230);
	v->a[221058] = 2;
	v->a[221059] = sym_test_operator;
	small_parse_table_11053(v);
}

void	small_parse_table_11053(t_small_parse_table_array *v)
{
	v->a[221060] = sym__special_character;
	v->a[221061] = actions(10232);
	v->a[221062] = 3;
	v->a[221063] = sym__bare_dollar;
	v->a[221064] = sym_raw_string;
	v->a[221065] = sym_ansi_c_string;
	v->a[221066] = state(2590);
	v->a[221067] = 9;
	v->a[221068] = sym_arithmetic_expansion;
	v->a[221069] = sym_brace_expression;
	v->a[221070] = sym_string;
	v->a[221071] = sym_translated_string;
	v->a[221072] = sym_number;
	v->a[221073] = sym_simple_expansion;
	v->a[221074] = sym_expansion;
	v->a[221075] = sym_command_substitution;
	v->a[221076] = sym_process_substitution;
	v->a[221077] = 18;
	v->a[221078] = actions(3);
	v->a[221079] = 1;
	small_parse_table_11054(v);
}

void	small_parse_table_11054(t_small_parse_table_array *v)
{
	v->a[221080] = sym_comment;
	v->a[221081] = actions(2869);
	v->a[221082] = 1;
	v->a[221083] = aux_sym_number_token1;
	v->a[221084] = actions(2871);
	v->a[221085] = 1;
	v->a[221086] = aux_sym_number_token2;
	v->a[221087] = actions(2875);
	v->a[221088] = 1;
	v->a[221089] = anon_sym_DOLLAR_LPAREN;
	v->a[221090] = actions(2885);
	v->a[221091] = 1;
	v->a[221092] = sym__brace_start;
	v->a[221093] = actions(9940);
	v->a[221094] = 1;
	v->a[221095] = anon_sym_DOLLAR_LBRACK;
	v->a[221096] = actions(9944);
	v->a[221097] = 1;
	v->a[221098] = anon_sym_DQUOTE;
	v->a[221099] = actions(9948);
	small_parse_table_11055(v);
}

/* EOF small_parse_table_2210.c */
