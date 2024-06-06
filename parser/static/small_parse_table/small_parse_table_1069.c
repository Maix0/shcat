/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1069.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5345(t_small_parse_table_array *v)
{
	v->a[106900] = anon_sym_SEMI;
	v->a[106901] = 3;
	v->a[106902] = actions(3);
	v->a[106903] = 1;
	v->a[106904] = sym_comment;
	v->a[106905] = actions(6167);
	v->a[106906] = 2;
	v->a[106907] = sym_file_descriptor;
	v->a[106908] = aux_sym_heredoc_redirect_token1;
	v->a[106909] = actions(6165);
	v->a[106910] = 22;
	v->a[106911] = anon_sym_esac;
	v->a[106912] = anon_sym_PIPE;
	v->a[106913] = anon_sym_SEMI_SEMI;
	v->a[106914] = anon_sym_SEMI_AMP;
	v->a[106915] = anon_sym_SEMI_SEMI_AMP;
	v->a[106916] = anon_sym_PIPE_AMP;
	v->a[106917] = anon_sym_AMP_AMP;
	v->a[106918] = anon_sym_PIPE_PIPE;
	v->a[106919] = anon_sym_LT;
	small_parse_table_5346(v);
}

void	small_parse_table_5346(t_small_parse_table_array *v)
{
	v->a[106920] = anon_sym_GT;
	v->a[106921] = anon_sym_GT_GT;
	v->a[106922] = anon_sym_AMP_GT;
	v->a[106923] = anon_sym_AMP_GT_GT;
	v->a[106924] = anon_sym_LT_AMP;
	v->a[106925] = anon_sym_GT_AMP;
	v->a[106926] = anon_sym_GT_PIPE;
	v->a[106927] = anon_sym_LT_AMP_DASH;
	v->a[106928] = anon_sym_GT_AMP_DASH;
	v->a[106929] = anon_sym_LT_LT;
	v->a[106930] = anon_sym_LT_LT_DASH;
	v->a[106931] = anon_sym_AMP;
	v->a[106932] = anon_sym_SEMI;
	v->a[106933] = 17;
	v->a[106934] = actions(57);
	v->a[106935] = 1;
	v->a[106936] = sym_comment;
	v->a[106937] = actions(1536);
	v->a[106938] = 1;
	v->a[106939] = sym_word;
	small_parse_table_5347(v);
}

void	small_parse_table_5347(t_small_parse_table_array *v)
{
	v->a[106940] = actions(1540);
	v->a[106941] = 1;
	v->a[106942] = anon_sym_DOLLAR;
	v->a[106943] = actions(1546);
	v->a[106944] = 1;
	v->a[106945] = aux_sym_number_token1;
	v->a[106946] = actions(1548);
	v->a[106947] = 1;
	v->a[106948] = aux_sym_number_token2;
	v->a[106949] = actions(1552);
	v->a[106950] = 1;
	v->a[106951] = anon_sym_DOLLAR_LPAREN;
	v->a[106952] = actions(1560);
	v->a[106953] = 1;
	v->a[106954] = sym__brace_start;
	v->a[106955] = actions(6169);
	v->a[106956] = 1;
	v->a[106957] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106958] = actions(6171);
	v->a[106959] = 1;
	small_parse_table_5348(v);
}

void	small_parse_table_5348(t_small_parse_table_array *v)
{
	v->a[106960] = sym__special_character;
	v->a[106961] = actions(6173);
	v->a[106962] = 1;
	v->a[106963] = anon_sym_DQUOTE;
	v->a[106964] = actions(6175);
	v->a[106965] = 1;
	v->a[106966] = anon_sym_DOLLAR_LBRACE;
	v->a[106967] = actions(6177);
	v->a[106968] = 1;
	v->a[106969] = anon_sym_BQUOTE;
	v->a[106970] = actions(6179);
	v->a[106971] = 1;
	v->a[106972] = anon_sym_DOLLAR_BQUOTE;
	v->a[106973] = state(1034);
	v->a[106974] = 1;
	v->a[106975] = aux_sym__literal_repeat1;
	v->a[106976] = actions(1558);
	v->a[106977] = 2;
	v->a[106978] = sym_test_operator;
	v->a[106979] = sym_raw_string;
	small_parse_table_5349(v);
}

void	small_parse_table_5349(t_small_parse_table_array *v)
{
	v->a[106980] = state(319);
	v->a[106981] = 2;
	v->a[106982] = sym_concatenation;
	v->a[106983] = aux_sym_for_statement_repeat1;
	v->a[106984] = state(634);
	v->a[106985] = 7;
	v->a[106986] = sym_arithmetic_expansion;
	v->a[106987] = sym_brace_expression;
	v->a[106988] = sym_string;
	v->a[106989] = sym_number;
	v->a[106990] = sym_simple_expansion;
	v->a[106991] = sym_expansion;
	v->a[106992] = sym_command_substitution;
	v->a[106993] = 3;
	v->a[106994] = actions(3);
	v->a[106995] = 1;
	v->a[106996] = sym_comment;
	v->a[106997] = actions(6181);
	v->a[106998] = 3;
	v->a[106999] = sym_file_descriptor;
	small_parse_table_5350(v);
}

/* EOF small_parse_table_1069.c */
