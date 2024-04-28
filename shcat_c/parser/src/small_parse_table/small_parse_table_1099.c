/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1099.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5495(t_small_parse_table_array *v)
{
	v->a[109900] = anon_sym_LT_AMP_DASH;
	v->a[109901] = anon_sym_GT_AMP_DASH;
	v->a[109902] = anon_sym_LT_LT_LT;
	v->a[109903] = actions(5819);
	v->a[109904] = 17;
	v->a[109905] = anon_sym_LPAREN_LPAREN;
	v->a[109906] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109907] = anon_sym_DOLLAR_LBRACK;
	v->a[109908] = anon_sym_DOLLAR;
	v->a[109909] = sym__special_character;
	v->a[109910] = anon_sym_DQUOTE;
	v->a[109911] = sym_raw_string;
	v->a[109912] = sym_ansi_c_string;
	v->a[109913] = aux_sym_number_token1;
	v->a[109914] = aux_sym_number_token2;
	v->a[109915] = anon_sym_DOLLAR_LBRACE;
	v->a[109916] = anon_sym_DOLLAR_LPAREN;
	v->a[109917] = anon_sym_BQUOTE;
	v->a[109918] = anon_sym_DOLLAR_BQUOTE;
	v->a[109919] = anon_sym_LT_LPAREN;
	small_parse_table_5496(v);
}

void	small_parse_table_5496(t_small_parse_table_array *v)
{
	v->a[109920] = anon_sym_GT_LPAREN;
	v->a[109921] = sym_word;
	v->a[109922] = 26;
	v->a[109923] = actions(71);
	v->a[109924] = 1;
	v->a[109925] = sym_comment;
	v->a[109926] = actions(1131);
	v->a[109927] = 1;
	v->a[109928] = anon_sym_LPAREN;
	v->a[109929] = actions(1141);
	v->a[109930] = 1;
	v->a[109931] = anon_sym_DOLLAR_LBRACK;
	v->a[109932] = actions(1145);
	v->a[109933] = 1;
	v->a[109934] = anon_sym_DOLLAR;
	v->a[109935] = actions(1149);
	v->a[109936] = 1;
	v->a[109937] = anon_sym_DQUOTE;
	v->a[109938] = actions(1153);
	v->a[109939] = 1;
	small_parse_table_5497(v);
}

void	small_parse_table_5497(t_small_parse_table_array *v)
{
	v->a[109940] = aux_sym_number_token1;
	v->a[109941] = actions(1155);
	v->a[109942] = 1;
	v->a[109943] = aux_sym_number_token2;
	v->a[109944] = actions(1157);
	v->a[109945] = 1;
	v->a[109946] = anon_sym_DOLLAR_LBRACE;
	v->a[109947] = actions(1159);
	v->a[109948] = 1;
	v->a[109949] = anon_sym_DOLLAR_LPAREN;
	v->a[109950] = actions(1163);
	v->a[109951] = 1;
	v->a[109952] = anon_sym_DOLLAR_BQUOTE;
	v->a[109953] = actions(1169);
	v->a[109954] = 1;
	v->a[109955] = sym__brace_start;
	v->a[109956] = actions(1187);
	v->a[109957] = 1;
	v->a[109958] = sym_word;
	v->a[109959] = actions(1189);
	small_parse_table_5498(v);
}

void	small_parse_table_5498(t_small_parse_table_array *v)
{
	v->a[109960] = 1;
	v->a[109961] = anon_sym_BANG;
	v->a[109962] = actions(1195);
	v->a[109963] = 1;
	v->a[109964] = anon_sym_TILDE;
	v->a[109965] = actions(1201);
	v->a[109966] = 1;
	v->a[109967] = sym_test_operator;
	v->a[109968] = actions(3060);
	v->a[109969] = 1;
	v->a[109970] = anon_sym_BQUOTE;
	v->a[109971] = actions(5779);
	v->a[109972] = 1;
	v->a[109973] = sym__special_character;
	v->a[109974] = state(2717);
	v->a[109975] = 1;
	v->a[109976] = aux_sym__literal_repeat1;
	v->a[109977] = state(3050);
	v->a[109978] = 1;
	v->a[109979] = sym__expression;
	small_parse_table_5499(v);
}

void	small_parse_table_5499(t_small_parse_table_array *v)
{
	v->a[109980] = actions(1129);
	v->a[109981] = 2;
	v->a[109982] = anon_sym_LPAREN_LPAREN;
	v->a[109983] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109984] = actions(1165);
	v->a[109985] = 2;
	v->a[109986] = anon_sym_LT_LPAREN;
	v->a[109987] = anon_sym_GT_LPAREN;
	v->a[109988] = actions(1191);
	v->a[109989] = 2;
	v->a[109990] = anon_sym_PLUS_PLUS2;
	v->a[109991] = anon_sym_DASH_DASH2;
	v->a[109992] = actions(1193);
	v->a[109993] = 2;
	v->a[109994] = anon_sym_DASH2;
	v->a[109995] = anon_sym_PLUS2;
	v->a[109996] = actions(1199);
	v->a[109997] = 2;
	v->a[109998] = sym_raw_string;
	v->a[109999] = sym_ansi_c_string;
	small_parse_table_5500(v);
}

/* EOF small_parse_table_1099.c */
