/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1209.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6045(t_small_parse_table_array *v)
{
	v->a[120900] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120901] = anon_sym_DOLLAR_LBRACK;
	v->a[120902] = anon_sym_DOLLAR;
	v->a[120903] = sym__special_character;
	v->a[120904] = anon_sym_DQUOTE;
	v->a[120905] = sym_raw_string;
	v->a[120906] = sym_ansi_c_string;
	v->a[120907] = aux_sym_number_token1;
	v->a[120908] = aux_sym_number_token2;
	v->a[120909] = anon_sym_DOLLAR_LBRACE;
	v->a[120910] = anon_sym_DOLLAR_LPAREN;
	v->a[120911] = anon_sym_BQUOTE;
	v->a[120912] = anon_sym_DOLLAR_BQUOTE;
	v->a[120913] = anon_sym_LT_LPAREN;
	v->a[120914] = anon_sym_GT_LPAREN;
	v->a[120915] = aux_sym__simple_variable_name_token1;
	v->a[120916] = sym_word;
	v->a[120917] = 5;
	v->a[120918] = actions(3);
	v->a[120919] = 1;
	small_parse_table_6046(v);
}

void	small_parse_table_6046(t_small_parse_table_array *v)
{
	v->a[120920] = sym_comment;
	v->a[120921] = actions(6456);
	v->a[120922] = 1;
	v->a[120923] = sym__special_character;
	v->a[120924] = state(2311);
	v->a[120925] = 1;
	v->a[120926] = aux_sym__literal_repeat1;
	v->a[120927] = actions(1364);
	v->a[120928] = 4;
	v->a[120929] = sym_file_descriptor;
	v->a[120930] = sym_test_operator;
	v->a[120931] = sym__brace_start;
	v->a[120932] = aux_sym_heredoc_redirect_token1;
	v->a[120933] = actions(1362);
	v->a[120934] = 36;
	v->a[120935] = anon_sym_LPAREN_LPAREN;
	v->a[120936] = anon_sym_SEMI;
	v->a[120937] = anon_sym_PIPE_PIPE;
	v->a[120938] = anon_sym_AMP_AMP;
	v->a[120939] = anon_sym_PIPE;
	small_parse_table_6047(v);
}

void	small_parse_table_6047(t_small_parse_table_array *v)
{
	v->a[120940] = anon_sym_AMP;
	v->a[120941] = anon_sym_LT;
	v->a[120942] = anon_sym_GT;
	v->a[120943] = anon_sym_LT_LT;
	v->a[120944] = anon_sym_GT_GT;
	v->a[120945] = anon_sym_RPAREN;
	v->a[120946] = anon_sym_SEMI_SEMI;
	v->a[120947] = anon_sym_PIPE_AMP;
	v->a[120948] = anon_sym_AMP_GT;
	v->a[120949] = anon_sym_AMP_GT_GT;
	v->a[120950] = anon_sym_LT_AMP;
	v->a[120951] = anon_sym_GT_AMP;
	v->a[120952] = anon_sym_GT_PIPE;
	v->a[120953] = anon_sym_LT_AMP_DASH;
	v->a[120954] = anon_sym_GT_AMP_DASH;
	v->a[120955] = anon_sym_LT_LT_DASH;
	v->a[120956] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120957] = anon_sym_DOLLAR_LBRACK;
	v->a[120958] = anon_sym_DOLLAR;
	v->a[120959] = anon_sym_DQUOTE;
	small_parse_table_6048(v);
}

void	small_parse_table_6048(t_small_parse_table_array *v)
{
	v->a[120960] = sym_raw_string;
	v->a[120961] = sym_ansi_c_string;
	v->a[120962] = aux_sym_number_token1;
	v->a[120963] = aux_sym_number_token2;
	v->a[120964] = anon_sym_DOLLAR_LBRACE;
	v->a[120965] = anon_sym_DOLLAR_LPAREN;
	v->a[120966] = anon_sym_BQUOTE;
	v->a[120967] = anon_sym_DOLLAR_BQUOTE;
	v->a[120968] = anon_sym_LT_LPAREN;
	v->a[120969] = anon_sym_GT_LPAREN;
	v->a[120970] = sym_word;
	v->a[120971] = 5;
	v->a[120972] = actions(71);
	v->a[120973] = 1;
	v->a[120974] = sym_comment;
	v->a[120975] = state(2312);
	v->a[120976] = 1;
	v->a[120977] = aux_sym_concatenation_repeat1;
	v->a[120978] = actions(6459);
	v->a[120979] = 2;
	small_parse_table_6049(v);
}

void	small_parse_table_6049(t_small_parse_table_array *v)
{
	v->a[120980] = sym__concat;
	v->a[120981] = aux_sym_concatenation_token1;
	v->a[120982] = actions(1251);
	v->a[120983] = 14;
	v->a[120984] = anon_sym_EQ;
	v->a[120985] = anon_sym_PIPE;
	v->a[120986] = anon_sym_CARET;
	v->a[120987] = anon_sym_AMP;
	v->a[120988] = anon_sym_LT;
	v->a[120989] = anon_sym_GT;
	v->a[120990] = anon_sym_LT_LT;
	v->a[120991] = anon_sym_GT_GT;
	v->a[120992] = anon_sym_PLUS;
	v->a[120993] = anon_sym_DASH;
	v->a[120994] = anon_sym_STAR;
	v->a[120995] = anon_sym_SLASH;
	v->a[120996] = anon_sym_PERCENT;
	v->a[120997] = anon_sym_STAR_STAR;
	v->a[120998] = actions(1253);
	v->a[120999] = 25;
	small_parse_table_6050(v);
}

/* EOF small_parse_table_1209.c */
