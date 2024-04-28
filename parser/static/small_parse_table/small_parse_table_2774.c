/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2774.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13870(t_small_parse_table_array *v)
{
	v->a[277400] = actions(12177);
	v->a[277401] = 1;
	v->a[277402] = aux_sym_number_token2;
	v->a[277403] = actions(12179);
	v->a[277404] = 1;
	v->a[277405] = anon_sym_DOLLAR_LBRACE;
	v->a[277406] = actions(12181);
	v->a[277407] = 1;
	v->a[277408] = anon_sym_DOLLAR_LPAREN;
	v->a[277409] = actions(12183);
	v->a[277410] = 1;
	v->a[277411] = anon_sym_BQUOTE;
	v->a[277412] = actions(12185);
	v->a[277413] = 1;
	v->a[277414] = anon_sym_DOLLAR_BQUOTE;
	v->a[277415] = actions(12477);
	v->a[277416] = 1;
	v->a[277417] = aux_sym__c_word_token1;
	v->a[277418] = state(3442);
	v->a[277419] = 1;
	small_parse_table_13871(v);
}

void	small_parse_table_13871(t_small_parse_table_array *v)
{
	v->a[277420] = sym__c_unary_expression;
	v->a[277421] = state(3443);
	v->a[277422] = 1;
	v->a[277423] = sym__c_binary_expression;
	v->a[277424] = state(3444);
	v->a[277425] = 1;
	v->a[277426] = sym__c_postfix_expression;
	v->a[277427] = actions(12165);
	v->a[277428] = 2;
	v->a[277429] = anon_sym_PLUS_PLUS;
	v->a[277430] = anon_sym_DASH_DASH;
	v->a[277431] = state(3404);
	v->a[277432] = 7;
	v->a[277433] = sym__c_expression_not_assignment;
	v->a[277434] = sym__c_parenthesized_expression;
	v->a[277435] = sym_string;
	v->a[277436] = sym_number;
	v->a[277437] = sym_simple_expansion;
	v->a[277438] = sym_expansion;
	v->a[277439] = sym_command_substitution;
	small_parse_table_13872(v);
}

void	small_parse_table_13872(t_small_parse_table_array *v)
{
	v->a[277440] = 16;
	v->a[277441] = actions(71);
	v->a[277442] = 1;
	v->a[277443] = sym_comment;
	v->a[277444] = actions(12167);
	v->a[277445] = 1;
	v->a[277446] = anon_sym_LPAREN;
	v->a[277447] = actions(12171);
	v->a[277448] = 1;
	v->a[277449] = anon_sym_DOLLAR;
	v->a[277450] = actions(12173);
	v->a[277451] = 1;
	v->a[277452] = anon_sym_DQUOTE;
	v->a[277453] = actions(12175);
	v->a[277454] = 1;
	v->a[277455] = aux_sym_number_token1;
	v->a[277456] = actions(12177);
	v->a[277457] = 1;
	v->a[277458] = aux_sym_number_token2;
	v->a[277459] = actions(12179);
	small_parse_table_13873(v);
}

void	small_parse_table_13873(t_small_parse_table_array *v)
{
	v->a[277460] = 1;
	v->a[277461] = anon_sym_DOLLAR_LBRACE;
	v->a[277462] = actions(12181);
	v->a[277463] = 1;
	v->a[277464] = anon_sym_DOLLAR_LPAREN;
	v->a[277465] = actions(12183);
	v->a[277466] = 1;
	v->a[277467] = anon_sym_BQUOTE;
	v->a[277468] = actions(12185);
	v->a[277469] = 1;
	v->a[277470] = anon_sym_DOLLAR_BQUOTE;
	v->a[277471] = actions(12479);
	v->a[277472] = 1;
	v->a[277473] = aux_sym__c_word_token1;
	v->a[277474] = state(3442);
	v->a[277475] = 1;
	v->a[277476] = sym__c_unary_expression;
	v->a[277477] = state(3443);
	v->a[277478] = 1;
	v->a[277479] = sym__c_binary_expression;
	small_parse_table_13874(v);
}

void	small_parse_table_13874(t_small_parse_table_array *v)
{
	v->a[277480] = state(3444);
	v->a[277481] = 1;
	v->a[277482] = sym__c_postfix_expression;
	v->a[277483] = actions(12165);
	v->a[277484] = 2;
	v->a[277485] = anon_sym_PLUS_PLUS;
	v->a[277486] = anon_sym_DASH_DASH;
	v->a[277487] = state(3403);
	v->a[277488] = 7;
	v->a[277489] = sym__c_expression_not_assignment;
	v->a[277490] = sym__c_parenthesized_expression;
	v->a[277491] = sym_string;
	v->a[277492] = sym_number;
	v->a[277493] = sym_simple_expansion;
	v->a[277494] = sym_expansion;
	v->a[277495] = sym_command_substitution;
	v->a[277496] = 5;
	v->a[277497] = actions(71);
	v->a[277498] = 1;
	v->a[277499] = sym_comment;
	small_parse_table_13875(v);
}

/* EOF small_parse_table_2774.c */
