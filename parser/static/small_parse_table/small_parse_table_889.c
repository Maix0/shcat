/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_889.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4445(t_small_parse_table_array *v)
{
	v->a[88900] = state(1084);
	v->a[88901] = 5;
	v->a[88902] = sym_arithmetic_expansion;
	v->a[88903] = sym_string;
	v->a[88904] = sym_simple_expansion;
	v->a[88905] = sym_expansion;
	v->a[88906] = sym_command_substitution;
	v->a[88907] = 10;
	v->a[88908] = actions(3);
	v->a[88909] = 1;
	v->a[88910] = sym_comment;
	v->a[88911] = actions(1749);
	v->a[88912] = 1;
	v->a[88913] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88914] = actions(1751);
	v->a[88915] = 1;
	v->a[88916] = anon_sym_DOLLAR;
	v->a[88917] = actions(1753);
	v->a[88918] = 1;
	v->a[88919] = anon_sym_DQUOTE;
	small_parse_table_4446(v);
}

void	small_parse_table_4446(t_small_parse_table_array *v)
{
	v->a[88920] = actions(1755);
	v->a[88921] = 1;
	v->a[88922] = anon_sym_DOLLAR_LBRACE;
	v->a[88923] = actions(1757);
	v->a[88924] = 1;
	v->a[88925] = anon_sym_DOLLAR_LPAREN;
	v->a[88926] = actions(1759);
	v->a[88927] = 1;
	v->a[88928] = anon_sym_BQUOTE;
	v->a[88929] = state(865);
	v->a[88930] = 2;
	v->a[88931] = sym_concatenation;
	v->a[88932] = aux_sym_for_statement_repeat1;
	v->a[88933] = actions(1747);
	v->a[88934] = 3;
	v->a[88935] = sym_raw_string;
	v->a[88936] = sym_number;
	v->a[88937] = sym_word;
	v->a[88938] = state(1084);
	v->a[88939] = 5;
	small_parse_table_4447(v);
}

void	small_parse_table_4447(t_small_parse_table_array *v)
{
	v->a[88940] = sym_arithmetic_expansion;
	v->a[88941] = sym_string;
	v->a[88942] = sym_simple_expansion;
	v->a[88943] = sym_expansion;
	v->a[88944] = sym_command_substitution;
	v->a[88945] = 3;
	v->a[88946] = actions(1094);
	v->a[88947] = 1;
	v->a[88948] = sym_comment;
	v->a[88949] = actions(2693);
	v->a[88950] = 7;
	v->a[88951] = anon_sym_PIPE;
	v->a[88952] = anon_sym_LT;
	v->a[88953] = anon_sym_GT;
	v->a[88954] = anon_sym_AMP_GT;
	v->a[88955] = anon_sym_LT_AMP;
	v->a[88956] = anon_sym_GT_AMP;
	v->a[88957] = anon_sym_LT_LT;
	v->a[88958] = actions(2691);
	v->a[88959] = 9;
	small_parse_table_4448(v);
}

void	small_parse_table_4448(t_small_parse_table_array *v)
{
	v->a[88960] = sym_file_descriptor;
	v->a[88961] = anon_sym_AMP_AMP;
	v->a[88962] = anon_sym_PIPE_PIPE;
	v->a[88963] = anon_sym_GT_GT;
	v->a[88964] = anon_sym_AMP_GT_GT;
	v->a[88965] = anon_sym_GT_PIPE;
	v->a[88966] = anon_sym_LT_AMP_DASH;
	v->a[88967] = anon_sym_GT_AMP_DASH;
	v->a[88968] = anon_sym_LT_LT_DASH;
	v->a[88969] = 3;
	v->a[88970] = actions(1094);
	v->a[88971] = 1;
	v->a[88972] = sym_comment;
	v->a[88973] = actions(2728);
	v->a[88974] = 7;
	v->a[88975] = anon_sym_PIPE;
	v->a[88976] = anon_sym_LT;
	v->a[88977] = anon_sym_GT;
	v->a[88978] = anon_sym_AMP_GT;
	v->a[88979] = anon_sym_LT_AMP;
	small_parse_table_4449(v);
}

void	small_parse_table_4449(t_small_parse_table_array *v)
{
	v->a[88980] = anon_sym_GT_AMP;
	v->a[88981] = anon_sym_LT_LT;
	v->a[88982] = actions(2726);
	v->a[88983] = 9;
	v->a[88984] = sym_file_descriptor;
	v->a[88985] = anon_sym_AMP_AMP;
	v->a[88986] = anon_sym_PIPE_PIPE;
	v->a[88987] = anon_sym_GT_GT;
	v->a[88988] = anon_sym_AMP_GT_GT;
	v->a[88989] = anon_sym_GT_PIPE;
	v->a[88990] = anon_sym_LT_AMP_DASH;
	v->a[88991] = anon_sym_GT_AMP_DASH;
	v->a[88992] = anon_sym_LT_LT_DASH;
	v->a[88993] = 10;
	v->a[88994] = actions(3);
	v->a[88995] = 1;
	v->a[88996] = sym_comment;
	v->a[88997] = actions(3172);
	v->a[88998] = 1;
	v->a[88999] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4450(v);
}

/* EOF small_parse_table_889.c */
