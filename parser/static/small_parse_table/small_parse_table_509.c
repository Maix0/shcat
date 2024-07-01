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
	v->a[50900] = sym_case_item;
	v->a[50901] = state(2253);
	v->a[50902] = 1;
	v->a[50903] = sym__case_item_last;
	v->a[50904] = state(2096);
	v->a[50905] = 2;
	v->a[50906] = sym_concatenation;
	v->a[50907] = sym__extglob_blob;
	v->a[50908] = actions(1770);
	v->a[50909] = 3;
	v->a[50910] = sym_raw_string;
	v->a[50911] = sym_number;
	v->a[50912] = sym_word;
	v->a[50913] = actions(1776);
	v->a[50914] = 4;
	v->a[50915] = anon_sym_SEMI_SEMI;
	v->a[50916] = aux_sym_heredoc_redirect_token1;
	v->a[50917] = anon_sym_AMP;
	v->a[50918] = anon_sym_SEMI;
	v->a[50919] = state(2001);
	small_parse_table_2546(v);
}

void	small_parse_table_2546(t_small_parse_table_array *v)
{
	v->a[50920] = 5;
	v->a[50921] = sym_arithmetic_expansion;
	v->a[50922] = sym_string;
	v->a[50923] = sym_simple_expansion;
	v->a[50924] = sym_expansion;
	v->a[50925] = sym_command_substitution;
	v->a[50926] = 4;
	v->a[50927] = actions(3);
	v->a[50928] = 1;
	v->a[50929] = sym_comment;
	v->a[50930] = actions(1575);
	v->a[50931] = 1;
	v->a[50932] = anon_sym_BQUOTE;
	v->a[50933] = actions(1577);
	v->a[50934] = 2;
	v->a[50935] = sym_file_descriptor;
	v->a[50936] = sym_variable_name;
	v->a[50937] = actions(1573);
	v->a[50938] = 24;
	v->a[50939] = anon_sym_for;
	small_parse_table_2547(v);
}

void	small_parse_table_2547(t_small_parse_table_array *v)
{
	v->a[50940] = anon_sym_while;
	v->a[50941] = anon_sym_until;
	v->a[50942] = anon_sym_if;
	v->a[50943] = anon_sym_case;
	v->a[50944] = anon_sym_LPAREN;
	v->a[50945] = anon_sym_LBRACE;
	v->a[50946] = anon_sym_BANG;
	v->a[50947] = anon_sym_LT;
	v->a[50948] = anon_sym_GT;
	v->a[50949] = anon_sym_GT_GT;
	v->a[50950] = anon_sym_LT_AMP;
	v->a[50951] = anon_sym_GT_AMP;
	v->a[50952] = anon_sym_GT_PIPE;
	v->a[50953] = anon_sym_LT_AMP_DASH;
	v->a[50954] = anon_sym_GT_AMP_DASH;
	v->a[50955] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50956] = anon_sym_DOLLAR;
	v->a[50957] = anon_sym_DQUOTE;
	v->a[50958] = sym_raw_string;
	v->a[50959] = sym_number;
	small_parse_table_2548(v);
}

void	small_parse_table_2548(t_small_parse_table_array *v)
{
	v->a[50960] = anon_sym_DOLLAR_LBRACE;
	v->a[50961] = anon_sym_DOLLAR_LPAREN;
	v->a[50962] = sym_word;
	v->a[50963] = 4;
	v->a[50964] = actions(3);
	v->a[50965] = 1;
	v->a[50966] = sym_comment;
	v->a[50967] = actions(1575);
	v->a[50968] = 1;
	v->a[50969] = anon_sym_BQUOTE;
	v->a[50970] = actions(1577);
	v->a[50971] = 2;
	v->a[50972] = sym_file_descriptor;
	v->a[50973] = sym_variable_name;
	v->a[50974] = actions(1573);
	v->a[50975] = 24;
	v->a[50976] = anon_sym_for;
	v->a[50977] = anon_sym_while;
	v->a[50978] = anon_sym_until;
	v->a[50979] = anon_sym_if;
	small_parse_table_2549(v);
}

void	small_parse_table_2549(t_small_parse_table_array *v)
{
	v->a[50980] = anon_sym_case;
	v->a[50981] = anon_sym_LPAREN;
	v->a[50982] = anon_sym_LBRACE;
	v->a[50983] = anon_sym_BANG;
	v->a[50984] = anon_sym_LT;
	v->a[50985] = anon_sym_GT;
	v->a[50986] = anon_sym_GT_GT;
	v->a[50987] = anon_sym_LT_AMP;
	v->a[50988] = anon_sym_GT_AMP;
	v->a[50989] = anon_sym_GT_PIPE;
	v->a[50990] = anon_sym_LT_AMP_DASH;
	v->a[50991] = anon_sym_GT_AMP_DASH;
	v->a[50992] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50993] = anon_sym_DOLLAR;
	v->a[50994] = anon_sym_DQUOTE;
	v->a[50995] = sym_raw_string;
	v->a[50996] = sym_number;
	v->a[50997] = anon_sym_DOLLAR_LBRACE;
	v->a[50998] = anon_sym_DOLLAR_LPAREN;
	v->a[50999] = sym_word;
	small_parse_table_2550(v);
}

/* EOF small_parse_table_509.c */
