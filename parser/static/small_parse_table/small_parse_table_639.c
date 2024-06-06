/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_639.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3195(t_small_parse_table_array *v)
{
	v->a[63900] = anon_sym_CARET;
	v->a[63901] = actions(4140);
	v->a[63902] = 1;
	v->a[63903] = anon_sym_AMP;
	v->a[63904] = actions(4150);
	v->a[63905] = 1;
	v->a[63906] = anon_sym_QMARK;
	v->a[63907] = actions(4154);
	v->a[63908] = 1;
	v->a[63909] = anon_sym_RPAREN_RPAREN;
	v->a[63910] = state(3543);
	v->a[63911] = 1;
	v->a[63912] = aux_sym_arithmetic_expansion_repeat1;
	v->a[63913] = actions(4128);
	v->a[63914] = 2;
	v->a[63915] = anon_sym_LT;
	v->a[63916] = anon_sym_GT;
	v->a[63917] = actions(4130);
	v->a[63918] = 2;
	v->a[63919] = anon_sym_GT_GT;
	small_parse_table_3196(v);
}

void	small_parse_table_3196(t_small_parse_table_array *v)
{
	v->a[63920] = anon_sym_LT_LT;
	v->a[63921] = actions(4142);
	v->a[63922] = 2;
	v->a[63923] = anon_sym_EQ_EQ;
	v->a[63924] = anon_sym_BANG_EQ;
	v->a[63925] = actions(4144);
	v->a[63926] = 2;
	v->a[63927] = anon_sym_LT_EQ;
	v->a[63928] = anon_sym_GT_EQ;
	v->a[63929] = actions(4146);
	v->a[63930] = 2;
	v->a[63931] = anon_sym_PLUS;
	v->a[63932] = anon_sym_DASH;
	v->a[63933] = actions(4152);
	v->a[63934] = 2;
	v->a[63935] = anon_sym_PLUS_PLUS2;
	v->a[63936] = anon_sym_DASH_DASH2;
	v->a[63937] = actions(4148);
	v->a[63938] = 3;
	v->a[63939] = anon_sym_STAR;
	small_parse_table_3197(v);
}

void	small_parse_table_3197(t_small_parse_table_array *v)
{
	v->a[63940] = anon_sym_SLASH;
	v->a[63941] = anon_sym_PERCENT;
	v->a[63942] = actions(4136);
	v->a[63943] = 10;
	v->a[63944] = anon_sym_PLUS_EQ;
	v->a[63945] = anon_sym_DASH_EQ;
	v->a[63946] = anon_sym_STAR_EQ;
	v->a[63947] = anon_sym_SLASH_EQ;
	v->a[63948] = anon_sym_PERCENT_EQ;
	v->a[63949] = anon_sym_LT_LT_EQ;
	v->a[63950] = anon_sym_GT_GT_EQ;
	v->a[63951] = anon_sym_AMP_EQ;
	v->a[63952] = anon_sym_CARET_EQ;
	v->a[63953] = anon_sym_PIPE_EQ;
	v->a[63954] = 5;
	v->a[63955] = actions(57);
	v->a[63956] = 1;
	v->a[63957] = sym_comment;
	v->a[63958] = state(1373);
	v->a[63959] = 1;
	small_parse_table_3198(v);
}

void	small_parse_table_3198(t_small_parse_table_array *v)
{
	v->a[63960] = aux_sym_concatenation_repeat1;
	v->a[63961] = actions(4156);
	v->a[63962] = 2;
	v->a[63963] = sym__concat;
	v->a[63964] = aux_sym_concatenation_token1;
	v->a[63965] = actions(2652);
	v->a[63966] = 13;
	v->a[63967] = anon_sym_PIPE;
	v->a[63968] = anon_sym_LT;
	v->a[63969] = anon_sym_GT;
	v->a[63970] = anon_sym_AMP_GT;
	v->a[63971] = anon_sym_LT_AMP;
	v->a[63972] = anon_sym_GT_AMP;
	v->a[63973] = anon_sym_LT_LT;
	v->a[63974] = anon_sym_DOLLAR;
	v->a[63975] = aux_sym_number_token1;
	v->a[63976] = aux_sym_number_token2;
	v->a[63977] = anon_sym_DOLLAR_LPAREN;
	v->a[63978] = anon_sym_BQUOTE;
	v->a[63979] = sym_word;
	small_parse_table_3199(v);
}

void	small_parse_table_3199(t_small_parse_table_array *v)
{
	v->a[63980] = actions(2654);
	v->a[63981] = 19;
	v->a[63982] = sym_file_descriptor;
	v->a[63983] = sym_test_operator;
	v->a[63984] = sym__bare_dollar;
	v->a[63985] = sym__brace_start;
	v->a[63986] = anon_sym_PIPE_AMP;
	v->a[63987] = anon_sym_AMP_AMP;
	v->a[63988] = anon_sym_PIPE_PIPE;
	v->a[63989] = anon_sym_GT_GT;
	v->a[63990] = anon_sym_AMP_GT_GT;
	v->a[63991] = anon_sym_GT_PIPE;
	v->a[63992] = anon_sym_LT_AMP_DASH;
	v->a[63993] = anon_sym_GT_AMP_DASH;
	v->a[63994] = anon_sym_LT_LT_DASH;
	v->a[63995] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63996] = sym__special_character;
	v->a[63997] = anon_sym_DQUOTE;
	v->a[63998] = sym_raw_string;
	v->a[63999] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3200(v);
}

/* EOF small_parse_table_639.c */
