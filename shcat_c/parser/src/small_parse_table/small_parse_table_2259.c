/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2259.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11295(t_small_parse_table_array *v)
{
	v->a[225900] = sym__brace_start;
	v->a[225901] = actions(10448);
	v->a[225902] = 1;
	v->a[225903] = sym_word;
	v->a[225904] = actions(10456);
	v->a[225905] = 1;
	v->a[225906] = sym__comment_word;
	v->a[225907] = actions(45);
	v->a[225908] = 2;
	v->a[225909] = anon_sym_LPAREN_LPAREN;
	v->a[225910] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225911] = actions(69);
	v->a[225912] = 2;
	v->a[225913] = anon_sym_LT_LPAREN;
	v->a[225914] = anon_sym_GT_LPAREN;
	v->a[225915] = actions(10452);
	v->a[225916] = 2;
	v->a[225917] = sym_test_operator;
	v->a[225918] = sym__special_character;
	v->a[225919] = actions(10454);
	small_parse_table_11296(v);
}

void	small_parse_table_11296(t_small_parse_table_array *v)
{
	v->a[225920] = 3;
	v->a[225921] = sym__bare_dollar;
	v->a[225922] = sym_raw_string;
	v->a[225923] = sym_ansi_c_string;
	v->a[225924] = state(1083);
	v->a[225925] = 9;
	v->a[225926] = sym_arithmetic_expansion;
	v->a[225927] = sym_brace_expression;
	v->a[225928] = sym_string;
	v->a[225929] = sym_translated_string;
	v->a[225930] = sym_number;
	v->a[225931] = sym_simple_expansion;
	v->a[225932] = sym_expansion;
	v->a[225933] = sym_command_substitution;
	v->a[225934] = sym_process_substitution;
	v->a[225935] = 18;
	v->a[225936] = actions(3);
	v->a[225937] = 1;
	v->a[225938] = sym_comment;
	v->a[225939] = actions(1141);
	small_parse_table_11297(v);
}

void	small_parse_table_11297(t_small_parse_table_array *v)
{
	v->a[225940] = 1;
	v->a[225941] = anon_sym_DOLLAR_LBRACK;
	v->a[225942] = actions(1145);
	v->a[225943] = 1;
	v->a[225944] = anon_sym_DOLLAR;
	v->a[225945] = actions(1149);
	v->a[225946] = 1;
	v->a[225947] = anon_sym_DQUOTE;
	v->a[225948] = actions(1153);
	v->a[225949] = 1;
	v->a[225950] = aux_sym_number_token1;
	v->a[225951] = actions(1155);
	v->a[225952] = 1;
	v->a[225953] = aux_sym_number_token2;
	v->a[225954] = actions(1157);
	v->a[225955] = 1;
	v->a[225956] = anon_sym_DOLLAR_LBRACE;
	v->a[225957] = actions(1159);
	v->a[225958] = 1;
	v->a[225959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11298(v);
}

void	small_parse_table_11298(t_small_parse_table_array *v)
{
	v->a[225960] = actions(1163);
	v->a[225961] = 1;
	v->a[225962] = anon_sym_DOLLAR_BQUOTE;
	v->a[225963] = actions(1169);
	v->a[225964] = 1;
	v->a[225965] = sym__brace_start;
	v->a[225966] = actions(3060);
	v->a[225967] = 1;
	v->a[225968] = anon_sym_BQUOTE;
	v->a[225969] = actions(10188);
	v->a[225970] = 1;
	v->a[225971] = sym_word;
	v->a[225972] = actions(10196);
	v->a[225973] = 1;
	v->a[225974] = sym__comment_word;
	v->a[225975] = actions(1129);
	v->a[225976] = 2;
	v->a[225977] = anon_sym_LPAREN_LPAREN;
	v->a[225978] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225979] = actions(1165);
	small_parse_table_11299(v);
}

void	small_parse_table_11299(t_small_parse_table_array *v)
{
	v->a[225980] = 2;
	v->a[225981] = anon_sym_LT_LPAREN;
	v->a[225982] = anon_sym_GT_LPAREN;
	v->a[225983] = actions(10192);
	v->a[225984] = 2;
	v->a[225985] = sym_test_operator;
	v->a[225986] = sym__special_character;
	v->a[225987] = actions(10194);
	v->a[225988] = 3;
	v->a[225989] = sym__bare_dollar;
	v->a[225990] = sym_raw_string;
	v->a[225991] = sym_ansi_c_string;
	v->a[225992] = state(2392);
	v->a[225993] = 9;
	v->a[225994] = sym_arithmetic_expansion;
	v->a[225995] = sym_brace_expression;
	v->a[225996] = sym_string;
	v->a[225997] = sym_translated_string;
	v->a[225998] = sym_number;
	v->a[225999] = sym_simple_expansion;
	small_parse_table_11300(v);
}

/* EOF small_parse_table_2259.c */
