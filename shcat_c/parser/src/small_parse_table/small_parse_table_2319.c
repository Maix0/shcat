/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2319.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11595(t_small_parse_table_array *v)
{
	v->a[231900] = actions(8180);
	v->a[231901] = 1;
	v->a[231902] = anon_sym_DOLLAR;
	v->a[231903] = actions(8182);
	v->a[231904] = 1;
	v->a[231905] = sym__special_character;
	v->a[231906] = actions(8184);
	v->a[231907] = 1;
	v->a[231908] = anon_sym_DQUOTE;
	v->a[231909] = actions(8188);
	v->a[231910] = 1;
	v->a[231911] = aux_sym_number_token1;
	v->a[231912] = actions(8190);
	v->a[231913] = 1;
	v->a[231914] = aux_sym_number_token2;
	v->a[231915] = actions(8192);
	v->a[231916] = 1;
	v->a[231917] = anon_sym_DOLLAR_LBRACE;
	v->a[231918] = actions(8194);
	v->a[231919] = 1;
	small_parse_table_11596(v);
}

void	small_parse_table_11596(t_small_parse_table_array *v)
{
	v->a[231920] = anon_sym_DOLLAR_LPAREN;
	v->a[231921] = actions(8196);
	v->a[231922] = 1;
	v->a[231923] = anon_sym_BQUOTE;
	v->a[231924] = actions(8198);
	v->a[231925] = 1;
	v->a[231926] = anon_sym_DOLLAR_BQUOTE;
	v->a[231927] = actions(8208);
	v->a[231928] = 1;
	v->a[231929] = sym__brace_start;
	v->a[231930] = actions(10968);
	v->a[231931] = 1;
	v->a[231932] = sym_word;
	v->a[231933] = actions(10972);
	v->a[231934] = 1;
	v->a[231935] = sym_test_operator;
	v->a[231936] = state(1741);
	v->a[231937] = 1;
	v->a[231938] = aux_sym__literal_repeat1;
	v->a[231939] = state(1958);
	small_parse_table_11597(v);
}

void	small_parse_table_11597(t_small_parse_table_array *v)
{
	v->a[231940] = 1;
	v->a[231941] = sym_concatenation;
	v->a[231942] = actions(8174);
	v->a[231943] = 2;
	v->a[231944] = anon_sym_LPAREN_LPAREN;
	v->a[231945] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[231946] = actions(8200);
	v->a[231947] = 2;
	v->a[231948] = anon_sym_LT_LPAREN;
	v->a[231949] = anon_sym_GT_LPAREN;
	v->a[231950] = actions(10970);
	v->a[231951] = 2;
	v->a[231952] = sym_raw_string;
	v->a[231953] = sym_ansi_c_string;
	v->a[231954] = state(2283);
	v->a[231955] = 9;
	v->a[231956] = sym_arithmetic_expansion;
	v->a[231957] = sym_brace_expression;
	v->a[231958] = sym_string;
	v->a[231959] = sym_translated_string;
	small_parse_table_11598(v);
}

void	small_parse_table_11598(t_small_parse_table_array *v)
{
	v->a[231960] = sym_number;
	v->a[231961] = sym_simple_expansion;
	v->a[231962] = sym_expansion;
	v->a[231963] = sym_command_substitution;
	v->a[231964] = sym_process_substitution;
	v->a[231965] = 21;
	v->a[231966] = actions(71);
	v->a[231967] = 1;
	v->a[231968] = sym_comment;
	v->a[231969] = actions(9364);
	v->a[231970] = 1;
	v->a[231971] = anon_sym_LPAREN;
	v->a[231972] = actions(9366);
	v->a[231973] = 1;
	v->a[231974] = anon_sym_BANG;
	v->a[231975] = actions(9372);
	v->a[231976] = 1;
	v->a[231977] = anon_sym_TILDE;
	v->a[231978] = actions(9374);
	v->a[231979] = 1;
	small_parse_table_11599(v);
}

void	small_parse_table_11599(t_small_parse_table_array *v)
{
	v->a[231980] = anon_sym_DOLLAR;
	v->a[231981] = actions(9376);
	v->a[231982] = 1;
	v->a[231983] = anon_sym_DQUOTE;
	v->a[231984] = actions(9378);
	v->a[231985] = 1;
	v->a[231986] = aux_sym_number_token1;
	v->a[231987] = actions(9380);
	v->a[231988] = 1;
	v->a[231989] = aux_sym_number_token2;
	v->a[231990] = actions(9382);
	v->a[231991] = 1;
	v->a[231992] = anon_sym_DOLLAR_LBRACE;
	v->a[231993] = actions(9384);
	v->a[231994] = 1;
	v->a[231995] = anon_sym_DOLLAR_LPAREN;
	v->a[231996] = actions(9386);
	v->a[231997] = 1;
	v->a[231998] = anon_sym_BQUOTE;
	v->a[231999] = actions(9388);
	small_parse_table_11600(v);
}

/* EOF small_parse_table_2319.c */
