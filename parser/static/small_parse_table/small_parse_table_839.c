/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_839.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4195(t_small_parse_table_array *v)
{
	v->a[83900] = actions(1153);
	v->a[83901] = 1;
	v->a[83902] = aux_sym_number_token1;
	v->a[83903] = actions(1155);
	v->a[83904] = 1;
	v->a[83905] = aux_sym_number_token2;
	v->a[83906] = actions(1157);
	v->a[83907] = 1;
	v->a[83908] = anon_sym_DOLLAR_LBRACE;
	v->a[83909] = actions(1159);
	v->a[83910] = 1;
	v->a[83911] = anon_sym_DOLLAR_LPAREN;
	v->a[83912] = actions(1163);
	v->a[83913] = 1;
	v->a[83914] = anon_sym_DOLLAR_BQUOTE;
	v->a[83915] = actions(1169);
	v->a[83916] = 1;
	v->a[83917] = sym__brace_start;
	v->a[83918] = actions(1171);
	v->a[83919] = 1;
	small_parse_table_4196(v);
}

void	small_parse_table_4196(t_small_parse_table_array *v)
{
	v->a[83920] = sym_word;
	v->a[83921] = actions(1173);
	v->a[83922] = 1;
	v->a[83923] = anon_sym_BANG;
	v->a[83924] = actions(1179);
	v->a[83925] = 1;
	v->a[83926] = anon_sym_TILDE;
	v->a[83927] = actions(1181);
	v->a[83928] = 1;
	v->a[83929] = sym__special_character;
	v->a[83930] = actions(1185);
	v->a[83931] = 1;
	v->a[83932] = sym_test_operator;
	v->a[83933] = actions(3060);
	v->a[83934] = 1;
	v->a[83935] = anon_sym_BQUOTE;
	v->a[83936] = state(2484);
	v->a[83937] = 1;
	v->a[83938] = aux_sym__literal_repeat1;
	v->a[83939] = state(3123);
	small_parse_table_4197(v);
}

void	small_parse_table_4197(t_small_parse_table_array *v)
{
	v->a[83940] = 1;
	v->a[83941] = sym__expression;
	v->a[83942] = actions(1129);
	v->a[83943] = 2;
	v->a[83944] = anon_sym_LPAREN_LPAREN;
	v->a[83945] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83946] = actions(1165);
	v->a[83947] = 2;
	v->a[83948] = anon_sym_LT_LPAREN;
	v->a[83949] = anon_sym_GT_LPAREN;
	v->a[83950] = actions(1175);
	v->a[83951] = 2;
	v->a[83952] = anon_sym_PLUS_PLUS2;
	v->a[83953] = anon_sym_DASH_DASH2;
	v->a[83954] = actions(1177);
	v->a[83955] = 2;
	v->a[83956] = anon_sym_DASH2;
	v->a[83957] = anon_sym_PLUS2;
	v->a[83958] = actions(1183);
	v->a[83959] = 2;
	small_parse_table_4198(v);
}

void	small_parse_table_4198(t_small_parse_table_array *v)
{
	v->a[83960] = sym_raw_string;
	v->a[83961] = sym_ansi_c_string;
	v->a[83962] = state(2594);
	v->a[83963] = 6;
	v->a[83964] = sym_binary_expression;
	v->a[83965] = sym_ternary_expression;
	v->a[83966] = sym_unary_expression;
	v->a[83967] = sym_postfix_expression;
	v->a[83968] = sym_parenthesized_expression;
	v->a[83969] = sym_concatenation;
	v->a[83970] = state(2456);
	v->a[83971] = 9;
	v->a[83972] = sym_arithmetic_expansion;
	v->a[83973] = sym_brace_expression;
	v->a[83974] = sym_string;
	v->a[83975] = sym_translated_string;
	v->a[83976] = sym_number;
	v->a[83977] = sym_simple_expansion;
	v->a[83978] = sym_expansion;
	v->a[83979] = sym_command_substitution;
	small_parse_table_4199(v);
}

void	small_parse_table_4199(t_small_parse_table_array *v)
{
	v->a[83980] = sym_process_substitution;
	v->a[83981] = 6;
	v->a[83982] = actions(3);
	v->a[83983] = 1;
	v->a[83984] = sym_comment;
	v->a[83985] = actions(5080);
	v->a[83986] = 1;
	v->a[83987] = aux_sym_concatenation_token1;
	v->a[83988] = actions(5082);
	v->a[83989] = 1;
	v->a[83990] = sym__concat;
	v->a[83991] = state(1821);
	v->a[83992] = 1;
	v->a[83993] = aux_sym_concatenation_repeat1;
	v->a[83994] = actions(4469);
	v->a[83995] = 5;
	v->a[83996] = sym_file_descriptor;
	v->a[83997] = sym_test_operator;
	v->a[83998] = sym__bare_dollar;
	v->a[83999] = sym__brace_start;
	small_parse_table_4200(v);
}

/* EOF small_parse_table_839.c */
