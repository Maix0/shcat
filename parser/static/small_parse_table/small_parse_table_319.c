/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_319.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1595(t_small_parse_table_array *v)
{
	v->a[31900] = anon_sym_AMP_GT;
	v->a[31901] = anon_sym_AMP_GT_GT;
	v->a[31902] = anon_sym_LT_AMP;
	v->a[31903] = anon_sym_GT_AMP;
	v->a[31904] = anon_sym_GT_PIPE;
	v->a[31905] = anon_sym_LT_AMP_DASH;
	v->a[31906] = anon_sym_GT_AMP_DASH;
	v->a[31907] = anon_sym_LT_LT;
	v->a[31908] = anon_sym_LT_LT_DASH;
	v->a[31909] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31910] = anon_sym_AMP;
	v->a[31911] = aux_sym_concatenation_token1;
	v->a[31912] = anon_sym_DOLLAR;
	v->a[31913] = sym__special_character;
	v->a[31914] = anon_sym_DQUOTE;
	v->a[31915] = sym_raw_string;
	v->a[31916] = aux_sym_number_token1;
	v->a[31917] = aux_sym_number_token2;
	v->a[31918] = anon_sym_DOLLAR_LBRACE;
	v->a[31919] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1596(v);
}

void	small_parse_table_1596(t_small_parse_table_array *v)
{
	v->a[31920] = anon_sym_BQUOTE;
	v->a[31921] = anon_sym_DOLLAR_BQUOTE;
	v->a[31922] = sym_word;
	v->a[31923] = anon_sym_SEMI;
	v->a[31924] = 6;
	v->a[31925] = actions(3);
	v->a[31926] = 1;
	v->a[31927] = sym_comment;
	v->a[31928] = actions(3312);
	v->a[31929] = 1;
	v->a[31930] = aux_sym_concatenation_token1;
	v->a[31931] = actions(3314);
	v->a[31932] = 1;
	v->a[31933] = sym__concat;
	v->a[31934] = state(679);
	v->a[31935] = 1;
	v->a[31936] = aux_sym_concatenation_repeat1;
	v->a[31937] = actions(2719);
	v->a[31938] = 6;
	v->a[31939] = sym_file_descriptor;
	small_parse_table_1597(v);
}

void	small_parse_table_1597(t_small_parse_table_array *v)
{
	v->a[31940] = sym_variable_name;
	v->a[31941] = sym_test_operator;
	v->a[31942] = sym__brace_start;
	v->a[31943] = ts_builtin_sym_end;
	v->a[31944] = aux_sym_heredoc_redirect_token1;
	v->a[31945] = actions(2717);
	v->a[31946] = 32;
	v->a[31947] = anon_sym_PIPE;
	v->a[31948] = anon_sym_SEMI_SEMI;
	v->a[31949] = anon_sym_PIPE_AMP;
	v->a[31950] = anon_sym_AMP_AMP;
	v->a[31951] = anon_sym_PIPE_PIPE;
	v->a[31952] = anon_sym_LT;
	v->a[31953] = anon_sym_GT;
	v->a[31954] = anon_sym_GT_GT;
	v->a[31955] = anon_sym_AMP_GT;
	v->a[31956] = anon_sym_AMP_GT_GT;
	v->a[31957] = anon_sym_LT_AMP;
	v->a[31958] = anon_sym_GT_AMP;
	v->a[31959] = anon_sym_GT_PIPE;
	small_parse_table_1598(v);
}

void	small_parse_table_1598(t_small_parse_table_array *v)
{
	v->a[31960] = anon_sym_LT_AMP_DASH;
	v->a[31961] = anon_sym_GT_AMP_DASH;
	v->a[31962] = anon_sym_LT_LT;
	v->a[31963] = anon_sym_LT_LT_DASH;
	v->a[31964] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31965] = anon_sym_AMP;
	v->a[31966] = anon_sym_DOLLAR;
	v->a[31967] = sym__special_character;
	v->a[31968] = anon_sym_DQUOTE;
	v->a[31969] = sym_raw_string;
	v->a[31970] = aux_sym_number_token1;
	v->a[31971] = aux_sym_number_token2;
	v->a[31972] = anon_sym_DOLLAR_LBRACE;
	v->a[31973] = anon_sym_DOLLAR_LPAREN;
	v->a[31974] = anon_sym_BQUOTE;
	v->a[31975] = anon_sym_DOLLAR_BQUOTE;
	v->a[31976] = aux_sym__simple_variable_name_token1;
	v->a[31977] = sym_word;
	v->a[31978] = anon_sym_SEMI;
	v->a[31979] = 3;
	small_parse_table_1599(v);
}

void	small_parse_table_1599(t_small_parse_table_array *v)
{
	v->a[31980] = actions(3);
	v->a[31981] = 1;
	v->a[31982] = sym_comment;
	v->a[31983] = actions(3062);
	v->a[31984] = 5;
	v->a[31985] = sym_file_descriptor;
	v->a[31986] = sym__concat;
	v->a[31987] = sym_test_operator;
	v->a[31988] = sym__brace_start;
	v->a[31989] = aux_sym_heredoc_redirect_token1;
	v->a[31990] = actions(3060);
	v->a[31991] = 36;
	v->a[31992] = anon_sym_esac;
	v->a[31993] = anon_sym_PIPE;
	v->a[31994] = anon_sym_SEMI_SEMI;
	v->a[31995] = anon_sym_SEMI_AMP;
	v->a[31996] = anon_sym_SEMI_SEMI_AMP;
	v->a[31997] = anon_sym_PIPE_AMP;
	v->a[31998] = anon_sym_AMP_AMP;
	v->a[31999] = anon_sym_PIPE_PIPE;
	small_parse_table_1600(v);
}

/* EOF small_parse_table_319.c */
