/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_830.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4150(t_small_parse_table_array *v)
{
	v->a[83000] = 1;
	v->a[83001] = anon_sym_BANG;
	v->a[83002] = actions(4592);
	v->a[83003] = 1;
	v->a[83004] = anon_sym_TILDE;
	v->a[83005] = actions(4594);
	v->a[83006] = 1;
	v->a[83007] = anon_sym_DOLLAR;
	v->a[83008] = actions(4596);
	v->a[83009] = 1;
	v->a[83010] = anon_sym_DQUOTE;
	v->a[83011] = actions(4598);
	v->a[83012] = 1;
	v->a[83013] = aux_sym_number_token1;
	v->a[83014] = actions(4600);
	v->a[83015] = 1;
	v->a[83016] = aux_sym_number_token2;
	v->a[83017] = actions(4602);
	v->a[83018] = 1;
	v->a[83019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4151(v);
}

void	small_parse_table_4151(t_small_parse_table_array *v)
{
	v->a[83020] = actions(4604);
	v->a[83021] = 1;
	v->a[83022] = anon_sym_DOLLAR_LPAREN;
	v->a[83023] = actions(4606);
	v->a[83024] = 1;
	v->a[83025] = anon_sym_BQUOTE;
	v->a[83026] = actions(4608);
	v->a[83027] = 1;
	v->a[83028] = anon_sym_DOLLAR_BQUOTE;
	v->a[83029] = actions(4664);
	v->a[83030] = 1;
	v->a[83031] = aux_sym__simple_variable_name_token1;
	v->a[83032] = actions(4666);
	v->a[83033] = 1;
	v->a[83034] = sym_variable_name;
	v->a[83035] = state(1476);
	v->a[83036] = 1;
	v->a[83037] = sym__arithmetic_postfix_expression;
	v->a[83038] = state(1478);
	v->a[83039] = 1;
	small_parse_table_4152(v);
}

void	small_parse_table_4152(t_small_parse_table_array *v)
{
	v->a[83040] = sym__arithmetic_unary_expression;
	v->a[83041] = state(1490);
	v->a[83042] = 1;
	v->a[83043] = sym__arithmetic_ternary_expression;
	v->a[83044] = state(1511);
	v->a[83045] = 1;
	v->a[83046] = sym__arithmetic_binary_expression;
	v->a[83047] = actions(4588);
	v->a[83048] = 2;
	v->a[83049] = anon_sym_PLUS_PLUS;
	v->a[83050] = anon_sym_DASH_DASH;
	v->a[83051] = actions(4590);
	v->a[83052] = 2;
	v->a[83053] = anon_sym_DASH2;
	v->a[83054] = anon_sym_PLUS2;
	v->a[83055] = state(1425);
	v->a[83056] = 8;
	v->a[83057] = sym__arithmetic_expression;
	v->a[83058] = sym__arithmetic_literal;
	v->a[83059] = sym__arithmetic_parenthesized_expression;
	small_parse_table_4153(v);
}

void	small_parse_table_4153(t_small_parse_table_array *v)
{
	v->a[83060] = sym_string;
	v->a[83061] = sym_number;
	v->a[83062] = sym_simple_expansion;
	v->a[83063] = sym_expansion;
	v->a[83064] = sym_command_substitution;
	v->a[83065] = 21;
	v->a[83066] = actions(57);
	v->a[83067] = 1;
	v->a[83068] = sym_comment;
	v->a[83069] = actions(4584);
	v->a[83070] = 1;
	v->a[83071] = anon_sym_LPAREN;
	v->a[83072] = actions(4586);
	v->a[83073] = 1;
	v->a[83074] = anon_sym_BANG;
	v->a[83075] = actions(4592);
	v->a[83076] = 1;
	v->a[83077] = anon_sym_TILDE;
	v->a[83078] = actions(4594);
	v->a[83079] = 1;
	small_parse_table_4154(v);
}

void	small_parse_table_4154(t_small_parse_table_array *v)
{
	v->a[83080] = anon_sym_DOLLAR;
	v->a[83081] = actions(4596);
	v->a[83082] = 1;
	v->a[83083] = anon_sym_DQUOTE;
	v->a[83084] = actions(4598);
	v->a[83085] = 1;
	v->a[83086] = aux_sym_number_token1;
	v->a[83087] = actions(4600);
	v->a[83088] = 1;
	v->a[83089] = aux_sym_number_token2;
	v->a[83090] = actions(4602);
	v->a[83091] = 1;
	v->a[83092] = anon_sym_DOLLAR_LBRACE;
	v->a[83093] = actions(4604);
	v->a[83094] = 1;
	v->a[83095] = anon_sym_DOLLAR_LPAREN;
	v->a[83096] = actions(4606);
	v->a[83097] = 1;
	v->a[83098] = anon_sym_BQUOTE;
	v->a[83099] = actions(4608);
	small_parse_table_4155(v);
}

/* EOF small_parse_table_830.c */
