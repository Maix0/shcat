/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_675.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3375(t_small_parse_table_array *v)
{
	v->a[67500] = sym_number;
	v->a[67501] = anon_sym_DOLLAR_LBRACE;
	v->a[67502] = anon_sym_DOLLAR_LPAREN;
	v->a[67503] = anon_sym_BQUOTE;
	v->a[67504] = sym_word;
	v->a[67505] = 10;
	v->a[67506] = actions(3);
	v->a[67507] = 1;
	v->a[67508] = sym_comment;
	v->a[67509] = actions(2065);
	v->a[67510] = 1;
	v->a[67511] = sym_file_descriptor;
	v->a[67512] = actions(2187);
	v->a[67513] = 1;
	v->a[67514] = aux_sym_heredoc_redirect_token1;
	v->a[67515] = state(773);
	v->a[67516] = 1;
	v->a[67517] = sym_terminator;
	v->a[67518] = actions(754);
	v->a[67519] = 2;
	small_parse_table_3376(v);
}

void	small_parse_table_3376(t_small_parse_table_array *v)
{
	v->a[67520] = anon_sym_LT_LT;
	v->a[67521] = anon_sym_LT_LT_DASH;
	v->a[67522] = actions(924);
	v->a[67523] = 2;
	v->a[67524] = anon_sym_AMP_AMP;
	v->a[67525] = anon_sym_PIPE_PIPE;
	v->a[67526] = actions(2063);
	v->a[67527] = 2;
	v->a[67528] = anon_sym_LT_AMP_DASH;
	v->a[67529] = anon_sym_GT_AMP_DASH;
	v->a[67530] = actions(1029);
	v->a[67531] = 3;
	v->a[67532] = anon_sym_SEMI_SEMI;
	v->a[67533] = anon_sym_AMP;
	v->a[67534] = anon_sym_SEMI;
	v->a[67535] = state(1268);
	v->a[67536] = 3;
	v->a[67537] = sym_file_redirect;
	v->a[67538] = sym_heredoc_redirect;
	v->a[67539] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3377(v);
}

void	small_parse_table_3377(t_small_parse_table_array *v)
{
	v->a[67540] = actions(2061);
	v->a[67541] = 6;
	v->a[67542] = anon_sym_LT;
	v->a[67543] = anon_sym_GT;
	v->a[67544] = anon_sym_GT_GT;
	v->a[67545] = anon_sym_LT_AMP;
	v->a[67546] = anon_sym_GT_AMP;
	v->a[67547] = anon_sym_GT_PIPE;
	v->a[67548] = 3;
	v->a[67549] = actions(3);
	v->a[67550] = 1;
	v->a[67551] = sym_comment;
	v->a[67552] = actions(1555);
	v->a[67553] = 3;
	v->a[67554] = sym_file_descriptor;
	v->a[67555] = ts_builtin_sym_end;
	v->a[67556] = aux_sym_heredoc_redirect_token1;
	v->a[67557] = actions(1553);
	v->a[67558] = 18;
	v->a[67559] = anon_sym_PIPE;
	small_parse_table_3378(v);
}

void	small_parse_table_3378(t_small_parse_table_array *v)
{
	v->a[67560] = anon_sym_RPAREN;
	v->a[67561] = anon_sym_SEMI_SEMI;
	v->a[67562] = anon_sym_AMP_AMP;
	v->a[67563] = anon_sym_PIPE_PIPE;
	v->a[67564] = anon_sym_LT;
	v->a[67565] = anon_sym_GT;
	v->a[67566] = anon_sym_GT_GT;
	v->a[67567] = anon_sym_LT_AMP;
	v->a[67568] = anon_sym_GT_AMP;
	v->a[67569] = anon_sym_GT_PIPE;
	v->a[67570] = anon_sym_LT_AMP_DASH;
	v->a[67571] = anon_sym_GT_AMP_DASH;
	v->a[67572] = anon_sym_LT_LT;
	v->a[67573] = anon_sym_LT_LT_DASH;
	v->a[67574] = anon_sym_AMP;
	v->a[67575] = anon_sym_BQUOTE;
	v->a[67576] = anon_sym_SEMI;
	v->a[67577] = 5;
	v->a[67578] = actions(3);
	v->a[67579] = 1;
	small_parse_table_3379(v);
}

void	small_parse_table_3379(t_small_parse_table_array *v)
{
	v->a[67580] = sym_comment;
	v->a[67581] = actions(2236);
	v->a[67582] = 1;
	v->a[67583] = sym_variable_name;
	v->a[67584] = actions(2067);
	v->a[67585] = 2;
	v->a[67586] = sym_file_descriptor;
	v->a[67587] = aux_sym_heredoc_redirect_token1;
	v->a[67588] = state(1217);
	v->a[67589] = 2;
	v->a[67590] = sym_variable_assignment;
	v->a[67591] = aux_sym__variable_assignments_repeat1;
	v->a[67592] = actions(2069);
	v->a[67593] = 16;
	v->a[67594] = anon_sym_PIPE;
	v->a[67595] = anon_sym_SEMI_SEMI;
	v->a[67596] = anon_sym_AMP_AMP;
	v->a[67597] = anon_sym_PIPE_PIPE;
	v->a[67598] = anon_sym_LT;
	v->a[67599] = anon_sym_GT;
	small_parse_table_3380(v);
}

/* EOF small_parse_table_675.c */
