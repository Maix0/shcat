/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_487.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2435(t_small_parse_table_array *v)
{
	v->a[48700] = aux_sym_concatenation_token1;
	v->a[48701] = anon_sym_DOLLAR;
	v->a[48702] = anon_sym_DQUOTE;
	v->a[48703] = sym_raw_string;
	v->a[48704] = sym_number;
	v->a[48705] = anon_sym_DOLLAR_LBRACE;
	v->a[48706] = anon_sym_DOLLAR_LPAREN;
	v->a[48707] = anon_sym_BQUOTE;
	v->a[48708] = sym_word;
	v->a[48709] = 15;
	v->a[48710] = actions(680);
	v->a[48711] = 1;
	v->a[48712] = sym_comment;
	v->a[48713] = actions(1574);
	v->a[48714] = 1;
	v->a[48715] = anon_sym_LPAREN;
	v->a[48716] = actions(1576);
	v->a[48717] = 1;
	v->a[48718] = anon_sym_BANG;
	v->a[48719] = actions(1584);
	small_parse_table_2436(v);
}

void	small_parse_table_2436(t_small_parse_table_array *v)
{
	v->a[48720] = 1;
	v->a[48721] = anon_sym_TILDE;
	v->a[48722] = actions(1586);
	v->a[48723] = 1;
	v->a[48724] = anon_sym_DOLLAR;
	v->a[48725] = actions(1588);
	v->a[48726] = 1;
	v->a[48727] = anon_sym_DQUOTE;
	v->a[48728] = actions(1592);
	v->a[48729] = 1;
	v->a[48730] = anon_sym_DOLLAR_LBRACE;
	v->a[48731] = actions(1594);
	v->a[48732] = 1;
	v->a[48733] = anon_sym_DOLLAR_LPAREN;
	v->a[48734] = actions(1596);
	v->a[48735] = 1;
	v->a[48736] = anon_sym_BQUOTE;
	v->a[48737] = actions(1598);
	v->a[48738] = 1;
	v->a[48739] = sym_variable_name;
	small_parse_table_2437(v);
}

void	small_parse_table_2437(t_small_parse_table_array *v)
{
	v->a[48740] = actions(1580);
	v->a[48741] = 2;
	v->a[48742] = anon_sym_PLUS_PLUS;
	v->a[48743] = anon_sym_DASH_DASH;
	v->a[48744] = actions(1582);
	v->a[48745] = 2;
	v->a[48746] = anon_sym_DASH2;
	v->a[48747] = anon_sym_PLUS2;
	v->a[48748] = actions(1590);
	v->a[48749] = 2;
	v->a[48750] = sym_number;
	v->a[48751] = aux_sym__simple_variable_name_token1;
	v->a[48752] = state(238);
	v->a[48753] = 3;
	v->a[48754] = sym_string;
	v->a[48755] = sym_simple_expansion;
	v->a[48756] = sym_expansion;
	v->a[48757] = state(228);
	v->a[48758] = 8;
	v->a[48759] = sym__arithmetic_expression;
	small_parse_table_2438(v);
}

void	small_parse_table_2438(t_small_parse_table_array *v)
{
	v->a[48760] = sym_arithmetic_literal;
	v->a[48761] = sym_arithmetic_binary_expression;
	v->a[48762] = sym_arithmetic_ternary_expression;
	v->a[48763] = sym_arithmetic_unary_expression;
	v->a[48764] = sym_arithmetic_postfix_expression;
	v->a[48765] = sym_arithmetic_parenthesized_expression;
	v->a[48766] = sym_command_substitution;
	v->a[48767] = 3;
	v->a[48768] = actions(3);
	v->a[48769] = 1;
	v->a[48770] = sym_comment;
	v->a[48771] = actions(709);
	v->a[48772] = 3;
	v->a[48773] = sym_file_descriptor;
	v->a[48774] = sym__concat;
	v->a[48775] = sym__bare_dollar;
	v->a[48776] = actions(707);
	v->a[48777] = 23;
	v->a[48778] = anon_sym_LPAREN;
	v->a[48779] = anon_sym_PIPE;
	small_parse_table_2439(v);
}

void	small_parse_table_2439(t_small_parse_table_array *v)
{
	v->a[48780] = anon_sym_AMP_AMP;
	v->a[48781] = anon_sym_PIPE_PIPE;
	v->a[48782] = anon_sym_LT;
	v->a[48783] = anon_sym_GT;
	v->a[48784] = anon_sym_GT_GT;
	v->a[48785] = anon_sym_LT_AMP;
	v->a[48786] = anon_sym_GT_AMP;
	v->a[48787] = anon_sym_GT_PIPE;
	v->a[48788] = anon_sym_LT_GT;
	v->a[48789] = anon_sym_LT_LT;
	v->a[48790] = anon_sym_LT_LT_DASH;
	v->a[48791] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48792] = aux_sym_concatenation_token1;
	v->a[48793] = anon_sym_DOLLAR;
	v->a[48794] = anon_sym_DQUOTE;
	v->a[48795] = sym_raw_string;
	v->a[48796] = sym_number;
	v->a[48797] = anon_sym_DOLLAR_LBRACE;
	v->a[48798] = anon_sym_DOLLAR_LPAREN;
	v->a[48799] = anon_sym_BQUOTE;
	small_parse_table_2440(v);
}

/* EOF small_parse_table_487.c */
