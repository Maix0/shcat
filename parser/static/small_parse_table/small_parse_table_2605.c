/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2605.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13025(t_small_parse_table_array *v)
{
	v->a[260500] = anon_sym_GT_GT;
	v->a[260501] = anon_sym_SEMI_SEMI;
	v->a[260502] = anon_sym_PIPE_AMP;
	v->a[260503] = anon_sym_AMP_GT;
	v->a[260504] = anon_sym_AMP_GT_GT;
	v->a[260505] = anon_sym_LT_AMP;
	v->a[260506] = anon_sym_GT_AMP;
	v->a[260507] = anon_sym_GT_PIPE;
	v->a[260508] = anon_sym_LT_AMP_DASH;
	v->a[260509] = anon_sym_GT_AMP_DASH;
	v->a[260510] = anon_sym_LT_LT_DASH;
	v->a[260511] = 8;
	v->a[260512] = actions(3);
	v->a[260513] = 1;
	v->a[260514] = sym_comment;
	v->a[260515] = actions(11976);
	v->a[260516] = 1;
	v->a[260517] = sym_file_descriptor;
	v->a[260518] = actions(11431);
	v->a[260519] = 2;
	small_parse_table_13026(v);
}

void	small_parse_table_13026(t_small_parse_table_array *v)
{
	v->a[260520] = ts_builtin_sym_end;
	v->a[260521] = aux_sym_heredoc_redirect_token1;
	v->a[260522] = actions(11920);
	v->a[260523] = 2;
	v->a[260524] = anon_sym_LT_LT;
	v->a[260525] = anon_sym_LT_LT_DASH;
	v->a[260526] = actions(11973);
	v->a[260527] = 2;
	v->a[260528] = anon_sym_LT_AMP_DASH;
	v->a[260529] = anon_sym_GT_AMP_DASH;
	v->a[260530] = state(4734);
	v->a[260531] = 3;
	v->a[260532] = sym_file_redirect;
	v->a[260533] = sym_heredoc_redirect;
	v->a[260534] = aux_sym_redirected_statement_repeat1;
	v->a[260535] = actions(11420);
	v->a[260536] = 7;
	v->a[260537] = anon_sym_SEMI;
	v->a[260538] = anon_sym_PIPE_PIPE;
	v->a[260539] = anon_sym_AMP_AMP;
	small_parse_table_13027(v);
}

void	small_parse_table_13027(t_small_parse_table_array *v)
{
	v->a[260540] = anon_sym_PIPE;
	v->a[260541] = anon_sym_AMP;
	v->a[260542] = anon_sym_SEMI_SEMI;
	v->a[260543] = anon_sym_PIPE_AMP;
	v->a[260544] = actions(11970);
	v->a[260545] = 8;
	v->a[260546] = anon_sym_LT;
	v->a[260547] = anon_sym_GT;
	v->a[260548] = anon_sym_GT_GT;
	v->a[260549] = anon_sym_AMP_GT;
	v->a[260550] = anon_sym_AMP_GT_GT;
	v->a[260551] = anon_sym_LT_AMP;
	v->a[260552] = anon_sym_GT_AMP;
	v->a[260553] = anon_sym_GT_PIPE;
	v->a[260554] = 3;
	v->a[260555] = actions(3);
	v->a[260556] = 1;
	v->a[260557] = sym_comment;
	v->a[260558] = actions(1314);
	v->a[260559] = 4;
	small_parse_table_13028(v);
}

void	small_parse_table_13028(t_small_parse_table_array *v)
{
	v->a[260560] = sym__concat;
	v->a[260561] = sym_test_operator;
	v->a[260562] = sym__brace_start;
	v->a[260563] = aux_sym_heredoc_redirect_token1;
	v->a[260564] = actions(1312);
	v->a[260565] = 21;
	v->a[260566] = anon_sym_LPAREN_LPAREN;
	v->a[260567] = anon_sym_SEMI;
	v->a[260568] = anon_sym_AMP;
	v->a[260569] = anon_sym_SEMI_SEMI;
	v->a[260570] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[260571] = anon_sym_DOLLAR_LBRACK;
	v->a[260572] = aux_sym_concatenation_token1;
	v->a[260573] = anon_sym_DOLLAR;
	v->a[260574] = sym__special_character;
	v->a[260575] = anon_sym_DQUOTE;
	v->a[260576] = sym_raw_string;
	v->a[260577] = sym_ansi_c_string;
	v->a[260578] = aux_sym_number_token1;
	v->a[260579] = aux_sym_number_token2;
	small_parse_table_13029(v);
}

void	small_parse_table_13029(t_small_parse_table_array *v)
{
	v->a[260580] = anon_sym_DOLLAR_LBRACE;
	v->a[260581] = anon_sym_DOLLAR_LPAREN;
	v->a[260582] = anon_sym_BQUOTE;
	v->a[260583] = anon_sym_DOLLAR_BQUOTE;
	v->a[260584] = anon_sym_LT_LPAREN;
	v->a[260585] = anon_sym_GT_LPAREN;
	v->a[260586] = sym_word;
	v->a[260587] = 3;
	v->a[260588] = actions(3);
	v->a[260589] = 1;
	v->a[260590] = sym_comment;
	v->a[260591] = actions(2074);
	v->a[260592] = 3;
	v->a[260593] = sym_file_descriptor;
	v->a[260594] = ts_builtin_sym_end;
	v->a[260595] = aux_sym_heredoc_redirect_token1;
	v->a[260596] = actions(2072);
	v->a[260597] = 22;
	v->a[260598] = anon_sym_SEMI;
	v->a[260599] = anon_sym_PIPE_PIPE;
	small_parse_table_13030(v);
}

/* EOF small_parse_table_2605.c */
