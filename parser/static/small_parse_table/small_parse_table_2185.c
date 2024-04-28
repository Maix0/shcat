/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2185.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10925(t_small_parse_table_array *v)
{
	v->a[218500] = actions(10412);
	v->a[218501] = 1;
	v->a[218502] = sym__comment_word;
	v->a[218503] = actions(189);
	v->a[218504] = 2;
	v->a[218505] = anon_sym_LPAREN_LPAREN;
	v->a[218506] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[218507] = actions(213);
	v->a[218508] = 2;
	v->a[218509] = anon_sym_LT_LPAREN;
	v->a[218510] = anon_sym_GT_LPAREN;
	v->a[218511] = actions(10408);
	v->a[218512] = 2;
	v->a[218513] = sym_test_operator;
	v->a[218514] = sym__special_character;
	v->a[218515] = actions(10410);
	v->a[218516] = 3;
	v->a[218517] = sym__bare_dollar;
	v->a[218518] = sym_raw_string;
	v->a[218519] = sym_ansi_c_string;
	small_parse_table_10926(v);
}

void	small_parse_table_10926(t_small_parse_table_array *v)
{
	v->a[218520] = state(513);
	v->a[218521] = 9;
	v->a[218522] = sym_arithmetic_expansion;
	v->a[218523] = sym_brace_expression;
	v->a[218524] = sym_string;
	v->a[218525] = sym_translated_string;
	v->a[218526] = sym_number;
	v->a[218527] = sym_simple_expansion;
	v->a[218528] = sym_expansion;
	v->a[218529] = sym_command_substitution;
	v->a[218530] = sym_process_substitution;
	v->a[218531] = 18;
	v->a[218532] = actions(3);
	v->a[218533] = 1;
	v->a[218534] = sym_comment;
	v->a[218535] = actions(3191);
	v->a[218536] = 1;
	v->a[218537] = aux_sym_number_token1;
	v->a[218538] = actions(3193);
	v->a[218539] = 1;
	small_parse_table_10927(v);
}

void	small_parse_table_10927(t_small_parse_table_array *v)
{
	v->a[218540] = aux_sym_number_token2;
	v->a[218541] = actions(3197);
	v->a[218542] = 1;
	v->a[218543] = anon_sym_DOLLAR_LPAREN;
	v->a[218544] = actions(3209);
	v->a[218545] = 1;
	v->a[218546] = sym__brace_start;
	v->a[218547] = actions(9674);
	v->a[218548] = 1;
	v->a[218549] = sym_word;
	v->a[218550] = actions(9678);
	v->a[218551] = 1;
	v->a[218552] = anon_sym_DOLLAR_LBRACK;
	v->a[218553] = actions(9682);
	v->a[218554] = 1;
	v->a[218555] = anon_sym_DQUOTE;
	v->a[218556] = actions(9686);
	v->a[218557] = 1;
	v->a[218558] = anon_sym_DOLLAR_LBRACE;
	v->a[218559] = actions(9688);
	small_parse_table_10928(v);
}

void	small_parse_table_10928(t_small_parse_table_array *v)
{
	v->a[218560] = 1;
	v->a[218561] = anon_sym_BQUOTE;
	v->a[218562] = actions(9690);
	v->a[218563] = 1;
	v->a[218564] = anon_sym_DOLLAR_BQUOTE;
	v->a[218565] = actions(9694);
	v->a[218566] = 1;
	v->a[218567] = sym__comment_word;
	v->a[218568] = actions(10414);
	v->a[218569] = 1;
	v->a[218570] = anon_sym_DOLLAR;
	v->a[218571] = actions(9676);
	v->a[218572] = 2;
	v->a[218573] = anon_sym_LPAREN_LPAREN;
	v->a[218574] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[218575] = actions(9680);
	v->a[218576] = 2;
	v->a[218577] = sym_test_operator;
	v->a[218578] = sym__special_character;
	v->a[218579] = actions(9692);
	small_parse_table_10929(v);
}

void	small_parse_table_10929(t_small_parse_table_array *v)
{
	v->a[218580] = 2;
	v->a[218581] = anon_sym_LT_LPAREN;
	v->a[218582] = anon_sym_GT_LPAREN;
	v->a[218583] = actions(9684);
	v->a[218584] = 3;
	v->a[218585] = sym__bare_dollar;
	v->a[218586] = sym_raw_string;
	v->a[218587] = sym_ansi_c_string;
	v->a[218588] = state(1733);
	v->a[218589] = 9;
	v->a[218590] = sym_arithmetic_expansion;
	v->a[218591] = sym_brace_expression;
	v->a[218592] = sym_string;
	v->a[218593] = sym_translated_string;
	v->a[218594] = sym_number;
	v->a[218595] = sym_simple_expansion;
	v->a[218596] = sym_expansion;
	v->a[218597] = sym_command_substitution;
	v->a[218598] = sym_process_substitution;
	v->a[218599] = 18;
	small_parse_table_10930(v);
}

/* EOF small_parse_table_2185.c */
