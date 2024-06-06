/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_907.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4535(t_small_parse_table_array *v)
{
	v->a[90700] = 1;
	v->a[90701] = sym__arithmetic_ternary_expression;
	v->a[90702] = state(1511);
	v->a[90703] = 1;
	v->a[90704] = sym__arithmetic_binary_expression;
	v->a[90705] = actions(4588);
	v->a[90706] = 2;
	v->a[90707] = anon_sym_PLUS_PLUS;
	v->a[90708] = anon_sym_DASH_DASH;
	v->a[90709] = actions(4590);
	v->a[90710] = 2;
	v->a[90711] = anon_sym_DASH2;
	v->a[90712] = anon_sym_PLUS2;
	v->a[90713] = state(1401);
	v->a[90714] = 8;
	v->a[90715] = sym__arithmetic_expression;
	v->a[90716] = sym__arithmetic_literal;
	v->a[90717] = sym__arithmetic_parenthesized_expression;
	v->a[90718] = sym_string;
	v->a[90719] = sym_number;
	small_parse_table_4536(v);
}

void	small_parse_table_4536(t_small_parse_table_array *v)
{
	v->a[90720] = sym_simple_expansion;
	v->a[90721] = sym_expansion;
	v->a[90722] = sym_command_substitution;
	v->a[90723] = 21;
	v->a[90724] = actions(57);
	v->a[90725] = 1;
	v->a[90726] = sym_comment;
	v->a[90727] = actions(4584);
	v->a[90728] = 1;
	v->a[90729] = anon_sym_LPAREN;
	v->a[90730] = actions(4586);
	v->a[90731] = 1;
	v->a[90732] = anon_sym_BANG;
	v->a[90733] = actions(4592);
	v->a[90734] = 1;
	v->a[90735] = anon_sym_TILDE;
	v->a[90736] = actions(4594);
	v->a[90737] = 1;
	v->a[90738] = anon_sym_DOLLAR;
	v->a[90739] = actions(4596);
	small_parse_table_4537(v);
}

void	small_parse_table_4537(t_small_parse_table_array *v)
{
	v->a[90740] = 1;
	v->a[90741] = anon_sym_DQUOTE;
	v->a[90742] = actions(4598);
	v->a[90743] = 1;
	v->a[90744] = aux_sym_number_token1;
	v->a[90745] = actions(4600);
	v->a[90746] = 1;
	v->a[90747] = aux_sym_number_token2;
	v->a[90748] = actions(4602);
	v->a[90749] = 1;
	v->a[90750] = anon_sym_DOLLAR_LBRACE;
	v->a[90751] = actions(4604);
	v->a[90752] = 1;
	v->a[90753] = anon_sym_DOLLAR_LPAREN;
	v->a[90754] = actions(4606);
	v->a[90755] = 1;
	v->a[90756] = anon_sym_BQUOTE;
	v->a[90757] = actions(4608);
	v->a[90758] = 1;
	v->a[90759] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4538(v);
}

void	small_parse_table_4538(t_small_parse_table_array *v)
{
	v->a[90760] = actions(5005);
	v->a[90761] = 1;
	v->a[90762] = aux_sym__simple_variable_name_token1;
	v->a[90763] = actions(5007);
	v->a[90764] = 1;
	v->a[90765] = sym_variable_name;
	v->a[90766] = state(1476);
	v->a[90767] = 1;
	v->a[90768] = sym__arithmetic_postfix_expression;
	v->a[90769] = state(1478);
	v->a[90770] = 1;
	v->a[90771] = sym__arithmetic_unary_expression;
	v->a[90772] = state(1490);
	v->a[90773] = 1;
	v->a[90774] = sym__arithmetic_ternary_expression;
	v->a[90775] = state(1511);
	v->a[90776] = 1;
	v->a[90777] = sym__arithmetic_binary_expression;
	v->a[90778] = actions(4588);
	v->a[90779] = 2;
	small_parse_table_4539(v);
}

void	small_parse_table_4539(t_small_parse_table_array *v)
{
	v->a[90780] = anon_sym_PLUS_PLUS;
	v->a[90781] = anon_sym_DASH_DASH;
	v->a[90782] = actions(4590);
	v->a[90783] = 2;
	v->a[90784] = anon_sym_DASH2;
	v->a[90785] = anon_sym_PLUS2;
	v->a[90786] = state(1423);
	v->a[90787] = 8;
	v->a[90788] = sym__arithmetic_expression;
	v->a[90789] = sym__arithmetic_literal;
	v->a[90790] = sym__arithmetic_parenthesized_expression;
	v->a[90791] = sym_string;
	v->a[90792] = sym_number;
	v->a[90793] = sym_simple_expansion;
	v->a[90794] = sym_expansion;
	v->a[90795] = sym_command_substitution;
	v->a[90796] = 21;
	v->a[90797] = actions(57);
	v->a[90798] = 1;
	v->a[90799] = sym_comment;
	small_parse_table_4540(v);
}

/* EOF small_parse_table_907.c */
