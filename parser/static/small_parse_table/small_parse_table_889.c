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
	v->a[88900] = anon_sym_AT;
	v->a[88901] = anon_sym_0;
	v->a[88902] = anon_sym__;
	v->a[88903] = 10;
	v->a[88904] = actions(3);
	v->a[88905] = 1;
	v->a[88906] = sym_comment;
	v->a[88907] = actions(3712);
	v->a[88908] = 1;
	v->a[88909] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88910] = actions(3716);
	v->a[88911] = 1;
	v->a[88912] = sym_string_content;
	v->a[88913] = actions(3718);
	v->a[88914] = 1;
	v->a[88915] = anon_sym_DOLLAR_LBRACE;
	v->a[88916] = actions(3720);
	v->a[88917] = 1;
	v->a[88918] = anon_sym_DOLLAR_LPAREN;
	v->a[88919] = actions(3722);
	small_parse_table_4446(v);
}

void	small_parse_table_4446(t_small_parse_table_array *v)
{
	v->a[88920] = 1;
	v->a[88921] = anon_sym_BQUOTE;
	v->a[88922] = actions(3830);
	v->a[88923] = 1;
	v->a[88924] = anon_sym_DOLLAR;
	v->a[88925] = actions(3832);
	v->a[88926] = 1;
	v->a[88927] = anon_sym_DQUOTE;
	v->a[88928] = state(1772);
	v->a[88929] = 1;
	v->a[88930] = aux_sym_string_repeat1;
	v->a[88931] = state(1869);
	v->a[88932] = 4;
	v->a[88933] = sym_arithmetic_expansion;
	v->a[88934] = sym_simple_expansion;
	v->a[88935] = sym_expansion;
	v->a[88936] = sym_command_substitution;
	v->a[88937] = 4;
	v->a[88938] = actions(3);
	v->a[88939] = 1;
	small_parse_table_4447(v);
}

void	small_parse_table_4447(t_small_parse_table_array *v)
{
	v->a[88940] = sym_comment;
	v->a[88941] = actions(481);
	v->a[88942] = 1;
	v->a[88943] = sym_variable_name;
	v->a[88944] = actions(479);
	v->a[88945] = 2;
	v->a[88946] = aux_sym__simple_variable_name_token1;
	v->a[88947] = aux_sym__multiline_variable_name_token1;
	v->a[88948] = actions(477);
	v->a[88949] = 9;
	v->a[88950] = anon_sym_BANG;
	v->a[88951] = anon_sym_DASH;
	v->a[88952] = anon_sym_STAR;
	v->a[88953] = anon_sym_QMARK;
	v->a[88954] = anon_sym_DOLLAR;
	v->a[88955] = anon_sym_POUND;
	v->a[88956] = anon_sym_AT;
	v->a[88957] = anon_sym_0;
	v->a[88958] = anon_sym__;
	v->a[88959] = 10;
	small_parse_table_4448(v);
}

void	small_parse_table_4448(t_small_parse_table_array *v)
{
	v->a[88960] = actions(3);
	v->a[88961] = 1;
	v->a[88962] = sym_comment;
	v->a[88963] = actions(3712);
	v->a[88964] = 1;
	v->a[88965] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88966] = actions(3716);
	v->a[88967] = 1;
	v->a[88968] = sym_string_content;
	v->a[88969] = actions(3718);
	v->a[88970] = 1;
	v->a[88971] = anon_sym_DOLLAR_LBRACE;
	v->a[88972] = actions(3720);
	v->a[88973] = 1;
	v->a[88974] = anon_sym_DOLLAR_LPAREN;
	v->a[88975] = actions(3722);
	v->a[88976] = 1;
	v->a[88977] = anon_sym_BQUOTE;
	v->a[88978] = actions(3834);
	v->a[88979] = 1;
	small_parse_table_4449(v);
}

void	small_parse_table_4449(t_small_parse_table_array *v)
{
	v->a[88980] = anon_sym_DOLLAR;
	v->a[88981] = actions(3836);
	v->a[88982] = 1;
	v->a[88983] = anon_sym_DQUOTE;
	v->a[88984] = state(1765);
	v->a[88985] = 1;
	v->a[88986] = aux_sym_string_repeat1;
	v->a[88987] = state(1869);
	v->a[88988] = 4;
	v->a[88989] = sym_arithmetic_expansion;
	v->a[88990] = sym_simple_expansion;
	v->a[88991] = sym_expansion;
	v->a[88992] = sym_command_substitution;
	v->a[88993] = 10;
	v->a[88994] = actions(3);
	v->a[88995] = 1;
	v->a[88996] = sym_comment;
	v->a[88997] = actions(3494);
	v->a[88998] = 1;
	v->a[88999] = anon_sym_DQUOTE;
	small_parse_table_4450(v);
}

/* EOF small_parse_table_889.c */
