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
	v->a[53800] = anon_sym_TILDE;
	v->a[53801] = actions(1991);
	v->a[53802] = 1;
	v->a[53803] = anon_sym_DOLLAR;
	v->a[53804] = actions(1993);
	v->a[53805] = 1;
	v->a[53806] = anon_sym_DQUOTE;
	v->a[53807] = actions(1995);
	v->a[53808] = 1;
	v->a[53809] = aux_sym_number_token1;
	v->a[53810] = actions(1997);
	v->a[53811] = 1;
	v->a[53812] = aux_sym_number_token2;
	v->a[53813] = actions(1999);
	v->a[53814] = 1;
	v->a[53815] = anon_sym_DOLLAR_LBRACE;
	v->a[53816] = actions(2001);
	v->a[53817] = 1;
	v->a[53818] = anon_sym_DOLLAR_LPAREN;
	v->a[53819] = actions(2003);
	small_parse_table_2691(v);
}

void	small_parse_table_2691(t_small_parse_table_array *v)
{
	v->a[53820] = 1;
	v->a[53821] = anon_sym_BQUOTE;
	v->a[53822] = actions(2005);
	v->a[53823] = 1;
	v->a[53824] = aux_sym__simple_variable_name_token1;
	v->a[53825] = actions(2007);
	v->a[53826] = 1;
	v->a[53827] = sym_variable_name;
	v->a[53828] = actions(2009);
	v->a[53829] = 1;
	v->a[53830] = anon_sym_RPAREN_RPAREN;
	v->a[53831] = actions(1985);
	v->a[53832] = 2;
	v->a[53833] = anon_sym_PLUS_PLUS;
	v->a[53834] = anon_sym_DASH_DASH;
	v->a[53835] = actions(1987);
	v->a[53836] = 2;
	v->a[53837] = anon_sym_DASH2;
	v->a[53838] = anon_sym_PLUS2;
	v->a[53839] = state(530);
	small_parse_table_2692(v);
}

void	small_parse_table_2692(t_small_parse_table_array *v)
{
	v->a[53840] = 4;
	v->a[53841] = sym_string;
	v->a[53842] = sym_number;
	v->a[53843] = sym_simple_expansion;
	v->a[53844] = sym_expansion;
	v->a[53845] = state(573);
	v->a[53846] = 8;
	v->a[53847] = sym__arithmetic_expression;
	v->a[53848] = sym_arithmetic_literal;
	v->a[53849] = sym_arithmetic_binary_expression;
	v->a[53850] = sym_arithmetic_ternary_expression;
	v->a[53851] = sym_arithmetic_unary_expression;
	v->a[53852] = sym_arithmetic_postfix_expression;
	v->a[53853] = sym_arithmetic_parenthesized_expression;
	v->a[53854] = sym_command_substitution;
	v->a[53855] = 6;
	v->a[53856] = actions(3);
	v->a[53857] = 1;
	v->a[53858] = sym_comment;
	v->a[53859] = actions(413);
	small_parse_table_2693(v);
}

void	small_parse_table_2693(t_small_parse_table_array *v)
{
	v->a[53860] = 1;
	v->a[53861] = sym_file_descriptor;
	v->a[53862] = actions(1672);
	v->a[53863] = 1;
	v->a[53864] = sym_variable_name;
	v->a[53865] = actions(1670);
	v->a[53866] = 2;
	v->a[53867] = aux_sym__simple_variable_name_token1;
	v->a[53868] = aux_sym__multiline_variable_name_token1;
	v->a[53869] = actions(1668);
	v->a[53870] = 9;
	v->a[53871] = anon_sym_BANG;
	v->a[53872] = anon_sym_DASH;
	v->a[53873] = anon_sym_STAR;
	v->a[53874] = anon_sym_QMARK;
	v->a[53875] = anon_sym_DOLLAR;
	v->a[53876] = anon_sym_POUND;
	v->a[53877] = anon_sym_AT;
	v->a[53878] = anon_sym_0;
	v->a[53879] = anon_sym__;
	small_parse_table_2694(v);
}

void	small_parse_table_2694(t_small_parse_table_array *v)
{
	v->a[53880] = actions(407);
	v->a[53881] = 16;
	v->a[53882] = anon_sym_PIPE;
	v->a[53883] = anon_sym_AMP_AMP;
	v->a[53884] = anon_sym_PIPE_PIPE;
	v->a[53885] = anon_sym_LT;
	v->a[53886] = anon_sym_GT;
	v->a[53887] = anon_sym_GT_GT;
	v->a[53888] = anon_sym_AMP_GT;
	v->a[53889] = anon_sym_AMP_GT_GT;
	v->a[53890] = anon_sym_LT_AMP;
	v->a[53891] = anon_sym_GT_AMP;
	v->a[53892] = anon_sym_GT_PIPE;
	v->a[53893] = anon_sym_LT_AMP_DASH;
	v->a[53894] = anon_sym_GT_AMP_DASH;
	v->a[53895] = anon_sym_LT_LT;
	v->a[53896] = anon_sym_LT_LT_DASH;
	v->a[53897] = aux_sym_heredoc_redirect_token1;
	v->a[53898] = 18;
	v->a[53899] = actions(1404);
	small_parse_table_2695(v);
}

/* EOF small_parse_table_538.c */
