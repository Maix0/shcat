/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_159.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_795(t_small_parse_table_array *v)
{
	v->a[15900] = anon_sym_AMP_GT_GT;
	v->a[15901] = anon_sym_LT_AMP;
	v->a[15902] = anon_sym_GT_AMP;
	v->a[15903] = anon_sym_GT_PIPE;
	v->a[15904] = anon_sym_LT_AMP_DASH;
	v->a[15905] = anon_sym_GT_AMP_DASH;
	v->a[15906] = anon_sym_LT_LT_DASH;
	v->a[15907] = aux_sym_heredoc_redirect_token1;
	v->a[15908] = anon_sym_LT_LT_LT;
	v->a[15909] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15910] = anon_sym_DOLLAR_LBRACK;
	v->a[15911] = sym__special_character;
	v->a[15912] = sym_raw_string;
	v->a[15913] = sym_ansi_c_string;
	v->a[15914] = aux_sym_number_token1;
	v->a[15915] = aux_sym_number_token2;
	v->a[15916] = anon_sym_DOLLAR_LBRACE;
	v->a[15917] = anon_sym_DOLLAR_LPAREN;
	v->a[15918] = anon_sym_BQUOTE;
	v->a[15919] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_796(v);
}

void	small_parse_table_796(t_small_parse_table_array *v)
{
	v->a[15920] = anon_sym_LT_LPAREN;
	v->a[15921] = anon_sym_GT_LPAREN;
	v->a[15922] = sym_word;
	v->a[15923] = 36;
	v->a[15924] = actions(71);
	v->a[15925] = 1;
	v->a[15926] = sym_comment;
	v->a[15927] = actions(171);
	v->a[15928] = 1;
	v->a[15929] = anon_sym_RPAREN_RPAREN;
	v->a[15930] = actions(1141);
	v->a[15931] = 1;
	v->a[15932] = anon_sym_DOLLAR_LBRACK;
	v->a[15933] = actions(1145);
	v->a[15934] = 1;
	v->a[15935] = anon_sym_DOLLAR;
	v->a[15936] = actions(1149);
	v->a[15937] = 1;
	v->a[15938] = anon_sym_DQUOTE;
	v->a[15939] = actions(1153);
	small_parse_table_797(v);
}

void	small_parse_table_797(t_small_parse_table_array *v)
{
	v->a[15940] = 1;
	v->a[15941] = aux_sym_number_token1;
	v->a[15942] = actions(1155);
	v->a[15943] = 1;
	v->a[15944] = aux_sym_number_token2;
	v->a[15945] = actions(1157);
	v->a[15946] = 1;
	v->a[15947] = anon_sym_DOLLAR_LBRACE;
	v->a[15948] = actions(1159);
	v->a[15949] = 1;
	v->a[15950] = anon_sym_DOLLAR_LPAREN;
	v->a[15951] = actions(1163);
	v->a[15952] = 1;
	v->a[15953] = anon_sym_DOLLAR_BQUOTE;
	v->a[15954] = actions(1169);
	v->a[15955] = 1;
	v->a[15956] = sym__brace_start;
	v->a[15957] = actions(1171);
	v->a[15958] = 1;
	v->a[15959] = sym_word;
	small_parse_table_798(v);
}

void	small_parse_table_798(t_small_parse_table_array *v)
{
	v->a[15960] = actions(1181);
	v->a[15961] = 1;
	v->a[15962] = sym__special_character;
	v->a[15963] = actions(1185);
	v->a[15964] = 1;
	v->a[15965] = sym_test_operator;
	v->a[15966] = actions(3050);
	v->a[15967] = 1;
	v->a[15968] = anon_sym_LPAREN;
	v->a[15969] = actions(3052);
	v->a[15970] = 1;
	v->a[15971] = anon_sym_BANG;
	v->a[15972] = actions(3058);
	v->a[15973] = 1;
	v->a[15974] = anon_sym_TILDE;
	v->a[15975] = actions(3060);
	v->a[15976] = 1;
	v->a[15977] = anon_sym_BQUOTE;
	v->a[15978] = actions(3064);
	v->a[15979] = 1;
	small_parse_table_799(v);
}

void	small_parse_table_799(t_small_parse_table_array *v)
{
	v->a[15980] = sym_variable_name;
	v->a[15981] = actions(3465);
	v->a[15982] = 1;
	v->a[15983] = aux_sym__simple_variable_name_token1;
	v->a[15984] = state(2387);
	v->a[15985] = 1;
	v->a[15986] = sym_command_substitution;
	v->a[15987] = state(2484);
	v->a[15988] = 1;
	v->a[15989] = aux_sym__literal_repeat1;
	v->a[15990] = state(2801);
	v->a[15991] = 1;
	v->a[15992] = sym__arithmetic_binary_expression;
	v->a[15993] = state(2803);
	v->a[15994] = 1;
	v->a[15995] = sym__arithmetic_ternary_expression;
	v->a[15996] = state(2809);
	v->a[15997] = 1;
	v->a[15998] = sym__arithmetic_unary_expression;
	v->a[15999] = state(2825);
	small_parse_table_800(v);
}

/* EOF small_parse_table_159.c */
