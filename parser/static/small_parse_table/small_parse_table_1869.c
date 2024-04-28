/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1869.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9345(t_small_parse_table_array *v)
{
	v->a[186900] = 1;
	v->a[186901] = anon_sym_DOLLAR_BQUOTE;
	v->a[186902] = actions(3755);
	v->a[186903] = 1;
	v->a[186904] = sym__brace_start;
	v->a[186905] = actions(7763);
	v->a[186906] = 1;
	v->a[186907] = aux_sym_heredoc_redirect_token1;
	v->a[186908] = actions(7765);
	v->a[186909] = 1;
	v->a[186910] = sym__special_character;
	v->a[186911] = actions(7767);
	v->a[186912] = 1;
	v->a[186913] = sym_test_operator;
	v->a[186914] = state(4975);
	v->a[186915] = 1;
	v->a[186916] = aux_sym__literal_repeat1;
	v->a[186917] = actions(3715);
	v->a[186918] = 2;
	v->a[186919] = anon_sym_LPAREN_LPAREN;
	small_parse_table_9346(v);
}

void	small_parse_table_9346(t_small_parse_table_array *v)
{
	v->a[186920] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[186921] = actions(3749);
	v->a[186922] = 2;
	v->a[186923] = anon_sym_LT_LPAREN;
	v->a[186924] = anon_sym_GT_LPAREN;
	v->a[186925] = state(3478);
	v->a[186926] = 2;
	v->a[186927] = sym_concatenation;
	v->a[186928] = aux_sym_for_statement_repeat1;
	v->a[186929] = actions(7759);
	v->a[186930] = 3;
	v->a[186931] = sym_raw_string;
	v->a[186932] = sym_ansi_c_string;
	v->a[186933] = sym_word;
	v->a[186934] = actions(7761);
	v->a[186935] = 3;
	v->a[186936] = anon_sym_SEMI;
	v->a[186937] = anon_sym_AMP;
	v->a[186938] = anon_sym_SEMI_SEMI;
	v->a[186939] = state(4460);
	small_parse_table_9347(v);
}

void	small_parse_table_9347(t_small_parse_table_array *v)
{
	v->a[186940] = 9;
	v->a[186941] = sym_arithmetic_expansion;
	v->a[186942] = sym_brace_expression;
	v->a[186943] = sym_string;
	v->a[186944] = sym_translated_string;
	v->a[186945] = sym_number;
	v->a[186946] = sym_simple_expansion;
	v->a[186947] = sym_expansion;
	v->a[186948] = sym_command_substitution;
	v->a[186949] = sym_process_substitution;
	v->a[186950] = 6;
	v->a[186951] = actions(71);
	v->a[186952] = 1;
	v->a[186953] = sym_comment;
	v->a[186954] = actions(7751);
	v->a[186955] = 1;
	v->a[186956] = aux_sym_concatenation_token1;
	v->a[186957] = actions(7769);
	v->a[186958] = 1;
	v->a[186959] = sym__concat;
	small_parse_table_9348(v);
}

void	small_parse_table_9348(t_small_parse_table_array *v)
{
	v->a[186960] = state(3468);
	v->a[186961] = 1;
	v->a[186962] = aux_sym_concatenation_repeat1;
	v->a[186963] = actions(1265);
	v->a[186964] = 11;
	v->a[186965] = anon_sym_LT;
	v->a[186966] = anon_sym_GT;
	v->a[186967] = anon_sym_AMP_GT;
	v->a[186968] = anon_sym_LT_AMP;
	v->a[186969] = anon_sym_GT_AMP;
	v->a[186970] = anon_sym_DOLLAR;
	v->a[186971] = aux_sym_number_token1;
	v->a[186972] = aux_sym_number_token2;
	v->a[186973] = anon_sym_DOLLAR_LPAREN;
	v->a[186974] = anon_sym_BQUOTE;
	v->a[186975] = sym_word;
	v->a[186976] = actions(1267);
	v->a[186977] = 21;
	v->a[186978] = sym_file_descriptor;
	v->a[186979] = sym_variable_name;
	small_parse_table_9349(v);
}

void	small_parse_table_9349(t_small_parse_table_array *v)
{
	v->a[186980] = sym_test_operator;
	v->a[186981] = sym__brace_start;
	v->a[186982] = anon_sym_LPAREN_LPAREN;
	v->a[186983] = anon_sym_GT_GT;
	v->a[186984] = anon_sym_AMP_GT_GT;
	v->a[186985] = anon_sym_GT_PIPE;
	v->a[186986] = anon_sym_LT_AMP_DASH;
	v->a[186987] = anon_sym_GT_AMP_DASH;
	v->a[186988] = anon_sym_LT_LT_LT;
	v->a[186989] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[186990] = anon_sym_DOLLAR_LBRACK;
	v->a[186991] = sym__special_character;
	v->a[186992] = anon_sym_DQUOTE;
	v->a[186993] = sym_raw_string;
	v->a[186994] = sym_ansi_c_string;
	v->a[186995] = anon_sym_DOLLAR_LBRACE;
	v->a[186996] = anon_sym_DOLLAR_BQUOTE;
	v->a[186997] = anon_sym_LT_LPAREN;
	v->a[186998] = anon_sym_GT_LPAREN;
	v->a[186999] = 21;
	small_parse_table_9350(v);
}

/* EOF small_parse_table_1869.c */
