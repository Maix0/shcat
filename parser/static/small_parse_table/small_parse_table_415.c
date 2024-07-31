/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_415.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2075(t_small_parse_table_array *v)
{
	v->a[41500] = sym_comment;
	v->a[41501] = actions(1522);
	v->a[41502] = 1;
	v->a[41503] = anon_sym_LPAREN;
	v->a[41504] = actions(1524);
	v->a[41505] = 1;
	v->a[41506] = anon_sym_BANG;
	v->a[41507] = actions(1530);
	v->a[41508] = 1;
	v->a[41509] = anon_sym_DOLLAR;
	v->a[41510] = actions(1532);
	v->a[41511] = 1;
	v->a[41512] = anon_sym_DQUOTE;
	v->a[41513] = actions(1536);
	v->a[41514] = 1;
	v->a[41515] = anon_sym_DOLLAR_LBRACE;
	v->a[41516] = actions(1538);
	v->a[41517] = 1;
	v->a[41518] = sym_variable_name;
	v->a[41519] = actions(1526);
	small_parse_table_2076(v);
}

void	small_parse_table_2076(t_small_parse_table_array *v)
{
	v->a[41520] = 2;
	v->a[41521] = anon_sym_PLUS_PLUS;
	v->a[41522] = anon_sym_DASH_DASH;
	v->a[41523] = actions(1528);
	v->a[41524] = 2;
	v->a[41525] = anon_sym_DASH2;
	v->a[41526] = anon_sym_PLUS2;
	v->a[41527] = actions(1534);
	v->a[41528] = 2;
	v->a[41529] = sym_number;
	v->a[41530] = aux_sym__simple_variable_name_token1;
	v->a[41531] = state(206);
	v->a[41532] = 3;
	v->a[41533] = sym_string;
	v->a[41534] = sym_simple_expansion;
	v->a[41535] = sym_expansion;
	v->a[41536] = state(236);
	v->a[41537] = 7;
	v->a[41538] = sym__arithmetic_expression;
	v->a[41539] = sym_arithmetic_literal;
	small_parse_table_2077(v);
}

void	small_parse_table_2077(t_small_parse_table_array *v)
{
	v->a[41540] = sym_arithmetic_binary_expression;
	v->a[41541] = sym_arithmetic_ternary_expression;
	v->a[41542] = sym_arithmetic_unary_expression;
	v->a[41543] = sym_arithmetic_postfix_expression;
	v->a[41544] = sym_arithmetic_parenthesized_expression;
	v->a[41545] = 4;
	v->a[41546] = actions(3);
	v->a[41547] = 1;
	v->a[41548] = sym_comment;
	v->a[41549] = actions(1308);
	v->a[41550] = 1;
	v->a[41551] = sym_variable_name;
	v->a[41552] = actions(742);
	v->a[41553] = 9;
	v->a[41554] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41555] = anon_sym_DOLLAR;
	v->a[41556] = anon_sym_DQUOTE;
	v->a[41557] = sym_raw_string;
	v->a[41558] = sym_number;
	v->a[41559] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2078(v);
}

void	small_parse_table_2078(t_small_parse_table_array *v)
{
	v->a[41560] = anon_sym_DOLLAR_LPAREN;
	v->a[41561] = anon_sym_BQUOTE;
	v->a[41562] = sym_word;
	v->a[41563] = actions(1306);
	v->a[41564] = 12;
	v->a[41565] = anon_sym_PIPE;
	v->a[41566] = anon_sym_AMP_AMP;
	v->a[41567] = anon_sym_PIPE_PIPE;
	v->a[41568] = anon_sym_LT;
	v->a[41569] = anon_sym_GT;
	v->a[41570] = anon_sym_GT_GT;
	v->a[41571] = anon_sym_LT_AMP;
	v->a[41572] = anon_sym_GT_AMP;
	v->a[41573] = anon_sym_GT_PIPE;
	v->a[41574] = anon_sym_LT_GT;
	v->a[41575] = anon_sym_LT_LT;
	v->a[41576] = anon_sym_LT_LT_DASH;
	v->a[41577] = 12;
	v->a[41578] = actions(407);
	v->a[41579] = 1;
	small_parse_table_2079(v);
}

void	small_parse_table_2079(t_small_parse_table_array *v)
{
	v->a[41580] = sym_comment;
	v->a[41581] = actions(1522);
	v->a[41582] = 1;
	v->a[41583] = anon_sym_LPAREN;
	v->a[41584] = actions(1524);
	v->a[41585] = 1;
	v->a[41586] = anon_sym_BANG;
	v->a[41587] = actions(1530);
	v->a[41588] = 1;
	v->a[41589] = anon_sym_DOLLAR;
	v->a[41590] = actions(1532);
	v->a[41591] = 1;
	v->a[41592] = anon_sym_DQUOTE;
	v->a[41593] = actions(1536);
	v->a[41594] = 1;
	v->a[41595] = anon_sym_DOLLAR_LBRACE;
	v->a[41596] = actions(1538);
	v->a[41597] = 1;
	v->a[41598] = sym_variable_name;
	v->a[41599] = actions(1526);
	small_parse_table_2080(v);
}

/* EOF small_parse_table_415.c */
