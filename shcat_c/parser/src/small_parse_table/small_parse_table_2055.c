/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2055.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10275(t_small_parse_table_array *v)
{
	v->a[205500] = state(2689);
	v->a[205501] = 1;
	v->a[205502] = aux_sym__literal_repeat1;
	v->a[205503] = state(2940);
	v->a[205504] = 1;
	v->a[205505] = sym_concatenation;
	v->a[205506] = actions(8508);
	v->a[205507] = 2;
	v->a[205508] = anon_sym_LPAREN_LPAREN;
	v->a[205509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[205510] = actions(8534);
	v->a[205511] = 2;
	v->a[205512] = anon_sym_LT_LPAREN;
	v->a[205513] = anon_sym_GT_LPAREN;
	v->a[205514] = actions(9528);
	v->a[205515] = 2;
	v->a[205516] = sym_raw_string;
	v->a[205517] = sym_ansi_c_string;
	v->a[205518] = state(2413);
	v->a[205519] = 9;
	small_parse_table_10276(v);
}

void	small_parse_table_10276(t_small_parse_table_array *v)
{
	v->a[205520] = sym_arithmetic_expansion;
	v->a[205521] = sym_brace_expression;
	v->a[205522] = sym_string;
	v->a[205523] = sym_translated_string;
	v->a[205524] = sym_number;
	v->a[205525] = sym_simple_expansion;
	v->a[205526] = sym_expansion;
	v->a[205527] = sym_command_substitution;
	v->a[205528] = sym_process_substitution;
	v->a[205529] = 18;
	v->a[205530] = actions(3);
	v->a[205531] = 1;
	v->a[205532] = sym_comment;
	v->a[205533] = actions(3616);
	v->a[205534] = 1;
	v->a[205535] = aux_sym_number_token1;
	v->a[205536] = actions(3618);
	v->a[205537] = 1;
	v->a[205538] = aux_sym_number_token2;
	v->a[205539] = actions(3622);
	small_parse_table_10277(v);
}

void	small_parse_table_10277(t_small_parse_table_array *v)
{
	v->a[205540] = 1;
	v->a[205541] = anon_sym_DOLLAR_LPAREN;
	v->a[205542] = actions(3632);
	v->a[205543] = 1;
	v->a[205544] = sym__brace_start;
	v->a[205545] = actions(8850);
	v->a[205546] = 1;
	v->a[205547] = anon_sym_DOLLAR_LBRACK;
	v->a[205548] = actions(8854);
	v->a[205549] = 1;
	v->a[205550] = anon_sym_DQUOTE;
	v->a[205551] = actions(8858);
	v->a[205552] = 1;
	v->a[205553] = anon_sym_DOLLAR_LBRACE;
	v->a[205554] = actions(8860);
	v->a[205555] = 1;
	v->a[205556] = anon_sym_BQUOTE;
	v->a[205557] = actions(8862);
	v->a[205558] = 1;
	v->a[205559] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10278(v);
}

void	small_parse_table_10278(t_small_parse_table_array *v)
{
	v->a[205560] = actions(9516);
	v->a[205561] = 1;
	v->a[205562] = sym_word;
	v->a[205563] = actions(9524);
	v->a[205564] = 1;
	v->a[205565] = sym__comment_word;
	v->a[205566] = actions(9532);
	v->a[205567] = 1;
	v->a[205568] = anon_sym_DOLLAR;
	v->a[205569] = actions(8848);
	v->a[205570] = 2;
	v->a[205571] = anon_sym_LPAREN_LPAREN;
	v->a[205572] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[205573] = actions(8864);
	v->a[205574] = 2;
	v->a[205575] = anon_sym_LT_LPAREN;
	v->a[205576] = anon_sym_GT_LPAREN;
	v->a[205577] = actions(9520);
	v->a[205578] = 2;
	v->a[205579] = sym_test_operator;
	small_parse_table_10279(v);
}

void	small_parse_table_10279(t_small_parse_table_array *v)
{
	v->a[205580] = sym__special_character;
	v->a[205581] = actions(9522);
	v->a[205582] = 3;
	v->a[205583] = sym__bare_dollar;
	v->a[205584] = sym_raw_string;
	v->a[205585] = sym_ansi_c_string;
	v->a[205586] = state(2210);
	v->a[205587] = 9;
	v->a[205588] = sym_arithmetic_expansion;
	v->a[205589] = sym_brace_expression;
	v->a[205590] = sym_string;
	v->a[205591] = sym_translated_string;
	v->a[205592] = sym_number;
	v->a[205593] = sym_simple_expansion;
	v->a[205594] = sym_expansion;
	v->a[205595] = sym_command_substitution;
	v->a[205596] = sym_process_substitution;
	v->a[205597] = 18;
	v->a[205598] = actions(3);
	v->a[205599] = 1;
	small_parse_table_10280(v);
}

/* EOF small_parse_table_2055.c */
