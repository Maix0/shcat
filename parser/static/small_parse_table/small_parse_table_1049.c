/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1049.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5245(t_small_parse_table_array *v)
{
	v->a[104900] = sym_comment;
	v->a[104901] = actions(6034);
	v->a[104902] = 1;
	v->a[104903] = sym_file_descriptor;
	v->a[104904] = actions(5281);
	v->a[104905] = 2;
	v->a[104906] = ts_builtin_sym_end;
	v->a[104907] = aux_sym_heredoc_redirect_token1;
	v->a[104908] = actions(6031);
	v->a[104909] = 2;
	v->a[104910] = anon_sym_LT_AMP_DASH;
	v->a[104911] = anon_sym_GT_AMP_DASH;
	v->a[104912] = state(2189);
	v->a[104913] = 2;
	v->a[104914] = sym_file_redirect;
	v->a[104915] = aux_sym_redirected_statement_repeat2;
	v->a[104916] = actions(6028);
	v->a[104917] = 8;
	v->a[104918] = anon_sym_LT;
	v->a[104919] = anon_sym_GT;
	small_parse_table_5246(v);
}

void	small_parse_table_5246(t_small_parse_table_array *v)
{
	v->a[104920] = anon_sym_GT_GT;
	v->a[104921] = anon_sym_AMP_GT;
	v->a[104922] = anon_sym_AMP_GT_GT;
	v->a[104923] = anon_sym_LT_AMP;
	v->a[104924] = anon_sym_GT_AMP;
	v->a[104925] = anon_sym_GT_PIPE;
	v->a[104926] = actions(5273);
	v->a[104927] = 9;
	v->a[104928] = anon_sym_PIPE;
	v->a[104929] = anon_sym_SEMI_SEMI;
	v->a[104930] = anon_sym_PIPE_AMP;
	v->a[104931] = anon_sym_AMP_AMP;
	v->a[104932] = anon_sym_PIPE_PIPE;
	v->a[104933] = anon_sym_LT_LT;
	v->a[104934] = anon_sym_LT_LT_DASH;
	v->a[104935] = anon_sym_AMP;
	v->a[104936] = anon_sym_SEMI;
	v->a[104937] = 17;
	v->a[104938] = actions(57);
	v->a[104939] = 1;
	small_parse_table_5247(v);
}

void	small_parse_table_5247(t_small_parse_table_array *v)
{
	v->a[104940] = sym_comment;
	v->a[104941] = actions(5483);
	v->a[104942] = 1;
	v->a[104943] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104944] = actions(5485);
	v->a[104945] = 1;
	v->a[104946] = anon_sym_DOLLAR;
	v->a[104947] = actions(5487);
	v->a[104948] = 1;
	v->a[104949] = sym__special_character;
	v->a[104950] = actions(5489);
	v->a[104951] = 1;
	v->a[104952] = anon_sym_DQUOTE;
	v->a[104953] = actions(5493);
	v->a[104954] = 1;
	v->a[104955] = aux_sym_number_token1;
	v->a[104956] = actions(5495);
	v->a[104957] = 1;
	v->a[104958] = aux_sym_number_token2;
	v->a[104959] = actions(5497);
	small_parse_table_5248(v);
}

void	small_parse_table_5248(t_small_parse_table_array *v)
{
	v->a[104960] = 1;
	v->a[104961] = anon_sym_DOLLAR_LBRACE;
	v->a[104962] = actions(5499);
	v->a[104963] = 1;
	v->a[104964] = anon_sym_DOLLAR_LPAREN;
	v->a[104965] = actions(5501);
	v->a[104966] = 1;
	v->a[104967] = anon_sym_BQUOTE;
	v->a[104968] = actions(5503);
	v->a[104969] = 1;
	v->a[104970] = anon_sym_DOLLAR_BQUOTE;
	v->a[104971] = actions(5509);
	v->a[104972] = 1;
	v->a[104973] = sym__brace_start;
	v->a[104974] = actions(6037);
	v->a[104975] = 1;
	v->a[104976] = sym_word;
	v->a[104977] = state(1920);
	v->a[104978] = 1;
	v->a[104979] = aux_sym__literal_repeat1;
	small_parse_table_5249(v);
}

void	small_parse_table_5249(t_small_parse_table_array *v)
{
	v->a[104980] = actions(6039);
	v->a[104981] = 2;
	v->a[104982] = sym_test_operator;
	v->a[104983] = sym_raw_string;
	v->a[104984] = state(1358);
	v->a[104985] = 2;
	v->a[104986] = sym_concatenation;
	v->a[104987] = aux_sym_for_statement_repeat1;
	v->a[104988] = state(1800);
	v->a[104989] = 7;
	v->a[104990] = sym_arithmetic_expansion;
	v->a[104991] = sym_brace_expression;
	v->a[104992] = sym_string;
	v->a[104993] = sym_number;
	v->a[104994] = sym_simple_expansion;
	v->a[104995] = sym_expansion;
	v->a[104996] = sym_command_substitution;
	v->a[104997] = 7;
	v->a[104998] = actions(3);
	v->a[104999] = 1;
	small_parse_table_5250(v);
}

/* EOF small_parse_table_1049.c */
