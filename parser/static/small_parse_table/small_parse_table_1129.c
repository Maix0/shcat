/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1129.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5645(t_small_parse_table_array *v)
{
	v->a[112900] = sym_brace_expression;
	v->a[112901] = sym_string;
	v->a[112902] = sym_number;
	v->a[112903] = sym_simple_expansion;
	v->a[112904] = sym_expansion;
	v->a[112905] = sym_command_substitution;
	v->a[112906] = 16;
	v->a[112907] = actions(3);
	v->a[112908] = 1;
	v->a[112909] = sym_comment;
	v->a[112910] = actions(5645);
	v->a[112911] = 1;
	v->a[112912] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112913] = actions(5651);
	v->a[112914] = 1;
	v->a[112915] = anon_sym_DQUOTE;
	v->a[112916] = actions(5655);
	v->a[112917] = 1;
	v->a[112918] = aux_sym_number_token1;
	v->a[112919] = actions(5657);
	small_parse_table_5646(v);
}

void	small_parse_table_5646(t_small_parse_table_array *v)
{
	v->a[112920] = 1;
	v->a[112921] = aux_sym_number_token2;
	v->a[112922] = actions(5659);
	v->a[112923] = 1;
	v->a[112924] = anon_sym_DOLLAR_LBRACE;
	v->a[112925] = actions(5661);
	v->a[112926] = 1;
	v->a[112927] = anon_sym_DOLLAR_LPAREN;
	v->a[112928] = actions(5663);
	v->a[112929] = 1;
	v->a[112930] = anon_sym_BQUOTE;
	v->a[112931] = actions(5665);
	v->a[112932] = 1;
	v->a[112933] = anon_sym_DOLLAR_BQUOTE;
	v->a[112934] = actions(5671);
	v->a[112935] = 1;
	v->a[112936] = sym__brace_start;
	v->a[112937] = actions(6493);
	v->a[112938] = 1;
	v->a[112939] = sym_word;
	small_parse_table_5647(v);
}

void	small_parse_table_5647(t_small_parse_table_array *v)
{
	v->a[112940] = actions(6495);
	v->a[112941] = 1;
	v->a[112942] = sym__special_character;
	v->a[112943] = actions(6499);
	v->a[112944] = 1;
	v->a[112945] = sym__comment_word;
	v->a[112946] = actions(6501);
	v->a[112947] = 1;
	v->a[112948] = anon_sym_DOLLAR;
	v->a[112949] = actions(6497);
	v->a[112950] = 3;
	v->a[112951] = sym_test_operator;
	v->a[112952] = sym__bare_dollar;
	v->a[112953] = sym_raw_string;
	v->a[112954] = state(2652);
	v->a[112955] = 7;
	v->a[112956] = sym_arithmetic_expansion;
	v->a[112957] = sym_brace_expression;
	v->a[112958] = sym_string;
	v->a[112959] = sym_number;
	small_parse_table_5648(v);
}

void	small_parse_table_5648(t_small_parse_table_array *v)
{
	v->a[112960] = sym_simple_expansion;
	v->a[112961] = sym_expansion;
	v->a[112962] = sym_command_substitution;
	v->a[112963] = 16;
	v->a[112964] = actions(3);
	v->a[112965] = 1;
	v->a[112966] = sym_comment;
	v->a[112967] = actions(2186);
	v->a[112968] = 1;
	v->a[112969] = aux_sym_number_token1;
	v->a[112970] = actions(2188);
	v->a[112971] = 1;
	v->a[112972] = aux_sym_number_token2;
	v->a[112973] = actions(2192);
	v->a[112974] = 1;
	v->a[112975] = anon_sym_DOLLAR_LPAREN;
	v->a[112976] = actions(2200);
	v->a[112977] = 1;
	v->a[112978] = sym__brace_start;
	v->a[112979] = actions(6503);
	small_parse_table_5649(v);
}

void	small_parse_table_5649(t_small_parse_table_array *v)
{
	v->a[112980] = 1;
	v->a[112981] = sym_word;
	v->a[112982] = actions(6505);
	v->a[112983] = 1;
	v->a[112984] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112985] = actions(6507);
	v->a[112986] = 1;
	v->a[112987] = anon_sym_DOLLAR;
	v->a[112988] = actions(6509);
	v->a[112989] = 1;
	v->a[112990] = sym__special_character;
	v->a[112991] = actions(6511);
	v->a[112992] = 1;
	v->a[112993] = anon_sym_DQUOTE;
	v->a[112994] = actions(6515);
	v->a[112995] = 1;
	v->a[112996] = anon_sym_DOLLAR_LBRACE;
	v->a[112997] = actions(6517);
	v->a[112998] = 1;
	v->a[112999] = anon_sym_BQUOTE;
	small_parse_table_5650(v);
}

/* EOF small_parse_table_1129.c */
