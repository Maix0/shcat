/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2079.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10395(t_small_parse_table_array *v)
{
	v->a[207900] = anon_sym_DOLLAR_BQUOTE;
	v->a[207901] = actions(8208);
	v->a[207902] = 1;
	v->a[207903] = sym__brace_start;
	v->a[207904] = actions(9720);
	v->a[207905] = 1;
	v->a[207906] = sym_word;
	v->a[207907] = actions(9722);
	v->a[207908] = 1;
	v->a[207909] = anon_sym_DOLLAR;
	v->a[207910] = actions(9728);
	v->a[207911] = 1;
	v->a[207912] = sym__comment_word;
	v->a[207913] = actions(8174);
	v->a[207914] = 2;
	v->a[207915] = anon_sym_LPAREN_LPAREN;
	v->a[207916] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[207917] = actions(8200);
	v->a[207918] = 2;
	v->a[207919] = anon_sym_LT_LPAREN;
	small_parse_table_10396(v);
}

void	small_parse_table_10396(t_small_parse_table_array *v)
{
	v->a[207920] = anon_sym_GT_LPAREN;
	v->a[207921] = actions(9724);
	v->a[207922] = 2;
	v->a[207923] = sym_test_operator;
	v->a[207924] = sym__special_character;
	v->a[207925] = actions(9726);
	v->a[207926] = 3;
	v->a[207927] = sym__bare_dollar;
	v->a[207928] = sym_raw_string;
	v->a[207929] = sym_ansi_c_string;
	v->a[207930] = state(1590);
	v->a[207931] = 9;
	v->a[207932] = sym_arithmetic_expansion;
	v->a[207933] = sym_brace_expression;
	v->a[207934] = sym_string;
	v->a[207935] = sym_translated_string;
	v->a[207936] = sym_number;
	v->a[207937] = sym_simple_expansion;
	v->a[207938] = sym_expansion;
	v->a[207939] = sym_command_substitution;
	small_parse_table_10397(v);
}

void	small_parse_table_10397(t_small_parse_table_array *v)
{
	v->a[207940] = sym_process_substitution;
	v->a[207941] = 18;
	v->a[207942] = actions(3);
	v->a[207943] = 1;
	v->a[207944] = sym_comment;
	v->a[207945] = actions(111);
	v->a[207946] = 1;
	v->a[207947] = anon_sym_DOLLAR_LBRACK;
	v->a[207948] = actions(117);
	v->a[207949] = 1;
	v->a[207950] = anon_sym_DQUOTE;
	v->a[207951] = actions(121);
	v->a[207952] = 1;
	v->a[207953] = aux_sym_number_token1;
	v->a[207954] = actions(123);
	v->a[207955] = 1;
	v->a[207956] = aux_sym_number_token2;
	v->a[207957] = actions(125);
	v->a[207958] = 1;
	v->a[207959] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10398(v);
}

void	small_parse_table_10398(t_small_parse_table_array *v)
{
	v->a[207960] = actions(127);
	v->a[207961] = 1;
	v->a[207962] = anon_sym_DOLLAR_LPAREN;
	v->a[207963] = actions(129);
	v->a[207964] = 1;
	v->a[207965] = anon_sym_BQUOTE;
	v->a[207966] = actions(131);
	v->a[207967] = 1;
	v->a[207968] = anon_sym_DOLLAR_BQUOTE;
	v->a[207969] = actions(141);
	v->a[207970] = 1;
	v->a[207971] = sym__brace_start;
	v->a[207972] = actions(9340);
	v->a[207973] = 1;
	v->a[207974] = sym_word;
	v->a[207975] = actions(9346);
	v->a[207976] = 1;
	v->a[207977] = sym__comment_word;
	v->a[207978] = actions(9730);
	v->a[207979] = 1;
	small_parse_table_10399(v);
}

void	small_parse_table_10399(t_small_parse_table_array *v)
{
	v->a[207980] = anon_sym_DOLLAR;
	v->a[207981] = actions(109);
	v->a[207982] = 2;
	v->a[207983] = anon_sym_LPAREN_LPAREN;
	v->a[207984] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[207985] = actions(133);
	v->a[207986] = 2;
	v->a[207987] = anon_sym_LT_LPAREN;
	v->a[207988] = anon_sym_GT_LPAREN;
	v->a[207989] = actions(9342);
	v->a[207990] = 2;
	v->a[207991] = sym_test_operator;
	v->a[207992] = sym__special_character;
	v->a[207993] = actions(9344);
	v->a[207994] = 3;
	v->a[207995] = sym__bare_dollar;
	v->a[207996] = sym_raw_string;
	v->a[207997] = sym_ansi_c_string;
	v->a[207998] = state(482);
	v->a[207999] = 9;
	small_parse_table_10400(v);
}

/* EOF small_parse_table_2079.c */
