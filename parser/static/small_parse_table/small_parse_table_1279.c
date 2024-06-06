/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1279.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6395(t_small_parse_table_array *v)
{
	v->a[127900] = anon_sym_AMP_GT;
	v->a[127901] = anon_sym_LT_AMP;
	v->a[127902] = anon_sym_GT_AMP;
	v->a[127903] = anon_sym_LT_LT;
	v->a[127904] = actions(6012);
	v->a[127905] = 10;
	v->a[127906] = sym_file_descriptor;
	v->a[127907] = anon_sym_PIPE_AMP;
	v->a[127908] = anon_sym_AMP_AMP;
	v->a[127909] = anon_sym_PIPE_PIPE;
	v->a[127910] = anon_sym_GT_GT;
	v->a[127911] = anon_sym_AMP_GT_GT;
	v->a[127912] = anon_sym_GT_PIPE;
	v->a[127913] = anon_sym_LT_AMP_DASH;
	v->a[127914] = anon_sym_GT_AMP_DASH;
	v->a[127915] = anon_sym_LT_LT_DASH;
	v->a[127916] = 8;
	v->a[127917] = actions(3);
	v->a[127918] = 1;
	v->a[127919] = sym_comment;
	small_parse_table_6396(v);
}

void	small_parse_table_6396(t_small_parse_table_array *v)
{
	v->a[127920] = actions(2478);
	v->a[127921] = 1;
	v->a[127922] = sym_file_descriptor;
	v->a[127923] = actions(7354);
	v->a[127924] = 1;
	v->a[127925] = aux_sym_heredoc_redirect_token1;
	v->a[127926] = state(3593);
	v->a[127927] = 1;
	v->a[127928] = sym__heredoc_expression;
	v->a[127929] = actions(2450);
	v->a[127930] = 2;
	v->a[127931] = anon_sym_AMP_AMP;
	v->a[127932] = anon_sym_PIPE_PIPE;
	v->a[127933] = actions(2454);
	v->a[127934] = 2;
	v->a[127935] = anon_sym_LT_AMP_DASH;
	v->a[127936] = anon_sym_GT_AMP_DASH;
	v->a[127937] = state(2874);
	v->a[127938] = 2;
	v->a[127939] = sym_file_redirect;
	small_parse_table_6397(v);
}

void	small_parse_table_6397(t_small_parse_table_array *v)
{
	v->a[127940] = aux_sym_redirected_statement_repeat2;
	v->a[127941] = actions(2452);
	v->a[127942] = 8;
	v->a[127943] = anon_sym_LT;
	v->a[127944] = anon_sym_GT;
	v->a[127945] = anon_sym_GT_GT;
	v->a[127946] = anon_sym_AMP_GT;
	v->a[127947] = anon_sym_AMP_GT_GT;
	v->a[127948] = anon_sym_LT_AMP;
	v->a[127949] = anon_sym_GT_AMP;
	v->a[127950] = anon_sym_GT_PIPE;
	v->a[127951] = 4;
	v->a[127952] = actions(57);
	v->a[127953] = 1;
	v->a[127954] = sym_comment;
	v->a[127955] = actions(7358);
	v->a[127956] = 1;
	v->a[127957] = anon_sym_esac;
	v->a[127958] = actions(7356);
	v->a[127959] = 5;
	small_parse_table_6398(v);
}

void	small_parse_table_6398(t_small_parse_table_array *v)
{
	v->a[127960] = anon_sym_DOLLAR;
	v->a[127961] = aux_sym_number_token1;
	v->a[127962] = aux_sym_number_token2;
	v->a[127963] = anon_sym_DOLLAR_LPAREN;
	v->a[127964] = sym_word;
	v->a[127965] = actions(7360);
	v->a[127966] = 11;
	v->a[127967] = sym_test_operator;
	v->a[127968] = sym_extglob_pattern;
	v->a[127969] = sym__brace_start;
	v->a[127970] = anon_sym_LPAREN;
	v->a[127971] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[127972] = sym__special_character;
	v->a[127973] = anon_sym_DQUOTE;
	v->a[127974] = sym_raw_string;
	v->a[127975] = anon_sym_DOLLAR_LBRACE;
	v->a[127976] = anon_sym_BQUOTE;
	v->a[127977] = anon_sym_DOLLAR_BQUOTE;
	v->a[127978] = 3;
	v->a[127979] = actions(57);
	small_parse_table_6399(v);
}

void	small_parse_table_6399(t_small_parse_table_array *v)
{
	v->a[127980] = 1;
	v->a[127981] = sym_comment;
	v->a[127982] = actions(6047);
	v->a[127983] = 7;
	v->a[127984] = anon_sym_PIPE;
	v->a[127985] = anon_sym_LT;
	v->a[127986] = anon_sym_GT;
	v->a[127987] = anon_sym_AMP_GT;
	v->a[127988] = anon_sym_LT_AMP;
	v->a[127989] = anon_sym_GT_AMP;
	v->a[127990] = anon_sym_LT_LT;
	v->a[127991] = actions(6049);
	v->a[127992] = 10;
	v->a[127993] = sym_file_descriptor;
	v->a[127994] = anon_sym_PIPE_AMP;
	v->a[127995] = anon_sym_AMP_AMP;
	v->a[127996] = anon_sym_PIPE_PIPE;
	v->a[127997] = anon_sym_GT_GT;
	v->a[127998] = anon_sym_AMP_GT_GT;
	v->a[127999] = anon_sym_GT_PIPE;
	small_parse_table_6400(v);
}

/* EOF small_parse_table_1279.c */
