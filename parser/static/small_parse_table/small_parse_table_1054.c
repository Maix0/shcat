/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1054.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5270(t_small_parse_table_array *v)
{
	v->a[105400] = sym_string;
	v->a[105401] = sym_number;
	v->a[105402] = sym_simple_expansion;
	v->a[105403] = sym_expansion;
	v->a[105404] = sym_command_substitution;
	v->a[105405] = 17;
	v->a[105406] = actions(57);
	v->a[105407] = 1;
	v->a[105408] = sym_comment;
	v->a[105409] = actions(2460);
	v->a[105410] = 1;
	v->a[105411] = anon_sym_DOLLAR;
	v->a[105412] = actions(2466);
	v->a[105413] = 1;
	v->a[105414] = aux_sym_number_token1;
	v->a[105415] = actions(2468);
	v->a[105416] = 1;
	v->a[105417] = aux_sym_number_token2;
	v->a[105418] = actions(2472);
	v->a[105419] = 1;
	small_parse_table_5271(v);
}

void	small_parse_table_5271(t_small_parse_table_array *v)
{
	v->a[105420] = anon_sym_DOLLAR_LPAREN;
	v->a[105421] = actions(2482);
	v->a[105422] = 1;
	v->a[105423] = sym__brace_start;
	v->a[105424] = actions(5066);
	v->a[105425] = 1;
	v->a[105426] = sym_word;
	v->a[105427] = actions(6051);
	v->a[105428] = 1;
	v->a[105429] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105430] = actions(6053);
	v->a[105431] = 1;
	v->a[105432] = sym__special_character;
	v->a[105433] = actions(6055);
	v->a[105434] = 1;
	v->a[105435] = anon_sym_DQUOTE;
	v->a[105436] = actions(6057);
	v->a[105437] = 1;
	v->a[105438] = anon_sym_DOLLAR_LBRACE;
	v->a[105439] = actions(6059);
	small_parse_table_5272(v);
}

void	small_parse_table_5272(t_small_parse_table_array *v)
{
	v->a[105440] = 1;
	v->a[105441] = anon_sym_BQUOTE;
	v->a[105442] = actions(6061);
	v->a[105443] = 1;
	v->a[105444] = anon_sym_DOLLAR_BQUOTE;
	v->a[105445] = state(2666);
	v->a[105446] = 1;
	v->a[105447] = aux_sym__literal_repeat1;
	v->a[105448] = actions(5074);
	v->a[105449] = 2;
	v->a[105450] = sym_test_operator;
	v->a[105451] = sym_raw_string;
	v->a[105452] = state(1861);
	v->a[105453] = 2;
	v->a[105454] = sym_concatenation;
	v->a[105455] = aux_sym_for_statement_repeat1;
	v->a[105456] = state(2609);
	v->a[105457] = 7;
	v->a[105458] = sym_arithmetic_expansion;
	v->a[105459] = sym_brace_expression;
	small_parse_table_5273(v);
}

void	small_parse_table_5273(t_small_parse_table_array *v)
{
	v->a[105460] = sym_string;
	v->a[105461] = sym_number;
	v->a[105462] = sym_simple_expansion;
	v->a[105463] = sym_expansion;
	v->a[105464] = sym_command_substitution;
	v->a[105465] = 3;
	v->a[105466] = actions(3);
	v->a[105467] = 1;
	v->a[105468] = sym_comment;
	v->a[105469] = actions(6049);
	v->a[105470] = 3;
	v->a[105471] = sym_file_descriptor;
	v->a[105472] = ts_builtin_sym_end;
	v->a[105473] = aux_sym_heredoc_redirect_token1;
	v->a[105474] = actions(6047);
	v->a[105475] = 21;
	v->a[105476] = anon_sym_PIPE;
	v->a[105477] = anon_sym_RPAREN;
	v->a[105478] = anon_sym_SEMI_SEMI;
	v->a[105479] = anon_sym_PIPE_AMP;
	small_parse_table_5274(v);
}

void	small_parse_table_5274(t_small_parse_table_array *v)
{
	v->a[105480] = anon_sym_AMP_AMP;
	v->a[105481] = anon_sym_PIPE_PIPE;
	v->a[105482] = anon_sym_LT;
	v->a[105483] = anon_sym_GT;
	v->a[105484] = anon_sym_GT_GT;
	v->a[105485] = anon_sym_AMP_GT;
	v->a[105486] = anon_sym_AMP_GT_GT;
	v->a[105487] = anon_sym_LT_AMP;
	v->a[105488] = anon_sym_GT_AMP;
	v->a[105489] = anon_sym_GT_PIPE;
	v->a[105490] = anon_sym_LT_AMP_DASH;
	v->a[105491] = anon_sym_GT_AMP_DASH;
	v->a[105492] = anon_sym_LT_LT;
	v->a[105493] = anon_sym_LT_LT_DASH;
	v->a[105494] = anon_sym_AMP;
	v->a[105495] = anon_sym_BQUOTE;
	v->a[105496] = anon_sym_SEMI;
	v->a[105497] = 17;
	v->a[105498] = actions(57);
	v->a[105499] = 1;
	small_parse_table_5275(v);
}

/* EOF small_parse_table_1054.c */
