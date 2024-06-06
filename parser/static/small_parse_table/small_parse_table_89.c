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
	v->a[8900] = anon_sym_LT;
	v->a[8901] = anon_sym_GT;
	v->a[8902] = anon_sym_GT_GT;
	v->a[8903] = anon_sym_AMP_GT;
	v->a[8904] = anon_sym_AMP_GT_GT;
	v->a[8905] = anon_sym_LT_AMP;
	v->a[8906] = anon_sym_GT_AMP;
	v->a[8907] = anon_sym_GT_PIPE;
	v->a[8908] = anon_sym_LT_AMP_DASH;
	v->a[8909] = anon_sym_GT_AMP_DASH;
	v->a[8910] = anon_sym_LT_LT;
	v->a[8911] = anon_sym_LT_LT_DASH;
	v->a[8912] = anon_sym_AMP;
	v->a[8913] = anon_sym_SEMI;
	v->a[8914] = 5;
	v->a[8915] = actions(57);
	v->a[8916] = 1;
	v->a[8917] = sym_comment;
	v->a[8918] = actions(1995);
	v->a[8919] = 2;
	small_parse_table_446(v);
}

void	small_parse_table_446(t_small_parse_table_array *v)
{
	v->a[8920] = anon_sym_esac;
	v->a[8921] = anon_sym_SEMI_SEMI;
	v->a[8922] = actions(1997);
	v->a[8923] = 2;
	v->a[8924] = anon_sym_SEMI_AMP;
	v->a[8925] = anon_sym_SEMI_SEMI_AMP;
	v->a[8926] = actions(1691);
	v->a[8927] = 17;
	v->a[8928] = sym_file_descriptor;
	v->a[8929] = sym_variable_name;
	v->a[8930] = sym_test_operator;
	v->a[8931] = sym__brace_start;
	v->a[8932] = anon_sym_LPAREN;
	v->a[8933] = anon_sym_LBRACE;
	v->a[8934] = anon_sym_GT_GT;
	v->a[8935] = anon_sym_AMP_GT_GT;
	v->a[8936] = anon_sym_GT_PIPE;
	v->a[8937] = anon_sym_LT_AMP_DASH;
	v->a[8938] = anon_sym_GT_AMP_DASH;
	v->a[8939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_447(v);
}

void	small_parse_table_447(t_small_parse_table_array *v)
{
	v->a[8940] = anon_sym_DQUOTE;
	v->a[8941] = sym_raw_string;
	v->a[8942] = anon_sym_DOLLAR_LBRACE;
	v->a[8943] = anon_sym_BQUOTE;
	v->a[8944] = anon_sym_DOLLAR_BQUOTE;
	v->a[8945] = actions(1689);
	v->a[8946] = 26;
	v->a[8947] = anon_sym_for;
	v->a[8948] = anon_sym_select;
	v->a[8949] = anon_sym_while;
	v->a[8950] = anon_sym_until;
	v->a[8951] = anon_sym_if;
	v->a[8952] = anon_sym_case;
	v->a[8953] = anon_sym_function;
	v->a[8954] = anon_sym_BANG;
	v->a[8955] = anon_sym_declare;
	v->a[8956] = anon_sym_typeset;
	v->a[8957] = anon_sym_export;
	v->a[8958] = anon_sym_readonly;
	v->a[8959] = anon_sym_local;
	small_parse_table_448(v);
}

void	small_parse_table_448(t_small_parse_table_array *v)
{
	v->a[8960] = anon_sym_unset;
	v->a[8961] = anon_sym_unsetenv;
	v->a[8962] = anon_sym_LT;
	v->a[8963] = anon_sym_GT;
	v->a[8964] = anon_sym_AMP_GT;
	v->a[8965] = anon_sym_LT_AMP;
	v->a[8966] = anon_sym_GT_AMP;
	v->a[8967] = anon_sym_DOLLAR;
	v->a[8968] = sym__special_character;
	v->a[8969] = aux_sym_number_token1;
	v->a[8970] = aux_sym_number_token2;
	v->a[8971] = anon_sym_DOLLAR_LPAREN;
	v->a[8972] = sym_word;
	v->a[8973] = 19;
	v->a[8974] = actions(3);
	v->a[8975] = 1;
	v->a[8976] = sym_comment;
	v->a[8977] = actions(2002);
	v->a[8978] = 1;
	v->a[8979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_449(v);
}

void	small_parse_table_449(t_small_parse_table_array *v)
{
	v->a[8980] = actions(2005);
	v->a[8981] = 1;
	v->a[8982] = anon_sym_DOLLAR;
	v->a[8983] = actions(2008);
	v->a[8984] = 1;
	v->a[8985] = sym__special_character;
	v->a[8986] = actions(2011);
	v->a[8987] = 1;
	v->a[8988] = anon_sym_DQUOTE;
	v->a[8989] = actions(2014);
	v->a[8990] = 1;
	v->a[8991] = aux_sym_number_token1;
	v->a[8992] = actions(2017);
	v->a[8993] = 1;
	v->a[8994] = aux_sym_number_token2;
	v->a[8995] = actions(2020);
	v->a[8996] = 1;
	v->a[8997] = anon_sym_DOLLAR_LBRACE;
	v->a[8998] = actions(2023);
	v->a[8999] = 1;
	small_parse_table_450(v);
}

/* EOF small_parse_table_89.c */
