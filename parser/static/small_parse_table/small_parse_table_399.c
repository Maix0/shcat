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
	v->a[39900] = anon_sym_DOLLAR;
	v->a[39901] = anon_sym_DQUOTE;
	v->a[39902] = sym_raw_string;
	v->a[39903] = sym_number;
	v->a[39904] = anon_sym_DOLLAR_LBRACE;
	v->a[39905] = anon_sym_DOLLAR_LPAREN;
	v->a[39906] = anon_sym_BQUOTE;
	v->a[39907] = sym_word;
	v->a[39908] = anon_sym_SEMI;
	v->a[39909] = 6;
	v->a[39910] = actions(3);
	v->a[39911] = 1;
	v->a[39912] = sym_comment;
	v->a[39913] = actions(1038);
	v->a[39914] = 1;
	v->a[39915] = aux_sym_concatenation_token1;
	v->a[39916] = actions(1414);
	v->a[39917] = 1;
	v->a[39918] = sym__concat;
	v->a[39919] = state(344);
	small_parse_table_1996(v);
}

void	small_parse_table_1996(t_small_parse_table_array *v)
{
	v->a[39920] = 1;
	v->a[39921] = aux_sym_concatenation_repeat1;
	v->a[39922] = actions(961);
	v->a[39923] = 2;
	v->a[39924] = sym_file_descriptor;
	v->a[39925] = sym__bare_dollar;
	v->a[39926] = actions(957);
	v->a[39927] = 28;
	v->a[39928] = anon_sym_PIPE;
	v->a[39929] = anon_sym_SEMI_SEMI;
	v->a[39930] = anon_sym_AMP_AMP;
	v->a[39931] = anon_sym_PIPE_PIPE;
	v->a[39932] = anon_sym_LT;
	v->a[39933] = anon_sym_GT;
	v->a[39934] = anon_sym_GT_GT;
	v->a[39935] = anon_sym_AMP_GT;
	v->a[39936] = anon_sym_AMP_GT_GT;
	v->a[39937] = anon_sym_LT_AMP;
	v->a[39938] = anon_sym_GT_AMP;
	v->a[39939] = anon_sym_GT_PIPE;
	small_parse_table_1997(v);
}

void	small_parse_table_1997(t_small_parse_table_array *v)
{
	v->a[39940] = anon_sym_LT_AMP_DASH;
	v->a[39941] = anon_sym_GT_AMP_DASH;
	v->a[39942] = anon_sym_LT_LT;
	v->a[39943] = anon_sym_LT_LT_DASH;
	v->a[39944] = aux_sym_heredoc_redirect_token1;
	v->a[39945] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39946] = anon_sym_AMP;
	v->a[39947] = anon_sym_DOLLAR;
	v->a[39948] = anon_sym_DQUOTE;
	v->a[39949] = sym_raw_string;
	v->a[39950] = sym_number;
	v->a[39951] = anon_sym_DOLLAR_LBRACE;
	v->a[39952] = anon_sym_DOLLAR_LPAREN;
	v->a[39953] = anon_sym_BQUOTE;
	v->a[39954] = sym_word;
	v->a[39955] = anon_sym_SEMI;
	v->a[39956] = 3;
	v->a[39957] = actions(3);
	v->a[39958] = 1;
	v->a[39959] = sym_comment;
	small_parse_table_1998(v);
}

void	small_parse_table_1998(t_small_parse_table_array *v)
{
	v->a[39960] = actions(1088);
	v->a[39961] = 4;
	v->a[39962] = sym_file_descriptor;
	v->a[39963] = sym__concat;
	v->a[39964] = sym__bare_dollar;
	v->a[39965] = ts_builtin_sym_end;
	v->a[39966] = actions(1086);
	v->a[39967] = 29;
	v->a[39968] = anon_sym_PIPE;
	v->a[39969] = anon_sym_SEMI_SEMI;
	v->a[39970] = anon_sym_AMP_AMP;
	v->a[39971] = anon_sym_PIPE_PIPE;
	v->a[39972] = anon_sym_LT;
	v->a[39973] = anon_sym_GT;
	v->a[39974] = anon_sym_GT_GT;
	v->a[39975] = anon_sym_AMP_GT;
	v->a[39976] = anon_sym_AMP_GT_GT;
	v->a[39977] = anon_sym_LT_AMP;
	v->a[39978] = anon_sym_GT_AMP;
	v->a[39979] = anon_sym_GT_PIPE;
	small_parse_table_1999(v);
}

void	small_parse_table_1999(t_small_parse_table_array *v)
{
	v->a[39980] = anon_sym_LT_AMP_DASH;
	v->a[39981] = anon_sym_GT_AMP_DASH;
	v->a[39982] = anon_sym_LT_LT;
	v->a[39983] = anon_sym_LT_LT_DASH;
	v->a[39984] = aux_sym_heredoc_redirect_token1;
	v->a[39985] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39986] = anon_sym_AMP;
	v->a[39987] = aux_sym_concatenation_token1;
	v->a[39988] = anon_sym_DOLLAR;
	v->a[39989] = anon_sym_DQUOTE;
	v->a[39990] = sym_raw_string;
	v->a[39991] = sym_number;
	v->a[39992] = anon_sym_DOLLAR_LBRACE;
	v->a[39993] = anon_sym_DOLLAR_LPAREN;
	v->a[39994] = anon_sym_BQUOTE;
	v->a[39995] = sym_word;
	v->a[39996] = anon_sym_SEMI;
	v->a[39997] = 6;
	v->a[39998] = actions(3);
	v->a[39999] = 1;
	small_parse_table_2000(v);
}

/* EOF small_parse_table_399.c */
