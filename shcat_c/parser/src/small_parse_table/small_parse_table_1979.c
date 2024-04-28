/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1979.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9895(t_small_parse_table_array *v)
{
	v->a[197900] = actions(8930);
	v->a[197901] = 1;
	v->a[197902] = anon_sym_DQUOTE;
	v->a[197903] = actions(8934);
	v->a[197904] = 1;
	v->a[197905] = anon_sym_DOLLAR_LBRACE;
	v->a[197906] = actions(8936);
	v->a[197907] = 1;
	v->a[197908] = anon_sym_BQUOTE;
	v->a[197909] = actions(8938);
	v->a[197910] = 1;
	v->a[197911] = anon_sym_DOLLAR_BQUOTE;
	v->a[197912] = state(2161);
	v->a[197913] = 1;
	v->a[197914] = aux_sym__literal_repeat1;
	v->a[197915] = actions(8924);
	v->a[197916] = 2;
	v->a[197917] = anon_sym_LPAREN_LPAREN;
	v->a[197918] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[197919] = actions(8932);
	small_parse_table_9896(v);
}

void	small_parse_table_9896(t_small_parse_table_array *v)
{
	v->a[197920] = 2;
	v->a[197921] = sym_raw_string;
	v->a[197922] = sym_ansi_c_string;
	v->a[197923] = actions(8940);
	v->a[197924] = 2;
	v->a[197925] = anon_sym_LT_LPAREN;
	v->a[197926] = anon_sym_GT_LPAREN;
	v->a[197927] = state(862);
	v->a[197928] = 2;
	v->a[197929] = sym_concatenation;
	v->a[197930] = aux_sym_for_statement_repeat1;
	v->a[197931] = state(2422);
	v->a[197932] = 9;
	v->a[197933] = sym_arithmetic_expansion;
	v->a[197934] = sym_brace_expression;
	v->a[197935] = sym_string;
	v->a[197936] = sym_translated_string;
	v->a[197937] = sym_number;
	v->a[197938] = sym_simple_expansion;
	v->a[197939] = sym_expansion;
	small_parse_table_9897(v);
}

void	small_parse_table_9897(t_small_parse_table_array *v)
{
	v->a[197940] = sym_command_substitution;
	v->a[197941] = sym_process_substitution;
	v->a[197942] = 20;
	v->a[197943] = actions(71);
	v->a[197944] = 1;
	v->a[197945] = sym_comment;
	v->a[197946] = actions(3612);
	v->a[197947] = 1;
	v->a[197948] = anon_sym_DOLLAR;
	v->a[197949] = actions(3616);
	v->a[197950] = 1;
	v->a[197951] = aux_sym_number_token1;
	v->a[197952] = actions(3618);
	v->a[197953] = 1;
	v->a[197954] = aux_sym_number_token2;
	v->a[197955] = actions(3622);
	v->a[197956] = 1;
	v->a[197957] = anon_sym_DOLLAR_LPAREN;
	v->a[197958] = actions(3632);
	v->a[197959] = 1;
	small_parse_table_9898(v);
}

void	small_parse_table_9898(t_small_parse_table_array *v)
{
	v->a[197960] = sym__brace_start;
	v->a[197961] = actions(4975);
	v->a[197962] = 1;
	v->a[197963] = sym_word;
	v->a[197964] = actions(4979);
	v->a[197965] = 1;
	v->a[197966] = sym_test_operator;
	v->a[197967] = actions(8850);
	v->a[197968] = 1;
	v->a[197969] = anon_sym_DOLLAR_LBRACK;
	v->a[197970] = actions(8852);
	v->a[197971] = 1;
	v->a[197972] = sym__special_character;
	v->a[197973] = actions(8854);
	v->a[197974] = 1;
	v->a[197975] = anon_sym_DQUOTE;
	v->a[197976] = actions(8858);
	v->a[197977] = 1;
	v->a[197978] = anon_sym_DOLLAR_LBRACE;
	v->a[197979] = actions(8860);
	small_parse_table_9899(v);
}

void	small_parse_table_9899(t_small_parse_table_array *v)
{
	v->a[197980] = 1;
	v->a[197981] = anon_sym_BQUOTE;
	v->a[197982] = actions(8862);
	v->a[197983] = 1;
	v->a[197984] = anon_sym_DOLLAR_BQUOTE;
	v->a[197985] = state(2270);
	v->a[197986] = 1;
	v->a[197987] = aux_sym__literal_repeat1;
	v->a[197988] = actions(8848);
	v->a[197989] = 2;
	v->a[197990] = anon_sym_LPAREN_LPAREN;
	v->a[197991] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[197992] = actions(8856);
	v->a[197993] = 2;
	v->a[197994] = sym_raw_string;
	v->a[197995] = sym_ansi_c_string;
	v->a[197996] = actions(8864);
	v->a[197997] = 2;
	v->a[197998] = anon_sym_LT_LPAREN;
	v->a[197999] = anon_sym_GT_LPAREN;
	small_parse_table_9900(v);
}

/* EOF small_parse_table_1979.c */
