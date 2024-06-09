/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_69.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_345(t_small_parse_table_array *v)
{
	v->a[6900] = anon_sym_for;
	v->a[6901] = actions(13);
	v->a[6902] = 1;
	v->a[6903] = anon_sym_if;
	v->a[6904] = actions(15);
	v->a[6905] = 1;
	v->a[6906] = anon_sym_case;
	v->a[6907] = actions(17);
	v->a[6908] = 1;
	v->a[6909] = anon_sym_LPAREN;
	v->a[6910] = actions(19);
	v->a[6911] = 1;
	v->a[6912] = anon_sym_LBRACE;
	v->a[6913] = actions(63);
	v->a[6914] = 1;
	v->a[6915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6916] = actions(65);
	v->a[6917] = 1;
	v->a[6918] = anon_sym_DOLLAR;
	v->a[6919] = actions(67);
	small_parse_table_346(v);
}

void	small_parse_table_346(t_small_parse_table_array *v)
{
	v->a[6920] = 1;
	v->a[6921] = anon_sym_DQUOTE;
	v->a[6922] = actions(69);
	v->a[6923] = 1;
	v->a[6924] = sym_raw_string;
	v->a[6925] = actions(71);
	v->a[6926] = 1;
	v->a[6927] = aux_sym_number_token1;
	v->a[6928] = actions(73);
	v->a[6929] = 1;
	v->a[6930] = aux_sym_number_token2;
	v->a[6931] = actions(75);
	v->a[6932] = 1;
	v->a[6933] = anon_sym_DOLLAR_LBRACE;
	v->a[6934] = actions(77);
	v->a[6935] = 1;
	v->a[6936] = anon_sym_DOLLAR_LPAREN;
	v->a[6937] = actions(79);
	v->a[6938] = 1;
	v->a[6939] = anon_sym_BQUOTE;
	small_parse_table_347(v);
}

void	small_parse_table_347(t_small_parse_table_array *v)
{
	v->a[6940] = actions(81);
	v->a[6941] = 1;
	v->a[6942] = sym_file_descriptor;
	v->a[6943] = actions(83);
	v->a[6944] = 1;
	v->a[6945] = sym_variable_name;
	v->a[6946] = actions(238);
	v->a[6947] = 1;
	v->a[6948] = sym_word;
	v->a[6949] = actions(240);
	v->a[6950] = 1;
	v->a[6951] = anon_sym_BANG;
	v->a[6952] = state(132);
	v->a[6953] = 1;
	v->a[6954] = aux_sym__statements_repeat1;
	v->a[6955] = state(185);
	v->a[6956] = 1;
	v->a[6957] = sym_command_name;
	v->a[6958] = state(297);
	v->a[6959] = 1;
	small_parse_table_348(v);
}

void	small_parse_table_348(t_small_parse_table_array *v)
{
	v->a[6960] = sym_variable_assignment;
	v->a[6961] = state(582);
	v->a[6962] = 1;
	v->a[6963] = sym_concatenation;
	v->a[6964] = state(614);
	v->a[6965] = 1;
	v->a[6966] = aux_sym_command_repeat1;
	v->a[6967] = state(769);
	v->a[6968] = 1;
	v->a[6969] = sym_file_redirect;
	v->a[6970] = state(1133);
	v->a[6971] = 1;
	v->a[6972] = aux_sym_redirected_statement_repeat2;
	v->a[6973] = state(1142);
	v->a[6974] = 1;
	v->a[6975] = sym_pipeline;
	v->a[6976] = state(2041);
	v->a[6977] = 1;
	v->a[6978] = sym__statement_not_pipeline;
	v->a[6979] = state(2222);
	small_parse_table_349(v);
}

void	small_parse_table_349(t_small_parse_table_array *v)
{
	v->a[6980] = 1;
	v->a[6981] = sym__statements;
	v->a[6982] = actions(11);
	v->a[6983] = 2;
	v->a[6984] = anon_sym_while;
	v->a[6985] = anon_sym_until;
	v->a[6986] = actions(61);
	v->a[6987] = 2;
	v->a[6988] = anon_sym_LT_AMP_DASH;
	v->a[6989] = anon_sym_GT_AMP_DASH;
	v->a[6990] = state(397);
	v->a[6991] = 6;
	v->a[6992] = sym_arithmetic_expansion;
	v->a[6993] = sym_string;
	v->a[6994] = sym_number;
	v->a[6995] = sym_simple_expansion;
	v->a[6996] = sym_expansion;
	v->a[6997] = sym_command_substitution;
	v->a[6998] = actions(59);
	v->a[6999] = 8;
	small_parse_table_350(v);
}

/* EOF small_parse_table_69.c */
