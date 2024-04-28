/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2619.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13095(t_small_parse_table_array *v)
{
	v->a[261900] = 1;
	v->a[261901] = sym_comment;
	v->a[261902] = actions(11760);
	v->a[261903] = 1;
	v->a[261904] = anon_sym_BANG2;
	v->a[261905] = actions(11764);
	v->a[261906] = 1;
	v->a[261907] = anon_sym_DOLLAR_LPAREN;
	v->a[261908] = actions(11766);
	v->a[261909] = 1;
	v->a[261910] = anon_sym_BQUOTE;
	v->a[261911] = actions(11768);
	v->a[261912] = 1;
	v->a[261913] = anon_sym_DOLLAR_BQUOTE;
	v->a[261914] = actions(11770);
	v->a[261915] = 1;
	v->a[261916] = aux_sym__simple_variable_name_token1;
	v->a[261917] = actions(11772);
	v->a[261918] = 1;
	v->a[261919] = sym_variable_name;
	small_parse_table_13096(v);
}

void	small_parse_table_13096(t_small_parse_table_array *v)
{
	v->a[261920] = actions(12011);
	v->a[261921] = 1;
	v->a[261922] = anon_sym_RBRACE3;
	v->a[261923] = state(3532);
	v->a[261924] = 1;
	v->a[261925] = sym_subscript;
	v->a[261926] = state(6428);
	v->a[261927] = 1;
	v->a[261928] = aux_sym__expansion_body_repeat1;
	v->a[261929] = state(6472);
	v->a[261930] = 1;
	v->a[261931] = sym_command_substitution;
	v->a[261932] = state(7255);
	v->a[261933] = 1;
	v->a[261934] = sym__expansion_body;
	v->a[261935] = actions(11762);
	v->a[261936] = 2;
	v->a[261937] = anon_sym_POUND2;
	v->a[261938] = anon_sym_EQ2;
	v->a[261939] = actions(8050);
	small_parse_table_13097(v);
}

void	small_parse_table_13097(t_small_parse_table_array *v)
{
	v->a[261940] = 3;
	v->a[261941] = sym__external_expansion_sym_hash;
	v->a[261942] = sym__external_expansion_sym_bang;
	v->a[261943] = sym__external_expansion_sym_equal;
	v->a[261944] = actions(11754);
	v->a[261945] = 4;
	v->a[261946] = anon_sym_DASH;
	v->a[261947] = anon_sym_STAR;
	v->a[261948] = anon_sym_QMARK;
	v->a[261949] = anon_sym_AT2;
	v->a[261950] = actions(11756);
	v->a[261951] = 5;
	v->a[261952] = anon_sym_BANG;
	v->a[261953] = anon_sym_DOLLAR;
	v->a[261954] = anon_sym_POUND;
	v->a[261955] = anon_sym_0;
	v->a[261956] = anon_sym__;
	v->a[261957] = 16;
	v->a[261958] = actions(3);
	v->a[261959] = 1;
	small_parse_table_13098(v);
}

void	small_parse_table_13098(t_small_parse_table_array *v)
{
	v->a[261960] = sym_comment;
	v->a[261961] = actions(11760);
	v->a[261962] = 1;
	v->a[261963] = anon_sym_BANG2;
	v->a[261964] = actions(11764);
	v->a[261965] = 1;
	v->a[261966] = anon_sym_DOLLAR_LPAREN;
	v->a[261967] = actions(11766);
	v->a[261968] = 1;
	v->a[261969] = anon_sym_BQUOTE;
	v->a[261970] = actions(11768);
	v->a[261971] = 1;
	v->a[261972] = anon_sym_DOLLAR_BQUOTE;
	v->a[261973] = actions(11770);
	v->a[261974] = 1;
	v->a[261975] = aux_sym__simple_variable_name_token1;
	v->a[261976] = actions(11772);
	v->a[261977] = 1;
	v->a[261978] = sym_variable_name;
	v->a[261979] = actions(12013);
	small_parse_table_13099(v);
}

void	small_parse_table_13099(t_small_parse_table_array *v)
{
	v->a[261980] = 1;
	v->a[261981] = anon_sym_RBRACE3;
	v->a[261982] = state(3532);
	v->a[261983] = 1;
	v->a[261984] = sym_subscript;
	v->a[261985] = state(6428);
	v->a[261986] = 1;
	v->a[261987] = aux_sym__expansion_body_repeat1;
	v->a[261988] = state(6472);
	v->a[261989] = 1;
	v->a[261990] = sym_command_substitution;
	v->a[261991] = state(7476);
	v->a[261992] = 1;
	v->a[261993] = sym__expansion_body;
	v->a[261994] = actions(11762);
	v->a[261995] = 2;
	v->a[261996] = anon_sym_POUND2;
	v->a[261997] = anon_sym_EQ2;
	v->a[261998] = actions(8050);
	v->a[261999] = 3;
	small_parse_table_13100(v);
}

/* EOF small_parse_table_2619.c */
