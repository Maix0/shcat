/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_820.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4100(t_small_parse_table_array *v)
{
	v->a[82000] = anon_sym_GT_AMP;
	v->a[82001] = anon_sym_GT_PIPE;
	v->a[82002] = anon_sym_LT_AMP_DASH;
	v->a[82003] = anon_sym_GT_AMP_DASH;
	v->a[82004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82005] = aux_sym_concatenation_token1;
	v->a[82006] = anon_sym_DOLLAR;
	v->a[82007] = sym__special_character;
	v->a[82008] = anon_sym_DQUOTE;
	v->a[82009] = sym_raw_string;
	v->a[82010] = aux_sym_number_token1;
	v->a[82011] = aux_sym_number_token2;
	v->a[82012] = anon_sym_DOLLAR_LBRACE;
	v->a[82013] = anon_sym_DOLLAR_LPAREN;
	v->a[82014] = anon_sym_BQUOTE;
	v->a[82015] = anon_sym_DOLLAR_BQUOTE;
	v->a[82016] = sym_word;
	v->a[82017] = 22;
	v->a[82018] = actions(57);
	v->a[82019] = 1;
	small_parse_table_4101(v);
}

void	small_parse_table_4101(t_small_parse_table_array *v)
{
	v->a[82020] = sym_comment;
	v->a[82021] = actions(4328);
	v->a[82022] = 1;
	v->a[82023] = sym_word;
	v->a[82024] = actions(4340);
	v->a[82025] = 1;
	v->a[82026] = anon_sym_DOLLAR;
	v->a[82027] = actions(4346);
	v->a[82028] = 1;
	v->a[82029] = aux_sym_number_token1;
	v->a[82030] = actions(4348);
	v->a[82031] = 1;
	v->a[82032] = aux_sym_number_token2;
	v->a[82033] = actions(4352);
	v->a[82034] = 1;
	v->a[82035] = anon_sym_DOLLAR_LPAREN;
	v->a[82036] = actions(4360);
	v->a[82037] = 1;
	v->a[82038] = sym_extglob_pattern;
	v->a[82039] = actions(4362);
	small_parse_table_4102(v);
}

void	small_parse_table_4102(t_small_parse_table_array *v)
{
	v->a[82040] = 1;
	v->a[82041] = sym__brace_start;
	v->a[82042] = actions(4548);
	v->a[82043] = 1;
	v->a[82044] = anon_sym_LPAREN;
	v->a[82045] = actions(4550);
	v->a[82046] = 1;
	v->a[82047] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82048] = actions(4552);
	v->a[82049] = 1;
	v->a[82050] = sym__special_character;
	v->a[82051] = actions(4554);
	v->a[82052] = 1;
	v->a[82053] = anon_sym_DQUOTE;
	v->a[82054] = actions(4556);
	v->a[82055] = 1;
	v->a[82056] = anon_sym_DOLLAR_LBRACE;
	v->a[82057] = actions(4558);
	v->a[82058] = 1;
	v->a[82059] = anon_sym_BQUOTE;
	small_parse_table_4103(v);
}

void	small_parse_table_4103(t_small_parse_table_array *v)
{
	v->a[82060] = actions(4560);
	v->a[82061] = 1;
	v->a[82062] = anon_sym_DOLLAR_BQUOTE;
	v->a[82063] = actions(4576);
	v->a[82064] = 1;
	v->a[82065] = anon_sym_esac;
	v->a[82066] = state(3393);
	v->a[82067] = 1;
	v->a[82068] = aux_sym__literal_repeat1;
	v->a[82069] = state(4025);
	v->a[82070] = 1;
	v->a[82071] = sym_last_case_item;
	v->a[82072] = actions(4358);
	v->a[82073] = 2;
	v->a[82074] = sym_test_operator;
	v->a[82075] = sym_raw_string;
	v->a[82076] = state(1818);
	v->a[82077] = 2;
	v->a[82078] = sym_case_item;
	v->a[82079] = aux_sym_case_statement_repeat1;
	small_parse_table_4104(v);
}

void	small_parse_table_4104(t_small_parse_table_array *v)
{
	v->a[82080] = state(3472);
	v->a[82081] = 2;
	v->a[82082] = sym_concatenation;
	v->a[82083] = sym__extglob_blob;
	v->a[82084] = state(3295);
	v->a[82085] = 7;
	v->a[82086] = sym_arithmetic_expansion;
	v->a[82087] = sym_brace_expression;
	v->a[82088] = sym_string;
	v->a[82089] = sym_number;
	v->a[82090] = sym_simple_expansion;
	v->a[82091] = sym_expansion;
	v->a[82092] = sym_command_substitution;
	v->a[82093] = 3;
	v->a[82094] = actions(3);
	v->a[82095] = 1;
	v->a[82096] = sym_comment;
	v->a[82097] = actions(3159);
	v->a[82098] = 5;
	v->a[82099] = sym_file_descriptor;
	small_parse_table_4105(v);
}

/* EOF small_parse_table_820.c */
