/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2235.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11175(t_small_parse_table_array *v)
{
	v->a[223500] = actions(9640);
	v->a[223501] = 1;
	v->a[223502] = anon_sym_DQUOTE;
	v->a[223503] = actions(9644);
	v->a[223504] = 1;
	v->a[223505] = anon_sym_DOLLAR_LBRACE;
	v->a[223506] = actions(9646);
	v->a[223507] = 1;
	v->a[223508] = anon_sym_BQUOTE;
	v->a[223509] = actions(9648);
	v->a[223510] = 1;
	v->a[223511] = anon_sym_DOLLAR_BQUOTE;
	v->a[223512] = actions(9872);
	v->a[223513] = 1;
	v->a[223514] = sym_word;
	v->a[223515] = actions(9880);
	v->a[223516] = 1;
	v->a[223517] = sym__comment_word;
	v->a[223518] = actions(10658);
	v->a[223519] = 1;
	small_parse_table_11176(v);
}

void	small_parse_table_11176(t_small_parse_table_array *v)
{
	v->a[223520] = anon_sym_DOLLAR;
	v->a[223521] = actions(9634);
	v->a[223522] = 2;
	v->a[223523] = anon_sym_LPAREN_LPAREN;
	v->a[223524] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[223525] = actions(9650);
	v->a[223526] = 2;
	v->a[223527] = anon_sym_LT_LPAREN;
	v->a[223528] = anon_sym_GT_LPAREN;
	v->a[223529] = actions(9876);
	v->a[223530] = 2;
	v->a[223531] = sym_test_operator;
	v->a[223532] = sym__special_character;
	v->a[223533] = actions(9878);
	v->a[223534] = 3;
	v->a[223535] = sym__bare_dollar;
	v->a[223536] = sym_raw_string;
	v->a[223537] = sym_ansi_c_string;
	v->a[223538] = state(4337);
	v->a[223539] = 9;
	small_parse_table_11177(v);
}

void	small_parse_table_11177(t_small_parse_table_array *v)
{
	v->a[223540] = sym_arithmetic_expansion;
	v->a[223541] = sym_brace_expression;
	v->a[223542] = sym_string;
	v->a[223543] = sym_translated_string;
	v->a[223544] = sym_number;
	v->a[223545] = sym_simple_expansion;
	v->a[223546] = sym_expansion;
	v->a[223547] = sym_command_substitution;
	v->a[223548] = sym_process_substitution;
	v->a[223549] = 21;
	v->a[223550] = actions(71);
	v->a[223551] = 1;
	v->a[223552] = sym_comment;
	v->a[223553] = actions(9364);
	v->a[223554] = 1;
	v->a[223555] = anon_sym_LPAREN;
	v->a[223556] = actions(9366);
	v->a[223557] = 1;
	v->a[223558] = anon_sym_BANG;
	v->a[223559] = actions(9372);
	small_parse_table_11178(v);
}

void	small_parse_table_11178(t_small_parse_table_array *v)
{
	v->a[223560] = 1;
	v->a[223561] = anon_sym_TILDE;
	v->a[223562] = actions(9374);
	v->a[223563] = 1;
	v->a[223564] = anon_sym_DOLLAR;
	v->a[223565] = actions(9376);
	v->a[223566] = 1;
	v->a[223567] = anon_sym_DQUOTE;
	v->a[223568] = actions(9378);
	v->a[223569] = 1;
	v->a[223570] = aux_sym_number_token1;
	v->a[223571] = actions(9380);
	v->a[223572] = 1;
	v->a[223573] = aux_sym_number_token2;
	v->a[223574] = actions(9382);
	v->a[223575] = 1;
	v->a[223576] = anon_sym_DOLLAR_LBRACE;
	v->a[223577] = actions(9384);
	v->a[223578] = 1;
	v->a[223579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11179(v);
}

void	small_parse_table_11179(t_small_parse_table_array *v)
{
	v->a[223580] = actions(9386);
	v->a[223581] = 1;
	v->a[223582] = anon_sym_BQUOTE;
	v->a[223583] = actions(9388);
	v->a[223584] = 1;
	v->a[223585] = anon_sym_DOLLAR_BQUOTE;
	v->a[223586] = actions(9392);
	v->a[223587] = 1;
	v->a[223588] = sym_variable_name;
	v->a[223589] = actions(10660);
	v->a[223590] = 1;
	v->a[223591] = aux_sym__simple_variable_name_token1;
	v->a[223592] = state(3391);
	v->a[223593] = 1;
	v->a[223594] = sym__arithmetic_binary_expression;
	v->a[223595] = state(3396);
	v->a[223596] = 1;
	v->a[223597] = sym__arithmetic_ternary_expression;
	v->a[223598] = state(3398);
	v->a[223599] = 1;
	small_parse_table_11180(v);
}

/* EOF small_parse_table_2235.c */
