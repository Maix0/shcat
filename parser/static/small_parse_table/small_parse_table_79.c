/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_79.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_395(t_small_parse_table_array *v)
{
	v->a[7900] = actions(1721);
	v->a[7901] = 1;
	v->a[7902] = sym__brace_start;
	v->a[7903] = actions(1849);
	v->a[7904] = 1;
	v->a[7905] = sym_test_operator;
	v->a[7906] = state(2000);
	v->a[7907] = 1;
	v->a[7908] = aux_sym__literal_repeat1;
	v->a[7909] = state(2237);
	v->a[7910] = 1;
	v->a[7911] = sym_concatenation;
	v->a[7912] = actions(1530);
	v->a[7913] = 2;
	v->a[7914] = sym_file_descriptor;
	v->a[7915] = aux_sym_heredoc_redirect_token1;
	v->a[7916] = actions(1847);
	v->a[7917] = 2;
	v->a[7918] = sym_raw_string;
	v->a[7919] = sym_word;
	small_parse_table_396(v);
}

void	small_parse_table_396(t_small_parse_table_array *v)
{
	v->a[7920] = state(1912);
	v->a[7921] = 7;
	v->a[7922] = sym_arithmetic_expansion;
	v->a[7923] = sym_brace_expression;
	v->a[7924] = sym_string;
	v->a[7925] = sym_number;
	v->a[7926] = sym_simple_expansion;
	v->a[7927] = sym_expansion;
	v->a[7928] = sym_command_substitution;
	v->a[7929] = actions(1528);
	v->a[7930] = 22;
	v->a[7931] = anon_sym_esac;
	v->a[7932] = anon_sym_PIPE;
	v->a[7933] = anon_sym_SEMI_SEMI;
	v->a[7934] = anon_sym_SEMI_AMP;
	v->a[7935] = anon_sym_SEMI_SEMI_AMP;
	v->a[7936] = anon_sym_PIPE_AMP;
	v->a[7937] = anon_sym_AMP_AMP;
	v->a[7938] = anon_sym_PIPE_PIPE;
	v->a[7939] = anon_sym_LT;
	small_parse_table_397(v);
}

void	small_parse_table_397(t_small_parse_table_array *v)
{
	v->a[7940] = anon_sym_GT;
	v->a[7941] = anon_sym_GT_GT;
	v->a[7942] = anon_sym_AMP_GT;
	v->a[7943] = anon_sym_AMP_GT_GT;
	v->a[7944] = anon_sym_LT_AMP;
	v->a[7945] = anon_sym_GT_AMP;
	v->a[7946] = anon_sym_GT_PIPE;
	v->a[7947] = anon_sym_LT_AMP_DASH;
	v->a[7948] = anon_sym_GT_AMP_DASH;
	v->a[7949] = anon_sym_LT_LT;
	v->a[7950] = anon_sym_LT_LT_DASH;
	v->a[7951] = anon_sym_AMP;
	v->a[7952] = anon_sym_SEMI;
	v->a[7953] = 6;
	v->a[7954] = actions(3);
	v->a[7955] = 1;
	v->a[7956] = sym_comment;
	v->a[7957] = actions(1424);
	v->a[7958] = 1;
	v->a[7959] = sym_variable_name;
	small_parse_table_398(v);
}

void	small_parse_table_398(t_small_parse_table_array *v)
{
	v->a[7960] = actions(1422);
	v->a[7961] = 2;
	v->a[7962] = aux_sym__simple_variable_name_token1;
	v->a[7963] = aux_sym__multiline_variable_name_token1;
	v->a[7964] = actions(828);
	v->a[7965] = 4;
	v->a[7966] = sym_file_descriptor;
	v->a[7967] = sym_test_operator;
	v->a[7968] = sym__bare_dollar;
	v->a[7969] = sym__brace_start;
	v->a[7970] = actions(1420);
	v->a[7971] = 9;
	v->a[7972] = anon_sym_BANG;
	v->a[7973] = anon_sym_DASH;
	v->a[7974] = anon_sym_STAR;
	v->a[7975] = anon_sym_QMARK;
	v->a[7976] = anon_sym_DOLLAR;
	v->a[7977] = anon_sym_POUND;
	v->a[7978] = anon_sym_AT;
	v->a[7979] = anon_sym_0;
	small_parse_table_399(v);
}

void	small_parse_table_399(t_small_parse_table_array *v)
{
	v->a[7980] = anon_sym__;
	v->a[7981] = actions(826);
	v->a[7982] = 31;
	v->a[7983] = anon_sym_PIPE;
	v->a[7984] = anon_sym_SEMI_SEMI;
	v->a[7985] = anon_sym_PIPE_AMP;
	v->a[7986] = anon_sym_AMP_AMP;
	v->a[7987] = anon_sym_PIPE_PIPE;
	v->a[7988] = anon_sym_LT;
	v->a[7989] = anon_sym_GT;
	v->a[7990] = anon_sym_GT_GT;
	v->a[7991] = anon_sym_AMP_GT;
	v->a[7992] = anon_sym_AMP_GT_GT;
	v->a[7993] = anon_sym_LT_AMP;
	v->a[7994] = anon_sym_GT_AMP;
	v->a[7995] = anon_sym_GT_PIPE;
	v->a[7996] = anon_sym_LT_AMP_DASH;
	v->a[7997] = anon_sym_GT_AMP_DASH;
	v->a[7998] = anon_sym_LT_LT;
	v->a[7999] = anon_sym_LT_LT_DASH;
	small_parse_table_400(v);
}

/* EOF small_parse_table_79.c */
