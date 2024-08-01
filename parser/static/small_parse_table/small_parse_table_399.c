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
	v->a[39910] = actions(1093);
	v->a[39911] = 4;
	v->a[39912] = sym__concat;
	v->a[39913] = sym_variable_name;
	v->a[39914] = ts_builtin_sym_end;
	v->a[39915] = aux_sym_heredoc_redirect_token1;
	v->a[39916] = actions(1091);
	v->a[39917] = 12;
	v->a[39918] = anon_sym_PIPE;
	v->a[39919] = anon_sym_RPAREN;
	small_parse_table_1996(v);
}

void	small_parse_table_1996(t_small_parse_table_array *v)
{
	v->a[39920] = anon_sym_SEMI_SEMI;
	v->a[39921] = anon_sym_AMP_AMP;
	v->a[39922] = anon_sym_PIPE_PIPE;
	v->a[39923] = anon_sym_LT;
	v->a[39924] = anon_sym_GT;
	v->a[39925] = anon_sym_GT_GT;
	v->a[39926] = anon_sym_LT_LT;
	v->a[39927] = aux_sym_concatenation_token1;
	v->a[39928] = anon_sym_BQUOTE;
	v->a[39929] = anon_sym_SEMI;
	v->a[39930] = 3;
	v->a[39931] = actions(3);
	v->a[39932] = 1;
	v->a[39933] = sym_comment;
	v->a[39934] = actions(1097);
	v->a[39935] = 4;
	v->a[39936] = sym__concat;
	v->a[39937] = sym_variable_name;
	v->a[39938] = ts_builtin_sym_end;
	v->a[39939] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1997(v);
}

void	small_parse_table_1997(t_small_parse_table_array *v)
{
	v->a[39940] = actions(1095);
	v->a[39941] = 12;
	v->a[39942] = anon_sym_PIPE;
	v->a[39943] = anon_sym_RPAREN;
	v->a[39944] = anon_sym_SEMI_SEMI;
	v->a[39945] = anon_sym_AMP_AMP;
	v->a[39946] = anon_sym_PIPE_PIPE;
	v->a[39947] = anon_sym_LT;
	v->a[39948] = anon_sym_GT;
	v->a[39949] = anon_sym_GT_GT;
	v->a[39950] = anon_sym_LT_LT;
	v->a[39951] = aux_sym_concatenation_token1;
	v->a[39952] = anon_sym_BQUOTE;
	v->a[39953] = anon_sym_SEMI;
	v->a[39954] = 10;
	v->a[39955] = actions(3);
	v->a[39956] = 1;
	v->a[39957] = sym_comment;
	v->a[39958] = actions(1479);
	v->a[39959] = 1;
	small_parse_table_1998(v);
}

void	small_parse_table_1998(t_small_parse_table_array *v)
{
	v->a[39960] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39961] = actions(1481);
	v->a[39962] = 1;
	v->a[39963] = anon_sym_DOLLAR;
	v->a[39964] = actions(1483);
	v->a[39965] = 1;
	v->a[39966] = anon_sym_DQUOTE;
	v->a[39967] = actions(1485);
	v->a[39968] = 1;
	v->a[39969] = anon_sym_DOLLAR_LBRACE;
	v->a[39970] = actions(1487);
	v->a[39971] = 1;
	v->a[39972] = anon_sym_DOLLAR_LPAREN;
	v->a[39973] = actions(1489);
	v->a[39974] = 1;
	v->a[39975] = anon_sym_BQUOTE;
	v->a[39976] = state(190);
	v->a[39977] = 2;
	v->a[39978] = sym_concatenation;
	v->a[39979] = aux_sym_for_statement_repeat1;
	small_parse_table_1999(v);
}

void	small_parse_table_1999(t_small_parse_table_array *v)
{
	v->a[39980] = actions(1846);
	v->a[39981] = 3;
	v->a[39982] = sym_raw_string;
	v->a[39983] = sym_number;
	v->a[39984] = sym_word;
	v->a[39985] = state(415);
	v->a[39986] = 5;
	v->a[39987] = sym_arithmetic_expansion;
	v->a[39988] = sym_string;
	v->a[39989] = sym_simple_expansion;
	v->a[39990] = sym_expansion;
	v->a[39991] = sym_command_substitution;
	v->a[39992] = 10;
	v->a[39993] = actions(3);
	v->a[39994] = 1;
	v->a[39995] = sym_comment;
	v->a[39996] = actions(655);
	v->a[39997] = 1;
	v->a[39998] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39999] = actions(657);
	small_parse_table_2000(v);
}

/* EOF small_parse_table_399.c */
