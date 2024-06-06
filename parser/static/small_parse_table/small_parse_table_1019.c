/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1019.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5095(t_small_parse_table_array *v)
{
	v->a[101900] = 1;
	v->a[101901] = sym_comment;
	v->a[101902] = actions(5849);
	v->a[101903] = 1;
	v->a[101904] = aux_sym_heredoc_redirect_token1;
	v->a[101905] = actions(5851);
	v->a[101906] = 1;
	v->a[101907] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101908] = actions(5854);
	v->a[101909] = 1;
	v->a[101910] = anon_sym_DOLLAR;
	v->a[101911] = actions(5857);
	v->a[101912] = 1;
	v->a[101913] = sym__special_character;
	v->a[101914] = actions(5860);
	v->a[101915] = 1;
	v->a[101916] = anon_sym_DQUOTE;
	v->a[101917] = actions(5863);
	v->a[101918] = 1;
	v->a[101919] = aux_sym_number_token1;
	small_parse_table_5096(v);
}

void	small_parse_table_5096(t_small_parse_table_array *v)
{
	v->a[101920] = actions(5866);
	v->a[101921] = 1;
	v->a[101922] = aux_sym_number_token2;
	v->a[101923] = actions(5869);
	v->a[101924] = 1;
	v->a[101925] = anon_sym_DOLLAR_LBRACE;
	v->a[101926] = actions(5872);
	v->a[101927] = 1;
	v->a[101928] = anon_sym_DOLLAR_LPAREN;
	v->a[101929] = actions(5875);
	v->a[101930] = 1;
	v->a[101931] = anon_sym_BQUOTE;
	v->a[101932] = actions(5878);
	v->a[101933] = 1;
	v->a[101934] = anon_sym_DOLLAR_BQUOTE;
	v->a[101935] = actions(5881);
	v->a[101936] = 1;
	v->a[101937] = sym_test_operator;
	v->a[101938] = actions(5884);
	v->a[101939] = 1;
	small_parse_table_5097(v);
}

void	small_parse_table_5097(t_small_parse_table_array *v)
{
	v->a[101940] = sym__brace_start;
	v->a[101941] = state(2122);
	v->a[101942] = 1;
	v->a[101943] = aux_sym__heredoc_command;
	v->a[101944] = state(2852);
	v->a[101945] = 1;
	v->a[101946] = aux_sym__literal_repeat1;
	v->a[101947] = state(2882);
	v->a[101948] = 1;
	v->a[101949] = sym_concatenation;
	v->a[101950] = actions(5846);
	v->a[101951] = 2;
	v->a[101952] = sym_raw_string;
	v->a[101953] = sym_word;
	v->a[101954] = state(2716);
	v->a[101955] = 7;
	v->a[101956] = sym_arithmetic_expansion;
	v->a[101957] = sym_brace_expression;
	v->a[101958] = sym_string;
	v->a[101959] = sym_number;
	small_parse_table_5098(v);
}

void	small_parse_table_5098(t_small_parse_table_array *v)
{
	v->a[101960] = sym_simple_expansion;
	v->a[101961] = sym_expansion;
	v->a[101962] = sym_command_substitution;
	v->a[101963] = 19;
	v->a[101964] = actions(3);
	v->a[101965] = 1;
	v->a[101966] = sym_comment;
	v->a[101967] = actions(5407);
	v->a[101968] = 1;
	v->a[101969] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101970] = actions(5409);
	v->a[101971] = 1;
	v->a[101972] = anon_sym_DOLLAR;
	v->a[101973] = actions(5413);
	v->a[101974] = 1;
	v->a[101975] = anon_sym_DQUOTE;
	v->a[101976] = actions(5417);
	v->a[101977] = 1;
	v->a[101978] = aux_sym_number_token1;
	v->a[101979] = actions(5419);
	small_parse_table_5099(v);
}

void	small_parse_table_5099(t_small_parse_table_array *v)
{
	v->a[101980] = 1;
	v->a[101981] = aux_sym_number_token2;
	v->a[101982] = actions(5421);
	v->a[101983] = 1;
	v->a[101984] = anon_sym_DOLLAR_LBRACE;
	v->a[101985] = actions(5423);
	v->a[101986] = 1;
	v->a[101987] = anon_sym_DOLLAR_LPAREN;
	v->a[101988] = actions(5425);
	v->a[101989] = 1;
	v->a[101990] = anon_sym_BQUOTE;
	v->a[101991] = actions(5427);
	v->a[101992] = 1;
	v->a[101993] = anon_sym_DOLLAR_BQUOTE;
	v->a[101994] = actions(5429);
	v->a[101995] = 1;
	v->a[101996] = sym__comment_word;
	v->a[101997] = actions(5431);
	v->a[101998] = 1;
	v->a[101999] = sym__empty_value;
	small_parse_table_5100(v);
}

/* EOF small_parse_table_1019.c */
