/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2159.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10795(t_small_parse_table_array *v)
{
	v->a[215900] = actions(5407);
	v->a[215901] = 1;
	v->a[215902] = anon_sym_DOLLAR;
	v->a[215903] = actions(5411);
	v->a[215904] = 1;
	v->a[215905] = anon_sym_DQUOTE;
	v->a[215906] = actions(5415);
	v->a[215907] = 1;
	v->a[215908] = aux_sym_number_token1;
	v->a[215909] = actions(5417);
	v->a[215910] = 1;
	v->a[215911] = aux_sym_number_token2;
	v->a[215912] = actions(5419);
	v->a[215913] = 1;
	v->a[215914] = anon_sym_DOLLAR_LBRACE;
	v->a[215915] = actions(5421);
	v->a[215916] = 1;
	v->a[215917] = anon_sym_DOLLAR_LPAREN;
	v->a[215918] = actions(5423);
	v->a[215919] = 1;
	small_parse_table_10796(v);
}

void	small_parse_table_10796(t_small_parse_table_array *v)
{
	v->a[215920] = anon_sym_BQUOTE;
	v->a[215921] = actions(5425);
	v->a[215922] = 1;
	v->a[215923] = anon_sym_DOLLAR_BQUOTE;
	v->a[215924] = actions(5431);
	v->a[215925] = 1;
	v->a[215926] = sym__brace_start;
	v->a[215927] = actions(9958);
	v->a[215928] = 1;
	v->a[215929] = sym_word;
	v->a[215930] = actions(9966);
	v->a[215931] = 1;
	v->a[215932] = sym__comment_word;
	v->a[215933] = actions(5403);
	v->a[215934] = 2;
	v->a[215935] = anon_sym_LPAREN_LPAREN;
	v->a[215936] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[215937] = actions(5427);
	v->a[215938] = 2;
	v->a[215939] = anon_sym_LT_LPAREN;
	small_parse_table_10797(v);
}

void	small_parse_table_10797(t_small_parse_table_array *v)
{
	v->a[215940] = anon_sym_GT_LPAREN;
	v->a[215941] = actions(9962);
	v->a[215942] = 2;
	v->a[215943] = sym_test_operator;
	v->a[215944] = sym__special_character;
	v->a[215945] = actions(9964);
	v->a[215946] = 3;
	v->a[215947] = sym__bare_dollar;
	v->a[215948] = sym_raw_string;
	v->a[215949] = sym_ansi_c_string;
	v->a[215950] = state(5541);
	v->a[215951] = 9;
	v->a[215952] = sym_arithmetic_expansion;
	v->a[215953] = sym_brace_expression;
	v->a[215954] = sym_string;
	v->a[215955] = sym_translated_string;
	v->a[215956] = sym_number;
	v->a[215957] = sym_simple_expansion;
	v->a[215958] = sym_expansion;
	v->a[215959] = sym_command_substitution;
	small_parse_table_10798(v);
}

void	small_parse_table_10798(t_small_parse_table_array *v)
{
	v->a[215960] = sym_process_substitution;
	v->a[215961] = 18;
	v->a[215962] = actions(3);
	v->a[215963] = 1;
	v->a[215964] = sym_comment;
	v->a[215965] = actions(4633);
	v->a[215966] = 1;
	v->a[215967] = anon_sym_DOLLAR_LBRACK;
	v->a[215968] = actions(4635);
	v->a[215969] = 1;
	v->a[215970] = anon_sym_DOLLAR;
	v->a[215971] = actions(4639);
	v->a[215972] = 1;
	v->a[215973] = anon_sym_DQUOTE;
	v->a[215974] = actions(4643);
	v->a[215975] = 1;
	v->a[215976] = aux_sym_number_token1;
	v->a[215977] = actions(4645);
	v->a[215978] = 1;
	v->a[215979] = aux_sym_number_token2;
	small_parse_table_10799(v);
}

void	small_parse_table_10799(t_small_parse_table_array *v)
{
	v->a[215980] = actions(4647);
	v->a[215981] = 1;
	v->a[215982] = anon_sym_DOLLAR_LBRACE;
	v->a[215983] = actions(4649);
	v->a[215984] = 1;
	v->a[215985] = anon_sym_DOLLAR_LPAREN;
	v->a[215986] = actions(4651);
	v->a[215987] = 1;
	v->a[215988] = anon_sym_BQUOTE;
	v->a[215989] = actions(4653);
	v->a[215990] = 1;
	v->a[215991] = anon_sym_DOLLAR_BQUOTE;
	v->a[215992] = actions(4659);
	v->a[215993] = 1;
	v->a[215994] = sym__brace_start;
	v->a[215995] = actions(9330);
	v->a[215996] = 1;
	v->a[215997] = sym_word;
	v->a[215998] = actions(9338);
	v->a[215999] = 1;
	small_parse_table_10800(v);
}

/* EOF small_parse_table_2159.c */
