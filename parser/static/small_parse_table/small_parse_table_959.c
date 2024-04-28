/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_959.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4795(t_small_parse_table_array *v)
{
	v->a[95900] = anon_sym_PLUS2;
	v->a[95901] = actions(1109);
	v->a[95902] = 2;
	v->a[95903] = sym_raw_string;
	v->a[95904] = sym_ansi_c_string;
	v->a[95905] = state(2863);
	v->a[95906] = 6;
	v->a[95907] = sym_binary_expression;
	v->a[95908] = sym_ternary_expression;
	v->a[95909] = sym_unary_expression;
	v->a[95910] = sym_postfix_expression;
	v->a[95911] = sym_parenthesized_expression;
	v->a[95912] = sym_concatenation;
	v->a[95913] = state(2451);
	v->a[95914] = 9;
	v->a[95915] = sym_arithmetic_expansion;
	v->a[95916] = sym_brace_expression;
	v->a[95917] = sym_string;
	v->a[95918] = sym_translated_string;
	v->a[95919] = sym_number;
	small_parse_table_4796(v);
}

void	small_parse_table_4796(t_small_parse_table_array *v)
{
	v->a[95920] = sym_simple_expansion;
	v->a[95921] = sym_expansion;
	v->a[95922] = sym_command_substitution;
	v->a[95923] = sym_process_substitution;
	v->a[95924] = 3;
	v->a[95925] = actions(3);
	v->a[95926] = 1;
	v->a[95927] = sym_comment;
	v->a[95928] = actions(1263);
	v->a[95929] = 5;
	v->a[95930] = sym_file_descriptor;
	v->a[95931] = sym_variable_name;
	v->a[95932] = sym_test_operator;
	v->a[95933] = sym__brace_start;
	v->a[95934] = aux_sym_heredoc_redirect_token1;
	v->a[95935] = actions(1261);
	v->a[95936] = 38;
	v->a[95937] = anon_sym_LPAREN_LPAREN;
	v->a[95938] = anon_sym_SEMI;
	v->a[95939] = anon_sym_PIPE_PIPE;
	small_parse_table_4797(v);
}

void	small_parse_table_4797(t_small_parse_table_array *v)
{
	v->a[95940] = anon_sym_AMP_AMP;
	v->a[95941] = anon_sym_PIPE;
	v->a[95942] = anon_sym_AMP;
	v->a[95943] = anon_sym_LT;
	v->a[95944] = anon_sym_GT;
	v->a[95945] = anon_sym_LT_LT;
	v->a[95946] = anon_sym_GT_GT;
	v->a[95947] = anon_sym_RPAREN;
	v->a[95948] = anon_sym_SEMI_SEMI;
	v->a[95949] = anon_sym_PIPE_AMP;
	v->a[95950] = anon_sym_AMP_GT;
	v->a[95951] = anon_sym_AMP_GT_GT;
	v->a[95952] = anon_sym_LT_AMP;
	v->a[95953] = anon_sym_GT_AMP;
	v->a[95954] = anon_sym_GT_PIPE;
	v->a[95955] = anon_sym_LT_AMP_DASH;
	v->a[95956] = anon_sym_GT_AMP_DASH;
	v->a[95957] = anon_sym_LT_LT_DASH;
	v->a[95958] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95959] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_4798(v);
}

void	small_parse_table_4798(t_small_parse_table_array *v)
{
	v->a[95960] = anon_sym_DOLLAR;
	v->a[95961] = sym__special_character;
	v->a[95962] = anon_sym_DQUOTE;
	v->a[95963] = sym_raw_string;
	v->a[95964] = sym_ansi_c_string;
	v->a[95965] = aux_sym_number_token1;
	v->a[95966] = aux_sym_number_token2;
	v->a[95967] = anon_sym_DOLLAR_LBRACE;
	v->a[95968] = anon_sym_DOLLAR_LPAREN;
	v->a[95969] = anon_sym_BQUOTE;
	v->a[95970] = anon_sym_DOLLAR_BQUOTE;
	v->a[95971] = anon_sym_LT_LPAREN;
	v->a[95972] = anon_sym_GT_LPAREN;
	v->a[95973] = aux_sym__simple_variable_name_token1;
	v->a[95974] = sym_word;
	v->a[95975] = 3;
	v->a[95976] = actions(3);
	v->a[95977] = 1;
	v->a[95978] = sym_comment;
	v->a[95979] = actions(4372);
	small_parse_table_4799(v);
}

void	small_parse_table_4799(t_small_parse_table_array *v)
{
	v->a[95980] = 5;
	v->a[95981] = sym_file_descriptor;
	v->a[95982] = sym_variable_name;
	v->a[95983] = sym_test_operator;
	v->a[95984] = sym__brace_start;
	v->a[95985] = aux_sym_heredoc_redirect_token1;
	v->a[95986] = actions(4370);
	v->a[95987] = 38;
	v->a[95988] = anon_sym_LPAREN_LPAREN;
	v->a[95989] = anon_sym_SEMI;
	v->a[95990] = anon_sym_PIPE_PIPE;
	v->a[95991] = anon_sym_AMP_AMP;
	v->a[95992] = anon_sym_PIPE;
	v->a[95993] = anon_sym_AMP;
	v->a[95994] = anon_sym_LT;
	v->a[95995] = anon_sym_GT;
	v->a[95996] = anon_sym_LT_LT;
	v->a[95997] = anon_sym_GT_GT;
	v->a[95998] = anon_sym_RPAREN;
	v->a[95999] = anon_sym_SEMI_SEMI;
	small_parse_table_4800(v);
}

/* EOF small_parse_table_959.c */
