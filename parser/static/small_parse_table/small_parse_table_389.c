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
	v->a[38900] = 1;
	v->a[38901] = anon_sym_DOLLAR_LBRACE;
	v->a[38902] = actions(65);
	v->a[38903] = 1;
	v->a[38904] = anon_sym_DOLLAR_LPAREN;
	v->a[38905] = actions(67);
	v->a[38906] = 1;
	v->a[38907] = anon_sym_BQUOTE;
	v->a[38908] = actions(359);
	v->a[38909] = 1;
	v->a[38910] = sym_variable_name;
	v->a[38911] = actions(1095);
	v->a[38912] = 1;
	v->a[38913] = sym_file_descriptor;
	v->a[38914] = state(177);
	v->a[38915] = 1;
	v->a[38916] = sym_command_name;
	v->a[38917] = state(661);
	v->a[38918] = 1;
	v->a[38919] = sym_concatenation;
	small_parse_table_1946(v);
}

void	small_parse_table_1946(t_small_parse_table_array *v)
{
	v->a[38920] = state(1203);
	v->a[38921] = 1;
	v->a[38922] = sym_file_redirect;
	v->a[38923] = state(968);
	v->a[38924] = 2;
	v->a[38925] = sym_variable_assignment;
	v->a[38926] = aux_sym_command_repeat1;
	v->a[38927] = actions(61);
	v->a[38928] = 3;
	v->a[38929] = sym_raw_string;
	v->a[38930] = sym_number;
	v->a[38931] = sym_word;
	v->a[38932] = state(455);
	v->a[38933] = 5;
	v->a[38934] = sym_arithmetic_expansion;
	v->a[38935] = sym_string;
	v->a[38936] = sym_simple_expansion;
	v->a[38937] = sym_expansion;
	v->a[38938] = sym_command_substitution;
	v->a[38939] = actions(1093);
	small_parse_table_1947(v);
}

void	small_parse_table_1947(t_small_parse_table_array *v)
{
	v->a[38940] = 7;
	v->a[38941] = anon_sym_LT;
	v->a[38942] = anon_sym_GT;
	v->a[38943] = anon_sym_GT_GT;
	v->a[38944] = anon_sym_LT_AMP;
	v->a[38945] = anon_sym_GT_AMP;
	v->a[38946] = anon_sym_GT_PIPE;
	v->a[38947] = anon_sym_LT_GT;
	v->a[38948] = 4;
	v->a[38949] = actions(3);
	v->a[38950] = 1;
	v->a[38951] = sym_comment;
	v->a[38952] = actions(1410);
	v->a[38953] = 2;
	v->a[38954] = anon_sym_RPAREN;
	v->a[38955] = anon_sym_SEMI_SEMI;
	v->a[38956] = actions(1412);
	v->a[38957] = 2;
	v->a[38958] = sym_file_descriptor;
	v->a[38959] = sym_variable_name;
	small_parse_table_1948(v);
}

void	small_parse_table_1948(t_small_parse_table_array *v)
{
	v->a[38960] = actions(1408);
	v->a[38961] = 24;
	v->a[38962] = anon_sym_for;
	v->a[38963] = anon_sym_while;
	v->a[38964] = anon_sym_until;
	v->a[38965] = anon_sym_if;
	v->a[38966] = anon_sym_case;
	v->a[38967] = anon_sym_LPAREN;
	v->a[38968] = anon_sym_LBRACE;
	v->a[38969] = anon_sym_BANG;
	v->a[38970] = anon_sym_LT;
	v->a[38971] = anon_sym_GT;
	v->a[38972] = anon_sym_GT_GT;
	v->a[38973] = anon_sym_LT_AMP;
	v->a[38974] = anon_sym_GT_AMP;
	v->a[38975] = anon_sym_GT_PIPE;
	v->a[38976] = anon_sym_LT_GT;
	v->a[38977] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38978] = anon_sym_DOLLAR;
	v->a[38979] = anon_sym_DQUOTE;
	small_parse_table_1949(v);
}

void	small_parse_table_1949(t_small_parse_table_array *v)
{
	v->a[38980] = sym_raw_string;
	v->a[38981] = sym_number;
	v->a[38982] = anon_sym_DOLLAR_LBRACE;
	v->a[38983] = anon_sym_DOLLAR_LPAREN;
	v->a[38984] = anon_sym_BQUOTE;
	v->a[38985] = sym_word;
	v->a[38986] = 3;
	v->a[38987] = actions(3);
	v->a[38988] = 1;
	v->a[38989] = sym_comment;
	v->a[38990] = actions(539);
	v->a[38991] = 2;
	v->a[38992] = sym_file_descriptor;
	v->a[38993] = sym__concat;
	v->a[38994] = actions(537);
	v->a[38995] = 26;
	v->a[38996] = anon_sym_esac;
	v->a[38997] = anon_sym_PIPE;
	v->a[38998] = anon_sym_SEMI_SEMI;
	v->a[38999] = anon_sym_AMP_AMP;
	small_parse_table_1950(v);
}

/* EOF small_parse_table_389.c */
