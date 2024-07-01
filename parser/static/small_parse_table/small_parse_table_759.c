/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_759.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3795(t_small_parse_table_array *v)
{
	v->a[75900] = sym_arithmetic_expansion;
	v->a[75901] = sym_string;
	v->a[75902] = sym_simple_expansion;
	v->a[75903] = sym_expansion;
	v->a[75904] = sym_command_substitution;
	v->a[75905] = 3;
	v->a[75906] = actions(870);
	v->a[75907] = 1;
	v->a[75908] = sym_comment;
	v->a[75909] = actions(1285);
	v->a[75910] = 6;
	v->a[75911] = anon_sym_PIPE;
	v->a[75912] = anon_sym_LT;
	v->a[75913] = anon_sym_GT;
	v->a[75914] = anon_sym_LT_AMP;
	v->a[75915] = anon_sym_GT_AMP;
	v->a[75916] = anon_sym_LT_LT;
	v->a[75917] = actions(1283);
	v->a[75918] = 11;
	v->a[75919] = sym_file_descriptor;
	small_parse_table_3796(v);
}

void	small_parse_table_3796(t_small_parse_table_array *v)
{
	v->a[75920] = sym__concat;
	v->a[75921] = sym_variable_name;
	v->a[75922] = anon_sym_AMP_AMP;
	v->a[75923] = anon_sym_PIPE_PIPE;
	v->a[75924] = anon_sym_GT_GT;
	v->a[75925] = anon_sym_GT_PIPE;
	v->a[75926] = anon_sym_LT_AMP_DASH;
	v->a[75927] = anon_sym_GT_AMP_DASH;
	v->a[75928] = anon_sym_LT_LT_DASH;
	v->a[75929] = aux_sym_concatenation_token1;
	v->a[75930] = 8;
	v->a[75931] = actions(3);
	v->a[75932] = 1;
	v->a[75933] = sym_comment;
	v->a[75934] = actions(2546);
	v->a[75935] = 1;
	v->a[75936] = sym_file_descriptor;
	v->a[75937] = actions(2559);
	v->a[75938] = 1;
	v->a[75939] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3797(v);
}

void	small_parse_table_3797(t_small_parse_table_array *v)
{
	v->a[75940] = actions(754);
	v->a[75941] = 2;
	v->a[75942] = anon_sym_LT_LT;
	v->a[75943] = anon_sym_LT_LT_DASH;
	v->a[75944] = actions(1496);
	v->a[75945] = 2;
	v->a[75946] = anon_sym_AMP_AMP;
	v->a[75947] = anon_sym_PIPE_PIPE;
	v->a[75948] = actions(2542);
	v->a[75949] = 2;
	v->a[75950] = anon_sym_LT_AMP_DASH;
	v->a[75951] = anon_sym_GT_AMP_DASH;
	v->a[75952] = state(1408);
	v->a[75953] = 3;
	v->a[75954] = sym_file_redirect;
	v->a[75955] = sym_heredoc_redirect;
	v->a[75956] = aux_sym_redirected_statement_repeat1;
	v->a[75957] = actions(2540);
	v->a[75958] = 6;
	v->a[75959] = anon_sym_LT;
	small_parse_table_3798(v);
}

void	small_parse_table_3798(t_small_parse_table_array *v)
{
	v->a[75960] = anon_sym_GT;
	v->a[75961] = anon_sym_GT_GT;
	v->a[75962] = anon_sym_LT_AMP;
	v->a[75963] = anon_sym_GT_AMP;
	v->a[75964] = anon_sym_GT_PIPE;
	v->a[75965] = 10;
	v->a[75966] = actions(3);
	v->a[75967] = 1;
	v->a[75968] = sym_comment;
	v->a[75969] = actions(2663);
	v->a[75970] = 1;
	v->a[75971] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75972] = actions(2667);
	v->a[75973] = 1;
	v->a[75974] = anon_sym_DQUOTE;
	v->a[75975] = actions(2669);
	v->a[75976] = 1;
	v->a[75977] = anon_sym_DOLLAR_LBRACE;
	v->a[75978] = actions(2671);
	v->a[75979] = 1;
	small_parse_table_3799(v);
}

void	small_parse_table_3799(t_small_parse_table_array *v)
{
	v->a[75980] = anon_sym_DOLLAR_LPAREN;
	v->a[75981] = actions(2673);
	v->a[75982] = 1;
	v->a[75983] = anon_sym_BQUOTE;
	v->a[75984] = actions(2675);
	v->a[75985] = 1;
	v->a[75986] = sym__bare_dollar;
	v->a[75987] = actions(2830);
	v->a[75988] = 1;
	v->a[75989] = anon_sym_DOLLAR;
	v->a[75990] = actions(2661);
	v->a[75991] = 5;
	v->a[75992] = aux_sym_concatenation_token1;
	v->a[75993] = sym_raw_string;
	v->a[75994] = sym_number;
	v->a[75995] = sym__comment_word;
	v->a[75996] = sym_word;
	v->a[75997] = state(990);
	v->a[75998] = 5;
	v->a[75999] = sym_arithmetic_expansion;
	small_parse_table_3800(v);
}

/* EOF small_parse_table_759.c */
