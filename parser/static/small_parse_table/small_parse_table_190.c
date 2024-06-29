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
	v->a[19000] = 1;
	v->a[19001] = anon_sym_for;
	v->a[19002] = actions(13);
	v->a[19003] = 1;
	v->a[19004] = anon_sym_if;
	v->a[19005] = actions(15);
	v->a[19006] = 1;
	v->a[19007] = anon_sym_case;
	v->a[19008] = actions(17);
	v->a[19009] = 1;
	v->a[19010] = anon_sym_LPAREN;
	v->a[19011] = actions(19);
	v->a[19012] = 1;
	v->a[19013] = anon_sym_LBRACE;
	v->a[19014] = actions(21);
	v->a[19015] = 1;
	v->a[19016] = anon_sym_BANG;
	v->a[19017] = actions(27);
	v->a[19018] = 1;
	v->a[19019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_951(v);
}

void	small_parse_table_951(t_small_parse_table_array *v)
{
	v->a[19020] = actions(29);
	v->a[19021] = 1;
	v->a[19022] = anon_sym_DOLLAR;
	v->a[19023] = actions(31);
	v->a[19024] = 1;
	v->a[19025] = anon_sym_DQUOTE;
	v->a[19026] = actions(35);
	v->a[19027] = 1;
	v->a[19028] = anon_sym_DOLLAR_LBRACE;
	v->a[19029] = actions(37);
	v->a[19030] = 1;
	v->a[19031] = anon_sym_DOLLAR_LPAREN;
	v->a[19032] = actions(39);
	v->a[19033] = 1;
	v->a[19034] = anon_sym_BQUOTE;
	v->a[19035] = actions(41);
	v->a[19036] = 1;
	v->a[19037] = sym_file_descriptor;
	v->a[19038] = actions(43);
	v->a[19039] = 1;
	small_parse_table_952(v);
}

void	small_parse_table_952(t_small_parse_table_array *v)
{
	v->a[19040] = sym_variable_name;
	v->a[19041] = state(183);
	v->a[19042] = 1;
	v->a[19043] = sym_command_name;
	v->a[19044] = state(276);
	v->a[19045] = 1;
	v->a[19046] = sym_variable_assignment;
	v->a[19047] = state(636);
	v->a[19048] = 1;
	v->a[19049] = sym_concatenation;
	v->a[19050] = state(685);
	v->a[19051] = 1;
	v->a[19052] = sym_file_redirect;
	v->a[19053] = state(743);
	v->a[19054] = 1;
	v->a[19055] = aux_sym_command_repeat1;
	v->a[19056] = state(1219);
	v->a[19057] = 1;
	v->a[19058] = aux_sym_redirected_statement_repeat2;
	v->a[19059] = state(1456);
	small_parse_table_953(v);
}

void	small_parse_table_953(t_small_parse_table_array *v)
{
	v->a[19060] = 1;
	v->a[19061] = sym_pipeline;
	v->a[19062] = actions(11);
	v->a[19063] = 2;
	v->a[19064] = anon_sym_while;
	v->a[19065] = anon_sym_until;
	v->a[19066] = actions(25);
	v->a[19067] = 2;
	v->a[19068] = anon_sym_LT_AMP_DASH;
	v->a[19069] = anon_sym_GT_AMP_DASH;
	v->a[19070] = actions(33);
	v->a[19071] = 2;
	v->a[19072] = sym_raw_string;
	v->a[19073] = sym_number;
	v->a[19074] = state(291);
	v->a[19075] = 5;
	v->a[19076] = sym_arithmetic_expansion;
	v->a[19077] = sym_string;
	v->a[19078] = sym_simple_expansion;
	v->a[19079] = sym_expansion;
	small_parse_table_954(v);
}

void	small_parse_table_954(t_small_parse_table_array *v)
{
	v->a[19080] = sym_command_substitution;
	v->a[19081] = actions(23);
	v->a[19082] = 8;
	v->a[19083] = anon_sym_LT;
	v->a[19084] = anon_sym_GT;
	v->a[19085] = anon_sym_GT_GT;
	v->a[19086] = anon_sym_AMP_GT;
	v->a[19087] = anon_sym_AMP_GT_GT;
	v->a[19088] = anon_sym_LT_AMP;
	v->a[19089] = anon_sym_GT_AMP;
	v->a[19090] = anon_sym_GT_PIPE;
	v->a[19091] = state(1170);
	v->a[19092] = 13;
	v->a[19093] = sym__statement_not_pipeline;
	v->a[19094] = sym_redirected_statement;
	v->a[19095] = sym_for_statement;
	v->a[19096] = sym_while_statement;
	v->a[19097] = sym_if_statement;
	v->a[19098] = sym_case_statement;
	v->a[19099] = sym_function_definition;
	small_parse_table_955(v);
}

/* EOF small_parse_table_190.c */
