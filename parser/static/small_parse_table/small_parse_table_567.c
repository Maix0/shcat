/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_567.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2835(t_small_parse_table_array *v)
{
	v->a[56700] = anon_sym_BQUOTE;
	v->a[56701] = sym_word;
	v->a[56702] = 16;
	v->a[56703] = actions(1074);
	v->a[56704] = 1;
	v->a[56705] = sym_comment;
	v->a[56706] = actions(1831);
	v->a[56707] = 1;
	v->a[56708] = anon_sym_LPAREN;
	v->a[56709] = actions(1833);
	v->a[56710] = 1;
	v->a[56711] = anon_sym_BANG;
	v->a[56712] = actions(1841);
	v->a[56713] = 1;
	v->a[56714] = anon_sym_TILDE;
	v->a[56715] = actions(1843);
	v->a[56716] = 1;
	v->a[56717] = anon_sym_DOLLAR;
	v->a[56718] = actions(1845);
	v->a[56719] = 1;
	small_parse_table_2836(v);
}

void	small_parse_table_2836(t_small_parse_table_array *v)
{
	v->a[56720] = anon_sym_DQUOTE;
	v->a[56721] = actions(1849);
	v->a[56722] = 1;
	v->a[56723] = anon_sym_DOLLAR_LBRACE;
	v->a[56724] = actions(1851);
	v->a[56725] = 1;
	v->a[56726] = anon_sym_DOLLAR_LPAREN;
	v->a[56727] = actions(1853);
	v->a[56728] = 1;
	v->a[56729] = anon_sym_BQUOTE;
	v->a[56730] = actions(1855);
	v->a[56731] = 1;
	v->a[56732] = sym_variable_name;
	v->a[56733] = actions(1927);
	v->a[56734] = 1;
	v->a[56735] = anon_sym_RPAREN_RPAREN;
	v->a[56736] = actions(1837);
	v->a[56737] = 2;
	v->a[56738] = anon_sym_PLUS_PLUS;
	v->a[56739] = anon_sym_DASH_DASH;
	small_parse_table_2837(v);
}

void	small_parse_table_2837(t_small_parse_table_array *v)
{
	v->a[56740] = actions(1839);
	v->a[56741] = 2;
	v->a[56742] = anon_sym_DASH2;
	v->a[56743] = anon_sym_PLUS2;
	v->a[56744] = actions(1847);
	v->a[56745] = 2;
	v->a[56746] = sym_number;
	v->a[56747] = aux_sym__simple_variable_name_token1;
	v->a[56748] = state(370);
	v->a[56749] = 3;
	v->a[56750] = sym_string;
	v->a[56751] = sym_simple_expansion;
	v->a[56752] = sym_expansion;
	v->a[56753] = state(489);
	v->a[56754] = 8;
	v->a[56755] = sym__arithmetic_expression;
	v->a[56756] = sym_arithmetic_literal;
	v->a[56757] = sym_arithmetic_binary_expression;
	v->a[56758] = sym_arithmetic_ternary_expression;
	v->a[56759] = sym_arithmetic_unary_expression;
	small_parse_table_2838(v);
}

void	small_parse_table_2838(t_small_parse_table_array *v)
{
	v->a[56760] = sym_arithmetic_postfix_expression;
	v->a[56761] = sym_arithmetic_parenthesized_expression;
	v->a[56762] = sym_command_substitution;
	v->a[56763] = 3;
	v->a[56764] = actions(3);
	v->a[56765] = 1;
	v->a[56766] = sym_comment;
	v->a[56767] = actions(988);
	v->a[56768] = 2;
	v->a[56769] = sym_file_descriptor;
	v->a[56770] = sym__concat;
	v->a[56771] = actions(983);
	v->a[56772] = 25;
	v->a[56773] = anon_sym_PIPE;
	v->a[56774] = anon_sym_AMP_AMP;
	v->a[56775] = anon_sym_PIPE_PIPE;
	v->a[56776] = anon_sym_LT;
	v->a[56777] = anon_sym_GT;
	v->a[56778] = anon_sym_GT_GT;
	v->a[56779] = anon_sym_AMP_GT;
	small_parse_table_2839(v);
}

void	small_parse_table_2839(t_small_parse_table_array *v)
{
	v->a[56780] = anon_sym_AMP_GT_GT;
	v->a[56781] = anon_sym_LT_AMP;
	v->a[56782] = anon_sym_GT_AMP;
	v->a[56783] = anon_sym_GT_PIPE;
	v->a[56784] = anon_sym_LT_AMP_DASH;
	v->a[56785] = anon_sym_GT_AMP_DASH;
	v->a[56786] = anon_sym_LT_LT;
	v->a[56787] = anon_sym_LT_LT_DASH;
	v->a[56788] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56789] = aux_sym_concatenation_token1;
	v->a[56790] = anon_sym_DOLLAR;
	v->a[56791] = anon_sym_DQUOTE;
	v->a[56792] = sym_raw_string;
	v->a[56793] = sym_number;
	v->a[56794] = anon_sym_DOLLAR_LBRACE;
	v->a[56795] = anon_sym_DOLLAR_LPAREN;
	v->a[56796] = anon_sym_BQUOTE;
	v->a[56797] = sym_word;
	v->a[56798] = 3;
	v->a[56799] = actions(3);
	small_parse_table_2840(v);
}

/* EOF small_parse_table_567.c */
