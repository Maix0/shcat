/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_427.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2135(t_small_parse_table_array *v)
{
	v->a[42700] = sym_comment;
	v->a[42701] = actions(1457);
	v->a[42702] = 1;
	v->a[42703] = sym_file_descriptor;
	v->a[42704] = actions(1460);
	v->a[42705] = 1;
	v->a[42706] = sym_variable_name;
	v->a[42707] = actions(1532);
	v->a[42708] = 1;
	v->a[42709] = anon_sym_RPAREN;
	v->a[42710] = actions(1454);
	v->a[42711] = 7;
	v->a[42712] = anon_sym_LT;
	v->a[42713] = anon_sym_GT;
	v->a[42714] = anon_sym_GT_GT;
	v->a[42715] = anon_sym_LT_AMP;
	v->a[42716] = anon_sym_GT_AMP;
	v->a[42717] = anon_sym_GT_PIPE;
	v->a[42718] = anon_sym_LT_GT;
	v->a[42719] = actions(1449);
	small_parse_table_2136(v);
}

void	small_parse_table_2136(t_small_parse_table_array *v)
{
	v->a[42720] = 8;
	v->a[42721] = anon_sym_PIPE;
	v->a[42722] = anon_sym_SEMI_SEMI;
	v->a[42723] = anon_sym_AMP_AMP;
	v->a[42724] = anon_sym_PIPE_PIPE;
	v->a[42725] = anon_sym_LT_LT;
	v->a[42726] = anon_sym_LT_LT_DASH;
	v->a[42727] = aux_sym_heredoc_redirect_token1;
	v->a[42728] = anon_sym_SEMI;
	v->a[42729] = actions(1447);
	v->a[42730] = 9;
	v->a[42731] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42732] = anon_sym_DOLLAR;
	v->a[42733] = anon_sym_DQUOTE;
	v->a[42734] = sym_raw_string;
	v->a[42735] = sym_number;
	v->a[42736] = anon_sym_DOLLAR_LBRACE;
	v->a[42737] = anon_sym_DOLLAR_LPAREN;
	v->a[42738] = anon_sym_BQUOTE;
	v->a[42739] = sym_word;
	small_parse_table_2137(v);
}

void	small_parse_table_2137(t_small_parse_table_array *v)
{
	v->a[42740] = 16;
	v->a[42741] = actions(501);
	v->a[42742] = 1;
	v->a[42743] = sym_comment;
	v->a[42744] = actions(1469);
	v->a[42745] = 1;
	v->a[42746] = anon_sym_LPAREN;
	v->a[42747] = actions(1471);
	v->a[42748] = 1;
	v->a[42749] = anon_sym_BANG;
	v->a[42750] = actions(1479);
	v->a[42751] = 1;
	v->a[42752] = anon_sym_TILDE;
	v->a[42753] = actions(1481);
	v->a[42754] = 1;
	v->a[42755] = anon_sym_DOLLAR;
	v->a[42756] = actions(1483);
	v->a[42757] = 1;
	v->a[42758] = anon_sym_DQUOTE;
	v->a[42759] = actions(1487);
	small_parse_table_2138(v);
}

void	small_parse_table_2138(t_small_parse_table_array *v)
{
	v->a[42760] = 1;
	v->a[42761] = anon_sym_DOLLAR_LBRACE;
	v->a[42762] = actions(1489);
	v->a[42763] = 1;
	v->a[42764] = anon_sym_DOLLAR_LPAREN;
	v->a[42765] = actions(1491);
	v->a[42766] = 1;
	v->a[42767] = anon_sym_BQUOTE;
	v->a[42768] = actions(1493);
	v->a[42769] = 1;
	v->a[42770] = sym_variable_name;
	v->a[42771] = actions(1535);
	v->a[42772] = 1;
	v->a[42773] = anon_sym_RPAREN_RPAREN;
	v->a[42774] = actions(1475);
	v->a[42775] = 2;
	v->a[42776] = anon_sym_PLUS_PLUS;
	v->a[42777] = anon_sym_DASH_DASH;
	v->a[42778] = actions(1477);
	v->a[42779] = 2;
	small_parse_table_2139(v);
}

void	small_parse_table_2139(t_small_parse_table_array *v)
{
	v->a[42780] = anon_sym_DASH2;
	v->a[42781] = anon_sym_PLUS2;
	v->a[42782] = actions(1485);
	v->a[42783] = 2;
	v->a[42784] = sym_number;
	v->a[42785] = aux_sym__simple_variable_name_token1;
	v->a[42786] = state(194);
	v->a[42787] = 3;
	v->a[42788] = sym_string;
	v->a[42789] = sym_simple_expansion;
	v->a[42790] = sym_expansion;
	v->a[42791] = state(304);
	v->a[42792] = 8;
	v->a[42793] = sym__arithmetic_expression;
	v->a[42794] = sym_arithmetic_literal;
	v->a[42795] = sym_arithmetic_binary_expression;
	v->a[42796] = sym_arithmetic_ternary_expression;
	v->a[42797] = sym_arithmetic_unary_expression;
	v->a[42798] = sym_arithmetic_postfix_expression;
	v->a[42799] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2140(v);
}

/* EOF small_parse_table_427.c */
