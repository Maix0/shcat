/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1289.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6445(t_small_parse_table_array *v)
{
	v->a[128900] = anon_sym_LT;
	v->a[128901] = anon_sym_GT;
	v->a[128902] = anon_sym_LT_LT;
	v->a[128903] = anon_sym_GT_GT;
	v->a[128904] = anon_sym_PLUS;
	v->a[128905] = anon_sym_DASH;
	v->a[128906] = anon_sym_STAR;
	v->a[128907] = anon_sym_SLASH;
	v->a[128908] = anon_sym_PERCENT;
	v->a[128909] = anon_sym_STAR_STAR;
	v->a[128910] = actions(1369);
	v->a[128911] = 24;
	v->a[128912] = sym__concat;
	v->a[128913] = sym_test_operator;
	v->a[128914] = anon_sym_PLUS_PLUS;
	v->a[128915] = anon_sym_DASH_DASH;
	v->a[128916] = anon_sym_PLUS_EQ;
	v->a[128917] = anon_sym_DASH_EQ;
	v->a[128918] = anon_sym_STAR_EQ;
	v->a[128919] = anon_sym_SLASH_EQ;
	small_parse_table_6446(v);
}

void	small_parse_table_6446(t_small_parse_table_array *v)
{
	v->a[128920] = anon_sym_PERCENT_EQ;
	v->a[128921] = anon_sym_STAR_STAR_EQ;
	v->a[128922] = anon_sym_LT_LT_EQ;
	v->a[128923] = anon_sym_GT_GT_EQ;
	v->a[128924] = anon_sym_AMP_EQ;
	v->a[128925] = anon_sym_CARET_EQ;
	v->a[128926] = anon_sym_PIPE_EQ;
	v->a[128927] = anon_sym_PIPE_PIPE;
	v->a[128928] = anon_sym_AMP_AMP;
	v->a[128929] = anon_sym_EQ_EQ;
	v->a[128930] = anon_sym_BANG_EQ;
	v->a[128931] = anon_sym_LT_EQ;
	v->a[128932] = anon_sym_GT_EQ;
	v->a[128933] = anon_sym_RBRACK;
	v->a[128934] = anon_sym_EQ_TILDE;
	v->a[128935] = anon_sym_QMARK;
	v->a[128936] = 3;
	v->a[128937] = actions(71);
	v->a[128938] = 1;
	v->a[128939] = sym_comment;
	small_parse_table_6447(v);
}

void	small_parse_table_6447(t_small_parse_table_array *v)
{
	v->a[128940] = actions(1340);
	v->a[128941] = 14;
	v->a[128942] = anon_sym_PIPE;
	v->a[128943] = anon_sym_LT;
	v->a[128944] = anon_sym_GT;
	v->a[128945] = anon_sym_LT_LT;
	v->a[128946] = anon_sym_AMP_GT;
	v->a[128947] = anon_sym_LT_AMP;
	v->a[128948] = anon_sym_GT_AMP;
	v->a[128949] = anon_sym_DOLLAR;
	v->a[128950] = aux_sym_number_token1;
	v->a[128951] = aux_sym_number_token2;
	v->a[128952] = anon_sym_DOLLAR_LPAREN;
	v->a[128953] = anon_sym_BQUOTE;
	v->a[128954] = aux_sym__simple_variable_name_token1;
	v->a[128955] = sym_word;
	v->a[128956] = actions(1342);
	v->a[128957] = 26;
	v->a[128958] = sym_file_descriptor;
	v->a[128959] = sym__concat;
	small_parse_table_6448(v);
}

void	small_parse_table_6448(t_small_parse_table_array *v)
{
	v->a[128960] = sym_variable_name;
	v->a[128961] = sym_test_operator;
	v->a[128962] = sym__brace_start;
	v->a[128963] = anon_sym_LPAREN_LPAREN;
	v->a[128964] = anon_sym_PIPE_PIPE;
	v->a[128965] = anon_sym_AMP_AMP;
	v->a[128966] = anon_sym_GT_GT;
	v->a[128967] = anon_sym_PIPE_AMP;
	v->a[128968] = anon_sym_AMP_GT_GT;
	v->a[128969] = anon_sym_GT_PIPE;
	v->a[128970] = anon_sym_LT_AMP_DASH;
	v->a[128971] = anon_sym_GT_AMP_DASH;
	v->a[128972] = anon_sym_LT_LT_DASH;
	v->a[128973] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[128974] = anon_sym_DOLLAR_LBRACK;
	v->a[128975] = aux_sym_concatenation_token1;
	v->a[128976] = sym__special_character;
	v->a[128977] = anon_sym_DQUOTE;
	v->a[128978] = sym_raw_string;
	v->a[128979] = sym_ansi_c_string;
	small_parse_table_6449(v);
}

void	small_parse_table_6449(t_small_parse_table_array *v)
{
	v->a[128980] = anon_sym_DOLLAR_LBRACE;
	v->a[128981] = anon_sym_DOLLAR_BQUOTE;
	v->a[128982] = anon_sym_LT_LPAREN;
	v->a[128983] = anon_sym_GT_LPAREN;
	v->a[128984] = 5;
	v->a[128985] = actions(71);
	v->a[128986] = 1;
	v->a[128987] = sym_comment;
	v->a[128988] = state(2564);
	v->a[128989] = 1;
	v->a[128990] = aux_sym_concatenation_repeat1;
	v->a[128991] = actions(6656);
	v->a[128992] = 2;
	v->a[128993] = sym__concat;
	v->a[128994] = aux_sym_concatenation_token1;
	v->a[128995] = actions(1261);
	v->a[128996] = 14;
	v->a[128997] = anon_sym_PIPE;
	v->a[128998] = anon_sym_LT;
	v->a[128999] = anon_sym_GT;
	small_parse_table_6450(v);
}

/* EOF small_parse_table_1289.c */
