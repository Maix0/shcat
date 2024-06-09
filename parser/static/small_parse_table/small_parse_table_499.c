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
	v->a[49900] = actions(1831);
	v->a[49901] = 1;
	v->a[49902] = sym_variable_name;
	v->a[49903] = state(1346);
	v->a[49904] = 2;
	v->a[49905] = sym_variable_assignment;
	v->a[49906] = aux_sym_variable_assignments_repeat1;
	v->a[49907] = state(1351);
	v->a[49908] = 3;
	v->a[49909] = sym_file_redirect;
	v->a[49910] = sym_heredoc_redirect;
	v->a[49911] = aux_sym_redirected_statement_repeat1;
	v->a[49912] = actions(1004);
	v->a[49913] = 4;
	v->a[49914] = anon_sym_AMP_AMP;
	v->a[49915] = anon_sym_PIPE_PIPE;
	v->a[49916] = anon_sym_LT_LT;
	v->a[49917] = anon_sym_LT_LT_DASH;
	v->a[49918] = actions(1000);
	v->a[49919] = 20;
	small_parse_table_2496(v);
}

void	small_parse_table_2496(t_small_parse_table_array *v)
{
	v->a[49920] = anon_sym_LT;
	v->a[49921] = anon_sym_GT;
	v->a[49922] = anon_sym_GT_GT;
	v->a[49923] = anon_sym_AMP_GT;
	v->a[49924] = anon_sym_AMP_GT_GT;
	v->a[49925] = anon_sym_LT_AMP;
	v->a[49926] = anon_sym_GT_AMP;
	v->a[49927] = anon_sym_GT_PIPE;
	v->a[49928] = anon_sym_LT_AMP_DASH;
	v->a[49929] = anon_sym_GT_AMP_DASH;
	v->a[49930] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49931] = anon_sym_DOLLAR;
	v->a[49932] = anon_sym_DQUOTE;
	v->a[49933] = sym_raw_string;
	v->a[49934] = aux_sym_number_token1;
	v->a[49935] = aux_sym_number_token2;
	v->a[49936] = anon_sym_DOLLAR_LBRACE;
	v->a[49937] = anon_sym_DOLLAR_LPAREN;
	v->a[49938] = anon_sym_BQUOTE;
	v->a[49939] = sym_word;
	small_parse_table_2497(v);
}

void	small_parse_table_2497(t_small_parse_table_array *v)
{
	v->a[49940] = 7;
	v->a[49941] = actions(3);
	v->a[49942] = 1;
	v->a[49943] = sym_comment;
	v->a[49944] = actions(1159);
	v->a[49945] = 1;
	v->a[49946] = aux_sym_concatenation_token1;
	v->a[49947] = actions(1161);
	v->a[49948] = 1;
	v->a[49949] = sym__concat;
	v->a[49950] = actions(1834);
	v->a[49951] = 1;
	v->a[49952] = anon_sym_LPAREN;
	v->a[49953] = state(741);
	v->a[49954] = 1;
	v->a[49955] = aux_sym_concatenation_repeat1;
	v->a[49956] = actions(1108);
	v->a[49957] = 2;
	v->a[49958] = sym_file_descriptor;
	v->a[49959] = sym__bare_dollar;
	small_parse_table_2498(v);
}

void	small_parse_table_2498(t_small_parse_table_array *v)
{
	v->a[49960] = actions(1104);
	v->a[49961] = 26;
	v->a[49962] = anon_sym_PIPE;
	v->a[49963] = anon_sym_AMP_AMP;
	v->a[49964] = anon_sym_PIPE_PIPE;
	v->a[49965] = anon_sym_LT;
	v->a[49966] = anon_sym_GT;
	v->a[49967] = anon_sym_GT_GT;
	v->a[49968] = anon_sym_AMP_GT;
	v->a[49969] = anon_sym_AMP_GT_GT;
	v->a[49970] = anon_sym_LT_AMP;
	v->a[49971] = anon_sym_GT_AMP;
	v->a[49972] = anon_sym_GT_PIPE;
	v->a[49973] = anon_sym_LT_AMP_DASH;
	v->a[49974] = anon_sym_GT_AMP_DASH;
	v->a[49975] = anon_sym_LT_LT;
	v->a[49976] = anon_sym_LT_LT_DASH;
	v->a[49977] = aux_sym_heredoc_redirect_token1;
	v->a[49978] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49979] = anon_sym_DOLLAR;
	small_parse_table_2499(v);
}

void	small_parse_table_2499(t_small_parse_table_array *v)
{
	v->a[49980] = anon_sym_DQUOTE;
	v->a[49981] = sym_raw_string;
	v->a[49982] = aux_sym_number_token1;
	v->a[49983] = aux_sym_number_token2;
	v->a[49984] = anon_sym_DOLLAR_LBRACE;
	v->a[49985] = anon_sym_DOLLAR_LPAREN;
	v->a[49986] = anon_sym_BQUOTE;
	v->a[49987] = sym_word;
	v->a[49988] = 7;
	v->a[49989] = actions(3);
	v->a[49990] = 1;
	v->a[49991] = sym_comment;
	v->a[49992] = actions(1706);
	v->a[49993] = 1;
	v->a[49994] = sym_file_descriptor;
	v->a[49995] = actions(1709);
	v->a[49996] = 1;
	v->a[49997] = sym_variable_name;
	v->a[49998] = actions(1837);
	v->a[49999] = 1;
	small_parse_table_2500(v);
}

/* EOF small_parse_table_499.c */
