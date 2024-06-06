/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1189.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5945(t_small_parse_table_array *v)
{
	v->a[118900] = 1;
	v->a[118901] = aux_sym_number_token1;
	v->a[118902] = actions(5495);
	v->a[118903] = 1;
	v->a[118904] = aux_sym_number_token2;
	v->a[118905] = actions(5497);
	v->a[118906] = 1;
	v->a[118907] = anon_sym_DOLLAR_LBRACE;
	v->a[118908] = actions(5499);
	v->a[118909] = 1;
	v->a[118910] = anon_sym_DOLLAR_LPAREN;
	v->a[118911] = actions(5501);
	v->a[118912] = 1;
	v->a[118913] = anon_sym_BQUOTE;
	v->a[118914] = actions(5503);
	v->a[118915] = 1;
	v->a[118916] = anon_sym_DOLLAR_BQUOTE;
	v->a[118917] = actions(5509);
	v->a[118918] = 1;
	v->a[118919] = sym__brace_start;
	small_parse_table_5946(v);
}

void	small_parse_table_5946(t_small_parse_table_array *v)
{
	v->a[118920] = actions(6963);
	v->a[118921] = 1;
	v->a[118922] = sym_word;
	v->a[118923] = actions(6965);
	v->a[118924] = 1;
	v->a[118925] = sym__special_character;
	v->a[118926] = actions(6969);
	v->a[118927] = 1;
	v->a[118928] = sym__comment_word;
	v->a[118929] = actions(6967);
	v->a[118930] = 3;
	v->a[118931] = sym_test_operator;
	v->a[118932] = sym__bare_dollar;
	v->a[118933] = sym_raw_string;
	v->a[118934] = state(1863);
	v->a[118935] = 7;
	v->a[118936] = sym_arithmetic_expansion;
	v->a[118937] = sym_brace_expression;
	v->a[118938] = sym_string;
	v->a[118939] = sym_number;
	small_parse_table_5947(v);
}

void	small_parse_table_5947(t_small_parse_table_array *v)
{
	v->a[118940] = sym_simple_expansion;
	v->a[118941] = sym_expansion;
	v->a[118942] = sym_command_substitution;
	v->a[118943] = 16;
	v->a[118944] = actions(3);
	v->a[118945] = 1;
	v->a[118946] = sym_comment;
	v->a[118947] = actions(5334);
	v->a[118948] = 1;
	v->a[118949] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118950] = actions(5340);
	v->a[118951] = 1;
	v->a[118952] = anon_sym_DQUOTE;
	v->a[118953] = actions(5344);
	v->a[118954] = 1;
	v->a[118955] = aux_sym_number_token1;
	v->a[118956] = actions(5346);
	v->a[118957] = 1;
	v->a[118958] = aux_sym_number_token2;
	v->a[118959] = actions(5348);
	small_parse_table_5948(v);
}

void	small_parse_table_5948(t_small_parse_table_array *v)
{
	v->a[118960] = 1;
	v->a[118961] = anon_sym_DOLLAR_LBRACE;
	v->a[118962] = actions(5350);
	v->a[118963] = 1;
	v->a[118964] = anon_sym_DOLLAR_LPAREN;
	v->a[118965] = actions(5352);
	v->a[118966] = 1;
	v->a[118967] = anon_sym_BQUOTE;
	v->a[118968] = actions(5354);
	v->a[118969] = 1;
	v->a[118970] = anon_sym_DOLLAR_BQUOTE;
	v->a[118971] = actions(5360);
	v->a[118972] = 1;
	v->a[118973] = sym__brace_start;
	v->a[118974] = actions(6833);
	v->a[118975] = 1;
	v->a[118976] = sym_word;
	v->a[118977] = actions(6837);
	v->a[118978] = 1;
	v->a[118979] = sym__special_character;
	small_parse_table_5949(v);
}

void	small_parse_table_5949(t_small_parse_table_array *v)
{
	v->a[118980] = actions(6841);
	v->a[118981] = 1;
	v->a[118982] = sym__comment_word;
	v->a[118983] = actions(6971);
	v->a[118984] = 1;
	v->a[118985] = anon_sym_DOLLAR;
	v->a[118986] = actions(6839);
	v->a[118987] = 3;
	v->a[118988] = sym_test_operator;
	v->a[118989] = sym__bare_dollar;
	v->a[118990] = sym_raw_string;
	v->a[118991] = state(1070);
	v->a[118992] = 7;
	v->a[118993] = sym_arithmetic_expansion;
	v->a[118994] = sym_brace_expression;
	v->a[118995] = sym_string;
	v->a[118996] = sym_number;
	v->a[118997] = sym_simple_expansion;
	v->a[118998] = sym_expansion;
	v->a[118999] = sym_command_substitution;
	small_parse_table_5950(v);
}

/* EOF small_parse_table_1189.c */
