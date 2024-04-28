/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_129.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_645(t_small_parse_table_array *v)
{
	v->a[12900] = sym_brace_expression;
	v->a[12901] = sym_translated_string;
	v->a[12902] = sym_process_substitution;
	v->a[12903] = state(2799);
	v->a[12904] = 4;
	v->a[12905] = sym_subscript;
	v->a[12906] = sym__arithmetic_expression;
	v->a[12907] = sym__arithmetic_literal;
	v->a[12908] = sym__arithmetic_parenthesized_expression;
	v->a[12909] = state(2594);
	v->a[12910] = 6;
	v->a[12911] = sym_binary_expression;
	v->a[12912] = sym_ternary_expression;
	v->a[12913] = sym_unary_expression;
	v->a[12914] = sym_postfix_expression;
	v->a[12915] = sym_parenthesized_expression;
	v->a[12916] = sym_concatenation;
	v->a[12917] = 8;
	v->a[12918] = actions(3);
	v->a[12919] = 1;
	small_parse_table_646(v);
}

void	small_parse_table_646(t_small_parse_table_array *v)
{
	v->a[12920] = sym_comment;
	v->a[12921] = actions(3115);
	v->a[12922] = 1;
	v->a[12923] = anon_sym_DQUOTE;
	v->a[12924] = actions(3119);
	v->a[12925] = 1;
	v->a[12926] = sym_variable_name;
	v->a[12927] = state(1864);
	v->a[12928] = 1;
	v->a[12929] = sym_string;
	v->a[12930] = actions(3117);
	v->a[12931] = 2;
	v->a[12932] = aux_sym__simple_variable_name_token1;
	v->a[12933] = aux_sym__multiline_variable_name_token1;
	v->a[12934] = actions(1235);
	v->a[12935] = 3;
	v->a[12936] = sym_file_descriptor;
	v->a[12937] = sym_test_operator;
	v->a[12938] = sym__brace_start;
	v->a[12939] = actions(3113);
	small_parse_table_647(v);
}

void	small_parse_table_647(t_small_parse_table_array *v)
{
	v->a[12940] = 9;
	v->a[12941] = anon_sym_DASH;
	v->a[12942] = anon_sym_STAR;
	v->a[12943] = anon_sym_BANG;
	v->a[12944] = anon_sym_QMARK;
	v->a[12945] = anon_sym_DOLLAR;
	v->a[12946] = anon_sym_POUND;
	v->a[12947] = anon_sym_AT2;
	v->a[12948] = anon_sym_0;
	v->a[12949] = anon_sym__;
	v->a[12950] = actions(1227);
	v->a[12951] = 37;
	v->a[12952] = anon_sym_LPAREN_LPAREN;
	v->a[12953] = anon_sym_SEMI;
	v->a[12954] = anon_sym_PIPE_PIPE;
	v->a[12955] = anon_sym_AMP_AMP;
	v->a[12956] = anon_sym_PIPE;
	v->a[12957] = anon_sym_AMP;
	v->a[12958] = anon_sym_LT;
	v->a[12959] = anon_sym_GT;
	small_parse_table_648(v);
}

void	small_parse_table_648(t_small_parse_table_array *v)
{
	v->a[12960] = anon_sym_LT_LT;
	v->a[12961] = anon_sym_GT_GT;
	v->a[12962] = anon_sym_RPAREN;
	v->a[12963] = anon_sym_SEMI_SEMI;
	v->a[12964] = anon_sym_PIPE_AMP;
	v->a[12965] = anon_sym_AMP_GT;
	v->a[12966] = anon_sym_AMP_GT_GT;
	v->a[12967] = anon_sym_LT_AMP;
	v->a[12968] = anon_sym_GT_AMP;
	v->a[12969] = anon_sym_GT_PIPE;
	v->a[12970] = anon_sym_LT_AMP_DASH;
	v->a[12971] = anon_sym_GT_AMP_DASH;
	v->a[12972] = anon_sym_LT_LT_DASH;
	v->a[12973] = aux_sym_heredoc_redirect_token1;
	v->a[12974] = anon_sym_LT_LT_LT;
	v->a[12975] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12976] = anon_sym_DOLLAR_LBRACK;
	v->a[12977] = sym__special_character;
	v->a[12978] = sym_raw_string;
	v->a[12979] = sym_ansi_c_string;
	small_parse_table_649(v);
}

void	small_parse_table_649(t_small_parse_table_array *v)
{
	v->a[12980] = aux_sym_number_token1;
	v->a[12981] = aux_sym_number_token2;
	v->a[12982] = anon_sym_DOLLAR_LBRACE;
	v->a[12983] = anon_sym_DOLLAR_LPAREN;
	v->a[12984] = anon_sym_BQUOTE;
	v->a[12985] = anon_sym_DOLLAR_BQUOTE;
	v->a[12986] = anon_sym_LT_LPAREN;
	v->a[12987] = anon_sym_GT_LPAREN;
	v->a[12988] = sym_word;
	v->a[12989] = 8;
	v->a[12990] = actions(3);
	v->a[12991] = 1;
	v->a[12992] = sym_comment;
	v->a[12993] = actions(1835);
	v->a[12994] = 1;
	v->a[12995] = anon_sym_DQUOTE;
	v->a[12996] = actions(3125);
	v->a[12997] = 1;
	v->a[12998] = sym_variable_name;
	v->a[12999] = state(1416);
	small_parse_table_650(v);
}

/* EOF small_parse_table_129.c */
