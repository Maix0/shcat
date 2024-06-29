/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_499.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2495(t_small_parse_table_array *v)
{
	v->a[49900] = actions(1520);
	v->a[49901] = 27;
	v->a[49902] = anon_sym_for;
	v->a[49903] = anon_sym_while;
	v->a[49904] = anon_sym_until;
	v->a[49905] = anon_sym_if;
	v->a[49906] = anon_sym_case;
	v->a[49907] = anon_sym_LPAREN;
	v->a[49908] = anon_sym_LBRACE;
	v->a[49909] = anon_sym_BANG;
	v->a[49910] = anon_sym_LT;
	v->a[49911] = anon_sym_GT;
	v->a[49912] = anon_sym_GT_GT;
	v->a[49913] = anon_sym_AMP_GT;
	v->a[49914] = anon_sym_AMP_GT_GT;
	v->a[49915] = anon_sym_LT_AMP;
	v->a[49916] = anon_sym_GT_AMP;
	v->a[49917] = anon_sym_GT_PIPE;
	v->a[49918] = anon_sym_LT_AMP_DASH;
	v->a[49919] = anon_sym_GT_AMP_DASH;
	small_parse_table_2496(v);
}

void	small_parse_table_2496(t_small_parse_table_array *v)
{
	v->a[49920] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49921] = anon_sym_DOLLAR;
	v->a[49922] = anon_sym_DQUOTE;
	v->a[49923] = sym_raw_string;
	v->a[49924] = sym_number;
	v->a[49925] = anon_sym_DOLLAR_LBRACE;
	v->a[49926] = anon_sym_DOLLAR_LPAREN;
	v->a[49927] = anon_sym_BQUOTE;
	v->a[49928] = sym_word;
	v->a[49929] = 17;
	v->a[49930] = actions(3);
	v->a[49931] = 1;
	v->a[49932] = sym_comment;
	v->a[49933] = actions(59);
	v->a[49934] = 1;
	v->a[49935] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49936] = actions(61);
	v->a[49937] = 1;
	v->a[49938] = anon_sym_DOLLAR;
	v->a[49939] = actions(63);
	small_parse_table_2497(v);
}

void	small_parse_table_2497(t_small_parse_table_array *v)
{
	v->a[49940] = 1;
	v->a[49941] = anon_sym_DQUOTE;
	v->a[49942] = actions(67);
	v->a[49943] = 1;
	v->a[49944] = anon_sym_DOLLAR_LBRACE;
	v->a[49945] = actions(69);
	v->a[49946] = 1;
	v->a[49947] = anon_sym_DOLLAR_LPAREN;
	v->a[49948] = actions(71);
	v->a[49949] = 1;
	v->a[49950] = anon_sym_BQUOTE;
	v->a[49951] = actions(377);
	v->a[49952] = 1;
	v->a[49953] = sym_variable_name;
	v->a[49954] = actions(1068);
	v->a[49955] = 1;
	v->a[49956] = sym_file_descriptor;
	v->a[49957] = state(180);
	v->a[49958] = 1;
	v->a[49959] = sym_command_name;
	small_parse_table_2498(v);
}

void	small_parse_table_2498(t_small_parse_table_array *v)
{
	v->a[49960] = state(624);
	v->a[49961] = 1;
	v->a[49962] = sym_concatenation;
	v->a[49963] = state(1343);
	v->a[49964] = 1;
	v->a[49965] = sym_file_redirect;
	v->a[49966] = actions(1066);
	v->a[49967] = 2;
	v->a[49968] = anon_sym_LT_AMP_DASH;
	v->a[49969] = anon_sym_GT_AMP_DASH;
	v->a[49970] = state(1100);
	v->a[49971] = 2;
	v->a[49972] = sym_variable_assignment;
	v->a[49973] = aux_sym_command_repeat1;
	v->a[49974] = actions(228);
	v->a[49975] = 3;
	v->a[49976] = sym_raw_string;
	v->a[49977] = sym_number;
	v->a[49978] = sym_word;
	v->a[49979] = state(299);
	small_parse_table_2499(v);
}

void	small_parse_table_2499(t_small_parse_table_array *v)
{
	v->a[49980] = 5;
	v->a[49981] = sym_arithmetic_expansion;
	v->a[49982] = sym_string;
	v->a[49983] = sym_simple_expansion;
	v->a[49984] = sym_expansion;
	v->a[49985] = sym_command_substitution;
	v->a[49986] = actions(1064);
	v->a[49987] = 8;
	v->a[49988] = anon_sym_LT;
	v->a[49989] = anon_sym_GT;
	v->a[49990] = anon_sym_GT_GT;
	v->a[49991] = anon_sym_AMP_GT;
	v->a[49992] = anon_sym_AMP_GT_GT;
	v->a[49993] = anon_sym_LT_AMP;
	v->a[49994] = anon_sym_GT_AMP;
	v->a[49995] = anon_sym_GT_PIPE;
	v->a[49996] = 7;
	v->a[49997] = actions(3);
	v->a[49998] = 1;
	v->a[49999] = sym_comment;
	small_parse_table_2500(v);
}

/* EOF small_parse_table_499.c */
