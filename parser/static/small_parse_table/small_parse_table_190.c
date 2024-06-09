/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_190.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_950(t_small_parse_table_array *v)
{
	v->a[19000] = aux_sym_number_token2;
	v->a[19001] = actions(39);
	v->a[19002] = 1;
	v->a[19003] = anon_sym_DOLLAR_LBRACE;
	v->a[19004] = actions(41);
	v->a[19005] = 1;
	v->a[19006] = anon_sym_DOLLAR_LPAREN;
	v->a[19007] = actions(43);
	v->a[19008] = 1;
	v->a[19009] = anon_sym_BQUOTE;
	v->a[19010] = actions(45);
	v->a[19011] = 1;
	v->a[19012] = sym_file_descriptor;
	v->a[19013] = actions(47);
	v->a[19014] = 1;
	v->a[19015] = sym_variable_name;
	v->a[19016] = state(182);
	v->a[19017] = 1;
	v->a[19018] = sym_command_name;
	v->a[19019] = state(272);
	small_parse_table_951(v);
}

void	small_parse_table_951(t_small_parse_table_array *v)
{
	v->a[19020] = 1;
	v->a[19021] = sym_variable_assignment;
	v->a[19022] = state(565);
	v->a[19023] = 1;
	v->a[19024] = sym_concatenation;
	v->a[19025] = state(572);
	v->a[19026] = 1;
	v->a[19027] = aux_sym_command_repeat1;
	v->a[19028] = state(698);
	v->a[19029] = 1;
	v->a[19030] = sym_file_redirect;
	v->a[19031] = state(1138);
	v->a[19032] = 1;
	v->a[19033] = aux_sym_redirected_statement_repeat2;
	v->a[19034] = state(1379);
	v->a[19035] = 1;
	v->a[19036] = sym_pipeline;
	v->a[19037] = actions(11);
	v->a[19038] = 2;
	v->a[19039] = anon_sym_while;
	small_parse_table_952(v);
}

void	small_parse_table_952(t_small_parse_table_array *v)
{
	v->a[19040] = anon_sym_until;
	v->a[19041] = actions(25);
	v->a[19042] = 2;
	v->a[19043] = anon_sym_LT_AMP_DASH;
	v->a[19044] = anon_sym_GT_AMP_DASH;
	v->a[19045] = state(311);
	v->a[19046] = 6;
	v->a[19047] = sym_arithmetic_expansion;
	v->a[19048] = sym_string;
	v->a[19049] = sym_number;
	v->a[19050] = sym_simple_expansion;
	v->a[19051] = sym_expansion;
	v->a[19052] = sym_command_substitution;
	v->a[19053] = actions(23);
	v->a[19054] = 8;
	v->a[19055] = anon_sym_LT;
	v->a[19056] = anon_sym_GT;
	v->a[19057] = anon_sym_GT_GT;
	v->a[19058] = anon_sym_AMP_GT;
	v->a[19059] = anon_sym_AMP_GT_GT;
	small_parse_table_953(v);
}

void	small_parse_table_953(t_small_parse_table_array *v)
{
	v->a[19060] = anon_sym_LT_AMP;
	v->a[19061] = anon_sym_GT_AMP;
	v->a[19062] = anon_sym_GT_PIPE;
	v->a[19063] = state(1007);
	v->a[19064] = 13;
	v->a[19065] = sym__statement_not_pipeline;
	v->a[19066] = sym_redirected_statement;
	v->a[19067] = sym_for_statement;
	v->a[19068] = sym_while_statement;
	v->a[19069] = sym_if_statement;
	v->a[19070] = sym_case_statement;
	v->a[19071] = sym_function_definition;
	v->a[19072] = sym_compound_statement;
	v->a[19073] = sym_subshell;
	v->a[19074] = sym_list;
	v->a[19075] = sym_negated_command;
	v->a[19076] = sym_command;
	v->a[19077] = sym_variable_assignments;
	v->a[19078] = 32;
	v->a[19079] = actions(3);
	small_parse_table_954(v);
}

void	small_parse_table_954(t_small_parse_table_array *v)
{
	v->a[19080] = 1;
	v->a[19081] = sym_comment;
	v->a[19082] = actions(9);
	v->a[19083] = 1;
	v->a[19084] = anon_sym_for;
	v->a[19085] = actions(13);
	v->a[19086] = 1;
	v->a[19087] = anon_sym_if;
	v->a[19088] = actions(15);
	v->a[19089] = 1;
	v->a[19090] = anon_sym_case;
	v->a[19091] = actions(17);
	v->a[19092] = 1;
	v->a[19093] = anon_sym_LPAREN;
	v->a[19094] = actions(19);
	v->a[19095] = 1;
	v->a[19096] = anon_sym_LBRACE;
	v->a[19097] = actions(49);
	v->a[19098] = 1;
	v->a[19099] = sym_word;
	small_parse_table_955(v);
}

/* EOF small_parse_table_190.c */
