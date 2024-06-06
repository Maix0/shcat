/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_135.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_675(t_small_parse_table_array *v)
{
	v->a[13500] = 1;
	v->a[13501] = sym_concatenation;
	v->a[13502] = actions(1530);
	v->a[13503] = 2;
	v->a[13504] = sym_file_descriptor;
	v->a[13505] = aux_sym_heredoc_redirect_token1;
	v->a[13506] = actions(2415);
	v->a[13507] = 2;
	v->a[13508] = sym_raw_string;
	v->a[13509] = sym_word;
	v->a[13510] = state(2068);
	v->a[13511] = 7;
	v->a[13512] = sym_arithmetic_expansion;
	v->a[13513] = sym_brace_expression;
	v->a[13514] = sym_string;
	v->a[13515] = sym_number;
	v->a[13516] = sym_simple_expansion;
	v->a[13517] = sym_expansion;
	v->a[13518] = sym_command_substitution;
	v->a[13519] = actions(1528);
	small_parse_table_676(v);
}

void	small_parse_table_676(t_small_parse_table_array *v)
{
	v->a[13520] = 20;
	v->a[13521] = anon_sym_PIPE;
	v->a[13522] = anon_sym_RPAREN;
	v->a[13523] = anon_sym_SEMI_SEMI;
	v->a[13524] = anon_sym_PIPE_AMP;
	v->a[13525] = anon_sym_AMP_AMP;
	v->a[13526] = anon_sym_PIPE_PIPE;
	v->a[13527] = anon_sym_LT;
	v->a[13528] = anon_sym_GT;
	v->a[13529] = anon_sym_GT_GT;
	v->a[13530] = anon_sym_AMP_GT;
	v->a[13531] = anon_sym_AMP_GT_GT;
	v->a[13532] = anon_sym_LT_AMP;
	v->a[13533] = anon_sym_GT_AMP;
	v->a[13534] = anon_sym_GT_PIPE;
	v->a[13535] = anon_sym_LT_AMP_DASH;
	v->a[13536] = anon_sym_GT_AMP_DASH;
	v->a[13537] = anon_sym_LT_LT;
	v->a[13538] = anon_sym_LT_LT_DASH;
	v->a[13539] = anon_sym_AMP;
	small_parse_table_677(v);
}

void	small_parse_table_677(t_small_parse_table_array *v)
{
	v->a[13540] = anon_sym_SEMI;
	v->a[13541] = 23;
	v->a[13542] = actions(3);
	v->a[13543] = 1;
	v->a[13544] = sym_comment;
	v->a[13545] = actions(1146);
	v->a[13546] = 1;
	v->a[13547] = anon_sym_LPAREN;
	v->a[13548] = actions(1252);
	v->a[13549] = 1;
	v->a[13550] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13551] = actions(1254);
	v->a[13552] = 1;
	v->a[13553] = anon_sym_DOLLAR;
	v->a[13554] = actions(1258);
	v->a[13555] = 1;
	v->a[13556] = anon_sym_DQUOTE;
	v->a[13557] = actions(1260);
	v->a[13558] = 1;
	v->a[13559] = aux_sym_number_token1;
	small_parse_table_678(v);
}

void	small_parse_table_678(t_small_parse_table_array *v)
{
	v->a[13560] = actions(1262);
	v->a[13561] = 1;
	v->a[13562] = aux_sym_number_token2;
	v->a[13563] = actions(1264);
	v->a[13564] = 1;
	v->a[13565] = anon_sym_DOLLAR_LBRACE;
	v->a[13566] = actions(1266);
	v->a[13567] = 1;
	v->a[13568] = anon_sym_DOLLAR_LPAREN;
	v->a[13569] = actions(1268);
	v->a[13570] = 1;
	v->a[13571] = anon_sym_BQUOTE;
	v->a[13572] = actions(1270);
	v->a[13573] = 1;
	v->a[13574] = anon_sym_DOLLAR_BQUOTE;
	v->a[13575] = actions(1274);
	v->a[13576] = 1;
	v->a[13577] = sym__bare_dollar;
	v->a[13578] = actions(1276);
	v->a[13579] = 1;
	small_parse_table_679(v);
}

void	small_parse_table_679(t_small_parse_table_array *v)
{
	v->a[13580] = sym__brace_start;
	v->a[13581] = actions(2380);
	v->a[13582] = 1;
	v->a[13583] = sym__special_character;
	v->a[13584] = actions(2382);
	v->a[13585] = 1;
	v->a[13586] = sym_test_operator;
	v->a[13587] = state(477);
	v->a[13588] = 1;
	v->a[13589] = aux_sym_command_repeat2;
	v->a[13590] = state(1232);
	v->a[13591] = 1;
	v->a[13592] = aux_sym__literal_repeat1;
	v->a[13593] = state(1293);
	v->a[13594] = 1;
	v->a[13595] = sym_concatenation;
	v->a[13596] = state(2297);
	v->a[13597] = 1;
	v->a[13598] = sym_subshell;
	v->a[13599] = actions(759);
	small_parse_table_680(v);
}

/* EOF small_parse_table_135.c */
