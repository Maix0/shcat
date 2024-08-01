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
	v->a[19000] = sym_simple_expansion;
	v->a[19001] = sym_expansion;
	v->a[19002] = sym_command_substitution;
	v->a[19003] = 19;
	v->a[19004] = actions(3);
	v->a[19005] = 1;
	v->a[19006] = sym_comment;
	v->a[19007] = actions(17);
	v->a[19008] = 1;
	v->a[19009] = anon_sym_LPAREN;
	v->a[19010] = actions(53);
	v->a[19011] = 1;
	v->a[19012] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19013] = actions(55);
	v->a[19014] = 1;
	v->a[19015] = anon_sym_DOLLAR;
	v->a[19016] = actions(57);
	v->a[19017] = 1;
	v->a[19018] = anon_sym_DQUOTE;
	v->a[19019] = actions(61);
	small_parse_table_951(v);
}

void	small_parse_table_951(t_small_parse_table_array *v)
{
	v->a[19020] = 1;
	v->a[19021] = anon_sym_DOLLAR_LBRACE;
	v->a[19022] = actions(63);
	v->a[19023] = 1;
	v->a[19024] = anon_sym_DOLLAR_LPAREN;
	v->a[19025] = actions(65);
	v->a[19026] = 1;
	v->a[19027] = anon_sym_BQUOTE;
	v->a[19028] = actions(216);
	v->a[19029] = 1;
	v->a[19030] = sym_variable_name;
	v->a[19031] = state(158);
	v->a[19032] = 1;
	v->a[19033] = sym_command_name;
	v->a[19034] = state(298);
	v->a[19035] = 1;
	v->a[19036] = aux_sym_command_repeat1;
	v->a[19037] = state(555);
	v->a[19038] = 1;
	v->a[19039] = sym_concatenation;
	small_parse_table_952(v);
}

void	small_parse_table_952(t_small_parse_table_array *v)
{
	v->a[19040] = state(557);
	v->a[19041] = 1;
	v->a[19042] = sym_variable_assignment;
	v->a[19043] = state(1039);
	v->a[19044] = 1;
	v->a[19045] = sym_subshell;
	v->a[19046] = state(1065);
	v->a[19047] = 1;
	v->a[19048] = sym_command;
	v->a[19049] = state(1083);
	v->a[19050] = 1;
	v->a[19051] = sym_file_redirect;
	v->a[19052] = actions(214);
	v->a[19053] = 3;
	v->a[19054] = sym_raw_string;
	v->a[19055] = sym_number;
	v->a[19056] = sym_word;
	v->a[19057] = actions(758);
	v->a[19058] = 3;
	v->a[19059] = anon_sym_LT;
	small_parse_table_953(v);
}

void	small_parse_table_953(t_small_parse_table_array *v)
{
	v->a[19060] = anon_sym_GT;
	v->a[19061] = anon_sym_GT_GT;
	v->a[19062] = state(277);
	v->a[19063] = 5;
	v->a[19064] = sym_arithmetic_expansion;
	v->a[19065] = sym_string;
	v->a[19066] = sym_simple_expansion;
	v->a[19067] = sym_expansion;
	v->a[19068] = sym_command_substitution;
	v->a[19069] = 19;
	v->a[19070] = actions(3);
	v->a[19071] = 1;
	v->a[19072] = sym_comment;
	v->a[19073] = actions(17);
	v->a[19074] = 1;
	v->a[19075] = anon_sym_LPAREN;
	v->a[19076] = actions(25);
	v->a[19077] = 1;
	v->a[19078] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19079] = actions(27);
	small_parse_table_954(v);
}

void	small_parse_table_954(t_small_parse_table_array *v)
{
	v->a[19080] = 1;
	v->a[19081] = anon_sym_DOLLAR;
	v->a[19082] = actions(29);
	v->a[19083] = 1;
	v->a[19084] = anon_sym_DQUOTE;
	v->a[19085] = actions(33);
	v->a[19086] = 1;
	v->a[19087] = anon_sym_DOLLAR_LBRACE;
	v->a[19088] = actions(35);
	v->a[19089] = 1;
	v->a[19090] = anon_sym_DOLLAR_LPAREN;
	v->a[19091] = actions(37);
	v->a[19092] = 1;
	v->a[19093] = anon_sym_BQUOTE;
	v->a[19094] = actions(39);
	v->a[19095] = 1;
	v->a[19096] = sym_variable_name;
	v->a[19097] = state(166);
	v->a[19098] = 1;
	v->a[19099] = sym_command_name;
	small_parse_table_955(v);
}

/* EOF small_parse_table_190.c */
