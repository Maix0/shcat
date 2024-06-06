/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_880.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4400(t_small_parse_table_array *v)
{
	v->a[88000] = 1;
	v->a[88001] = aux_sym_number_token1;
	v->a[88002] = actions(4348);
	v->a[88003] = 1;
	v->a[88004] = aux_sym_number_token2;
	v->a[88005] = actions(4352);
	v->a[88006] = 1;
	v->a[88007] = anon_sym_DOLLAR_LPAREN;
	v->a[88008] = actions(4360);
	v->a[88009] = 1;
	v->a[88010] = sym_extglob_pattern;
	v->a[88011] = actions(4362);
	v->a[88012] = 1;
	v->a[88013] = sym__brace_start;
	v->a[88014] = actions(4548);
	v->a[88015] = 1;
	v->a[88016] = anon_sym_LPAREN;
	v->a[88017] = actions(4550);
	v->a[88018] = 1;
	v->a[88019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4401(v);
}

void	small_parse_table_4401(t_small_parse_table_array *v)
{
	v->a[88020] = actions(4552);
	v->a[88021] = 1;
	v->a[88022] = sym__special_character;
	v->a[88023] = actions(4554);
	v->a[88024] = 1;
	v->a[88025] = anon_sym_DQUOTE;
	v->a[88026] = actions(4556);
	v->a[88027] = 1;
	v->a[88028] = anon_sym_DOLLAR_LBRACE;
	v->a[88029] = actions(4558);
	v->a[88030] = 1;
	v->a[88031] = anon_sym_BQUOTE;
	v->a[88032] = actions(4560);
	v->a[88033] = 1;
	v->a[88034] = anon_sym_DOLLAR_BQUOTE;
	v->a[88035] = state(3393);
	v->a[88036] = 1;
	v->a[88037] = aux_sym__literal_repeat1;
	v->a[88038] = state(3953);
	v->a[88039] = 1;
	small_parse_table_4402(v);
}

void	small_parse_table_4402(t_small_parse_table_array *v)
{
	v->a[88040] = sym_last_case_item;
	v->a[88041] = actions(4358);
	v->a[88042] = 2;
	v->a[88043] = sym_test_operator;
	v->a[88044] = sym_raw_string;
	v->a[88045] = state(1881);
	v->a[88046] = 2;
	v->a[88047] = sym_case_item;
	v->a[88048] = aux_sym_case_statement_repeat1;
	v->a[88049] = state(3472);
	v->a[88050] = 2;
	v->a[88051] = sym_concatenation;
	v->a[88052] = sym__extglob_blob;
	v->a[88053] = state(3295);
	v->a[88054] = 7;
	v->a[88055] = sym_arithmetic_expansion;
	v->a[88056] = sym_brace_expression;
	v->a[88057] = sym_string;
	v->a[88058] = sym_number;
	v->a[88059] = sym_simple_expansion;
	small_parse_table_4403(v);
}

void	small_parse_table_4403(t_small_parse_table_array *v)
{
	v->a[88060] = sym_expansion;
	v->a[88061] = sym_command_substitution;
	v->a[88062] = 21;
	v->a[88063] = actions(57);
	v->a[88064] = 1;
	v->a[88065] = sym_comment;
	v->a[88066] = actions(4584);
	v->a[88067] = 1;
	v->a[88068] = anon_sym_LPAREN;
	v->a[88069] = actions(4586);
	v->a[88070] = 1;
	v->a[88071] = anon_sym_BANG;
	v->a[88072] = actions(4592);
	v->a[88073] = 1;
	v->a[88074] = anon_sym_TILDE;
	v->a[88075] = actions(4594);
	v->a[88076] = 1;
	v->a[88077] = anon_sym_DOLLAR;
	v->a[88078] = actions(4596);
	v->a[88079] = 1;
	small_parse_table_4404(v);
}

void	small_parse_table_4404(t_small_parse_table_array *v)
{
	v->a[88080] = anon_sym_DQUOTE;
	v->a[88081] = actions(4598);
	v->a[88082] = 1;
	v->a[88083] = aux_sym_number_token1;
	v->a[88084] = actions(4600);
	v->a[88085] = 1;
	v->a[88086] = aux_sym_number_token2;
	v->a[88087] = actions(4602);
	v->a[88088] = 1;
	v->a[88089] = anon_sym_DOLLAR_LBRACE;
	v->a[88090] = actions(4604);
	v->a[88091] = 1;
	v->a[88092] = anon_sym_DOLLAR_LPAREN;
	v->a[88093] = actions(4606);
	v->a[88094] = 1;
	v->a[88095] = anon_sym_BQUOTE;
	v->a[88096] = actions(4608);
	v->a[88097] = 1;
	v->a[88098] = anon_sym_DOLLAR_BQUOTE;
	v->a[88099] = actions(4877);
	small_parse_table_4405(v);
}

/* EOF small_parse_table_880.c */
