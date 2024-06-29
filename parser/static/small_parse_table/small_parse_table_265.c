/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_265.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1325(t_small_parse_table_array *v)
{
	v->a[26500] = anon_sym_DQUOTE;
	v->a[26501] = actions(865);
	v->a[26502] = 1;
	v->a[26503] = anon_sym_DOLLAR_LBRACE;
	v->a[26504] = actions(867);
	v->a[26505] = 1;
	v->a[26506] = anon_sym_DOLLAR_LPAREN;
	v->a[26507] = actions(869);
	v->a[26508] = 1;
	v->a[26509] = anon_sym_BQUOTE;
	v->a[26510] = actions(871);
	v->a[26511] = 1;
	v->a[26512] = sym_file_descriptor;
	v->a[26513] = actions(943);
	v->a[26514] = 1;
	v->a[26515] = aux_sym_heredoc_redirect_token1;
	v->a[26516] = state(1475);
	v->a[26517] = 1;
	v->a[26518] = aux_sym__heredoc_command;
	v->a[26519] = state(1953);
	small_parse_table_1326(v);
}

void	small_parse_table_1326(t_small_parse_table_array *v)
{
	v->a[26520] = 1;
	v->a[26521] = sym_concatenation;
	v->a[26522] = state(2178);
	v->a[26523] = 1;
	v->a[26524] = sym__heredoc_expression;
	v->a[26525] = state(2179);
	v->a[26526] = 1;
	v->a[26527] = sym__heredoc_pipeline;
	v->a[26528] = actions(849);
	v->a[26529] = 2;
	v->a[26530] = anon_sym_PIPE;
	v->a[26531] = anon_sym_PIPE_AMP;
	v->a[26532] = actions(851);
	v->a[26533] = 2;
	v->a[26534] = anon_sym_AMP_AMP;
	v->a[26535] = anon_sym_PIPE_PIPE;
	v->a[26536] = actions(855);
	v->a[26537] = 2;
	v->a[26538] = anon_sym_LT_AMP_DASH;
	v->a[26539] = anon_sym_GT_AMP_DASH;
	small_parse_table_1327(v);
}

void	small_parse_table_1327(t_small_parse_table_array *v)
{
	v->a[26540] = state(1480);
	v->a[26541] = 2;
	v->a[26542] = sym_file_redirect;
	v->a[26543] = aux_sym_redirected_statement_repeat2;
	v->a[26544] = actions(847);
	v->a[26545] = 3;
	v->a[26546] = sym_raw_string;
	v->a[26547] = sym_number;
	v->a[26548] = sym_word;
	v->a[26549] = state(1788);
	v->a[26550] = 5;
	v->a[26551] = sym_arithmetic_expansion;
	v->a[26552] = sym_string;
	v->a[26553] = sym_simple_expansion;
	v->a[26554] = sym_expansion;
	v->a[26555] = sym_command_substitution;
	v->a[26556] = actions(853);
	v->a[26557] = 8;
	v->a[26558] = anon_sym_LT;
	v->a[26559] = anon_sym_GT;
	small_parse_table_1328(v);
}

void	small_parse_table_1328(t_small_parse_table_array *v)
{
	v->a[26560] = anon_sym_GT_GT;
	v->a[26561] = anon_sym_AMP_GT;
	v->a[26562] = anon_sym_AMP_GT_GT;
	v->a[26563] = anon_sym_LT_AMP;
	v->a[26564] = anon_sym_GT_AMP;
	v->a[26565] = anon_sym_GT_PIPE;
	v->a[26566] = 20;
	v->a[26567] = actions(3);
	v->a[26568] = 1;
	v->a[26569] = sym_comment;
	v->a[26570] = actions(859);
	v->a[26571] = 1;
	v->a[26572] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26573] = actions(861);
	v->a[26574] = 1;
	v->a[26575] = anon_sym_DOLLAR;
	v->a[26576] = actions(863);
	v->a[26577] = 1;
	v->a[26578] = anon_sym_DQUOTE;
	v->a[26579] = actions(865);
	small_parse_table_1329(v);
}

void	small_parse_table_1329(t_small_parse_table_array *v)
{
	v->a[26580] = 1;
	v->a[26581] = anon_sym_DOLLAR_LBRACE;
	v->a[26582] = actions(867);
	v->a[26583] = 1;
	v->a[26584] = anon_sym_DOLLAR_LPAREN;
	v->a[26585] = actions(869);
	v->a[26586] = 1;
	v->a[26587] = anon_sym_BQUOTE;
	v->a[26588] = actions(871);
	v->a[26589] = 1;
	v->a[26590] = sym_file_descriptor;
	v->a[26591] = actions(945);
	v->a[26592] = 1;
	v->a[26593] = aux_sym_heredoc_redirect_token1;
	v->a[26594] = state(1484);
	v->a[26595] = 1;
	v->a[26596] = aux_sym__heredoc_command;
	v->a[26597] = state(1953);
	v->a[26598] = 1;
	v->a[26599] = sym_concatenation;
	small_parse_table_1330(v);
}

/* EOF small_parse_table_265.c */
