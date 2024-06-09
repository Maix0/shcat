/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_598.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2990(t_small_parse_table_array *v)
{
	v->a[59800] = actions(2085);
	v->a[59801] = 1;
	v->a[59802] = anon_sym_TILDE;
	v->a[59803] = actions(2087);
	v->a[59804] = 1;
	v->a[59805] = anon_sym_DOLLAR;
	v->a[59806] = actions(2089);
	v->a[59807] = 1;
	v->a[59808] = anon_sym_DQUOTE;
	v->a[59809] = actions(2091);
	v->a[59810] = 1;
	v->a[59811] = aux_sym_number_token1;
	v->a[59812] = actions(2093);
	v->a[59813] = 1;
	v->a[59814] = aux_sym_number_token2;
	v->a[59815] = actions(2095);
	v->a[59816] = 1;
	v->a[59817] = anon_sym_DOLLAR_LBRACE;
	v->a[59818] = actions(2097);
	v->a[59819] = 1;
	small_parse_table_2991(v);
}

void	small_parse_table_2991(t_small_parse_table_array *v)
{
	v->a[59820] = anon_sym_DOLLAR_LPAREN;
	v->a[59821] = actions(2099);
	v->a[59822] = 1;
	v->a[59823] = anon_sym_BQUOTE;
	v->a[59824] = actions(2101);
	v->a[59825] = 1;
	v->a[59826] = aux_sym__simple_variable_name_token1;
	v->a[59827] = actions(2103);
	v->a[59828] = 1;
	v->a[59829] = sym_variable_name;
	v->a[59830] = actions(2081);
	v->a[59831] = 2;
	v->a[59832] = anon_sym_PLUS_PLUS;
	v->a[59833] = anon_sym_DASH_DASH;
	v->a[59834] = actions(2083);
	v->a[59835] = 2;
	v->a[59836] = anon_sym_DASH2;
	v->a[59837] = anon_sym_PLUS2;
	v->a[59838] = state(588);
	v->a[59839] = 4;
	small_parse_table_2992(v);
}

void	small_parse_table_2992(t_small_parse_table_array *v)
{
	v->a[59840] = sym_string;
	v->a[59841] = sym_number;
	v->a[59842] = sym_simple_expansion;
	v->a[59843] = sym_expansion;
	v->a[59844] = state(636);
	v->a[59845] = 8;
	v->a[59846] = sym__arithmetic_expression;
	v->a[59847] = sym_arithmetic_literal;
	v->a[59848] = sym_arithmetic_binary_expression;
	v->a[59849] = sym_arithmetic_ternary_expression;
	v->a[59850] = sym_arithmetic_unary_expression;
	v->a[59851] = sym_arithmetic_postfix_expression;
	v->a[59852] = sym_arithmetic_parenthesized_expression;
	v->a[59853] = sym_command_substitution;
	v->a[59854] = 19;
	v->a[59855] = actions(3);
	v->a[59856] = 1;
	v->a[59857] = sym_comment;
	v->a[59858] = actions(2115);
	v->a[59859] = 1;
	small_parse_table_2993(v);
}

void	small_parse_table_2993(t_small_parse_table_array *v)
{
	v->a[59860] = anon_sym_LPAREN;
	v->a[59861] = actions(2119);
	v->a[59862] = 1;
	v->a[59863] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59864] = actions(2121);
	v->a[59865] = 1;
	v->a[59866] = anon_sym_DOLLAR;
	v->a[59867] = actions(2123);
	v->a[59868] = 1;
	v->a[59869] = anon_sym_DQUOTE;
	v->a[59870] = actions(2125);
	v->a[59871] = 1;
	v->a[59872] = aux_sym_number_token1;
	v->a[59873] = actions(2127);
	v->a[59874] = 1;
	v->a[59875] = aux_sym_number_token2;
	v->a[59876] = actions(2129);
	v->a[59877] = 1;
	v->a[59878] = anon_sym_DOLLAR_LBRACE;
	v->a[59879] = actions(2131);
	small_parse_table_2994(v);
}

void	small_parse_table_2994(t_small_parse_table_array *v)
{
	v->a[59880] = 1;
	v->a[59881] = anon_sym_DOLLAR_LPAREN;
	v->a[59882] = actions(2133);
	v->a[59883] = 1;
	v->a[59884] = anon_sym_BQUOTE;
	v->a[59885] = actions(2135);
	v->a[59886] = 1;
	v->a[59887] = sym_extglob_pattern;
	v->a[59888] = actions(2155);
	v->a[59889] = 1;
	v->a[59890] = anon_sym_esac;
	v->a[59891] = state(1114);
	v->a[59892] = 1;
	v->a[59893] = aux_sym_case_statement_repeat1;
	v->a[59894] = state(1786);
	v->a[59895] = 1;
	v->a[59896] = sym_case_item;
	v->a[59897] = state(2257);
	v->a[59898] = 1;
	v->a[59899] = sym__case_item_last;
	small_parse_table_2995(v);
}

/* EOF small_parse_table_598.c */
