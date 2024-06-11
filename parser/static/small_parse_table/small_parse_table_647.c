/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_647.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3235(t_small_parse_table_array *v)
{
	v->a[64700] = sym_arithmetic_literal;
	v->a[64701] = sym_arithmetic_binary_expression;
	v->a[64702] = sym_arithmetic_ternary_expression;
	v->a[64703] = sym_arithmetic_unary_expression;
	v->a[64704] = sym_arithmetic_postfix_expression;
	v->a[64705] = sym_arithmetic_parenthesized_expression;
	v->a[64706] = sym_command_substitution;
	v->a[64707] = 15;
	v->a[64708] = actions(1094);
	v->a[64709] = 1;
	v->a[64710] = sym_comment;
	v->a[64711] = actions(2003);
	v->a[64712] = 1;
	v->a[64713] = anon_sym_LPAREN;
	v->a[64714] = actions(2005);
	v->a[64715] = 1;
	v->a[64716] = anon_sym_BANG;
	v->a[64717] = actions(2011);
	v->a[64718] = 1;
	v->a[64719] = anon_sym_TILDE;
	small_parse_table_3236(v);
}

void	small_parse_table_3236(t_small_parse_table_array *v)
{
	v->a[64720] = actions(2013);
	v->a[64721] = 1;
	v->a[64722] = anon_sym_DOLLAR;
	v->a[64723] = actions(2015);
	v->a[64724] = 1;
	v->a[64725] = anon_sym_DQUOTE;
	v->a[64726] = actions(2019);
	v->a[64727] = 1;
	v->a[64728] = anon_sym_DOLLAR_LBRACE;
	v->a[64729] = actions(2021);
	v->a[64730] = 1;
	v->a[64731] = anon_sym_DOLLAR_LPAREN;
	v->a[64732] = actions(2023);
	v->a[64733] = 1;
	v->a[64734] = anon_sym_BQUOTE;
	v->a[64735] = actions(2025);
	v->a[64736] = 1;
	v->a[64737] = sym_variable_name;
	v->a[64738] = actions(2007);
	v->a[64739] = 2;
	small_parse_table_3237(v);
}

void	small_parse_table_3237(t_small_parse_table_array *v)
{
	v->a[64740] = anon_sym_PLUS_PLUS;
	v->a[64741] = anon_sym_DASH_DASH;
	v->a[64742] = actions(2009);
	v->a[64743] = 2;
	v->a[64744] = anon_sym_DASH2;
	v->a[64745] = anon_sym_PLUS2;
	v->a[64746] = actions(2017);
	v->a[64747] = 2;
	v->a[64748] = sym_number;
	v->a[64749] = aux_sym__simple_variable_name_token1;
	v->a[64750] = state(503);
	v->a[64751] = 3;
	v->a[64752] = sym_string;
	v->a[64753] = sym_simple_expansion;
	v->a[64754] = sym_expansion;
	v->a[64755] = state(551);
	v->a[64756] = 8;
	v->a[64757] = sym__arithmetic_expression;
	v->a[64758] = sym_arithmetic_literal;
	v->a[64759] = sym_arithmetic_binary_expression;
	small_parse_table_3238(v);
}

void	small_parse_table_3238(t_small_parse_table_array *v)
{
	v->a[64760] = sym_arithmetic_ternary_expression;
	v->a[64761] = sym_arithmetic_unary_expression;
	v->a[64762] = sym_arithmetic_postfix_expression;
	v->a[64763] = sym_arithmetic_parenthesized_expression;
	v->a[64764] = sym_command_substitution;
	v->a[64765] = 15;
	v->a[64766] = actions(1094);
	v->a[64767] = 1;
	v->a[64768] = sym_comment;
	v->a[64769] = actions(2003);
	v->a[64770] = 1;
	v->a[64771] = anon_sym_LPAREN;
	v->a[64772] = actions(2005);
	v->a[64773] = 1;
	v->a[64774] = anon_sym_BANG;
	v->a[64775] = actions(2011);
	v->a[64776] = 1;
	v->a[64777] = anon_sym_TILDE;
	v->a[64778] = actions(2013);
	v->a[64779] = 1;
	small_parse_table_3239(v);
}

void	small_parse_table_3239(t_small_parse_table_array *v)
{
	v->a[64780] = anon_sym_DOLLAR;
	v->a[64781] = actions(2015);
	v->a[64782] = 1;
	v->a[64783] = anon_sym_DQUOTE;
	v->a[64784] = actions(2019);
	v->a[64785] = 1;
	v->a[64786] = anon_sym_DOLLAR_LBRACE;
	v->a[64787] = actions(2021);
	v->a[64788] = 1;
	v->a[64789] = anon_sym_DOLLAR_LPAREN;
	v->a[64790] = actions(2023);
	v->a[64791] = 1;
	v->a[64792] = anon_sym_BQUOTE;
	v->a[64793] = actions(2025);
	v->a[64794] = 1;
	v->a[64795] = sym_variable_name;
	v->a[64796] = actions(2007);
	v->a[64797] = 2;
	v->a[64798] = anon_sym_PLUS_PLUS;
	v->a[64799] = anon_sym_DASH_DASH;
	small_parse_table_3240(v);
}

/* EOF small_parse_table_647.c */
