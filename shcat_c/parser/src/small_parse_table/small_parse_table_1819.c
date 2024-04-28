/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1819.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9095(t_small_parse_table_array *v)
{
	v->a[181900] = actions(6510);
	v->a[181901] = 1;
	v->a[181902] = sym_extglob_pattern;
	v->a[181903] = actions(6512);
	v->a[181904] = 1;
	v->a[181905] = sym__brace_start;
	v->a[181906] = actions(7226);
	v->a[181907] = 1;
	v->a[181908] = anon_sym_DOLLAR_LBRACK;
	v->a[181909] = actions(7228);
	v->a[181910] = 1;
	v->a[181911] = sym__special_character;
	v->a[181912] = actions(7230);
	v->a[181913] = 1;
	v->a[181914] = anon_sym_DQUOTE;
	v->a[181915] = actions(7234);
	v->a[181916] = 1;
	v->a[181917] = anon_sym_DOLLAR_LBRACE;
	v->a[181918] = actions(7236);
	v->a[181919] = 1;
	small_parse_table_9096(v);
}

void	small_parse_table_9096(t_small_parse_table_array *v)
{
	v->a[181920] = anon_sym_BQUOTE;
	v->a[181921] = actions(7238);
	v->a[181922] = 1;
	v->a[181923] = anon_sym_DOLLAR_BQUOTE;
	v->a[181924] = state(6426);
	v->a[181925] = 1;
	v->a[181926] = aux_sym__literal_repeat1;
	v->a[181927] = state(6942);
	v->a[181928] = 1;
	v->a[181929] = sym_last_case_item;
	v->a[181930] = actions(7224);
	v->a[181931] = 2;
	v->a[181932] = anon_sym_LPAREN_LPAREN;
	v->a[181933] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[181934] = actions(7232);
	v->a[181935] = 2;
	v->a[181936] = sym_raw_string;
	v->a[181937] = sym_ansi_c_string;
	v->a[181938] = actions(7240);
	v->a[181939] = 2;
	small_parse_table_9097(v);
}

void	small_parse_table_9097(t_small_parse_table_array *v)
{
	v->a[181940] = anon_sym_LT_LPAREN;
	v->a[181941] = anon_sym_GT_LPAREN;
	v->a[181942] = state(3477);
	v->a[181943] = 2;
	v->a[181944] = sym_case_item;
	v->a[181945] = aux_sym_case_statement_repeat1;
	v->a[181946] = state(6695);
	v->a[181947] = 2;
	v->a[181948] = sym_concatenation;
	v->a[181949] = sym__extglob_blob;
	v->a[181950] = state(6303);
	v->a[181951] = 9;
	v->a[181952] = sym_arithmetic_expansion;
	v->a[181953] = sym_brace_expression;
	v->a[181954] = sym_string;
	v->a[181955] = sym_translated_string;
	v->a[181956] = sym_number;
	v->a[181957] = sym_simple_expansion;
	v->a[181958] = sym_expansion;
	v->a[181959] = sym_command_substitution;
	small_parse_table_9098(v);
}

void	small_parse_table_9098(t_small_parse_table_array *v)
{
	v->a[181960] = sym_process_substitution;
	v->a[181961] = 16;
	v->a[181962] = actions(71);
	v->a[181963] = 1;
	v->a[181964] = sym_comment;
	v->a[181965] = actions(7102);
	v->a[181966] = 1;
	v->a[181967] = anon_sym_EQ;
	v->a[181968] = actions(7573);
	v->a[181969] = 1;
	v->a[181970] = anon_sym_PIPE_PIPE;
	v->a[181971] = actions(7575);
	v->a[181972] = 1;
	v->a[181973] = anon_sym_AMP_AMP;
	v->a[181974] = actions(7577);
	v->a[181975] = 1;
	v->a[181976] = anon_sym_PIPE;
	v->a[181977] = actions(7579);
	v->a[181978] = 1;
	v->a[181979] = anon_sym_CARET;
	small_parse_table_9099(v);
}

void	small_parse_table_9099(t_small_parse_table_array *v)
{
	v->a[181980] = actions(7581);
	v->a[181981] = 1;
	v->a[181982] = anon_sym_AMP;
	v->a[181983] = actions(7595);
	v->a[181984] = 1;
	v->a[181985] = anon_sym_STAR_STAR;
	v->a[181986] = actions(7569);
	v->a[181987] = 2;
	v->a[181988] = anon_sym_PLUS_PLUS;
	v->a[181989] = anon_sym_DASH_DASH;
	v->a[181990] = actions(7583);
	v->a[181991] = 2;
	v->a[181992] = anon_sym_EQ_EQ;
	v->a[181993] = anon_sym_BANG_EQ;
	v->a[181994] = actions(7585);
	v->a[181995] = 2;
	v->a[181996] = anon_sym_LT;
	v->a[181997] = anon_sym_GT;
	v->a[181998] = actions(7587);
	v->a[181999] = 2;
	small_parse_table_9100(v);
}

/* EOF small_parse_table_1819.c */
