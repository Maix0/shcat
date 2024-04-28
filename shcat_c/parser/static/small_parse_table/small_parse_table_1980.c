/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1980.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9900(t_small_parse_table_array *v)
{
	v->a[198000] = state(973);
	v->a[198001] = 2;
	v->a[198002] = sym_concatenation;
	v->a[198003] = aux_sym_for_statement_repeat1;
	v->a[198004] = state(2572);
	v->a[198005] = 9;
	v->a[198006] = sym_arithmetic_expansion;
	v->a[198007] = sym_brace_expression;
	v->a[198008] = sym_string;
	v->a[198009] = sym_translated_string;
	v->a[198010] = sym_number;
	v->a[198011] = sym_simple_expansion;
	v->a[198012] = sym_expansion;
	v->a[198013] = sym_command_substitution;
	v->a[198014] = sym_process_substitution;
	v->a[198015] = 20;
	v->a[198016] = actions(71);
	v->a[198017] = 1;
	v->a[198018] = sym_comment;
	v->a[198019] = actions(5604);
	small_parse_table_9901(v);
}

void	small_parse_table_9901(t_small_parse_table_array *v)
{
	v->a[198020] = 1;
	v->a[198021] = sym_word;
	v->a[198022] = actions(5610);
	v->a[198023] = 1;
	v->a[198024] = anon_sym_DOLLAR;
	v->a[198025] = actions(5616);
	v->a[198026] = 1;
	v->a[198027] = aux_sym_number_token1;
	v->a[198028] = actions(5618);
	v->a[198029] = 1;
	v->a[198030] = aux_sym_number_token2;
	v->a[198031] = actions(5622);
	v->a[198032] = 1;
	v->a[198033] = anon_sym_DOLLAR_LPAREN;
	v->a[198034] = actions(5630);
	v->a[198035] = 1;
	v->a[198036] = sym_test_operator;
	v->a[198037] = actions(5632);
	v->a[198038] = 1;
	v->a[198039] = sym__brace_start;
	small_parse_table_9902(v);
}

void	small_parse_table_9902(t_small_parse_table_array *v)
{
	v->a[198040] = actions(8944);
	v->a[198041] = 1;
	v->a[198042] = anon_sym_DOLLAR_LBRACK;
	v->a[198043] = actions(8946);
	v->a[198044] = 1;
	v->a[198045] = sym__special_character;
	v->a[198046] = actions(8948);
	v->a[198047] = 1;
	v->a[198048] = anon_sym_DQUOTE;
	v->a[198049] = actions(8952);
	v->a[198050] = 1;
	v->a[198051] = anon_sym_DOLLAR_LBRACE;
	v->a[198052] = actions(8954);
	v->a[198053] = 1;
	v->a[198054] = anon_sym_BQUOTE;
	v->a[198055] = actions(8956);
	v->a[198056] = 1;
	v->a[198057] = anon_sym_DOLLAR_BQUOTE;
	v->a[198058] = state(3469);
	v->a[198059] = 1;
	small_parse_table_9903(v);
}

void	small_parse_table_9903(t_small_parse_table_array *v)
{
	v->a[198060] = aux_sym__literal_repeat1;
	v->a[198061] = actions(8942);
	v->a[198062] = 2;
	v->a[198063] = anon_sym_LPAREN_LPAREN;
	v->a[198064] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198065] = actions(8950);
	v->a[198066] = 2;
	v->a[198067] = sym_raw_string;
	v->a[198068] = sym_ansi_c_string;
	v->a[198069] = actions(8958);
	v->a[198070] = 2;
	v->a[198071] = anon_sym_LT_LPAREN;
	v->a[198072] = anon_sym_GT_LPAREN;
	v->a[198073] = state(1317);
	v->a[198074] = 2;
	v->a[198075] = sym_concatenation;
	v->a[198076] = aux_sym_for_statement_repeat1;
	v->a[198077] = state(3093);
	v->a[198078] = 9;
	v->a[198079] = sym_arithmetic_expansion;
	small_parse_table_9904(v);
}

void	small_parse_table_9904(t_small_parse_table_array *v)
{
	v->a[198080] = sym_brace_expression;
	v->a[198081] = sym_string;
	v->a[198082] = sym_translated_string;
	v->a[198083] = sym_number;
	v->a[198084] = sym_simple_expansion;
	v->a[198085] = sym_expansion;
	v->a[198086] = sym_command_substitution;
	v->a[198087] = sym_process_substitution;
	v->a[198088] = 20;
	v->a[198089] = actions(71);
	v->a[198090] = 1;
	v->a[198091] = sym_comment;
	v->a[198092] = actions(3397);
	v->a[198093] = 1;
	v->a[198094] = anon_sym_DOLLAR;
	v->a[198095] = actions(3401);
	v->a[198096] = 1;
	v->a[198097] = aux_sym_number_token1;
	v->a[198098] = actions(3403);
	v->a[198099] = 1;
	small_parse_table_9905(v);
}

/* EOF small_parse_table_1980.c */
