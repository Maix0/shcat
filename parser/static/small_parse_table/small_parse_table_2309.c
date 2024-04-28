/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2309.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11545(t_small_parse_table_array *v)
{
	v->a[230900] = sym_comment;
	v->a[230901] = actions(5616);
	v->a[230902] = 1;
	v->a[230903] = aux_sym_number_token1;
	v->a[230904] = actions(5618);
	v->a[230905] = 1;
	v->a[230906] = aux_sym_number_token2;
	v->a[230907] = actions(5622);
	v->a[230908] = 1;
	v->a[230909] = anon_sym_DOLLAR_LPAREN;
	v->a[230910] = actions(5632);
	v->a[230911] = 1;
	v->a[230912] = sym__brace_start;
	v->a[230913] = actions(8944);
	v->a[230914] = 1;
	v->a[230915] = anon_sym_DOLLAR_LBRACK;
	v->a[230916] = actions(8948);
	v->a[230917] = 1;
	v->a[230918] = anon_sym_DQUOTE;
	v->a[230919] = actions(8952);
	small_parse_table_11546(v);
}

void	small_parse_table_11546(t_small_parse_table_array *v)
{
	v->a[230920] = 1;
	v->a[230921] = anon_sym_DOLLAR_LBRACE;
	v->a[230922] = actions(8954);
	v->a[230923] = 1;
	v->a[230924] = anon_sym_BQUOTE;
	v->a[230925] = actions(8956);
	v->a[230926] = 1;
	v->a[230927] = anon_sym_DOLLAR_BQUOTE;
	v->a[230928] = actions(10290);
	v->a[230929] = 1;
	v->a[230930] = sym_word;
	v->a[230931] = actions(10296);
	v->a[230932] = 1;
	v->a[230933] = sym__comment_word;
	v->a[230934] = actions(10914);
	v->a[230935] = 1;
	v->a[230936] = anon_sym_DOLLAR;
	v->a[230937] = actions(8942);
	v->a[230938] = 2;
	v->a[230939] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11547(v);
}

void	small_parse_table_11547(t_small_parse_table_array *v)
{
	v->a[230940] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[230941] = actions(8958);
	v->a[230942] = 2;
	v->a[230943] = anon_sym_LT_LPAREN;
	v->a[230944] = anon_sym_GT_LPAREN;
	v->a[230945] = actions(10292);
	v->a[230946] = 2;
	v->a[230947] = sym_test_operator;
	v->a[230948] = sym__special_character;
	v->a[230949] = actions(10294);
	v->a[230950] = 3;
	v->a[230951] = sym__bare_dollar;
	v->a[230952] = sym_raw_string;
	v->a[230953] = sym_ansi_c_string;
	v->a[230954] = state(3415);
	v->a[230955] = 9;
	v->a[230956] = sym_arithmetic_expansion;
	v->a[230957] = sym_brace_expression;
	v->a[230958] = sym_string;
	v->a[230959] = sym_translated_string;
	small_parse_table_11548(v);
}

void	small_parse_table_11548(t_small_parse_table_array *v)
{
	v->a[230960] = sym_number;
	v->a[230961] = sym_simple_expansion;
	v->a[230962] = sym_expansion;
	v->a[230963] = sym_command_substitution;
	v->a[230964] = sym_process_substitution;
	v->a[230965] = 21;
	v->a[230966] = actions(71);
	v->a[230967] = 1;
	v->a[230968] = sym_comment;
	v->a[230969] = actions(3064);
	v->a[230970] = 1;
	v->a[230971] = sym_variable_name;
	v->a[230972] = actions(9278);
	v->a[230973] = 1;
	v->a[230974] = anon_sym_LPAREN;
	v->a[230975] = actions(9280);
	v->a[230976] = 1;
	v->a[230977] = anon_sym_BANG;
	v->a[230978] = actions(9286);
	v->a[230979] = 1;
	small_parse_table_11549(v);
}

void	small_parse_table_11549(t_small_parse_table_array *v)
{
	v->a[230980] = anon_sym_TILDE;
	v->a[230981] = actions(9288);
	v->a[230982] = 1;
	v->a[230983] = anon_sym_DOLLAR;
	v->a[230984] = actions(9290);
	v->a[230985] = 1;
	v->a[230986] = anon_sym_DQUOTE;
	v->a[230987] = actions(9292);
	v->a[230988] = 1;
	v->a[230989] = aux_sym_number_token1;
	v->a[230990] = actions(9294);
	v->a[230991] = 1;
	v->a[230992] = aux_sym_number_token2;
	v->a[230993] = actions(9296);
	v->a[230994] = 1;
	v->a[230995] = anon_sym_DOLLAR_LBRACE;
	v->a[230996] = actions(9298);
	v->a[230997] = 1;
	v->a[230998] = anon_sym_DOLLAR_LPAREN;
	v->a[230999] = actions(9300);
	small_parse_table_11550(v);
}

/* EOF small_parse_table_2309.c */
