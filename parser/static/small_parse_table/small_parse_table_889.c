/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_889.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4445(t_small_parse_table_array *v)
{
	v->a[88900] = 1;
	v->a[88901] = anon_sym_DOLLAR_LPAREN;
	v->a[88902] = actions(3426);
	v->a[88903] = 1;
	v->a[88904] = anon_sym_BQUOTE;
	v->a[88905] = actions(3750);
	v->a[88906] = 1;
	v->a[88907] = anon_sym_DOLLAR;
	v->a[88908] = actions(3752);
	v->a[88909] = 1;
	v->a[88910] = anon_sym_DQUOTE;
	v->a[88911] = state(1906);
	v->a[88912] = 1;
	v->a[88913] = aux_sym_string_repeat1;
	v->a[88914] = state(1959);
	v->a[88915] = 4;
	v->a[88916] = sym_arithmetic_expansion;
	v->a[88917] = sym_simple_expansion;
	v->a[88918] = sym_expansion;
	v->a[88919] = sym_command_substitution;
	small_parse_table_4446(v);
}

void	small_parse_table_4446(t_small_parse_table_array *v)
{
	v->a[88920] = 10;
	v->a[88921] = actions(3);
	v->a[88922] = 1;
	v->a[88923] = sym_comment;
	v->a[88924] = actions(3414);
	v->a[88925] = 1;
	v->a[88926] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88927] = actions(3420);
	v->a[88928] = 1;
	v->a[88929] = sym_string_content;
	v->a[88930] = actions(3422);
	v->a[88931] = 1;
	v->a[88932] = anon_sym_DOLLAR_LBRACE;
	v->a[88933] = actions(3424);
	v->a[88934] = 1;
	v->a[88935] = anon_sym_DOLLAR_LPAREN;
	v->a[88936] = actions(3426);
	v->a[88937] = 1;
	v->a[88938] = anon_sym_BQUOTE;
	v->a[88939] = actions(3754);
	small_parse_table_4447(v);
}

void	small_parse_table_4447(t_small_parse_table_array *v)
{
	v->a[88940] = 1;
	v->a[88941] = anon_sym_DOLLAR;
	v->a[88942] = actions(3756);
	v->a[88943] = 1;
	v->a[88944] = anon_sym_DQUOTE;
	v->a[88945] = state(1908);
	v->a[88946] = 1;
	v->a[88947] = aux_sym_string_repeat1;
	v->a[88948] = state(1959);
	v->a[88949] = 4;
	v->a[88950] = sym_arithmetic_expansion;
	v->a[88951] = sym_simple_expansion;
	v->a[88952] = sym_expansion;
	v->a[88953] = sym_command_substitution;
	v->a[88954] = 4;
	v->a[88955] = actions(3);
	v->a[88956] = 1;
	v->a[88957] = sym_comment;
	v->a[88958] = actions(387);
	v->a[88959] = 1;
	small_parse_table_4448(v);
}

void	small_parse_table_4448(t_small_parse_table_array *v)
{
	v->a[88960] = sym_variable_name;
	v->a[88961] = actions(385);
	v->a[88962] = 2;
	v->a[88963] = aux_sym__simple_variable_name_token1;
	v->a[88964] = aux_sym__multiline_variable_name_token1;
	v->a[88965] = actions(383);
	v->a[88966] = 9;
	v->a[88967] = anon_sym_BANG;
	v->a[88968] = anon_sym_DASH;
	v->a[88969] = anon_sym_STAR;
	v->a[88970] = anon_sym_QMARK;
	v->a[88971] = anon_sym_DOLLAR;
	v->a[88972] = anon_sym_POUND;
	v->a[88973] = anon_sym_AT;
	v->a[88974] = anon_sym_0;
	v->a[88975] = anon_sym__;
	v->a[88976] = 4;
	v->a[88977] = actions(3);
	v->a[88978] = 1;
	v->a[88979] = sym_comment;
	small_parse_table_4449(v);
}

void	small_parse_table_4449(t_small_parse_table_array *v)
{
	v->a[88980] = actions(819);
	v->a[88981] = 1;
	v->a[88982] = sym_variable_name;
	v->a[88983] = actions(817);
	v->a[88984] = 2;
	v->a[88985] = aux_sym__simple_variable_name_token1;
	v->a[88986] = aux_sym__multiline_variable_name_token1;
	v->a[88987] = actions(815);
	v->a[88988] = 9;
	v->a[88989] = anon_sym_BANG;
	v->a[88990] = anon_sym_DASH;
	v->a[88991] = anon_sym_STAR;
	v->a[88992] = anon_sym_QMARK;
	v->a[88993] = anon_sym_DOLLAR;
	v->a[88994] = anon_sym_POUND;
	v->a[88995] = anon_sym_AT;
	v->a[88996] = anon_sym_0;
	v->a[88997] = anon_sym__;
	v->a[88998] = 10;
	v->a[88999] = actions(3);
	small_parse_table_4450(v);
}

/* EOF small_parse_table_889.c */
