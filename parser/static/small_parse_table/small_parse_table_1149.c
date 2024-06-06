/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1149.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5745(t_small_parse_table_array *v)
{
	v->a[114900] = anon_sym_DOLLAR_BQUOTE;
	v->a[114901] = actions(6565);
	v->a[114902] = 1;
	v->a[114903] = sym_word;
	v->a[114904] = actions(6569);
	v->a[114905] = 1;
	v->a[114906] = sym__special_character;
	v->a[114907] = actions(6573);
	v->a[114908] = 1;
	v->a[114909] = sym__comment_word;
	v->a[114910] = actions(6571);
	v->a[114911] = 3;
	v->a[114912] = sym_test_operator;
	v->a[114913] = sym__bare_dollar;
	v->a[114914] = sym_raw_string;
	v->a[114915] = state(3425);
	v->a[114916] = 7;
	v->a[114917] = sym_arithmetic_expansion;
	v->a[114918] = sym_brace_expression;
	v->a[114919] = sym_string;
	small_parse_table_5746(v);
}

void	small_parse_table_5746(t_small_parse_table_array *v)
{
	v->a[114920] = sym_number;
	v->a[114921] = sym_simple_expansion;
	v->a[114922] = sym_expansion;
	v->a[114923] = sym_command_substitution;
	v->a[114924] = 16;
	v->a[114925] = actions(3);
	v->a[114926] = 1;
	v->a[114927] = sym_comment;
	v->a[114928] = actions(5814);
	v->a[114929] = 1;
	v->a[114930] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114931] = actions(5820);
	v->a[114932] = 1;
	v->a[114933] = anon_sym_DQUOTE;
	v->a[114934] = actions(5824);
	v->a[114935] = 1;
	v->a[114936] = aux_sym_number_token1;
	v->a[114937] = actions(5826);
	v->a[114938] = 1;
	v->a[114939] = aux_sym_number_token2;
	small_parse_table_5747(v);
}

void	small_parse_table_5747(t_small_parse_table_array *v)
{
	v->a[114940] = actions(5828);
	v->a[114941] = 1;
	v->a[114942] = anon_sym_DOLLAR_LBRACE;
	v->a[114943] = actions(5830);
	v->a[114944] = 1;
	v->a[114945] = anon_sym_DOLLAR_LPAREN;
	v->a[114946] = actions(5832);
	v->a[114947] = 1;
	v->a[114948] = anon_sym_BQUOTE;
	v->a[114949] = actions(5834);
	v->a[114950] = 1;
	v->a[114951] = anon_sym_DOLLAR_BQUOTE;
	v->a[114952] = actions(5840);
	v->a[114953] = 1;
	v->a[114954] = sym__brace_start;
	v->a[114955] = actions(6651);
	v->a[114956] = 1;
	v->a[114957] = sym_word;
	v->a[114958] = actions(6655);
	v->a[114959] = 1;
	small_parse_table_5748(v);
}

void	small_parse_table_5748(t_small_parse_table_array *v)
{
	v->a[114960] = sym__special_character;
	v->a[114961] = actions(6659);
	v->a[114962] = 1;
	v->a[114963] = sym__comment_word;
	v->a[114964] = actions(6705);
	v->a[114965] = 1;
	v->a[114966] = anon_sym_DOLLAR;
	v->a[114967] = actions(6657);
	v->a[114968] = 3;
	v->a[114969] = sym_test_operator;
	v->a[114970] = sym__bare_dollar;
	v->a[114971] = sym_raw_string;
	v->a[114972] = state(1532);
	v->a[114973] = 7;
	v->a[114974] = sym_arithmetic_expansion;
	v->a[114975] = sym_brace_expression;
	v->a[114976] = sym_string;
	v->a[114977] = sym_number;
	v->a[114978] = sym_simple_expansion;
	v->a[114979] = sym_expansion;
	small_parse_table_5749(v);
}

void	small_parse_table_5749(t_small_parse_table_array *v)
{
	v->a[114980] = sym_command_substitution;
	v->a[114981] = 16;
	v->a[114982] = actions(3);
	v->a[114983] = 1;
	v->a[114984] = sym_comment;
	v->a[114985] = actions(1150);
	v->a[114986] = 1;
	v->a[114987] = anon_sym_DOLLAR;
	v->a[114988] = actions(1156);
	v->a[114989] = 1;
	v->a[114990] = aux_sym_number_token1;
	v->a[114991] = actions(1158);
	v->a[114992] = 1;
	v->a[114993] = aux_sym_number_token2;
	v->a[114994] = actions(1162);
	v->a[114995] = 1;
	v->a[114996] = anon_sym_DOLLAR_LPAREN;
	v->a[114997] = actions(1172);
	v->a[114998] = 1;
	v->a[114999] = sym__brace_start;
	small_parse_table_5750(v);
}

/* EOF small_parse_table_1149.c */
