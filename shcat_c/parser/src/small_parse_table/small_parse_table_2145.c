/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2145.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10725(t_small_parse_table_array *v)
{
	v->a[214500] = sym_subscript;
	v->a[214501] = sym__arithmetic_expression;
	v->a[214502] = sym__arithmetic_literal;
	v->a[214503] = sym__arithmetic_parenthesized_expression;
	v->a[214504] = sym_string;
	v->a[214505] = sym_number;
	v->a[214506] = sym_simple_expansion;
	v->a[214507] = sym_expansion;
	v->a[214508] = sym_command_substitution;
	v->a[214509] = 18;
	v->a[214510] = actions(3);
	v->a[214511] = 1;
	v->a[214512] = sym_comment;
	v->a[214513] = actions(8512);
	v->a[214514] = 1;
	v->a[214515] = anon_sym_DOLLAR_LBRACK;
	v->a[214516] = actions(8514);
	v->a[214517] = 1;
	v->a[214518] = anon_sym_DOLLAR;
	v->a[214519] = actions(8518);
	small_parse_table_10726(v);
}

void	small_parse_table_10726(t_small_parse_table_array *v)
{
	v->a[214520] = 1;
	v->a[214521] = anon_sym_DQUOTE;
	v->a[214522] = actions(8522);
	v->a[214523] = 1;
	v->a[214524] = aux_sym_number_token1;
	v->a[214525] = actions(8524);
	v->a[214526] = 1;
	v->a[214527] = aux_sym_number_token2;
	v->a[214528] = actions(8526);
	v->a[214529] = 1;
	v->a[214530] = anon_sym_DOLLAR_LBRACE;
	v->a[214531] = actions(8528);
	v->a[214532] = 1;
	v->a[214533] = anon_sym_DOLLAR_LPAREN;
	v->a[214534] = actions(8530);
	v->a[214535] = 1;
	v->a[214536] = anon_sym_BQUOTE;
	v->a[214537] = actions(8532);
	v->a[214538] = 1;
	v->a[214539] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10727(v);
}

void	small_parse_table_10727(t_small_parse_table_array *v)
{
	v->a[214540] = actions(8542);
	v->a[214541] = 1;
	v->a[214542] = sym__brace_start;
	v->a[214543] = actions(10220);
	v->a[214544] = 1;
	v->a[214545] = sym_word;
	v->a[214546] = actions(10226);
	v->a[214547] = 1;
	v->a[214548] = sym__comment_word;
	v->a[214549] = actions(8508);
	v->a[214550] = 2;
	v->a[214551] = anon_sym_LPAREN_LPAREN;
	v->a[214552] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[214553] = actions(8534);
	v->a[214554] = 2;
	v->a[214555] = anon_sym_LT_LPAREN;
	v->a[214556] = anon_sym_GT_LPAREN;
	v->a[214557] = actions(10222);
	v->a[214558] = 2;
	v->a[214559] = sym_test_operator;
	small_parse_table_10728(v);
}

void	small_parse_table_10728(t_small_parse_table_array *v)
{
	v->a[214560] = sym__special_character;
	v->a[214561] = actions(10224);
	v->a[214562] = 3;
	v->a[214563] = sym__bare_dollar;
	v->a[214564] = sym_raw_string;
	v->a[214565] = sym_ansi_c_string;
	v->a[214566] = state(2514);
	v->a[214567] = 9;
	v->a[214568] = sym_arithmetic_expansion;
	v->a[214569] = sym_brace_expression;
	v->a[214570] = sym_string;
	v->a[214571] = sym_translated_string;
	v->a[214572] = sym_number;
	v->a[214573] = sym_simple_expansion;
	v->a[214574] = sym_expansion;
	v->a[214575] = sym_command_substitution;
	v->a[214576] = sym_process_substitution;
	v->a[214577] = 18;
	v->a[214578] = actions(3);
	v->a[214579] = 1;
	small_parse_table_10729(v);
}

void	small_parse_table_10729(t_small_parse_table_array *v)
{
	v->a[214580] = sym_comment;
	v->a[214581] = actions(4947);
	v->a[214582] = 1;
	v->a[214583] = anon_sym_DOLLAR_LBRACK;
	v->a[214584] = actions(4949);
	v->a[214585] = 1;
	v->a[214586] = anon_sym_DOLLAR;
	v->a[214587] = actions(4953);
	v->a[214588] = 1;
	v->a[214589] = anon_sym_DQUOTE;
	v->a[214590] = actions(4957);
	v->a[214591] = 1;
	v->a[214592] = aux_sym_number_token1;
	v->a[214593] = actions(4959);
	v->a[214594] = 1;
	v->a[214595] = aux_sym_number_token2;
	v->a[214596] = actions(4961);
	v->a[214597] = 1;
	v->a[214598] = anon_sym_DOLLAR_LBRACE;
	v->a[214599] = actions(4963);
	small_parse_table_10730(v);
}

/* EOF small_parse_table_2145.c */
