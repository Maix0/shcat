/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1349.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6745(t_small_parse_table_array *v)
{
	v->a[134900] = 1;
	v->a[134901] = sym_string_content;
	v->a[134902] = actions(7768);
	v->a[134903] = 1;
	v->a[134904] = anon_sym_DOLLAR_LBRACE;
	v->a[134905] = actions(7770);
	v->a[134906] = 1;
	v->a[134907] = anon_sym_DOLLAR_LPAREN;
	v->a[134908] = actions(7772);
	v->a[134909] = 1;
	v->a[134910] = anon_sym_BQUOTE;
	v->a[134911] = actions(7774);
	v->a[134912] = 1;
	v->a[134913] = anon_sym_DOLLAR_BQUOTE;
	v->a[134914] = actions(7808);
	v->a[134915] = 1;
	v->a[134916] = anon_sym_DOLLAR;
	v->a[134917] = state(3061);
	v->a[134918] = 1;
	v->a[134919] = aux_sym_string_repeat1;
	small_parse_table_6746(v);
}

void	small_parse_table_6746(t_small_parse_table_array *v)
{
	v->a[134920] = state(3218);
	v->a[134921] = 4;
	v->a[134922] = sym_arithmetic_expansion;
	v->a[134923] = sym_simple_expansion;
	v->a[134924] = sym_expansion;
	v->a[134925] = sym_command_substitution;
	v->a[134926] = 7;
	v->a[134927] = actions(3);
	v->a[134928] = 1;
	v->a[134929] = sym_comment;
	v->a[134930] = actions(7754);
	v->a[134931] = 1;
	v->a[134932] = aux_sym__simple_variable_name_token1;
	v->a[134933] = actions(7758);
	v->a[134934] = 1;
	v->a[134935] = sym_variable_name;
	v->a[134936] = actions(7810);
	v->a[134937] = 1;
	v->a[134938] = anon_sym_RBRACE3;
	v->a[134939] = state(3725);
	small_parse_table_6747(v);
}

void	small_parse_table_6747(t_small_parse_table_array *v)
{
	v->a[134940] = 1;
	v->a[134941] = sym__expansion_body;
	v->a[134942] = actions(7756);
	v->a[134943] = 2;
	v->a[134944] = anon_sym_0;
	v->a[134945] = anon_sym__;
	v->a[134946] = actions(7750);
	v->a[134947] = 7;
	v->a[134948] = anon_sym_BANG;
	v->a[134949] = anon_sym_DASH;
	v->a[134950] = anon_sym_STAR;
	v->a[134951] = anon_sym_QMARK;
	v->a[134952] = anon_sym_DOLLAR;
	v->a[134953] = anon_sym_POUND;
	v->a[134954] = anon_sym_AT;
	v->a[134955] = 7;
	v->a[134956] = actions(3);
	v->a[134957] = 1;
	v->a[134958] = sym_comment;
	v->a[134959] = actions(7754);
	small_parse_table_6748(v);
}

void	small_parse_table_6748(t_small_parse_table_array *v)
{
	v->a[134960] = 1;
	v->a[134961] = aux_sym__simple_variable_name_token1;
	v->a[134962] = actions(7758);
	v->a[134963] = 1;
	v->a[134964] = sym_variable_name;
	v->a[134965] = actions(7812);
	v->a[134966] = 1;
	v->a[134967] = anon_sym_RBRACE3;
	v->a[134968] = state(3976);
	v->a[134969] = 1;
	v->a[134970] = sym__expansion_body;
	v->a[134971] = actions(7756);
	v->a[134972] = 2;
	v->a[134973] = anon_sym_0;
	v->a[134974] = anon_sym__;
	v->a[134975] = actions(7750);
	v->a[134976] = 7;
	v->a[134977] = anon_sym_BANG;
	v->a[134978] = anon_sym_DASH;
	v->a[134979] = anon_sym_STAR;
	small_parse_table_6749(v);
}

void	small_parse_table_6749(t_small_parse_table_array *v)
{
	v->a[134980] = anon_sym_QMARK;
	v->a[134981] = anon_sym_DOLLAR;
	v->a[134982] = anon_sym_POUND;
	v->a[134983] = anon_sym_AT;
	v->a[134984] = 11;
	v->a[134985] = actions(3);
	v->a[134986] = 1;
	v->a[134987] = sym_comment;
	v->a[134988] = actions(7760);
	v->a[134989] = 1;
	v->a[134990] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[134991] = actions(7766);
	v->a[134992] = 1;
	v->a[134993] = sym_string_content;
	v->a[134994] = actions(7768);
	v->a[134995] = 1;
	v->a[134996] = anon_sym_DOLLAR_LBRACE;
	v->a[134997] = actions(7770);
	v->a[134998] = 1;
	v->a[134999] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6750(v);
}

/* EOF small_parse_table_1349.c */
