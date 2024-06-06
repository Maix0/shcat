/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_499.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2495(t_small_parse_table_array *v)
{
	v->a[49900] = sym_variable_name;
	v->a[49901] = sym_test_operator;
	v->a[49902] = sym__brace_start;
	v->a[49903] = aux_sym_heredoc_redirect_token1;
	v->a[49904] = actions(2717);
	v->a[49905] = 31;
	v->a[49906] = anon_sym_PIPE;
	v->a[49907] = anon_sym_SEMI_SEMI;
	v->a[49908] = anon_sym_PIPE_AMP;
	v->a[49909] = anon_sym_AMP_AMP;
	v->a[49910] = anon_sym_PIPE_PIPE;
	v->a[49911] = anon_sym_LT;
	v->a[49912] = anon_sym_GT;
	v->a[49913] = anon_sym_GT_GT;
	v->a[49914] = anon_sym_AMP_GT;
	v->a[49915] = anon_sym_AMP_GT_GT;
	v->a[49916] = anon_sym_LT_AMP;
	v->a[49917] = anon_sym_GT_AMP;
	v->a[49918] = anon_sym_GT_PIPE;
	v->a[49919] = anon_sym_LT_AMP_DASH;
	small_parse_table_2496(v);
}

void	small_parse_table_2496(t_small_parse_table_array *v)
{
	v->a[49920] = anon_sym_GT_AMP_DASH;
	v->a[49921] = anon_sym_LT_LT;
	v->a[49922] = anon_sym_LT_LT_DASH;
	v->a[49923] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49924] = anon_sym_AMP;
	v->a[49925] = anon_sym_DOLLAR;
	v->a[49926] = sym__special_character;
	v->a[49927] = anon_sym_DQUOTE;
	v->a[49928] = sym_raw_string;
	v->a[49929] = aux_sym_number_token1;
	v->a[49930] = aux_sym_number_token2;
	v->a[49931] = anon_sym_DOLLAR_LBRACE;
	v->a[49932] = anon_sym_DOLLAR_LPAREN;
	v->a[49933] = anon_sym_BQUOTE;
	v->a[49934] = anon_sym_DOLLAR_BQUOTE;
	v->a[49935] = sym_word;
	v->a[49936] = anon_sym_SEMI;
	v->a[49937] = 3;
	v->a[49938] = actions(3);
	v->a[49939] = 1;
	small_parse_table_2497(v);
}

void	small_parse_table_2497(t_small_parse_table_array *v)
{
	v->a[49940] = sym_comment;
	v->a[49941] = actions(2774);
	v->a[49942] = 7;
	v->a[49943] = sym_file_descriptor;
	v->a[49944] = sym__concat;
	v->a[49945] = sym_test_operator;
	v->a[49946] = sym__bare_dollar;
	v->a[49947] = sym__brace_start;
	v->a[49948] = ts_builtin_sym_end;
	v->a[49949] = aux_sym_heredoc_redirect_token1;
	v->a[49950] = actions(2772);
	v->a[49951] = 32;
	v->a[49952] = anon_sym_PIPE;
	v->a[49953] = anon_sym_SEMI_SEMI;
	v->a[49954] = anon_sym_PIPE_AMP;
	v->a[49955] = anon_sym_AMP_AMP;
	v->a[49956] = anon_sym_PIPE_PIPE;
	v->a[49957] = anon_sym_LT;
	v->a[49958] = anon_sym_GT;
	v->a[49959] = anon_sym_GT_GT;
	small_parse_table_2498(v);
}

void	small_parse_table_2498(t_small_parse_table_array *v)
{
	v->a[49960] = anon_sym_AMP_GT;
	v->a[49961] = anon_sym_AMP_GT_GT;
	v->a[49962] = anon_sym_LT_AMP;
	v->a[49963] = anon_sym_GT_AMP;
	v->a[49964] = anon_sym_GT_PIPE;
	v->a[49965] = anon_sym_LT_AMP_DASH;
	v->a[49966] = anon_sym_GT_AMP_DASH;
	v->a[49967] = anon_sym_LT_LT;
	v->a[49968] = anon_sym_LT_LT_DASH;
	v->a[49969] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49970] = anon_sym_AMP;
	v->a[49971] = aux_sym_concatenation_token1;
	v->a[49972] = anon_sym_DOLLAR;
	v->a[49973] = sym__special_character;
	v->a[49974] = anon_sym_DQUOTE;
	v->a[49975] = sym_raw_string;
	v->a[49976] = aux_sym_number_token1;
	v->a[49977] = aux_sym_number_token2;
	v->a[49978] = anon_sym_DOLLAR_LBRACE;
	v->a[49979] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2499(v);
}

void	small_parse_table_2499(t_small_parse_table_array *v)
{
	v->a[49980] = anon_sym_BQUOTE;
	v->a[49981] = anon_sym_DOLLAR_BQUOTE;
	v->a[49982] = sym_word;
	v->a[49983] = anon_sym_SEMI;
	v->a[49984] = 3;
	v->a[49985] = actions(3);
	v->a[49986] = 1;
	v->a[49987] = sym_comment;
	v->a[49988] = actions(3020);
	v->a[49989] = 7;
	v->a[49990] = sym_file_descriptor;
	v->a[49991] = sym__concat;
	v->a[49992] = sym_variable_name;
	v->a[49993] = sym_test_operator;
	v->a[49994] = sym__brace_start;
	v->a[49995] = ts_builtin_sym_end;
	v->a[49996] = aux_sym_heredoc_redirect_token1;
	v->a[49997] = actions(3018);
	v->a[49998] = 32;
	v->a[49999] = anon_sym_PIPE;
	small_parse_table_2500(v);
}

/* EOF small_parse_table_499.c */
