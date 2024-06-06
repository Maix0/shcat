/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1005.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5025(t_small_parse_table_array *v)
{
	v->a[100500] = actions(5708);
	v->a[100501] = 1;
	v->a[100502] = anon_sym_DOLLAR_LPAREN;
	v->a[100503] = actions(5710);
	v->a[100504] = 1;
	v->a[100505] = anon_sym_BQUOTE;
	v->a[100506] = actions(5712);
	v->a[100507] = 1;
	v->a[100508] = anon_sym_DOLLAR_BQUOTE;
	v->a[100509] = actions(5714);
	v->a[100510] = 1;
	v->a[100511] = sym__comment_word;
	v->a[100512] = actions(5716);
	v->a[100513] = 1;
	v->a[100514] = sym__empty_value;
	v->a[100515] = actions(5718);
	v->a[100516] = 1;
	v->a[100517] = sym__brace_start;
	v->a[100518] = state(873);
	v->a[100519] = 1;
	small_parse_table_5026(v);
}

void	small_parse_table_5026(t_small_parse_table_array *v)
{
	v->a[100520] = aux_sym__literal_repeat1;
	v->a[100521] = state(1148);
	v->a[100522] = 1;
	v->a[100523] = sym_concatenation;
	v->a[100524] = actions(5700);
	v->a[100525] = 2;
	v->a[100526] = sym_test_operator;
	v->a[100527] = sym_raw_string;
	v->a[100528] = state(544);
	v->a[100529] = 7;
	v->a[100530] = sym_arithmetic_expansion;
	v->a[100531] = sym_brace_expression;
	v->a[100532] = sym_string;
	v->a[100533] = sym_number;
	v->a[100534] = sym_simple_expansion;
	v->a[100535] = sym_expansion;
	v->a[100536] = sym_command_substitution;
	v->a[100537] = 4;
	v->a[100538] = actions(3);
	v->a[100539] = 1;
	small_parse_table_5027(v);
}

void	small_parse_table_5027(t_small_parse_table_array *v)
{
	v->a[100540] = sym_comment;
	v->a[100541] = actions(2632);
	v->a[100542] = 3;
	v->a[100543] = sym_file_descriptor;
	v->a[100544] = ts_builtin_sym_end;
	v->a[100545] = aux_sym_heredoc_redirect_token1;
	v->a[100546] = state(2129);
	v->a[100547] = 3;
	v->a[100548] = sym_file_redirect;
	v->a[100549] = sym_heredoc_redirect;
	v->a[100550] = aux_sym_redirected_statement_repeat1;
	v->a[100551] = actions(2630);
	v->a[100552] = 19;
	v->a[100553] = anon_sym_PIPE;
	v->a[100554] = anon_sym_SEMI_SEMI;
	v->a[100555] = anon_sym_PIPE_AMP;
	v->a[100556] = anon_sym_AMP_AMP;
	v->a[100557] = anon_sym_PIPE_PIPE;
	v->a[100558] = anon_sym_LT;
	v->a[100559] = anon_sym_GT;
	small_parse_table_5028(v);
}

void	small_parse_table_5028(t_small_parse_table_array *v)
{
	v->a[100560] = anon_sym_GT_GT;
	v->a[100561] = anon_sym_AMP_GT;
	v->a[100562] = anon_sym_AMP_GT_GT;
	v->a[100563] = anon_sym_LT_AMP;
	v->a[100564] = anon_sym_GT_AMP;
	v->a[100565] = anon_sym_GT_PIPE;
	v->a[100566] = anon_sym_LT_AMP_DASH;
	v->a[100567] = anon_sym_GT_AMP_DASH;
	v->a[100568] = anon_sym_LT_LT;
	v->a[100569] = anon_sym_LT_LT_DASH;
	v->a[100570] = anon_sym_AMP;
	v->a[100571] = anon_sym_SEMI;
	v->a[100572] = 19;
	v->a[100573] = actions(3);
	v->a[100574] = 1;
	v->a[100575] = sym_comment;
	v->a[100576] = actions(5720);
	v->a[100577] = 1;
	v->a[100578] = sym_word;
	v->a[100579] = actions(5722);
	small_parse_table_5029(v);
}

void	small_parse_table_5029(t_small_parse_table_array *v)
{
	v->a[100580] = 1;
	v->a[100581] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100582] = actions(5724);
	v->a[100583] = 1;
	v->a[100584] = anon_sym_DOLLAR;
	v->a[100585] = actions(5726);
	v->a[100586] = 1;
	v->a[100587] = sym__special_character;
	v->a[100588] = actions(5728);
	v->a[100589] = 1;
	v->a[100590] = anon_sym_DQUOTE;
	v->a[100591] = actions(5732);
	v->a[100592] = 1;
	v->a[100593] = aux_sym_number_token1;
	v->a[100594] = actions(5734);
	v->a[100595] = 1;
	v->a[100596] = aux_sym_number_token2;
	v->a[100597] = actions(5736);
	v->a[100598] = 1;
	v->a[100599] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5030(v);
}

/* EOF small_parse_table_1005.c */
