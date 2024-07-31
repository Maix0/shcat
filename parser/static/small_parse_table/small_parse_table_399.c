/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_399.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1995(t_small_parse_table_array *v)
{
	v->a[39900] = sym_raw_string;
	v->a[39901] = sym_number;
	v->a[39902] = anon_sym_DOLLAR_LBRACE;
	v->a[39903] = anon_sym_DOLLAR_LPAREN;
	v->a[39904] = anon_sym_BQUOTE;
	v->a[39905] = sym_word;
	v->a[39906] = 3;
	v->a[39907] = actions(3);
	v->a[39908] = 1;
	v->a[39909] = sym_comment;
	v->a[39910] = actions(453);
	v->a[39911] = 2;
	v->a[39912] = sym__concat;
	v->a[39913] = sym_variable_name;
	v->a[39914] = actions(451);
	v->a[39915] = 22;
	v->a[39916] = anon_sym_PIPE;
	v->a[39917] = anon_sym_AMP_AMP;
	v->a[39918] = anon_sym_PIPE_PIPE;
	v->a[39919] = anon_sym_LT;
	small_parse_table_1996(v);
}

void	small_parse_table_1996(t_small_parse_table_array *v)
{
	v->a[39920] = anon_sym_GT;
	v->a[39921] = anon_sym_GT_GT;
	v->a[39922] = anon_sym_LT_AMP;
	v->a[39923] = anon_sym_GT_AMP;
	v->a[39924] = anon_sym_GT_PIPE;
	v->a[39925] = anon_sym_LT_GT;
	v->a[39926] = anon_sym_LT_LT;
	v->a[39927] = anon_sym_LT_LT_DASH;
	v->a[39928] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39929] = aux_sym_concatenation_token1;
	v->a[39930] = anon_sym_DOLLAR;
	v->a[39931] = anon_sym_DQUOTE;
	v->a[39932] = sym_raw_string;
	v->a[39933] = sym_number;
	v->a[39934] = anon_sym_DOLLAR_LBRACE;
	v->a[39935] = anon_sym_DOLLAR_LPAREN;
	v->a[39936] = anon_sym_BQUOTE;
	v->a[39937] = sym_word;
	v->a[39938] = 5;
	v->a[39939] = actions(3);
	small_parse_table_1997(v);
}

void	small_parse_table_1997(t_small_parse_table_array *v)
{
	v->a[39940] = 1;
	v->a[39941] = sym_comment;
	v->a[39942] = actions(1255);
	v->a[39943] = 1;
	v->a[39944] = sym_variable_name;
	v->a[39945] = actions(1253);
	v->a[39946] = 2;
	v->a[39947] = aux_sym__simple_variable_name_token1;
	v->a[39948] = aux_sym__multiline_variable_name_token1;
	v->a[39949] = actions(1251);
	v->a[39950] = 8;
	v->a[39951] = anon_sym_BANG;
	v->a[39952] = anon_sym_DASH;
	v->a[39953] = anon_sym_STAR;
	v->a[39954] = anon_sym_QMARK;
	v->a[39955] = anon_sym_DOLLAR;
	v->a[39956] = anon_sym_POUND;
	v->a[39957] = anon_sym_AT;
	v->a[39958] = anon_sym_0;
	v->a[39959] = actions(345);
	small_parse_table_1998(v);
}

void	small_parse_table_1998(t_small_parse_table_array *v)
{
	v->a[39960] = 13;
	v->a[39961] = anon_sym_PIPE;
	v->a[39962] = anon_sym_AMP_AMP;
	v->a[39963] = anon_sym_PIPE_PIPE;
	v->a[39964] = anon_sym_LT;
	v->a[39965] = anon_sym_GT;
	v->a[39966] = anon_sym_GT_GT;
	v->a[39967] = anon_sym_LT_AMP;
	v->a[39968] = anon_sym_GT_AMP;
	v->a[39969] = anon_sym_GT_PIPE;
	v->a[39970] = anon_sym_LT_GT;
	v->a[39971] = anon_sym_LT_LT;
	v->a[39972] = anon_sym_LT_LT_DASH;
	v->a[39973] = aux_sym_heredoc_redirect_token1;
	v->a[39974] = 3;
	v->a[39975] = actions(3);
	v->a[39976] = 1;
	v->a[39977] = sym_comment;
	v->a[39978] = actions(473);
	v->a[39979] = 2;
	small_parse_table_1999(v);
}

void	small_parse_table_1999(t_small_parse_table_array *v)
{
	v->a[39980] = sym__concat;
	v->a[39981] = sym_variable_name;
	v->a[39982] = actions(471);
	v->a[39983] = 22;
	v->a[39984] = anon_sym_PIPE;
	v->a[39985] = anon_sym_AMP_AMP;
	v->a[39986] = anon_sym_PIPE_PIPE;
	v->a[39987] = anon_sym_LT;
	v->a[39988] = anon_sym_GT;
	v->a[39989] = anon_sym_GT_GT;
	v->a[39990] = anon_sym_LT_AMP;
	v->a[39991] = anon_sym_GT_AMP;
	v->a[39992] = anon_sym_GT_PIPE;
	v->a[39993] = anon_sym_LT_GT;
	v->a[39994] = anon_sym_LT_LT;
	v->a[39995] = anon_sym_LT_LT_DASH;
	v->a[39996] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39997] = aux_sym_concatenation_token1;
	v->a[39998] = anon_sym_DOLLAR;
	v->a[39999] = anon_sym_DQUOTE;
	small_parse_table_2000(v);
}

/* EOF small_parse_table_399.c */
