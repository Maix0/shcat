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
	v->a[19001] = anon_sym_if;
	v->a[19002] = actions(15);
	v->a[19003] = 1;
	v->a[19004] = anon_sym_case;
	v->a[19005] = actions(17);
	v->a[19006] = 1;
	v->a[19007] = anon_sym_LPAREN;
	v->a[19008] = actions(19);
	v->a[19009] = 1;
	v->a[19010] = anon_sym_LBRACE;
	v->a[19011] = actions(45);
	v->a[19012] = 1;
	v->a[19013] = sym_word;
	v->a[19014] = actions(53);
	v->a[19015] = 1;
	v->a[19016] = anon_sym_BANG;
	v->a[19017] = actions(59);
	v->a[19018] = 1;
	v->a[19019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_951(v);
}

void	small_parse_table_951(t_small_parse_table_array *v)
{
	v->a[19020] = actions(61);
	v->a[19021] = 1;
	v->a[19022] = anon_sym_DOLLAR;
	v->a[19023] = actions(63);
	v->a[19024] = 1;
	v->a[19025] = anon_sym_DQUOTE;
	v->a[19026] = actions(67);
	v->a[19027] = 1;
	v->a[19028] = anon_sym_DOLLAR_LBRACE;
	v->a[19029] = actions(69);
	v->a[19030] = 1;
	v->a[19031] = anon_sym_DOLLAR_LPAREN;
	v->a[19032] = actions(71);
	v->a[19033] = 1;
	v->a[19034] = anon_sym_BQUOTE;
	v->a[19035] = actions(73);
	v->a[19036] = 1;
	v->a[19037] = sym_file_descriptor;
	v->a[19038] = actions(75);
	v->a[19039] = 1;
	small_parse_table_952(v);
}

void	small_parse_table_952(t_small_parse_table_array *v)
{
	v->a[19040] = sym_variable_name;
	v->a[19041] = state(187);
	v->a[19042] = 1;
	v->a[19043] = sym_command_name;
	v->a[19044] = state(304);
	v->a[19045] = 1;
	v->a[19046] = sym_variable_assignment;
	v->a[19047] = state(647);
	v->a[19048] = 1;
	v->a[19049] = sym_concatenation;
	v->a[19050] = state(736);
	v->a[19051] = 1;
	v->a[19052] = aux_sym_command_repeat1;
	v->a[19053] = state(738);
	v->a[19054] = 1;
	v->a[19055] = sym_file_redirect;
	v->a[19056] = state(1320);
	v->a[19057] = 1;
	v->a[19058] = sym_pipeline;
	v->a[19059] = state(1460);
	small_parse_table_953(v);
}

void	small_parse_table_953(t_small_parse_table_array *v)
{
	v->a[19060] = 1;
	v->a[19061] = aux_sym_redirected_statement_repeat2;
	v->a[19062] = state(2269);
	v->a[19063] = 1;
	v->a[19064] = sym__statement_not_pipeline;
	v->a[19065] = actions(11);
	v->a[19066] = 2;
	v->a[19067] = anon_sym_while;
	v->a[19068] = anon_sym_until;
	v->a[19069] = actions(57);
	v->a[19070] = 2;
	v->a[19071] = anon_sym_LT_AMP_DASH;
	v->a[19072] = anon_sym_GT_AMP_DASH;
	v->a[19073] = actions(65);
	v->a[19074] = 2;
	v->a[19075] = sym_raw_string;
	v->a[19076] = sym_number;
	v->a[19077] = state(394);
	v->a[19078] = 5;
	v->a[19079] = sym_arithmetic_expansion;
	small_parse_table_954(v);
}

void	small_parse_table_954(t_small_parse_table_array *v)
{
	v->a[19080] = sym_string;
	v->a[19081] = sym_simple_expansion;
	v->a[19082] = sym_expansion;
	v->a[19083] = sym_command_substitution;
	v->a[19084] = actions(55);
	v->a[19085] = 8;
	v->a[19086] = anon_sym_LT;
	v->a[19087] = anon_sym_GT;
	v->a[19088] = anon_sym_GT_GT;
	v->a[19089] = anon_sym_AMP_GT;
	v->a[19090] = anon_sym_AMP_GT_GT;
	v->a[19091] = anon_sym_LT_AMP;
	v->a[19092] = anon_sym_GT_AMP;
	v->a[19093] = anon_sym_GT_PIPE;
	v->a[19094] = state(1336);
	v->a[19095] = 12;
	v->a[19096] = sym_redirected_statement;
	v->a[19097] = sym_for_statement;
	v->a[19098] = sym_while_statement;
	v->a[19099] = sym_if_statement;
	small_parse_table_955(v);
}

/* EOF small_parse_table_190.c */
