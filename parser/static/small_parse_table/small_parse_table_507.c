/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_507.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2535(t_small_parse_table_array *v)
{
	v->a[50700] = sym_number;
	v->a[50701] = anon_sym_DOLLAR_LBRACE;
	v->a[50702] = anon_sym_DOLLAR_LPAREN;
	v->a[50703] = anon_sym_BQUOTE;
	v->a[50704] = sym_word;
	v->a[50705] = 3;
	v->a[50706] = actions(3);
	v->a[50707] = 1;
	v->a[50708] = sym_comment;
	v->a[50709] = actions(1178);
	v->a[50710] = 3;
	v->a[50711] = sym_file_descriptor;
	v->a[50712] = sym__concat;
	v->a[50713] = sym__bare_dollar;
	v->a[50714] = actions(1176);
	v->a[50715] = 23;
	v->a[50716] = anon_sym_LPAREN;
	v->a[50717] = anon_sym_PIPE;
	v->a[50718] = anon_sym_AMP_AMP;
	v->a[50719] = anon_sym_PIPE_PIPE;
	small_parse_table_2536(v);
}

void	small_parse_table_2536(t_small_parse_table_array *v)
{
	v->a[50720] = anon_sym_LT;
	v->a[50721] = anon_sym_GT;
	v->a[50722] = anon_sym_GT_GT;
	v->a[50723] = anon_sym_LT_AMP;
	v->a[50724] = anon_sym_GT_AMP;
	v->a[50725] = anon_sym_GT_PIPE;
	v->a[50726] = anon_sym_LT_GT;
	v->a[50727] = anon_sym_LT_LT;
	v->a[50728] = anon_sym_LT_LT_DASH;
	v->a[50729] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50730] = aux_sym_concatenation_token1;
	v->a[50731] = anon_sym_DOLLAR;
	v->a[50732] = anon_sym_DQUOTE;
	v->a[50733] = sym_raw_string;
	v->a[50734] = sym_number;
	v->a[50735] = anon_sym_DOLLAR_LBRACE;
	v->a[50736] = anon_sym_DOLLAR_LPAREN;
	v->a[50737] = anon_sym_BQUOTE;
	v->a[50738] = sym_word;
	v->a[50739] = 15;
	small_parse_table_2537(v);
}

void	small_parse_table_2537(t_small_parse_table_array *v)
{
	v->a[50740] = actions(664);
	v->a[50741] = 1;
	v->a[50742] = sym_comment;
	v->a[50743] = actions(1560);
	v->a[50744] = 1;
	v->a[50745] = anon_sym_LPAREN;
	v->a[50746] = actions(1562);
	v->a[50747] = 1;
	v->a[50748] = anon_sym_BANG;
	v->a[50749] = actions(1570);
	v->a[50750] = 1;
	v->a[50751] = anon_sym_TILDE;
	v->a[50752] = actions(1572);
	v->a[50753] = 1;
	v->a[50754] = anon_sym_DOLLAR;
	v->a[50755] = actions(1574);
	v->a[50756] = 1;
	v->a[50757] = anon_sym_DQUOTE;
	v->a[50758] = actions(1578);
	v->a[50759] = 1;
	small_parse_table_2538(v);
}

void	small_parse_table_2538(t_small_parse_table_array *v)
{
	v->a[50760] = anon_sym_DOLLAR_LBRACE;
	v->a[50761] = actions(1580);
	v->a[50762] = 1;
	v->a[50763] = anon_sym_DOLLAR_LPAREN;
	v->a[50764] = actions(1582);
	v->a[50765] = 1;
	v->a[50766] = anon_sym_BQUOTE;
	v->a[50767] = actions(1584);
	v->a[50768] = 1;
	v->a[50769] = sym_variable_name;
	v->a[50770] = actions(1566);
	v->a[50771] = 2;
	v->a[50772] = anon_sym_PLUS_PLUS;
	v->a[50773] = anon_sym_DASH_DASH;
	v->a[50774] = actions(1568);
	v->a[50775] = 2;
	v->a[50776] = anon_sym_DASH2;
	v->a[50777] = anon_sym_PLUS2;
	v->a[50778] = actions(1576);
	v->a[50779] = 2;
	small_parse_table_2539(v);
}

void	small_parse_table_2539(t_small_parse_table_array *v)
{
	v->a[50780] = sym_number;
	v->a[50781] = aux_sym__simple_variable_name_token1;
	v->a[50782] = state(255);
	v->a[50783] = 3;
	v->a[50784] = sym_string;
	v->a[50785] = sym_simple_expansion;
	v->a[50786] = sym_expansion;
	v->a[50787] = state(297);
	v->a[50788] = 8;
	v->a[50789] = sym__arithmetic_expression;
	v->a[50790] = sym_arithmetic_literal;
	v->a[50791] = sym_arithmetic_binary_expression;
	v->a[50792] = sym_arithmetic_ternary_expression;
	v->a[50793] = sym_arithmetic_unary_expression;
	v->a[50794] = sym_arithmetic_postfix_expression;
	v->a[50795] = sym_arithmetic_parenthesized_expression;
	v->a[50796] = sym_command_substitution;
	v->a[50797] = 6;
	v->a[50798] = actions(3);
	v->a[50799] = 1;
	small_parse_table_2540(v);
}

/* EOF small_parse_table_507.c */
