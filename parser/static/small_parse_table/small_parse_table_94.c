/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_94.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_470(t_small_parse_table_array *v)
{
	v->a[9400] = anon_sym_BQUOTE;
	v->a[9401] = actions(211);
	v->a[9402] = 1;
	v->a[9403] = sym_word;
	v->a[9404] = actions(213);
	v->a[9405] = 1;
	v->a[9406] = anon_sym_BANG;
	v->a[9407] = actions(219);
	v->a[9408] = 1;
	v->a[9409] = sym_file_descriptor;
	v->a[9410] = actions(221);
	v->a[9411] = 1;
	v->a[9412] = sym_variable_name;
	v->a[9413] = state(120);
	v->a[9414] = 1;
	v->a[9415] = aux_sym__statements_repeat1;
	v->a[9416] = state(177);
	v->a[9417] = 1;
	v->a[9418] = sym_command_name;
	v->a[9419] = state(208);
	small_parse_table_471(v);
}

void	small_parse_table_471(t_small_parse_table_array *v)
{
	v->a[9420] = 1;
	v->a[9421] = sym_variable_assignment;
	v->a[9422] = state(584);
	v->a[9423] = 1;
	v->a[9424] = sym_concatenation;
	v->a[9425] = state(639);
	v->a[9426] = 1;
	v->a[9427] = aux_sym_command_repeat1;
	v->a[9428] = state(685);
	v->a[9429] = 1;
	v->a[9430] = sym_file_redirect;
	v->a[9431] = state(1073);
	v->a[9432] = 1;
	v->a[9433] = sym_pipeline;
	v->a[9434] = state(1158);
	v->a[9435] = 1;
	v->a[9436] = aux_sym_redirected_statement_repeat2;
	v->a[9437] = state(1906);
	v->a[9438] = 1;
	v->a[9439] = sym__statement_not_pipeline;
	small_parse_table_472(v);
}

void	small_parse_table_472(t_small_parse_table_array *v)
{
	v->a[9440] = state(2112);
	v->a[9441] = 1;
	v->a[9442] = sym__statements;
	v->a[9443] = actions(11);
	v->a[9444] = 2;
	v->a[9445] = anon_sym_while;
	v->a[9446] = anon_sym_until;
	v->a[9447] = actions(217);
	v->a[9448] = 2;
	v->a[9449] = sym_raw_string;
	v->a[9450] = sym_number;
	v->a[9451] = state(347);
	v->a[9452] = 5;
	v->a[9453] = sym_arithmetic_expansion;
	v->a[9454] = sym_string;
	v->a[9455] = sym_simple_expansion;
	v->a[9456] = sym_expansion;
	v->a[9457] = sym_command_substitution;
	v->a[9458] = actions(215);
	v->a[9459] = 7;
	small_parse_table_473(v);
}

void	small_parse_table_473(t_small_parse_table_array *v)
{
	v->a[9460] = anon_sym_LT;
	v->a[9461] = anon_sym_GT;
	v->a[9462] = anon_sym_GT_GT;
	v->a[9463] = anon_sym_LT_AMP;
	v->a[9464] = anon_sym_GT_AMP;
	v->a[9465] = anon_sym_GT_PIPE;
	v->a[9466] = anon_sym_LT_GT;
	v->a[9467] = state(958);
	v->a[9468] = 12;
	v->a[9469] = sym_redirected_statement;
	v->a[9470] = sym_for_statement;
	v->a[9471] = sym_while_statement;
	v->a[9472] = sym_if_statement;
	v->a[9473] = sym_case_statement;
	v->a[9474] = sym_function_definition;
	v->a[9475] = sym_compound_statement;
	v->a[9476] = sym_subshell;
	v->a[9477] = sym_list;
	v->a[9478] = sym_negated_command;
	v->a[9479] = sym_command;
	small_parse_table_474(v);
}

void	small_parse_table_474(t_small_parse_table_array *v)
{
	v->a[9480] = sym__variable_assignments;
	v->a[9481] = 31;
	v->a[9482] = actions(3);
	v->a[9483] = 1;
	v->a[9484] = sym_comment;
	v->a[9485] = actions(9);
	v->a[9486] = 1;
	v->a[9487] = anon_sym_for;
	v->a[9488] = actions(13);
	v->a[9489] = 1;
	v->a[9490] = anon_sym_if;
	v->a[9491] = actions(15);
	v->a[9492] = 1;
	v->a[9493] = anon_sym_case;
	v->a[9494] = actions(17);
	v->a[9495] = 1;
	v->a[9496] = anon_sym_LPAREN;
	v->a[9497] = actions(19);
	v->a[9498] = 1;
	v->a[9499] = anon_sym_LBRACE;
	small_parse_table_475(v);
}

/* EOF small_parse_table_94.c */
