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
	v->a[6901] = aux_sym__terminated_statement;
	v->a[6902] = state(271);
	v->a[6903] = 1;
	v->a[6904] = sym_command_name;
	v->a[6905] = state(298);
	v->a[6906] = 1;
	v->a[6907] = sym_variable_assignment;
	v->a[6908] = state(482);
	v->a[6909] = 1;
	v->a[6910] = aux_sym_command_repeat1;
	v->a[6911] = state(600);
	v->a[6912] = 1;
	v->a[6913] = sym_file_redirect;
	v->a[6914] = state(602);
	v->a[6915] = 1;
	v->a[6916] = sym_concatenation;
	v->a[6917] = state(1012);
	v->a[6918] = 1;
	v->a[6919] = sym_pipeline;
	small_parse_table_346(v);
}

void	small_parse_table_346(t_small_parse_table_array *v)
{
	v->a[6920] = state(1068);
	v->a[6921] = 1;
	v->a[6922] = aux_sym_redirected_statement_repeat2;
	v->a[6923] = state(1609);
	v->a[6924] = 1;
	v->a[6925] = sym__statement_not_pipeline;
	v->a[6926] = actions(11);
	v->a[6927] = 2;
	v->a[6928] = anon_sym_while;
	v->a[6929] = anon_sym_until;
	v->a[6930] = actions(59);
	v->a[6931] = 2;
	v->a[6932] = sym_raw_string;
	v->a[6933] = sym_number;
	v->a[6934] = state(425);
	v->a[6935] = 5;
	v->a[6936] = sym_arithmetic_expansion;
	v->a[6937] = sym_string;
	v->a[6938] = sym_simple_expansion;
	v->a[6939] = sym_expansion;
	small_parse_table_347(v);
}

void	small_parse_table_347(t_small_parse_table_array *v)
{
	v->a[6940] = sym_command_substitution;
	v->a[6941] = actions(51);
	v->a[6942] = 7;
	v->a[6943] = anon_sym_LT;
	v->a[6944] = anon_sym_GT;
	v->a[6945] = anon_sym_GT_GT;
	v->a[6946] = anon_sym_LT_AMP;
	v->a[6947] = anon_sym_GT_AMP;
	v->a[6948] = anon_sym_GT_PIPE;
	v->a[6949] = anon_sym_LT_GT;
	v->a[6950] = state(933);
	v->a[6951] = 12;
	v->a[6952] = sym_redirected_statement;
	v->a[6953] = sym_for_statement;
	v->a[6954] = sym_while_statement;
	v->a[6955] = sym_if_statement;
	v->a[6956] = sym_case_statement;
	v->a[6957] = sym_function_definition;
	v->a[6958] = sym_compound_statement;
	v->a[6959] = sym_subshell;
	small_parse_table_348(v);
}

void	small_parse_table_348(t_small_parse_table_array *v)
{
	v->a[6960] = sym_list;
	v->a[6961] = sym_negated_command;
	v->a[6962] = sym_command;
	v->a[6963] = sym__variable_assignments;
	v->a[6964] = 30;
	v->a[6965] = actions(3);
	v->a[6966] = 1;
	v->a[6967] = sym_comment;
	v->a[6968] = actions(9);
	v->a[6969] = 1;
	v->a[6970] = anon_sym_for;
	v->a[6971] = actions(13);
	v->a[6972] = 1;
	v->a[6973] = anon_sym_if;
	v->a[6974] = actions(15);
	v->a[6975] = 1;
	v->a[6976] = anon_sym_case;
	v->a[6977] = actions(17);
	v->a[6978] = 1;
	v->a[6979] = anon_sym_LPAREN;
	small_parse_table_349(v);
}

void	small_parse_table_349(t_small_parse_table_array *v)
{
	v->a[6980] = actions(19);
	v->a[6981] = 1;
	v->a[6982] = anon_sym_LBRACE;
	v->a[6983] = actions(53);
	v->a[6984] = 1;
	v->a[6985] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6986] = actions(55);
	v->a[6987] = 1;
	v->a[6988] = anon_sym_DOLLAR;
	v->a[6989] = actions(57);
	v->a[6990] = 1;
	v->a[6991] = anon_sym_DQUOTE;
	v->a[6992] = actions(61);
	v->a[6993] = 1;
	v->a[6994] = anon_sym_DOLLAR_LBRACE;
	v->a[6995] = actions(63);
	v->a[6996] = 1;
	v->a[6997] = anon_sym_DOLLAR_LPAREN;
	v->a[6998] = actions(65);
	v->a[6999] = 1;
	small_parse_table_350(v);
}

/* EOF small_parse_table_69.c */
