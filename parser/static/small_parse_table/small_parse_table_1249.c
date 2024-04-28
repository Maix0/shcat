/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1249.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6245(t_small_parse_table_array *v)
{
	v->a[124900] = sym_command_substitution;
	v->a[124901] = sym_process_substitution;
	v->a[124902] = 26;
	v->a[124903] = actions(3);
	v->a[124904] = 1;
	v->a[124905] = sym_comment;
	v->a[124906] = actions(6480);
	v->a[124907] = 1;
	v->a[124908] = anon_sym_LPAREN;
	v->a[124909] = actions(6486);
	v->a[124910] = 1;
	v->a[124911] = anon_sym_DOLLAR_LBRACK;
	v->a[124912] = actions(6488);
	v->a[124913] = 1;
	v->a[124914] = anon_sym_DOLLAR;
	v->a[124915] = actions(6490);
	v->a[124916] = 1;
	v->a[124917] = sym__special_character;
	v->a[124918] = actions(6492);
	v->a[124919] = 1;
	small_parse_table_6246(v);
}

void	small_parse_table_6246(t_small_parse_table_array *v)
{
	v->a[124920] = anon_sym_DQUOTE;
	v->a[124921] = actions(6494);
	v->a[124922] = 1;
	v->a[124923] = aux_sym_number_token1;
	v->a[124924] = actions(6496);
	v->a[124925] = 1;
	v->a[124926] = aux_sym_number_token2;
	v->a[124927] = actions(6498);
	v->a[124928] = 1;
	v->a[124929] = anon_sym_DOLLAR_LBRACE;
	v->a[124930] = actions(6500);
	v->a[124931] = 1;
	v->a[124932] = anon_sym_DOLLAR_LPAREN;
	v->a[124933] = actions(6502);
	v->a[124934] = 1;
	v->a[124935] = anon_sym_BQUOTE;
	v->a[124936] = actions(6504);
	v->a[124937] = 1;
	v->a[124938] = anon_sym_DOLLAR_BQUOTE;
	v->a[124939] = actions(6508);
	small_parse_table_6247(v);
}

void	small_parse_table_6247(t_small_parse_table_array *v)
{
	v->a[124940] = 1;
	v->a[124941] = sym_test_operator;
	v->a[124942] = actions(6510);
	v->a[124943] = 1;
	v->a[124944] = sym_extglob_pattern;
	v->a[124945] = actions(6512);
	v->a[124946] = 1;
	v->a[124947] = sym__brace_start;
	v->a[124948] = actions(6586);
	v->a[124949] = 1;
	v->a[124950] = anon_sym_esac;
	v->a[124951] = actions(6588);
	v->a[124952] = 1;
	v->a[124953] = aux_sym_heredoc_redirect_token1;
	v->a[124954] = state(6426);
	v->a[124955] = 1;
	v->a[124956] = aux_sym__literal_repeat1;
	v->a[124957] = state(6991);
	v->a[124958] = 1;
	v->a[124959] = sym_last_case_item;
	small_parse_table_6248(v);
}

void	small_parse_table_6248(t_small_parse_table_array *v)
{
	v->a[124960] = actions(6476);
	v->a[124961] = 2;
	v->a[124962] = anon_sym_LPAREN_LPAREN;
	v->a[124963] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124964] = actions(6506);
	v->a[124965] = 2;
	v->a[124966] = anon_sym_LT_LPAREN;
	v->a[124967] = anon_sym_GT_LPAREN;
	v->a[124968] = state(3382);
	v->a[124969] = 2;
	v->a[124970] = sym_case_item;
	v->a[124971] = aux_sym_case_statement_repeat1;
	v->a[124972] = state(6695);
	v->a[124973] = 2;
	v->a[124974] = sym_concatenation;
	v->a[124975] = sym__extglob_blob;
	v->a[124976] = actions(6474);
	v->a[124977] = 3;
	v->a[124978] = sym_raw_string;
	v->a[124979] = sym_ansi_c_string;
	small_parse_table_6249(v);
}

void	small_parse_table_6249(t_small_parse_table_array *v)
{
	v->a[124980] = sym_word;
	v->a[124981] = actions(6584);
	v->a[124982] = 3;
	v->a[124983] = anon_sym_SEMI;
	v->a[124984] = anon_sym_AMP;
	v->a[124985] = anon_sym_SEMI_SEMI;
	v->a[124986] = state(6303);
	v->a[124987] = 9;
	v->a[124988] = sym_arithmetic_expansion;
	v->a[124989] = sym_brace_expression;
	v->a[124990] = sym_string;
	v->a[124991] = sym_translated_string;
	v->a[124992] = sym_number;
	v->a[124993] = sym_simple_expansion;
	v->a[124994] = sym_expansion;
	v->a[124995] = sym_command_substitution;
	v->a[124996] = sym_process_substitution;
	v->a[124997] = 3;
	v->a[124998] = actions(71);
	v->a[124999] = 1;
	small_parse_table_6250(v);
}

/* EOF small_parse_table_1249.c */
