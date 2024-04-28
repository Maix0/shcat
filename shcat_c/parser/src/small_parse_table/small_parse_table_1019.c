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
	v->a[101900] = aux_sym__literal_repeat1;
	v->a[101901] = state(2828);
	v->a[101902] = 1;
	v->a[101903] = sym__expression;
	v->a[101904] = actions(352);
	v->a[101905] = 2;
	v->a[101906] = anon_sym_LPAREN_LPAREN;
	v->a[101907] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101908] = actions(387);
	v->a[101909] = 2;
	v->a[101910] = anon_sym_LT_LPAREN;
	v->a[101911] = anon_sym_GT_LPAREN;
	v->a[101912] = actions(1099);
	v->a[101913] = 2;
	v->a[101914] = anon_sym_PLUS_PLUS2;
	v->a[101915] = anon_sym_DASH_DASH2;
	v->a[101916] = actions(1101);
	v->a[101917] = 2;
	v->a[101918] = anon_sym_DASH2;
	v->a[101919] = anon_sym_PLUS2;
	small_parse_table_5096(v);
}

void	small_parse_table_5096(t_small_parse_table_array *v)
{
	v->a[101920] = actions(1109);
	v->a[101921] = 2;
	v->a[101922] = sym_raw_string;
	v->a[101923] = sym_ansi_c_string;
	v->a[101924] = state(2863);
	v->a[101925] = 6;
	v->a[101926] = sym_binary_expression;
	v->a[101927] = sym_ternary_expression;
	v->a[101928] = sym_unary_expression;
	v->a[101929] = sym_postfix_expression;
	v->a[101930] = sym_parenthesized_expression;
	v->a[101931] = sym_concatenation;
	v->a[101932] = state(2451);
	v->a[101933] = 9;
	v->a[101934] = sym_arithmetic_expansion;
	v->a[101935] = sym_brace_expression;
	v->a[101936] = sym_string;
	v->a[101937] = sym_translated_string;
	v->a[101938] = sym_number;
	v->a[101939] = sym_simple_expansion;
	small_parse_table_5097(v);
}

void	small_parse_table_5097(t_small_parse_table_array *v)
{
	v->a[101940] = sym_expansion;
	v->a[101941] = sym_command_substitution;
	v->a[101942] = sym_process_substitution;
	v->a[101943] = 3;
	v->a[101944] = actions(3);
	v->a[101945] = 1;
	v->a[101946] = sym_comment;
	v->a[101947] = actions(1342);
	v->a[101948] = 6;
	v->a[101949] = sym_file_descriptor;
	v->a[101950] = sym__concat;
	v->a[101951] = sym_test_operator;
	v->a[101952] = sym__brace_start;
	v->a[101953] = ts_builtin_sym_end;
	v->a[101954] = aux_sym_heredoc_redirect_token1;
	v->a[101955] = actions(1340);
	v->a[101956] = 37;
	v->a[101957] = anon_sym_LPAREN_LPAREN;
	v->a[101958] = anon_sym_SEMI;
	v->a[101959] = anon_sym_PIPE_PIPE;
	small_parse_table_5098(v);
}

void	small_parse_table_5098(t_small_parse_table_array *v)
{
	v->a[101960] = anon_sym_AMP_AMP;
	v->a[101961] = anon_sym_PIPE;
	v->a[101962] = anon_sym_AMP;
	v->a[101963] = anon_sym_LT;
	v->a[101964] = anon_sym_GT;
	v->a[101965] = anon_sym_LT_LT;
	v->a[101966] = anon_sym_GT_GT;
	v->a[101967] = anon_sym_SEMI_SEMI;
	v->a[101968] = anon_sym_PIPE_AMP;
	v->a[101969] = anon_sym_AMP_GT;
	v->a[101970] = anon_sym_AMP_GT_GT;
	v->a[101971] = anon_sym_LT_AMP;
	v->a[101972] = anon_sym_GT_AMP;
	v->a[101973] = anon_sym_GT_PIPE;
	v->a[101974] = anon_sym_LT_AMP_DASH;
	v->a[101975] = anon_sym_GT_AMP_DASH;
	v->a[101976] = anon_sym_LT_LT_DASH;
	v->a[101977] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101978] = anon_sym_DOLLAR_LBRACK;
	v->a[101979] = aux_sym_concatenation_token1;
	small_parse_table_5099(v);
}

void	small_parse_table_5099(t_small_parse_table_array *v)
{
	v->a[101980] = anon_sym_DOLLAR;
	v->a[101981] = sym__special_character;
	v->a[101982] = anon_sym_DQUOTE;
	v->a[101983] = sym_raw_string;
	v->a[101984] = sym_ansi_c_string;
	v->a[101985] = aux_sym_number_token1;
	v->a[101986] = aux_sym_number_token2;
	v->a[101987] = anon_sym_DOLLAR_LBRACE;
	v->a[101988] = anon_sym_DOLLAR_LPAREN;
	v->a[101989] = anon_sym_BQUOTE;
	v->a[101990] = anon_sym_DOLLAR_BQUOTE;
	v->a[101991] = anon_sym_LT_LPAREN;
	v->a[101992] = anon_sym_GT_LPAREN;
	v->a[101993] = sym_word;
	v->a[101994] = 5;
	v->a[101995] = actions(71);
	v->a[101996] = 1;
	v->a[101997] = sym_comment;
	v->a[101998] = state(2152);
	v->a[101999] = 1;
	small_parse_table_5100(v);
}

/* EOF small_parse_table_1019.c */
