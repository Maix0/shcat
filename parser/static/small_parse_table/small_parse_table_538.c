/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_538.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2690(t_small_parse_table_array *v)
{
	v->a[53800] = actions(1756);
	v->a[53801] = 1;
	v->a[53802] = anon_sym_DOLLAR;
	v->a[53803] = actions(1758);
	v->a[53804] = 1;
	v->a[53805] = anon_sym_DQUOTE;
	v->a[53806] = actions(1762);
	v->a[53807] = 1;
	v->a[53808] = anon_sym_DOLLAR_LBRACE;
	v->a[53809] = actions(1764);
	v->a[53810] = 1;
	v->a[53811] = anon_sym_DOLLAR_LPAREN;
	v->a[53812] = actions(1766);
	v->a[53813] = 1;
	v->a[53814] = anon_sym_BQUOTE;
	v->a[53815] = actions(1768);
	v->a[53816] = 1;
	v->a[53817] = sym_variable_name;
	v->a[53818] = actions(1886);
	v->a[53819] = 1;
	small_parse_table_2691(v);
}

void	small_parse_table_2691(t_small_parse_table_array *v)
{
	v->a[53820] = anon_sym_RPAREN_RPAREN;
	v->a[53821] = actions(1750);
	v->a[53822] = 2;
	v->a[53823] = anon_sym_PLUS_PLUS;
	v->a[53824] = anon_sym_DASH_DASH;
	v->a[53825] = actions(1752);
	v->a[53826] = 2;
	v->a[53827] = anon_sym_DASH2;
	v->a[53828] = anon_sym_PLUS2;
	v->a[53829] = actions(1760);
	v->a[53830] = 2;
	v->a[53831] = sym_number;
	v->a[53832] = aux_sym__simple_variable_name_token1;
	v->a[53833] = state(271);
	v->a[53834] = 3;
	v->a[53835] = sym_string;
	v->a[53836] = sym_simple_expansion;
	v->a[53837] = sym_expansion;
	v->a[53838] = state(383);
	v->a[53839] = 8;
	small_parse_table_2692(v);
}

void	small_parse_table_2692(t_small_parse_table_array *v)
{
	v->a[53840] = sym__arithmetic_expression;
	v->a[53841] = sym_arithmetic_literal;
	v->a[53842] = sym_arithmetic_binary_expression;
	v->a[53843] = sym_arithmetic_ternary_expression;
	v->a[53844] = sym_arithmetic_unary_expression;
	v->a[53845] = sym_arithmetic_postfix_expression;
	v->a[53846] = sym_arithmetic_parenthesized_expression;
	v->a[53847] = sym_command_substitution;
	v->a[53848] = 6;
	v->a[53849] = actions(3);
	v->a[53850] = 1;
	v->a[53851] = sym_comment;
	v->a[53852] = actions(1814);
	v->a[53853] = 1;
	v->a[53854] = aux_sym_concatenation_token1;
	v->a[53855] = actions(1816);
	v->a[53856] = 1;
	v->a[53857] = sym__concat;
	v->a[53858] = state(852);
	v->a[53859] = 1;
	small_parse_table_2693(v);
}

void	small_parse_table_2693(t_small_parse_table_array *v)
{
	v->a[53860] = aux_sym_concatenation_repeat1;
	v->a[53861] = actions(1238);
	v->a[53862] = 2;
	v->a[53863] = sym_file_descriptor;
	v->a[53864] = sym_variable_name;
	v->a[53865] = actions(1234);
	v->a[53866] = 22;
	v->a[53867] = anon_sym_PIPE;
	v->a[53868] = anon_sym_AMP_AMP;
	v->a[53869] = anon_sym_PIPE_PIPE;
	v->a[53870] = anon_sym_LT;
	v->a[53871] = anon_sym_GT;
	v->a[53872] = anon_sym_GT_GT;
	v->a[53873] = anon_sym_LT_AMP;
	v->a[53874] = anon_sym_GT_AMP;
	v->a[53875] = anon_sym_GT_PIPE;
	v->a[53876] = anon_sym_LT_AMP_DASH;
	v->a[53877] = anon_sym_GT_AMP_DASH;
	v->a[53878] = anon_sym_LT_LT;
	v->a[53879] = anon_sym_LT_LT_DASH;
	small_parse_table_2694(v);
}

void	small_parse_table_2694(t_small_parse_table_array *v)
{
	v->a[53880] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53881] = anon_sym_DOLLAR;
	v->a[53882] = anon_sym_DQUOTE;
	v->a[53883] = sym_raw_string;
	v->a[53884] = sym_number;
	v->a[53885] = anon_sym_DOLLAR_LBRACE;
	v->a[53886] = anon_sym_DOLLAR_LPAREN;
	v->a[53887] = anon_sym_BQUOTE;
	v->a[53888] = sym_word;
	v->a[53889] = 6;
	v->a[53890] = actions(3);
	v->a[53891] = 1;
	v->a[53892] = sym_comment;
	v->a[53893] = actions(1888);
	v->a[53894] = 1;
	v->a[53895] = aux_sym_concatenation_token1;
	v->a[53896] = actions(1891);
	v->a[53897] = 1;
	v->a[53898] = sym__concat;
	v->a[53899] = state(881);
	small_parse_table_2695(v);
}

/* EOF small_parse_table_538.c */
