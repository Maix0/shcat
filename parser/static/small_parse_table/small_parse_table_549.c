/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_549.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2745(t_small_parse_table_array *v)
{
	v->a[54900] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54901] = anon_sym_DOLLAR;
	v->a[54902] = anon_sym_DQUOTE;
	v->a[54903] = sym_raw_string;
	v->a[54904] = sym_number;
	v->a[54905] = anon_sym_DOLLAR_LBRACE;
	v->a[54906] = anon_sym_DOLLAR_LPAREN;
	v->a[54907] = anon_sym_BQUOTE;
	v->a[54908] = sym_word;
	v->a[54909] = 11;
	v->a[54910] = actions(3);
	v->a[54911] = 1;
	v->a[54912] = sym_comment;
	v->a[54913] = actions(782);
	v->a[54914] = 1;
	v->a[54915] = anon_sym_PIPE;
	v->a[54916] = actions(886);
	v->a[54917] = 1;
	v->a[54918] = anon_sym_SEMI;
	v->a[54919] = actions(1876);
	small_parse_table_2746(v);
}

void	small_parse_table_2746(t_small_parse_table_array *v)
{
	v->a[54920] = 1;
	v->a[54921] = aux_sym_heredoc_redirect_token1;
	v->a[54922] = actions(1878);
	v->a[54923] = 1;
	v->a[54924] = sym_file_descriptor;
	v->a[54925] = state(601);
	v->a[54926] = 1;
	v->a[54927] = sym_terminator;
	v->a[54928] = actions(784);
	v->a[54929] = 2;
	v->a[54930] = anon_sym_esac;
	v->a[54931] = anon_sym_SEMI_SEMI;
	v->a[54932] = actions(882);
	v->a[54933] = 2;
	v->a[54934] = anon_sym_AMP_AMP;
	v->a[54935] = anon_sym_PIPE_PIPE;
	v->a[54936] = actions(884);
	v->a[54937] = 2;
	v->a[54938] = anon_sym_LT_LT;
	v->a[54939] = anon_sym_LT_LT_DASH;
	small_parse_table_2747(v);
}

void	small_parse_table_2747(t_small_parse_table_array *v)
{
	v->a[54940] = state(1099);
	v->a[54941] = 3;
	v->a[54942] = sym_file_redirect;
	v->a[54943] = sym_heredoc_redirect;
	v->a[54944] = aux_sym_redirected_statement_repeat1;
	v->a[54945] = actions(1874);
	v->a[54946] = 7;
	v->a[54947] = anon_sym_LT;
	v->a[54948] = anon_sym_GT;
	v->a[54949] = anon_sym_GT_GT;
	v->a[54950] = anon_sym_LT_AMP;
	v->a[54951] = anon_sym_GT_AMP;
	v->a[54952] = anon_sym_GT_PIPE;
	v->a[54953] = anon_sym_LT_GT;
	v->a[54954] = 11;
	v->a[54955] = actions(3);
	v->a[54956] = 1;
	v->a[54957] = sym_comment;
	v->a[54958] = actions(782);
	v->a[54959] = 1;
	small_parse_table_2748(v);
}

void	small_parse_table_2748(t_small_parse_table_array *v)
{
	v->a[54960] = anon_sym_PIPE;
	v->a[54961] = actions(886);
	v->a[54962] = 1;
	v->a[54963] = anon_sym_SEMI;
	v->a[54964] = actions(1876);
	v->a[54965] = 1;
	v->a[54966] = aux_sym_heredoc_redirect_token1;
	v->a[54967] = actions(1878);
	v->a[54968] = 1;
	v->a[54969] = sym_file_descriptor;
	v->a[54970] = state(602);
	v->a[54971] = 1;
	v->a[54972] = sym_terminator;
	v->a[54973] = actions(784);
	v->a[54974] = 2;
	v->a[54975] = anon_sym_esac;
	v->a[54976] = anon_sym_SEMI_SEMI;
	v->a[54977] = actions(882);
	v->a[54978] = 2;
	v->a[54979] = anon_sym_AMP_AMP;
	small_parse_table_2749(v);
}

void	small_parse_table_2749(t_small_parse_table_array *v)
{
	v->a[54980] = anon_sym_PIPE_PIPE;
	v->a[54981] = actions(884);
	v->a[54982] = 2;
	v->a[54983] = anon_sym_LT_LT;
	v->a[54984] = anon_sym_LT_LT_DASH;
	v->a[54985] = state(1099);
	v->a[54986] = 3;
	v->a[54987] = sym_file_redirect;
	v->a[54988] = sym_heredoc_redirect;
	v->a[54989] = aux_sym_redirected_statement_repeat1;
	v->a[54990] = actions(1874);
	v->a[54991] = 7;
	v->a[54992] = anon_sym_LT;
	v->a[54993] = anon_sym_GT;
	v->a[54994] = anon_sym_GT_GT;
	v->a[54995] = anon_sym_LT_AMP;
	v->a[54996] = anon_sym_GT_AMP;
	v->a[54997] = anon_sym_GT_PIPE;
	v->a[54998] = anon_sym_LT_GT;
	v->a[54999] = 11;
	small_parse_table_2750(v);
}

/* EOF small_parse_table_549.c */
