/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1948.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9740(t_small_parse_table_array *v)
{
	v->a[194800] = 1;
	v->a[194801] = aux_sym_number_token2;
	v->a[194802] = actions(8585);
	v->a[194803] = 1;
	v->a[194804] = anon_sym_DOLLAR_LBRACE;
	v->a[194805] = actions(8587);
	v->a[194806] = 1;
	v->a[194807] = anon_sym_DOLLAR_LPAREN;
	v->a[194808] = actions(8589);
	v->a[194809] = 1;
	v->a[194810] = anon_sym_BQUOTE;
	v->a[194811] = actions(8591);
	v->a[194812] = 1;
	v->a[194813] = anon_sym_DOLLAR_BQUOTE;
	v->a[194814] = actions(8595);
	v->a[194815] = 1;
	v->a[194816] = sym_test_operator;
	v->a[194817] = actions(8597);
	v->a[194818] = 1;
	v->a[194819] = sym__brace_start;
	small_parse_table_9741(v);
}

void	small_parse_table_9741(t_small_parse_table_array *v)
{
	v->a[194820] = actions(8724);
	v->a[194821] = 1;
	v->a[194822] = anon_sym_RPAREN;
	v->a[194823] = state(5365);
	v->a[194824] = 1;
	v->a[194825] = aux_sym__literal_repeat1;
	v->a[194826] = actions(8567);
	v->a[194827] = 2;
	v->a[194828] = anon_sym_LPAREN_LPAREN;
	v->a[194829] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[194830] = actions(8579);
	v->a[194831] = 2;
	v->a[194832] = sym_raw_string;
	v->a[194833] = sym_ansi_c_string;
	v->a[194834] = actions(8593);
	v->a[194835] = 2;
	v->a[194836] = anon_sym_LT_LPAREN;
	v->a[194837] = anon_sym_GT_LPAREN;
	v->a[194838] = state(3590);
	v->a[194839] = 2;
	small_parse_table_9742(v);
}

void	small_parse_table_9742(t_small_parse_table_array *v)
{
	v->a[194840] = sym_concatenation;
	v->a[194841] = aux_sym_for_statement_repeat1;
	v->a[194842] = state(5045);
	v->a[194843] = 9;
	v->a[194844] = sym_arithmetic_expansion;
	v->a[194845] = sym_brace_expression;
	v->a[194846] = sym_string;
	v->a[194847] = sym_translated_string;
	v->a[194848] = sym_number;
	v->a[194849] = sym_simple_expansion;
	v->a[194850] = sym_expansion;
	v->a[194851] = sym_command_substitution;
	v->a[194852] = sym_process_substitution;
	v->a[194853] = 21;
	v->a[194854] = actions(71);
	v->a[194855] = 1;
	v->a[194856] = sym_comment;
	v->a[194857] = actions(8565);
	v->a[194858] = 1;
	v->a[194859] = sym_word;
	small_parse_table_9743(v);
}

void	small_parse_table_9743(t_small_parse_table_array *v)
{
	v->a[194860] = actions(8571);
	v->a[194861] = 1;
	v->a[194862] = anon_sym_DOLLAR_LBRACK;
	v->a[194863] = actions(8573);
	v->a[194864] = 1;
	v->a[194865] = anon_sym_DOLLAR;
	v->a[194866] = actions(8575);
	v->a[194867] = 1;
	v->a[194868] = sym__special_character;
	v->a[194869] = actions(8577);
	v->a[194870] = 1;
	v->a[194871] = anon_sym_DQUOTE;
	v->a[194872] = actions(8581);
	v->a[194873] = 1;
	v->a[194874] = aux_sym_number_token1;
	v->a[194875] = actions(8583);
	v->a[194876] = 1;
	v->a[194877] = aux_sym_number_token2;
	v->a[194878] = actions(8585);
	v->a[194879] = 1;
	small_parse_table_9744(v);
}

void	small_parse_table_9744(t_small_parse_table_array *v)
{
	v->a[194880] = anon_sym_DOLLAR_LBRACE;
	v->a[194881] = actions(8587);
	v->a[194882] = 1;
	v->a[194883] = anon_sym_DOLLAR_LPAREN;
	v->a[194884] = actions(8589);
	v->a[194885] = 1;
	v->a[194886] = anon_sym_BQUOTE;
	v->a[194887] = actions(8591);
	v->a[194888] = 1;
	v->a[194889] = anon_sym_DOLLAR_BQUOTE;
	v->a[194890] = actions(8595);
	v->a[194891] = 1;
	v->a[194892] = sym_test_operator;
	v->a[194893] = actions(8597);
	v->a[194894] = 1;
	v->a[194895] = sym__brace_start;
	v->a[194896] = actions(8726);
	v->a[194897] = 1;
	v->a[194898] = anon_sym_RPAREN;
	v->a[194899] = state(5365);
	small_parse_table_9745(v);
}

/* EOF small_parse_table_1948.c */
