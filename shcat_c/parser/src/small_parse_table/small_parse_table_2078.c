/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2078.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10390(t_small_parse_table_array *v)
{
	v->a[207800] = sym_process_substitution;
	v->a[207801] = 20;
	v->a[207802] = actions(71);
	v->a[207803] = 1;
	v->a[207804] = sym_comment;
	v->a[207805] = actions(5261);
	v->a[207806] = 1;
	v->a[207807] = anon_sym_DOLLAR_LBRACK;
	v->a[207808] = actions(5263);
	v->a[207809] = 1;
	v->a[207810] = anon_sym_DOLLAR;
	v->a[207811] = actions(5265);
	v->a[207812] = 1;
	v->a[207813] = sym__special_character;
	v->a[207814] = actions(5267);
	v->a[207815] = 1;
	v->a[207816] = anon_sym_DQUOTE;
	v->a[207817] = actions(5271);
	v->a[207818] = 1;
	v->a[207819] = aux_sym_number_token1;
	small_parse_table_10391(v);
}

void	small_parse_table_10391(t_small_parse_table_array *v)
{
	v->a[207820] = actions(5273);
	v->a[207821] = 1;
	v->a[207822] = aux_sym_number_token2;
	v->a[207823] = actions(5275);
	v->a[207824] = 1;
	v->a[207825] = anon_sym_DOLLAR_LBRACE;
	v->a[207826] = actions(5277);
	v->a[207827] = 1;
	v->a[207828] = anon_sym_DOLLAR_LPAREN;
	v->a[207829] = actions(5279);
	v->a[207830] = 1;
	v->a[207831] = anon_sym_BQUOTE;
	v->a[207832] = actions(5281);
	v->a[207833] = 1;
	v->a[207834] = anon_sym_DOLLAR_BQUOTE;
	v->a[207835] = actions(5287);
	v->a[207836] = 1;
	v->a[207837] = sym__brace_start;
	v->a[207838] = actions(9714);
	v->a[207839] = 1;
	small_parse_table_10392(v);
}

void	small_parse_table_10392(t_small_parse_table_array *v)
{
	v->a[207840] = sym_word;
	v->a[207841] = actions(9718);
	v->a[207842] = 1;
	v->a[207843] = sym_test_operator;
	v->a[207844] = state(5462);
	v->a[207845] = 1;
	v->a[207846] = aux_sym__literal_repeat1;
	v->a[207847] = state(5587);
	v->a[207848] = 1;
	v->a[207849] = sym_concatenation;
	v->a[207850] = actions(5259);
	v->a[207851] = 2;
	v->a[207852] = anon_sym_LPAREN_LPAREN;
	v->a[207853] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[207854] = actions(5283);
	v->a[207855] = 2;
	v->a[207856] = anon_sym_LT_LPAREN;
	v->a[207857] = anon_sym_GT_LPAREN;
	v->a[207858] = actions(9716);
	v->a[207859] = 2;
	small_parse_table_10393(v);
}

void	small_parse_table_10393(t_small_parse_table_array *v)
{
	v->a[207860] = sym_raw_string;
	v->a[207861] = sym_ansi_c_string;
	v->a[207862] = state(5300);
	v->a[207863] = 9;
	v->a[207864] = sym_arithmetic_expansion;
	v->a[207865] = sym_brace_expression;
	v->a[207866] = sym_string;
	v->a[207867] = sym_translated_string;
	v->a[207868] = sym_number;
	v->a[207869] = sym_simple_expansion;
	v->a[207870] = sym_expansion;
	v->a[207871] = sym_command_substitution;
	v->a[207872] = sym_process_substitution;
	v->a[207873] = 18;
	v->a[207874] = actions(3);
	v->a[207875] = 1;
	v->a[207876] = sym_comment;
	v->a[207877] = actions(8178);
	v->a[207878] = 1;
	v->a[207879] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10394(v);
}

void	small_parse_table_10394(t_small_parse_table_array *v)
{
	v->a[207880] = actions(8184);
	v->a[207881] = 1;
	v->a[207882] = anon_sym_DQUOTE;
	v->a[207883] = actions(8188);
	v->a[207884] = 1;
	v->a[207885] = aux_sym_number_token1;
	v->a[207886] = actions(8190);
	v->a[207887] = 1;
	v->a[207888] = aux_sym_number_token2;
	v->a[207889] = actions(8192);
	v->a[207890] = 1;
	v->a[207891] = anon_sym_DOLLAR_LBRACE;
	v->a[207892] = actions(8194);
	v->a[207893] = 1;
	v->a[207894] = anon_sym_DOLLAR_LPAREN;
	v->a[207895] = actions(8196);
	v->a[207896] = 1;
	v->a[207897] = anon_sym_BQUOTE;
	v->a[207898] = actions(8198);
	v->a[207899] = 1;
	small_parse_table_10395(v);
}

/* EOF small_parse_table_2078.c */
