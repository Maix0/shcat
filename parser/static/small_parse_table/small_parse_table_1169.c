/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1169.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5845(t_small_parse_table_array *v)
{
	v->a[116900] = 1;
	v->a[116901] = sym__special_character;
	v->a[116902] = actions(1081);
	v->a[116903] = 1;
	v->a[116904] = anon_sym_DQUOTE;
	v->a[116905] = actions(1085);
	v->a[116906] = 1;
	v->a[116907] = anon_sym_DOLLAR_LBRACE;
	v->a[116908] = actions(1087);
	v->a[116909] = 1;
	v->a[116910] = anon_sym_DOLLAR_BQUOTE;
	v->a[116911] = actions(3598);
	v->a[116912] = 1;
	v->a[116913] = anon_sym_BQUOTE;
	v->a[116914] = state(2690);
	v->a[116915] = 1;
	v->a[116916] = aux_sym__literal_repeat1;
	v->a[116917] = state(3079);
	v->a[116918] = 1;
	v->a[116919] = sym__expression;
	small_parse_table_5846(v);
}

void	small_parse_table_5846(t_small_parse_table_array *v)
{
	v->a[116920] = actions(103);
	v->a[116921] = 2;
	v->a[116922] = anon_sym_PLUS_PLUS2;
	v->a[116923] = anon_sym_DASH_DASH2;
	v->a[116924] = actions(105);
	v->a[116925] = 2;
	v->a[116926] = anon_sym_DASH2;
	v->a[116927] = anon_sym_PLUS2;
	v->a[116928] = actions(1073);
	v->a[116929] = 2;
	v->a[116930] = anon_sym_LPAREN_LPAREN;
	v->a[116931] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116932] = actions(1083);
	v->a[116933] = 2;
	v->a[116934] = sym_raw_string;
	v->a[116935] = sym_ansi_c_string;
	v->a[116936] = actions(1089);
	v->a[116937] = 2;
	v->a[116938] = anon_sym_LT_LPAREN;
	v->a[116939] = anon_sym_GT_LPAREN;
	small_parse_table_5847(v);
}

void	small_parse_table_5847(t_small_parse_table_array *v)
{
	v->a[116940] = state(3053);
	v->a[116941] = 6;
	v->a[116942] = sym_binary_expression;
	v->a[116943] = sym_ternary_expression;
	v->a[116944] = sym_unary_expression;
	v->a[116945] = sym_postfix_expression;
	v->a[116946] = sym_parenthesized_expression;
	v->a[116947] = sym_concatenation;
	v->a[116948] = state(2500);
	v->a[116949] = 9;
	v->a[116950] = sym_arithmetic_expansion;
	v->a[116951] = sym_brace_expression;
	v->a[116952] = sym_string;
	v->a[116953] = sym_translated_string;
	v->a[116954] = sym_number;
	v->a[116955] = sym_simple_expansion;
	v->a[116956] = sym_expansion;
	v->a[116957] = sym_command_substitution;
	v->a[116958] = sym_process_substitution;
	v->a[116959] = 26;
	small_parse_table_5848(v);
}

void	small_parse_table_5848(t_small_parse_table_array *v)
{
	v->a[116960] = actions(71);
	v->a[116961] = 1;
	v->a[116962] = sym_comment;
	v->a[116963] = actions(107);
	v->a[116964] = 1;
	v->a[116965] = anon_sym_TILDE;
	v->a[116966] = actions(237);
	v->a[116967] = 1;
	v->a[116968] = sym_word;
	v->a[116969] = actions(248);
	v->a[116970] = 1;
	v->a[116971] = anon_sym_LPAREN;
	v->a[116972] = actions(250);
	v->a[116973] = 1;
	v->a[116974] = anon_sym_BANG;
	v->a[116975] = actions(258);
	v->a[116976] = 1;
	v->a[116977] = anon_sym_DOLLAR;
	v->a[116978] = actions(264);
	v->a[116979] = 1;
	small_parse_table_5849(v);
}

void	small_parse_table_5849(t_small_parse_table_array *v)
{
	v->a[116980] = aux_sym_number_token1;
	v->a[116981] = actions(266);
	v->a[116982] = 1;
	v->a[116983] = aux_sym_number_token2;
	v->a[116984] = actions(270);
	v->a[116985] = 1;
	v->a[116986] = anon_sym_DOLLAR_LPAREN;
	v->a[116987] = actions(282);
	v->a[116988] = 1;
	v->a[116989] = sym_test_operator;
	v->a[116990] = actions(284);
	v->a[116991] = 1;
	v->a[116992] = sym__brace_start;
	v->a[116993] = actions(1075);
	v->a[116994] = 1;
	v->a[116995] = anon_sym_DOLLAR_LBRACK;
	v->a[116996] = actions(1079);
	v->a[116997] = 1;
	v->a[116998] = sym__special_character;
	v->a[116999] = actions(1081);
	small_parse_table_5850(v);
}

/* EOF small_parse_table_1169.c */
