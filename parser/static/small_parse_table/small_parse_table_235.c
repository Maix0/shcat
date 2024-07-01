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
	v->a[23500] = anon_sym_QMARK;
	v->a[23501] = anon_sym_COLON;
	v->a[23502] = anon_sym_PLUS_PLUS2;
	v->a[23503] = anon_sym_DASH_DASH2;
	v->a[23504] = 6;
	v->a[23505] = actions(3);
	v->a[23506] = 1;
	v->a[23507] = sym_comment;
	v->a[23508] = actions(367);
	v->a[23509] = 1;
	v->a[23510] = sym_file_descriptor;
	v->a[23511] = actions(417);
	v->a[23512] = 1;
	v->a[23513] = sym_variable_name;
	v->a[23514] = actions(415);
	v->a[23515] = 2;
	v->a[23516] = aux_sym__simple_variable_name_token1;
	v->a[23517] = aux_sym__multiline_variable_name_token1;
	v->a[23518] = actions(413);
	v->a[23519] = 9;
	small_parse_table_1176(v);
}

void	small_parse_table_1176(t_small_parse_table_array *v)
{
	v->a[23520] = anon_sym_BANG;
	v->a[23521] = anon_sym_DASH;
	v->a[23522] = anon_sym_STAR;
	v->a[23523] = anon_sym_QMARK;
	v->a[23524] = anon_sym_DOLLAR;
	v->a[23525] = anon_sym_POUND;
	v->a[23526] = anon_sym_AT;
	v->a[23527] = anon_sym_0;
	v->a[23528] = anon_sym__;
	v->a[23529] = actions(361);
	v->a[23530] = 21;
	v->a[23531] = anon_sym_PIPE;
	v->a[23532] = anon_sym_AMP_AMP;
	v->a[23533] = anon_sym_PIPE_PIPE;
	v->a[23534] = anon_sym_LT;
	v->a[23535] = anon_sym_GT;
	v->a[23536] = anon_sym_GT_GT;
	v->a[23537] = anon_sym_LT_AMP;
	v->a[23538] = anon_sym_GT_AMP;
	v->a[23539] = anon_sym_GT_PIPE;
	small_parse_table_1177(v);
}

void	small_parse_table_1177(t_small_parse_table_array *v)
{
	v->a[23540] = anon_sym_LT_GT;
	v->a[23541] = anon_sym_LT_LT;
	v->a[23542] = anon_sym_LT_LT_DASH;
	v->a[23543] = aux_sym_heredoc_redirect_token1;
	v->a[23544] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23545] = anon_sym_DQUOTE;
	v->a[23546] = sym_raw_string;
	v->a[23547] = sym_number;
	v->a[23548] = anon_sym_DOLLAR_LBRACE;
	v->a[23549] = anon_sym_DOLLAR_LPAREN;
	v->a[23550] = anon_sym_BQUOTE;
	v->a[23551] = sym_word;
	v->a[23552] = 12;
	v->a[23553] = actions(3);
	v->a[23554] = 1;
	v->a[23555] = sym_comment;
	v->a[23556] = actions(736);
	v->a[23557] = 1;
	v->a[23558] = anon_sym_PIPE;
	v->a[23559] = actions(746);
	small_parse_table_1178(v);
}

void	small_parse_table_1178(t_small_parse_table_array *v)
{
	v->a[23560] = 1;
	v->a[23561] = sym_file_descriptor;
	v->a[23562] = actions(761);
	v->a[23563] = 1;
	v->a[23564] = sym_variable_name;
	v->a[23565] = state(647);
	v->a[23566] = 1;
	v->a[23567] = sym_terminator;
	v->a[23568] = actions(755);
	v->a[23569] = 2;
	v->a[23570] = anon_sym_AMP_AMP;
	v->a[23571] = anon_sym_PIPE_PIPE;
	v->a[23572] = actions(757);
	v->a[23573] = 2;
	v->a[23574] = anon_sym_LT_LT;
	v->a[23575] = anon_sym_LT_LT_DASH;
	v->a[23576] = actions(842);
	v->a[23577] = 2;
	v->a[23578] = anon_sym_esac;
	v->a[23579] = anon_sym_SEMI_SEMI;
	small_parse_table_1179(v);
}

void	small_parse_table_1179(t_small_parse_table_array *v)
{
	v->a[23580] = state(1040);
	v->a[23581] = 2;
	v->a[23582] = sym_variable_assignment;
	v->a[23583] = aux_sym__variable_assignments_repeat1;
	v->a[23584] = actions(759);
	v->a[23585] = 3;
	v->a[23586] = aux_sym_heredoc_redirect_token1;
	v->a[23587] = anon_sym_AMP;
	v->a[23588] = anon_sym_SEMI;
	v->a[23589] = state(1094);
	v->a[23590] = 3;
	v->a[23591] = sym_file_redirect;
	v->a[23592] = sym_heredoc_redirect;
	v->a[23593] = aux_sym_redirected_statement_repeat1;
	v->a[23594] = actions(734);
	v->a[23595] = 16;
	v->a[23596] = anon_sym_LT;
	v->a[23597] = anon_sym_GT;
	v->a[23598] = anon_sym_GT_GT;
	v->a[23599] = anon_sym_LT_AMP;
	small_parse_table_1180(v);
}

/* EOF small_parse_table_235.c */
