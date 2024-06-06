/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_840.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4200(t_small_parse_table_array *v)
{
	v->a[84000] = 1;
	v->a[84001] = anon_sym_DQUOTE;
	v->a[84002] = actions(4556);
	v->a[84003] = 1;
	v->a[84004] = anon_sym_DOLLAR_LBRACE;
	v->a[84005] = actions(4558);
	v->a[84006] = 1;
	v->a[84007] = anon_sym_BQUOTE;
	v->a[84008] = actions(4560);
	v->a[84009] = 1;
	v->a[84010] = anon_sym_DOLLAR_BQUOTE;
	v->a[84011] = state(3393);
	v->a[84012] = 1;
	v->a[84013] = aux_sym__literal_repeat1;
	v->a[84014] = state(3774);
	v->a[84015] = 1;
	v->a[84016] = sym_last_case_item;
	v->a[84017] = actions(4358);
	v->a[84018] = 2;
	v->a[84019] = sym_test_operator;
	small_parse_table_4201(v);
}

void	small_parse_table_4201(t_small_parse_table_array *v)
{
	v->a[84020] = sym_raw_string;
	v->a[84021] = state(1881);
	v->a[84022] = 2;
	v->a[84023] = sym_case_item;
	v->a[84024] = aux_sym_case_statement_repeat1;
	v->a[84025] = state(3472);
	v->a[84026] = 2;
	v->a[84027] = sym_concatenation;
	v->a[84028] = sym__extglob_blob;
	v->a[84029] = state(3295);
	v->a[84030] = 7;
	v->a[84031] = sym_arithmetic_expansion;
	v->a[84032] = sym_brace_expression;
	v->a[84033] = sym_string;
	v->a[84034] = sym_number;
	v->a[84035] = sym_simple_expansion;
	v->a[84036] = sym_expansion;
	v->a[84037] = sym_command_substitution;
	v->a[84038] = 21;
	v->a[84039] = actions(57);
	small_parse_table_4202(v);
}

void	small_parse_table_4202(t_small_parse_table_array *v)
{
	v->a[84040] = 1;
	v->a[84041] = sym_comment;
	v->a[84042] = actions(4328);
	v->a[84043] = 1;
	v->a[84044] = sym_word;
	v->a[84045] = actions(4340);
	v->a[84046] = 1;
	v->a[84047] = anon_sym_DOLLAR;
	v->a[84048] = actions(4346);
	v->a[84049] = 1;
	v->a[84050] = aux_sym_number_token1;
	v->a[84051] = actions(4348);
	v->a[84052] = 1;
	v->a[84053] = aux_sym_number_token2;
	v->a[84054] = actions(4352);
	v->a[84055] = 1;
	v->a[84056] = anon_sym_DOLLAR_LPAREN;
	v->a[84057] = actions(4360);
	v->a[84058] = 1;
	v->a[84059] = sym_extglob_pattern;
	small_parse_table_4203(v);
}

void	small_parse_table_4203(t_small_parse_table_array *v)
{
	v->a[84060] = actions(4362);
	v->a[84061] = 1;
	v->a[84062] = sym__brace_start;
	v->a[84063] = actions(4548);
	v->a[84064] = 1;
	v->a[84065] = anon_sym_LPAREN;
	v->a[84066] = actions(4550);
	v->a[84067] = 1;
	v->a[84068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84069] = actions(4552);
	v->a[84070] = 1;
	v->a[84071] = sym__special_character;
	v->a[84072] = actions(4554);
	v->a[84073] = 1;
	v->a[84074] = anon_sym_DQUOTE;
	v->a[84075] = actions(4556);
	v->a[84076] = 1;
	v->a[84077] = anon_sym_DOLLAR_LBRACE;
	v->a[84078] = actions(4558);
	v->a[84079] = 1;
	small_parse_table_4204(v);
}

void	small_parse_table_4204(t_small_parse_table_array *v)
{
	v->a[84080] = anon_sym_BQUOTE;
	v->a[84081] = actions(4560);
	v->a[84082] = 1;
	v->a[84083] = anon_sym_DOLLAR_BQUOTE;
	v->a[84084] = state(3393);
	v->a[84085] = 1;
	v->a[84086] = aux_sym__literal_repeat1;
	v->a[84087] = state(3773);
	v->a[84088] = 1;
	v->a[84089] = sym_last_case_item;
	v->a[84090] = actions(4358);
	v->a[84091] = 2;
	v->a[84092] = sym_test_operator;
	v->a[84093] = sym_raw_string;
	v->a[84094] = state(1881);
	v->a[84095] = 2;
	v->a[84096] = sym_case_item;
	v->a[84097] = aux_sym_case_statement_repeat1;
	v->a[84098] = state(3472);
	v->a[84099] = 2;
	small_parse_table_4205(v);
}

/* EOF small_parse_table_840.c */
