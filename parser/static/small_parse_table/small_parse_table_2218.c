/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2218.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11090(t_small_parse_table_array *v)
{
	v->a[221800] = 1;
	v->a[221801] = anon_sym_DOLLAR_LBRACE;
	v->a[221802] = actions(207);
	v->a[221803] = 1;
	v->a[221804] = anon_sym_DOLLAR_LPAREN;
	v->a[221805] = actions(209);
	v->a[221806] = 1;
	v->a[221807] = anon_sym_BQUOTE;
	v->a[221808] = actions(211);
	v->a[221809] = 1;
	v->a[221810] = anon_sym_DOLLAR_BQUOTE;
	v->a[221811] = actions(221);
	v->a[221812] = 1;
	v->a[221813] = sym__brace_start;
	v->a[221814] = actions(10406);
	v->a[221815] = 1;
	v->a[221816] = sym_word;
	v->a[221817] = actions(10412);
	v->a[221818] = 1;
	v->a[221819] = sym__comment_word;
	small_parse_table_11091(v);
}

void	small_parse_table_11091(t_small_parse_table_array *v)
{
	v->a[221820] = actions(10610);
	v->a[221821] = 1;
	v->a[221822] = anon_sym_DOLLAR;
	v->a[221823] = actions(189);
	v->a[221824] = 2;
	v->a[221825] = anon_sym_LPAREN_LPAREN;
	v->a[221826] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[221827] = actions(213);
	v->a[221828] = 2;
	v->a[221829] = anon_sym_LT_LPAREN;
	v->a[221830] = anon_sym_GT_LPAREN;
	v->a[221831] = actions(10408);
	v->a[221832] = 2;
	v->a[221833] = sym_test_operator;
	v->a[221834] = sym__special_character;
	v->a[221835] = actions(10410);
	v->a[221836] = 3;
	v->a[221837] = sym__bare_dollar;
	v->a[221838] = sym_raw_string;
	v->a[221839] = sym_ansi_c_string;
	small_parse_table_11092(v);
}

void	small_parse_table_11092(t_small_parse_table_array *v)
{
	v->a[221840] = state(513);
	v->a[221841] = 9;
	v->a[221842] = sym_arithmetic_expansion;
	v->a[221843] = sym_brace_expression;
	v->a[221844] = sym_string;
	v->a[221845] = sym_translated_string;
	v->a[221846] = sym_number;
	v->a[221847] = sym_simple_expansion;
	v->a[221848] = sym_expansion;
	v->a[221849] = sym_command_substitution;
	v->a[221850] = sym_process_substitution;
	v->a[221851] = 21;
	v->a[221852] = actions(71);
	v->a[221853] = 1;
	v->a[221854] = sym_comment;
	v->a[221855] = actions(3064);
	v->a[221856] = 1;
	v->a[221857] = sym_variable_name;
	v->a[221858] = actions(9278);
	v->a[221859] = 1;
	small_parse_table_11093(v);
}

void	small_parse_table_11093(t_small_parse_table_array *v)
{
	v->a[221860] = anon_sym_LPAREN;
	v->a[221861] = actions(9280);
	v->a[221862] = 1;
	v->a[221863] = anon_sym_BANG;
	v->a[221864] = actions(9286);
	v->a[221865] = 1;
	v->a[221866] = anon_sym_TILDE;
	v->a[221867] = actions(9288);
	v->a[221868] = 1;
	v->a[221869] = anon_sym_DOLLAR;
	v->a[221870] = actions(9290);
	v->a[221871] = 1;
	v->a[221872] = anon_sym_DQUOTE;
	v->a[221873] = actions(9292);
	v->a[221874] = 1;
	v->a[221875] = aux_sym_number_token1;
	v->a[221876] = actions(9294);
	v->a[221877] = 1;
	v->a[221878] = aux_sym_number_token2;
	v->a[221879] = actions(9296);
	small_parse_table_11094(v);
}

void	small_parse_table_11094(t_small_parse_table_array *v)
{
	v->a[221880] = 1;
	v->a[221881] = anon_sym_DOLLAR_LBRACE;
	v->a[221882] = actions(9298);
	v->a[221883] = 1;
	v->a[221884] = anon_sym_DOLLAR_LPAREN;
	v->a[221885] = actions(9300);
	v->a[221886] = 1;
	v->a[221887] = anon_sym_BQUOTE;
	v->a[221888] = actions(9302);
	v->a[221889] = 1;
	v->a[221890] = anon_sym_DOLLAR_BQUOTE;
	v->a[221891] = actions(10612);
	v->a[221892] = 1;
	v->a[221893] = aux_sym__simple_variable_name_token1;
	v->a[221894] = state(2801);
	v->a[221895] = 1;
	v->a[221896] = sym__arithmetic_binary_expression;
	v->a[221897] = state(2803);
	v->a[221898] = 1;
	v->a[221899] = sym__arithmetic_ternary_expression;
	small_parse_table_11095(v);
}

/* EOF small_parse_table_2218.c */
