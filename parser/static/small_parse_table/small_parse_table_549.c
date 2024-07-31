/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_549.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2745(t_small_parse_table_array *v)
{
	v->a[54900] = sym_simple_expansion;
	v->a[54901] = sym_expansion;
	v->a[54902] = sym_command_substitution;
	v->a[54903] = 10;
	v->a[54904] = actions(3);
	v->a[54905] = 1;
	v->a[54906] = sym_comment;
	v->a[54907] = actions(1922);
	v->a[54908] = 1;
	v->a[54909] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54910] = actions(1926);
	v->a[54911] = 1;
	v->a[54912] = anon_sym_DQUOTE;
	v->a[54913] = actions(1928);
	v->a[54914] = 1;
	v->a[54915] = anon_sym_DOLLAR_LBRACE;
	v->a[54916] = actions(1930);
	v->a[54917] = 1;
	v->a[54918] = anon_sym_DOLLAR_LPAREN;
	v->a[54919] = actions(1932);
	small_parse_table_2746(v);
}

void	small_parse_table_2746(t_small_parse_table_array *v)
{
	v->a[54920] = 1;
	v->a[54921] = anon_sym_BQUOTE;
	v->a[54922] = actions(1934);
	v->a[54923] = 1;
	v->a[54924] = sym__bare_dollar;
	v->a[54925] = actions(2087);
	v->a[54926] = 1;
	v->a[54927] = anon_sym_DOLLAR;
	v->a[54928] = actions(1920);
	v->a[54929] = 5;
	v->a[54930] = aux_sym_concatenation_token1;
	v->a[54931] = sym_raw_string;
	v->a[54932] = sym_number;
	v->a[54933] = sym__comment_word;
	v->a[54934] = sym_word;
	v->a[54935] = state(810);
	v->a[54936] = 5;
	v->a[54937] = sym_arithmetic_expansion;
	v->a[54938] = sym_string;
	v->a[54939] = sym_simple_expansion;
	small_parse_table_2747(v);
}

void	small_parse_table_2747(t_small_parse_table_array *v)
{
	v->a[54940] = sym_expansion;
	v->a[54941] = sym_command_substitution;
	v->a[54942] = 10;
	v->a[54943] = actions(3);
	v->a[54944] = 1;
	v->a[54945] = sym_comment;
	v->a[54946] = actions(2057);
	v->a[54947] = 1;
	v->a[54948] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54949] = actions(2061);
	v->a[54950] = 1;
	v->a[54951] = anon_sym_DQUOTE;
	v->a[54952] = actions(2063);
	v->a[54953] = 1;
	v->a[54954] = anon_sym_DOLLAR_LBRACE;
	v->a[54955] = actions(2065);
	v->a[54956] = 1;
	v->a[54957] = anon_sym_DOLLAR_LPAREN;
	v->a[54958] = actions(2067);
	v->a[54959] = 1;
	small_parse_table_2748(v);
}

void	small_parse_table_2748(t_small_parse_table_array *v)
{
	v->a[54960] = anon_sym_BQUOTE;
	v->a[54961] = actions(2069);
	v->a[54962] = 1;
	v->a[54963] = sym__bare_dollar;
	v->a[54964] = actions(2181);
	v->a[54965] = 1;
	v->a[54966] = anon_sym_DOLLAR;
	v->a[54967] = actions(2055);
	v->a[54968] = 5;
	v->a[54969] = aux_sym_concatenation_token1;
	v->a[54970] = sym_raw_string;
	v->a[54971] = sym_number;
	v->a[54972] = sym__comment_word;
	v->a[54973] = sym_word;
	v->a[54974] = state(932);
	v->a[54975] = 5;
	v->a[54976] = sym_arithmetic_expansion;
	v->a[54977] = sym_string;
	v->a[54978] = sym_simple_expansion;
	v->a[54979] = sym_expansion;
	small_parse_table_2749(v);
}

void	small_parse_table_2749(t_small_parse_table_array *v)
{
	v->a[54980] = sym_command_substitution;
	v->a[54981] = 12;
	v->a[54982] = actions(3);
	v->a[54983] = 1;
	v->a[54984] = sym_comment;
	v->a[54985] = actions(2015);
	v->a[54986] = 1;
	v->a[54987] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54988] = actions(2017);
	v->a[54989] = 1;
	v->a[54990] = anon_sym_DOLLAR;
	v->a[54991] = actions(2019);
	v->a[54992] = 1;
	v->a[54993] = anon_sym_DQUOTE;
	v->a[54994] = actions(2021);
	v->a[54995] = 1;
	v->a[54996] = anon_sym_DOLLAR_LBRACE;
	v->a[54997] = actions(2023);
	v->a[54998] = 1;
	v->a[54999] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2750(v);
}

/* EOF small_parse_table_549.c */
