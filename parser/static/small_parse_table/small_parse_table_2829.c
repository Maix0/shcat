/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2829.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14145(t_small_parse_table_array *v)
{
	v->a[282900] = actions(12730);
	v->a[282901] = 15;
	v->a[282902] = sym_test_operator;
	v->a[282903] = sym_extglob_pattern;
	v->a[282904] = sym__brace_start;
	v->a[282905] = anon_sym_LPAREN_LPAREN;
	v->a[282906] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[282907] = anon_sym_DOLLAR_LBRACK;
	v->a[282908] = sym__special_character;
	v->a[282909] = anon_sym_DQUOTE;
	v->a[282910] = sym_raw_string;
	v->a[282911] = sym_ansi_c_string;
	v->a[282912] = anon_sym_DOLLAR_LBRACE;
	v->a[282913] = anon_sym_BQUOTE;
	v->a[282914] = anon_sym_DOLLAR_BQUOTE;
	v->a[282915] = anon_sym_LT_LPAREN;
	v->a[282916] = anon_sym_GT_LPAREN;
	v->a[282917] = 3;
	v->a[282918] = actions(71);
	v->a[282919] = 1;
	small_parse_table_14146(v);
}

void	small_parse_table_14146(t_small_parse_table_array *v)
{
	v->a[282920] = sym_comment;
	v->a[282921] = actions(12376);
	v->a[282922] = 6;
	v->a[282923] = anon_sym_LPAREN;
	v->a[282924] = anon_sym_DOLLAR;
	v->a[282925] = aux_sym_number_token1;
	v->a[282926] = aux_sym_number_token2;
	v->a[282927] = anon_sym_DOLLAR_LPAREN;
	v->a[282928] = sym_word;
	v->a[282929] = actions(12378);
	v->a[282930] = 15;
	v->a[282931] = sym_test_operator;
	v->a[282932] = sym_extglob_pattern;
	v->a[282933] = sym__brace_start;
	v->a[282934] = anon_sym_LPAREN_LPAREN;
	v->a[282935] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[282936] = anon_sym_DOLLAR_LBRACK;
	v->a[282937] = sym__special_character;
	v->a[282938] = anon_sym_DQUOTE;
	v->a[282939] = sym_raw_string;
	small_parse_table_14147(v);
}

void	small_parse_table_14147(t_small_parse_table_array *v)
{
	v->a[282940] = sym_ansi_c_string;
	v->a[282941] = anon_sym_DOLLAR_LBRACE;
	v->a[282942] = anon_sym_BQUOTE;
	v->a[282943] = anon_sym_DOLLAR_BQUOTE;
	v->a[282944] = anon_sym_LT_LPAREN;
	v->a[282945] = anon_sym_GT_LPAREN;
	v->a[282946] = 3;
	v->a[282947] = actions(71);
	v->a[282948] = 1;
	v->a[282949] = sym_comment;
	v->a[282950] = actions(1316);
	v->a[282951] = 7;
	v->a[282952] = anon_sym_PIPE;
	v->a[282953] = anon_sym_LT;
	v->a[282954] = anon_sym_GT;
	v->a[282955] = anon_sym_LT_LT;
	v->a[282956] = anon_sym_AMP_GT;
	v->a[282957] = anon_sym_LT_AMP;
	v->a[282958] = anon_sym_GT_AMP;
	v->a[282959] = actions(1318);
	small_parse_table_14148(v);
}

void	small_parse_table_14148(t_small_parse_table_array *v)
{
	v->a[282960] = 14;
	v->a[282961] = sym_file_descriptor;
	v->a[282962] = sym__concat;
	v->a[282963] = anon_sym_PIPE_PIPE;
	v->a[282964] = anon_sym_AMP_AMP;
	v->a[282965] = anon_sym_GT_GT;
	v->a[282966] = anon_sym_PIPE_AMP;
	v->a[282967] = anon_sym_RBRACK;
	v->a[282968] = anon_sym_AMP_GT_GT;
	v->a[282969] = anon_sym_GT_PIPE;
	v->a[282970] = anon_sym_LT_AMP_DASH;
	v->a[282971] = anon_sym_GT_AMP_DASH;
	v->a[282972] = anon_sym_LT_LT_DASH;
	v->a[282973] = anon_sym_LT_LT_LT;
	v->a[282974] = aux_sym_concatenation_token1;
	v->a[282975] = 6;
	v->a[282976] = actions(71);
	v->a[282977] = 1;
	v->a[282978] = sym_comment;
	v->a[282979] = actions(12435);
	small_parse_table_14149(v);
}

void	small_parse_table_14149(t_small_parse_table_array *v)
{
	v->a[282980] = 1;
	v->a[282981] = aux_sym_concatenation_token1;
	v->a[282982] = actions(12732);
	v->a[282983] = 1;
	v->a[282984] = sym__concat;
	v->a[282985] = state(5349);
	v->a[282986] = 1;
	v->a[282987] = aux_sym_concatenation_repeat1;
	v->a[282988] = actions(1286);
	v->a[282989] = 7;
	v->a[282990] = anon_sym_PIPE;
	v->a[282991] = anon_sym_LT;
	v->a[282992] = anon_sym_GT;
	v->a[282993] = anon_sym_LT_LT;
	v->a[282994] = anon_sym_AMP_GT;
	v->a[282995] = anon_sym_LT_AMP;
	v->a[282996] = anon_sym_GT_AMP;
	v->a[282997] = actions(1288);
	v->a[282998] = 11;
	v->a[282999] = sym_file_descriptor;
	small_parse_table_14150(v);
}

/* EOF small_parse_table_2829.c */
