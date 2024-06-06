/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_269.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1345(t_small_parse_table_array *v)
{
	v->a[26900] = anon_sym_GT_AMP_DASH;
	v->a[26901] = anon_sym_LT_LT;
	v->a[26902] = anon_sym_LT_LT_DASH;
	v->a[26903] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26904] = anon_sym_AMP;
	v->a[26905] = anon_sym_DOLLAR;
	v->a[26906] = sym__special_character;
	v->a[26907] = anon_sym_DQUOTE;
	v->a[26908] = sym_raw_string;
	v->a[26909] = aux_sym_number_token1;
	v->a[26910] = aux_sym_number_token2;
	v->a[26911] = anon_sym_DOLLAR_LBRACE;
	v->a[26912] = anon_sym_DOLLAR_LPAREN;
	v->a[26913] = anon_sym_BQUOTE;
	v->a[26914] = anon_sym_DOLLAR_BQUOTE;
	v->a[26915] = sym_word;
	v->a[26916] = anon_sym_SEMI;
	v->a[26917] = 19;
	v->a[26918] = actions(57);
	v->a[26919] = 1;
	small_parse_table_1346(v);
}

void	small_parse_table_1346(t_small_parse_table_array *v)
{
	v->a[26920] = sym_comment;
	v->a[26921] = actions(3262);
	v->a[26922] = 1;
	v->a[26923] = sym_word;
	v->a[26924] = actions(3264);
	v->a[26925] = 1;
	v->a[26926] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26927] = actions(3266);
	v->a[26928] = 1;
	v->a[26929] = anon_sym_DOLLAR;
	v->a[26930] = actions(3268);
	v->a[26931] = 1;
	v->a[26932] = sym__special_character;
	v->a[26933] = actions(3270);
	v->a[26934] = 1;
	v->a[26935] = anon_sym_DQUOTE;
	v->a[26936] = actions(3274);
	v->a[26937] = 1;
	v->a[26938] = aux_sym_number_token1;
	v->a[26939] = actions(3276);
	small_parse_table_1347(v);
}

void	small_parse_table_1347(t_small_parse_table_array *v)
{
	v->a[26940] = 1;
	v->a[26941] = aux_sym_number_token2;
	v->a[26942] = actions(3278);
	v->a[26943] = 1;
	v->a[26944] = anon_sym_DOLLAR_LBRACE;
	v->a[26945] = actions(3280);
	v->a[26946] = 1;
	v->a[26947] = anon_sym_DOLLAR_LPAREN;
	v->a[26948] = actions(3282);
	v->a[26949] = 1;
	v->a[26950] = anon_sym_BQUOTE;
	v->a[26951] = actions(3284);
	v->a[26952] = 1;
	v->a[26953] = anon_sym_DOLLAR_BQUOTE;
	v->a[26954] = actions(3286);
	v->a[26955] = 1;
	v->a[26956] = sym__brace_start;
	v->a[26957] = state(1679);
	v->a[26958] = 1;
	v->a[26959] = aux_sym__literal_repeat1;
	small_parse_table_1348(v);
}

void	small_parse_table_1348(t_small_parse_table_array *v)
{
	v->a[26960] = actions(3272);
	v->a[26961] = 2;
	v->a[26962] = sym_test_operator;
	v->a[26963] = sym_raw_string;
	v->a[26964] = state(630);
	v->a[26965] = 2;
	v->a[26966] = sym_concatenation;
	v->a[26967] = aux_sym_for_statement_repeat1;
	v->a[26968] = actions(1388);
	v->a[26969] = 7;
	v->a[26970] = anon_sym_PIPE;
	v->a[26971] = anon_sym_LT;
	v->a[26972] = anon_sym_GT;
	v->a[26973] = anon_sym_AMP_GT;
	v->a[26974] = anon_sym_LT_AMP;
	v->a[26975] = anon_sym_GT_AMP;
	v->a[26976] = anon_sym_LT_LT;
	v->a[26977] = state(1566);
	v->a[26978] = 7;
	v->a[26979] = sym_arithmetic_expansion;
	small_parse_table_1349(v);
}

void	small_parse_table_1349(t_small_parse_table_array *v)
{
	v->a[26980] = sym_brace_expression;
	v->a[26981] = sym_string;
	v->a[26982] = sym_number;
	v->a[26983] = sym_simple_expansion;
	v->a[26984] = sym_expansion;
	v->a[26985] = sym_command_substitution;
	v->a[26986] = actions(1390);
	v->a[26987] = 10;
	v->a[26988] = sym_file_descriptor;
	v->a[26989] = anon_sym_PIPE_AMP;
	v->a[26990] = anon_sym_AMP_AMP;
	v->a[26991] = anon_sym_PIPE_PIPE;
	v->a[26992] = anon_sym_GT_GT;
	v->a[26993] = anon_sym_AMP_GT_GT;
	v->a[26994] = anon_sym_GT_PIPE;
	v->a[26995] = anon_sym_LT_AMP_DASH;
	v->a[26996] = anon_sym_GT_AMP_DASH;
	v->a[26997] = anon_sym_LT_LT_DASH;
	v->a[26998] = 6;
	v->a[26999] = actions(3);
	small_parse_table_1350(v);
}

/* EOF small_parse_table_269.c */
