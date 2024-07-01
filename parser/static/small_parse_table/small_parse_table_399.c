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
	v->a[39900] = actions(844);
	v->a[39901] = 26;
	v->a[39902] = anon_sym_PIPE;
	v->a[39903] = anon_sym_SEMI_SEMI;
	v->a[39904] = anon_sym_AMP_AMP;
	v->a[39905] = anon_sym_PIPE_PIPE;
	v->a[39906] = anon_sym_LT;
	v->a[39907] = anon_sym_GT;
	v->a[39908] = anon_sym_GT_GT;
	v->a[39909] = anon_sym_LT_AMP;
	v->a[39910] = anon_sym_GT_AMP;
	v->a[39911] = anon_sym_GT_PIPE;
	v->a[39912] = anon_sym_LT_GT;
	v->a[39913] = anon_sym_LT_LT;
	v->a[39914] = anon_sym_LT_LT_DASH;
	v->a[39915] = aux_sym_heredoc_redirect_token1;
	v->a[39916] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39917] = anon_sym_AMP;
	v->a[39918] = aux_sym_concatenation_token1;
	v->a[39919] = anon_sym_DOLLAR;
	small_parse_table_1996(v);
}

void	small_parse_table_1996(t_small_parse_table_array *v)
{
	v->a[39920] = anon_sym_DQUOTE;
	v->a[39921] = sym_raw_string;
	v->a[39922] = sym_number;
	v->a[39923] = anon_sym_DOLLAR_LBRACE;
	v->a[39924] = anon_sym_DOLLAR_LPAREN;
	v->a[39925] = anon_sym_BQUOTE;
	v->a[39926] = sym_word;
	v->a[39927] = anon_sym_SEMI;
	v->a[39928] = 12;
	v->a[39929] = actions(3);
	v->a[39930] = 1;
	v->a[39931] = sym_comment;
	v->a[39932] = actions(552);
	v->a[39933] = 1;
	v->a[39934] = sym_file_descriptor;
	v->a[39935] = actions(1408);
	v->a[39936] = 1;
	v->a[39937] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39938] = actions(1410);
	v->a[39939] = 1;
	small_parse_table_1997(v);
}

void	small_parse_table_1997(t_small_parse_table_array *v)
{
	v->a[39940] = anon_sym_DOLLAR;
	v->a[39941] = actions(1412);
	v->a[39942] = 1;
	v->a[39943] = anon_sym_DQUOTE;
	v->a[39944] = actions(1414);
	v->a[39945] = 1;
	v->a[39946] = anon_sym_DOLLAR_LBRACE;
	v->a[39947] = actions(1416);
	v->a[39948] = 1;
	v->a[39949] = anon_sym_DOLLAR_LPAREN;
	v->a[39950] = actions(1418);
	v->a[39951] = 1;
	v->a[39952] = anon_sym_BQUOTE;
	v->a[39953] = state(561);
	v->a[39954] = 2;
	v->a[39955] = sym_concatenation;
	v->a[39956] = aux_sym_for_statement_repeat1;
	v->a[39957] = actions(1406);
	v->a[39958] = 3;
	v->a[39959] = sym_raw_string;
	small_parse_table_1998(v);
}

void	small_parse_table_1998(t_small_parse_table_array *v)
{
	v->a[39960] = sym_number;
	v->a[39961] = sym_word;
	v->a[39962] = state(852);
	v->a[39963] = 5;
	v->a[39964] = sym_arithmetic_expansion;
	v->a[39965] = sym_string;
	v->a[39966] = sym_simple_expansion;
	v->a[39967] = sym_expansion;
	v->a[39968] = sym_command_substitution;
	v->a[39969] = actions(554);
	v->a[39970] = 12;
	v->a[39971] = anon_sym_PIPE;
	v->a[39972] = anon_sym_AMP_AMP;
	v->a[39973] = anon_sym_PIPE_PIPE;
	v->a[39974] = anon_sym_LT;
	v->a[39975] = anon_sym_GT;
	v->a[39976] = anon_sym_GT_GT;
	v->a[39977] = anon_sym_LT_AMP;
	v->a[39978] = anon_sym_GT_AMP;
	v->a[39979] = anon_sym_GT_PIPE;
	small_parse_table_1999(v);
}

void	small_parse_table_1999(t_small_parse_table_array *v)
{
	v->a[39980] = anon_sym_LT_GT;
	v->a[39981] = anon_sym_LT_LT;
	v->a[39982] = anon_sym_LT_LT_DASH;
	v->a[39983] = 3;
	v->a[39984] = actions(3);
	v->a[39985] = 1;
	v->a[39986] = sym_comment;
	v->a[39987] = actions(1178);
	v->a[39988] = 3;
	v->a[39989] = sym_file_descriptor;
	v->a[39990] = sym__concat;
	v->a[39991] = ts_builtin_sym_end;
	v->a[39992] = actions(1176);
	v->a[39993] = 26;
	v->a[39994] = anon_sym_PIPE;
	v->a[39995] = anon_sym_SEMI_SEMI;
	v->a[39996] = anon_sym_AMP_AMP;
	v->a[39997] = anon_sym_PIPE_PIPE;
	v->a[39998] = anon_sym_LT;
	v->a[39999] = anon_sym_GT;
	small_parse_table_2000(v);
}

/* EOF small_parse_table_399.c */
