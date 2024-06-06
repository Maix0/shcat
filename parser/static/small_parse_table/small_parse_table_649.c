/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_649.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3245(t_small_parse_table_array *v)
{
	v->a[64900] = sym_comment;
	v->a[64901] = actions(3022);
	v->a[64902] = 14;
	v->a[64903] = anon_sym_PIPE;
	v->a[64904] = anon_sym_LT;
	v->a[64905] = anon_sym_GT;
	v->a[64906] = anon_sym_AMP_GT;
	v->a[64907] = anon_sym_LT_AMP;
	v->a[64908] = anon_sym_GT_AMP;
	v->a[64909] = anon_sym_LT_LT;
	v->a[64910] = anon_sym_DOLLAR;
	v->a[64911] = aux_sym_number_token1;
	v->a[64912] = aux_sym_number_token2;
	v->a[64913] = anon_sym_DOLLAR_LPAREN;
	v->a[64914] = anon_sym_BQUOTE;
	v->a[64915] = aux_sym__simple_variable_name_token1;
	v->a[64916] = sym_word;
	v->a[64917] = actions(3024);
	v->a[64918] = 21;
	v->a[64919] = sym_file_descriptor;
	small_parse_table_3246(v);
}

void	small_parse_table_3246(t_small_parse_table_array *v)
{
	v->a[64920] = sym__concat;
	v->a[64921] = sym_variable_name;
	v->a[64922] = sym_test_operator;
	v->a[64923] = sym__brace_start;
	v->a[64924] = anon_sym_PIPE_AMP;
	v->a[64925] = anon_sym_AMP_AMP;
	v->a[64926] = anon_sym_PIPE_PIPE;
	v->a[64927] = anon_sym_GT_GT;
	v->a[64928] = anon_sym_AMP_GT_GT;
	v->a[64929] = anon_sym_GT_PIPE;
	v->a[64930] = anon_sym_LT_AMP_DASH;
	v->a[64931] = anon_sym_GT_AMP_DASH;
	v->a[64932] = anon_sym_LT_LT_DASH;
	v->a[64933] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64934] = aux_sym_concatenation_token1;
	v->a[64935] = sym__special_character;
	v->a[64936] = anon_sym_DQUOTE;
	v->a[64937] = sym_raw_string;
	v->a[64938] = anon_sym_DOLLAR_LBRACE;
	v->a[64939] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_3247(v);
}

void	small_parse_table_3247(t_small_parse_table_array *v)
{
	v->a[64940] = 19;
	v->a[64941] = actions(57);
	v->a[64942] = 1;
	v->a[64943] = sym_comment;
	v->a[64944] = actions(4120);
	v->a[64945] = 1;
	v->a[64946] = anon_sym_PIPE;
	v->a[64947] = actions(4122);
	v->a[64948] = 1;
	v->a[64949] = anon_sym_AMP_AMP;
	v->a[64950] = actions(4124);
	v->a[64951] = 1;
	v->a[64952] = anon_sym_PIPE_PIPE;
	v->a[64953] = actions(4126);
	v->a[64954] = 1;
	v->a[64955] = anon_sym_EQ;
	v->a[64956] = actions(4132);
	v->a[64957] = 1;
	v->a[64958] = anon_sym_COMMA;
	v->a[64959] = actions(4138);
	small_parse_table_3248(v);
}

void	small_parse_table_3248(t_small_parse_table_array *v)
{
	v->a[64960] = 1;
	v->a[64961] = anon_sym_CARET;
	v->a[64962] = actions(4140);
	v->a[64963] = 1;
	v->a[64964] = anon_sym_AMP;
	v->a[64965] = actions(4150);
	v->a[64966] = 1;
	v->a[64967] = anon_sym_QMARK;
	v->a[64968] = actions(4179);
	v->a[64969] = 1;
	v->a[64970] = anon_sym_RPAREN_RPAREN;
	v->a[64971] = state(3554);
	v->a[64972] = 1;
	v->a[64973] = aux_sym_arithmetic_expansion_repeat1;
	v->a[64974] = actions(4128);
	v->a[64975] = 2;
	v->a[64976] = anon_sym_LT;
	v->a[64977] = anon_sym_GT;
	v->a[64978] = actions(4130);
	v->a[64979] = 2;
	small_parse_table_3249(v);
}

void	small_parse_table_3249(t_small_parse_table_array *v)
{
	v->a[64980] = anon_sym_GT_GT;
	v->a[64981] = anon_sym_LT_LT;
	v->a[64982] = actions(4142);
	v->a[64983] = 2;
	v->a[64984] = anon_sym_EQ_EQ;
	v->a[64985] = anon_sym_BANG_EQ;
	v->a[64986] = actions(4144);
	v->a[64987] = 2;
	v->a[64988] = anon_sym_LT_EQ;
	v->a[64989] = anon_sym_GT_EQ;
	v->a[64990] = actions(4146);
	v->a[64991] = 2;
	v->a[64992] = anon_sym_PLUS;
	v->a[64993] = anon_sym_DASH;
	v->a[64994] = actions(4152);
	v->a[64995] = 2;
	v->a[64996] = anon_sym_PLUS_PLUS2;
	v->a[64997] = anon_sym_DASH_DASH2;
	v->a[64998] = actions(4148);
	v->a[64999] = 3;
	small_parse_table_3250(v);
}

/* EOF small_parse_table_649.c */
