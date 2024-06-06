/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_848.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4240(t_small_parse_table_array *v)
{
	v->a[84800] = 1;
	v->a[84801] = anon_sym_BQUOTE;
	v->a[84802] = actions(4608);
	v->a[84803] = 1;
	v->a[84804] = anon_sym_DOLLAR_BQUOTE;
	v->a[84805] = actions(4717);
	v->a[84806] = 1;
	v->a[84807] = aux_sym__simple_variable_name_token1;
	v->a[84808] = actions(4719);
	v->a[84809] = 1;
	v->a[84810] = sym_variable_name;
	v->a[84811] = state(1476);
	v->a[84812] = 1;
	v->a[84813] = sym__arithmetic_postfix_expression;
	v->a[84814] = state(1478);
	v->a[84815] = 1;
	v->a[84816] = sym__arithmetic_unary_expression;
	v->a[84817] = state(1490);
	v->a[84818] = 1;
	v->a[84819] = sym__arithmetic_ternary_expression;
	small_parse_table_4241(v);
}

void	small_parse_table_4241(t_small_parse_table_array *v)
{
	v->a[84820] = state(1511);
	v->a[84821] = 1;
	v->a[84822] = sym__arithmetic_binary_expression;
	v->a[84823] = actions(4588);
	v->a[84824] = 2;
	v->a[84825] = anon_sym_PLUS_PLUS;
	v->a[84826] = anon_sym_DASH_DASH;
	v->a[84827] = actions(4590);
	v->a[84828] = 2;
	v->a[84829] = anon_sym_DASH2;
	v->a[84830] = anon_sym_PLUS2;
	v->a[84831] = state(1399);
	v->a[84832] = 8;
	v->a[84833] = sym__arithmetic_expression;
	v->a[84834] = sym__arithmetic_literal;
	v->a[84835] = sym__arithmetic_parenthesized_expression;
	v->a[84836] = sym_string;
	v->a[84837] = sym_number;
	v->a[84838] = sym_simple_expansion;
	v->a[84839] = sym_expansion;
	small_parse_table_4242(v);
}

void	small_parse_table_4242(t_small_parse_table_array *v)
{
	v->a[84840] = sym_command_substitution;
	v->a[84841] = 21;
	v->a[84842] = actions(57);
	v->a[84843] = 1;
	v->a[84844] = sym_comment;
	v->a[84845] = actions(4584);
	v->a[84846] = 1;
	v->a[84847] = anon_sym_LPAREN;
	v->a[84848] = actions(4586);
	v->a[84849] = 1;
	v->a[84850] = anon_sym_BANG;
	v->a[84851] = actions(4592);
	v->a[84852] = 1;
	v->a[84853] = anon_sym_TILDE;
	v->a[84854] = actions(4594);
	v->a[84855] = 1;
	v->a[84856] = anon_sym_DOLLAR;
	v->a[84857] = actions(4596);
	v->a[84858] = 1;
	v->a[84859] = anon_sym_DQUOTE;
	small_parse_table_4243(v);
}

void	small_parse_table_4243(t_small_parse_table_array *v)
{
	v->a[84860] = actions(4598);
	v->a[84861] = 1;
	v->a[84862] = aux_sym_number_token1;
	v->a[84863] = actions(4600);
	v->a[84864] = 1;
	v->a[84865] = aux_sym_number_token2;
	v->a[84866] = actions(4602);
	v->a[84867] = 1;
	v->a[84868] = anon_sym_DOLLAR_LBRACE;
	v->a[84869] = actions(4604);
	v->a[84870] = 1;
	v->a[84871] = anon_sym_DOLLAR_LPAREN;
	v->a[84872] = actions(4606);
	v->a[84873] = 1;
	v->a[84874] = anon_sym_BQUOTE;
	v->a[84875] = actions(4608);
	v->a[84876] = 1;
	v->a[84877] = anon_sym_DOLLAR_BQUOTE;
	v->a[84878] = actions(4721);
	v->a[84879] = 1;
	small_parse_table_4244(v);
}

void	small_parse_table_4244(t_small_parse_table_array *v)
{
	v->a[84880] = aux_sym__simple_variable_name_token1;
	v->a[84881] = actions(4723);
	v->a[84882] = 1;
	v->a[84883] = sym_variable_name;
	v->a[84884] = state(1476);
	v->a[84885] = 1;
	v->a[84886] = sym__arithmetic_postfix_expression;
	v->a[84887] = state(1478);
	v->a[84888] = 1;
	v->a[84889] = sym__arithmetic_unary_expression;
	v->a[84890] = state(1490);
	v->a[84891] = 1;
	v->a[84892] = sym__arithmetic_ternary_expression;
	v->a[84893] = state(1511);
	v->a[84894] = 1;
	v->a[84895] = sym__arithmetic_binary_expression;
	v->a[84896] = actions(4588);
	v->a[84897] = 2;
	v->a[84898] = anon_sym_PLUS_PLUS;
	v->a[84899] = anon_sym_DASH_DASH;
	small_parse_table_4245(v);
}

/* EOF small_parse_table_848.c */
