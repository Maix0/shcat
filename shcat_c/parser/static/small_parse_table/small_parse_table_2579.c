/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2579.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12895(t_small_parse_table_array *v)
{
	v->a[257900] = anon_sym_POUND2;
	v->a[257901] = anon_sym_EQ2;
	v->a[257902] = actions(8050);
	v->a[257903] = 3;
	v->a[257904] = sym__external_expansion_sym_hash;
	v->a[257905] = sym__external_expansion_sym_bang;
	v->a[257906] = sym__external_expansion_sym_equal;
	v->a[257907] = actions(11754);
	v->a[257908] = 4;
	v->a[257909] = anon_sym_DASH;
	v->a[257910] = anon_sym_STAR;
	v->a[257911] = anon_sym_QMARK;
	v->a[257912] = anon_sym_AT2;
	v->a[257913] = actions(11756);
	v->a[257914] = 5;
	v->a[257915] = anon_sym_BANG;
	v->a[257916] = anon_sym_DOLLAR;
	v->a[257917] = anon_sym_POUND;
	v->a[257918] = anon_sym_0;
	v->a[257919] = anon_sym__;
	small_parse_table_12896(v);
}

void	small_parse_table_12896(t_small_parse_table_array *v)
{
	v->a[257920] = 16;
	v->a[257921] = actions(3);
	v->a[257922] = 1;
	v->a[257923] = sym_comment;
	v->a[257924] = actions(11760);
	v->a[257925] = 1;
	v->a[257926] = anon_sym_BANG2;
	v->a[257927] = actions(11764);
	v->a[257928] = 1;
	v->a[257929] = anon_sym_DOLLAR_LPAREN;
	v->a[257930] = actions(11766);
	v->a[257931] = 1;
	v->a[257932] = anon_sym_BQUOTE;
	v->a[257933] = actions(11768);
	v->a[257934] = 1;
	v->a[257935] = anon_sym_DOLLAR_BQUOTE;
	v->a[257936] = actions(11770);
	v->a[257937] = 1;
	v->a[257938] = aux_sym__simple_variable_name_token1;
	v->a[257939] = actions(11772);
	small_parse_table_12897(v);
}

void	small_parse_table_12897(t_small_parse_table_array *v)
{
	v->a[257940] = 1;
	v->a[257941] = sym_variable_name;
	v->a[257942] = actions(11891);
	v->a[257943] = 1;
	v->a[257944] = anon_sym_RBRACE3;
	v->a[257945] = state(3532);
	v->a[257946] = 1;
	v->a[257947] = sym_subscript;
	v->a[257948] = state(6428);
	v->a[257949] = 1;
	v->a[257950] = aux_sym__expansion_body_repeat1;
	v->a[257951] = state(6472);
	v->a[257952] = 1;
	v->a[257953] = sym_command_substitution;
	v->a[257954] = state(7187);
	v->a[257955] = 1;
	v->a[257956] = sym__expansion_body;
	v->a[257957] = actions(11762);
	v->a[257958] = 2;
	v->a[257959] = anon_sym_POUND2;
	small_parse_table_12898(v);
}

void	small_parse_table_12898(t_small_parse_table_array *v)
{
	v->a[257960] = anon_sym_EQ2;
	v->a[257961] = actions(8050);
	v->a[257962] = 3;
	v->a[257963] = sym__external_expansion_sym_hash;
	v->a[257964] = sym__external_expansion_sym_bang;
	v->a[257965] = sym__external_expansion_sym_equal;
	v->a[257966] = actions(11754);
	v->a[257967] = 4;
	v->a[257968] = anon_sym_DASH;
	v->a[257969] = anon_sym_STAR;
	v->a[257970] = anon_sym_QMARK;
	v->a[257971] = anon_sym_AT2;
	v->a[257972] = actions(11756);
	v->a[257973] = 5;
	v->a[257974] = anon_sym_BANG;
	v->a[257975] = anon_sym_DOLLAR;
	v->a[257976] = anon_sym_POUND;
	v->a[257977] = anon_sym_0;
	v->a[257978] = anon_sym__;
	v->a[257979] = 16;
	small_parse_table_12899(v);
}

void	small_parse_table_12899(t_small_parse_table_array *v)
{
	v->a[257980] = actions(3);
	v->a[257981] = 1;
	v->a[257982] = sym_comment;
	v->a[257983] = actions(11760);
	v->a[257984] = 1;
	v->a[257985] = anon_sym_BANG2;
	v->a[257986] = actions(11764);
	v->a[257987] = 1;
	v->a[257988] = anon_sym_DOLLAR_LPAREN;
	v->a[257989] = actions(11766);
	v->a[257990] = 1;
	v->a[257991] = anon_sym_BQUOTE;
	v->a[257992] = actions(11768);
	v->a[257993] = 1;
	v->a[257994] = anon_sym_DOLLAR_BQUOTE;
	v->a[257995] = actions(11770);
	v->a[257996] = 1;
	v->a[257997] = aux_sym__simple_variable_name_token1;
	v->a[257998] = actions(11772);
	v->a[257999] = 1;
	small_parse_table_12900(v);
}

/* EOF small_parse_table_2579.c */
