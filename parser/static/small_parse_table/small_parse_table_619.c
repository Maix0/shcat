/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_619.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3095(t_small_parse_table_array *v)
{
	v->a[61900] = anon_sym_QMARK;
	v->a[61901] = anon_sym_DOLLAR;
	v->a[61902] = anon_sym_AT;
	v->a[61903] = 10;
	v->a[61904] = actions(3);
	v->a[61905] = 1;
	v->a[61906] = sym_comment;
	v->a[61907] = actions(2548);
	v->a[61908] = 1;
	v->a[61909] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61910] = actions(2554);
	v->a[61911] = 1;
	v->a[61912] = sym_string_content;
	v->a[61913] = actions(2556);
	v->a[61914] = 1;
	v->a[61915] = anon_sym_DOLLAR_LBRACE;
	v->a[61916] = actions(2558);
	v->a[61917] = 1;
	v->a[61918] = anon_sym_DOLLAR_LPAREN;
	v->a[61919] = actions(2560);
	small_parse_table_3096(v);
}

void	small_parse_table_3096(t_small_parse_table_array *v)
{
	v->a[61920] = 1;
	v->a[61921] = anon_sym_BQUOTE;
	v->a[61922] = actions(2625);
	v->a[61923] = 1;
	v->a[61924] = anon_sym_DOLLAR;
	v->a[61925] = actions(2627);
	v->a[61926] = 1;
	v->a[61927] = anon_sym_DQUOTE;
	v->a[61928] = state(1334);
	v->a[61929] = 1;
	v->a[61930] = aux_sym_string_repeat1;
	v->a[61931] = state(1477);
	v->a[61932] = 4;
	v->a[61933] = sym_arithmetic_expansion;
	v->a[61934] = sym_simple_expansion;
	v->a[61935] = sym_expansion;
	v->a[61936] = sym_command_substitution;
	v->a[61937] = 8;
	v->a[61938] = actions(3);
	v->a[61939] = 1;
	small_parse_table_3097(v);
}

void	small_parse_table_3097(t_small_parse_table_array *v)
{
	v->a[61940] = sym_comment;
	v->a[61941] = actions(2566);
	v->a[61942] = 1;
	v->a[61943] = anon_sym_POUND;
	v->a[61944] = actions(2568);
	v->a[61945] = 1;
	v->a[61946] = aux_sym__simple_variable_name_token1;
	v->a[61947] = actions(2570);
	v->a[61948] = 1;
	v->a[61949] = anon_sym_0;
	v->a[61950] = actions(2572);
	v->a[61951] = 1;
	v->a[61952] = sym_variable_name;
	v->a[61953] = actions(2629);
	v->a[61954] = 1;
	v->a[61955] = anon_sym_RBRACE;
	v->a[61956] = state(1713);
	v->a[61957] = 1;
	v->a[61958] = sym__expansion_body;
	v->a[61959] = actions(2564);
	small_parse_table_3098(v);
}

void	small_parse_table_3098(t_small_parse_table_array *v)
{
	v->a[61960] = 6;
	v->a[61961] = anon_sym_BANG;
	v->a[61962] = anon_sym_DASH;
	v->a[61963] = anon_sym_STAR;
	v->a[61964] = anon_sym_QMARK;
	v->a[61965] = anon_sym_DOLLAR;
	v->a[61966] = anon_sym_AT;
	v->a[61967] = 10;
	v->a[61968] = actions(3);
	v->a[61969] = 1;
	v->a[61970] = sym_comment;
	v->a[61971] = actions(2548);
	v->a[61972] = 1;
	v->a[61973] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61974] = actions(2554);
	v->a[61975] = 1;
	v->a[61976] = sym_string_content;
	v->a[61977] = actions(2556);
	v->a[61978] = 1;
	v->a[61979] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3099(v);
}

void	small_parse_table_3099(t_small_parse_table_array *v)
{
	v->a[61980] = actions(2558);
	v->a[61981] = 1;
	v->a[61982] = anon_sym_DOLLAR_LPAREN;
	v->a[61983] = actions(2560);
	v->a[61984] = 1;
	v->a[61985] = anon_sym_BQUOTE;
	v->a[61986] = actions(2631);
	v->a[61987] = 1;
	v->a[61988] = anon_sym_DOLLAR;
	v->a[61989] = actions(2633);
	v->a[61990] = 1;
	v->a[61991] = anon_sym_DQUOTE;
	v->a[61992] = state(1324);
	v->a[61993] = 1;
	v->a[61994] = aux_sym_string_repeat1;
	v->a[61995] = state(1477);
	v->a[61996] = 4;
	v->a[61997] = sym_arithmetic_expansion;
	v->a[61998] = sym_simple_expansion;
	v->a[61999] = sym_expansion;
	small_parse_table_3100(v);
}

/* EOF small_parse_table_619.c */
