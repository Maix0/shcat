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
	v->a[54900] = ts_builtin_sym_end;
	v->a[54901] = actions(1863);
	v->a[54902] = 1;
	v->a[54903] = aux_sym_heredoc_redirect_token1;
	v->a[54904] = actions(1865);
	v->a[54905] = 1;
	v->a[54906] = sym_file_descriptor;
	v->a[54907] = state(766);
	v->a[54908] = 1;
	v->a[54909] = sym_terminator;
	v->a[54910] = actions(700);
	v->a[54911] = 2;
	v->a[54912] = anon_sym_LT_LT;
	v->a[54913] = anon_sym_LT_LT_DASH;
	v->a[54914] = actions(719);
	v->a[54915] = 2;
	v->a[54916] = anon_sym_AMP_AMP;
	v->a[54917] = anon_sym_PIPE_PIPE;
	v->a[54918] = actions(717);
	v->a[54919] = 3;
	small_parse_table_2746(v);
}

void	small_parse_table_2746(t_small_parse_table_array *v)
{
	v->a[54920] = anon_sym_SEMI_SEMI;
	v->a[54921] = anon_sym_AMP;
	v->a[54922] = anon_sym_SEMI;
	v->a[54923] = state(1086);
	v->a[54924] = 3;
	v->a[54925] = sym_file_redirect;
	v->a[54926] = sym_heredoc_redirect;
	v->a[54927] = aux_sym_redirected_statement_repeat1;
	v->a[54928] = actions(1861);
	v->a[54929] = 7;
	v->a[54930] = anon_sym_LT;
	v->a[54931] = anon_sym_GT;
	v->a[54932] = anon_sym_GT_GT;
	v->a[54933] = anon_sym_LT_AMP;
	v->a[54934] = anon_sym_GT_AMP;
	v->a[54935] = anon_sym_GT_PIPE;
	v->a[54936] = anon_sym_LT_GT;
	v->a[54937] = 16;
	v->a[54938] = actions(3);
	v->a[54939] = 1;
	small_parse_table_2747(v);
}

void	small_parse_table_2747(t_small_parse_table_array *v)
{
	v->a[54940] = sym_comment;
	v->a[54941] = actions(1637);
	v->a[54942] = 1;
	v->a[54943] = anon_sym_LPAREN;
	v->a[54944] = actions(1641);
	v->a[54945] = 1;
	v->a[54946] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54947] = actions(1643);
	v->a[54948] = 1;
	v->a[54949] = anon_sym_DOLLAR;
	v->a[54950] = actions(1645);
	v->a[54951] = 1;
	v->a[54952] = anon_sym_DQUOTE;
	v->a[54953] = actions(1647);
	v->a[54954] = 1;
	v->a[54955] = anon_sym_DOLLAR_LBRACE;
	v->a[54956] = actions(1649);
	v->a[54957] = 1;
	v->a[54958] = anon_sym_DOLLAR_LPAREN;
	v->a[54959] = actions(1651);
	small_parse_table_2748(v);
}

void	small_parse_table_2748(t_small_parse_table_array *v)
{
	v->a[54960] = 1;
	v->a[54961] = anon_sym_BQUOTE;
	v->a[54962] = actions(1653);
	v->a[54963] = 1;
	v->a[54964] = sym_extglob_pattern;
	v->a[54965] = actions(1695);
	v->a[54966] = 1;
	v->a[54967] = anon_sym_esac;
	v->a[54968] = state(1042);
	v->a[54969] = 1;
	v->a[54970] = aux_sym_case_statement_repeat1;
	v->a[54971] = state(1713);
	v->a[54972] = 1;
	v->a[54973] = sym_case_item;
	v->a[54974] = state(1999);
	v->a[54975] = 1;
	v->a[54976] = sym__case_item_last;
	v->a[54977] = state(1873);
	v->a[54978] = 2;
	v->a[54979] = sym_concatenation;
	small_parse_table_2749(v);
}

void	small_parse_table_2749(t_small_parse_table_array *v)
{
	v->a[54980] = sym__extglob_blob;
	v->a[54981] = actions(1633);
	v->a[54982] = 3;
	v->a[54983] = sym_raw_string;
	v->a[54984] = sym_number;
	v->a[54985] = sym_word;
	v->a[54986] = state(1806);
	v->a[54987] = 5;
	v->a[54988] = sym_arithmetic_expansion;
	v->a[54989] = sym_string;
	v->a[54990] = sym_simple_expansion;
	v->a[54991] = sym_expansion;
	v->a[54992] = sym_command_substitution;
	v->a[54993] = 3;
	v->a[54994] = actions(3);
	v->a[54995] = 1;
	v->a[54996] = sym_comment;
	v->a[54997] = actions(1178);
	v->a[54998] = 2;
	v->a[54999] = sym_file_descriptor;
	small_parse_table_2750(v);
}

/* EOF small_parse_table_549.c */
