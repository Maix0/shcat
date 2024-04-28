/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1579.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7895(t_small_parse_table_array *v)
{
	v->a[157900] = 1;
	v->a[157901] = sym__special_character;
	v->a[157902] = actions(7230);
	v->a[157903] = 1;
	v->a[157904] = anon_sym_DQUOTE;
	v->a[157905] = actions(7234);
	v->a[157906] = 1;
	v->a[157907] = anon_sym_DOLLAR_LBRACE;
	v->a[157908] = actions(7236);
	v->a[157909] = 1;
	v->a[157910] = anon_sym_BQUOTE;
	v->a[157911] = actions(7238);
	v->a[157912] = 1;
	v->a[157913] = anon_sym_DOLLAR_BQUOTE;
	v->a[157914] = state(6426);
	v->a[157915] = 1;
	v->a[157916] = aux_sym__literal_repeat1;
	v->a[157917] = state(7005);
	v->a[157918] = 1;
	v->a[157919] = sym_last_case_item;
	small_parse_table_7896(v);
}

void	small_parse_table_7896(t_small_parse_table_array *v)
{
	v->a[157920] = actions(7224);
	v->a[157921] = 2;
	v->a[157922] = anon_sym_LPAREN_LPAREN;
	v->a[157923] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[157924] = actions(7232);
	v->a[157925] = 2;
	v->a[157926] = sym_raw_string;
	v->a[157927] = sym_ansi_c_string;
	v->a[157928] = actions(7240);
	v->a[157929] = 2;
	v->a[157930] = anon_sym_LT_LPAREN;
	v->a[157931] = anon_sym_GT_LPAREN;
	v->a[157932] = state(3385);
	v->a[157933] = 2;
	v->a[157934] = sym_case_item;
	v->a[157935] = aux_sym_case_statement_repeat1;
	v->a[157936] = state(6695);
	v->a[157937] = 2;
	v->a[157938] = sym_concatenation;
	v->a[157939] = sym__extglob_blob;
	small_parse_table_7897(v);
}

void	small_parse_table_7897(t_small_parse_table_array *v)
{
	v->a[157940] = state(6303);
	v->a[157941] = 9;
	v->a[157942] = sym_arithmetic_expansion;
	v->a[157943] = sym_brace_expression;
	v->a[157944] = sym_string;
	v->a[157945] = sym_translated_string;
	v->a[157946] = sym_number;
	v->a[157947] = sym_simple_expansion;
	v->a[157948] = sym_expansion;
	v->a[157949] = sym_command_substitution;
	v->a[157950] = sym_process_substitution;
	v->a[157951] = 4;
	v->a[157952] = actions(71);
	v->a[157953] = 1;
	v->a[157954] = sym_comment;
	v->a[157955] = actions(7306);
	v->a[157956] = 1;
	v->a[157957] = sym__concat;
	v->a[157958] = actions(6844);
	v->a[157959] = 14;
	small_parse_table_7898(v);
}

void	small_parse_table_7898(t_small_parse_table_array *v)
{
	v->a[157960] = anon_sym_EQ;
	v->a[157961] = anon_sym_PIPE;
	v->a[157962] = anon_sym_CARET;
	v->a[157963] = anon_sym_AMP;
	v->a[157964] = anon_sym_LT;
	v->a[157965] = anon_sym_GT;
	v->a[157966] = anon_sym_LT_LT;
	v->a[157967] = anon_sym_GT_GT;
	v->a[157968] = anon_sym_PLUS;
	v->a[157969] = anon_sym_DASH;
	v->a[157970] = anon_sym_STAR;
	v->a[157971] = anon_sym_SLASH;
	v->a[157972] = anon_sym_PERCENT;
	v->a[157973] = anon_sym_STAR_STAR;
	v->a[157974] = actions(6842);
	v->a[157975] = 22;
	v->a[157976] = anon_sym_PLUS_PLUS;
	v->a[157977] = anon_sym_DASH_DASH;
	v->a[157978] = anon_sym_PLUS_EQ;
	v->a[157979] = anon_sym_DASH_EQ;
	small_parse_table_7899(v);
}

void	small_parse_table_7899(t_small_parse_table_array *v)
{
	v->a[157980] = anon_sym_STAR_EQ;
	v->a[157981] = anon_sym_SLASH_EQ;
	v->a[157982] = anon_sym_PERCENT_EQ;
	v->a[157983] = anon_sym_STAR_STAR_EQ;
	v->a[157984] = anon_sym_LT_LT_EQ;
	v->a[157985] = anon_sym_GT_GT_EQ;
	v->a[157986] = anon_sym_AMP_EQ;
	v->a[157987] = anon_sym_CARET_EQ;
	v->a[157988] = anon_sym_PIPE_EQ;
	v->a[157989] = anon_sym_PIPE_PIPE;
	v->a[157990] = anon_sym_AMP_AMP;
	v->a[157991] = anon_sym_EQ_EQ;
	v->a[157992] = anon_sym_BANG_EQ;
	v->a[157993] = anon_sym_LT_EQ;
	v->a[157994] = anon_sym_GT_EQ;
	v->a[157995] = anon_sym_RBRACK;
	v->a[157996] = anon_sym_EQ_TILDE;
	v->a[157997] = anon_sym_QMARK;
	v->a[157998] = 4;
	v->a[157999] = actions(71);
	small_parse_table_7900(v);
}

/* EOF small_parse_table_1579.c */
