/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2368.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11840(t_small_parse_table_array *v)
{
	v->a[236800] = sym__special_character;
	v->a[236801] = actions(10454);
	v->a[236802] = 3;
	v->a[236803] = sym__bare_dollar;
	v->a[236804] = sym_raw_string;
	v->a[236805] = sym_ansi_c_string;
	v->a[236806] = state(1083);
	v->a[236807] = 9;
	v->a[236808] = sym_arithmetic_expansion;
	v->a[236809] = sym_brace_expression;
	v->a[236810] = sym_string;
	v->a[236811] = sym_translated_string;
	v->a[236812] = sym_number;
	v->a[236813] = sym_simple_expansion;
	v->a[236814] = sym_expansion;
	v->a[236815] = sym_command_substitution;
	v->a[236816] = sym_process_substitution;
	v->a[236817] = 18;
	v->a[236818] = actions(3);
	v->a[236819] = 1;
	small_parse_table_11841(v);
}

void	small_parse_table_11841(t_small_parse_table_array *v)
{
	v->a[236820] = sym_comment;
	v->a[236821] = actions(8140);
	v->a[236822] = 1;
	v->a[236823] = anon_sym_DOLLAR_LBRACK;
	v->a[236824] = actions(8146);
	v->a[236825] = 1;
	v->a[236826] = anon_sym_DQUOTE;
	v->a[236827] = actions(8150);
	v->a[236828] = 1;
	v->a[236829] = aux_sym_number_token1;
	v->a[236830] = actions(8152);
	v->a[236831] = 1;
	v->a[236832] = aux_sym_number_token2;
	v->a[236833] = actions(8154);
	v->a[236834] = 1;
	v->a[236835] = anon_sym_DOLLAR_LBRACE;
	v->a[236836] = actions(8156);
	v->a[236837] = 1;
	v->a[236838] = anon_sym_DOLLAR_LPAREN;
	v->a[236839] = actions(8158);
	small_parse_table_11842(v);
}

void	small_parse_table_11842(t_small_parse_table_array *v)
{
	v->a[236840] = 1;
	v->a[236841] = anon_sym_BQUOTE;
	v->a[236842] = actions(8160);
	v->a[236843] = 1;
	v->a[236844] = anon_sym_DOLLAR_BQUOTE;
	v->a[236845] = actions(8170);
	v->a[236846] = 1;
	v->a[236847] = sym__brace_start;
	v->a[236848] = actions(10564);
	v->a[236849] = 1;
	v->a[236850] = sym_word;
	v->a[236851] = actions(10570);
	v->a[236852] = 1;
	v->a[236853] = sym__comment_word;
	v->a[236854] = actions(11150);
	v->a[236855] = 1;
	v->a[236856] = anon_sym_DOLLAR;
	v->a[236857] = actions(8136);
	v->a[236858] = 2;
	v->a[236859] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11843(v);
}

void	small_parse_table_11843(t_small_parse_table_array *v)
{
	v->a[236860] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[236861] = actions(8162);
	v->a[236862] = 2;
	v->a[236863] = anon_sym_LT_LPAREN;
	v->a[236864] = anon_sym_GT_LPAREN;
	v->a[236865] = actions(10566);
	v->a[236866] = 2;
	v->a[236867] = sym_test_operator;
	v->a[236868] = sym__special_character;
	v->a[236869] = actions(10568);
	v->a[236870] = 3;
	v->a[236871] = sym__bare_dollar;
	v->a[236872] = sym_raw_string;
	v->a[236873] = sym_ansi_c_string;
	v->a[236874] = state(4526);
	v->a[236875] = 9;
	v->a[236876] = sym_arithmetic_expansion;
	v->a[236877] = sym_brace_expression;
	v->a[236878] = sym_string;
	v->a[236879] = sym_translated_string;
	small_parse_table_11844(v);
}

void	small_parse_table_11844(t_small_parse_table_array *v)
{
	v->a[236880] = sym_number;
	v->a[236881] = sym_simple_expansion;
	v->a[236882] = sym_expansion;
	v->a[236883] = sym_command_substitution;
	v->a[236884] = sym_process_substitution;
	v->a[236885] = 18;
	v->a[236886] = actions(3);
	v->a[236887] = 1;
	v->a[236888] = sym_comment;
	v->a[236889] = actions(8140);
	v->a[236890] = 1;
	v->a[236891] = anon_sym_DOLLAR_LBRACK;
	v->a[236892] = actions(8146);
	v->a[236893] = 1;
	v->a[236894] = anon_sym_DQUOTE;
	v->a[236895] = actions(8150);
	v->a[236896] = 1;
	v->a[236897] = aux_sym_number_token1;
	v->a[236898] = actions(8152);
	v->a[236899] = 1;
	small_parse_table_11845(v);
}

/* EOF small_parse_table_2368.c */
