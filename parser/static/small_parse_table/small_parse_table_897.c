/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_897.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4485(t_small_parse_table_array *v)
{
	v->a[89700] = actions(4951);
	v->a[89701] = 1;
	v->a[89702] = sym_variable_name;
	v->a[89703] = state(1476);
	v->a[89704] = 1;
	v->a[89705] = sym__arithmetic_postfix_expression;
	v->a[89706] = state(1478);
	v->a[89707] = 1;
	v->a[89708] = sym__arithmetic_unary_expression;
	v->a[89709] = state(1490);
	v->a[89710] = 1;
	v->a[89711] = sym__arithmetic_ternary_expression;
	v->a[89712] = state(1511);
	v->a[89713] = 1;
	v->a[89714] = sym__arithmetic_binary_expression;
	v->a[89715] = actions(4588);
	v->a[89716] = 2;
	v->a[89717] = anon_sym_PLUS_PLUS;
	v->a[89718] = anon_sym_DASH_DASH;
	v->a[89719] = actions(4590);
	small_parse_table_4486(v);
}

void	small_parse_table_4486(t_small_parse_table_array *v)
{
	v->a[89720] = 2;
	v->a[89721] = anon_sym_DASH2;
	v->a[89722] = anon_sym_PLUS2;
	v->a[89723] = state(1388);
	v->a[89724] = 8;
	v->a[89725] = sym__arithmetic_expression;
	v->a[89726] = sym__arithmetic_literal;
	v->a[89727] = sym__arithmetic_parenthesized_expression;
	v->a[89728] = sym_string;
	v->a[89729] = sym_number;
	v->a[89730] = sym_simple_expansion;
	v->a[89731] = sym_expansion;
	v->a[89732] = sym_command_substitution;
	v->a[89733] = 21;
	v->a[89734] = actions(57);
	v->a[89735] = 1;
	v->a[89736] = sym_comment;
	v->a[89737] = actions(4584);
	v->a[89738] = 1;
	v->a[89739] = anon_sym_LPAREN;
	small_parse_table_4487(v);
}

void	small_parse_table_4487(t_small_parse_table_array *v)
{
	v->a[89740] = actions(4586);
	v->a[89741] = 1;
	v->a[89742] = anon_sym_BANG;
	v->a[89743] = actions(4592);
	v->a[89744] = 1;
	v->a[89745] = anon_sym_TILDE;
	v->a[89746] = actions(4594);
	v->a[89747] = 1;
	v->a[89748] = anon_sym_DOLLAR;
	v->a[89749] = actions(4596);
	v->a[89750] = 1;
	v->a[89751] = anon_sym_DQUOTE;
	v->a[89752] = actions(4598);
	v->a[89753] = 1;
	v->a[89754] = aux_sym_number_token1;
	v->a[89755] = actions(4600);
	v->a[89756] = 1;
	v->a[89757] = aux_sym_number_token2;
	v->a[89758] = actions(4602);
	v->a[89759] = 1;
	small_parse_table_4488(v);
}

void	small_parse_table_4488(t_small_parse_table_array *v)
{
	v->a[89760] = anon_sym_DOLLAR_LBRACE;
	v->a[89761] = actions(4604);
	v->a[89762] = 1;
	v->a[89763] = anon_sym_DOLLAR_LPAREN;
	v->a[89764] = actions(4606);
	v->a[89765] = 1;
	v->a[89766] = anon_sym_BQUOTE;
	v->a[89767] = actions(4608);
	v->a[89768] = 1;
	v->a[89769] = anon_sym_DOLLAR_BQUOTE;
	v->a[89770] = actions(4953);
	v->a[89771] = 1;
	v->a[89772] = aux_sym__simple_variable_name_token1;
	v->a[89773] = actions(4955);
	v->a[89774] = 1;
	v->a[89775] = sym_variable_name;
	v->a[89776] = state(1476);
	v->a[89777] = 1;
	v->a[89778] = sym__arithmetic_postfix_expression;
	v->a[89779] = state(1478);
	small_parse_table_4489(v);
}

void	small_parse_table_4489(t_small_parse_table_array *v)
{
	v->a[89780] = 1;
	v->a[89781] = sym__arithmetic_unary_expression;
	v->a[89782] = state(1490);
	v->a[89783] = 1;
	v->a[89784] = sym__arithmetic_ternary_expression;
	v->a[89785] = state(1511);
	v->a[89786] = 1;
	v->a[89787] = sym__arithmetic_binary_expression;
	v->a[89788] = actions(4588);
	v->a[89789] = 2;
	v->a[89790] = anon_sym_PLUS_PLUS;
	v->a[89791] = anon_sym_DASH_DASH;
	v->a[89792] = actions(4590);
	v->a[89793] = 2;
	v->a[89794] = anon_sym_DASH2;
	v->a[89795] = anon_sym_PLUS2;
	v->a[89796] = state(1501);
	v->a[89797] = 8;
	v->a[89798] = sym__arithmetic_expression;
	v->a[89799] = sym__arithmetic_literal;
	small_parse_table_4490(v);
}

/* EOF small_parse_table_897.c */
