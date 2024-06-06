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
	v->a[120900] = 3;
	v->a[120901] = sym_test_operator;
	v->a[120902] = sym__bare_dollar;
	v->a[120903] = sym_raw_string;
	v->a[120904] = state(2035);
	v->a[120905] = 7;
	v->a[120906] = sym_arithmetic_expansion;
	v->a[120907] = sym_brace_expression;
	v->a[120908] = sym_string;
	v->a[120909] = sym_number;
	v->a[120910] = sym_simple_expansion;
	v->a[120911] = sym_expansion;
	v->a[120912] = sym_command_substitution;
	v->a[120913] = 16;
	v->a[120914] = actions(3);
	v->a[120915] = 1;
	v->a[120916] = sym_comment;
	v->a[120917] = actions(5407);
	v->a[120918] = 1;
	v->a[120919] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_6046(v);
}

void	small_parse_table_6046(t_small_parse_table_array *v)
{
	v->a[120920] = actions(5413);
	v->a[120921] = 1;
	v->a[120922] = anon_sym_DQUOTE;
	v->a[120923] = actions(5417);
	v->a[120924] = 1;
	v->a[120925] = aux_sym_number_token1;
	v->a[120926] = actions(5419);
	v->a[120927] = 1;
	v->a[120928] = aux_sym_number_token2;
	v->a[120929] = actions(5421);
	v->a[120930] = 1;
	v->a[120931] = anon_sym_DOLLAR_LBRACE;
	v->a[120932] = actions(5423);
	v->a[120933] = 1;
	v->a[120934] = anon_sym_DOLLAR_LPAREN;
	v->a[120935] = actions(5425);
	v->a[120936] = 1;
	v->a[120937] = anon_sym_BQUOTE;
	v->a[120938] = actions(5427);
	v->a[120939] = 1;
	small_parse_table_6047(v);
}

void	small_parse_table_6047(t_small_parse_table_array *v)
{
	v->a[120940] = anon_sym_DOLLAR_BQUOTE;
	v->a[120941] = actions(5433);
	v->a[120942] = 1;
	v->a[120943] = sym__brace_start;
	v->a[120944] = actions(6625);
	v->a[120945] = 1;
	v->a[120946] = sym_word;
	v->a[120947] = actions(6627);
	v->a[120948] = 1;
	v->a[120949] = sym__special_character;
	v->a[120950] = actions(6631);
	v->a[120951] = 1;
	v->a[120952] = sym__comment_word;
	v->a[120953] = actions(7027);
	v->a[120954] = 1;
	v->a[120955] = anon_sym_DOLLAR;
	v->a[120956] = actions(6629);
	v->a[120957] = 3;
	v->a[120958] = sym_test_operator;
	v->a[120959] = sym__bare_dollar;
	small_parse_table_6048(v);
}

void	small_parse_table_6048(t_small_parse_table_array *v)
{
	v->a[120960] = sym_raw_string;
	v->a[120961] = state(1903);
	v->a[120962] = 7;
	v->a[120963] = sym_arithmetic_expansion;
	v->a[120964] = sym_brace_expression;
	v->a[120965] = sym_string;
	v->a[120966] = sym_number;
	v->a[120967] = sym_simple_expansion;
	v->a[120968] = sym_expansion;
	v->a[120969] = sym_command_substitution;
	v->a[120970] = 7;
	v->a[120971] = actions(3);
	v->a[120972] = 1;
	v->a[120973] = sym_comment;
	v->a[120974] = actions(5615);
	v->a[120975] = 1;
	v->a[120976] = aux_sym_heredoc_redirect_token1;
	v->a[120977] = actions(6041);
	v->a[120978] = 1;
	v->a[120979] = sym_file_descriptor;
	small_parse_table_6049(v);
}

void	small_parse_table_6049(t_small_parse_table_array *v)
{
	v->a[120980] = state(2305);
	v->a[120981] = 1;
	v->a[120982] = sym_file_redirect;
	v->a[120983] = actions(5401);
	v->a[120984] = 2;
	v->a[120985] = anon_sym_LT_AMP_DASH;
	v->a[120986] = anon_sym_GT_AMP_DASH;
	v->a[120987] = actions(5399);
	v->a[120988] = 8;
	v->a[120989] = anon_sym_LT;
	v->a[120990] = anon_sym_GT;
	v->a[120991] = anon_sym_GT_GT;
	v->a[120992] = anon_sym_AMP_GT;
	v->a[120993] = anon_sym_AMP_GT_GT;
	v->a[120994] = anon_sym_LT_AMP;
	v->a[120995] = anon_sym_GT_AMP;
	v->a[120996] = anon_sym_GT_PIPE;
	v->a[120997] = actions(5613);
	v->a[120998] = 10;
	v->a[120999] = anon_sym_PIPE;
	small_parse_table_6050(v);
}

/* EOF small_parse_table_1209.c */
