/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2779.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13895(t_small_parse_table_array *v)
{
	v->a[277900] = actions(12181);
	v->a[277901] = 1;
	v->a[277902] = anon_sym_DOLLAR_LPAREN;
	v->a[277903] = actions(12183);
	v->a[277904] = 1;
	v->a[277905] = anon_sym_BQUOTE;
	v->a[277906] = actions(12185);
	v->a[277907] = 1;
	v->a[277908] = anon_sym_DOLLAR_BQUOTE;
	v->a[277909] = actions(12508);
	v->a[277910] = 1;
	v->a[277911] = aux_sym__c_word_token1;
	v->a[277912] = state(3442);
	v->a[277913] = 1;
	v->a[277914] = sym__c_unary_expression;
	v->a[277915] = state(3443);
	v->a[277916] = 1;
	v->a[277917] = sym__c_binary_expression;
	v->a[277918] = state(3444);
	v->a[277919] = 1;
	small_parse_table_13896(v);
}

void	small_parse_table_13896(t_small_parse_table_array *v)
{
	v->a[277920] = sym__c_postfix_expression;
	v->a[277921] = actions(12165);
	v->a[277922] = 2;
	v->a[277923] = anon_sym_PLUS_PLUS;
	v->a[277924] = anon_sym_DASH_DASH;
	v->a[277925] = state(3392);
	v->a[277926] = 7;
	v->a[277927] = sym__c_expression_not_assignment;
	v->a[277928] = sym__c_parenthesized_expression;
	v->a[277929] = sym_string;
	v->a[277930] = sym_number;
	v->a[277931] = sym_simple_expansion;
	v->a[277932] = sym_expansion;
	v->a[277933] = sym_command_substitution;
	v->a[277934] = 16;
	v->a[277935] = actions(71);
	v->a[277936] = 1;
	v->a[277937] = sym_comment;
	v->a[277938] = actions(12167);
	v->a[277939] = 1;
	small_parse_table_13897(v);
}

void	small_parse_table_13897(t_small_parse_table_array *v)
{
	v->a[277940] = anon_sym_LPAREN;
	v->a[277941] = actions(12171);
	v->a[277942] = 1;
	v->a[277943] = anon_sym_DOLLAR;
	v->a[277944] = actions(12173);
	v->a[277945] = 1;
	v->a[277946] = anon_sym_DQUOTE;
	v->a[277947] = actions(12175);
	v->a[277948] = 1;
	v->a[277949] = aux_sym_number_token1;
	v->a[277950] = actions(12177);
	v->a[277951] = 1;
	v->a[277952] = aux_sym_number_token2;
	v->a[277953] = actions(12179);
	v->a[277954] = 1;
	v->a[277955] = anon_sym_DOLLAR_LBRACE;
	v->a[277956] = actions(12181);
	v->a[277957] = 1;
	v->a[277958] = anon_sym_DOLLAR_LPAREN;
	v->a[277959] = actions(12183);
	small_parse_table_13898(v);
}

void	small_parse_table_13898(t_small_parse_table_array *v)
{
	v->a[277960] = 1;
	v->a[277961] = anon_sym_BQUOTE;
	v->a[277962] = actions(12185);
	v->a[277963] = 1;
	v->a[277964] = anon_sym_DOLLAR_BQUOTE;
	v->a[277965] = actions(12510);
	v->a[277966] = 1;
	v->a[277967] = aux_sym__c_word_token1;
	v->a[277968] = state(3442);
	v->a[277969] = 1;
	v->a[277970] = sym__c_unary_expression;
	v->a[277971] = state(3443);
	v->a[277972] = 1;
	v->a[277973] = sym__c_binary_expression;
	v->a[277974] = state(3444);
	v->a[277975] = 1;
	v->a[277976] = sym__c_postfix_expression;
	v->a[277977] = actions(12165);
	v->a[277978] = 2;
	v->a[277979] = anon_sym_PLUS_PLUS;
	small_parse_table_13899(v);
}

void	small_parse_table_13899(t_small_parse_table_array *v)
{
	v->a[277980] = anon_sym_DASH_DASH;
	v->a[277981] = state(3390);
	v->a[277982] = 7;
	v->a[277983] = sym__c_expression_not_assignment;
	v->a[277984] = sym__c_parenthesized_expression;
	v->a[277985] = sym_string;
	v->a[277986] = sym_number;
	v->a[277987] = sym_simple_expansion;
	v->a[277988] = sym_expansion;
	v->a[277989] = sym_command_substitution;
	v->a[277990] = 16;
	v->a[277991] = actions(71);
	v->a[277992] = 1;
	v->a[277993] = sym_comment;
	v->a[277994] = actions(12167);
	v->a[277995] = 1;
	v->a[277996] = anon_sym_LPAREN;
	v->a[277997] = actions(12171);
	v->a[277998] = 1;
	v->a[277999] = anon_sym_DOLLAR;
	small_parse_table_13900(v);
}

/* EOF small_parse_table_2779.c */
