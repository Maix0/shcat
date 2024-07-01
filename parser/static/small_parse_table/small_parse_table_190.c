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
	v->a[19000] = sym_if_statement;
	v->a[19001] = sym_compound_statement;
	v->a[19002] = sym_subshell;
	v->a[19003] = sym_command;
	v->a[19004] = sym__variable_assignments;
	v->a[19005] = 25;
	v->a[19006] = actions(3);
	v->a[19007] = 1;
	v->a[19008] = sym_comment;
	v->a[19009] = actions(9);
	v->a[19010] = 1;
	v->a[19011] = anon_sym_for;
	v->a[19012] = actions(13);
	v->a[19013] = 1;
	v->a[19014] = anon_sym_if;
	v->a[19015] = actions(17);
	v->a[19016] = 1;
	v->a[19017] = anon_sym_LPAREN;
	v->a[19018] = actions(19);
	v->a[19019] = 1;
	small_parse_table_951(v);
}

void	small_parse_table_951(t_small_parse_table_array *v)
{
	v->a[19020] = anon_sym_LBRACE;
	v->a[19021] = actions(59);
	v->a[19022] = 1;
	v->a[19023] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19024] = actions(61);
	v->a[19025] = 1;
	v->a[19026] = anon_sym_DOLLAR;
	v->a[19027] = actions(63);
	v->a[19028] = 1;
	v->a[19029] = anon_sym_DQUOTE;
	v->a[19030] = actions(67);
	v->a[19031] = 1;
	v->a[19032] = anon_sym_DOLLAR_LBRACE;
	v->a[19033] = actions(69);
	v->a[19034] = 1;
	v->a[19035] = anon_sym_DOLLAR_LPAREN;
	v->a[19036] = actions(71);
	v->a[19037] = 1;
	v->a[19038] = anon_sym_BQUOTE;
	v->a[19039] = actions(230);
	small_parse_table_952(v);
}

void	small_parse_table_952(t_small_parse_table_array *v)
{
	v->a[19040] = 1;
	v->a[19041] = sym_file_descriptor;
	v->a[19042] = actions(377);
	v->a[19043] = 1;
	v->a[19044] = sym_variable_name;
	v->a[19045] = state(180);
	v->a[19046] = 1;
	v->a[19047] = sym_command_name;
	v->a[19048] = state(650);
	v->a[19049] = 1;
	v->a[19050] = sym_concatenation;
	v->a[19051] = state(710);
	v->a[19052] = 1;
	v->a[19053] = aux_sym_command_repeat1;
	v->a[19054] = state(712);
	v->a[19055] = 1;
	v->a[19056] = sym_file_redirect;
	v->a[19057] = state(1228);
	v->a[19058] = 1;
	v->a[19059] = sym_variable_assignment;
	small_parse_table_953(v);
}

void	small_parse_table_953(t_small_parse_table_array *v)
{
	v->a[19060] = state(1269);
	v->a[19061] = 1;
	v->a[19062] = aux_sym_redirected_statement_repeat2;
	v->a[19063] = actions(11);
	v->a[19064] = 2;
	v->a[19065] = anon_sym_while;
	v->a[19066] = anon_sym_until;
	v->a[19067] = actions(226);
	v->a[19068] = 2;
	v->a[19069] = anon_sym_LT_AMP_DASH;
	v->a[19070] = anon_sym_GT_AMP_DASH;
	v->a[19071] = actions(228);
	v->a[19072] = 3;
	v->a[19073] = sym_raw_string;
	v->a[19074] = sym_number;
	v->a[19075] = sym_word;
	v->a[19076] = state(382);
	v->a[19077] = 5;
	v->a[19078] = sym_arithmetic_expansion;
	v->a[19079] = sym_string;
	small_parse_table_954(v);
}

void	small_parse_table_954(t_small_parse_table_array *v)
{
	v->a[19080] = sym_simple_expansion;
	v->a[19081] = sym_expansion;
	v->a[19082] = sym_command_substitution;
	v->a[19083] = actions(224);
	v->a[19084] = 6;
	v->a[19085] = anon_sym_LT;
	v->a[19086] = anon_sym_GT;
	v->a[19087] = anon_sym_GT_GT;
	v->a[19088] = anon_sym_LT_AMP;
	v->a[19089] = anon_sym_GT_AMP;
	v->a[19090] = anon_sym_GT_PIPE;
	v->a[19091] = state(1191);
	v->a[19092] = 7;
	v->a[19093] = sym_for_statement;
	v->a[19094] = sym_while_statement;
	v->a[19095] = sym_if_statement;
	v->a[19096] = sym_compound_statement;
	v->a[19097] = sym_subshell;
	v->a[19098] = sym_command;
	v->a[19099] = sym__variable_assignments;
	small_parse_table_955(v);
}

/* EOF small_parse_table_190.c */
