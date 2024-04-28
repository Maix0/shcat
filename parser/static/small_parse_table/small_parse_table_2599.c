/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2599.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12995(t_small_parse_table_array *v)
{
	v->a[259900] = anon_sym_DOLLAR;
	v->a[259901] = actions(11814);
	v->a[259902] = 1;
	v->a[259903] = anon_sym_DQUOTE;
	v->a[259904] = actions(11816);
	v->a[259905] = 1;
	v->a[259906] = aux_sym_number_token1;
	v->a[259907] = actions(11818);
	v->a[259908] = 1;
	v->a[259909] = aux_sym_number_token2;
	v->a[259910] = actions(11820);
	v->a[259911] = 1;
	v->a[259912] = anon_sym_DOLLAR_LBRACE;
	v->a[259913] = actions(11822);
	v->a[259914] = 1;
	v->a[259915] = anon_sym_DOLLAR_LPAREN;
	v->a[259916] = actions(11824);
	v->a[259917] = 1;
	v->a[259918] = anon_sym_BQUOTE;
	v->a[259919] = actions(11826);
	small_parse_table_12996(v);
}

void	small_parse_table_12996(t_small_parse_table_array *v)
{
	v->a[259920] = 1;
	v->a[259921] = anon_sym_DOLLAR_BQUOTE;
	v->a[259922] = actions(11945);
	v->a[259923] = 1;
	v->a[259924] = anon_sym_RPAREN_RPAREN;
	v->a[259925] = state(3285);
	v->a[259926] = 1;
	v->a[259927] = sym__c_postfix_expression;
	v->a[259928] = state(3286);
	v->a[259929] = 1;
	v->a[259930] = sym__c_binary_expression;
	v->a[259931] = state(3290);
	v->a[259932] = 1;
	v->a[259933] = sym__c_unary_expression;
	v->a[259934] = state(6658);
	v->a[259935] = 1;
	v->a[259936] = sym__c_expression;
	v->a[259937] = state(6768);
	v->a[259938] = 1;
	v->a[259939] = sym__c_variable_assignment;
	small_parse_table_12997(v);
}

void	small_parse_table_12997(t_small_parse_table_array *v)
{
	v->a[259940] = actions(11806);
	v->a[259941] = 2;
	v->a[259942] = anon_sym_PLUS_PLUS;
	v->a[259943] = anon_sym_DASH_DASH;
	v->a[259944] = state(3292);
	v->a[259945] = 7;
	v->a[259946] = sym__c_expression_not_assignment;
	v->a[259947] = sym__c_parenthesized_expression;
	v->a[259948] = sym_string;
	v->a[259949] = sym_number;
	v->a[259950] = sym_simple_expansion;
	v->a[259951] = sym_expansion;
	v->a[259952] = sym_command_substitution;
	v->a[259953] = 5;
	v->a[259954] = actions(3);
	v->a[259955] = 1;
	v->a[259956] = sym_comment;
	v->a[259957] = actions(4253);
	v->a[259958] = 2;
	v->a[259959] = anon_sym_PIPE;
	small_parse_table_12998(v);
}

void	small_parse_table_12998(t_small_parse_table_array *v)
{
	v->a[259960] = anon_sym_PIPE_AMP;
	v->a[259961] = actions(4272);
	v->a[259962] = 2;
	v->a[259963] = sym_file_descriptor;
	v->a[259964] = aux_sym_heredoc_redirect_token1;
	v->a[259965] = state(4697);
	v->a[259966] = 3;
	v->a[259967] = sym_file_redirect;
	v->a[259968] = sym_heredoc_redirect;
	v->a[259969] = aux_sym_redirected_statement_repeat1;
	v->a[259970] = actions(4270);
	v->a[259971] = 18;
	v->a[259972] = anon_sym_SEMI;
	v->a[259973] = anon_sym_PIPE_PIPE;
	v->a[259974] = anon_sym_AMP_AMP;
	v->a[259975] = anon_sym_AMP;
	v->a[259976] = anon_sym_LT;
	v->a[259977] = anon_sym_GT;
	v->a[259978] = anon_sym_LT_LT;
	v->a[259979] = anon_sym_GT_GT;
	small_parse_table_12999(v);
}

void	small_parse_table_12999(t_small_parse_table_array *v)
{
	v->a[259980] = anon_sym_SEMI_SEMI;
	v->a[259981] = anon_sym_AMP_GT;
	v->a[259982] = anon_sym_AMP_GT_GT;
	v->a[259983] = anon_sym_LT_AMP;
	v->a[259984] = anon_sym_GT_AMP;
	v->a[259985] = anon_sym_GT_PIPE;
	v->a[259986] = anon_sym_LT_AMP_DASH;
	v->a[259987] = anon_sym_GT_AMP_DASH;
	v->a[259988] = anon_sym_LT_LT_DASH;
	v->a[259989] = anon_sym_BQUOTE;
	v->a[259990] = 8;
	v->a[259991] = actions(3);
	v->a[259992] = 1;
	v->a[259993] = sym_comment;
	v->a[259994] = actions(11508);
	v->a[259995] = 1;
	v->a[259996] = anon_sym_LT_LT_LT;
	v->a[259997] = actions(11535);
	v->a[259998] = 1;
	v->a[259999] = aux_sym_heredoc_redirect_token1;
	small_parse_table_13000(v);
}

/* EOF small_parse_table_2599.c */
