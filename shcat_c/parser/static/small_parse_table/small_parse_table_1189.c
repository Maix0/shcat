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
	v->a[118900] = sym_ansi_c_string;
	v->a[118901] = aux_sym_number_token1;
	v->a[118902] = aux_sym_number_token2;
	v->a[118903] = anon_sym_DOLLAR_LBRACE;
	v->a[118904] = anon_sym_DOLLAR_LPAREN;
	v->a[118905] = anon_sym_DOLLAR_BQUOTE;
	v->a[118906] = anon_sym_LT_LPAREN;
	v->a[118907] = anon_sym_GT_LPAREN;
	v->a[118908] = sym_word;
	v->a[118909] = 7;
	v->a[118910] = actions(3);
	v->a[118911] = 1;
	v->a[118912] = sym_comment;
	v->a[118913] = actions(5826);
	v->a[118914] = 1;
	v->a[118915] = aux_sym_heredoc_redirect_token1;
	v->a[118916] = actions(5828);
	v->a[118917] = 1;
	v->a[118918] = sym_file_descriptor;
	v->a[118919] = actions(5831);
	small_parse_table_5946(v);
}

void	small_parse_table_5946(t_small_parse_table_array *v)
{
	v->a[118920] = 3;
	v->a[118921] = sym_variable_name;
	v->a[118922] = sym_test_operator;
	v->a[118923] = sym__brace_start;
	v->a[118924] = actions(5821);
	v->a[118925] = 9;
	v->a[118926] = anon_sym_SEMI;
	v->a[118927] = anon_sym_PIPE_PIPE;
	v->a[118928] = anon_sym_AMP_AMP;
	v->a[118929] = anon_sym_PIPE;
	v->a[118930] = anon_sym_AMP;
	v->a[118931] = anon_sym_LT_LT;
	v->a[118932] = anon_sym_SEMI_SEMI;
	v->a[118933] = anon_sym_PIPE_AMP;
	v->a[118934] = anon_sym_LT_LT_DASH;
	v->a[118935] = actions(5823);
	v->a[118936] = 12;
	v->a[118937] = anon_sym_LT;
	v->a[118938] = anon_sym_GT;
	v->a[118939] = anon_sym_GT_GT;
	small_parse_table_5947(v);
}

void	small_parse_table_5947(t_small_parse_table_array *v)
{
	v->a[118940] = anon_sym_AMP_GT;
	v->a[118941] = anon_sym_AMP_GT_GT;
	v->a[118942] = anon_sym_LT_AMP;
	v->a[118943] = anon_sym_GT_AMP;
	v->a[118944] = anon_sym_GT_PIPE;
	v->a[118945] = anon_sym_LT_AMP_DASH;
	v->a[118946] = anon_sym_GT_AMP_DASH;
	v->a[118947] = anon_sym_LT_LT_LT;
	v->a[118948] = anon_sym_BQUOTE;
	v->a[118949] = actions(5819);
	v->a[118950] = 16;
	v->a[118951] = anon_sym_LPAREN_LPAREN;
	v->a[118952] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118953] = anon_sym_DOLLAR_LBRACK;
	v->a[118954] = anon_sym_DOLLAR;
	v->a[118955] = sym__special_character;
	v->a[118956] = anon_sym_DQUOTE;
	v->a[118957] = sym_raw_string;
	v->a[118958] = sym_ansi_c_string;
	v->a[118959] = aux_sym_number_token1;
	small_parse_table_5948(v);
}

void	small_parse_table_5948(t_small_parse_table_array *v)
{
	v->a[118960] = aux_sym_number_token2;
	v->a[118961] = anon_sym_DOLLAR_LBRACE;
	v->a[118962] = anon_sym_DOLLAR_LPAREN;
	v->a[118963] = anon_sym_DOLLAR_BQUOTE;
	v->a[118964] = anon_sym_LT_LPAREN;
	v->a[118965] = anon_sym_GT_LPAREN;
	v->a[118966] = sym_word;
	v->a[118967] = 3;
	v->a[118968] = actions(71);
	v->a[118969] = 1;
	v->a[118970] = sym_comment;
	v->a[118971] = actions(1320);
	v->a[118972] = 14;
	v->a[118973] = anon_sym_EQ;
	v->a[118974] = anon_sym_PIPE;
	v->a[118975] = anon_sym_CARET;
	v->a[118976] = anon_sym_AMP;
	v->a[118977] = anon_sym_LT;
	v->a[118978] = anon_sym_GT;
	v->a[118979] = anon_sym_LT_LT;
	small_parse_table_5949(v);
}

void	small_parse_table_5949(t_small_parse_table_array *v)
{
	v->a[118980] = anon_sym_GT_GT;
	v->a[118981] = anon_sym_PLUS;
	v->a[118982] = anon_sym_DASH;
	v->a[118983] = anon_sym_STAR;
	v->a[118984] = anon_sym_SLASH;
	v->a[118985] = anon_sym_PERCENT;
	v->a[118986] = anon_sym_STAR_STAR;
	v->a[118987] = actions(1322);
	v->a[118988] = 28;
	v->a[118989] = sym__concat;
	v->a[118990] = sym_test_operator;
	v->a[118991] = anon_sym_RPAREN_RPAREN;
	v->a[118992] = anon_sym_COMMA;
	v->a[118993] = anon_sym_PLUS_PLUS;
	v->a[118994] = anon_sym_DASH_DASH;
	v->a[118995] = anon_sym_PLUS_EQ;
	v->a[118996] = anon_sym_DASH_EQ;
	v->a[118997] = anon_sym_STAR_EQ;
	v->a[118998] = anon_sym_SLASH_EQ;
	v->a[118999] = anon_sym_PERCENT_EQ;
	small_parse_table_5950(v);
}

/* EOF small_parse_table_1189.c */
