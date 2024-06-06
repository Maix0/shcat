/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_870.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4350(t_small_parse_table_array *v)
{
	v->a[87000] = sym_variable_name;
	v->a[87001] = state(1476);
	v->a[87002] = 1;
	v->a[87003] = sym__arithmetic_postfix_expression;
	v->a[87004] = state(1478);
	v->a[87005] = 1;
	v->a[87006] = sym__arithmetic_unary_expression;
	v->a[87007] = state(1490);
	v->a[87008] = 1;
	v->a[87009] = sym__arithmetic_ternary_expression;
	v->a[87010] = state(1511);
	v->a[87011] = 1;
	v->a[87012] = sym__arithmetic_binary_expression;
	v->a[87013] = actions(4588);
	v->a[87014] = 2;
	v->a[87015] = anon_sym_PLUS_PLUS;
	v->a[87016] = anon_sym_DASH_DASH;
	v->a[87017] = actions(4590);
	v->a[87018] = 2;
	v->a[87019] = anon_sym_DASH2;
	small_parse_table_4351(v);
}

void	small_parse_table_4351(t_small_parse_table_array *v)
{
	v->a[87020] = anon_sym_PLUS2;
	v->a[87021] = state(1391);
	v->a[87022] = 8;
	v->a[87023] = sym__arithmetic_expression;
	v->a[87024] = sym__arithmetic_literal;
	v->a[87025] = sym__arithmetic_parenthesized_expression;
	v->a[87026] = sym_string;
	v->a[87027] = sym_number;
	v->a[87028] = sym_simple_expansion;
	v->a[87029] = sym_expansion;
	v->a[87030] = sym_command_substitution;
	v->a[87031] = 21;
	v->a[87032] = actions(57);
	v->a[87033] = 1;
	v->a[87034] = sym_comment;
	v->a[87035] = actions(4328);
	v->a[87036] = 1;
	v->a[87037] = sym_word;
	v->a[87038] = actions(4340);
	v->a[87039] = 1;
	small_parse_table_4352(v);
}

void	small_parse_table_4352(t_small_parse_table_array *v)
{
	v->a[87040] = anon_sym_DOLLAR;
	v->a[87041] = actions(4346);
	v->a[87042] = 1;
	v->a[87043] = aux_sym_number_token1;
	v->a[87044] = actions(4348);
	v->a[87045] = 1;
	v->a[87046] = aux_sym_number_token2;
	v->a[87047] = actions(4352);
	v->a[87048] = 1;
	v->a[87049] = anon_sym_DOLLAR_LPAREN;
	v->a[87050] = actions(4360);
	v->a[87051] = 1;
	v->a[87052] = sym_extglob_pattern;
	v->a[87053] = actions(4362);
	v->a[87054] = 1;
	v->a[87055] = sym__brace_start;
	v->a[87056] = actions(4548);
	v->a[87057] = 1;
	v->a[87058] = anon_sym_LPAREN;
	v->a[87059] = actions(4550);
	small_parse_table_4353(v);
}

void	small_parse_table_4353(t_small_parse_table_array *v)
{
	v->a[87060] = 1;
	v->a[87061] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87062] = actions(4552);
	v->a[87063] = 1;
	v->a[87064] = sym__special_character;
	v->a[87065] = actions(4554);
	v->a[87066] = 1;
	v->a[87067] = anon_sym_DQUOTE;
	v->a[87068] = actions(4556);
	v->a[87069] = 1;
	v->a[87070] = anon_sym_DOLLAR_LBRACE;
	v->a[87071] = actions(4558);
	v->a[87072] = 1;
	v->a[87073] = anon_sym_BQUOTE;
	v->a[87074] = actions(4560);
	v->a[87075] = 1;
	v->a[87076] = anon_sym_DOLLAR_BQUOTE;
	v->a[87077] = state(3393);
	v->a[87078] = 1;
	v->a[87079] = aux_sym__literal_repeat1;
	small_parse_table_4354(v);
}

void	small_parse_table_4354(t_small_parse_table_array *v)
{
	v->a[87080] = state(3942);
	v->a[87081] = 1;
	v->a[87082] = sym_last_case_item;
	v->a[87083] = actions(4358);
	v->a[87084] = 2;
	v->a[87085] = sym_test_operator;
	v->a[87086] = sym_raw_string;
	v->a[87087] = state(1881);
	v->a[87088] = 2;
	v->a[87089] = sym_case_item;
	v->a[87090] = aux_sym_case_statement_repeat1;
	v->a[87091] = state(3472);
	v->a[87092] = 2;
	v->a[87093] = sym_concatenation;
	v->a[87094] = sym__extglob_blob;
	v->a[87095] = state(3295);
	v->a[87096] = 7;
	v->a[87097] = sym_arithmetic_expansion;
	v->a[87098] = sym_brace_expression;
	v->a[87099] = sym_string;
	small_parse_table_4355(v);
}

/* EOF small_parse_table_870.c */
