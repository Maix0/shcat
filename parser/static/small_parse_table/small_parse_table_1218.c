/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1218.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6090(t_small_parse_table_array *v)
{
	v->a[121800] = 1;
	v->a[121801] = anon_sym_BQUOTE;
	v->a[121802] = actions(389);
	v->a[121803] = 1;
	v->a[121804] = anon_sym_DOLLAR_BQUOTE;
	v->a[121805] = actions(395);
	v->a[121806] = 1;
	v->a[121807] = sym__brace_start;
	v->a[121808] = actions(6340);
	v->a[121809] = 1;
	v->a[121810] = sym_word;
	v->a[121811] = actions(6342);
	v->a[121812] = 1;
	v->a[121813] = sym__special_character;
	v->a[121814] = actions(6346);
	v->a[121815] = 1;
	v->a[121816] = sym__comment_word;
	v->a[121817] = actions(7047);
	v->a[121818] = 1;
	v->a[121819] = anon_sym_DOLLAR;
	small_parse_table_6091(v);
}

void	small_parse_table_6091(t_small_parse_table_array *v)
{
	v->a[121820] = actions(6344);
	v->a[121821] = 3;
	v->a[121822] = sym_test_operator;
	v->a[121823] = sym__bare_dollar;
	v->a[121824] = sym_raw_string;
	v->a[121825] = state(762);
	v->a[121826] = 7;
	v->a[121827] = sym_arithmetic_expansion;
	v->a[121828] = sym_brace_expression;
	v->a[121829] = sym_string;
	v->a[121830] = sym_number;
	v->a[121831] = sym_simple_expansion;
	v->a[121832] = sym_expansion;
	v->a[121833] = sym_command_substitution;
	v->a[121834] = 16;
	v->a[121835] = actions(3);
	v->a[121836] = 1;
	v->a[121837] = sym_comment;
	v->a[121838] = actions(87);
	v->a[121839] = 1;
	small_parse_table_6092(v);
}

void	small_parse_table_6092(t_small_parse_table_array *v)
{
	v->a[121840] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121841] = actions(93);
	v->a[121842] = 1;
	v->a[121843] = anon_sym_DQUOTE;
	v->a[121844] = actions(97);
	v->a[121845] = 1;
	v->a[121846] = aux_sym_number_token1;
	v->a[121847] = actions(99);
	v->a[121848] = 1;
	v->a[121849] = aux_sym_number_token2;
	v->a[121850] = actions(101);
	v->a[121851] = 1;
	v->a[121852] = anon_sym_DOLLAR_LBRACE;
	v->a[121853] = actions(103);
	v->a[121854] = 1;
	v->a[121855] = anon_sym_DOLLAR_LPAREN;
	v->a[121856] = actions(105);
	v->a[121857] = 1;
	v->a[121858] = anon_sym_BQUOTE;
	v->a[121859] = actions(107);
	small_parse_table_6093(v);
}

void	small_parse_table_6093(t_small_parse_table_array *v)
{
	v->a[121860] = 1;
	v->a[121861] = anon_sym_DOLLAR_BQUOTE;
	v->a[121862] = actions(113);
	v->a[121863] = 1;
	v->a[121864] = sym__brace_start;
	v->a[121865] = actions(6845);
	v->a[121866] = 1;
	v->a[121867] = sym_word;
	v->a[121868] = actions(6849);
	v->a[121869] = 1;
	v->a[121870] = sym__special_character;
	v->a[121871] = actions(6853);
	v->a[121872] = 1;
	v->a[121873] = sym__comment_word;
	v->a[121874] = actions(7049);
	v->a[121875] = 1;
	v->a[121876] = anon_sym_DOLLAR;
	v->a[121877] = actions(6851);
	v->a[121878] = 3;
	v->a[121879] = sym_test_operator;
	small_parse_table_6094(v);
}

void	small_parse_table_6094(t_small_parse_table_array *v)
{
	v->a[121880] = sym__bare_dollar;
	v->a[121881] = sym_raw_string;
	v->a[121882] = state(853);
	v->a[121883] = 7;
	v->a[121884] = sym_arithmetic_expansion;
	v->a[121885] = sym_brace_expression;
	v->a[121886] = sym_string;
	v->a[121887] = sym_number;
	v->a[121888] = sym_simple_expansion;
	v->a[121889] = sym_expansion;
	v->a[121890] = sym_command_substitution;
	v->a[121891] = 16;
	v->a[121892] = actions(3);
	v->a[121893] = 1;
	v->a[121894] = sym_comment;
	v->a[121895] = actions(87);
	v->a[121896] = 1;
	v->a[121897] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121898] = actions(93);
	v->a[121899] = 1;
	small_parse_table_6095(v);
}

/* EOF small_parse_table_1218.c */
