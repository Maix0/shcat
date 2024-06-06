/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1369.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6845(t_small_parse_table_array *v)
{
	v->a[136900] = actions(7960);
	v->a[136901] = 1;
	v->a[136902] = anon_sym_DOLLAR;
	v->a[136903] = state(3061);
	v->a[136904] = 1;
	v->a[136905] = aux_sym_string_repeat1;
	v->a[136906] = state(3218);
	v->a[136907] = 4;
	v->a[136908] = sym_arithmetic_expansion;
	v->a[136909] = sym_simple_expansion;
	v->a[136910] = sym_expansion;
	v->a[136911] = sym_command_substitution;
	v->a[136912] = 7;
	v->a[136913] = actions(3);
	v->a[136914] = 1;
	v->a[136915] = sym_comment;
	v->a[136916] = actions(7754);
	v->a[136917] = 1;
	v->a[136918] = aux_sym__simple_variable_name_token1;
	v->a[136919] = actions(7758);
	small_parse_table_6846(v);
}

void	small_parse_table_6846(t_small_parse_table_array *v)
{
	v->a[136920] = 1;
	v->a[136921] = sym_variable_name;
	v->a[136922] = actions(7962);
	v->a[136923] = 1;
	v->a[136924] = anon_sym_RBRACE3;
	v->a[136925] = state(3710);
	v->a[136926] = 1;
	v->a[136927] = sym__expansion_body;
	v->a[136928] = actions(7756);
	v->a[136929] = 2;
	v->a[136930] = anon_sym_0;
	v->a[136931] = anon_sym__;
	v->a[136932] = actions(7750);
	v->a[136933] = 7;
	v->a[136934] = anon_sym_BANG;
	v->a[136935] = anon_sym_DASH;
	v->a[136936] = anon_sym_STAR;
	v->a[136937] = anon_sym_QMARK;
	v->a[136938] = anon_sym_DOLLAR;
	v->a[136939] = anon_sym_POUND;
	small_parse_table_6847(v);
}

void	small_parse_table_6847(t_small_parse_table_array *v)
{
	v->a[136940] = anon_sym_AT;
	v->a[136941] = 11;
	v->a[136942] = actions(3);
	v->a[136943] = 1;
	v->a[136944] = sym_comment;
	v->a[136945] = actions(7760);
	v->a[136946] = 1;
	v->a[136947] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136948] = actions(7766);
	v->a[136949] = 1;
	v->a[136950] = sym_string_content;
	v->a[136951] = actions(7768);
	v->a[136952] = 1;
	v->a[136953] = anon_sym_DOLLAR_LBRACE;
	v->a[136954] = actions(7770);
	v->a[136955] = 1;
	v->a[136956] = anon_sym_DOLLAR_LPAREN;
	v->a[136957] = actions(7772);
	v->a[136958] = 1;
	v->a[136959] = anon_sym_BQUOTE;
	small_parse_table_6848(v);
}

void	small_parse_table_6848(t_small_parse_table_array *v)
{
	v->a[136960] = actions(7774);
	v->a[136961] = 1;
	v->a[136962] = anon_sym_DOLLAR_BQUOTE;
	v->a[136963] = actions(7964);
	v->a[136964] = 1;
	v->a[136965] = anon_sym_DOLLAR;
	v->a[136966] = actions(7966);
	v->a[136967] = 1;
	v->a[136968] = anon_sym_DQUOTE;
	v->a[136969] = state(3054);
	v->a[136970] = 1;
	v->a[136971] = aux_sym_string_repeat1;
	v->a[136972] = state(3218);
	v->a[136973] = 4;
	v->a[136974] = sym_arithmetic_expansion;
	v->a[136975] = sym_simple_expansion;
	v->a[136976] = sym_expansion;
	v->a[136977] = sym_command_substitution;
	v->a[136978] = 11;
	v->a[136979] = actions(3);
	small_parse_table_6849(v);
}

void	small_parse_table_6849(t_small_parse_table_array *v)
{
	v->a[136980] = 1;
	v->a[136981] = sym_comment;
	v->a[136982] = actions(7968);
	v->a[136983] = 1;
	v->a[136984] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136985] = actions(7971);
	v->a[136986] = 1;
	v->a[136987] = anon_sym_DOLLAR;
	v->a[136988] = actions(7974);
	v->a[136989] = 1;
	v->a[136990] = anon_sym_DQUOTE;
	v->a[136991] = actions(7976);
	v->a[136992] = 1;
	v->a[136993] = sym_string_content;
	v->a[136994] = actions(7979);
	v->a[136995] = 1;
	v->a[136996] = anon_sym_DOLLAR_LBRACE;
	v->a[136997] = actions(7982);
	v->a[136998] = 1;
	v->a[136999] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6850(v);
}

/* EOF small_parse_table_1369.c */
