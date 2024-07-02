/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_699.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3495(t_small_parse_table_array *v)
{
	v->a[69900] = state(1412);
	v->a[69901] = 5;
	v->a[69902] = sym_arithmetic_expansion;
	v->a[69903] = sym_string;
	v->a[69904] = sym_simple_expansion;
	v->a[69905] = sym_expansion;
	v->a[69906] = sym_command_substitution;
	v->a[69907] = 15;
	v->a[69908] = actions(3);
	v->a[69909] = 1;
	v->a[69910] = sym_comment;
	v->a[69911] = actions(1643);
	v->a[69912] = 1;
	v->a[69913] = anon_sym_DOLLAR;
	v->a[69914] = actions(1645);
	v->a[69915] = 1;
	v->a[69916] = anon_sym_DQUOTE;
	v->a[69917] = actions(1647);
	v->a[69918] = 1;
	v->a[69919] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3496(v);
}

void	small_parse_table_3496(t_small_parse_table_array *v)
{
	v->a[69920] = actions(1649);
	v->a[69921] = 1;
	v->a[69922] = anon_sym_DOLLAR_LPAREN;
	v->a[69923] = actions(1651);
	v->a[69924] = 1;
	v->a[69925] = anon_sym_BQUOTE;
	v->a[69926] = actions(2751);
	v->a[69927] = 1;
	v->a[69928] = anon_sym_RBRACE;
	v->a[69929] = actions(2753);
	v->a[69930] = 1;
	v->a[69931] = sym_raw_string;
	v->a[69932] = actions(2755);
	v->a[69933] = 1;
	v->a[69934] = aux_sym__word_no_brace_token1;
	v->a[69935] = actions(2757);
	v->a[69936] = 1;
	v->a[69937] = sym_variable_name;
	v->a[69938] = actions(2759);
	v->a[69939] = 1;
	small_parse_table_3497(v);
}

void	small_parse_table_3497(t_small_parse_table_array *v)
{
	v->a[69940] = sym__expansion_word;
	v->a[69941] = state(1863);
	v->a[69942] = 1;
	v->a[69943] = sym__word_no_brace;
	v->a[69944] = state(1929);
	v->a[69945] = 1;
	v->a[69946] = sym__concatenation_in_expansion;
	v->a[69947] = state(1864);
	v->a[69948] = 2;
	v->a[69949] = sym_string;
	v->a[69950] = sym_expansion;
	v->a[69951] = state(1882);
	v->a[69952] = 2;
	v->a[69953] = sym_simple_expansion;
	v->a[69954] = sym_command_substitution;
	v->a[69955] = 10;
	v->a[69956] = actions(3);
	v->a[69957] = 1;
	v->a[69958] = sym_comment;
	v->a[69959] = actions(1562);
	small_parse_table_3498(v);
}

void	small_parse_table_3498(t_small_parse_table_array *v)
{
	v->a[69960] = 1;
	v->a[69961] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69962] = actions(1564);
	v->a[69963] = 1;
	v->a[69964] = anon_sym_DOLLAR;
	v->a[69965] = actions(1566);
	v->a[69966] = 1;
	v->a[69967] = anon_sym_DQUOTE;
	v->a[69968] = actions(1568);
	v->a[69969] = 1;
	v->a[69970] = anon_sym_DOLLAR_LBRACE;
	v->a[69971] = actions(1570);
	v->a[69972] = 1;
	v->a[69973] = anon_sym_DOLLAR_LPAREN;
	v->a[69974] = actions(1572);
	v->a[69975] = 1;
	v->a[69976] = anon_sym_BQUOTE;
	v->a[69977] = state(759);
	v->a[69978] = 2;
	v->a[69979] = sym_concatenation;
	small_parse_table_3499(v);
}

void	small_parse_table_3499(t_small_parse_table_array *v)
{
	v->a[69980] = aux_sym_for_statement_repeat1;
	v->a[69981] = actions(1560);
	v->a[69982] = 3;
	v->a[69983] = sym_raw_string;
	v->a[69984] = sym_number;
	v->a[69985] = sym_word;
	v->a[69986] = state(917);
	v->a[69987] = 5;
	v->a[69988] = sym_arithmetic_expansion;
	v->a[69989] = sym_string;
	v->a[69990] = sym_simple_expansion;
	v->a[69991] = sym_expansion;
	v->a[69992] = sym_command_substitution;
	v->a[69993] = 10;
	v->a[69994] = actions(3);
	v->a[69995] = 1;
	v->a[69996] = sym_comment;
	v->a[69997] = actions(1562);
	v->a[69998] = 1;
	v->a[69999] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3500(v);
}

/* EOF small_parse_table_699.c */
