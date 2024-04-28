/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2119.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10595(t_small_parse_table_array *v)
{
	v->a[211900] = sym_process_substitution;
	v->a[211901] = 20;
	v->a[211902] = actions(71);
	v->a[211903] = 1;
	v->a[211904] = sym_comment;
	v->a[211905] = actions(9758);
	v->a[211906] = 1;
	v->a[211907] = anon_sym_DOLLAR_LBRACK;
	v->a[211908] = actions(9760);
	v->a[211909] = 1;
	v->a[211910] = anon_sym_DOLLAR;
	v->a[211911] = actions(9764);
	v->a[211912] = 1;
	v->a[211913] = anon_sym_DQUOTE;
	v->a[211914] = actions(9768);
	v->a[211915] = 1;
	v->a[211916] = aux_sym_number_token1;
	v->a[211917] = actions(9770);
	v->a[211918] = 1;
	v->a[211919] = aux_sym_number_token2;
	small_parse_table_10596(v);
}

void	small_parse_table_10596(t_small_parse_table_array *v)
{
	v->a[211920] = actions(9772);
	v->a[211921] = 1;
	v->a[211922] = anon_sym_DOLLAR_LBRACE;
	v->a[211923] = actions(9774);
	v->a[211924] = 1;
	v->a[211925] = anon_sym_DOLLAR_LPAREN;
	v->a[211926] = actions(9776);
	v->a[211927] = 1;
	v->a[211928] = anon_sym_BQUOTE;
	v->a[211929] = actions(9778);
	v->a[211930] = 1;
	v->a[211931] = anon_sym_DOLLAR_BQUOTE;
	v->a[211932] = actions(9784);
	v->a[211933] = 1;
	v->a[211934] = sym__brace_start;
	v->a[211935] = actions(10050);
	v->a[211936] = 1;
	v->a[211937] = sym_word;
	v->a[211938] = actions(10052);
	v->a[211939] = 1;
	small_parse_table_10597(v);
}

void	small_parse_table_10597(t_small_parse_table_array *v)
{
	v->a[211940] = sym__special_character;
	v->a[211941] = actions(10056);
	v->a[211942] = 1;
	v->a[211943] = sym_test_operator;
	v->a[211944] = state(6219);
	v->a[211945] = 1;
	v->a[211946] = aux_sym__literal_repeat1;
	v->a[211947] = state(6469);
	v->a[211948] = 1;
	v->a[211949] = sym_concatenation;
	v->a[211950] = actions(9756);
	v->a[211951] = 2;
	v->a[211952] = anon_sym_LPAREN_LPAREN;
	v->a[211953] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[211954] = actions(9780);
	v->a[211955] = 2;
	v->a[211956] = anon_sym_LT_LPAREN;
	v->a[211957] = anon_sym_GT_LPAREN;
	v->a[211958] = actions(10054);
	v->a[211959] = 2;
	small_parse_table_10598(v);
}

void	small_parse_table_10598(t_small_parse_table_array *v)
{
	v->a[211960] = sym_raw_string;
	v->a[211961] = sym_ansi_c_string;
	v->a[211962] = state(6192);
	v->a[211963] = 9;
	v->a[211964] = sym_arithmetic_expansion;
	v->a[211965] = sym_brace_expression;
	v->a[211966] = sym_string;
	v->a[211967] = sym_translated_string;
	v->a[211968] = sym_number;
	v->a[211969] = sym_simple_expansion;
	v->a[211970] = sym_expansion;
	v->a[211971] = sym_command_substitution;
	v->a[211972] = sym_process_substitution;
	v->a[211973] = 20;
	v->a[211974] = actions(71);
	v->a[211975] = 1;
	v->a[211976] = sym_comment;
	v->a[211977] = actions(3675);
	v->a[211978] = 1;
	v->a[211979] = anon_sym_DOLLAR;
	small_parse_table_10599(v);
}

void	small_parse_table_10599(t_small_parse_table_array *v)
{
	v->a[211980] = actions(3681);
	v->a[211981] = 1;
	v->a[211982] = aux_sym_number_token1;
	v->a[211983] = actions(3683);
	v->a[211984] = 1;
	v->a[211985] = aux_sym_number_token2;
	v->a[211986] = actions(3687);
	v->a[211987] = 1;
	v->a[211988] = anon_sym_DOLLAR_LPAREN;
	v->a[211989] = actions(3697);
	v->a[211990] = 1;
	v->a[211991] = sym__brace_start;
	v->a[211992] = actions(10058);
	v->a[211993] = 1;
	v->a[211994] = sym_word;
	v->a[211995] = actions(10062);
	v->a[211996] = 1;
	v->a[211997] = anon_sym_DOLLAR_LBRACK;
	v->a[211998] = actions(10064);
	v->a[211999] = 1;
	small_parse_table_10600(v);
}

/* EOF small_parse_table_2119.c */
