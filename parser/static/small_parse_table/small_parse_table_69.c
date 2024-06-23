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
	v->a[6900] = 1;
	v->a[6901] = sym__statement_not_pipeline;
	v->a[6902] = state(2334);
	v->a[6903] = 1;
	v->a[6904] = sym__statements;
	v->a[6905] = actions(11);
	v->a[6906] = 2;
	v->a[6907] = anon_sym_while;
	v->a[6908] = anon_sym_until;
	v->a[6909] = actions(226);
	v->a[6910] = 2;
	v->a[6911] = anon_sym_LT_AMP_DASH;
	v->a[6912] = anon_sym_GT_AMP_DASH;
	v->a[6913] = actions(228);
	v->a[6914] = 2;
	v->a[6915] = sym_raw_string;
	v->a[6916] = sym_number;
	v->a[6917] = state(294);
	v->a[6918] = 5;
	v->a[6919] = sym_arithmetic_expansion;
	small_parse_table_346(v);
}

void	small_parse_table_346(t_small_parse_table_array *v)
{
	v->a[6920] = sym_string;
	v->a[6921] = sym_simple_expansion;
	v->a[6922] = sym_expansion;
	v->a[6923] = sym_command_substitution;
	v->a[6924] = actions(224);
	v->a[6925] = 8;
	v->a[6926] = anon_sym_LT;
	v->a[6927] = anon_sym_GT;
	v->a[6928] = anon_sym_GT_GT;
	v->a[6929] = anon_sym_AMP_GT;
	v->a[6930] = anon_sym_AMP_GT_GT;
	v->a[6931] = anon_sym_LT_AMP;
	v->a[6932] = anon_sym_GT_AMP;
	v->a[6933] = anon_sym_GT_PIPE;
	v->a[6934] = state(1188);
	v->a[6935] = 12;
	v->a[6936] = sym_redirected_statement;
	v->a[6937] = sym_for_statement;
	v->a[6938] = sym_while_statement;
	v->a[6939] = sym_if_statement;
	small_parse_table_347(v);
}

void	small_parse_table_347(t_small_parse_table_array *v)
{
	v->a[6940] = sym_case_statement;
	v->a[6941] = sym_function_definition;
	v->a[6942] = sym_compound_statement;
	v->a[6943] = sym_subshell;
	v->a[6944] = sym_list;
	v->a[6945] = sym_negated_command;
	v->a[6946] = sym_command;
	v->a[6947] = sym__variable_assignments;
	v->a[6948] = 32;
	v->a[6949] = actions(3);
	v->a[6950] = 1;
	v->a[6951] = sym_comment;
	v->a[6952] = actions(9);
	v->a[6953] = 1;
	v->a[6954] = anon_sym_for;
	v->a[6955] = actions(13);
	v->a[6956] = 1;
	v->a[6957] = anon_sym_if;
	v->a[6958] = actions(15);
	v->a[6959] = 1;
	small_parse_table_348(v);
}

void	small_parse_table_348(t_small_parse_table_array *v)
{
	v->a[6960] = anon_sym_case;
	v->a[6961] = actions(17);
	v->a[6962] = 1;
	v->a[6963] = anon_sym_LPAREN;
	v->a[6964] = actions(19);
	v->a[6965] = 1;
	v->a[6966] = anon_sym_LBRACE;
	v->a[6967] = actions(59);
	v->a[6968] = 1;
	v->a[6969] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6970] = actions(61);
	v->a[6971] = 1;
	v->a[6972] = anon_sym_DOLLAR;
	v->a[6973] = actions(63);
	v->a[6974] = 1;
	v->a[6975] = anon_sym_DQUOTE;
	v->a[6976] = actions(67);
	v->a[6977] = 1;
	v->a[6978] = anon_sym_DOLLAR_LBRACE;
	v->a[6979] = actions(69);
	small_parse_table_349(v);
}

void	small_parse_table_349(t_small_parse_table_array *v)
{
	v->a[6980] = 1;
	v->a[6981] = anon_sym_DOLLAR_LPAREN;
	v->a[6982] = actions(71);
	v->a[6983] = 1;
	v->a[6984] = anon_sym_BQUOTE;
	v->a[6985] = actions(73);
	v->a[6986] = 1;
	v->a[6987] = sym_file_descriptor;
	v->a[6988] = actions(75);
	v->a[6989] = 1;
	v->a[6990] = sym_variable_name;
	v->a[6991] = actions(236);
	v->a[6992] = 1;
	v->a[6993] = sym_word;
	v->a[6994] = actions(238);
	v->a[6995] = 1;
	v->a[6996] = anon_sym_BANG;
	v->a[6997] = state(140);
	v->a[6998] = 1;
	v->a[6999] = aux_sym__statements_repeat1;
	small_parse_table_350(v);
}

/* EOF small_parse_table_69.c */
