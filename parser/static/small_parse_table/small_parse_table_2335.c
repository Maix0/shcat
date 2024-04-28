/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2335.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11675(t_small_parse_table_array *v)
{
	v->a[233500] = 1;
	v->a[233501] = anon_sym_DOLLAR_BQUOTE;
	v->a[233502] = actions(10522);
	v->a[233503] = 1;
	v->a[233504] = sym_word;
	v->a[233505] = actions(10528);
	v->a[233506] = 1;
	v->a[233507] = sym__comment_word;
	v->a[233508] = actions(11034);
	v->a[233509] = 1;
	v->a[233510] = anon_sym_DOLLAR;
	v->a[233511] = actions(8876);
	v->a[233512] = 2;
	v->a[233513] = anon_sym_LPAREN_LPAREN;
	v->a[233514] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[233515] = actions(8892);
	v->a[233516] = 2;
	v->a[233517] = anon_sym_LT_LPAREN;
	v->a[233518] = anon_sym_GT_LPAREN;
	v->a[233519] = actions(10524);
	small_parse_table_11676(v);
}

void	small_parse_table_11676(t_small_parse_table_array *v)
{
	v->a[233520] = 2;
	v->a[233521] = sym_test_operator;
	v->a[233522] = sym__special_character;
	v->a[233523] = actions(10526);
	v->a[233524] = 3;
	v->a[233525] = sym__bare_dollar;
	v->a[233526] = sym_raw_string;
	v->a[233527] = sym_ansi_c_string;
	v->a[233528] = state(1120);
	v->a[233529] = 9;
	v->a[233530] = sym_arithmetic_expansion;
	v->a[233531] = sym_brace_expression;
	v->a[233532] = sym_string;
	v->a[233533] = sym_translated_string;
	v->a[233534] = sym_number;
	v->a[233535] = sym_simple_expansion;
	v->a[233536] = sym_expansion;
	v->a[233537] = sym_command_substitution;
	v->a[233538] = sym_process_substitution;
	v->a[233539] = 21;
	small_parse_table_11677(v);
}

void	small_parse_table_11677(t_small_parse_table_array *v)
{
	v->a[233540] = actions(71);
	v->a[233541] = 1;
	v->a[233542] = sym_comment;
	v->a[233543] = actions(9364);
	v->a[233544] = 1;
	v->a[233545] = anon_sym_LPAREN;
	v->a[233546] = actions(9366);
	v->a[233547] = 1;
	v->a[233548] = anon_sym_BANG;
	v->a[233549] = actions(9372);
	v->a[233550] = 1;
	v->a[233551] = anon_sym_TILDE;
	v->a[233552] = actions(9374);
	v->a[233553] = 1;
	v->a[233554] = anon_sym_DOLLAR;
	v->a[233555] = actions(9376);
	v->a[233556] = 1;
	v->a[233557] = anon_sym_DQUOTE;
	v->a[233558] = actions(9378);
	v->a[233559] = 1;
	small_parse_table_11678(v);
}

void	small_parse_table_11678(t_small_parse_table_array *v)
{
	v->a[233560] = aux_sym_number_token1;
	v->a[233561] = actions(9380);
	v->a[233562] = 1;
	v->a[233563] = aux_sym_number_token2;
	v->a[233564] = actions(9382);
	v->a[233565] = 1;
	v->a[233566] = anon_sym_DOLLAR_LBRACE;
	v->a[233567] = actions(9384);
	v->a[233568] = 1;
	v->a[233569] = anon_sym_DOLLAR_LPAREN;
	v->a[233570] = actions(9386);
	v->a[233571] = 1;
	v->a[233572] = anon_sym_BQUOTE;
	v->a[233573] = actions(9388);
	v->a[233574] = 1;
	v->a[233575] = anon_sym_DOLLAR_BQUOTE;
	v->a[233576] = actions(9392);
	v->a[233577] = 1;
	v->a[233578] = sym_variable_name;
	v->a[233579] = actions(11036);
	small_parse_table_11679(v);
}

void	small_parse_table_11679(t_small_parse_table_array *v)
{
	v->a[233580] = 1;
	v->a[233581] = aux_sym__simple_variable_name_token1;
	v->a[233582] = state(3391);
	v->a[233583] = 1;
	v->a[233584] = sym__arithmetic_binary_expression;
	v->a[233585] = state(3396);
	v->a[233586] = 1;
	v->a[233587] = sym__arithmetic_ternary_expression;
	v->a[233588] = state(3398);
	v->a[233589] = 1;
	v->a[233590] = sym__arithmetic_unary_expression;
	v->a[233591] = state(3400);
	v->a[233592] = 1;
	v->a[233593] = sym__arithmetic_postfix_expression;
	v->a[233594] = actions(9368);
	v->a[233595] = 2;
	v->a[233596] = anon_sym_PLUS_PLUS2;
	v->a[233597] = anon_sym_DASH_DASH2;
	v->a[233598] = actions(9370);
	v->a[233599] = 2;
	small_parse_table_11680(v);
}

/* EOF small_parse_table_2335.c */
