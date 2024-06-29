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
	v->a[88900] = anon_sym_BQUOTE;
	v->a[88901] = sym_word;
	v->a[88902] = 10;
	v->a[88903] = actions(3);
	v->a[88904] = 1;
	v->a[88905] = sym_comment;
	v->a[88906] = actions(3414);
	v->a[88907] = 1;
	v->a[88908] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88909] = actions(3420);
	v->a[88910] = 1;
	v->a[88911] = sym_string_content;
	v->a[88912] = actions(3422);
	v->a[88913] = 1;
	v->a[88914] = anon_sym_DOLLAR_LBRACE;
	v->a[88915] = actions(3424);
	v->a[88916] = 1;
	v->a[88917] = anon_sym_DOLLAR_LPAREN;
	v->a[88918] = actions(3426);
	v->a[88919] = 1;
	small_parse_table_4446(v);
}

void	small_parse_table_4446(t_small_parse_table_array *v)
{
	v->a[88920] = anon_sym_BQUOTE;
	v->a[88921] = actions(3468);
	v->a[88922] = 1;
	v->a[88923] = anon_sym_DOLLAR;
	v->a[88924] = actions(3470);
	v->a[88925] = 1;
	v->a[88926] = anon_sym_DQUOTE;
	v->a[88927] = state(1863);
	v->a[88928] = 1;
	v->a[88929] = aux_sym_string_repeat1;
	v->a[88930] = state(1963);
	v->a[88931] = 4;
	v->a[88932] = sym_arithmetic_expansion;
	v->a[88933] = sym_simple_expansion;
	v->a[88934] = sym_expansion;
	v->a[88935] = sym_command_substitution;
	v->a[88936] = 4;
	v->a[88937] = actions(3);
	v->a[88938] = 1;
	v->a[88939] = sym_comment;
	small_parse_table_4447(v);
}

void	small_parse_table_4447(t_small_parse_table_array *v)
{
	v->a[88940] = actions(3474);
	v->a[88941] = 1;
	v->a[88942] = anon_sym_esac;
	v->a[88943] = actions(3476);
	v->a[88944] = 1;
	v->a[88945] = sym_extglob_pattern;
	v->a[88946] = actions(3472);
	v->a[88947] = 10;
	v->a[88948] = anon_sym_LPAREN;
	v->a[88949] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88950] = anon_sym_DOLLAR;
	v->a[88951] = anon_sym_DQUOTE;
	v->a[88952] = sym_raw_string;
	v->a[88953] = sym_number;
	v->a[88954] = anon_sym_DOLLAR_LBRACE;
	v->a[88955] = anon_sym_DOLLAR_LPAREN;
	v->a[88956] = anon_sym_BQUOTE;
	v->a[88957] = sym_word;
	v->a[88958] = 4;
	v->a[88959] = actions(3);
	small_parse_table_4448(v);
}

void	small_parse_table_4448(t_small_parse_table_array *v)
{
	v->a[88960] = 1;
	v->a[88961] = sym_comment;
	v->a[88962] = actions(3474);
	v->a[88963] = 1;
	v->a[88964] = anon_sym_esac;
	v->a[88965] = actions(3476);
	v->a[88966] = 1;
	v->a[88967] = sym_extglob_pattern;
	v->a[88968] = actions(3472);
	v->a[88969] = 10;
	v->a[88970] = anon_sym_LPAREN;
	v->a[88971] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88972] = anon_sym_DOLLAR;
	v->a[88973] = anon_sym_DQUOTE;
	v->a[88974] = sym_raw_string;
	v->a[88975] = sym_number;
	v->a[88976] = anon_sym_DOLLAR_LBRACE;
	v->a[88977] = anon_sym_DOLLAR_LPAREN;
	v->a[88978] = anon_sym_BQUOTE;
	v->a[88979] = sym_word;
	small_parse_table_4449(v);
}

void	small_parse_table_4449(t_small_parse_table_array *v)
{
	v->a[88980] = 4;
	v->a[88981] = actions(3);
	v->a[88982] = 1;
	v->a[88983] = sym_comment;
	v->a[88984] = actions(423);
	v->a[88985] = 1;
	v->a[88986] = sym_variable_name;
	v->a[88987] = actions(421);
	v->a[88988] = 2;
	v->a[88989] = aux_sym__simple_variable_name_token1;
	v->a[88990] = aux_sym__multiline_variable_name_token1;
	v->a[88991] = actions(419);
	v->a[88992] = 9;
	v->a[88993] = anon_sym_BANG;
	v->a[88994] = anon_sym_DASH;
	v->a[88995] = anon_sym_STAR;
	v->a[88996] = anon_sym_QMARK;
	v->a[88997] = anon_sym_DOLLAR;
	v->a[88998] = anon_sym_POUND;
	v->a[88999] = anon_sym_AT;
	small_parse_table_4450(v);
}

/* EOF small_parse_table_889.c */
