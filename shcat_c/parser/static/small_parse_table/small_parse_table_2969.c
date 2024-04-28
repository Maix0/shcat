/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2969.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14845(t_small_parse_table_array *v)
{
	v->a[296900] = anon_sym_LPAREN_LPAREN;
	v->a[296901] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296902] = state(6127);
	v->a[296903] = 4;
	v->a[296904] = sym_arithmetic_expansion;
	v->a[296905] = sym_simple_expansion;
	v->a[296906] = sym_expansion;
	v->a[296907] = sym_command_substitution;
	v->a[296908] = 12;
	v->a[296909] = actions(3);
	v->a[296910] = 1;
	v->a[296911] = sym_comment;
	v->a[296912] = actions(13060);
	v->a[296913] = 1;
	v->a[296914] = anon_sym_DOLLAR_LBRACK;
	v->a[296915] = actions(13066);
	v->a[296916] = 1;
	v->a[296917] = sym_string_content;
	v->a[296918] = actions(13068);
	v->a[296919] = 1;
	small_parse_table_14846(v);
}

void	small_parse_table_14846(t_small_parse_table_array *v)
{
	v->a[296920] = anon_sym_DOLLAR_LBRACE;
	v->a[296921] = actions(13070);
	v->a[296922] = 1;
	v->a[296923] = anon_sym_DOLLAR_LPAREN;
	v->a[296924] = actions(13072);
	v->a[296925] = 1;
	v->a[296926] = anon_sym_BQUOTE;
	v->a[296927] = actions(13074);
	v->a[296928] = 1;
	v->a[296929] = anon_sym_DOLLAR_BQUOTE;
	v->a[296930] = actions(13358);
	v->a[296931] = 1;
	v->a[296932] = anon_sym_DOLLAR;
	v->a[296933] = actions(13360);
	v->a[296934] = 1;
	v->a[296935] = anon_sym_DQUOTE;
	v->a[296936] = state(5768);
	v->a[296937] = 1;
	v->a[296938] = aux_sym_string_repeat1;
	v->a[296939] = actions(13058);
	small_parse_table_14847(v);
}

void	small_parse_table_14847(t_small_parse_table_array *v)
{
	v->a[296940] = 2;
	v->a[296941] = anon_sym_LPAREN_LPAREN;
	v->a[296942] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296943] = state(6127);
	v->a[296944] = 4;
	v->a[296945] = sym_arithmetic_expansion;
	v->a[296946] = sym_simple_expansion;
	v->a[296947] = sym_expansion;
	v->a[296948] = sym_command_substitution;
	v->a[296949] = 12;
	v->a[296950] = actions(3);
	v->a[296951] = 1;
	v->a[296952] = sym_comment;
	v->a[296953] = actions(13060);
	v->a[296954] = 1;
	v->a[296955] = anon_sym_DOLLAR_LBRACK;
	v->a[296956] = actions(13066);
	v->a[296957] = 1;
	v->a[296958] = sym_string_content;
	v->a[296959] = actions(13068);
	small_parse_table_14848(v);
}

void	small_parse_table_14848(t_small_parse_table_array *v)
{
	v->a[296960] = 1;
	v->a[296961] = anon_sym_DOLLAR_LBRACE;
	v->a[296962] = actions(13070);
	v->a[296963] = 1;
	v->a[296964] = anon_sym_DOLLAR_LPAREN;
	v->a[296965] = actions(13072);
	v->a[296966] = 1;
	v->a[296967] = anon_sym_BQUOTE;
	v->a[296968] = actions(13074);
	v->a[296969] = 1;
	v->a[296970] = anon_sym_DOLLAR_BQUOTE;
	v->a[296971] = actions(13362);
	v->a[296972] = 1;
	v->a[296973] = anon_sym_DOLLAR;
	v->a[296974] = actions(13364);
	v->a[296975] = 1;
	v->a[296976] = anon_sym_DQUOTE;
	v->a[296977] = state(5813);
	v->a[296978] = 1;
	v->a[296979] = aux_sym_string_repeat1;
	small_parse_table_14849(v);
}

void	small_parse_table_14849(t_small_parse_table_array *v)
{
	v->a[296980] = actions(13058);
	v->a[296981] = 2;
	v->a[296982] = anon_sym_LPAREN_LPAREN;
	v->a[296983] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296984] = state(6127);
	v->a[296985] = 4;
	v->a[296986] = sym_arithmetic_expansion;
	v->a[296987] = sym_simple_expansion;
	v->a[296988] = sym_expansion;
	v->a[296989] = sym_command_substitution;
	v->a[296990] = 12;
	v->a[296991] = actions(3);
	v->a[296992] = 1;
	v->a[296993] = sym_comment;
	v->a[296994] = actions(13060);
	v->a[296995] = 1;
	v->a[296996] = anon_sym_DOLLAR_LBRACK;
	v->a[296997] = actions(13066);
	v->a[296998] = 1;
	v->a[296999] = sym_string_content;
	small_parse_table_14850(v);
}

/* EOF small_parse_table_2969.c */
