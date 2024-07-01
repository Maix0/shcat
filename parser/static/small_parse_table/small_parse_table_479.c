/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_479.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2395(t_small_parse_table_array *v)
{
	v->a[47900] = anon_sym_AMP_AMP;
	v->a[47901] = anon_sym_PIPE_PIPE;
	v->a[47902] = anon_sym_LT_LT;
	v->a[47903] = anon_sym_LT_LT_DASH;
	v->a[47904] = aux_sym_heredoc_redirect_token1;
	v->a[47905] = anon_sym_AMP;
	v->a[47906] = anon_sym_SEMI;
	v->a[47907] = 17;
	v->a[47908] = actions(3);
	v->a[47909] = 1;
	v->a[47910] = sym_comment;
	v->a[47911] = actions(59);
	v->a[47912] = 1;
	v->a[47913] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47914] = actions(61);
	v->a[47915] = 1;
	v->a[47916] = anon_sym_DOLLAR;
	v->a[47917] = actions(63);
	v->a[47918] = 1;
	v->a[47919] = anon_sym_DQUOTE;
	small_parse_table_2396(v);
}

void	small_parse_table_2396(t_small_parse_table_array *v)
{
	v->a[47920] = actions(67);
	v->a[47921] = 1;
	v->a[47922] = anon_sym_DOLLAR_LBRACE;
	v->a[47923] = actions(69);
	v->a[47924] = 1;
	v->a[47925] = anon_sym_DOLLAR_LPAREN;
	v->a[47926] = actions(71);
	v->a[47927] = 1;
	v->a[47928] = anon_sym_BQUOTE;
	v->a[47929] = actions(377);
	v->a[47930] = 1;
	v->a[47931] = sym_variable_name;
	v->a[47932] = actions(1256);
	v->a[47933] = 1;
	v->a[47934] = sym_file_descriptor;
	v->a[47935] = state(191);
	v->a[47936] = 1;
	v->a[47937] = sym_command_name;
	v->a[47938] = state(650);
	v->a[47939] = 1;
	small_parse_table_2397(v);
}

void	small_parse_table_2397(t_small_parse_table_array *v)
{
	v->a[47940] = sym_concatenation;
	v->a[47941] = state(1385);
	v->a[47942] = 1;
	v->a[47943] = sym_file_redirect;
	v->a[47944] = actions(1254);
	v->a[47945] = 2;
	v->a[47946] = anon_sym_LT_AMP_DASH;
	v->a[47947] = anon_sym_GT_AMP_DASH;
	v->a[47948] = state(1132);
	v->a[47949] = 2;
	v->a[47950] = sym_variable_assignment;
	v->a[47951] = aux_sym_command_repeat1;
	v->a[47952] = actions(65);
	v->a[47953] = 3;
	v->a[47954] = sym_raw_string;
	v->a[47955] = sym_number;
	v->a[47956] = sym_word;
	v->a[47957] = state(443);
	v->a[47958] = 5;
	v->a[47959] = sym_arithmetic_expansion;
	small_parse_table_2398(v);
}

void	small_parse_table_2398(t_small_parse_table_array *v)
{
	v->a[47960] = sym_string;
	v->a[47961] = sym_simple_expansion;
	v->a[47962] = sym_expansion;
	v->a[47963] = sym_command_substitution;
	v->a[47964] = actions(1252);
	v->a[47965] = 6;
	v->a[47966] = anon_sym_LT;
	v->a[47967] = anon_sym_GT;
	v->a[47968] = anon_sym_GT_GT;
	v->a[47969] = anon_sym_LT_AMP;
	v->a[47970] = anon_sym_GT_AMP;
	v->a[47971] = anon_sym_GT_PIPE;
	v->a[47972] = 7;
	v->a[47973] = actions(3);
	v->a[47974] = 1;
	v->a[47975] = sym_comment;
	v->a[47976] = actions(1530);
	v->a[47977] = 1;
	v->a[47978] = sym_file_descriptor;
	v->a[47979] = actions(1533);
	small_parse_table_2399(v);
}

void	small_parse_table_2399(t_small_parse_table_array *v)
{
	v->a[47980] = 1;
	v->a[47981] = sym_variable_name;
	v->a[47982] = actions(1663);
	v->a[47983] = 1;
	v->a[47984] = anon_sym_RPAREN;
	v->a[47985] = actions(1527);
	v->a[47986] = 8;
	v->a[47987] = anon_sym_LT;
	v->a[47988] = anon_sym_GT;
	v->a[47989] = anon_sym_GT_GT;
	v->a[47990] = anon_sym_LT_AMP;
	v->a[47991] = anon_sym_GT_AMP;
	v->a[47992] = anon_sym_GT_PIPE;
	v->a[47993] = anon_sym_LT_AMP_DASH;
	v->a[47994] = anon_sym_GT_AMP_DASH;
	v->a[47995] = actions(1520);
	v->a[47996] = 9;
	v->a[47997] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47998] = anon_sym_DOLLAR;
	v->a[47999] = anon_sym_DQUOTE;
	small_parse_table_2400(v);
}

/* EOF small_parse_table_479.c */
