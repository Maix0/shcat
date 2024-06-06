/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_858.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4290(t_small_parse_table_array *v)
{
	v->a[85800] = 8;
	v->a[85801] = sym__arithmetic_expression;
	v->a[85802] = sym__arithmetic_literal;
	v->a[85803] = sym__arithmetic_parenthesized_expression;
	v->a[85804] = sym_string;
	v->a[85805] = sym_number;
	v->a[85806] = sym_simple_expansion;
	v->a[85807] = sym_expansion;
	v->a[85808] = sym_command_substitution;
	v->a[85809] = 21;
	v->a[85810] = actions(57);
	v->a[85811] = 1;
	v->a[85812] = sym_comment;
	v->a[85813] = actions(4584);
	v->a[85814] = 1;
	v->a[85815] = anon_sym_LPAREN;
	v->a[85816] = actions(4586);
	v->a[85817] = 1;
	v->a[85818] = anon_sym_BANG;
	v->a[85819] = actions(4592);
	small_parse_table_4291(v);
}

void	small_parse_table_4291(t_small_parse_table_array *v)
{
	v->a[85820] = 1;
	v->a[85821] = anon_sym_TILDE;
	v->a[85822] = actions(4594);
	v->a[85823] = 1;
	v->a[85824] = anon_sym_DOLLAR;
	v->a[85825] = actions(4596);
	v->a[85826] = 1;
	v->a[85827] = anon_sym_DQUOTE;
	v->a[85828] = actions(4598);
	v->a[85829] = 1;
	v->a[85830] = aux_sym_number_token1;
	v->a[85831] = actions(4600);
	v->a[85832] = 1;
	v->a[85833] = aux_sym_number_token2;
	v->a[85834] = actions(4602);
	v->a[85835] = 1;
	v->a[85836] = anon_sym_DOLLAR_LBRACE;
	v->a[85837] = actions(4604);
	v->a[85838] = 1;
	v->a[85839] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4292(v);
}

void	small_parse_table_4292(t_small_parse_table_array *v)
{
	v->a[85840] = actions(4606);
	v->a[85841] = 1;
	v->a[85842] = anon_sym_BQUOTE;
	v->a[85843] = actions(4608);
	v->a[85844] = 1;
	v->a[85845] = anon_sym_DOLLAR_BQUOTE;
	v->a[85846] = actions(4791);
	v->a[85847] = 1;
	v->a[85848] = aux_sym__simple_variable_name_token1;
	v->a[85849] = actions(4793);
	v->a[85850] = 1;
	v->a[85851] = sym_variable_name;
	v->a[85852] = state(1476);
	v->a[85853] = 1;
	v->a[85854] = sym__arithmetic_postfix_expression;
	v->a[85855] = state(1478);
	v->a[85856] = 1;
	v->a[85857] = sym__arithmetic_unary_expression;
	v->a[85858] = state(1490);
	v->a[85859] = 1;
	small_parse_table_4293(v);
}

void	small_parse_table_4293(t_small_parse_table_array *v)
{
	v->a[85860] = sym__arithmetic_ternary_expression;
	v->a[85861] = state(1511);
	v->a[85862] = 1;
	v->a[85863] = sym__arithmetic_binary_expression;
	v->a[85864] = actions(4588);
	v->a[85865] = 2;
	v->a[85866] = anon_sym_PLUS_PLUS;
	v->a[85867] = anon_sym_DASH_DASH;
	v->a[85868] = actions(4590);
	v->a[85869] = 2;
	v->a[85870] = anon_sym_DASH2;
	v->a[85871] = anon_sym_PLUS2;
	v->a[85872] = state(1468);
	v->a[85873] = 8;
	v->a[85874] = sym__arithmetic_expression;
	v->a[85875] = sym__arithmetic_literal;
	v->a[85876] = sym__arithmetic_parenthesized_expression;
	v->a[85877] = sym_string;
	v->a[85878] = sym_number;
	v->a[85879] = sym_simple_expansion;
	small_parse_table_4294(v);
}

void	small_parse_table_4294(t_small_parse_table_array *v)
{
	v->a[85880] = sym_expansion;
	v->a[85881] = sym_command_substitution;
	v->a[85882] = 21;
	v->a[85883] = actions(57);
	v->a[85884] = 1;
	v->a[85885] = sym_comment;
	v->a[85886] = actions(4328);
	v->a[85887] = 1;
	v->a[85888] = sym_word;
	v->a[85889] = actions(4340);
	v->a[85890] = 1;
	v->a[85891] = anon_sym_DOLLAR;
	v->a[85892] = actions(4346);
	v->a[85893] = 1;
	v->a[85894] = aux_sym_number_token1;
	v->a[85895] = actions(4348);
	v->a[85896] = 1;
	v->a[85897] = aux_sym_number_token2;
	v->a[85898] = actions(4352);
	v->a[85899] = 1;
	small_parse_table_4295(v);
}

/* EOF small_parse_table_858.c */
