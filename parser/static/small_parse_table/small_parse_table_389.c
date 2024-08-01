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
	v->a[38900] = sym_raw_string;
	v->a[38901] = sym_number;
	v->a[38902] = sym__comment_word;
	v->a[38903] = sym_word;
	v->a[38904] = state(353);
	v->a[38905] = 5;
	v->a[38906] = sym_arithmetic_expansion;
	v->a[38907] = sym_string;
	v->a[38908] = sym_simple_expansion;
	v->a[38909] = sym_expansion;
	v->a[38910] = sym_command_substitution;
	v->a[38911] = 10;
	v->a[38912] = actions(3);
	v->a[38913] = 1;
	v->a[38914] = sym_comment;
	v->a[38915] = actions(315);
	v->a[38916] = 1;
	v->a[38917] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38918] = actions(319);
	v->a[38919] = 1;
	small_parse_table_1946(v);
}

void	small_parse_table_1946(t_small_parse_table_array *v)
{
	v->a[38920] = anon_sym_DQUOTE;
	v->a[38921] = actions(323);
	v->a[38922] = 1;
	v->a[38923] = anon_sym_DOLLAR_LBRACE;
	v->a[38924] = actions(325);
	v->a[38925] = 1;
	v->a[38926] = anon_sym_DOLLAR_LPAREN;
	v->a[38927] = actions(327);
	v->a[38928] = 1;
	v->a[38929] = anon_sym_BQUOTE;
	v->a[38930] = actions(1713);
	v->a[38931] = 1;
	v->a[38932] = sym__bare_dollar;
	v->a[38933] = actions(1792);
	v->a[38934] = 1;
	v->a[38935] = anon_sym_DOLLAR;
	v->a[38936] = actions(1711);
	v->a[38937] = 5;
	v->a[38938] = aux_sym_concatenation_token1;
	v->a[38939] = sym_raw_string;
	small_parse_table_1947(v);
}

void	small_parse_table_1947(t_small_parse_table_array *v)
{
	v->a[38940] = sym_number;
	v->a[38941] = sym__comment_word;
	v->a[38942] = sym_word;
	v->a[38943] = state(642);
	v->a[38944] = 5;
	v->a[38945] = sym_arithmetic_expansion;
	v->a[38946] = sym_string;
	v->a[38947] = sym_simple_expansion;
	v->a[38948] = sym_expansion;
	v->a[38949] = sym_command_substitution;
	v->a[38950] = 10;
	v->a[38951] = actions(3);
	v->a[38952] = 1;
	v->a[38953] = sym_comment;
	v->a[38954] = actions(782);
	v->a[38955] = 1;
	v->a[38956] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38957] = actions(786);
	v->a[38958] = 1;
	v->a[38959] = anon_sym_DQUOTE;
	small_parse_table_1948(v);
}

void	small_parse_table_1948(t_small_parse_table_array *v)
{
	v->a[38960] = actions(788);
	v->a[38961] = 1;
	v->a[38962] = anon_sym_DOLLAR_LBRACE;
	v->a[38963] = actions(790);
	v->a[38964] = 1;
	v->a[38965] = anon_sym_DOLLAR_LPAREN;
	v->a[38966] = actions(792);
	v->a[38967] = 1;
	v->a[38968] = anon_sym_BQUOTE;
	v->a[38969] = actions(1705);
	v->a[38970] = 1;
	v->a[38971] = sym__bare_dollar;
	v->a[38972] = actions(1794);
	v->a[38973] = 1;
	v->a[38974] = anon_sym_DOLLAR;
	v->a[38975] = actions(1703);
	v->a[38976] = 5;
	v->a[38977] = aux_sym_concatenation_token1;
	v->a[38978] = sym_raw_string;
	v->a[38979] = sym_number;
	small_parse_table_1949(v);
}

void	small_parse_table_1949(t_small_parse_table_array *v)
{
	v->a[38980] = sym__comment_word;
	v->a[38981] = sym_word;
	v->a[38982] = state(1519);
	v->a[38983] = 5;
	v->a[38984] = sym_arithmetic_expansion;
	v->a[38985] = sym_string;
	v->a[38986] = sym_simple_expansion;
	v->a[38987] = sym_expansion;
	v->a[38988] = sym_command_substitution;
	v->a[38989] = 10;
	v->a[38990] = actions(3);
	v->a[38991] = 1;
	v->a[38992] = sym_comment;
	v->a[38993] = actions(53);
	v->a[38994] = 1;
	v->a[38995] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38996] = actions(57);
	v->a[38997] = 1;
	v->a[38998] = anon_sym_DQUOTE;
	v->a[38999] = actions(61);
	small_parse_table_1950(v);
}

/* EOF small_parse_table_389.c */
