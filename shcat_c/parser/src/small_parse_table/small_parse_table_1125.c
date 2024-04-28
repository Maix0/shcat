/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1125.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5625(t_small_parse_table_array *v)
{
	v->a[112500] = 1;
	v->a[112501] = anon_sym_RPAREN;
	v->a[112502] = actions(5831);
	v->a[112503] = 3;
	v->a[112504] = sym_variable_name;
	v->a[112505] = sym_test_operator;
	v->a[112506] = sym__brace_start;
	v->a[112507] = actions(5821);
	v->a[112508] = 9;
	v->a[112509] = anon_sym_SEMI;
	v->a[112510] = anon_sym_PIPE_PIPE;
	v->a[112511] = anon_sym_AMP_AMP;
	v->a[112512] = anon_sym_PIPE;
	v->a[112513] = anon_sym_AMP;
	v->a[112514] = anon_sym_LT_LT;
	v->a[112515] = anon_sym_SEMI_SEMI;
	v->a[112516] = anon_sym_PIPE_AMP;
	v->a[112517] = anon_sym_LT_LT_DASH;
	v->a[112518] = actions(5823);
	v->a[112519] = 11;
	small_parse_table_5626(v);
}

void	small_parse_table_5626(t_small_parse_table_array *v)
{
	v->a[112520] = anon_sym_LT;
	v->a[112521] = anon_sym_GT;
	v->a[112522] = anon_sym_GT_GT;
	v->a[112523] = anon_sym_AMP_GT;
	v->a[112524] = anon_sym_AMP_GT_GT;
	v->a[112525] = anon_sym_LT_AMP;
	v->a[112526] = anon_sym_GT_AMP;
	v->a[112527] = anon_sym_GT_PIPE;
	v->a[112528] = anon_sym_LT_AMP_DASH;
	v->a[112529] = anon_sym_GT_AMP_DASH;
	v->a[112530] = anon_sym_LT_LT_LT;
	v->a[112531] = actions(5819);
	v->a[112532] = 17;
	v->a[112533] = anon_sym_LPAREN_LPAREN;
	v->a[112534] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112535] = anon_sym_DOLLAR_LBRACK;
	v->a[112536] = anon_sym_DOLLAR;
	v->a[112537] = sym__special_character;
	v->a[112538] = anon_sym_DQUOTE;
	v->a[112539] = sym_raw_string;
	small_parse_table_5627(v);
}

void	small_parse_table_5627(t_small_parse_table_array *v)
{
	v->a[112540] = sym_ansi_c_string;
	v->a[112541] = aux_sym_number_token1;
	v->a[112542] = aux_sym_number_token2;
	v->a[112543] = anon_sym_DOLLAR_LBRACE;
	v->a[112544] = anon_sym_DOLLAR_LPAREN;
	v->a[112545] = anon_sym_BQUOTE;
	v->a[112546] = anon_sym_DOLLAR_BQUOTE;
	v->a[112547] = anon_sym_LT_LPAREN;
	v->a[112548] = anon_sym_GT_LPAREN;
	v->a[112549] = sym_word;
	v->a[112550] = 8;
	v->a[112551] = actions(3);
	v->a[112552] = 1;
	v->a[112553] = sym_comment;
	v->a[112554] = actions(5826);
	v->a[112555] = 1;
	v->a[112556] = aux_sym_heredoc_redirect_token1;
	v->a[112557] = actions(5828);
	v->a[112558] = 1;
	v->a[112559] = sym_file_descriptor;
	small_parse_table_5628(v);
}

void	small_parse_table_5628(t_small_parse_table_array *v)
{
	v->a[112560] = actions(6347);
	v->a[112561] = 1;
	v->a[112562] = anon_sym_RPAREN;
	v->a[112563] = actions(5831);
	v->a[112564] = 3;
	v->a[112565] = sym_variable_name;
	v->a[112566] = sym_test_operator;
	v->a[112567] = sym__brace_start;
	v->a[112568] = actions(5821);
	v->a[112569] = 9;
	v->a[112570] = anon_sym_SEMI;
	v->a[112571] = anon_sym_PIPE_PIPE;
	v->a[112572] = anon_sym_AMP_AMP;
	v->a[112573] = anon_sym_PIPE;
	v->a[112574] = anon_sym_AMP;
	v->a[112575] = anon_sym_LT_LT;
	v->a[112576] = anon_sym_SEMI_SEMI;
	v->a[112577] = anon_sym_PIPE_AMP;
	v->a[112578] = anon_sym_LT_LT_DASH;
	v->a[112579] = actions(5823);
	small_parse_table_5629(v);
}

void	small_parse_table_5629(t_small_parse_table_array *v)
{
	v->a[112580] = 11;
	v->a[112581] = anon_sym_LT;
	v->a[112582] = anon_sym_GT;
	v->a[112583] = anon_sym_GT_GT;
	v->a[112584] = anon_sym_AMP_GT;
	v->a[112585] = anon_sym_AMP_GT_GT;
	v->a[112586] = anon_sym_LT_AMP;
	v->a[112587] = anon_sym_GT_AMP;
	v->a[112588] = anon_sym_GT_PIPE;
	v->a[112589] = anon_sym_LT_AMP_DASH;
	v->a[112590] = anon_sym_GT_AMP_DASH;
	v->a[112591] = anon_sym_LT_LT_LT;
	v->a[112592] = actions(5819);
	v->a[112593] = 17;
	v->a[112594] = anon_sym_LPAREN_LPAREN;
	v->a[112595] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112596] = anon_sym_DOLLAR_LBRACK;
	v->a[112597] = anon_sym_DOLLAR;
	v->a[112598] = sym__special_character;
	v->a[112599] = anon_sym_DQUOTE;
	small_parse_table_5630(v);
}

/* EOF small_parse_table_1125.c */
