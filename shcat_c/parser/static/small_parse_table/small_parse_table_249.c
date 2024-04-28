/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_249.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1245(t_small_parse_table_array *v)
{
	v->a[24900] = anon_sym_PIPE_PIPE;
	v->a[24901] = anon_sym_AMP_AMP;
	v->a[24902] = anon_sym_PIPE;
	v->a[24903] = anon_sym_AMP;
	v->a[24904] = anon_sym_LT;
	v->a[24905] = anon_sym_GT;
	v->a[24906] = anon_sym_LT_LT;
	v->a[24907] = anon_sym_GT_GT;
	v->a[24908] = anon_sym_SEMI_SEMI;
	v->a[24909] = anon_sym_PIPE_AMP;
	v->a[24910] = anon_sym_AMP_GT;
	v->a[24911] = anon_sym_AMP_GT_GT;
	v->a[24912] = anon_sym_LT_AMP;
	v->a[24913] = anon_sym_GT_AMP;
	v->a[24914] = anon_sym_GT_PIPE;
	v->a[24915] = anon_sym_LT_AMP_DASH;
	v->a[24916] = anon_sym_GT_AMP_DASH;
	v->a[24917] = anon_sym_LT_LT_DASH;
	v->a[24918] = anon_sym_BQUOTE;
	v->a[24919] = 21;
	small_parse_table_1246(v);
}

void	small_parse_table_1246(t_small_parse_table_array *v)
{
	v->a[24920] = actions(3);
	v->a[24921] = 1;
	v->a[24922] = sym_comment;
	v->a[24923] = actions(3785);
	v->a[24924] = 1;
	v->a[24925] = anon_sym_DOLLAR_LBRACK;
	v->a[24926] = actions(3787);
	v->a[24927] = 1;
	v->a[24928] = anon_sym_DOLLAR;
	v->a[24929] = actions(3791);
	v->a[24930] = 1;
	v->a[24931] = anon_sym_DQUOTE;
	v->a[24932] = actions(3793);
	v->a[24933] = 1;
	v->a[24934] = aux_sym_number_token1;
	v->a[24935] = actions(3795);
	v->a[24936] = 1;
	v->a[24937] = aux_sym_number_token2;
	v->a[24938] = actions(3797);
	v->a[24939] = 1;
	small_parse_table_1247(v);
}

void	small_parse_table_1247(t_small_parse_table_array *v)
{
	v->a[24940] = anon_sym_DOLLAR_LBRACE;
	v->a[24941] = actions(3799);
	v->a[24942] = 1;
	v->a[24943] = anon_sym_DOLLAR_LPAREN;
	v->a[24944] = actions(3801);
	v->a[24945] = 1;
	v->a[24946] = anon_sym_BQUOTE;
	v->a[24947] = actions(3803);
	v->a[24948] = 1;
	v->a[24949] = anon_sym_DOLLAR_BQUOTE;
	v->a[24950] = actions(3809);
	v->a[24951] = 1;
	v->a[24952] = sym__brace_start;
	v->a[24953] = actions(4139);
	v->a[24954] = 1;
	v->a[24955] = sym__special_character;
	v->a[24956] = actions(4145);
	v->a[24957] = 1;
	v->a[24958] = sym_test_operator;
	v->a[24959] = state(4305);
	small_parse_table_1248(v);
}

void	small_parse_table_1248(t_small_parse_table_array *v)
{
	v->a[24960] = 1;
	v->a[24961] = aux_sym__literal_repeat1;
	v->a[24962] = state(4736);
	v->a[24963] = 1;
	v->a[24964] = sym_concatenation;
	v->a[24965] = actions(2500);
	v->a[24966] = 2;
	v->a[24967] = sym_file_descriptor;
	v->a[24968] = aux_sym_heredoc_redirect_token1;
	v->a[24969] = actions(3783);
	v->a[24970] = 2;
	v->a[24971] = anon_sym_LPAREN_LPAREN;
	v->a[24972] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24973] = actions(3805);
	v->a[24974] = 2;
	v->a[24975] = anon_sym_LT_LPAREN;
	v->a[24976] = anon_sym_GT_LPAREN;
	v->a[24977] = actions(4143);
	v->a[24978] = 3;
	v->a[24979] = sym_raw_string;
	small_parse_table_1249(v);
}

void	small_parse_table_1249(t_small_parse_table_array *v)
{
	v->a[24980] = sym_ansi_c_string;
	v->a[24981] = sym_word;
	v->a[24982] = state(4838);
	v->a[24983] = 9;
	v->a[24984] = sym_arithmetic_expansion;
	v->a[24985] = sym_brace_expression;
	v->a[24986] = sym_string;
	v->a[24987] = sym_translated_string;
	v->a[24988] = sym_number;
	v->a[24989] = sym_simple_expansion;
	v->a[24990] = sym_expansion;
	v->a[24991] = sym_command_substitution;
	v->a[24992] = sym_process_substitution;
	v->a[24993] = actions(2498);
	v->a[24994] = 20;
	v->a[24995] = anon_sym_SEMI;
	v->a[24996] = anon_sym_PIPE_PIPE;
	v->a[24997] = anon_sym_AMP_AMP;
	v->a[24998] = anon_sym_PIPE;
	v->a[24999] = anon_sym_AMP;
	small_parse_table_1250(v);
}

/* EOF small_parse_table_249.c */
