/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_89.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_445(t_small_parse_table_array *v)
{
	v->a[8900] = 32;
	v->a[8901] = actions(3);
	v->a[8902] = 1;
	v->a[8903] = sym_comment;
	v->a[8904] = actions(9);
	v->a[8905] = 1;
	v->a[8906] = anon_sym_for;
	v->a[8907] = actions(13);
	v->a[8908] = 1;
	v->a[8909] = anon_sym_if;
	v->a[8910] = actions(15);
	v->a[8911] = 1;
	v->a[8912] = anon_sym_case;
	v->a[8913] = actions(17);
	v->a[8914] = 1;
	v->a[8915] = anon_sym_LPAREN;
	v->a[8916] = actions(19);
	v->a[8917] = 1;
	v->a[8918] = anon_sym_LBRACE;
	v->a[8919] = actions(59);
	small_parse_table_446(v);
}

void	small_parse_table_446(t_small_parse_table_array *v)
{
	v->a[8920] = 1;
	v->a[8921] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8922] = actions(61);
	v->a[8923] = 1;
	v->a[8924] = anon_sym_DOLLAR;
	v->a[8925] = actions(63);
	v->a[8926] = 1;
	v->a[8927] = anon_sym_DQUOTE;
	v->a[8928] = actions(67);
	v->a[8929] = 1;
	v->a[8930] = anon_sym_DOLLAR_LBRACE;
	v->a[8931] = actions(69);
	v->a[8932] = 1;
	v->a[8933] = anon_sym_DOLLAR_LPAREN;
	v->a[8934] = actions(71);
	v->a[8935] = 1;
	v->a[8936] = anon_sym_BQUOTE;
	v->a[8937] = actions(73);
	v->a[8938] = 1;
	v->a[8939] = sym_file_descriptor;
	small_parse_table_447(v);
}

void	small_parse_table_447(t_small_parse_table_array *v)
{
	v->a[8940] = actions(75);
	v->a[8941] = 1;
	v->a[8942] = sym_variable_name;
	v->a[8943] = actions(236);
	v->a[8944] = 1;
	v->a[8945] = sym_word;
	v->a[8946] = actions(238);
	v->a[8947] = 1;
	v->a[8948] = anon_sym_BANG;
	v->a[8949] = state(140);
	v->a[8950] = 1;
	v->a[8951] = aux_sym__statements_repeat1;
	v->a[8952] = state(189);
	v->a[8953] = 1;
	v->a[8954] = sym_command_name;
	v->a[8955] = state(286);
	v->a[8956] = 1;
	v->a[8957] = sym_variable_assignment;
	v->a[8958] = state(647);
	v->a[8959] = 1;
	small_parse_table_448(v);
}

void	small_parse_table_448(t_small_parse_table_array *v)
{
	v->a[8960] = sym_concatenation;
	v->a[8961] = state(746);
	v->a[8962] = 1;
	v->a[8963] = aux_sym_command_repeat1;
	v->a[8964] = state(905);
	v->a[8965] = 1;
	v->a[8966] = sym_file_redirect;
	v->a[8967] = state(1422);
	v->a[8968] = 1;
	v->a[8969] = sym_pipeline;
	v->a[8970] = state(1429);
	v->a[8971] = 1;
	v->a[8972] = aux_sym_redirected_statement_repeat2;
	v->a[8973] = state(2271);
	v->a[8974] = 1;
	v->a[8975] = sym__statement_not_pipeline;
	v->a[8976] = state(2373);
	v->a[8977] = 1;
	v->a[8978] = sym__statements;
	v->a[8979] = actions(11);
	small_parse_table_449(v);
}

void	small_parse_table_449(t_small_parse_table_array *v)
{
	v->a[8980] = 2;
	v->a[8981] = anon_sym_while;
	v->a[8982] = anon_sym_until;
	v->a[8983] = actions(57);
	v->a[8984] = 2;
	v->a[8985] = anon_sym_LT_AMP_DASH;
	v->a[8986] = anon_sym_GT_AMP_DASH;
	v->a[8987] = actions(65);
	v->a[8988] = 2;
	v->a[8989] = sym_raw_string;
	v->a[8990] = sym_number;
	v->a[8991] = state(394);
	v->a[8992] = 5;
	v->a[8993] = sym_arithmetic_expansion;
	v->a[8994] = sym_string;
	v->a[8995] = sym_simple_expansion;
	v->a[8996] = sym_expansion;
	v->a[8997] = sym_command_substitution;
	v->a[8998] = actions(55);
	v->a[8999] = 8;
	small_parse_table_450(v);
}

/* EOF small_parse_table_89.c */
