/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2109.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10545(t_small_parse_table_array *v)
{
	v->a[210900] = sym_string;
	v->a[210901] = sym_number;
	v->a[210902] = sym_simple_expansion;
	v->a[210903] = sym_expansion;
	v->a[210904] = sym_command_substitution;
	v->a[210905] = 18;
	v->a[210906] = actions(3);
	v->a[210907] = 1;
	v->a[210908] = sym_comment;
	v->a[210909] = actions(111);
	v->a[210910] = 1;
	v->a[210911] = anon_sym_DOLLAR_LBRACK;
	v->a[210912] = actions(117);
	v->a[210913] = 1;
	v->a[210914] = anon_sym_DQUOTE;
	v->a[210915] = actions(121);
	v->a[210916] = 1;
	v->a[210917] = aux_sym_number_token1;
	v->a[210918] = actions(123);
	v->a[210919] = 1;
	small_parse_table_10546(v);
}

void	small_parse_table_10546(t_small_parse_table_array *v)
{
	v->a[210920] = aux_sym_number_token2;
	v->a[210921] = actions(125);
	v->a[210922] = 1;
	v->a[210923] = anon_sym_DOLLAR_LBRACE;
	v->a[210924] = actions(127);
	v->a[210925] = 1;
	v->a[210926] = anon_sym_DOLLAR_LPAREN;
	v->a[210927] = actions(129);
	v->a[210928] = 1;
	v->a[210929] = anon_sym_BQUOTE;
	v->a[210930] = actions(131);
	v->a[210931] = 1;
	v->a[210932] = anon_sym_DOLLAR_BQUOTE;
	v->a[210933] = actions(141);
	v->a[210934] = 1;
	v->a[210935] = sym__brace_start;
	v->a[210936] = actions(9340);
	v->a[210937] = 1;
	v->a[210938] = sym_word;
	v->a[210939] = actions(9346);
	small_parse_table_10547(v);
}

void	small_parse_table_10547(t_small_parse_table_array *v)
{
	v->a[210940] = 1;
	v->a[210941] = sym__comment_word;
	v->a[210942] = actions(10010);
	v->a[210943] = 1;
	v->a[210944] = anon_sym_DOLLAR;
	v->a[210945] = actions(109);
	v->a[210946] = 2;
	v->a[210947] = anon_sym_LPAREN_LPAREN;
	v->a[210948] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[210949] = actions(133);
	v->a[210950] = 2;
	v->a[210951] = anon_sym_LT_LPAREN;
	v->a[210952] = anon_sym_GT_LPAREN;
	v->a[210953] = actions(9342);
	v->a[210954] = 2;
	v->a[210955] = sym_test_operator;
	v->a[210956] = sym__special_character;
	v->a[210957] = actions(9344);
	v->a[210958] = 3;
	v->a[210959] = sym__bare_dollar;
	small_parse_table_10548(v);
}

void	small_parse_table_10548(t_small_parse_table_array *v)
{
	v->a[210960] = sym_raw_string;
	v->a[210961] = sym_ansi_c_string;
	v->a[210962] = state(482);
	v->a[210963] = 9;
	v->a[210964] = sym_arithmetic_expansion;
	v->a[210965] = sym_brace_expression;
	v->a[210966] = sym_string;
	v->a[210967] = sym_translated_string;
	v->a[210968] = sym_number;
	v->a[210969] = sym_simple_expansion;
	v->a[210970] = sym_expansion;
	v->a[210971] = sym_command_substitution;
	v->a[210972] = sym_process_substitution;
	v->a[210973] = 18;
	v->a[210974] = actions(3);
	v->a[210975] = 1;
	v->a[210976] = sym_comment;
	v->a[210977] = actions(2309);
	v->a[210978] = 1;
	v->a[210979] = aux_sym_number_token1;
	small_parse_table_10549(v);
}

void	small_parse_table_10549(t_small_parse_table_array *v)
{
	v->a[210980] = actions(2311);
	v->a[210981] = 1;
	v->a[210982] = aux_sym_number_token2;
	v->a[210983] = actions(2315);
	v->a[210984] = 1;
	v->a[210985] = anon_sym_DOLLAR_LPAREN;
	v->a[210986] = actions(2327);
	v->a[210987] = 1;
	v->a[210988] = sym__brace_start;
	v->a[210989] = actions(9982);
	v->a[210990] = 1;
	v->a[210991] = sym_word;
	v->a[210992] = actions(9986);
	v->a[210993] = 1;
	v->a[210994] = anon_sym_DOLLAR_LBRACK;
	v->a[210995] = actions(9992);
	v->a[210996] = 1;
	v->a[210997] = anon_sym_DQUOTE;
	v->a[210998] = actions(9996);
	v->a[210999] = 1;
	small_parse_table_10550(v);
}

/* EOF small_parse_table_2109.c */
