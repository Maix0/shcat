/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_841.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4205(t_small_parse_table_array *v)
{
	v->a[84100] = sym_concatenation;
	v->a[84101] = sym__extglob_blob;
	v->a[84102] = state(3295);
	v->a[84103] = 7;
	v->a[84104] = sym_arithmetic_expansion;
	v->a[84105] = sym_brace_expression;
	v->a[84106] = sym_string;
	v->a[84107] = sym_number;
	v->a[84108] = sym_simple_expansion;
	v->a[84109] = sym_expansion;
	v->a[84110] = sym_command_substitution;
	v->a[84111] = 21;
	v->a[84112] = actions(57);
	v->a[84113] = 1;
	v->a[84114] = sym_comment;
	v->a[84115] = actions(4584);
	v->a[84116] = 1;
	v->a[84117] = anon_sym_LPAREN;
	v->a[84118] = actions(4586);
	v->a[84119] = 1;
	small_parse_table_4206(v);
}

void	small_parse_table_4206(t_small_parse_table_array *v)
{
	v->a[84120] = anon_sym_BANG;
	v->a[84121] = actions(4592);
	v->a[84122] = 1;
	v->a[84123] = anon_sym_TILDE;
	v->a[84124] = actions(4594);
	v->a[84125] = 1;
	v->a[84126] = anon_sym_DOLLAR;
	v->a[84127] = actions(4596);
	v->a[84128] = 1;
	v->a[84129] = anon_sym_DQUOTE;
	v->a[84130] = actions(4598);
	v->a[84131] = 1;
	v->a[84132] = aux_sym_number_token1;
	v->a[84133] = actions(4600);
	v->a[84134] = 1;
	v->a[84135] = aux_sym_number_token2;
	v->a[84136] = actions(4602);
	v->a[84137] = 1;
	v->a[84138] = anon_sym_DOLLAR_LBRACE;
	v->a[84139] = actions(4604);
	small_parse_table_4207(v);
}

void	small_parse_table_4207(t_small_parse_table_array *v)
{
	v->a[84140] = 1;
	v->a[84141] = anon_sym_DOLLAR_LPAREN;
	v->a[84142] = actions(4606);
	v->a[84143] = 1;
	v->a[84144] = anon_sym_BQUOTE;
	v->a[84145] = actions(4608);
	v->a[84146] = 1;
	v->a[84147] = anon_sym_DOLLAR_BQUOTE;
	v->a[84148] = actions(4693);
	v->a[84149] = 1;
	v->a[84150] = aux_sym__simple_variable_name_token1;
	v->a[84151] = actions(4695);
	v->a[84152] = 1;
	v->a[84153] = sym_variable_name;
	v->a[84154] = state(1476);
	v->a[84155] = 1;
	v->a[84156] = sym__arithmetic_postfix_expression;
	v->a[84157] = state(1478);
	v->a[84158] = 1;
	v->a[84159] = sym__arithmetic_unary_expression;
	small_parse_table_4208(v);
}

void	small_parse_table_4208(t_small_parse_table_array *v)
{
	v->a[84160] = state(1490);
	v->a[84161] = 1;
	v->a[84162] = sym__arithmetic_ternary_expression;
	v->a[84163] = state(1511);
	v->a[84164] = 1;
	v->a[84165] = sym__arithmetic_binary_expression;
	v->a[84166] = actions(4588);
	v->a[84167] = 2;
	v->a[84168] = anon_sym_PLUS_PLUS;
	v->a[84169] = anon_sym_DASH_DASH;
	v->a[84170] = actions(4590);
	v->a[84171] = 2;
	v->a[84172] = anon_sym_DASH2;
	v->a[84173] = anon_sym_PLUS2;
	v->a[84174] = state(1455);
	v->a[84175] = 8;
	v->a[84176] = sym__arithmetic_expression;
	v->a[84177] = sym__arithmetic_literal;
	v->a[84178] = sym__arithmetic_parenthesized_expression;
	v->a[84179] = sym_string;
	small_parse_table_4209(v);
}

void	small_parse_table_4209(t_small_parse_table_array *v)
{
	v->a[84180] = sym_number;
	v->a[84181] = sym_simple_expansion;
	v->a[84182] = sym_expansion;
	v->a[84183] = sym_command_substitution;
	v->a[84184] = 21;
	v->a[84185] = actions(57);
	v->a[84186] = 1;
	v->a[84187] = sym_comment;
	v->a[84188] = actions(4584);
	v->a[84189] = 1;
	v->a[84190] = anon_sym_LPAREN;
	v->a[84191] = actions(4586);
	v->a[84192] = 1;
	v->a[84193] = anon_sym_BANG;
	v->a[84194] = actions(4592);
	v->a[84195] = 1;
	v->a[84196] = anon_sym_TILDE;
	v->a[84197] = actions(4594);
	v->a[84198] = 1;
	v->a[84199] = anon_sym_DOLLAR;
	small_parse_table_4210(v);
}

/* EOF small_parse_table_841.c */
