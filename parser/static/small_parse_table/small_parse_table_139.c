/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_139.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_695(t_small_parse_table_array *v)
{
	v->a[13900] = 7;
	v->a[13901] = sym_arithmetic_expansion;
	v->a[13902] = sym_brace_expression;
	v->a[13903] = sym_string;
	v->a[13904] = sym_number;
	v->a[13905] = sym_simple_expansion;
	v->a[13906] = sym_expansion;
	v->a[13907] = sym_command_substitution;
	v->a[13908] = actions(725);
	v->a[13909] = 16;
	v->a[13910] = anon_sym_PIPE;
	v->a[13911] = anon_sym_PIPE_AMP;
	v->a[13912] = anon_sym_AMP_AMP;
	v->a[13913] = anon_sym_PIPE_PIPE;
	v->a[13914] = anon_sym_LT;
	v->a[13915] = anon_sym_GT;
	v->a[13916] = anon_sym_GT_GT;
	v->a[13917] = anon_sym_AMP_GT;
	v->a[13918] = anon_sym_AMP_GT_GT;
	v->a[13919] = anon_sym_LT_AMP;
	small_parse_table_696(v);
}

void	small_parse_table_696(t_small_parse_table_array *v)
{
	v->a[13920] = anon_sym_GT_AMP;
	v->a[13921] = anon_sym_GT_PIPE;
	v->a[13922] = anon_sym_LT_AMP_DASH;
	v->a[13923] = anon_sym_GT_AMP_DASH;
	v->a[13924] = anon_sym_LT_LT;
	v->a[13925] = anon_sym_LT_LT_DASH;
	v->a[13926] = 21;
	v->a[13927] = actions(3);
	v->a[13928] = 1;
	v->a[13929] = sym_comment;
	v->a[13930] = actions(1346);
	v->a[13931] = 1;
	v->a[13932] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13933] = actions(1349);
	v->a[13934] = 1;
	v->a[13935] = anon_sym_DOLLAR;
	v->a[13936] = actions(1355);
	v->a[13937] = 1;
	v->a[13938] = anon_sym_DQUOTE;
	v->a[13939] = actions(1358);
	small_parse_table_697(v);
}

void	small_parse_table_697(t_small_parse_table_array *v)
{
	v->a[13940] = 1;
	v->a[13941] = aux_sym_number_token1;
	v->a[13942] = actions(1361);
	v->a[13943] = 1;
	v->a[13944] = aux_sym_number_token2;
	v->a[13945] = actions(1364);
	v->a[13946] = 1;
	v->a[13947] = anon_sym_DOLLAR_LBRACE;
	v->a[13948] = actions(1367);
	v->a[13949] = 1;
	v->a[13950] = anon_sym_DOLLAR_LPAREN;
	v->a[13951] = actions(1370);
	v->a[13952] = 1;
	v->a[13953] = anon_sym_BQUOTE;
	v->a[13954] = actions(1373);
	v->a[13955] = 1;
	v->a[13956] = anon_sym_DOLLAR_BQUOTE;
	v->a[13957] = actions(1385);
	v->a[13958] = 1;
	v->a[13959] = sym__brace_start;
	small_parse_table_698(v);
}

void	small_parse_table_698(t_small_parse_table_array *v)
{
	v->a[13960] = actions(2424);
	v->a[13961] = 1;
	v->a[13962] = sym__special_character;
	v->a[13963] = actions(2427);
	v->a[13964] = 1;
	v->a[13965] = aux_sym__simple_variable_name_token1;
	v->a[13966] = actions(2430);
	v->a[13967] = 1;
	v->a[13968] = sym_variable_name;
	v->a[13969] = actions(2433);
	v->a[13970] = 1;
	v->a[13971] = sym_test_operator;
	v->a[13972] = state(1024);
	v->a[13973] = 1;
	v->a[13974] = aux_sym__literal_repeat1;
	v->a[13975] = actions(766);
	v->a[13976] = 2;
	v->a[13977] = sym_file_descriptor;
	v->a[13978] = aux_sym_heredoc_redirect_token1;
	v->a[13979] = actions(2421);
	small_parse_table_699(v);
}

void	small_parse_table_699(t_small_parse_table_array *v)
{
	v->a[13980] = 2;
	v->a[13981] = sym_raw_string;
	v->a[13982] = sym_word;
	v->a[13983] = state(439);
	v->a[13984] = 3;
	v->a[13985] = sym_variable_assignment;
	v->a[13986] = sym_concatenation;
	v->a[13987] = aux_sym_declaration_command_repeat1;
	v->a[13988] = state(1298);
	v->a[13989] = 7;
	v->a[13990] = sym_arithmetic_expansion;
	v->a[13991] = sym_brace_expression;
	v->a[13992] = sym_string;
	v->a[13993] = sym_number;
	v->a[13994] = sym_simple_expansion;
	v->a[13995] = sym_expansion;
	v->a[13996] = sym_command_substitution;
	v->a[13997] = actions(764);
	v->a[13998] = 16;
	v->a[13999] = anon_sym_PIPE;
	small_parse_table_700(v);
}

/* EOF small_parse_table_139.c */
