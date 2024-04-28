/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2794.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13970(t_small_parse_table_array *v)
{
	v->a[279400] = anon_sym_LPAREN;
	v->a[279401] = actions(11812);
	v->a[279402] = 1;
	v->a[279403] = anon_sym_DOLLAR;
	v->a[279404] = actions(11814);
	v->a[279405] = 1;
	v->a[279406] = anon_sym_DQUOTE;
	v->a[279407] = actions(11816);
	v->a[279408] = 1;
	v->a[279409] = aux_sym_number_token1;
	v->a[279410] = actions(11818);
	v->a[279411] = 1;
	v->a[279412] = aux_sym_number_token2;
	v->a[279413] = actions(11820);
	v->a[279414] = 1;
	v->a[279415] = anon_sym_DOLLAR_LBRACE;
	v->a[279416] = actions(11822);
	v->a[279417] = 1;
	v->a[279418] = anon_sym_DOLLAR_LPAREN;
	v->a[279419] = actions(11824);
	small_parse_table_13971(v);
}

void	small_parse_table_13971(t_small_parse_table_array *v)
{
	v->a[279420] = 1;
	v->a[279421] = anon_sym_BQUOTE;
	v->a[279422] = actions(11826);
	v->a[279423] = 1;
	v->a[279424] = anon_sym_DOLLAR_BQUOTE;
	v->a[279425] = actions(12596);
	v->a[279426] = 1;
	v->a[279427] = aux_sym__c_word_token1;
	v->a[279428] = state(3285);
	v->a[279429] = 1;
	v->a[279430] = sym__c_postfix_expression;
	v->a[279431] = state(3286);
	v->a[279432] = 1;
	v->a[279433] = sym__c_binary_expression;
	v->a[279434] = state(3290);
	v->a[279435] = 1;
	v->a[279436] = sym__c_unary_expression;
	v->a[279437] = actions(11806);
	v->a[279438] = 2;
	v->a[279439] = anon_sym_PLUS_PLUS;
	small_parse_table_13972(v);
}

void	small_parse_table_13972(t_small_parse_table_array *v)
{
	v->a[279440] = anon_sym_DASH_DASH;
	v->a[279441] = state(3199);
	v->a[279442] = 7;
	v->a[279443] = sym__c_expression_not_assignment;
	v->a[279444] = sym__c_parenthesized_expression;
	v->a[279445] = sym_string;
	v->a[279446] = sym_number;
	v->a[279447] = sym_simple_expansion;
	v->a[279448] = sym_expansion;
	v->a[279449] = sym_command_substitution;
	v->a[279450] = 16;
	v->a[279451] = actions(71);
	v->a[279452] = 1;
	v->a[279453] = sym_comment;
	v->a[279454] = actions(11808);
	v->a[279455] = 1;
	v->a[279456] = anon_sym_LPAREN;
	v->a[279457] = actions(11812);
	v->a[279458] = 1;
	v->a[279459] = anon_sym_DOLLAR;
	small_parse_table_13973(v);
}

void	small_parse_table_13973(t_small_parse_table_array *v)
{
	v->a[279460] = actions(11814);
	v->a[279461] = 1;
	v->a[279462] = anon_sym_DQUOTE;
	v->a[279463] = actions(11816);
	v->a[279464] = 1;
	v->a[279465] = aux_sym_number_token1;
	v->a[279466] = actions(11818);
	v->a[279467] = 1;
	v->a[279468] = aux_sym_number_token2;
	v->a[279469] = actions(11820);
	v->a[279470] = 1;
	v->a[279471] = anon_sym_DOLLAR_LBRACE;
	v->a[279472] = actions(11822);
	v->a[279473] = 1;
	v->a[279474] = anon_sym_DOLLAR_LPAREN;
	v->a[279475] = actions(11824);
	v->a[279476] = 1;
	v->a[279477] = anon_sym_BQUOTE;
	v->a[279478] = actions(11826);
	v->a[279479] = 1;
	small_parse_table_13974(v);
}

void	small_parse_table_13974(t_small_parse_table_array *v)
{
	v->a[279480] = anon_sym_DOLLAR_BQUOTE;
	v->a[279481] = actions(12598);
	v->a[279482] = 1;
	v->a[279483] = aux_sym__c_word_token1;
	v->a[279484] = state(3285);
	v->a[279485] = 1;
	v->a[279486] = sym__c_postfix_expression;
	v->a[279487] = state(3286);
	v->a[279488] = 1;
	v->a[279489] = sym__c_binary_expression;
	v->a[279490] = state(3290);
	v->a[279491] = 1;
	v->a[279492] = sym__c_unary_expression;
	v->a[279493] = actions(11806);
	v->a[279494] = 2;
	v->a[279495] = anon_sym_PLUS_PLUS;
	v->a[279496] = anon_sym_DASH_DASH;
	v->a[279497] = state(3198);
	v->a[279498] = 7;
	v->a[279499] = sym__c_expression_not_assignment;
	small_parse_table_13975(v);
}

/* EOF small_parse_table_2794.c */
