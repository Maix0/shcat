/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_509.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2545(t_small_parse_table_array *v)
{
	v->a[50900] = aux_sym_number_token2;
	v->a[50901] = anon_sym_DOLLAR_LBRACE;
	v->a[50902] = anon_sym_DOLLAR_LPAREN;
	v->a[50903] = anon_sym_BQUOTE;
	v->a[50904] = anon_sym_DOLLAR_BQUOTE;
	v->a[50905] = sym_word;
	v->a[50906] = anon_sym_SEMI;
	v->a[50907] = 5;
	v->a[50908] = actions(3);
	v->a[50909] = 1;
	v->a[50910] = sym_comment;
	v->a[50911] = actions(3647);
	v->a[50912] = 1;
	v->a[50913] = sym__special_character;
	v->a[50914] = state(1150);
	v->a[50915] = 1;
	v->a[50916] = aux_sym__literal_repeat1;
	v->a[50917] = actions(3252);
	v->a[50918] = 5;
	v->a[50919] = sym_file_descriptor;
	small_parse_table_2546(v);
}

void	small_parse_table_2546(t_small_parse_table_array *v)
{
	v->a[50920] = sym_variable_name;
	v->a[50921] = sym_test_operator;
	v->a[50922] = sym__brace_start;
	v->a[50923] = aux_sym_heredoc_redirect_token1;
	v->a[50924] = actions(3250);
	v->a[50925] = 32;
	v->a[50926] = anon_sym_PIPE;
	v->a[50927] = anon_sym_RPAREN;
	v->a[50928] = anon_sym_SEMI_SEMI;
	v->a[50929] = anon_sym_PIPE_AMP;
	v->a[50930] = anon_sym_AMP_AMP;
	v->a[50931] = anon_sym_PIPE_PIPE;
	v->a[50932] = anon_sym_LT;
	v->a[50933] = anon_sym_GT;
	v->a[50934] = anon_sym_GT_GT;
	v->a[50935] = anon_sym_AMP_GT;
	v->a[50936] = anon_sym_AMP_GT_GT;
	v->a[50937] = anon_sym_LT_AMP;
	v->a[50938] = anon_sym_GT_AMP;
	v->a[50939] = anon_sym_GT_PIPE;
	small_parse_table_2547(v);
}

void	small_parse_table_2547(t_small_parse_table_array *v)
{
	v->a[50940] = anon_sym_LT_AMP_DASH;
	v->a[50941] = anon_sym_GT_AMP_DASH;
	v->a[50942] = anon_sym_LT_LT;
	v->a[50943] = anon_sym_LT_LT_DASH;
	v->a[50944] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50945] = anon_sym_AMP;
	v->a[50946] = anon_sym_DOLLAR;
	v->a[50947] = anon_sym_DQUOTE;
	v->a[50948] = sym_raw_string;
	v->a[50949] = aux_sym_number_token1;
	v->a[50950] = aux_sym_number_token2;
	v->a[50951] = anon_sym_DOLLAR_LBRACE;
	v->a[50952] = anon_sym_DOLLAR_LPAREN;
	v->a[50953] = anon_sym_BQUOTE;
	v->a[50954] = anon_sym_DOLLAR_BQUOTE;
	v->a[50955] = aux_sym__simple_variable_name_token1;
	v->a[50956] = sym_word;
	v->a[50957] = anon_sym_SEMI;
	v->a[50958] = 3;
	v->a[50959] = actions(3);
	small_parse_table_2548(v);
}

void	small_parse_table_2548(t_small_parse_table_array *v)
{
	v->a[50960] = 1;
	v->a[50961] = sym_comment;
	v->a[50962] = actions(2654);
	v->a[50963] = 7;
	v->a[50964] = sym_file_descriptor;
	v->a[50965] = sym__concat;
	v->a[50966] = sym_variable_name;
	v->a[50967] = sym_test_operator;
	v->a[50968] = sym__brace_start;
	v->a[50969] = ts_builtin_sym_end;
	v->a[50970] = aux_sym_heredoc_redirect_token1;
	v->a[50971] = actions(2652);
	v->a[50972] = 32;
	v->a[50973] = anon_sym_PIPE;
	v->a[50974] = anon_sym_SEMI_SEMI;
	v->a[50975] = anon_sym_PIPE_AMP;
	v->a[50976] = anon_sym_AMP_AMP;
	v->a[50977] = anon_sym_PIPE_PIPE;
	v->a[50978] = anon_sym_LT;
	v->a[50979] = anon_sym_GT;
	small_parse_table_2549(v);
}

void	small_parse_table_2549(t_small_parse_table_array *v)
{
	v->a[50980] = anon_sym_GT_GT;
	v->a[50981] = anon_sym_AMP_GT;
	v->a[50982] = anon_sym_AMP_GT_GT;
	v->a[50983] = anon_sym_LT_AMP;
	v->a[50984] = anon_sym_GT_AMP;
	v->a[50985] = anon_sym_GT_PIPE;
	v->a[50986] = anon_sym_LT_AMP_DASH;
	v->a[50987] = anon_sym_GT_AMP_DASH;
	v->a[50988] = anon_sym_LT_LT;
	v->a[50989] = anon_sym_LT_LT_DASH;
	v->a[50990] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50991] = anon_sym_AMP;
	v->a[50992] = aux_sym_concatenation_token1;
	v->a[50993] = anon_sym_DOLLAR;
	v->a[50994] = sym__special_character;
	v->a[50995] = anon_sym_DQUOTE;
	v->a[50996] = sym_raw_string;
	v->a[50997] = aux_sym_number_token1;
	v->a[50998] = aux_sym_number_token2;
	v->a[50999] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2550(v);
}

/* EOF small_parse_table_509.c */
