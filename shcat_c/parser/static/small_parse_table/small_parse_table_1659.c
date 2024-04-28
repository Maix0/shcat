/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1659.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8295(t_small_parse_table_array *v)
{
	v->a[165900] = anon_sym_GT;
	v->a[165901] = anon_sym_GT_GT;
	v->a[165902] = anon_sym_AMP_GT;
	v->a[165903] = anon_sym_AMP_GT_GT;
	v->a[165904] = anon_sym_LT_AMP;
	v->a[165905] = anon_sym_GT_AMP;
	v->a[165906] = anon_sym_GT_PIPE;
	v->a[165907] = anon_sym_LT_AMP_DASH;
	v->a[165908] = anon_sym_GT_AMP_DASH;
	v->a[165909] = anon_sym_LT_LT_LT;
	v->a[165910] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[165911] = anon_sym_DOLLAR_LBRACK;
	v->a[165912] = anon_sym_DOLLAR;
	v->a[165913] = sym__special_character;
	v->a[165914] = anon_sym_DQUOTE;
	v->a[165915] = sym_raw_string;
	v->a[165916] = sym_ansi_c_string;
	v->a[165917] = aux_sym_number_token1;
	v->a[165918] = aux_sym_number_token2;
	v->a[165919] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_8296(v);
}

void	small_parse_table_8296(t_small_parse_table_array *v)
{
	v->a[165920] = anon_sym_DOLLAR_LPAREN;
	v->a[165921] = anon_sym_BQUOTE;
	v->a[165922] = anon_sym_DOLLAR_BQUOTE;
	v->a[165923] = anon_sym_LT_LPAREN;
	v->a[165924] = anon_sym_GT_LPAREN;
	v->a[165925] = sym_word;
	v->a[165926] = 3;
	v->a[165927] = actions(3);
	v->a[165928] = 1;
	v->a[165929] = sym_comment;
	v->a[165930] = actions(7503);
	v->a[165931] = 1;
	v->a[165932] = aux_sym_heredoc_redirect_token1;
	v->a[165933] = actions(7501);
	v->a[165934] = 36;
	v->a[165935] = anon_sym_SEMI;
	v->a[165936] = anon_sym_COMMA;
	v->a[165937] = anon_sym_PLUS_PLUS;
	v->a[165938] = anon_sym_DASH_DASH;
	v->a[165939] = anon_sym_PLUS_EQ;
	small_parse_table_8297(v);
}

void	small_parse_table_8297(t_small_parse_table_array *v)
{
	v->a[165940] = anon_sym_DASH_EQ;
	v->a[165941] = anon_sym_STAR_EQ;
	v->a[165942] = anon_sym_SLASH_EQ;
	v->a[165943] = anon_sym_PERCENT_EQ;
	v->a[165944] = anon_sym_STAR_STAR_EQ;
	v->a[165945] = anon_sym_LT_LT_EQ;
	v->a[165946] = anon_sym_GT_GT_EQ;
	v->a[165947] = anon_sym_AMP_EQ;
	v->a[165948] = anon_sym_CARET_EQ;
	v->a[165949] = anon_sym_PIPE_EQ;
	v->a[165950] = anon_sym_PIPE_PIPE;
	v->a[165951] = anon_sym_DASHo;
	v->a[165952] = anon_sym_AMP_AMP;
	v->a[165953] = anon_sym_DASHa;
	v->a[165954] = anon_sym_PIPE;
	v->a[165955] = anon_sym_CARET;
	v->a[165956] = anon_sym_AMP;
	v->a[165957] = anon_sym_EQ_EQ;
	v->a[165958] = anon_sym_BANG_EQ;
	v->a[165959] = anon_sym_LT;
	small_parse_table_8298(v);
}

void	small_parse_table_8298(t_small_parse_table_array *v)
{
	v->a[165960] = anon_sym_GT;
	v->a[165961] = anon_sym_LT_EQ;
	v->a[165962] = anon_sym_GT_EQ;
	v->a[165963] = anon_sym_LT_LT;
	v->a[165964] = anon_sym_GT_GT;
	v->a[165965] = anon_sym_PLUS;
	v->a[165966] = anon_sym_DASH;
	v->a[165967] = anon_sym_STAR;
	v->a[165968] = anon_sym_SLASH;
	v->a[165969] = anon_sym_PERCENT;
	v->a[165970] = anon_sym_STAR_STAR;
	v->a[165971] = 6;
	v->a[165972] = actions(3);
	v->a[165973] = 1;
	v->a[165974] = sym_comment;
	v->a[165975] = actions(7475);
	v->a[165976] = 1;
	v->a[165977] = aux_sym_concatenation_token1;
	v->a[165978] = actions(7505);
	v->a[165979] = 1;
	small_parse_table_8299(v);
}

void	small_parse_table_8299(t_small_parse_table_array *v)
{
	v->a[165980] = sym__concat;
	v->a[165981] = state(3115);
	v->a[165982] = 1;
	v->a[165983] = aux_sym_concatenation_repeat1;
	v->a[165984] = actions(1288);
	v->a[165985] = 4;
	v->a[165986] = sym_file_descriptor;
	v->a[165987] = sym_test_operator;
	v->a[165988] = sym__brace_start;
	v->a[165989] = aux_sym_heredoc_redirect_token1;
	v->a[165990] = actions(1286);
	v->a[165991] = 30;
	v->a[165992] = anon_sym_LPAREN_LPAREN;
	v->a[165993] = anon_sym_PIPE_PIPE;
	v->a[165994] = anon_sym_AMP_AMP;
	v->a[165995] = anon_sym_LT;
	v->a[165996] = anon_sym_GT;
	v->a[165997] = anon_sym_GT_GT;
	v->a[165998] = anon_sym_AMP_GT;
	v->a[165999] = anon_sym_AMP_GT_GT;
	small_parse_table_8300(v);
}

/* EOF small_parse_table_1659.c */
