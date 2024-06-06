/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_309.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1545(t_small_parse_table_array *v)
{
	v->a[30900] = 3;
	v->a[30901] = actions(3);
	v->a[30902] = 1;
	v->a[30903] = sym_comment;
	v->a[30904] = actions(2967);
	v->a[30905] = 6;
	v->a[30906] = sym_file_descriptor;
	v->a[30907] = sym__concat;
	v->a[30908] = sym_test_operator;
	v->a[30909] = sym__bare_dollar;
	v->a[30910] = sym__brace_start;
	v->a[30911] = aux_sym_heredoc_redirect_token1;
	v->a[30912] = actions(2965);
	v->a[30913] = 35;
	v->a[30914] = anon_sym_LPAREN;
	v->a[30915] = anon_sym_PIPE;
	v->a[30916] = anon_sym_SEMI_SEMI;
	v->a[30917] = anon_sym_SEMI_AMP;
	v->a[30918] = anon_sym_SEMI_SEMI_AMP;
	v->a[30919] = anon_sym_PIPE_AMP;
	small_parse_table_1546(v);
}

void	small_parse_table_1546(t_small_parse_table_array *v)
{
	v->a[30920] = anon_sym_AMP_AMP;
	v->a[30921] = anon_sym_PIPE_PIPE;
	v->a[30922] = anon_sym_LT;
	v->a[30923] = anon_sym_GT;
	v->a[30924] = anon_sym_GT_GT;
	v->a[30925] = anon_sym_AMP_GT;
	v->a[30926] = anon_sym_AMP_GT_GT;
	v->a[30927] = anon_sym_LT_AMP;
	v->a[30928] = anon_sym_GT_AMP;
	v->a[30929] = anon_sym_GT_PIPE;
	v->a[30930] = anon_sym_LT_AMP_DASH;
	v->a[30931] = anon_sym_GT_AMP_DASH;
	v->a[30932] = anon_sym_LT_LT;
	v->a[30933] = anon_sym_LT_LT_DASH;
	v->a[30934] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30935] = anon_sym_AMP;
	v->a[30936] = aux_sym_concatenation_token1;
	v->a[30937] = anon_sym_DOLLAR;
	v->a[30938] = sym__special_character;
	v->a[30939] = anon_sym_DQUOTE;
	small_parse_table_1547(v);
}

void	small_parse_table_1547(t_small_parse_table_array *v)
{
	v->a[30940] = sym_raw_string;
	v->a[30941] = aux_sym_number_token1;
	v->a[30942] = aux_sym_number_token2;
	v->a[30943] = anon_sym_DOLLAR_LBRACE;
	v->a[30944] = anon_sym_DOLLAR_LPAREN;
	v->a[30945] = anon_sym_BQUOTE;
	v->a[30946] = anon_sym_DOLLAR_BQUOTE;
	v->a[30947] = sym_word;
	v->a[30948] = anon_sym_SEMI;
	v->a[30949] = 3;
	v->a[30950] = actions(3);
	v->a[30951] = 1;
	v->a[30952] = sym_comment;
	v->a[30953] = actions(3034);
	v->a[30954] = 6;
	v->a[30955] = sym_file_descriptor;
	v->a[30956] = sym__concat;
	v->a[30957] = sym_variable_name;
	v->a[30958] = sym_test_operator;
	v->a[30959] = sym__brace_start;
	small_parse_table_1548(v);
}

void	small_parse_table_1548(t_small_parse_table_array *v)
{
	v->a[30960] = aux_sym_heredoc_redirect_token1;
	v->a[30961] = actions(3032);
	v->a[30962] = 35;
	v->a[30963] = anon_sym_PIPE;
	v->a[30964] = anon_sym_SEMI_SEMI;
	v->a[30965] = anon_sym_SEMI_AMP;
	v->a[30966] = anon_sym_SEMI_SEMI_AMP;
	v->a[30967] = anon_sym_PIPE_AMP;
	v->a[30968] = anon_sym_AMP_AMP;
	v->a[30969] = anon_sym_PIPE_PIPE;
	v->a[30970] = anon_sym_LT;
	v->a[30971] = anon_sym_GT;
	v->a[30972] = anon_sym_GT_GT;
	v->a[30973] = anon_sym_AMP_GT;
	v->a[30974] = anon_sym_AMP_GT_GT;
	v->a[30975] = anon_sym_LT_AMP;
	v->a[30976] = anon_sym_GT_AMP;
	v->a[30977] = anon_sym_GT_PIPE;
	v->a[30978] = anon_sym_LT_AMP_DASH;
	v->a[30979] = anon_sym_GT_AMP_DASH;
	small_parse_table_1549(v);
}

void	small_parse_table_1549(t_small_parse_table_array *v)
{
	v->a[30980] = anon_sym_LT_LT;
	v->a[30981] = anon_sym_LT_LT_DASH;
	v->a[30982] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30983] = anon_sym_AMP;
	v->a[30984] = aux_sym_concatenation_token1;
	v->a[30985] = anon_sym_DOLLAR;
	v->a[30986] = sym__special_character;
	v->a[30987] = anon_sym_DQUOTE;
	v->a[30988] = sym_raw_string;
	v->a[30989] = aux_sym_number_token1;
	v->a[30990] = aux_sym_number_token2;
	v->a[30991] = anon_sym_DOLLAR_LBRACE;
	v->a[30992] = anon_sym_DOLLAR_LPAREN;
	v->a[30993] = anon_sym_BQUOTE;
	v->a[30994] = anon_sym_DOLLAR_BQUOTE;
	v->a[30995] = aux_sym__simple_variable_name_token1;
	v->a[30996] = sym_word;
	v->a[30997] = anon_sym_SEMI;
	v->a[30998] = 3;
	v->a[30999] = actions(3);
	small_parse_table_1550(v);
}

/* EOF small_parse_table_309.c */
