/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_60.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_300(t_small_parse_table_array *v)
{
	v->a[6000] = 1;
	v->a[6001] = sym_comment;
	v->a[6002] = actions(9);
	v->a[6003] = 1;
	v->a[6004] = anon_sym_for;
	v->a[6005] = actions(13);
	v->a[6006] = 1;
	v->a[6007] = anon_sym_if;
	v->a[6008] = actions(15);
	v->a[6009] = 1;
	v->a[6010] = anon_sym_case;
	v->a[6011] = actions(17);
	v->a[6012] = 1;
	v->a[6013] = anon_sym_LPAREN;
	v->a[6014] = actions(19);
	v->a[6015] = 1;
	v->a[6016] = anon_sym_LBRACE;
	v->a[6017] = actions(59);
	v->a[6018] = 1;
	v->a[6019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_301(v);
}

void	small_parse_table_301(t_small_parse_table_array *v)
{
	v->a[6020] = actions(61);
	v->a[6021] = 1;
	v->a[6022] = anon_sym_DOLLAR;
	v->a[6023] = actions(63);
	v->a[6024] = 1;
	v->a[6025] = anon_sym_DQUOTE;
	v->a[6026] = actions(67);
	v->a[6027] = 1;
	v->a[6028] = anon_sym_DOLLAR_LBRACE;
	v->a[6029] = actions(69);
	v->a[6030] = 1;
	v->a[6031] = anon_sym_DOLLAR_LPAREN;
	v->a[6032] = actions(71);
	v->a[6033] = 1;
	v->a[6034] = anon_sym_BQUOTE;
	v->a[6035] = actions(220);
	v->a[6036] = 1;
	v->a[6037] = sym_word;
	v->a[6038] = actions(222);
	v->a[6039] = 1;
	small_parse_table_302(v);
}

void	small_parse_table_302(t_small_parse_table_array *v)
{
	v->a[6040] = anon_sym_BANG;
	v->a[6041] = actions(230);
	v->a[6042] = 1;
	v->a[6043] = sym_file_descriptor;
	v->a[6044] = actions(232);
	v->a[6045] = 1;
	v->a[6046] = sym_variable_name;
	v->a[6047] = state(133);
	v->a[6048] = 1;
	v->a[6049] = aux_sym__statements_repeat1;
	v->a[6050] = state(180);
	v->a[6051] = 1;
	v->a[6052] = sym_command_name;
	v->a[6053] = state(231);
	v->a[6054] = 1;
	v->a[6055] = sym_variable_assignment;
	v->a[6056] = state(650);
	v->a[6057] = 1;
	v->a[6058] = sym_concatenation;
	v->a[6059] = state(710);
	small_parse_table_303(v);
}

void	small_parse_table_303(t_small_parse_table_array *v)
{
	v->a[6060] = 1;
	v->a[6061] = aux_sym_command_repeat1;
	v->a[6062] = state(755);
	v->a[6063] = 1;
	v->a[6064] = sym_file_redirect;
	v->a[6065] = state(1095);
	v->a[6066] = 1;
	v->a[6067] = sym_pipeline;
	v->a[6068] = state(1282);
	v->a[6069] = 1;
	v->a[6070] = aux_sym_redirected_statement_repeat2;
	v->a[6071] = state(2127);
	v->a[6072] = 1;
	v->a[6073] = sym__statement_not_pipeline;
	v->a[6074] = state(2206);
	v->a[6075] = 1;
	v->a[6076] = sym__statements;
	v->a[6077] = actions(11);
	v->a[6078] = 2;
	v->a[6079] = anon_sym_while;
	small_parse_table_304(v);
}

void	small_parse_table_304(t_small_parse_table_array *v)
{
	v->a[6080] = anon_sym_until;
	v->a[6081] = actions(226);
	v->a[6082] = 2;
	v->a[6083] = anon_sym_LT_AMP_DASH;
	v->a[6084] = anon_sym_GT_AMP_DASH;
	v->a[6085] = actions(228);
	v->a[6086] = 2;
	v->a[6087] = sym_raw_string;
	v->a[6088] = sym_number;
	v->a[6089] = state(382);
	v->a[6090] = 5;
	v->a[6091] = sym_arithmetic_expansion;
	v->a[6092] = sym_string;
	v->a[6093] = sym_simple_expansion;
	v->a[6094] = sym_expansion;
	v->a[6095] = sym_command_substitution;
	v->a[6096] = actions(224);
	v->a[6097] = 6;
	v->a[6098] = anon_sym_LT;
	v->a[6099] = anon_sym_GT;
	small_parse_table_305(v);
}

/* EOF small_parse_table_60.c */
