/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_871.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4355(t_small_parse_table_array *v)
{
	v->a[87100] = sym_number;
	v->a[87101] = sym_simple_expansion;
	v->a[87102] = sym_expansion;
	v->a[87103] = sym_command_substitution;
	v->a[87104] = 21;
	v->a[87105] = actions(57);
	v->a[87106] = 1;
	v->a[87107] = sym_comment;
	v->a[87108] = actions(4584);
	v->a[87109] = 1;
	v->a[87110] = anon_sym_LPAREN;
	v->a[87111] = actions(4586);
	v->a[87112] = 1;
	v->a[87113] = anon_sym_BANG;
	v->a[87114] = actions(4592);
	v->a[87115] = 1;
	v->a[87116] = anon_sym_TILDE;
	v->a[87117] = actions(4594);
	v->a[87118] = 1;
	v->a[87119] = anon_sym_DOLLAR;
	small_parse_table_4356(v);
}

void	small_parse_table_4356(t_small_parse_table_array *v)
{
	v->a[87120] = actions(4596);
	v->a[87121] = 1;
	v->a[87122] = anon_sym_DQUOTE;
	v->a[87123] = actions(4598);
	v->a[87124] = 1;
	v->a[87125] = aux_sym_number_token1;
	v->a[87126] = actions(4600);
	v->a[87127] = 1;
	v->a[87128] = aux_sym_number_token2;
	v->a[87129] = actions(4602);
	v->a[87130] = 1;
	v->a[87131] = anon_sym_DOLLAR_LBRACE;
	v->a[87132] = actions(4604);
	v->a[87133] = 1;
	v->a[87134] = anon_sym_DOLLAR_LPAREN;
	v->a[87135] = actions(4606);
	v->a[87136] = 1;
	v->a[87137] = anon_sym_BQUOTE;
	v->a[87138] = actions(4608);
	v->a[87139] = 1;
	small_parse_table_4357(v);
}

void	small_parse_table_4357(t_small_parse_table_array *v)
{
	v->a[87140] = anon_sym_DOLLAR_BQUOTE;
	v->a[87141] = actions(4837);
	v->a[87142] = 1;
	v->a[87143] = aux_sym__simple_variable_name_token1;
	v->a[87144] = actions(4839);
	v->a[87145] = 1;
	v->a[87146] = sym_variable_name;
	v->a[87147] = state(1476);
	v->a[87148] = 1;
	v->a[87149] = sym__arithmetic_postfix_expression;
	v->a[87150] = state(1478);
	v->a[87151] = 1;
	v->a[87152] = sym__arithmetic_unary_expression;
	v->a[87153] = state(1490);
	v->a[87154] = 1;
	v->a[87155] = sym__arithmetic_ternary_expression;
	v->a[87156] = state(1511);
	v->a[87157] = 1;
	v->a[87158] = sym__arithmetic_binary_expression;
	v->a[87159] = actions(4588);
	small_parse_table_4358(v);
}

void	small_parse_table_4358(t_small_parse_table_array *v)
{
	v->a[87160] = 2;
	v->a[87161] = anon_sym_PLUS_PLUS;
	v->a[87162] = anon_sym_DASH_DASH;
	v->a[87163] = actions(4590);
	v->a[87164] = 2;
	v->a[87165] = anon_sym_DASH2;
	v->a[87166] = anon_sym_PLUS2;
	v->a[87167] = state(1416);
	v->a[87168] = 8;
	v->a[87169] = sym__arithmetic_expression;
	v->a[87170] = sym__arithmetic_literal;
	v->a[87171] = sym__arithmetic_parenthesized_expression;
	v->a[87172] = sym_string;
	v->a[87173] = sym_number;
	v->a[87174] = sym_simple_expansion;
	v->a[87175] = sym_expansion;
	v->a[87176] = sym_command_substitution;
	v->a[87177] = 21;
	v->a[87178] = actions(57);
	v->a[87179] = 1;
	small_parse_table_4359(v);
}

void	small_parse_table_4359(t_small_parse_table_array *v)
{
	v->a[87180] = sym_comment;
	v->a[87181] = actions(4584);
	v->a[87182] = 1;
	v->a[87183] = anon_sym_LPAREN;
	v->a[87184] = actions(4586);
	v->a[87185] = 1;
	v->a[87186] = anon_sym_BANG;
	v->a[87187] = actions(4592);
	v->a[87188] = 1;
	v->a[87189] = anon_sym_TILDE;
	v->a[87190] = actions(4594);
	v->a[87191] = 1;
	v->a[87192] = anon_sym_DOLLAR;
	v->a[87193] = actions(4596);
	v->a[87194] = 1;
	v->a[87195] = anon_sym_DQUOTE;
	v->a[87196] = actions(4598);
	v->a[87197] = 1;
	v->a[87198] = aux_sym_number_token1;
	v->a[87199] = actions(4600);
	small_parse_table_4360(v);
}

/* EOF small_parse_table_871.c */
