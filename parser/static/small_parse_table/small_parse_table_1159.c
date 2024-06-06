/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1159.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5795(t_small_parse_table_array *v)
{
	v->a[115900] = actions(1747);
	v->a[115901] = 1;
	v->a[115902] = aux_sym_number_token2;
	v->a[115903] = actions(1751);
	v->a[115904] = 1;
	v->a[115905] = anon_sym_DOLLAR_LPAREN;
	v->a[115906] = actions(1761);
	v->a[115907] = 1;
	v->a[115908] = sym__brace_start;
	v->a[115909] = actions(6789);
	v->a[115910] = 1;
	v->a[115911] = sym_word;
	v->a[115912] = actions(6791);
	v->a[115913] = 1;
	v->a[115914] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115915] = actions(6793);
	v->a[115916] = 1;
	v->a[115917] = anon_sym_DOLLAR;
	v->a[115918] = actions(6795);
	v->a[115919] = 1;
	small_parse_table_5796(v);
}

void	small_parse_table_5796(t_small_parse_table_array *v)
{
	v->a[115920] = sym__special_character;
	v->a[115921] = actions(6797);
	v->a[115922] = 1;
	v->a[115923] = anon_sym_DQUOTE;
	v->a[115924] = actions(6801);
	v->a[115925] = 1;
	v->a[115926] = anon_sym_DOLLAR_LBRACE;
	v->a[115927] = actions(6803);
	v->a[115928] = 1;
	v->a[115929] = anon_sym_BQUOTE;
	v->a[115930] = actions(6805);
	v->a[115931] = 1;
	v->a[115932] = anon_sym_DOLLAR_BQUOTE;
	v->a[115933] = actions(6807);
	v->a[115934] = 1;
	v->a[115935] = sym__comment_word;
	v->a[115936] = actions(6799);
	v->a[115937] = 3;
	v->a[115938] = sym_test_operator;
	v->a[115939] = sym__bare_dollar;
	small_parse_table_5797(v);
}

void	small_parse_table_5797(t_small_parse_table_array *v)
{
	v->a[115940] = sym_raw_string;
	v->a[115941] = state(1108);
	v->a[115942] = 7;
	v->a[115943] = sym_arithmetic_expansion;
	v->a[115944] = sym_brace_expression;
	v->a[115945] = sym_string;
	v->a[115946] = sym_number;
	v->a[115947] = sym_simple_expansion;
	v->a[115948] = sym_expansion;
	v->a[115949] = sym_command_substitution;
	v->a[115950] = 3;
	v->a[115951] = actions(3);
	v->a[115952] = 1;
	v->a[115953] = sym_comment;
	v->a[115954] = actions(6123);
	v->a[115955] = 2;
	v->a[115956] = sym_file_descriptor;
	v->a[115957] = aux_sym_heredoc_redirect_token1;
	v->a[115958] = actions(6121);
	v->a[115959] = 21;
	small_parse_table_5798(v);
}

void	small_parse_table_5798(t_small_parse_table_array *v)
{
	v->a[115960] = anon_sym_PIPE;
	v->a[115961] = anon_sym_SEMI_SEMI;
	v->a[115962] = anon_sym_SEMI_AMP;
	v->a[115963] = anon_sym_SEMI_SEMI_AMP;
	v->a[115964] = anon_sym_PIPE_AMP;
	v->a[115965] = anon_sym_AMP_AMP;
	v->a[115966] = anon_sym_PIPE_PIPE;
	v->a[115967] = anon_sym_LT;
	v->a[115968] = anon_sym_GT;
	v->a[115969] = anon_sym_GT_GT;
	v->a[115970] = anon_sym_AMP_GT;
	v->a[115971] = anon_sym_AMP_GT_GT;
	v->a[115972] = anon_sym_LT_AMP;
	v->a[115973] = anon_sym_GT_AMP;
	v->a[115974] = anon_sym_GT_PIPE;
	v->a[115975] = anon_sym_LT_AMP_DASH;
	v->a[115976] = anon_sym_GT_AMP_DASH;
	v->a[115977] = anon_sym_LT_LT;
	v->a[115978] = anon_sym_LT_LT_DASH;
	v->a[115979] = anon_sym_AMP;
	small_parse_table_5799(v);
}

void	small_parse_table_5799(t_small_parse_table_array *v)
{
	v->a[115980] = anon_sym_SEMI;
	v->a[115981] = 16;
	v->a[115982] = actions(3);
	v->a[115983] = 1;
	v->a[115984] = sym_comment;
	v->a[115985] = actions(3483);
	v->a[115986] = 1;
	v->a[115987] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115988] = actions(3489);
	v->a[115989] = 1;
	v->a[115990] = anon_sym_DQUOTE;
	v->a[115991] = actions(3493);
	v->a[115992] = 1;
	v->a[115993] = aux_sym_number_token1;
	v->a[115994] = actions(3495);
	v->a[115995] = 1;
	v->a[115996] = aux_sym_number_token2;
	v->a[115997] = actions(3497);
	v->a[115998] = 1;
	v->a[115999] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5800(v);
}

/* EOF small_parse_table_1159.c */
