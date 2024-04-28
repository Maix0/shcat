/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2799.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13995(t_small_parse_table_array *v)
{
	v->a[279900] = sym_number;
	v->a[279901] = sym_simple_expansion;
	v->a[279902] = sym_expansion;
	v->a[279903] = sym_command_substitution;
	v->a[279904] = 16;
	v->a[279905] = actions(71);
	v->a[279906] = 1;
	v->a[279907] = sym_comment;
	v->a[279908] = actions(11256);
	v->a[279909] = 1;
	v->a[279910] = anon_sym_DOLLAR;
	v->a[279911] = actions(11262);
	v->a[279912] = 1;
	v->a[279913] = aux_sym_number_token2;
	v->a[279914] = actions(12233);
	v->a[279915] = 1;
	v->a[279916] = anon_sym_LPAREN;
	v->a[279917] = actions(12237);
	v->a[279918] = 1;
	v->a[279919] = anon_sym_DQUOTE;
	small_parse_table_13996(v);
}

void	small_parse_table_13996(t_small_parse_table_array *v)
{
	v->a[279920] = actions(12239);
	v->a[279921] = 1;
	v->a[279922] = aux_sym_number_token1;
	v->a[279923] = actions(12241);
	v->a[279924] = 1;
	v->a[279925] = anon_sym_DOLLAR_LBRACE;
	v->a[279926] = actions(12243);
	v->a[279927] = 1;
	v->a[279928] = anon_sym_DOLLAR_LPAREN;
	v->a[279929] = actions(12245);
	v->a[279930] = 1;
	v->a[279931] = anon_sym_BQUOTE;
	v->a[279932] = actions(12247);
	v->a[279933] = 1;
	v->a[279934] = anon_sym_DOLLAR_BQUOTE;
	v->a[279935] = actions(12618);
	v->a[279936] = 1;
	v->a[279937] = aux_sym__c_word_token1;
	v->a[279938] = state(3113);
	v->a[279939] = 1;
	small_parse_table_13997(v);
}

void	small_parse_table_13997(t_small_parse_table_array *v)
{
	v->a[279940] = sym__c_postfix_expression;
	v->a[279941] = state(3116);
	v->a[279942] = 1;
	v->a[279943] = sym__c_binary_expression;
	v->a[279944] = state(3118);
	v->a[279945] = 1;
	v->a[279946] = sym__c_unary_expression;
	v->a[279947] = actions(12231);
	v->a[279948] = 2;
	v->a[279949] = anon_sym_PLUS_PLUS;
	v->a[279950] = anon_sym_DASH_DASH;
	v->a[279951] = state(2991);
	v->a[279952] = 7;
	v->a[279953] = sym__c_expression_not_assignment;
	v->a[279954] = sym__c_parenthesized_expression;
	v->a[279955] = sym_string;
	v->a[279956] = sym_number;
	v->a[279957] = sym_simple_expansion;
	v->a[279958] = sym_expansion;
	v->a[279959] = sym_command_substitution;
	small_parse_table_13998(v);
}

void	small_parse_table_13998(t_small_parse_table_array *v)
{
	v->a[279960] = 16;
	v->a[279961] = actions(71);
	v->a[279962] = 1;
	v->a[279963] = sym_comment;
	v->a[279964] = actions(11256);
	v->a[279965] = 1;
	v->a[279966] = anon_sym_DOLLAR;
	v->a[279967] = actions(11262);
	v->a[279968] = 1;
	v->a[279969] = aux_sym_number_token2;
	v->a[279970] = actions(12233);
	v->a[279971] = 1;
	v->a[279972] = anon_sym_LPAREN;
	v->a[279973] = actions(12237);
	v->a[279974] = 1;
	v->a[279975] = anon_sym_DQUOTE;
	v->a[279976] = actions(12239);
	v->a[279977] = 1;
	v->a[279978] = aux_sym_number_token1;
	v->a[279979] = actions(12241);
	small_parse_table_13999(v);
}

void	small_parse_table_13999(t_small_parse_table_array *v)
{
	v->a[279980] = 1;
	v->a[279981] = anon_sym_DOLLAR_LBRACE;
	v->a[279982] = actions(12243);
	v->a[279983] = 1;
	v->a[279984] = anon_sym_DOLLAR_LPAREN;
	v->a[279985] = actions(12245);
	v->a[279986] = 1;
	v->a[279987] = anon_sym_BQUOTE;
	v->a[279988] = actions(12247);
	v->a[279989] = 1;
	v->a[279990] = anon_sym_DOLLAR_BQUOTE;
	v->a[279991] = actions(12620);
	v->a[279992] = 1;
	v->a[279993] = aux_sym__c_word_token1;
	v->a[279994] = state(3113);
	v->a[279995] = 1;
	v->a[279996] = sym__c_postfix_expression;
	v->a[279997] = state(3116);
	v->a[279998] = 1;
	v->a[279999] = sym__c_binary_expression;
	small_parse_table_14000(v);
}

/* EOF small_parse_table_2799.c */
