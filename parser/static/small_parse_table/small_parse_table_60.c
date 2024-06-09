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
	v->a[6017] = actions(63);
	v->a[6018] = 1;
	v->a[6019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_301(v);
}

void	small_parse_table_301(t_small_parse_table_array *v)
{
	v->a[6020] = actions(65);
	v->a[6021] = 1;
	v->a[6022] = anon_sym_DOLLAR;
	v->a[6023] = actions(67);
	v->a[6024] = 1;
	v->a[6025] = anon_sym_DQUOTE;
	v->a[6026] = actions(71);
	v->a[6027] = 1;
	v->a[6028] = aux_sym_number_token1;
	v->a[6029] = actions(73);
	v->a[6030] = 1;
	v->a[6031] = aux_sym_number_token2;
	v->a[6032] = actions(75);
	v->a[6033] = 1;
	v->a[6034] = anon_sym_DOLLAR_LBRACE;
	v->a[6035] = actions(77);
	v->a[6036] = 1;
	v->a[6037] = anon_sym_DOLLAR_LPAREN;
	v->a[6038] = actions(79);
	v->a[6039] = 1;
	small_parse_table_302(v);
}

void	small_parse_table_302(t_small_parse_table_array *v)
{
	v->a[6040] = anon_sym_BQUOTE;
	v->a[6041] = actions(248);
	v->a[6042] = 1;
	v->a[6043] = sym_word;
	v->a[6044] = actions(250);
	v->a[6045] = 1;
	v->a[6046] = anon_sym_BANG;
	v->a[6047] = actions(256);
	v->a[6048] = 1;
	v->a[6049] = sym_raw_string;
	v->a[6050] = actions(258);
	v->a[6051] = 1;
	v->a[6052] = sym_file_descriptor;
	v->a[6053] = actions(260);
	v->a[6054] = 1;
	v->a[6055] = sym_variable_name;
	v->a[6056] = state(141);
	v->a[6057] = 1;
	v->a[6058] = aux_sym__statements_repeat1;
	v->a[6059] = state(175);
	small_parse_table_303(v);
}

void	small_parse_table_303(t_small_parse_table_array *v)
{
	v->a[6060] = 1;
	v->a[6061] = sym_command_name;
	v->a[6062] = state(278);
	v->a[6063] = 1;
	v->a[6064] = sym_variable_assignment;
	v->a[6065] = state(567);
	v->a[6066] = 1;
	v->a[6067] = aux_sym_command_repeat1;
	v->a[6068] = state(582);
	v->a[6069] = 1;
	v->a[6070] = sym_concatenation;
	v->a[6071] = state(687);
	v->a[6072] = 1;
	v->a[6073] = sym_file_redirect;
	v->a[6074] = state(1100);
	v->a[6075] = 1;
	v->a[6076] = sym_pipeline;
	v->a[6077] = state(1196);
	v->a[6078] = 1;
	v->a[6079] = aux_sym_redirected_statement_repeat2;
	small_parse_table_304(v);
}

void	small_parse_table_304(t_small_parse_table_array *v)
{
	v->a[6080] = state(2037);
	v->a[6081] = 1;
	v->a[6082] = sym__statement_not_pipeline;
	v->a[6083] = state(2095);
	v->a[6084] = 1;
	v->a[6085] = sym__statements;
	v->a[6086] = actions(11);
	v->a[6087] = 2;
	v->a[6088] = anon_sym_while;
	v->a[6089] = anon_sym_until;
	v->a[6090] = actions(254);
	v->a[6091] = 2;
	v->a[6092] = anon_sym_LT_AMP_DASH;
	v->a[6093] = anon_sym_GT_AMP_DASH;
	v->a[6094] = state(295);
	v->a[6095] = 6;
	v->a[6096] = sym_arithmetic_expansion;
	v->a[6097] = sym_string;
	v->a[6098] = sym_number;
	v->a[6099] = sym_simple_expansion;
	small_parse_table_305(v);
}

/* EOF small_parse_table_60.c */
