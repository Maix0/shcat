/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_669.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3345(t_small_parse_table_array *v)
{
	v->a[66900] = actions(875);
	v->a[66901] = 1;
	v->a[66902] = anon_sym_DQUOTE;
	v->a[66903] = actions(877);
	v->a[66904] = 1;
	v->a[66905] = anon_sym_DOLLAR_LBRACE;
	v->a[66906] = actions(879);
	v->a[66907] = 1;
	v->a[66908] = anon_sym_DOLLAR_LPAREN;
	v->a[66909] = actions(881);
	v->a[66910] = 1;
	v->a[66911] = anon_sym_BQUOTE;
	v->a[66912] = actions(2366);
	v->a[66913] = 1;
	v->a[66914] = sym__bare_dollar;
	v->a[66915] = actions(2362);
	v->a[66916] = 5;
	v->a[66917] = aux_sym_concatenation_token1;
	v->a[66918] = sym_raw_string;
	v->a[66919] = sym_number;
	small_parse_table_3346(v);
}

void	small_parse_table_3346(t_small_parse_table_array *v)
{
	v->a[66920] = sym__comment_word;
	v->a[66921] = sym_word;
	v->a[66922] = state(589);
	v->a[66923] = 5;
	v->a[66924] = sym_arithmetic_expansion;
	v->a[66925] = sym_string;
	v->a[66926] = sym_simple_expansion;
	v->a[66927] = sym_expansion;
	v->a[66928] = sym_command_substitution;
	v->a[66929] = 12;
	v->a[66930] = actions(3);
	v->a[66931] = 1;
	v->a[66932] = sym_comment;
	v->a[66933] = actions(1074);
	v->a[66934] = 1;
	v->a[66935] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66936] = actions(1076);
	v->a[66937] = 1;
	v->a[66938] = anon_sym_DOLLAR;
	v->a[66939] = actions(1078);
	small_parse_table_3347(v);
}

void	small_parse_table_3347(t_small_parse_table_array *v)
{
	v->a[66940] = 1;
	v->a[66941] = anon_sym_DQUOTE;
	v->a[66942] = actions(1080);
	v->a[66943] = 1;
	v->a[66944] = anon_sym_DOLLAR_LBRACE;
	v->a[66945] = actions(1082);
	v->a[66946] = 1;
	v->a[66947] = anon_sym_DOLLAR_LPAREN;
	v->a[66948] = actions(1084);
	v->a[66949] = 1;
	v->a[66950] = anon_sym_BQUOTE;
	v->a[66951] = actions(2536);
	v->a[66952] = 1;
	v->a[66953] = aux_sym_heredoc_redirect_token1;
	v->a[66954] = state(1338);
	v->a[66955] = 1;
	v->a[66956] = aux_sym__heredoc_command;
	v->a[66957] = state(1721);
	v->a[66958] = 1;
	v->a[66959] = sym_concatenation;
	small_parse_table_3348(v);
}

void	small_parse_table_3348(t_small_parse_table_array *v)
{
	v->a[66960] = actions(1064);
	v->a[66961] = 3;
	v->a[66962] = sym_raw_string;
	v->a[66963] = sym_number;
	v->a[66964] = sym_word;
	v->a[66965] = state(1573);
	v->a[66966] = 5;
	v->a[66967] = sym_arithmetic_expansion;
	v->a[66968] = sym_string;
	v->a[66969] = sym_simple_expansion;
	v->a[66970] = sym_expansion;
	v->a[66971] = sym_command_substitution;
	v->a[66972] = 11;
	v->a[66973] = actions(3);
	v->a[66974] = 1;
	v->a[66975] = sym_comment;
	v->a[66976] = actions(1638);
	v->a[66977] = 1;
	v->a[66978] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66979] = actions(1640);
	small_parse_table_3349(v);
}

void	small_parse_table_3349(t_small_parse_table_array *v)
{
	v->a[66980] = 1;
	v->a[66981] = anon_sym_DOLLAR;
	v->a[66982] = actions(1642);
	v->a[66983] = 1;
	v->a[66984] = anon_sym_DQUOTE;
	v->a[66985] = actions(1644);
	v->a[66986] = 1;
	v->a[66987] = anon_sym_DOLLAR_LBRACE;
	v->a[66988] = actions(1646);
	v->a[66989] = 1;
	v->a[66990] = anon_sym_DOLLAR_LPAREN;
	v->a[66991] = actions(1648);
	v->a[66992] = 1;
	v->a[66993] = anon_sym_BQUOTE;
	v->a[66994] = actions(1650);
	v->a[66995] = 1;
	v->a[66996] = sym_extglob_pattern;
	v->a[66997] = state(1866);
	v->a[66998] = 2;
	v->a[66999] = sym_concatenation;
	small_parse_table_3350(v);
}

/* EOF small_parse_table_669.c */
