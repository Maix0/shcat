/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_528.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2640(t_small_parse_table_array *v)
{
	v->a[52800] = anon_sym_BQUOTE;
	v->a[52801] = sym_word;
	v->a[52802] = 3;
	v->a[52803] = actions(3);
	v->a[52804] = 1;
	v->a[52805] = sym_comment;
	v->a[52806] = actions(1037);
	v->a[52807] = 3;
	v->a[52808] = sym_file_descriptor;
	v->a[52809] = sym__concat;
	v->a[52810] = sym__bare_dollar;
	v->a[52811] = actions(1035);
	v->a[52812] = 24;
	v->a[52813] = anon_sym_LPAREN;
	v->a[52814] = anon_sym_PIPE;
	v->a[52815] = anon_sym_AMP_AMP;
	v->a[52816] = anon_sym_PIPE_PIPE;
	v->a[52817] = anon_sym_LT;
	v->a[52818] = anon_sym_GT;
	v->a[52819] = anon_sym_GT_GT;
	small_parse_table_2641(v);
}

void	small_parse_table_2641(t_small_parse_table_array *v)
{
	v->a[52820] = anon_sym_LT_AMP;
	v->a[52821] = anon_sym_GT_AMP;
	v->a[52822] = anon_sym_GT_PIPE;
	v->a[52823] = anon_sym_LT_AMP_DASH;
	v->a[52824] = anon_sym_GT_AMP_DASH;
	v->a[52825] = anon_sym_LT_LT;
	v->a[52826] = anon_sym_LT_LT_DASH;
	v->a[52827] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52828] = aux_sym_concatenation_token1;
	v->a[52829] = anon_sym_DOLLAR;
	v->a[52830] = anon_sym_DQUOTE;
	v->a[52831] = sym_raw_string;
	v->a[52832] = sym_number;
	v->a[52833] = anon_sym_DOLLAR_LBRACE;
	v->a[52834] = anon_sym_DOLLAR_LPAREN;
	v->a[52835] = anon_sym_BQUOTE;
	v->a[52836] = sym_word;
	v->a[52837] = 16;
	v->a[52838] = actions(870);
	v->a[52839] = 1;
	small_parse_table_2642(v);
}

void	small_parse_table_2642(t_small_parse_table_array *v)
{
	v->a[52840] = sym_comment;
	v->a[52841] = actions(1744);
	v->a[52842] = 1;
	v->a[52843] = anon_sym_LPAREN;
	v->a[52844] = actions(1746);
	v->a[52845] = 1;
	v->a[52846] = anon_sym_BANG;
	v->a[52847] = actions(1754);
	v->a[52848] = 1;
	v->a[52849] = anon_sym_TILDE;
	v->a[52850] = actions(1756);
	v->a[52851] = 1;
	v->a[52852] = anon_sym_DOLLAR;
	v->a[52853] = actions(1758);
	v->a[52854] = 1;
	v->a[52855] = anon_sym_DQUOTE;
	v->a[52856] = actions(1762);
	v->a[52857] = 1;
	v->a[52858] = anon_sym_DOLLAR_LBRACE;
	v->a[52859] = actions(1764);
	small_parse_table_2643(v);
}

void	small_parse_table_2643(t_small_parse_table_array *v)
{
	v->a[52860] = 1;
	v->a[52861] = anon_sym_DOLLAR_LPAREN;
	v->a[52862] = actions(1766);
	v->a[52863] = 1;
	v->a[52864] = anon_sym_BQUOTE;
	v->a[52865] = actions(1768);
	v->a[52866] = 1;
	v->a[52867] = sym_variable_name;
	v->a[52868] = actions(1856);
	v->a[52869] = 1;
	v->a[52870] = anon_sym_RPAREN_RPAREN;
	v->a[52871] = actions(1750);
	v->a[52872] = 2;
	v->a[52873] = anon_sym_PLUS_PLUS;
	v->a[52874] = anon_sym_DASH_DASH;
	v->a[52875] = actions(1752);
	v->a[52876] = 2;
	v->a[52877] = anon_sym_DASH2;
	v->a[52878] = anon_sym_PLUS2;
	v->a[52879] = actions(1760);
	small_parse_table_2644(v);
}

void	small_parse_table_2644(t_small_parse_table_array *v)
{
	v->a[52880] = 2;
	v->a[52881] = sym_number;
	v->a[52882] = aux_sym__simple_variable_name_token1;
	v->a[52883] = state(271);
	v->a[52884] = 3;
	v->a[52885] = sym_string;
	v->a[52886] = sym_simple_expansion;
	v->a[52887] = sym_expansion;
	v->a[52888] = state(335);
	v->a[52889] = 8;
	v->a[52890] = sym__arithmetic_expression;
	v->a[52891] = sym_arithmetic_literal;
	v->a[52892] = sym_arithmetic_binary_expression;
	v->a[52893] = sym_arithmetic_ternary_expression;
	v->a[52894] = sym_arithmetic_unary_expression;
	v->a[52895] = sym_arithmetic_postfix_expression;
	v->a[52896] = sym_arithmetic_parenthesized_expression;
	v->a[52897] = sym_command_substitution;
	v->a[52898] = 16;
	v->a[52899] = actions(870);
	small_parse_table_2645(v);
}

/* EOF small_parse_table_528.c */
