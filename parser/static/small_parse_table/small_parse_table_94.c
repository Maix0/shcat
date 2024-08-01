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
	v->a[9400] = 1;
	v->a[9401] = anon_sym_DQUOTE;
	v->a[9402] = actions(61);
	v->a[9403] = 1;
	v->a[9404] = anon_sym_DOLLAR_LBRACE;
	v->a[9405] = actions(63);
	v->a[9406] = 1;
	v->a[9407] = anon_sym_DOLLAR_LPAREN;
	v->a[9408] = actions(65);
	v->a[9409] = 1;
	v->a[9410] = anon_sym_BQUOTE;
	v->a[9411] = actions(67);
	v->a[9412] = 1;
	v->a[9413] = sym_variable_name;
	v->a[9414] = actions(238);
	v->a[9415] = 1;
	v->a[9416] = anon_sym_then;
	v->a[9417] = state(38);
	v->a[9418] = 1;
	v->a[9419] = aux_sym__terminated_statement;
	small_parse_table_471(v);
}

void	small_parse_table_471(t_small_parse_table_array *v)
{
	v->a[9420] = state(185);
	v->a[9421] = 1;
	v->a[9422] = sym_command_name;
	v->a[9423] = state(237);
	v->a[9424] = 1;
	v->a[9425] = sym_variable_assignment;
	v->a[9426] = state(411);
	v->a[9427] = 1;
	v->a[9428] = aux_sym_command_repeat1;
	v->a[9429] = state(551);
	v->a[9430] = 1;
	v->a[9431] = sym_file_redirect;
	v->a[9432] = state(555);
	v->a[9433] = 1;
	v->a[9434] = sym_concatenation;
	v->a[9435] = state(1059);
	v->a[9436] = 1;
	v->a[9437] = sym_pipeline;
	v->a[9438] = state(1126);
	v->a[9439] = 1;
	small_parse_table_472(v);
}

void	small_parse_table_472(t_small_parse_table_array *v)
{
	v->a[9440] = aux_sym_redirected_statement_repeat2;
	v->a[9441] = state(1561);
	v->a[9442] = 1;
	v->a[9443] = sym__statement_not_pipeline;
	v->a[9444] = actions(11);
	v->a[9445] = 2;
	v->a[9446] = anon_sym_while;
	v->a[9447] = anon_sym_until;
	v->a[9448] = actions(59);
	v->a[9449] = 2;
	v->a[9450] = sym_raw_string;
	v->a[9451] = sym_number;
	v->a[9452] = actions(51);
	v->a[9453] = 3;
	v->a[9454] = anon_sym_LT;
	v->a[9455] = anon_sym_GT;
	v->a[9456] = anon_sym_GT_GT;
	v->a[9457] = state(401);
	v->a[9458] = 5;
	v->a[9459] = sym_arithmetic_expansion;
	small_parse_table_473(v);
}

void	small_parse_table_473(t_small_parse_table_array *v)
{
	v->a[9460] = sym_string;
	v->a[9461] = sym_simple_expansion;
	v->a[9462] = sym_expansion;
	v->a[9463] = sym_command_substitution;
	v->a[9464] = state(949);
	v->a[9465] = 12;
	v->a[9466] = sym_redirected_statement;
	v->a[9467] = sym_for_statement;
	v->a[9468] = sym_while_statement;
	v->a[9469] = sym_if_statement;
	v->a[9470] = sym_case_statement;
	v->a[9471] = sym_function_definition;
	v->a[9472] = sym_compound_statement;
	v->a[9473] = sym_subshell;
	v->a[9474] = sym_list;
	v->a[9475] = sym_negated_command;
	v->a[9476] = sym_command;
	v->a[9477] = sym__variable_assignments;
	v->a[9478] = 30;
	v->a[9479] = actions(3);
	small_parse_table_474(v);
}

void	small_parse_table_474(t_small_parse_table_array *v)
{
	v->a[9480] = 1;
	v->a[9481] = sym_comment;
	v->a[9482] = actions(9);
	v->a[9483] = 1;
	v->a[9484] = anon_sym_for;
	v->a[9485] = actions(13);
	v->a[9486] = 1;
	v->a[9487] = anon_sym_if;
	v->a[9488] = actions(15);
	v->a[9489] = 1;
	v->a[9490] = anon_sym_case;
	v->a[9491] = actions(17);
	v->a[9492] = 1;
	v->a[9493] = anon_sym_LPAREN;
	v->a[9494] = actions(19);
	v->a[9495] = 1;
	v->a[9496] = anon_sym_LBRACE;
	v->a[9497] = actions(53);
	v->a[9498] = 1;
	v->a[9499] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_475(v);
}

/* EOF small_parse_table_94.c */
