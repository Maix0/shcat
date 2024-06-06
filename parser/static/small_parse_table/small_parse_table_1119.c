/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1119.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5595(t_small_parse_table_array *v)
{
	v->a[111900] = 1;
	v->a[111901] = sym__special_character;
	v->a[111902] = actions(6420);
	v->a[111903] = 1;
	v->a[111904] = sym__comment_word;
	v->a[111905] = actions(6418);
	v->a[111906] = 3;
	v->a[111907] = sym_test_operator;
	v->a[111908] = sym__bare_dollar;
	v->a[111909] = sym_raw_string;
	v->a[111910] = state(1907);
	v->a[111911] = 7;
	v->a[111912] = sym_arithmetic_expansion;
	v->a[111913] = sym_brace_expression;
	v->a[111914] = sym_string;
	v->a[111915] = sym_number;
	v->a[111916] = sym_simple_expansion;
	v->a[111917] = sym_expansion;
	v->a[111918] = sym_command_substitution;
	v->a[111919] = 3;
	small_parse_table_5596(v);
}

void	small_parse_table_5596(t_small_parse_table_array *v)
{
	v->a[111920] = actions(3);
	v->a[111921] = 1;
	v->a[111922] = sym_comment;
	v->a[111923] = actions(6227);
	v->a[111924] = 2;
	v->a[111925] = sym_file_descriptor;
	v->a[111926] = aux_sym_heredoc_redirect_token1;
	v->a[111927] = actions(6225);
	v->a[111928] = 21;
	v->a[111929] = anon_sym_PIPE;
	v->a[111930] = anon_sym_SEMI_SEMI;
	v->a[111931] = anon_sym_SEMI_AMP;
	v->a[111932] = anon_sym_SEMI_SEMI_AMP;
	v->a[111933] = anon_sym_PIPE_AMP;
	v->a[111934] = anon_sym_AMP_AMP;
	v->a[111935] = anon_sym_PIPE_PIPE;
	v->a[111936] = anon_sym_LT;
	v->a[111937] = anon_sym_GT;
	v->a[111938] = anon_sym_GT_GT;
	v->a[111939] = anon_sym_AMP_GT;
	small_parse_table_5597(v);
}

void	small_parse_table_5597(t_small_parse_table_array *v)
{
	v->a[111940] = anon_sym_AMP_GT_GT;
	v->a[111941] = anon_sym_LT_AMP;
	v->a[111942] = anon_sym_GT_AMP;
	v->a[111943] = anon_sym_GT_PIPE;
	v->a[111944] = anon_sym_LT_AMP_DASH;
	v->a[111945] = anon_sym_GT_AMP_DASH;
	v->a[111946] = anon_sym_LT_LT;
	v->a[111947] = anon_sym_LT_LT_DASH;
	v->a[111948] = anon_sym_AMP;
	v->a[111949] = anon_sym_SEMI;
	v->a[111950] = 3;
	v->a[111951] = actions(3);
	v->a[111952] = 1;
	v->a[111953] = sym_comment;
	v->a[111954] = actions(6227);
	v->a[111955] = 2;
	v->a[111956] = sym_file_descriptor;
	v->a[111957] = aux_sym_heredoc_redirect_token1;
	v->a[111958] = actions(6225);
	v->a[111959] = 21;
	small_parse_table_5598(v);
}

void	small_parse_table_5598(t_small_parse_table_array *v)
{
	v->a[111960] = anon_sym_PIPE;
	v->a[111961] = anon_sym_SEMI_SEMI;
	v->a[111962] = anon_sym_SEMI_AMP;
	v->a[111963] = anon_sym_SEMI_SEMI_AMP;
	v->a[111964] = anon_sym_PIPE_AMP;
	v->a[111965] = anon_sym_AMP_AMP;
	v->a[111966] = anon_sym_PIPE_PIPE;
	v->a[111967] = anon_sym_LT;
	v->a[111968] = anon_sym_GT;
	v->a[111969] = anon_sym_GT_GT;
	v->a[111970] = anon_sym_AMP_GT;
	v->a[111971] = anon_sym_AMP_GT_GT;
	v->a[111972] = anon_sym_LT_AMP;
	v->a[111973] = anon_sym_GT_AMP;
	v->a[111974] = anon_sym_GT_PIPE;
	v->a[111975] = anon_sym_LT_AMP_DASH;
	v->a[111976] = anon_sym_GT_AMP_DASH;
	v->a[111977] = anon_sym_LT_LT;
	v->a[111978] = anon_sym_LT_LT_DASH;
	v->a[111979] = anon_sym_AMP;
	small_parse_table_5599(v);
}

void	small_parse_table_5599(t_small_parse_table_array *v)
{
	v->a[111980] = anon_sym_SEMI;
	v->a[111981] = 16;
	v->a[111982] = actions(3);
	v->a[111983] = 1;
	v->a[111984] = sym_comment;
	v->a[111985] = actions(5722);
	v->a[111986] = 1;
	v->a[111987] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[111988] = actions(5728);
	v->a[111989] = 1;
	v->a[111990] = anon_sym_DQUOTE;
	v->a[111991] = actions(5732);
	v->a[111992] = 1;
	v->a[111993] = aux_sym_number_token1;
	v->a[111994] = actions(5734);
	v->a[111995] = 1;
	v->a[111996] = aux_sym_number_token2;
	v->a[111997] = actions(5736);
	v->a[111998] = 1;
	v->a[111999] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5600(v);
}

/* EOF small_parse_table_1119.c */
