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
	v->a[39901] = anon_sym_POUND;
	v->a[39902] = anon_sym_AT;
	v->a[39903] = anon_sym_0;
	v->a[39904] = actions(361);
	v->a[39905] = 16;
	v->a[39906] = anon_sym_PIPE;
	v->a[39907] = anon_sym_RPAREN;
	v->a[39908] = anon_sym_SEMI_SEMI;
	v->a[39909] = anon_sym_AMP_AMP;
	v->a[39910] = anon_sym_PIPE_PIPE;
	v->a[39911] = anon_sym_LT;
	v->a[39912] = anon_sym_GT;
	v->a[39913] = anon_sym_GT_GT;
	v->a[39914] = anon_sym_LT_AMP;
	v->a[39915] = anon_sym_GT_AMP;
	v->a[39916] = anon_sym_GT_PIPE;
	v->a[39917] = anon_sym_LT_GT;
	v->a[39918] = anon_sym_LT_LT;
	v->a[39919] = anon_sym_LT_LT_DASH;
	small_parse_table_1996(v);
}

void	small_parse_table_1996(t_small_parse_table_array *v)
{
	v->a[39920] = aux_sym_heredoc_redirect_token1;
	v->a[39921] = anon_sym_SEMI;
	v->a[39922] = 3;
	v->a[39923] = actions(3);
	v->a[39924] = 1;
	v->a[39925] = sym_comment;
	v->a[39926] = actions(1110);
	v->a[39927] = 2;
	v->a[39928] = sym_file_descriptor;
	v->a[39929] = sym__concat;
	v->a[39930] = actions(1105);
	v->a[39931] = 26;
	v->a[39932] = anon_sym_PIPE;
	v->a[39933] = anon_sym_RPAREN;
	v->a[39934] = anon_sym_SEMI_SEMI;
	v->a[39935] = anon_sym_AMP_AMP;
	v->a[39936] = anon_sym_PIPE_PIPE;
	v->a[39937] = anon_sym_LT;
	v->a[39938] = anon_sym_GT;
	v->a[39939] = anon_sym_GT_GT;
	small_parse_table_1997(v);
}

void	small_parse_table_1997(t_small_parse_table_array *v)
{
	v->a[39940] = anon_sym_LT_AMP;
	v->a[39941] = anon_sym_GT_AMP;
	v->a[39942] = anon_sym_GT_PIPE;
	v->a[39943] = anon_sym_LT_GT;
	v->a[39944] = anon_sym_LT_LT;
	v->a[39945] = anon_sym_LT_LT_DASH;
	v->a[39946] = aux_sym_heredoc_redirect_token1;
	v->a[39947] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39948] = aux_sym_concatenation_token1;
	v->a[39949] = anon_sym_DOLLAR;
	v->a[39950] = anon_sym_DQUOTE;
	v->a[39951] = sym_raw_string;
	v->a[39952] = sym_number;
	v->a[39953] = anon_sym_DOLLAR_LBRACE;
	v->a[39954] = anon_sym_DOLLAR_LPAREN;
	v->a[39955] = anon_sym_BQUOTE;
	v->a[39956] = sym_word;
	v->a[39957] = anon_sym_SEMI;
	v->a[39958] = 4;
	v->a[39959] = actions(3);
	small_parse_table_1998(v);
}

void	small_parse_table_1998(t_small_parse_table_array *v)
{
	v->a[39960] = 1;
	v->a[39961] = sym_comment;
	v->a[39962] = actions(1410);
	v->a[39963] = 2;
	v->a[39964] = anon_sym_esac;
	v->a[39965] = anon_sym_SEMI_SEMI;
	v->a[39966] = actions(1412);
	v->a[39967] = 2;
	v->a[39968] = sym_file_descriptor;
	v->a[39969] = sym_variable_name;
	v->a[39970] = actions(1408);
	v->a[39971] = 24;
	v->a[39972] = anon_sym_for;
	v->a[39973] = anon_sym_while;
	v->a[39974] = anon_sym_until;
	v->a[39975] = anon_sym_if;
	v->a[39976] = anon_sym_case;
	v->a[39977] = anon_sym_LPAREN;
	v->a[39978] = anon_sym_LBRACE;
	v->a[39979] = anon_sym_BANG;
	small_parse_table_1999(v);
}

void	small_parse_table_1999(t_small_parse_table_array *v)
{
	v->a[39980] = anon_sym_LT;
	v->a[39981] = anon_sym_GT;
	v->a[39982] = anon_sym_GT_GT;
	v->a[39983] = anon_sym_LT_AMP;
	v->a[39984] = anon_sym_GT_AMP;
	v->a[39985] = anon_sym_GT_PIPE;
	v->a[39986] = anon_sym_LT_GT;
	v->a[39987] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39988] = anon_sym_DOLLAR;
	v->a[39989] = anon_sym_DQUOTE;
	v->a[39990] = sym_raw_string;
	v->a[39991] = sym_number;
	v->a[39992] = anon_sym_DOLLAR_LBRACE;
	v->a[39993] = anon_sym_DOLLAR_LPAREN;
	v->a[39994] = anon_sym_BQUOTE;
	v->a[39995] = sym_word;
	v->a[39996] = 4;
	v->a[39997] = actions(3);
	v->a[39998] = 1;
	v->a[39999] = sym_comment;
	small_parse_table_2000(v);
}

/* EOF small_parse_table_399.c */
