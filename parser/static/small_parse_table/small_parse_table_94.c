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
	v->a[9401] = aux_sym_command_repeat1;
	v->a[9402] = state(718);
	v->a[9403] = 1;
	v->a[9404] = sym_file_redirect;
	v->a[9405] = state(1213);
	v->a[9406] = 1;
	v->a[9407] = aux_sym_redirected_statement_repeat2;
	v->a[9408] = state(1225);
	v->a[9409] = 1;
	v->a[9410] = sym_pipeline;
	v->a[9411] = state(2035);
	v->a[9412] = 1;
	v->a[9413] = sym__statement_not_pipeline;
	v->a[9414] = actions(11);
	v->a[9415] = 2;
	v->a[9416] = anon_sym_while;
	v->a[9417] = anon_sym_until;
	v->a[9418] = actions(61);
	v->a[9419] = 2;
	small_parse_table_471(v);
}

void	small_parse_table_471(t_small_parse_table_array *v)
{
	v->a[9420] = anon_sym_LT_AMP_DASH;
	v->a[9421] = anon_sym_GT_AMP_DASH;
	v->a[9422] = state(397);
	v->a[9423] = 6;
	v->a[9424] = sym_arithmetic_expansion;
	v->a[9425] = sym_string;
	v->a[9426] = sym_number;
	v->a[9427] = sym_simple_expansion;
	v->a[9428] = sym_expansion;
	v->a[9429] = sym_command_substitution;
	v->a[9430] = actions(59);
	v->a[9431] = 8;
	v->a[9432] = anon_sym_LT;
	v->a[9433] = anon_sym_GT;
	v->a[9434] = anon_sym_GT_GT;
	v->a[9435] = anon_sym_AMP_GT;
	v->a[9436] = anon_sym_AMP_GT_GT;
	v->a[9437] = anon_sym_LT_AMP;
	v->a[9438] = anon_sym_GT_AMP;
	v->a[9439] = anon_sym_GT_PIPE;
	small_parse_table_472(v);
}

void	small_parse_table_472(t_small_parse_table_array *v)
{
	v->a[9440] = state(1137);
	v->a[9441] = 12;
	v->a[9442] = sym_redirected_statement;
	v->a[9443] = sym_for_statement;
	v->a[9444] = sym_while_statement;
	v->a[9445] = sym_if_statement;
	v->a[9446] = sym_case_statement;
	v->a[9447] = sym_function_definition;
	v->a[9448] = sym_compound_statement;
	v->a[9449] = sym_subshell;
	v->a[9450] = sym_list;
	v->a[9451] = sym_negated_command;
	v->a[9452] = sym_command;
	v->a[9453] = sym_variable_assignments;
	v->a[9454] = 34;
	v->a[9455] = actions(3);
	v->a[9456] = 1;
	v->a[9457] = sym_comment;
	v->a[9458] = actions(9);
	v->a[9459] = 1;
	small_parse_table_473(v);
}

void	small_parse_table_473(t_small_parse_table_array *v)
{
	v->a[9460] = anon_sym_for;
	v->a[9461] = actions(13);
	v->a[9462] = 1;
	v->a[9463] = anon_sym_if;
	v->a[9464] = actions(15);
	v->a[9465] = 1;
	v->a[9466] = anon_sym_case;
	v->a[9467] = actions(17);
	v->a[9468] = 1;
	v->a[9469] = anon_sym_LPAREN;
	v->a[9470] = actions(19);
	v->a[9471] = 1;
	v->a[9472] = anon_sym_LBRACE;
	v->a[9473] = actions(63);
	v->a[9474] = 1;
	v->a[9475] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9476] = actions(65);
	v->a[9477] = 1;
	v->a[9478] = anon_sym_DOLLAR;
	v->a[9479] = actions(67);
	small_parse_table_474(v);
}

void	small_parse_table_474(t_small_parse_table_array *v)
{
	v->a[9480] = 1;
	v->a[9481] = anon_sym_DQUOTE;
	v->a[9482] = actions(69);
	v->a[9483] = 1;
	v->a[9484] = sym_raw_string;
	v->a[9485] = actions(71);
	v->a[9486] = 1;
	v->a[9487] = aux_sym_number_token1;
	v->a[9488] = actions(73);
	v->a[9489] = 1;
	v->a[9490] = aux_sym_number_token2;
	v->a[9491] = actions(75);
	v->a[9492] = 1;
	v->a[9493] = anon_sym_DOLLAR_LBRACE;
	v->a[9494] = actions(77);
	v->a[9495] = 1;
	v->a[9496] = anon_sym_DOLLAR_LPAREN;
	v->a[9497] = actions(79);
	v->a[9498] = 1;
	v->a[9499] = anon_sym_BQUOTE;
	small_parse_table_475(v);
}

/* EOF small_parse_table_94.c */
