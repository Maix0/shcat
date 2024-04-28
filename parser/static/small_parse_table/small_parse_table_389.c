/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_389.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1945(t_small_parse_table_array *v)
{
	v->a[38900] = anon_sym_DOLLAR_LBRACK;
	v->a[38901] = actions(709);
	v->a[38902] = 1;
	v->a[38903] = anon_sym_DOLLAR;
	v->a[38904] = actions(713);
	v->a[38905] = 1;
	v->a[38906] = anon_sym_DQUOTE;
	v->a[38907] = actions(717);
	v->a[38908] = 1;
	v->a[38909] = aux_sym_number_token1;
	v->a[38910] = actions(719);
	v->a[38911] = 1;
	v->a[38912] = aux_sym_number_token2;
	v->a[38913] = actions(721);
	v->a[38914] = 1;
	v->a[38915] = anon_sym_DOLLAR_LBRACE;
	v->a[38916] = actions(723);
	v->a[38917] = 1;
	v->a[38918] = anon_sym_DOLLAR_LPAREN;
	v->a[38919] = actions(725);
	small_parse_table_1946(v);
}

void	small_parse_table_1946(t_small_parse_table_array *v)
{
	v->a[38920] = 1;
	v->a[38921] = anon_sym_BQUOTE;
	v->a[38922] = actions(727);
	v->a[38923] = 1;
	v->a[38924] = anon_sym_DOLLAR_BQUOTE;
	v->a[38925] = actions(735);
	v->a[38926] = 1;
	v->a[38927] = sym_test_operator;
	v->a[38928] = actions(737);
	v->a[38929] = 1;
	v->a[38930] = sym__brace_start;
	v->a[38931] = actions(1394);
	v->a[38932] = 1;
	v->a[38933] = anon_sym_LT_LT_LT;
	v->a[38934] = actions(1396);
	v->a[38935] = 1;
	v->a[38936] = sym_file_descriptor;
	v->a[38937] = actions(2971);
	v->a[38938] = 1;
	v->a[38939] = sym_word;
	small_parse_table_1947(v);
}

void	small_parse_table_1947(t_small_parse_table_array *v)
{
	v->a[38940] = actions(4705);
	v->a[38941] = 1;
	v->a[38942] = sym_variable_name;
	v->a[38943] = actions(5047);
	v->a[38944] = 1;
	v->a[38945] = sym__special_character;
	v->a[38946] = state(531);
	v->a[38947] = 1;
	v->a[38948] = sym_command_name;
	v->a[38949] = state(1026);
	v->a[38950] = 1;
	v->a[38951] = aux_sym__literal_repeat1;
	v->a[38952] = state(1169);
	v->a[38953] = 1;
	v->a[38954] = sym_concatenation;
	v->a[38955] = state(6771);
	v->a[38956] = 1;
	v->a[38957] = sym_subscript;
	v->a[38958] = actions(705);
	v->a[38959] = 2;
	small_parse_table_1948(v);
}

void	small_parse_table_1948(t_small_parse_table_array *v)
{
	v->a[38960] = anon_sym_LPAREN_LPAREN;
	v->a[38961] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38962] = actions(715);
	v->a[38963] = 2;
	v->a[38964] = sym_raw_string;
	v->a[38965] = sym_ansi_c_string;
	v->a[38966] = actions(729);
	v->a[38967] = 2;
	v->a[38968] = anon_sym_LT_LPAREN;
	v->a[38969] = anon_sym_GT_LPAREN;
	v->a[38970] = actions(1392);
	v->a[38971] = 2;
	v->a[38972] = anon_sym_LT_AMP_DASH;
	v->a[38973] = anon_sym_GT_AMP_DASH;
	v->a[38974] = state(3127);
	v->a[38975] = 2;
	v->a[38976] = sym_variable_assignment;
	v->a[38977] = aux_sym_command_repeat1;
	v->a[38978] = state(3581);
	v->a[38979] = 2;
	small_parse_table_1949(v);
}

void	small_parse_table_1949(t_small_parse_table_array *v)
{
	v->a[38980] = sym_file_redirect;
	v->a[38981] = sym_herestring_redirect;
	v->a[38982] = actions(1390);
	v->a[38983] = 3;
	v->a[38984] = anon_sym_GT_GT;
	v->a[38985] = anon_sym_AMP_GT_GT;
	v->a[38986] = anon_sym_GT_PIPE;
	v->a[38987] = actions(1388);
	v->a[38988] = 5;
	v->a[38989] = anon_sym_LT;
	v->a[38990] = anon_sym_GT;
	v->a[38991] = anon_sym_AMP_GT;
	v->a[38992] = anon_sym_LT_AMP;
	v->a[38993] = anon_sym_GT_AMP;
	v->a[38994] = state(852);
	v->a[38995] = 9;
	v->a[38996] = sym_arithmetic_expansion;
	v->a[38997] = sym_brace_expression;
	v->a[38998] = sym_string;
	v->a[38999] = sym_translated_string;
	small_parse_table_1950(v);
}

/* EOF small_parse_table_389.c */
