/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1859.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9295(t_small_parse_table_array *v)
{
	v->a[185900] = anon_sym_LPAREN;
	v->a[185901] = actions(6488);
	v->a[185902] = 1;
	v->a[185903] = anon_sym_DOLLAR;
	v->a[185904] = actions(6494);
	v->a[185905] = 1;
	v->a[185906] = aux_sym_number_token1;
	v->a[185907] = actions(6496);
	v->a[185908] = 1;
	v->a[185909] = aux_sym_number_token2;
	v->a[185910] = actions(6500);
	v->a[185911] = 1;
	v->a[185912] = anon_sym_DOLLAR_LPAREN;
	v->a[185913] = actions(6508);
	v->a[185914] = 1;
	v->a[185915] = sym_test_operator;
	v->a[185916] = actions(6510);
	v->a[185917] = 1;
	v->a[185918] = sym_extglob_pattern;
	v->a[185919] = actions(6512);
	small_parse_table_9296(v);
}

void	small_parse_table_9296(t_small_parse_table_array *v)
{
	v->a[185920] = 1;
	v->a[185921] = sym__brace_start;
	v->a[185922] = actions(7226);
	v->a[185923] = 1;
	v->a[185924] = anon_sym_DOLLAR_LBRACK;
	v->a[185925] = actions(7228);
	v->a[185926] = 1;
	v->a[185927] = sym__special_character;
	v->a[185928] = actions(7230);
	v->a[185929] = 1;
	v->a[185930] = anon_sym_DQUOTE;
	v->a[185931] = actions(7234);
	v->a[185932] = 1;
	v->a[185933] = anon_sym_DOLLAR_LBRACE;
	v->a[185934] = actions(7236);
	v->a[185935] = 1;
	v->a[185936] = anon_sym_BQUOTE;
	v->a[185937] = actions(7238);
	v->a[185938] = 1;
	v->a[185939] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9297(v);
}

void	small_parse_table_9297(t_small_parse_table_array *v)
{
	v->a[185940] = state(6426);
	v->a[185941] = 1;
	v->a[185942] = aux_sym__literal_repeat1;
	v->a[185943] = state(7315);
	v->a[185944] = 1;
	v->a[185945] = sym_last_case_item;
	v->a[185946] = actions(7224);
	v->a[185947] = 2;
	v->a[185948] = anon_sym_LPAREN_LPAREN;
	v->a[185949] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[185950] = actions(7232);
	v->a[185951] = 2;
	v->a[185952] = sym_raw_string;
	v->a[185953] = sym_ansi_c_string;
	v->a[185954] = actions(7240);
	v->a[185955] = 2;
	v->a[185956] = anon_sym_LT_LPAREN;
	v->a[185957] = anon_sym_GT_LPAREN;
	v->a[185958] = state(3477);
	v->a[185959] = 2;
	small_parse_table_9298(v);
}

void	small_parse_table_9298(t_small_parse_table_array *v)
{
	v->a[185960] = sym_case_item;
	v->a[185961] = aux_sym_case_statement_repeat1;
	v->a[185962] = state(6695);
	v->a[185963] = 2;
	v->a[185964] = sym_concatenation;
	v->a[185965] = sym__extglob_blob;
	v->a[185966] = state(6303);
	v->a[185967] = 9;
	v->a[185968] = sym_arithmetic_expansion;
	v->a[185969] = sym_brace_expression;
	v->a[185970] = sym_string;
	v->a[185971] = sym_translated_string;
	v->a[185972] = sym_number;
	v->a[185973] = sym_simple_expansion;
	v->a[185974] = sym_expansion;
	v->a[185975] = sym_command_substitution;
	v->a[185976] = sym_process_substitution;
	v->a[185977] = 16;
	v->a[185978] = actions(71);
	v->a[185979] = 1;
	small_parse_table_9299(v);
}

void	small_parse_table_9299(t_small_parse_table_array *v)
{
	v->a[185980] = sym_comment;
	v->a[185981] = actions(7719);
	v->a[185982] = 1;
	v->a[185983] = anon_sym_STAR_STAR;
	v->a[185984] = actions(7735);
	v->a[185985] = 1;
	v->a[185986] = anon_sym_AMP;
	v->a[185987] = actions(7739);
	v->a[185988] = 1;
	v->a[185989] = anon_sym_CARET;
	v->a[185990] = actions(7741);
	v->a[185991] = 1;
	v->a[185992] = anon_sym_PIPE;
	v->a[185993] = actions(7511);
	v->a[185994] = 2;
	v->a[185995] = anon_sym_COMMA;
	v->a[185996] = anon_sym_RPAREN;
	v->a[185997] = actions(7717);
	v->a[185998] = 2;
	v->a[185999] = anon_sym_PLUS_PLUS;
	small_parse_table_9300(v);
}

/* EOF small_parse_table_1859.c */
