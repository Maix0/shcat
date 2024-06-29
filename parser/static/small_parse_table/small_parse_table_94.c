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
	v->a[9400] = anon_sym_case;
	v->a[9401] = actions(17);
	v->a[9402] = 1;
	v->a[9403] = anon_sym_LPAREN;
	v->a[9404] = actions(19);
	v->a[9405] = 1;
	v->a[9406] = anon_sym_LBRACE;
	v->a[9407] = actions(59);
	v->a[9408] = 1;
	v->a[9409] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9410] = actions(61);
	v->a[9411] = 1;
	v->a[9412] = anon_sym_DOLLAR;
	v->a[9413] = actions(63);
	v->a[9414] = 1;
	v->a[9415] = anon_sym_DQUOTE;
	v->a[9416] = actions(67);
	v->a[9417] = 1;
	v->a[9418] = anon_sym_DOLLAR_LBRACE;
	v->a[9419] = actions(69);
	small_parse_table_471(v);
}

void	small_parse_table_471(t_small_parse_table_array *v)
{
	v->a[9420] = 1;
	v->a[9421] = anon_sym_DOLLAR_LPAREN;
	v->a[9422] = actions(71);
	v->a[9423] = 1;
	v->a[9424] = anon_sym_BQUOTE;
	v->a[9425] = actions(73);
	v->a[9426] = 1;
	v->a[9427] = sym_file_descriptor;
	v->a[9428] = actions(75);
	v->a[9429] = 1;
	v->a[9430] = sym_variable_name;
	v->a[9431] = actions(234);
	v->a[9432] = 1;
	v->a[9433] = sym_word;
	v->a[9434] = actions(236);
	v->a[9435] = 1;
	v->a[9436] = anon_sym_BANG;
	v->a[9437] = state(129);
	v->a[9438] = 1;
	v->a[9439] = aux_sym__statements_repeat1;
	small_parse_table_472(v);
}

void	small_parse_table_472(t_small_parse_table_array *v)
{
	v->a[9440] = state(189);
	v->a[9441] = 1;
	v->a[9442] = sym_command_name;
	v->a[9443] = state(244);
	v->a[9444] = 1;
	v->a[9445] = sym_variable_assignment;
	v->a[9446] = state(624);
	v->a[9447] = 1;
	v->a[9448] = sym_concatenation;
	v->a[9449] = state(672);
	v->a[9450] = 1;
	v->a[9451] = aux_sym_command_repeat1;
	v->a[9452] = state(787);
	v->a[9453] = 1;
	v->a[9454] = sym_file_redirect;
	v->a[9455] = state(1176);
	v->a[9456] = 1;
	v->a[9457] = sym_pipeline;
	v->a[9458] = state(1207);
	v->a[9459] = 1;
	small_parse_table_473(v);
}

void	small_parse_table_473(t_small_parse_table_array *v)
{
	v->a[9460] = aux_sym_redirected_statement_repeat2;
	v->a[9461] = state(2116);
	v->a[9462] = 1;
	v->a[9463] = sym__statement_not_pipeline;
	v->a[9464] = state(2201);
	v->a[9465] = 1;
	v->a[9466] = sym__statements;
	v->a[9467] = actions(11);
	v->a[9468] = 2;
	v->a[9469] = anon_sym_while;
	v->a[9470] = anon_sym_until;
	v->a[9471] = actions(57);
	v->a[9472] = 2;
	v->a[9473] = anon_sym_LT_AMP_DASH;
	v->a[9474] = anon_sym_GT_AMP_DASH;
	v->a[9475] = actions(65);
	v->a[9476] = 2;
	v->a[9477] = sym_raw_string;
	v->a[9478] = sym_number;
	v->a[9479] = state(420);
	small_parse_table_474(v);
}

void	small_parse_table_474(t_small_parse_table_array *v)
{
	v->a[9480] = 5;
	v->a[9481] = sym_arithmetic_expansion;
	v->a[9482] = sym_string;
	v->a[9483] = sym_simple_expansion;
	v->a[9484] = sym_expansion;
	v->a[9485] = sym_command_substitution;
	v->a[9486] = actions(55);
	v->a[9487] = 8;
	v->a[9488] = anon_sym_LT;
	v->a[9489] = anon_sym_GT;
	v->a[9490] = anon_sym_GT_GT;
	v->a[9491] = anon_sym_AMP_GT;
	v->a[9492] = anon_sym_AMP_GT_GT;
	v->a[9493] = anon_sym_LT_AMP;
	v->a[9494] = anon_sym_GT_AMP;
	v->a[9495] = anon_sym_GT_PIPE;
	v->a[9496] = state(1057);
	v->a[9497] = 12;
	v->a[9498] = sym_redirected_statement;
	v->a[9499] = sym_for_statement;
	small_parse_table_475(v);
}

/* EOF small_parse_table_94.c */
