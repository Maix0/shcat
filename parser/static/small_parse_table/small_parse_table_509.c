/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_509.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2545(t_small_parse_table_array *v)
{
	v->a[50900] = 1;
	v->a[50901] = sym_comment;
	v->a[50902] = actions(2293);
	v->a[50903] = 1;
	v->a[50904] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50905] = actions(2299);
	v->a[50906] = 1;
	v->a[50907] = sym_string_content;
	v->a[50908] = actions(2301);
	v->a[50909] = 1;
	v->a[50910] = anon_sym_DOLLAR_LBRACE;
	v->a[50911] = actions(2303);
	v->a[50912] = 1;
	v->a[50913] = anon_sym_DOLLAR_LPAREN;
	v->a[50914] = actions(2305);
	v->a[50915] = 1;
	v->a[50916] = anon_sym_BQUOTE;
	v->a[50917] = actions(2543);
	v->a[50918] = 1;
	v->a[50919] = anon_sym_DOLLAR;
	small_parse_table_2546(v);
}

void	small_parse_table_2546(t_small_parse_table_array *v)
{
	v->a[50920] = actions(2545);
	v->a[50921] = 1;
	v->a[50922] = anon_sym_DQUOTE;
	v->a[50923] = state(1176);
	v->a[50924] = 1;
	v->a[50925] = aux_sym_string_repeat1;
	v->a[50926] = state(1394);
	v->a[50927] = 4;
	v->a[50928] = sym_arithmetic_expansion;
	v->a[50929] = sym_simple_expansion;
	v->a[50930] = sym_expansion;
	v->a[50931] = sym_command_substitution;
	v->a[50932] = 8;
	v->a[50933] = actions(3);
	v->a[50934] = 1;
	v->a[50935] = sym_comment;
	v->a[50936] = actions(2277);
	v->a[50937] = 1;
	v->a[50938] = anon_sym_POUND;
	v->a[50939] = actions(2279);
	small_parse_table_2547(v);
}

void	small_parse_table_2547(t_small_parse_table_array *v)
{
	v->a[50940] = 1;
	v->a[50941] = aux_sym__simple_variable_name_token1;
	v->a[50942] = actions(2281);
	v->a[50943] = 1;
	v->a[50944] = anon_sym_0;
	v->a[50945] = actions(2283);
	v->a[50946] = 1;
	v->a[50947] = sym_variable_name;
	v->a[50948] = actions(2547);
	v->a[50949] = 1;
	v->a[50950] = anon_sym_RBRACE;
	v->a[50951] = state(1698);
	v->a[50952] = 1;
	v->a[50953] = sym__expansion_body;
	v->a[50954] = actions(2275);
	v->a[50955] = 6;
	v->a[50956] = anon_sym_BANG;
	v->a[50957] = anon_sym_DASH;
	v->a[50958] = anon_sym_STAR;
	v->a[50959] = anon_sym_QMARK;
	small_parse_table_2548(v);
}

void	small_parse_table_2548(t_small_parse_table_array *v)
{
	v->a[50960] = anon_sym_DOLLAR;
	v->a[50961] = anon_sym_AT;
	v->a[50962] = 10;
	v->a[50963] = actions(3);
	v->a[50964] = 1;
	v->a[50965] = sym_comment;
	v->a[50966] = actions(2293);
	v->a[50967] = 1;
	v->a[50968] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50969] = actions(2299);
	v->a[50970] = 1;
	v->a[50971] = sym_string_content;
	v->a[50972] = actions(2301);
	v->a[50973] = 1;
	v->a[50974] = anon_sym_DOLLAR_LBRACE;
	v->a[50975] = actions(2303);
	v->a[50976] = 1;
	v->a[50977] = anon_sym_DOLLAR_LPAREN;
	v->a[50978] = actions(2305);
	v->a[50979] = 1;
	small_parse_table_2549(v);
}

void	small_parse_table_2549(t_small_parse_table_array *v)
{
	v->a[50980] = anon_sym_BQUOTE;
	v->a[50981] = actions(2549);
	v->a[50982] = 1;
	v->a[50983] = anon_sym_DOLLAR;
	v->a[50984] = actions(2551);
	v->a[50985] = 1;
	v->a[50986] = anon_sym_DQUOTE;
	v->a[50987] = state(1166);
	v->a[50988] = 1;
	v->a[50989] = aux_sym_string_repeat1;
	v->a[50990] = state(1394);
	v->a[50991] = 4;
	v->a[50992] = sym_arithmetic_expansion;
	v->a[50993] = sym_simple_expansion;
	v->a[50994] = sym_expansion;
	v->a[50995] = sym_command_substitution;
	v->a[50996] = 5;
	v->a[50997] = actions(3);
	v->a[50998] = 1;
	v->a[50999] = sym_comment;
	small_parse_table_2550(v);
}

/* EOF small_parse_table_509.c */
