/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2245.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11225(t_small_parse_table_array *v)
{
	v->a[224500] = actions(8076);
	v->a[224501] = 1;
	v->a[224502] = anon_sym_BQUOTE;
	v->a[224503] = actions(8078);
	v->a[224504] = 1;
	v->a[224505] = anon_sym_DOLLAR_BQUOTE;
	v->a[224506] = actions(9580);
	v->a[224507] = 1;
	v->a[224508] = sym_word;
	v->a[224509] = actions(9588);
	v->a[224510] = 1;
	v->a[224511] = sym__comment_word;
	v->a[224512] = actions(10686);
	v->a[224513] = 1;
	v->a[224514] = anon_sym_DOLLAR;
	v->a[224515] = actions(8062);
	v->a[224516] = 2;
	v->a[224517] = anon_sym_LPAREN_LPAREN;
	v->a[224518] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[224519] = actions(8080);
	small_parse_table_11226(v);
}

void	small_parse_table_11226(t_small_parse_table_array *v)
{
	v->a[224520] = 2;
	v->a[224521] = anon_sym_LT_LPAREN;
	v->a[224522] = anon_sym_GT_LPAREN;
	v->a[224523] = actions(9584);
	v->a[224524] = 2;
	v->a[224525] = sym_test_operator;
	v->a[224526] = sym__special_character;
	v->a[224527] = actions(9586);
	v->a[224528] = 3;
	v->a[224529] = sym__bare_dollar;
	v->a[224530] = sym_raw_string;
	v->a[224531] = sym_ansi_c_string;
	v->a[224532] = state(1623);
	v->a[224533] = 9;
	v->a[224534] = sym_arithmetic_expansion;
	v->a[224535] = sym_brace_expression;
	v->a[224536] = sym_string;
	v->a[224537] = sym_translated_string;
	v->a[224538] = sym_number;
	v->a[224539] = sym_simple_expansion;
	small_parse_table_11227(v);
}

void	small_parse_table_11227(t_small_parse_table_array *v)
{
	v->a[224540] = sym_expansion;
	v->a[224541] = sym_command_substitution;
	v->a[224542] = sym_process_substitution;
	v->a[224543] = 21;
	v->a[224544] = actions(71);
	v->a[224545] = 1;
	v->a[224546] = sym_comment;
	v->a[224547] = actions(9364);
	v->a[224548] = 1;
	v->a[224549] = anon_sym_LPAREN;
	v->a[224550] = actions(9366);
	v->a[224551] = 1;
	v->a[224552] = anon_sym_BANG;
	v->a[224553] = actions(9372);
	v->a[224554] = 1;
	v->a[224555] = anon_sym_TILDE;
	v->a[224556] = actions(9374);
	v->a[224557] = 1;
	v->a[224558] = anon_sym_DOLLAR;
	v->a[224559] = actions(9376);
	small_parse_table_11228(v);
}

void	small_parse_table_11228(t_small_parse_table_array *v)
{
	v->a[224560] = 1;
	v->a[224561] = anon_sym_DQUOTE;
	v->a[224562] = actions(9378);
	v->a[224563] = 1;
	v->a[224564] = aux_sym_number_token1;
	v->a[224565] = actions(9380);
	v->a[224566] = 1;
	v->a[224567] = aux_sym_number_token2;
	v->a[224568] = actions(9382);
	v->a[224569] = 1;
	v->a[224570] = anon_sym_DOLLAR_LBRACE;
	v->a[224571] = actions(9384);
	v->a[224572] = 1;
	v->a[224573] = anon_sym_DOLLAR_LPAREN;
	v->a[224574] = actions(9386);
	v->a[224575] = 1;
	v->a[224576] = anon_sym_BQUOTE;
	v->a[224577] = actions(9388);
	v->a[224578] = 1;
	v->a[224579] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11229(v);
}

void	small_parse_table_11229(t_small_parse_table_array *v)
{
	v->a[224580] = actions(9392);
	v->a[224581] = 1;
	v->a[224582] = sym_variable_name;
	v->a[224583] = actions(10688);
	v->a[224584] = 1;
	v->a[224585] = aux_sym__simple_variable_name_token1;
	v->a[224586] = state(3391);
	v->a[224587] = 1;
	v->a[224588] = sym__arithmetic_binary_expression;
	v->a[224589] = state(3396);
	v->a[224590] = 1;
	v->a[224591] = sym__arithmetic_ternary_expression;
	v->a[224592] = state(3398);
	v->a[224593] = 1;
	v->a[224594] = sym__arithmetic_unary_expression;
	v->a[224595] = state(3400);
	v->a[224596] = 1;
	v->a[224597] = sym__arithmetic_postfix_expression;
	v->a[224598] = actions(9368);
	v->a[224599] = 2;
	small_parse_table_11230(v);
}

/* EOF small_parse_table_2245.c */
