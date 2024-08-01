/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_347.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1735(t_small_parse_table_array *v)
{
	v->a[34700] = sym_number;
	v->a[34701] = anon_sym_DOLLAR_LBRACE;
	v->a[34702] = anon_sym_DOLLAR_LPAREN;
	v->a[34703] = anon_sym_BQUOTE;
	v->a[34704] = sym_word;
	v->a[34705] = 10;
	v->a[34706] = actions(1424);
	v->a[34707] = 1;
	v->a[34708] = anon_sym_LPAREN;
	v->a[34709] = actions(1428);
	v->a[34710] = 1;
	v->a[34711] = anon_sym_DOLLAR;
	v->a[34712] = actions(1430);
	v->a[34713] = 1;
	v->a[34714] = anon_sym_DQUOTE;
	v->a[34715] = actions(1434);
	v->a[34716] = 1;
	v->a[34717] = anon_sym_DOLLAR_LBRACE;
	v->a[34718] = actions(1436);
	v->a[34719] = 1;
	small_parse_table_1736(v);
}

void	small_parse_table_1736(t_small_parse_table_array *v)
{
	v->a[34720] = sym_comment;
	v->a[34721] = actions(1438);
	v->a[34722] = 1;
	v->a[34723] = sym_variable_name;
	v->a[34724] = actions(1426);
	v->a[34725] = 2;
	v->a[34726] = anon_sym_DASH2;
	v->a[34727] = anon_sym_PLUS2;
	v->a[34728] = actions(1432);
	v->a[34729] = 2;
	v->a[34730] = sym_number;
	v->a[34731] = aux_sym__simple_variable_name_token1;
	v->a[34732] = state(1312);
	v->a[34733] = 3;
	v->a[34734] = sym_string;
	v->a[34735] = sym_simple_expansion;
	v->a[34736] = sym_expansion;
	v->a[34737] = state(1367);
	v->a[34738] = 7;
	v->a[34739] = sym__arithmetic_expression;
	small_parse_table_1737(v);
}

void	small_parse_table_1737(t_small_parse_table_array *v)
{
	v->a[34740] = sym_arithmetic_literal;
	v->a[34741] = sym_arithmetic_binary_expression;
	v->a[34742] = sym_arithmetic_ternary_expression;
	v->a[34743] = sym_arithmetic_unary_expression;
	v->a[34744] = sym_arithmetic_postfix_expression;
	v->a[34745] = sym_arithmetic_parenthesized_expression;
	v->a[34746] = 3;
	v->a[34747] = actions(3);
	v->a[34748] = 1;
	v->a[34749] = sym_comment;
	v->a[34750] = actions(981);
	v->a[34751] = 2;
	v->a[34752] = sym__concat;
	v->a[34753] = sym__bare_dollar;
	v->a[34754] = actions(973);
	v->a[34755] = 17;
	v->a[34756] = anon_sym_PIPE;
	v->a[34757] = anon_sym_AMP_AMP;
	v->a[34758] = anon_sym_PIPE_PIPE;
	v->a[34759] = anon_sym_LT;
	small_parse_table_1738(v);
}

void	small_parse_table_1738(t_small_parse_table_array *v)
{
	v->a[34760] = anon_sym_GT;
	v->a[34761] = anon_sym_GT_GT;
	v->a[34762] = anon_sym_LT_LT;
	v->a[34763] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34764] = aux_sym_concatenation_token1;
	v->a[34765] = anon_sym_DOLLAR;
	v->a[34766] = anon_sym_DQUOTE;
	v->a[34767] = sym_raw_string;
	v->a[34768] = sym_number;
	v->a[34769] = anon_sym_DOLLAR_LBRACE;
	v->a[34770] = anon_sym_DOLLAR_LPAREN;
	v->a[34771] = anon_sym_BQUOTE;
	v->a[34772] = sym_word;
	v->a[34773] = 3;
	v->a[34774] = actions(3);
	v->a[34775] = 1;
	v->a[34776] = sym_comment;
	v->a[34777] = actions(1116);
	v->a[34778] = 2;
	v->a[34779] = sym__concat;
	small_parse_table_1739(v);
}

void	small_parse_table_1739(t_small_parse_table_array *v)
{
	v->a[34780] = sym__bare_dollar;
	v->a[34781] = actions(1114);
	v->a[34782] = 17;
	v->a[34783] = anon_sym_PIPE;
	v->a[34784] = anon_sym_AMP_AMP;
	v->a[34785] = anon_sym_PIPE_PIPE;
	v->a[34786] = anon_sym_LT;
	v->a[34787] = anon_sym_GT;
	v->a[34788] = anon_sym_GT_GT;
	v->a[34789] = anon_sym_LT_LT;
	v->a[34790] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34791] = aux_sym_concatenation_token1;
	v->a[34792] = anon_sym_DOLLAR;
	v->a[34793] = anon_sym_DQUOTE;
	v->a[34794] = sym_raw_string;
	v->a[34795] = sym_number;
	v->a[34796] = anon_sym_DOLLAR_LBRACE;
	v->a[34797] = anon_sym_DOLLAR_LPAREN;
	v->a[34798] = anon_sym_BQUOTE;
	v->a[34799] = sym_word;
	small_parse_table_1740(v);
}

/* EOF small_parse_table_347.c */
