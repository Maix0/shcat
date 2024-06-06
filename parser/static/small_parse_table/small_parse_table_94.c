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
	v->a[9400] = actions(2058);
	v->a[9401] = 1;
	v->a[9402] = anon_sym_DOLLAR;
	v->a[9403] = actions(2061);
	v->a[9404] = 1;
	v->a[9405] = sym__special_character;
	v->a[9406] = actions(2064);
	v->a[9407] = 1;
	v->a[9408] = anon_sym_DQUOTE;
	v->a[9409] = actions(2067);
	v->a[9410] = 1;
	v->a[9411] = aux_sym_number_token1;
	v->a[9412] = actions(2070);
	v->a[9413] = 1;
	v->a[9414] = aux_sym_number_token2;
	v->a[9415] = actions(2073);
	v->a[9416] = 1;
	v->a[9417] = anon_sym_DOLLAR_LBRACE;
	v->a[9418] = actions(2076);
	v->a[9419] = 1;
	small_parse_table_471(v);
}

void	small_parse_table_471(t_small_parse_table_array *v)
{
	v->a[9420] = anon_sym_DOLLAR_LPAREN;
	v->a[9421] = actions(2079);
	v->a[9422] = 1;
	v->a[9423] = anon_sym_BQUOTE;
	v->a[9424] = actions(2082);
	v->a[9425] = 1;
	v->a[9426] = anon_sym_DOLLAR_BQUOTE;
	v->a[9427] = actions(2085);
	v->a[9428] = 1;
	v->a[9429] = aux_sym__simple_variable_name_token1;
	v->a[9430] = actions(2088);
	v->a[9431] = 1;
	v->a[9432] = sym_test_operator;
	v->a[9433] = actions(2091);
	v->a[9434] = 1;
	v->a[9435] = sym__brace_start;
	v->a[9436] = state(1219);
	v->a[9437] = 1;
	v->a[9438] = aux_sym__literal_repeat1;
	v->a[9439] = actions(966);
	small_parse_table_472(v);
}

void	small_parse_table_472(t_small_parse_table_array *v)
{
	v->a[9440] = 2;
	v->a[9441] = sym_file_descriptor;
	v->a[9442] = aux_sym_heredoc_redirect_token1;
	v->a[9443] = actions(2052);
	v->a[9444] = 2;
	v->a[9445] = sym_raw_string;
	v->a[9446] = sym_word;
	v->a[9447] = state(379);
	v->a[9448] = 2;
	v->a[9449] = sym_concatenation;
	v->a[9450] = aux_sym_unset_command_repeat1;
	v->a[9451] = state(920);
	v->a[9452] = 7;
	v->a[9453] = sym_arithmetic_expansion;
	v->a[9454] = sym_brace_expression;
	v->a[9455] = sym_string;
	v->a[9456] = sym_number;
	v->a[9457] = sym_simple_expansion;
	v->a[9458] = sym_expansion;
	v->a[9459] = sym_command_substitution;
	small_parse_table_473(v);
}

void	small_parse_table_473(t_small_parse_table_array *v)
{
	v->a[9460] = actions(964);
	v->a[9461] = 20;
	v->a[9462] = anon_sym_PIPE;
	v->a[9463] = anon_sym_RPAREN;
	v->a[9464] = anon_sym_SEMI_SEMI;
	v->a[9465] = anon_sym_PIPE_AMP;
	v->a[9466] = anon_sym_AMP_AMP;
	v->a[9467] = anon_sym_PIPE_PIPE;
	v->a[9468] = anon_sym_LT;
	v->a[9469] = anon_sym_GT;
	v->a[9470] = anon_sym_GT_GT;
	v->a[9471] = anon_sym_AMP_GT;
	v->a[9472] = anon_sym_AMP_GT_GT;
	v->a[9473] = anon_sym_LT_AMP;
	v->a[9474] = anon_sym_GT_AMP;
	v->a[9475] = anon_sym_GT_PIPE;
	v->a[9476] = anon_sym_LT_AMP_DASH;
	v->a[9477] = anon_sym_GT_AMP_DASH;
	v->a[9478] = anon_sym_LT_LT;
	v->a[9479] = anon_sym_LT_LT_DASH;
	small_parse_table_474(v);
}

void	small_parse_table_474(t_small_parse_table_array *v)
{
	v->a[9480] = anon_sym_AMP;
	v->a[9481] = anon_sym_SEMI;
	v->a[9482] = 6;
	v->a[9483] = actions(3);
	v->a[9484] = 1;
	v->a[9485] = sym_comment;
	v->a[9486] = actions(2098);
	v->a[9487] = 1;
	v->a[9488] = sym_variable_name;
	v->a[9489] = actions(2096);
	v->a[9490] = 2;
	v->a[9491] = aux_sym__simple_variable_name_token1;
	v->a[9492] = aux_sym__multiline_variable_name_token1;
	v->a[9493] = actions(816);
	v->a[9494] = 4;
	v->a[9495] = sym_file_descriptor;
	v->a[9496] = sym_test_operator;
	v->a[9497] = sym__brace_start;
	v->a[9498] = ts_builtin_sym_end;
	v->a[9499] = actions(2094);
	small_parse_table_475(v);
}

/* EOF small_parse_table_94.c */
