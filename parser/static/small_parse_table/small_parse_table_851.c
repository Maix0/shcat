/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_851.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4255(t_small_parse_table_array *v)
{
	v->a[85100] = sym_command_substitution;
	v->a[85101] = 21;
	v->a[85102] = actions(57);
	v->a[85103] = 1;
	v->a[85104] = sym_comment;
	v->a[85105] = actions(4584);
	v->a[85106] = 1;
	v->a[85107] = anon_sym_LPAREN;
	v->a[85108] = actions(4586);
	v->a[85109] = 1;
	v->a[85110] = anon_sym_BANG;
	v->a[85111] = actions(4592);
	v->a[85112] = 1;
	v->a[85113] = anon_sym_TILDE;
	v->a[85114] = actions(4594);
	v->a[85115] = 1;
	v->a[85116] = anon_sym_DOLLAR;
	v->a[85117] = actions(4596);
	v->a[85118] = 1;
	v->a[85119] = anon_sym_DQUOTE;
	small_parse_table_4256(v);
}

void	small_parse_table_4256(t_small_parse_table_array *v)
{
	v->a[85120] = actions(4598);
	v->a[85121] = 1;
	v->a[85122] = aux_sym_number_token1;
	v->a[85123] = actions(4600);
	v->a[85124] = 1;
	v->a[85125] = aux_sym_number_token2;
	v->a[85126] = actions(4602);
	v->a[85127] = 1;
	v->a[85128] = anon_sym_DOLLAR_LBRACE;
	v->a[85129] = actions(4604);
	v->a[85130] = 1;
	v->a[85131] = anon_sym_DOLLAR_LPAREN;
	v->a[85132] = actions(4606);
	v->a[85133] = 1;
	v->a[85134] = anon_sym_BQUOTE;
	v->a[85135] = actions(4608);
	v->a[85136] = 1;
	v->a[85137] = anon_sym_DOLLAR_BQUOTE;
	v->a[85138] = actions(4736);
	v->a[85139] = 1;
	small_parse_table_4257(v);
}

void	small_parse_table_4257(t_small_parse_table_array *v)
{
	v->a[85140] = aux_sym__simple_variable_name_token1;
	v->a[85141] = actions(4738);
	v->a[85142] = 1;
	v->a[85143] = sym_variable_name;
	v->a[85144] = state(1476);
	v->a[85145] = 1;
	v->a[85146] = sym__arithmetic_postfix_expression;
	v->a[85147] = state(1478);
	v->a[85148] = 1;
	v->a[85149] = sym__arithmetic_unary_expression;
	v->a[85150] = state(1490);
	v->a[85151] = 1;
	v->a[85152] = sym__arithmetic_ternary_expression;
	v->a[85153] = state(1511);
	v->a[85154] = 1;
	v->a[85155] = sym__arithmetic_binary_expression;
	v->a[85156] = actions(4588);
	v->a[85157] = 2;
	v->a[85158] = anon_sym_PLUS_PLUS;
	v->a[85159] = anon_sym_DASH_DASH;
	small_parse_table_4258(v);
}

void	small_parse_table_4258(t_small_parse_table_array *v)
{
	v->a[85160] = actions(4590);
	v->a[85161] = 2;
	v->a[85162] = anon_sym_DASH2;
	v->a[85163] = anon_sym_PLUS2;
	v->a[85164] = state(1395);
	v->a[85165] = 8;
	v->a[85166] = sym__arithmetic_expression;
	v->a[85167] = sym__arithmetic_literal;
	v->a[85168] = sym__arithmetic_parenthesized_expression;
	v->a[85169] = sym_string;
	v->a[85170] = sym_number;
	v->a[85171] = sym_simple_expansion;
	v->a[85172] = sym_expansion;
	v->a[85173] = sym_command_substitution;
	v->a[85174] = 21;
	v->a[85175] = actions(57);
	v->a[85176] = 1;
	v->a[85177] = sym_comment;
	v->a[85178] = actions(4584);
	v->a[85179] = 1;
	small_parse_table_4259(v);
}

void	small_parse_table_4259(t_small_parse_table_array *v)
{
	v->a[85180] = anon_sym_LPAREN;
	v->a[85181] = actions(4586);
	v->a[85182] = 1;
	v->a[85183] = anon_sym_BANG;
	v->a[85184] = actions(4592);
	v->a[85185] = 1;
	v->a[85186] = anon_sym_TILDE;
	v->a[85187] = actions(4594);
	v->a[85188] = 1;
	v->a[85189] = anon_sym_DOLLAR;
	v->a[85190] = actions(4596);
	v->a[85191] = 1;
	v->a[85192] = anon_sym_DQUOTE;
	v->a[85193] = actions(4598);
	v->a[85194] = 1;
	v->a[85195] = aux_sym_number_token1;
	v->a[85196] = actions(4600);
	v->a[85197] = 1;
	v->a[85198] = aux_sym_number_token2;
	v->a[85199] = actions(4602);
	small_parse_table_4260(v);
}

/* EOF small_parse_table_851.c */
