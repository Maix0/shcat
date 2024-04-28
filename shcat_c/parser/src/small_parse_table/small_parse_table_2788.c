/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2788.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13940(t_small_parse_table_array *v)
{
	v->a[278800] = actions(11814);
	v->a[278801] = 1;
	v->a[278802] = anon_sym_DQUOTE;
	v->a[278803] = actions(11816);
	v->a[278804] = 1;
	v->a[278805] = aux_sym_number_token1;
	v->a[278806] = actions(11818);
	v->a[278807] = 1;
	v->a[278808] = aux_sym_number_token2;
	v->a[278809] = actions(11820);
	v->a[278810] = 1;
	v->a[278811] = anon_sym_DOLLAR_LBRACE;
	v->a[278812] = actions(11822);
	v->a[278813] = 1;
	v->a[278814] = anon_sym_DOLLAR_LPAREN;
	v->a[278815] = actions(11824);
	v->a[278816] = 1;
	v->a[278817] = anon_sym_BQUOTE;
	v->a[278818] = actions(11826);
	v->a[278819] = 1;
	small_parse_table_13941(v);
}

void	small_parse_table_13941(t_small_parse_table_array *v)
{
	v->a[278820] = anon_sym_DOLLAR_BQUOTE;
	v->a[278821] = actions(12574);
	v->a[278822] = 1;
	v->a[278823] = aux_sym__c_word_token1;
	v->a[278824] = state(3285);
	v->a[278825] = 1;
	v->a[278826] = sym__c_postfix_expression;
	v->a[278827] = state(3286);
	v->a[278828] = 1;
	v->a[278829] = sym__c_binary_expression;
	v->a[278830] = state(3290);
	v->a[278831] = 1;
	v->a[278832] = sym__c_unary_expression;
	v->a[278833] = actions(11806);
	v->a[278834] = 2;
	v->a[278835] = anon_sym_PLUS_PLUS;
	v->a[278836] = anon_sym_DASH_DASH;
	v->a[278837] = state(3218);
	v->a[278838] = 7;
	v->a[278839] = sym__c_expression_not_assignment;
	small_parse_table_13942(v);
}

void	small_parse_table_13942(t_small_parse_table_array *v)
{
	v->a[278840] = sym__c_parenthesized_expression;
	v->a[278841] = sym_string;
	v->a[278842] = sym_number;
	v->a[278843] = sym_simple_expansion;
	v->a[278844] = sym_expansion;
	v->a[278845] = sym_command_substitution;
	v->a[278846] = 16;
	v->a[278847] = actions(71);
	v->a[278848] = 1;
	v->a[278849] = sym_comment;
	v->a[278850] = actions(11808);
	v->a[278851] = 1;
	v->a[278852] = anon_sym_LPAREN;
	v->a[278853] = actions(11812);
	v->a[278854] = 1;
	v->a[278855] = anon_sym_DOLLAR;
	v->a[278856] = actions(11814);
	v->a[278857] = 1;
	v->a[278858] = anon_sym_DQUOTE;
	v->a[278859] = actions(11816);
	small_parse_table_13943(v);
}

void	small_parse_table_13943(t_small_parse_table_array *v)
{
	v->a[278860] = 1;
	v->a[278861] = aux_sym_number_token1;
	v->a[278862] = actions(11818);
	v->a[278863] = 1;
	v->a[278864] = aux_sym_number_token2;
	v->a[278865] = actions(11820);
	v->a[278866] = 1;
	v->a[278867] = anon_sym_DOLLAR_LBRACE;
	v->a[278868] = actions(11822);
	v->a[278869] = 1;
	v->a[278870] = anon_sym_DOLLAR_LPAREN;
	v->a[278871] = actions(11824);
	v->a[278872] = 1;
	v->a[278873] = anon_sym_BQUOTE;
	v->a[278874] = actions(11826);
	v->a[278875] = 1;
	v->a[278876] = anon_sym_DOLLAR_BQUOTE;
	v->a[278877] = actions(12576);
	v->a[278878] = 1;
	v->a[278879] = aux_sym__c_word_token1;
	small_parse_table_13944(v);
}

void	small_parse_table_13944(t_small_parse_table_array *v)
{
	v->a[278880] = state(3285);
	v->a[278881] = 1;
	v->a[278882] = sym__c_postfix_expression;
	v->a[278883] = state(3286);
	v->a[278884] = 1;
	v->a[278885] = sym__c_binary_expression;
	v->a[278886] = state(3290);
	v->a[278887] = 1;
	v->a[278888] = sym__c_unary_expression;
	v->a[278889] = actions(11806);
	v->a[278890] = 2;
	v->a[278891] = anon_sym_PLUS_PLUS;
	v->a[278892] = anon_sym_DASH_DASH;
	v->a[278893] = state(3216);
	v->a[278894] = 7;
	v->a[278895] = sym__c_expression_not_assignment;
	v->a[278896] = sym__c_parenthesized_expression;
	v->a[278897] = sym_string;
	v->a[278898] = sym_number;
	v->a[278899] = sym_simple_expansion;
	small_parse_table_13945(v);
}

/* EOF small_parse_table_2788.c */
