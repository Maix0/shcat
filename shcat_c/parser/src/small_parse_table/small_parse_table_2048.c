/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2048.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10240(t_small_parse_table_array *v)
{
	v->a[204800] = anon_sym_PLUS_PLUS2;
	v->a[204801] = anon_sym_DASH_DASH2;
	v->a[204802] = actions(9370);
	v->a[204803] = 2;
	v->a[204804] = anon_sym_DASH2;
	v->a[204805] = anon_sym_PLUS2;
	v->a[204806] = state(3346);
	v->a[204807] = 9;
	v->a[204808] = sym_subscript;
	v->a[204809] = sym__arithmetic_expression;
	v->a[204810] = sym__arithmetic_literal;
	v->a[204811] = sym__arithmetic_parenthesized_expression;
	v->a[204812] = sym_string;
	v->a[204813] = sym_number;
	v->a[204814] = sym_simple_expansion;
	v->a[204815] = sym_expansion;
	v->a[204816] = sym_command_substitution;
	v->a[204817] = 18;
	v->a[204818] = actions(3);
	v->a[204819] = 1;
	small_parse_table_10241(v);
}

void	small_parse_table_10241(t_small_parse_table_array *v)
{
	v->a[204820] = sym_comment;
	v->a[204821] = actions(5261);
	v->a[204822] = 1;
	v->a[204823] = anon_sym_DOLLAR_LBRACK;
	v->a[204824] = actions(5267);
	v->a[204825] = 1;
	v->a[204826] = anon_sym_DQUOTE;
	v->a[204827] = actions(5271);
	v->a[204828] = 1;
	v->a[204829] = aux_sym_number_token1;
	v->a[204830] = actions(5273);
	v->a[204831] = 1;
	v->a[204832] = aux_sym_number_token2;
	v->a[204833] = actions(5275);
	v->a[204834] = 1;
	v->a[204835] = anon_sym_DOLLAR_LBRACE;
	v->a[204836] = actions(5277);
	v->a[204837] = 1;
	v->a[204838] = anon_sym_DOLLAR_LPAREN;
	v->a[204839] = actions(5279);
	small_parse_table_10242(v);
}

void	small_parse_table_10242(t_small_parse_table_array *v)
{
	v->a[204840] = 1;
	v->a[204841] = anon_sym_BQUOTE;
	v->a[204842] = actions(5281);
	v->a[204843] = 1;
	v->a[204844] = anon_sym_DOLLAR_BQUOTE;
	v->a[204845] = actions(5287);
	v->a[204846] = 1;
	v->a[204847] = sym__brace_start;
	v->a[204848] = actions(9472);
	v->a[204849] = 1;
	v->a[204850] = sym_word;
	v->a[204851] = actions(9480);
	v->a[204852] = 1;
	v->a[204853] = sym__comment_word;
	v->a[204854] = actions(9492);
	v->a[204855] = 1;
	v->a[204856] = anon_sym_DOLLAR;
	v->a[204857] = actions(5259);
	v->a[204858] = 2;
	v->a[204859] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10243(v);
}

void	small_parse_table_10243(t_small_parse_table_array *v)
{
	v->a[204860] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[204861] = actions(5283);
	v->a[204862] = 2;
	v->a[204863] = anon_sym_LT_LPAREN;
	v->a[204864] = anon_sym_GT_LPAREN;
	v->a[204865] = actions(9476);
	v->a[204866] = 2;
	v->a[204867] = sym_test_operator;
	v->a[204868] = sym__special_character;
	v->a[204869] = actions(9478);
	v->a[204870] = 3;
	v->a[204871] = sym__bare_dollar;
	v->a[204872] = sym_raw_string;
	v->a[204873] = sym_ansi_c_string;
	v->a[204874] = state(5440);
	v->a[204875] = 9;
	v->a[204876] = sym_arithmetic_expansion;
	v->a[204877] = sym_brace_expression;
	v->a[204878] = sym_string;
	v->a[204879] = sym_translated_string;
	small_parse_table_10244(v);
}

void	small_parse_table_10244(t_small_parse_table_array *v)
{
	v->a[204880] = sym_number;
	v->a[204881] = sym_simple_expansion;
	v->a[204882] = sym_expansion;
	v->a[204883] = sym_command_substitution;
	v->a[204884] = sym_process_substitution;
	v->a[204885] = 21;
	v->a[204886] = actions(71);
	v->a[204887] = 1;
	v->a[204888] = sym_comment;
	v->a[204889] = actions(3064);
	v->a[204890] = 1;
	v->a[204891] = sym_variable_name;
	v->a[204892] = actions(9278);
	v->a[204893] = 1;
	v->a[204894] = anon_sym_LPAREN;
	v->a[204895] = actions(9280);
	v->a[204896] = 1;
	v->a[204897] = anon_sym_BANG;
	v->a[204898] = actions(9286);
	v->a[204899] = 1;
	small_parse_table_10245(v);
}

/* EOF small_parse_table_2048.c */
