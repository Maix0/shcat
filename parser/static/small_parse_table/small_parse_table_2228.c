/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2228.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11140(t_small_parse_table_array *v)
{
	v->a[222800] = 1;
	v->a[222801] = aux_sym_number_token1;
	v->a[222802] = actions(9294);
	v->a[222803] = 1;
	v->a[222804] = aux_sym_number_token2;
	v->a[222805] = actions(9296);
	v->a[222806] = 1;
	v->a[222807] = anon_sym_DOLLAR_LBRACE;
	v->a[222808] = actions(9298);
	v->a[222809] = 1;
	v->a[222810] = anon_sym_DOLLAR_LPAREN;
	v->a[222811] = actions(9300);
	v->a[222812] = 1;
	v->a[222813] = anon_sym_BQUOTE;
	v->a[222814] = actions(9302);
	v->a[222815] = 1;
	v->a[222816] = anon_sym_DOLLAR_BQUOTE;
	v->a[222817] = actions(10638);
	v->a[222818] = 1;
	v->a[222819] = aux_sym__simple_variable_name_token1;
	small_parse_table_11141(v);
}

void	small_parse_table_11141(t_small_parse_table_array *v)
{
	v->a[222820] = state(2801);
	v->a[222821] = 1;
	v->a[222822] = sym__arithmetic_binary_expression;
	v->a[222823] = state(2803);
	v->a[222824] = 1;
	v->a[222825] = sym__arithmetic_ternary_expression;
	v->a[222826] = state(2809);
	v->a[222827] = 1;
	v->a[222828] = sym__arithmetic_unary_expression;
	v->a[222829] = state(2825);
	v->a[222830] = 1;
	v->a[222831] = sym__arithmetic_postfix_expression;
	v->a[222832] = actions(9282);
	v->a[222833] = 2;
	v->a[222834] = anon_sym_PLUS_PLUS2;
	v->a[222835] = anon_sym_DASH_DASH2;
	v->a[222836] = actions(9284);
	v->a[222837] = 2;
	v->a[222838] = anon_sym_DASH2;
	v->a[222839] = anon_sym_PLUS2;
	small_parse_table_11142(v);
}

void	small_parse_table_11142(t_small_parse_table_array *v)
{
	v->a[222840] = state(2766);
	v->a[222841] = 9;
	v->a[222842] = sym_subscript;
	v->a[222843] = sym__arithmetic_expression;
	v->a[222844] = sym__arithmetic_literal;
	v->a[222845] = sym__arithmetic_parenthesized_expression;
	v->a[222846] = sym_string;
	v->a[222847] = sym_number;
	v->a[222848] = sym_simple_expansion;
	v->a[222849] = sym_expansion;
	v->a[222850] = sym_command_substitution;
	v->a[222851] = 18;
	v->a[222852] = actions(3);
	v->a[222853] = 1;
	v->a[222854] = sym_comment;
	v->a[222855] = actions(707);
	v->a[222856] = 1;
	v->a[222857] = anon_sym_DOLLAR_LBRACK;
	v->a[222858] = actions(713);
	v->a[222859] = 1;
	small_parse_table_11143(v);
}

void	small_parse_table_11143(t_small_parse_table_array *v)
{
	v->a[222860] = anon_sym_DQUOTE;
	v->a[222861] = actions(717);
	v->a[222862] = 1;
	v->a[222863] = aux_sym_number_token1;
	v->a[222864] = actions(719);
	v->a[222865] = 1;
	v->a[222866] = aux_sym_number_token2;
	v->a[222867] = actions(721);
	v->a[222868] = 1;
	v->a[222869] = anon_sym_DOLLAR_LBRACE;
	v->a[222870] = actions(723);
	v->a[222871] = 1;
	v->a[222872] = anon_sym_DOLLAR_LPAREN;
	v->a[222873] = actions(725);
	v->a[222874] = 1;
	v->a[222875] = anon_sym_BQUOTE;
	v->a[222876] = actions(727);
	v->a[222877] = 1;
	v->a[222878] = anon_sym_DOLLAR_BQUOTE;
	v->a[222879] = actions(737);
	small_parse_table_11144(v);
}

void	small_parse_table_11144(t_small_parse_table_array *v)
{
	v->a[222880] = 1;
	v->a[222881] = sym__brace_start;
	v->a[222882] = actions(10464);
	v->a[222883] = 1;
	v->a[222884] = sym_word;
	v->a[222885] = actions(10470);
	v->a[222886] = 1;
	v->a[222887] = sym__comment_word;
	v->a[222888] = actions(10640);
	v->a[222889] = 1;
	v->a[222890] = anon_sym_DOLLAR;
	v->a[222891] = actions(705);
	v->a[222892] = 2;
	v->a[222893] = anon_sym_LPAREN_LPAREN;
	v->a[222894] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[222895] = actions(729);
	v->a[222896] = 2;
	v->a[222897] = anon_sym_LT_LPAREN;
	v->a[222898] = anon_sym_GT_LPAREN;
	v->a[222899] = actions(10466);
	small_parse_table_11145(v);
}

/* EOF small_parse_table_2228.c */
