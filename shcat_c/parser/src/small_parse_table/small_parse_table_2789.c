/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2789.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13945(t_small_parse_table_array *v)
{
	v->a[278900] = sym_expansion;
	v->a[278901] = sym_command_substitution;
	v->a[278902] = 16;
	v->a[278903] = actions(71);
	v->a[278904] = 1;
	v->a[278905] = sym_comment;
	v->a[278906] = actions(11808);
	v->a[278907] = 1;
	v->a[278908] = anon_sym_LPAREN;
	v->a[278909] = actions(11812);
	v->a[278910] = 1;
	v->a[278911] = anon_sym_DOLLAR;
	v->a[278912] = actions(11814);
	v->a[278913] = 1;
	v->a[278914] = anon_sym_DQUOTE;
	v->a[278915] = actions(11816);
	v->a[278916] = 1;
	v->a[278917] = aux_sym_number_token1;
	v->a[278918] = actions(11818);
	v->a[278919] = 1;
	small_parse_table_13946(v);
}

void	small_parse_table_13946(t_small_parse_table_array *v)
{
	v->a[278920] = aux_sym_number_token2;
	v->a[278921] = actions(11820);
	v->a[278922] = 1;
	v->a[278923] = anon_sym_DOLLAR_LBRACE;
	v->a[278924] = actions(11822);
	v->a[278925] = 1;
	v->a[278926] = anon_sym_DOLLAR_LPAREN;
	v->a[278927] = actions(11824);
	v->a[278928] = 1;
	v->a[278929] = anon_sym_BQUOTE;
	v->a[278930] = actions(11826);
	v->a[278931] = 1;
	v->a[278932] = anon_sym_DOLLAR_BQUOTE;
	v->a[278933] = actions(12578);
	v->a[278934] = 1;
	v->a[278935] = aux_sym__c_word_token1;
	v->a[278936] = state(3285);
	v->a[278937] = 1;
	v->a[278938] = sym__c_postfix_expression;
	v->a[278939] = state(3286);
	small_parse_table_13947(v);
}

void	small_parse_table_13947(t_small_parse_table_array *v)
{
	v->a[278940] = 1;
	v->a[278941] = sym__c_binary_expression;
	v->a[278942] = state(3290);
	v->a[278943] = 1;
	v->a[278944] = sym__c_unary_expression;
	v->a[278945] = actions(11806);
	v->a[278946] = 2;
	v->a[278947] = anon_sym_PLUS_PLUS;
	v->a[278948] = anon_sym_DASH_DASH;
	v->a[278949] = state(3214);
	v->a[278950] = 7;
	v->a[278951] = sym__c_expression_not_assignment;
	v->a[278952] = sym__c_parenthesized_expression;
	v->a[278953] = sym_string;
	v->a[278954] = sym_number;
	v->a[278955] = sym_simple_expansion;
	v->a[278956] = sym_expansion;
	v->a[278957] = sym_command_substitution;
	v->a[278958] = 16;
	v->a[278959] = actions(71);
	small_parse_table_13948(v);
}

void	small_parse_table_13948(t_small_parse_table_array *v)
{
	v->a[278960] = 1;
	v->a[278961] = sym_comment;
	v->a[278962] = actions(11808);
	v->a[278963] = 1;
	v->a[278964] = anon_sym_LPAREN;
	v->a[278965] = actions(11812);
	v->a[278966] = 1;
	v->a[278967] = anon_sym_DOLLAR;
	v->a[278968] = actions(11814);
	v->a[278969] = 1;
	v->a[278970] = anon_sym_DQUOTE;
	v->a[278971] = actions(11816);
	v->a[278972] = 1;
	v->a[278973] = aux_sym_number_token1;
	v->a[278974] = actions(11818);
	v->a[278975] = 1;
	v->a[278976] = aux_sym_number_token2;
	v->a[278977] = actions(11820);
	v->a[278978] = 1;
	v->a[278979] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_13949(v);
}

void	small_parse_table_13949(t_small_parse_table_array *v)
{
	v->a[278980] = actions(11822);
	v->a[278981] = 1;
	v->a[278982] = anon_sym_DOLLAR_LPAREN;
	v->a[278983] = actions(11824);
	v->a[278984] = 1;
	v->a[278985] = anon_sym_BQUOTE;
	v->a[278986] = actions(11826);
	v->a[278987] = 1;
	v->a[278988] = anon_sym_DOLLAR_BQUOTE;
	v->a[278989] = actions(12580);
	v->a[278990] = 1;
	v->a[278991] = aux_sym__c_word_token1;
	v->a[278992] = state(3285);
	v->a[278993] = 1;
	v->a[278994] = sym__c_postfix_expression;
	v->a[278995] = state(3286);
	v->a[278996] = 1;
	v->a[278997] = sym__c_binary_expression;
	v->a[278998] = state(3290);
	v->a[278999] = 1;
	small_parse_table_13950(v);
}

/* EOF small_parse_table_2789.c */
