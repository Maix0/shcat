/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2367.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11835(t_small_parse_table_array *v)
{
	v->a[236700] = actions(8194);
	v->a[236701] = 1;
	v->a[236702] = anon_sym_DOLLAR_LPAREN;
	v->a[236703] = actions(8196);
	v->a[236704] = 1;
	v->a[236705] = anon_sym_BQUOTE;
	v->a[236706] = actions(8198);
	v->a[236707] = 1;
	v->a[236708] = anon_sym_DOLLAR_BQUOTE;
	v->a[236709] = actions(8208);
	v->a[236710] = 1;
	v->a[236711] = sym__brace_start;
	v->a[236712] = actions(9720);
	v->a[236713] = 1;
	v->a[236714] = sym_word;
	v->a[236715] = actions(9728);
	v->a[236716] = 1;
	v->a[236717] = sym__comment_word;
	v->a[236718] = actions(11146);
	v->a[236719] = 1;
	small_parse_table_11836(v);
}

void	small_parse_table_11836(t_small_parse_table_array *v)
{
	v->a[236720] = anon_sym_DOLLAR;
	v->a[236721] = actions(8174);
	v->a[236722] = 2;
	v->a[236723] = anon_sym_LPAREN_LPAREN;
	v->a[236724] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[236725] = actions(8200);
	v->a[236726] = 2;
	v->a[236727] = anon_sym_LT_LPAREN;
	v->a[236728] = anon_sym_GT_LPAREN;
	v->a[236729] = actions(9724);
	v->a[236730] = 2;
	v->a[236731] = sym_test_operator;
	v->a[236732] = sym__special_character;
	v->a[236733] = actions(9726);
	v->a[236734] = 3;
	v->a[236735] = sym__bare_dollar;
	v->a[236736] = sym_raw_string;
	v->a[236737] = sym_ansi_c_string;
	v->a[236738] = state(1590);
	v->a[236739] = 9;
	small_parse_table_11837(v);
}

void	small_parse_table_11837(t_small_parse_table_array *v)
{
	v->a[236740] = sym_arithmetic_expansion;
	v->a[236741] = sym_brace_expression;
	v->a[236742] = sym_string;
	v->a[236743] = sym_translated_string;
	v->a[236744] = sym_number;
	v->a[236745] = sym_simple_expansion;
	v->a[236746] = sym_expansion;
	v->a[236747] = sym_command_substitution;
	v->a[236748] = sym_process_substitution;
	v->a[236749] = 18;
	v->a[236750] = actions(3);
	v->a[236751] = 1;
	v->a[236752] = sym_comment;
	v->a[236753] = actions(47);
	v->a[236754] = 1;
	v->a[236755] = anon_sym_DOLLAR_LBRACK;
	v->a[236756] = actions(53);
	v->a[236757] = 1;
	v->a[236758] = anon_sym_DQUOTE;
	v->a[236759] = actions(57);
	small_parse_table_11838(v);
}

void	small_parse_table_11838(t_small_parse_table_array *v)
{
	v->a[236760] = 1;
	v->a[236761] = aux_sym_number_token1;
	v->a[236762] = actions(59);
	v->a[236763] = 1;
	v->a[236764] = aux_sym_number_token2;
	v->a[236765] = actions(61);
	v->a[236766] = 1;
	v->a[236767] = anon_sym_DOLLAR_LBRACE;
	v->a[236768] = actions(63);
	v->a[236769] = 1;
	v->a[236770] = anon_sym_DOLLAR_LPAREN;
	v->a[236771] = actions(65);
	v->a[236772] = 1;
	v->a[236773] = anon_sym_BQUOTE;
	v->a[236774] = actions(67);
	v->a[236775] = 1;
	v->a[236776] = anon_sym_DOLLAR_BQUOTE;
	v->a[236777] = actions(79);
	v->a[236778] = 1;
	v->a[236779] = sym__brace_start;
	small_parse_table_11839(v);
}

void	small_parse_table_11839(t_small_parse_table_array *v)
{
	v->a[236780] = actions(10448);
	v->a[236781] = 1;
	v->a[236782] = sym_word;
	v->a[236783] = actions(10456);
	v->a[236784] = 1;
	v->a[236785] = sym__comment_word;
	v->a[236786] = actions(11148);
	v->a[236787] = 1;
	v->a[236788] = anon_sym_DOLLAR;
	v->a[236789] = actions(45);
	v->a[236790] = 2;
	v->a[236791] = anon_sym_LPAREN_LPAREN;
	v->a[236792] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[236793] = actions(69);
	v->a[236794] = 2;
	v->a[236795] = anon_sym_LT_LPAREN;
	v->a[236796] = anon_sym_GT_LPAREN;
	v->a[236797] = actions(10452);
	v->a[236798] = 2;
	v->a[236799] = sym_test_operator;
	small_parse_table_11840(v);
}

/* EOF small_parse_table_2367.c */
