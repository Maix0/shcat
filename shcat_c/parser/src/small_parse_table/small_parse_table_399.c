/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_399.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1995(t_small_parse_table_array *v)
{
	v->a[39900] = sym__brace_start;
	v->a[39901] = aux_sym_heredoc_redirect_token1;
	v->a[39902] = actions(4546);
	v->a[39903] = 41;
	v->a[39904] = anon_sym_LPAREN_LPAREN;
	v->a[39905] = anon_sym_SEMI;
	v->a[39906] = anon_sym_PIPE_PIPE;
	v->a[39907] = anon_sym_AMP_AMP;
	v->a[39908] = anon_sym_PIPE;
	v->a[39909] = anon_sym_AMP;
	v->a[39910] = anon_sym_EQ_EQ;
	v->a[39911] = anon_sym_LT;
	v->a[39912] = anon_sym_GT;
	v->a[39913] = anon_sym_LT_LT;
	v->a[39914] = anon_sym_GT_GT;
	v->a[39915] = anon_sym_SEMI_SEMI;
	v->a[39916] = anon_sym_SEMI_AMP;
	v->a[39917] = anon_sym_SEMI_SEMI_AMP;
	v->a[39918] = anon_sym_PIPE_AMP;
	v->a[39919] = anon_sym_EQ_TILDE;
	small_parse_table_1996(v);
}

void	small_parse_table_1996(t_small_parse_table_array *v)
{
	v->a[39920] = anon_sym_AMP_GT;
	v->a[39921] = anon_sym_AMP_GT_GT;
	v->a[39922] = anon_sym_LT_AMP;
	v->a[39923] = anon_sym_GT_AMP;
	v->a[39924] = anon_sym_GT_PIPE;
	v->a[39925] = anon_sym_LT_AMP_DASH;
	v->a[39926] = anon_sym_GT_AMP_DASH;
	v->a[39927] = anon_sym_LT_LT_DASH;
	v->a[39928] = anon_sym_LT_LT_LT;
	v->a[39929] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39930] = anon_sym_DOLLAR_LBRACK;
	v->a[39931] = anon_sym_DOLLAR;
	v->a[39932] = sym__special_character;
	v->a[39933] = anon_sym_DQUOTE;
	v->a[39934] = sym_raw_string;
	v->a[39935] = sym_ansi_c_string;
	v->a[39936] = aux_sym_number_token1;
	v->a[39937] = aux_sym_number_token2;
	v->a[39938] = anon_sym_DOLLAR_LBRACE;
	v->a[39939] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1997(v);
}

void	small_parse_table_1997(t_small_parse_table_array *v)
{
	v->a[39940] = anon_sym_BQUOTE;
	v->a[39941] = anon_sym_DOLLAR_BQUOTE;
	v->a[39942] = anon_sym_LT_LPAREN;
	v->a[39943] = anon_sym_GT_LPAREN;
	v->a[39944] = sym_word;
	v->a[39945] = 3;
	v->a[39946] = actions(3);
	v->a[39947] = 1;
	v->a[39948] = sym_comment;
	v->a[39949] = actions(1326);
	v->a[39950] = 6;
	v->a[39951] = sym_file_descriptor;
	v->a[39952] = sym__concat;
	v->a[39953] = sym_test_operator;
	v->a[39954] = sym__bare_dollar;
	v->a[39955] = sym__brace_start;
	v->a[39956] = aux_sym_heredoc_redirect_token1;
	v->a[39957] = actions(1324);
	v->a[39958] = 43;
	v->a[39959] = anon_sym_LPAREN_LPAREN;
	small_parse_table_1998(v);
}

void	small_parse_table_1998(t_small_parse_table_array *v)
{
	v->a[39960] = anon_sym_SEMI;
	v->a[39961] = anon_sym_PIPE_PIPE;
	v->a[39962] = anon_sym_AMP_AMP;
	v->a[39963] = anon_sym_PIPE;
	v->a[39964] = anon_sym_AMP;
	v->a[39965] = anon_sym_EQ_EQ;
	v->a[39966] = anon_sym_LT;
	v->a[39967] = anon_sym_GT;
	v->a[39968] = anon_sym_LT_LT;
	v->a[39969] = anon_sym_GT_GT;
	v->a[39970] = anon_sym_LPAREN;
	v->a[39971] = anon_sym_SEMI_SEMI;
	v->a[39972] = anon_sym_SEMI_AMP;
	v->a[39973] = anon_sym_SEMI_SEMI_AMP;
	v->a[39974] = anon_sym_PIPE_AMP;
	v->a[39975] = anon_sym_EQ_TILDE;
	v->a[39976] = anon_sym_AMP_GT;
	v->a[39977] = anon_sym_AMP_GT_GT;
	v->a[39978] = anon_sym_LT_AMP;
	v->a[39979] = anon_sym_GT_AMP;
	small_parse_table_1999(v);
}

void	small_parse_table_1999(t_small_parse_table_array *v)
{
	v->a[39980] = anon_sym_GT_PIPE;
	v->a[39981] = anon_sym_LT_AMP_DASH;
	v->a[39982] = anon_sym_GT_AMP_DASH;
	v->a[39983] = anon_sym_LT_LT_DASH;
	v->a[39984] = anon_sym_LT_LT_LT;
	v->a[39985] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39986] = anon_sym_DOLLAR_LBRACK;
	v->a[39987] = aux_sym_concatenation_token1;
	v->a[39988] = anon_sym_DOLLAR;
	v->a[39989] = sym__special_character;
	v->a[39990] = anon_sym_DQUOTE;
	v->a[39991] = sym_raw_string;
	v->a[39992] = sym_ansi_c_string;
	v->a[39993] = aux_sym_number_token1;
	v->a[39994] = aux_sym_number_token2;
	v->a[39995] = anon_sym_DOLLAR_LBRACE;
	v->a[39996] = anon_sym_DOLLAR_LPAREN;
	v->a[39997] = anon_sym_BQUOTE;
	v->a[39998] = anon_sym_DOLLAR_BQUOTE;
	v->a[39999] = anon_sym_LT_LPAREN;
	small_parse_table_2000(v);
}

/* EOF small_parse_table_399.c */
