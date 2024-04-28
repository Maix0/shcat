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
	v->a[9401] = sym_file_descriptor;
	v->a[9402] = actions(2723);
	v->a[9403] = 1;
	v->a[9404] = sym_word;
	v->a[9405] = state(544);
	v->a[9406] = 1;
	v->a[9407] = sym_command_name;
	v->a[9408] = state(997);
	v->a[9409] = 1;
	v->a[9410] = aux_sym_command_repeat1;
	v->a[9411] = state(1267);
	v->a[9412] = 1;
	v->a[9413] = aux_sym__literal_repeat1;
	v->a[9414] = state(1376);
	v->a[9415] = 1;
	v->a[9416] = sym_concatenation;
	v->a[9417] = state(1974);
	v->a[9418] = 1;
	v->a[9419] = sym_variable_assignment;
	small_parse_table_471(v);
}

void	small_parse_table_471(t_small_parse_table_array *v)
{
	v->a[9420] = state(5026);
	v->a[9421] = 1;
	v->a[9422] = sym_command;
	v->a[9423] = state(6790);
	v->a[9424] = 1;
	v->a[9425] = sym_subscript;
	v->a[9426] = actions(322);
	v->a[9427] = 2;
	v->a[9428] = sym_raw_string;
	v->a[9429] = sym_ansi_c_string;
	v->a[9430] = actions(336);
	v->a[9431] = 2;
	v->a[9432] = anon_sym_LT_LPAREN;
	v->a[9433] = anon_sym_GT_LPAREN;
	v->a[9434] = actions(1392);
	v->a[9435] = 2;
	v->a[9436] = anon_sym_LT_AMP_DASH;
	v->a[9437] = anon_sym_GT_AMP_DASH;
	v->a[9438] = state(3581);
	v->a[9439] = 2;
	small_parse_table_472(v);
}

void	small_parse_table_472(t_small_parse_table_array *v)
{
	v->a[9440] = sym_file_redirect;
	v->a[9441] = sym_herestring_redirect;
	v->a[9442] = state(5014);
	v->a[9443] = 2;
	v->a[9444] = sym_subshell;
	v->a[9445] = sym_test_command;
	v->a[9446] = actions(1390);
	v->a[9447] = 3;
	v->a[9448] = anon_sym_GT_GT;
	v->a[9449] = anon_sym_AMP_GT_GT;
	v->a[9450] = anon_sym_GT_PIPE;
	v->a[9451] = actions(1388);
	v->a[9452] = 5;
	v->a[9453] = anon_sym_LT;
	v->a[9454] = anon_sym_GT;
	v->a[9455] = anon_sym_AMP_GT;
	v->a[9456] = anon_sym_LT_AMP;
	v->a[9457] = anon_sym_GT_AMP;
	v->a[9458] = state(1078);
	v->a[9459] = 9;
	small_parse_table_473(v);
}

void	small_parse_table_473(t_small_parse_table_array *v)
{
	v->a[9460] = sym_arithmetic_expansion;
	v->a[9461] = sym_brace_expression;
	v->a[9462] = sym_string;
	v->a[9463] = sym_translated_string;
	v->a[9464] = sym_number;
	v->a[9465] = sym_simple_expansion;
	v->a[9466] = sym_expansion;
	v->a[9467] = sym_command_substitution;
	v->a[9468] = sym_process_substitution;
	v->a[9469] = 5;
	v->a[9470] = actions(71);
	v->a[9471] = 1;
	v->a[9472] = sym_comment;
	v->a[9473] = actions(2719);
	v->a[9474] = 1;
	v->a[9475] = anon_sym_SEMI_SEMI;
	v->a[9476] = actions(2721);
	v->a[9477] = 3;
	v->a[9478] = anon_sym_RPAREN;
	v->a[9479] = anon_sym_SEMI_AMP;
	small_parse_table_474(v);
}

void	small_parse_table_474(t_small_parse_table_array *v)
{
	v->a[9480] = anon_sym_SEMI_SEMI_AMP;
	v->a[9481] = actions(2717);
	v->a[9482] = 23;
	v->a[9483] = sym_file_descriptor;
	v->a[9484] = sym_variable_name;
	v->a[9485] = sym_test_operator;
	v->a[9486] = sym__brace_start;
	v->a[9487] = anon_sym_LPAREN_LPAREN;
	v->a[9488] = anon_sym_GT_GT;
	v->a[9489] = anon_sym_LBRACE;
	v->a[9490] = anon_sym_LBRACK_LBRACK;
	v->a[9491] = anon_sym_AMP_GT_GT;
	v->a[9492] = anon_sym_GT_PIPE;
	v->a[9493] = anon_sym_LT_AMP_DASH;
	v->a[9494] = anon_sym_GT_AMP_DASH;
	v->a[9495] = anon_sym_LT_LT_LT;
	v->a[9496] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9497] = anon_sym_DOLLAR_LBRACK;
	v->a[9498] = anon_sym_DQUOTE;
	v->a[9499] = sym_raw_string;
	small_parse_table_475(v);
}

/* EOF small_parse_table_94.c */
