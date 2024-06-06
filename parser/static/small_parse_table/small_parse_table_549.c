/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_549.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2745(t_small_parse_table_array *v)
{
	v->a[54900] = sym_file_redirect;
	v->a[54901] = sym_heredoc_redirect;
	v->a[54902] = aux_sym_redirected_statement_repeat1;
	v->a[54903] = actions(2512);
	v->a[54904] = 22;
	v->a[54905] = anon_sym_LT;
	v->a[54906] = anon_sym_GT;
	v->a[54907] = anon_sym_GT_GT;
	v->a[54908] = anon_sym_AMP_GT;
	v->a[54909] = anon_sym_AMP_GT_GT;
	v->a[54910] = anon_sym_LT_AMP;
	v->a[54911] = anon_sym_GT_AMP;
	v->a[54912] = anon_sym_GT_PIPE;
	v->a[54913] = anon_sym_LT_AMP_DASH;
	v->a[54914] = anon_sym_GT_AMP_DASH;
	v->a[54915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54916] = anon_sym_DOLLAR;
	v->a[54917] = sym__special_character;
	v->a[54918] = anon_sym_DQUOTE;
	v->a[54919] = sym_raw_string;
	small_parse_table_2746(v);
}

void	small_parse_table_2746(t_small_parse_table_array *v)
{
	v->a[54920] = aux_sym_number_token1;
	v->a[54921] = aux_sym_number_token2;
	v->a[54922] = anon_sym_DOLLAR_LBRACE;
	v->a[54923] = anon_sym_DOLLAR_LPAREN;
	v->a[54924] = anon_sym_BQUOTE;
	v->a[54925] = anon_sym_DOLLAR_BQUOTE;
	v->a[54926] = sym_word;
	v->a[54927] = 3;
	v->a[54928] = actions(3);
	v->a[54929] = 1;
	v->a[54930] = sym_comment;
	v->a[54931] = actions(2664);
	v->a[54932] = 6;
	v->a[54933] = sym_file_descriptor;
	v->a[54934] = sym_test_operator;
	v->a[54935] = sym__bare_dollar;
	v->a[54936] = sym__brace_start;
	v->a[54937] = ts_builtin_sym_end;
	v->a[54938] = aux_sym_heredoc_redirect_token1;
	v->a[54939] = actions(2662);
	small_parse_table_2747(v);
}

void	small_parse_table_2747(t_small_parse_table_array *v)
{
	v->a[54940] = 32;
	v->a[54941] = anon_sym_LPAREN;
	v->a[54942] = anon_sym_PIPE;
	v->a[54943] = anon_sym_SEMI_SEMI;
	v->a[54944] = anon_sym_PIPE_AMP;
	v->a[54945] = anon_sym_AMP_AMP;
	v->a[54946] = anon_sym_PIPE_PIPE;
	v->a[54947] = anon_sym_LT;
	v->a[54948] = anon_sym_GT;
	v->a[54949] = anon_sym_GT_GT;
	v->a[54950] = anon_sym_AMP_GT;
	v->a[54951] = anon_sym_AMP_GT_GT;
	v->a[54952] = anon_sym_LT_AMP;
	v->a[54953] = anon_sym_GT_AMP;
	v->a[54954] = anon_sym_GT_PIPE;
	v->a[54955] = anon_sym_LT_AMP_DASH;
	v->a[54956] = anon_sym_GT_AMP_DASH;
	v->a[54957] = anon_sym_LT_LT;
	v->a[54958] = anon_sym_LT_LT_DASH;
	v->a[54959] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2748(v);
}

void	small_parse_table_2748(t_small_parse_table_array *v)
{
	v->a[54960] = anon_sym_AMP;
	v->a[54961] = anon_sym_DOLLAR;
	v->a[54962] = sym__special_character;
	v->a[54963] = anon_sym_DQUOTE;
	v->a[54964] = sym_raw_string;
	v->a[54965] = aux_sym_number_token1;
	v->a[54966] = aux_sym_number_token2;
	v->a[54967] = anon_sym_DOLLAR_LBRACE;
	v->a[54968] = anon_sym_DOLLAR_LPAREN;
	v->a[54969] = anon_sym_BQUOTE;
	v->a[54970] = anon_sym_DOLLAR_BQUOTE;
	v->a[54971] = sym_word;
	v->a[54972] = anon_sym_SEMI;
	v->a[54973] = 5;
	v->a[54974] = actions(3);
	v->a[54975] = 1;
	v->a[54976] = sym_comment;
	v->a[54977] = actions(3805);
	v->a[54978] = 1;
	v->a[54979] = sym__special_character;
	small_parse_table_2749(v);
}

void	small_parse_table_2749(t_small_parse_table_array *v)
{
	v->a[54980] = state(1198);
	v->a[54981] = 1;
	v->a[54982] = aux_sym__literal_repeat1;
	v->a[54983] = actions(3197);
	v->a[54984] = 5;
	v->a[54985] = sym_file_descriptor;
	v->a[54986] = sym_test_operator;
	v->a[54987] = sym__brace_start;
	v->a[54988] = ts_builtin_sym_end;
	v->a[54989] = aux_sym_heredoc_redirect_token1;
	v->a[54990] = actions(3195);
	v->a[54991] = 31;
	v->a[54992] = anon_sym_PIPE;
	v->a[54993] = anon_sym_SEMI_SEMI;
	v->a[54994] = anon_sym_PIPE_AMP;
	v->a[54995] = anon_sym_AMP_AMP;
	v->a[54996] = anon_sym_PIPE_PIPE;
	v->a[54997] = anon_sym_LT;
	v->a[54998] = anon_sym_GT;
	v->a[54999] = anon_sym_GT_GT;
	small_parse_table_2750(v);
}

/* EOF small_parse_table_549.c */
