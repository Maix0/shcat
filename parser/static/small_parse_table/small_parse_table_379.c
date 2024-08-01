/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_379.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1895(t_small_parse_table_array *v)
{
	v->a[37900] = 5;
	v->a[37901] = sym_arithmetic_expansion;
	v->a[37902] = sym_string;
	v->a[37903] = sym_simple_expansion;
	v->a[37904] = sym_expansion;
	v->a[37905] = sym_command_substitution;
	v->a[37906] = 10;
	v->a[37907] = actions(3);
	v->a[37908] = 1;
	v->a[37909] = sym_comment;
	v->a[37910] = actions(315);
	v->a[37911] = 1;
	v->a[37912] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37913] = actions(317);
	v->a[37914] = 1;
	v->a[37915] = anon_sym_DOLLAR;
	v->a[37916] = actions(319);
	v->a[37917] = 1;
	v->a[37918] = anon_sym_DQUOTE;
	v->a[37919] = actions(323);
	small_parse_table_1896(v);
}

void	small_parse_table_1896(t_small_parse_table_array *v)
{
	v->a[37920] = 1;
	v->a[37921] = anon_sym_DOLLAR_LBRACE;
	v->a[37922] = actions(325);
	v->a[37923] = 1;
	v->a[37924] = anon_sym_DOLLAR_LPAREN;
	v->a[37925] = actions(327);
	v->a[37926] = 1;
	v->a[37927] = anon_sym_BQUOTE;
	v->a[37928] = actions(1713);
	v->a[37929] = 1;
	v->a[37930] = sym__bare_dollar;
	v->a[37931] = actions(1711);
	v->a[37932] = 5;
	v->a[37933] = aux_sym_concatenation_token1;
	v->a[37934] = sym_raw_string;
	v->a[37935] = sym_number;
	v->a[37936] = sym__comment_word;
	v->a[37937] = sym_word;
	v->a[37938] = state(642);
	v->a[37939] = 5;
	small_parse_table_1897(v);
}

void	small_parse_table_1897(t_small_parse_table_array *v)
{
	v->a[37940] = sym_arithmetic_expansion;
	v->a[37941] = sym_string;
	v->a[37942] = sym_simple_expansion;
	v->a[37943] = sym_expansion;
	v->a[37944] = sym_command_substitution;
	v->a[37945] = 10;
	v->a[37946] = actions(3);
	v->a[37947] = 1;
	v->a[37948] = sym_comment;
	v->a[37949] = actions(99);
	v->a[37950] = 1;
	v->a[37951] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37952] = actions(101);
	v->a[37953] = 1;
	v->a[37954] = anon_sym_DOLLAR;
	v->a[37955] = actions(103);
	v->a[37956] = 1;
	v->a[37957] = anon_sym_DQUOTE;
	v->a[37958] = actions(107);
	v->a[37959] = 1;
	small_parse_table_1898(v);
}

void	small_parse_table_1898(t_small_parse_table_array *v)
{
	v->a[37960] = anon_sym_DOLLAR_LBRACE;
	v->a[37961] = actions(109);
	v->a[37962] = 1;
	v->a[37963] = anon_sym_DOLLAR_LPAREN;
	v->a[37964] = actions(111);
	v->a[37965] = 1;
	v->a[37966] = anon_sym_BQUOTE;
	v->a[37967] = actions(1717);
	v->a[37968] = 1;
	v->a[37969] = sym__bare_dollar;
	v->a[37970] = actions(1715);
	v->a[37971] = 5;
	v->a[37972] = aux_sym_concatenation_token1;
	v->a[37973] = sym_raw_string;
	v->a[37974] = sym_number;
	v->a[37975] = sym__comment_word;
	v->a[37976] = sym_word;
	v->a[37977] = state(299);
	v->a[37978] = 5;
	v->a[37979] = sym_arithmetic_expansion;
	small_parse_table_1899(v);
}

void	small_parse_table_1899(t_small_parse_table_array *v)
{
	v->a[37980] = sym_string;
	v->a[37981] = sym_simple_expansion;
	v->a[37982] = sym_expansion;
	v->a[37983] = sym_command_substitution;
	v->a[37984] = 10;
	v->a[37985] = actions(3);
	v->a[37986] = 1;
	v->a[37987] = sym_comment;
	v->a[37988] = actions(1597);
	v->a[37989] = 1;
	v->a[37990] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37991] = actions(1599);
	v->a[37992] = 1;
	v->a[37993] = anon_sym_DOLLAR;
	v->a[37994] = actions(1601);
	v->a[37995] = 1;
	v->a[37996] = anon_sym_DQUOTE;
	v->a[37997] = actions(1603);
	v->a[37998] = 1;
	v->a[37999] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1900(v);
}

/* EOF small_parse_table_379.c */
