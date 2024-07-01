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
	v->a[6901] = sym_file_redirect;
	v->a[6902] = state(710);
	v->a[6903] = 1;
	v->a[6904] = aux_sym_command_repeat1;
	v->a[6905] = state(1095);
	v->a[6906] = 1;
	v->a[6907] = sym_pipeline;
	v->a[6908] = state(1282);
	v->a[6909] = 1;
	v->a[6910] = aux_sym_redirected_statement_repeat2;
	v->a[6911] = state(2127);
	v->a[6912] = 1;
	v->a[6913] = sym__statement_not_pipeline;
	v->a[6914] = state(2131);
	v->a[6915] = 1;
	v->a[6916] = sym__statements;
	v->a[6917] = actions(11);
	v->a[6918] = 2;
	v->a[6919] = anon_sym_while;
	small_parse_table_346(v);
}

void	small_parse_table_346(t_small_parse_table_array *v)
{
	v->a[6920] = anon_sym_until;
	v->a[6921] = actions(226);
	v->a[6922] = 2;
	v->a[6923] = anon_sym_LT_AMP_DASH;
	v->a[6924] = anon_sym_GT_AMP_DASH;
	v->a[6925] = actions(228);
	v->a[6926] = 2;
	v->a[6927] = sym_raw_string;
	v->a[6928] = sym_number;
	v->a[6929] = state(382);
	v->a[6930] = 5;
	v->a[6931] = sym_arithmetic_expansion;
	v->a[6932] = sym_string;
	v->a[6933] = sym_simple_expansion;
	v->a[6934] = sym_expansion;
	v->a[6935] = sym_command_substitution;
	v->a[6936] = actions(224);
	v->a[6937] = 6;
	v->a[6938] = anon_sym_LT;
	v->a[6939] = anon_sym_GT;
	small_parse_table_347(v);
}

void	small_parse_table_347(t_small_parse_table_array *v)
{
	v->a[6940] = anon_sym_GT_GT;
	v->a[6941] = anon_sym_LT_AMP;
	v->a[6942] = anon_sym_GT_AMP;
	v->a[6943] = anon_sym_GT_PIPE;
	v->a[6944] = state(1087);
	v->a[6945] = 12;
	v->a[6946] = sym_redirected_statement;
	v->a[6947] = sym_for_statement;
	v->a[6948] = sym_while_statement;
	v->a[6949] = sym_if_statement;
	v->a[6950] = sym_case_statement;
	v->a[6951] = sym_function_definition;
	v->a[6952] = sym_compound_statement;
	v->a[6953] = sym_subshell;
	v->a[6954] = sym_list;
	v->a[6955] = sym_negated_command;
	v->a[6956] = sym_command;
	v->a[6957] = sym__variable_assignments;
	v->a[6958] = 32;
	v->a[6959] = actions(3);
	small_parse_table_348(v);
}

void	small_parse_table_348(t_small_parse_table_array *v)
{
	v->a[6960] = 1;
	v->a[6961] = sym_comment;
	v->a[6962] = actions(9);
	v->a[6963] = 1;
	v->a[6964] = anon_sym_for;
	v->a[6965] = actions(13);
	v->a[6966] = 1;
	v->a[6967] = anon_sym_if;
	v->a[6968] = actions(15);
	v->a[6969] = 1;
	v->a[6970] = anon_sym_case;
	v->a[6971] = actions(17);
	v->a[6972] = 1;
	v->a[6973] = anon_sym_LPAREN;
	v->a[6974] = actions(19);
	v->a[6975] = 1;
	v->a[6976] = anon_sym_LBRACE;
	v->a[6977] = actions(59);
	v->a[6978] = 1;
	v->a[6979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_349(v);
}

void	small_parse_table_349(t_small_parse_table_array *v)
{
	v->a[6980] = actions(61);
	v->a[6981] = 1;
	v->a[6982] = anon_sym_DOLLAR;
	v->a[6983] = actions(63);
	v->a[6984] = 1;
	v->a[6985] = anon_sym_DQUOTE;
	v->a[6986] = actions(67);
	v->a[6987] = 1;
	v->a[6988] = anon_sym_DOLLAR_LBRACE;
	v->a[6989] = actions(69);
	v->a[6990] = 1;
	v->a[6991] = anon_sym_DOLLAR_LPAREN;
	v->a[6992] = actions(71);
	v->a[6993] = 1;
	v->a[6994] = anon_sym_BQUOTE;
	v->a[6995] = actions(73);
	v->a[6996] = 1;
	v->a[6997] = sym_file_descriptor;
	v->a[6998] = actions(75);
	v->a[6999] = 1;
	small_parse_table_350(v);
}

/* EOF small_parse_table_69.c */
