/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2178.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10890(t_small_parse_table_array *v)
{
	v->a[217800] = 2;
	v->a[217801] = anon_sym_LPAREN_LPAREN;
	v->a[217802] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217803] = actions(9314);
	v->a[217804] = 2;
	v->a[217805] = sym_test_operator;
	v->a[217806] = sym__special_character;
	v->a[217807] = actions(9326);
	v->a[217808] = 2;
	v->a[217809] = anon_sym_LT_LPAREN;
	v->a[217810] = anon_sym_GT_LPAREN;
	v->a[217811] = actions(9318);
	v->a[217812] = 3;
	v->a[217813] = sym__bare_dollar;
	v->a[217814] = sym_raw_string;
	v->a[217815] = sym_ansi_c_string;
	v->a[217816] = state(4566);
	v->a[217817] = 9;
	v->a[217818] = sym_arithmetic_expansion;
	v->a[217819] = sym_brace_expression;
	small_parse_table_10891(v);
}

void	small_parse_table_10891(t_small_parse_table_array *v)
{
	v->a[217820] = sym_string;
	v->a[217821] = sym_translated_string;
	v->a[217822] = sym_number;
	v->a[217823] = sym_simple_expansion;
	v->a[217824] = sym_expansion;
	v->a[217825] = sym_command_substitution;
	v->a[217826] = sym_process_substitution;
	v->a[217827] = 18;
	v->a[217828] = actions(3);
	v->a[217829] = 1;
	v->a[217830] = sym_comment;
	v->a[217831] = actions(2863);
	v->a[217832] = 1;
	v->a[217833] = anon_sym_DOLLAR;
	v->a[217834] = actions(2869);
	v->a[217835] = 1;
	v->a[217836] = aux_sym_number_token1;
	v->a[217837] = actions(2871);
	v->a[217838] = 1;
	v->a[217839] = aux_sym_number_token2;
	small_parse_table_10892(v);
}

void	small_parse_table_10892(t_small_parse_table_array *v)
{
	v->a[217840] = actions(2875);
	v->a[217841] = 1;
	v->a[217842] = anon_sym_DOLLAR_LPAREN;
	v->a[217843] = actions(2885);
	v->a[217844] = 1;
	v->a[217845] = sym__brace_start;
	v->a[217846] = actions(9940);
	v->a[217847] = 1;
	v->a[217848] = anon_sym_DOLLAR_LBRACK;
	v->a[217849] = actions(9944);
	v->a[217850] = 1;
	v->a[217851] = anon_sym_DQUOTE;
	v->a[217852] = actions(9948);
	v->a[217853] = 1;
	v->a[217854] = anon_sym_DOLLAR_LBRACE;
	v->a[217855] = actions(9950);
	v->a[217856] = 1;
	v->a[217857] = anon_sym_BQUOTE;
	v->a[217858] = actions(9952);
	v->a[217859] = 1;
	small_parse_table_10893(v);
}

void	small_parse_table_10893(t_small_parse_table_array *v)
{
	v->a[217860] = anon_sym_DOLLAR_BQUOTE;
	v->a[217861] = actions(10382);
	v->a[217862] = 1;
	v->a[217863] = sym_word;
	v->a[217864] = actions(10388);
	v->a[217865] = 1;
	v->a[217866] = sym__comment_word;
	v->a[217867] = actions(9938);
	v->a[217868] = 2;
	v->a[217869] = anon_sym_LPAREN_LPAREN;
	v->a[217870] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217871] = actions(9954);
	v->a[217872] = 2;
	v->a[217873] = anon_sym_LT_LPAREN;
	v->a[217874] = anon_sym_GT_LPAREN;
	v->a[217875] = actions(10384);
	v->a[217876] = 2;
	v->a[217877] = sym_test_operator;
	v->a[217878] = sym__special_character;
	v->a[217879] = actions(10386);
	small_parse_table_10894(v);
}

void	small_parse_table_10894(t_small_parse_table_array *v)
{
	v->a[217880] = 3;
	v->a[217881] = sym__bare_dollar;
	v->a[217882] = sym_raw_string;
	v->a[217883] = sym_ansi_c_string;
	v->a[217884] = state(4404);
	v->a[217885] = 9;
	v->a[217886] = sym_arithmetic_expansion;
	v->a[217887] = sym_brace_expression;
	v->a[217888] = sym_string;
	v->a[217889] = sym_translated_string;
	v->a[217890] = sym_number;
	v->a[217891] = sym_simple_expansion;
	v->a[217892] = sym_expansion;
	v->a[217893] = sym_command_substitution;
	v->a[217894] = sym_process_substitution;
	v->a[217895] = 18;
	v->a[217896] = actions(3);
	v->a[217897] = 1;
	v->a[217898] = sym_comment;
	v->a[217899] = actions(1557);
	small_parse_table_10895(v);
}

/* EOF small_parse_table_2178.c */
