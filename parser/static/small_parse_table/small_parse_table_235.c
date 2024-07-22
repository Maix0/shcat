/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_235.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1175(t_small_parse_table_array *v)
{
	v->a[23500] = sym_comment;
	v->a[23501] = actions(648);
	v->a[23502] = 1;
	v->a[23503] = sym_file_descriptor;
	v->a[23504] = actions(864);
	v->a[23505] = 1;
	v->a[23506] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23507] = actions(867);
	v->a[23508] = 1;
	v->a[23509] = anon_sym_DOLLAR;
	v->a[23510] = actions(870);
	v->a[23511] = 1;
	v->a[23512] = anon_sym_DQUOTE;
	v->a[23513] = actions(873);
	v->a[23514] = 1;
	v->a[23515] = anon_sym_DOLLAR_LBRACE;
	v->a[23516] = actions(876);
	v->a[23517] = 1;
	v->a[23518] = anon_sym_DOLLAR_LPAREN;
	v->a[23519] = actions(879);
	small_parse_table_1176(v);
}

void	small_parse_table_1176(t_small_parse_table_array *v)
{
	v->a[23520] = 1;
	v->a[23521] = anon_sym_BQUOTE;
	v->a[23522] = state(256);
	v->a[23523] = 2;
	v->a[23524] = sym_concatenation;
	v->a[23525] = aux_sym_for_statement_repeat1;
	v->a[23526] = actions(861);
	v->a[23527] = 3;
	v->a[23528] = sym_raw_string;
	v->a[23529] = sym_number;
	v->a[23530] = sym_word;
	v->a[23531] = state(519);
	v->a[23532] = 5;
	v->a[23533] = sym_arithmetic_expansion;
	v->a[23534] = sym_string;
	v->a[23535] = sym_simple_expansion;
	v->a[23536] = sym_expansion;
	v->a[23537] = sym_command_substitution;
	v->a[23538] = actions(628);
	v->a[23539] = 16;
	small_parse_table_1177(v);
}

void	small_parse_table_1177(t_small_parse_table_array *v)
{
	v->a[23540] = anon_sym_PIPE;
	v->a[23541] = anon_sym_RPAREN;
	v->a[23542] = anon_sym_SEMI_SEMI;
	v->a[23543] = anon_sym_AMP_AMP;
	v->a[23544] = anon_sym_PIPE_PIPE;
	v->a[23545] = anon_sym_LT;
	v->a[23546] = anon_sym_GT;
	v->a[23547] = anon_sym_GT_GT;
	v->a[23548] = anon_sym_LT_AMP;
	v->a[23549] = anon_sym_GT_AMP;
	v->a[23550] = anon_sym_GT_PIPE;
	v->a[23551] = anon_sym_LT_GT;
	v->a[23552] = anon_sym_LT_LT;
	v->a[23553] = anon_sym_LT_LT_DASH;
	v->a[23554] = aux_sym_heredoc_redirect_token1;
	v->a[23555] = anon_sym_SEMI;
	v->a[23556] = 6;
	v->a[23557] = actions(3);
	v->a[23558] = 1;
	v->a[23559] = sym_comment;
	small_parse_table_1178(v);
}

void	small_parse_table_1178(t_small_parse_table_array *v)
{
	v->a[23560] = actions(367);
	v->a[23561] = 1;
	v->a[23562] = sym_file_descriptor;
	v->a[23563] = actions(425);
	v->a[23564] = 1;
	v->a[23565] = sym_variable_name;
	v->a[23566] = actions(423);
	v->a[23567] = 2;
	v->a[23568] = aux_sym__simple_variable_name_token1;
	v->a[23569] = aux_sym__multiline_variable_name_token1;
	v->a[23570] = actions(421);
	v->a[23571] = 8;
	v->a[23572] = anon_sym_BANG;
	v->a[23573] = anon_sym_DASH;
	v->a[23574] = anon_sym_STAR;
	v->a[23575] = anon_sym_QMARK;
	v->a[23576] = anon_sym_DOLLAR;
	v->a[23577] = anon_sym_POUND;
	v->a[23578] = anon_sym_AT;
	v->a[23579] = anon_sym_0;
	small_parse_table_1179(v);
}

void	small_parse_table_1179(t_small_parse_table_array *v)
{
	v->a[23580] = actions(361);
	v->a[23581] = 21;
	v->a[23582] = anon_sym_PIPE;
	v->a[23583] = anon_sym_AMP_AMP;
	v->a[23584] = anon_sym_PIPE_PIPE;
	v->a[23585] = anon_sym_LT;
	v->a[23586] = anon_sym_GT;
	v->a[23587] = anon_sym_GT_GT;
	v->a[23588] = anon_sym_LT_AMP;
	v->a[23589] = anon_sym_GT_AMP;
	v->a[23590] = anon_sym_GT_PIPE;
	v->a[23591] = anon_sym_LT_GT;
	v->a[23592] = anon_sym_LT_LT;
	v->a[23593] = anon_sym_LT_LT_DASH;
	v->a[23594] = aux_sym_heredoc_redirect_token1;
	v->a[23595] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23596] = anon_sym_DQUOTE;
	v->a[23597] = sym_raw_string;
	v->a[23598] = sym_number;
	v->a[23599] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1180(v);
}

/* EOF small_parse_table_235.c */
