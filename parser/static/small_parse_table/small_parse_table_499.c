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
	v->a[49900] = anon_sym_DQUOTE;
	v->a[49901] = state(1176);
	v->a[49902] = 1;
	v->a[49903] = aux_sym_string_repeat1;
	v->a[49904] = state(1394);
	v->a[49905] = 4;
	v->a[49906] = sym_arithmetic_expansion;
	v->a[49907] = sym_simple_expansion;
	v->a[49908] = sym_expansion;
	v->a[49909] = sym_command_substitution;
	v->a[49910] = 10;
	v->a[49911] = actions(3);
	v->a[49912] = 1;
	v->a[49913] = sym_comment;
	v->a[49914] = actions(2293);
	v->a[49915] = 1;
	v->a[49916] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49917] = actions(2299);
	v->a[49918] = 1;
	v->a[49919] = sym_string_content;
	small_parse_table_2496(v);
}

void	small_parse_table_2496(t_small_parse_table_array *v)
{
	v->a[49920] = actions(2301);
	v->a[49921] = 1;
	v->a[49922] = anon_sym_DOLLAR_LBRACE;
	v->a[49923] = actions(2303);
	v->a[49924] = 1;
	v->a[49925] = anon_sym_DOLLAR_LPAREN;
	v->a[49926] = actions(2305);
	v->a[49927] = 1;
	v->a[49928] = anon_sym_BQUOTE;
	v->a[49929] = actions(2440);
	v->a[49930] = 1;
	v->a[49931] = anon_sym_DOLLAR;
	v->a[49932] = actions(2442);
	v->a[49933] = 1;
	v->a[49934] = anon_sym_DQUOTE;
	v->a[49935] = state(1176);
	v->a[49936] = 1;
	v->a[49937] = aux_sym_string_repeat1;
	v->a[49938] = state(1394);
	v->a[49939] = 4;
	small_parse_table_2497(v);
}

void	small_parse_table_2497(t_small_parse_table_array *v)
{
	v->a[49940] = sym_arithmetic_expansion;
	v->a[49941] = sym_simple_expansion;
	v->a[49942] = sym_expansion;
	v->a[49943] = sym_command_substitution;
	v->a[49944] = 10;
	v->a[49945] = actions(3);
	v->a[49946] = 1;
	v->a[49947] = sym_comment;
	v->a[49948] = actions(2293);
	v->a[49949] = 1;
	v->a[49950] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49951] = actions(2299);
	v->a[49952] = 1;
	v->a[49953] = sym_string_content;
	v->a[49954] = actions(2301);
	v->a[49955] = 1;
	v->a[49956] = anon_sym_DOLLAR_LBRACE;
	v->a[49957] = actions(2303);
	v->a[49958] = 1;
	v->a[49959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2498(v);
}

void	small_parse_table_2498(t_small_parse_table_array *v)
{
	v->a[49960] = actions(2305);
	v->a[49961] = 1;
	v->a[49962] = anon_sym_BQUOTE;
	v->a[49963] = actions(2444);
	v->a[49964] = 1;
	v->a[49965] = anon_sym_DOLLAR;
	v->a[49966] = actions(2446);
	v->a[49967] = 1;
	v->a[49968] = anon_sym_DQUOTE;
	v->a[49969] = state(1138);
	v->a[49970] = 1;
	v->a[49971] = aux_sym_string_repeat1;
	v->a[49972] = state(1394);
	v->a[49973] = 4;
	v->a[49974] = sym_arithmetic_expansion;
	v->a[49975] = sym_simple_expansion;
	v->a[49976] = sym_expansion;
	v->a[49977] = sym_command_substitution;
	v->a[49978] = 4;
	v->a[49979] = actions(3);
	small_parse_table_2499(v);
}

void	small_parse_table_2499(t_small_parse_table_array *v)
{
	v->a[49980] = 1;
	v->a[49981] = sym_comment;
	v->a[49982] = actions(2398);
	v->a[49983] = 1;
	v->a[49984] = anon_sym_esac;
	v->a[49985] = actions(2400);
	v->a[49986] = 1;
	v->a[49987] = sym_extglob_pattern;
	v->a[49988] = actions(2396);
	v->a[49989] = 10;
	v->a[49990] = anon_sym_LPAREN;
	v->a[49991] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49992] = anon_sym_DOLLAR;
	v->a[49993] = anon_sym_DQUOTE;
	v->a[49994] = sym_raw_string;
	v->a[49995] = sym_number;
	v->a[49996] = anon_sym_DOLLAR_LBRACE;
	v->a[49997] = anon_sym_DOLLAR_LPAREN;
	v->a[49998] = anon_sym_BQUOTE;
	v->a[49999] = sym_word;
	small_parse_table_2500(v);
}

/* EOF small_parse_table_499.c */
