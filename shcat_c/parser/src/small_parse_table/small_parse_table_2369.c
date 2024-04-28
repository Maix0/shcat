/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2369.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11845(t_small_parse_table_array *v)
{
	v->a[236900] = aux_sym_number_token2;
	v->a[236901] = actions(8154);
	v->a[236902] = 1;
	v->a[236903] = anon_sym_DOLLAR_LBRACE;
	v->a[236904] = actions(8156);
	v->a[236905] = 1;
	v->a[236906] = anon_sym_DOLLAR_LPAREN;
	v->a[236907] = actions(8158);
	v->a[236908] = 1;
	v->a[236909] = anon_sym_BQUOTE;
	v->a[236910] = actions(8160);
	v->a[236911] = 1;
	v->a[236912] = anon_sym_DOLLAR_BQUOTE;
	v->a[236913] = actions(8170);
	v->a[236914] = 1;
	v->a[236915] = sym__brace_start;
	v->a[236916] = actions(10564);
	v->a[236917] = 1;
	v->a[236918] = sym_word;
	v->a[236919] = actions(10570);
	small_parse_table_11846(v);
}

void	small_parse_table_11846(t_small_parse_table_array *v)
{
	v->a[236920] = 1;
	v->a[236921] = sym__comment_word;
	v->a[236922] = actions(11152);
	v->a[236923] = 1;
	v->a[236924] = anon_sym_DOLLAR;
	v->a[236925] = actions(8136);
	v->a[236926] = 2;
	v->a[236927] = anon_sym_LPAREN_LPAREN;
	v->a[236928] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[236929] = actions(8162);
	v->a[236930] = 2;
	v->a[236931] = anon_sym_LT_LPAREN;
	v->a[236932] = anon_sym_GT_LPAREN;
	v->a[236933] = actions(10566);
	v->a[236934] = 2;
	v->a[236935] = sym_test_operator;
	v->a[236936] = sym__special_character;
	v->a[236937] = actions(10568);
	v->a[236938] = 3;
	v->a[236939] = sym__bare_dollar;
	small_parse_table_11847(v);
}

void	small_parse_table_11847(t_small_parse_table_array *v)
{
	v->a[236940] = sym_raw_string;
	v->a[236941] = sym_ansi_c_string;
	v->a[236942] = state(4526);
	v->a[236943] = 9;
	v->a[236944] = sym_arithmetic_expansion;
	v->a[236945] = sym_brace_expression;
	v->a[236946] = sym_string;
	v->a[236947] = sym_translated_string;
	v->a[236948] = sym_number;
	v->a[236949] = sym_simple_expansion;
	v->a[236950] = sym_expansion;
	v->a[236951] = sym_command_substitution;
	v->a[236952] = sym_process_substitution;
	v->a[236953] = 20;
	v->a[236954] = actions(71);
	v->a[236955] = 1;
	v->a[236956] = sym_comment;
	v->a[236957] = actions(4080);
	v->a[236958] = 1;
	v->a[236959] = anon_sym_DOLLAR;
	small_parse_table_11848(v);
}

void	small_parse_table_11848(t_small_parse_table_array *v)
{
	v->a[236960] = actions(4086);
	v->a[236961] = 1;
	v->a[236962] = aux_sym_number_token1;
	v->a[236963] = actions(4088);
	v->a[236964] = 1;
	v->a[236965] = aux_sym_number_token2;
	v->a[236966] = actions(4092);
	v->a[236967] = 1;
	v->a[236968] = anon_sym_DOLLAR_LPAREN;
	v->a[236969] = actions(4102);
	v->a[236970] = 1;
	v->a[236971] = sym__brace_start;
	v->a[236972] = actions(9310);
	v->a[236973] = 1;
	v->a[236974] = anon_sym_DOLLAR_LBRACK;
	v->a[236975] = actions(9316);
	v->a[236976] = 1;
	v->a[236977] = anon_sym_DQUOTE;
	v->a[236978] = actions(9320);
	v->a[236979] = 1;
	small_parse_table_11849(v);
}

void	small_parse_table_11849(t_small_parse_table_array *v)
{
	v->a[236980] = anon_sym_DOLLAR_LBRACE;
	v->a[236981] = actions(9322);
	v->a[236982] = 1;
	v->a[236983] = anon_sym_BQUOTE;
	v->a[236984] = actions(9324);
	v->a[236985] = 1;
	v->a[236986] = anon_sym_DOLLAR_BQUOTE;
	v->a[236987] = actions(11154);
	v->a[236988] = 1;
	v->a[236989] = sym_word;
	v->a[236990] = actions(11156);
	v->a[236991] = 1;
	v->a[236992] = sym__special_character;
	v->a[236993] = actions(11160);
	v->a[236994] = 1;
	v->a[236995] = sym_test_operator;
	v->a[236996] = state(4500);
	v->a[236997] = 1;
	v->a[236998] = aux_sym__literal_repeat1;
	v->a[236999] = state(5029);
	small_parse_table_11850(v);
}

/* EOF small_parse_table_2369.c */
