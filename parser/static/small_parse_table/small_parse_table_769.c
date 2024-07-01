/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_769.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3845(t_small_parse_table_array *v)
{
	v->a[76900] = anon_sym_DOLLAR;
	v->a[76901] = anon_sym_POUND;
	v->a[76902] = anon_sym_AT;
	v->a[76903] = anon_sym_0;
	v->a[76904] = anon_sym__;
	v->a[76905] = 4;
	v->a[76906] = actions(3);
	v->a[76907] = 1;
	v->a[76908] = sym_comment;
	v->a[76909] = actions(417);
	v->a[76910] = 1;
	v->a[76911] = sym_variable_name;
	v->a[76912] = actions(415);
	v->a[76913] = 2;
	v->a[76914] = aux_sym__simple_variable_name_token1;
	v->a[76915] = aux_sym__multiline_variable_name_token1;
	v->a[76916] = actions(413);
	v->a[76917] = 9;
	v->a[76918] = anon_sym_BANG;
	v->a[76919] = anon_sym_DASH;
	small_parse_table_3846(v);
}

void	small_parse_table_3846(t_small_parse_table_array *v)
{
	v->a[76920] = anon_sym_STAR;
	v->a[76921] = anon_sym_QMARK;
	v->a[76922] = anon_sym_DOLLAR;
	v->a[76923] = anon_sym_POUND;
	v->a[76924] = anon_sym_AT;
	v->a[76925] = anon_sym_0;
	v->a[76926] = anon_sym__;
	v->a[76927] = 10;
	v->a[76928] = actions(3);
	v->a[76929] = 1;
	v->a[76930] = sym_comment;
	v->a[76931] = actions(3071);
	v->a[76932] = 1;
	v->a[76933] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76934] = actions(3077);
	v->a[76935] = 1;
	v->a[76936] = sym_string_content;
	v->a[76937] = actions(3079);
	v->a[76938] = 1;
	v->a[76939] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3847(v);
}

void	small_parse_table_3847(t_small_parse_table_array *v)
{
	v->a[76940] = actions(3081);
	v->a[76941] = 1;
	v->a[76942] = anon_sym_DOLLAR_LPAREN;
	v->a[76943] = actions(3083);
	v->a[76944] = 1;
	v->a[76945] = anon_sym_BQUOTE;
	v->a[76946] = actions(3161);
	v->a[76947] = 1;
	v->a[76948] = anon_sym_DOLLAR;
	v->a[76949] = actions(3163);
	v->a[76950] = 1;
	v->a[76951] = anon_sym_DQUOTE;
	v->a[76952] = state(1640);
	v->a[76953] = 1;
	v->a[76954] = aux_sym_string_repeat1;
	v->a[76955] = state(1739);
	v->a[76956] = 4;
	v->a[76957] = sym_arithmetic_expansion;
	v->a[76958] = sym_simple_expansion;
	v->a[76959] = sym_expansion;
	small_parse_table_3848(v);
}

void	small_parse_table_3848(t_small_parse_table_array *v)
{
	v->a[76960] = sym_command_substitution;
	v->a[76961] = 10;
	v->a[76962] = actions(3);
	v->a[76963] = 1;
	v->a[76964] = sym_comment;
	v->a[76965] = actions(3071);
	v->a[76966] = 1;
	v->a[76967] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76968] = actions(3077);
	v->a[76969] = 1;
	v->a[76970] = sym_string_content;
	v->a[76971] = actions(3079);
	v->a[76972] = 1;
	v->a[76973] = anon_sym_DOLLAR_LBRACE;
	v->a[76974] = actions(3081);
	v->a[76975] = 1;
	v->a[76976] = anon_sym_DOLLAR_LPAREN;
	v->a[76977] = actions(3083);
	v->a[76978] = 1;
	v->a[76979] = anon_sym_BQUOTE;
	small_parse_table_3849(v);
}

void	small_parse_table_3849(t_small_parse_table_array *v)
{
	v->a[76980] = actions(3165);
	v->a[76981] = 1;
	v->a[76982] = anon_sym_DOLLAR;
	v->a[76983] = actions(3167);
	v->a[76984] = 1;
	v->a[76985] = anon_sym_DQUOTE;
	v->a[76986] = state(1652);
	v->a[76987] = 1;
	v->a[76988] = aux_sym_string_repeat1;
	v->a[76989] = state(1739);
	v->a[76990] = 4;
	v->a[76991] = sym_arithmetic_expansion;
	v->a[76992] = sym_simple_expansion;
	v->a[76993] = sym_expansion;
	v->a[76994] = sym_command_substitution;
	v->a[76995] = 10;
	v->a[76996] = actions(3);
	v->a[76997] = 1;
	v->a[76998] = sym_comment;
	v->a[76999] = actions(3071);
	small_parse_table_3850(v);
}

/* EOF small_parse_table_769.c */
