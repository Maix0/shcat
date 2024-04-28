/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1985.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9925(t_small_parse_table_array *v)
{
	v->a[198500] = sym_command_substitution;
	v->a[198501] = sym_process_substitution;
	v->a[198502] = 20;
	v->a[198503] = actions(71);
	v->a[198504] = 1;
	v->a[198505] = sym_comment;
	v->a[198506] = actions(8512);
	v->a[198507] = 1;
	v->a[198508] = anon_sym_DOLLAR_LBRACK;
	v->a[198509] = actions(8514);
	v->a[198510] = 1;
	v->a[198511] = anon_sym_DOLLAR;
	v->a[198512] = actions(8516);
	v->a[198513] = 1;
	v->a[198514] = sym__special_character;
	v->a[198515] = actions(8518);
	v->a[198516] = 1;
	v->a[198517] = anon_sym_DQUOTE;
	v->a[198518] = actions(8522);
	v->a[198519] = 1;
	small_parse_table_9926(v);
}

void	small_parse_table_9926(t_small_parse_table_array *v)
{
	v->a[198520] = aux_sym_number_token1;
	v->a[198521] = actions(8524);
	v->a[198522] = 1;
	v->a[198523] = aux_sym_number_token2;
	v->a[198524] = actions(8526);
	v->a[198525] = 1;
	v->a[198526] = anon_sym_DOLLAR_LBRACE;
	v->a[198527] = actions(8528);
	v->a[198528] = 1;
	v->a[198529] = anon_sym_DOLLAR_LPAREN;
	v->a[198530] = actions(8530);
	v->a[198531] = 1;
	v->a[198532] = anon_sym_BQUOTE;
	v->a[198533] = actions(8532);
	v->a[198534] = 1;
	v->a[198535] = anon_sym_DOLLAR_BQUOTE;
	v->a[198536] = actions(8542);
	v->a[198537] = 1;
	v->a[198538] = sym__brace_start;
	v->a[198539] = actions(8984);
	small_parse_table_9927(v);
}

void	small_parse_table_9927(t_small_parse_table_array *v)
{
	v->a[198540] = 1;
	v->a[198541] = sym_word;
	v->a[198542] = actions(8988);
	v->a[198543] = 1;
	v->a[198544] = sym_test_operator;
	v->a[198545] = state(2671);
	v->a[198546] = 1;
	v->a[198547] = aux_sym__literal_repeat1;
	v->a[198548] = actions(8508);
	v->a[198549] = 2;
	v->a[198550] = anon_sym_LPAREN_LPAREN;
	v->a[198551] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198552] = actions(8534);
	v->a[198553] = 2;
	v->a[198554] = anon_sym_LT_LPAREN;
	v->a[198555] = anon_sym_GT_LPAREN;
	v->a[198556] = actions(8986);
	v->a[198557] = 2;
	v->a[198558] = sym_raw_string;
	v->a[198559] = sym_ansi_c_string;
	small_parse_table_9928(v);
}

void	small_parse_table_9928(t_small_parse_table_array *v)
{
	v->a[198560] = state(858);
	v->a[198561] = 2;
	v->a[198562] = sym_concatenation;
	v->a[198563] = aux_sym_for_statement_repeat1;
	v->a[198564] = state(2369);
	v->a[198565] = 9;
	v->a[198566] = sym_arithmetic_expansion;
	v->a[198567] = sym_brace_expression;
	v->a[198568] = sym_string;
	v->a[198569] = sym_translated_string;
	v->a[198570] = sym_number;
	v->a[198571] = sym_simple_expansion;
	v->a[198572] = sym_expansion;
	v->a[198573] = sym_command_substitution;
	v->a[198574] = sym_process_substitution;
	v->a[198575] = 20;
	v->a[198576] = actions(71);
	v->a[198577] = 1;
	v->a[198578] = sym_comment;
	v->a[198579] = actions(8512);
	small_parse_table_9929(v);
}

void	small_parse_table_9929(t_small_parse_table_array *v)
{
	v->a[198580] = 1;
	v->a[198581] = anon_sym_DOLLAR_LBRACK;
	v->a[198582] = actions(8514);
	v->a[198583] = 1;
	v->a[198584] = anon_sym_DOLLAR;
	v->a[198585] = actions(8516);
	v->a[198586] = 1;
	v->a[198587] = sym__special_character;
	v->a[198588] = actions(8518);
	v->a[198589] = 1;
	v->a[198590] = anon_sym_DQUOTE;
	v->a[198591] = actions(8522);
	v->a[198592] = 1;
	v->a[198593] = aux_sym_number_token1;
	v->a[198594] = actions(8524);
	v->a[198595] = 1;
	v->a[198596] = aux_sym_number_token2;
	v->a[198597] = actions(8526);
	v->a[198598] = 1;
	v->a[198599] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_9930(v);
}

/* EOF small_parse_table_1985.c */
