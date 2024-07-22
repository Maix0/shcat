/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_275.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1375(t_small_parse_table_array *v)
{
	v->a[27500] = 1;
	v->a[27501] = sym_comment;
	v->a[27502] = actions(782);
	v->a[27503] = 1;
	v->a[27504] = anon_sym_PIPE;
	v->a[27505] = actions(792);
	v->a[27506] = 1;
	v->a[27507] = sym_file_descriptor;
	v->a[27508] = actions(797);
	v->a[27509] = 1;
	v->a[27510] = anon_sym_SEMI_SEMI;
	v->a[27511] = actions(1030);
	v->a[27512] = 1;
	v->a[27513] = sym_variable_name;
	v->a[27514] = state(630);
	v->a[27515] = 1;
	v->a[27516] = sym_terminator;
	v->a[27517] = actions(786);
	v->a[27518] = 2;
	v->a[27519] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1376(v);
}

void	small_parse_table_1376(t_small_parse_table_array *v)
{
	v->a[27520] = anon_sym_SEMI;
	v->a[27521] = actions(790);
	v->a[27522] = 2;
	v->a[27523] = anon_sym_LT_LT;
	v->a[27524] = anon_sym_LT_LT_DASH;
	v->a[27525] = actions(1028);
	v->a[27526] = 2;
	v->a[27527] = anon_sym_AMP_AMP;
	v->a[27528] = anon_sym_PIPE_PIPE;
	v->a[27529] = state(1137);
	v->a[27530] = 2;
	v->a[27531] = sym_variable_assignment;
	v->a[27532] = aux_sym__variable_assignments_repeat1;
	v->a[27533] = state(1194);
	v->a[27534] = 3;
	v->a[27535] = sym_file_redirect;
	v->a[27536] = sym_heredoc_redirect;
	v->a[27537] = aux_sym_redirected_statement_repeat1;
	v->a[27538] = actions(780);
	v->a[27539] = 16;
	small_parse_table_1377(v);
}

void	small_parse_table_1377(t_small_parse_table_array *v)
{
	v->a[27540] = anon_sym_LT;
	v->a[27541] = anon_sym_GT;
	v->a[27542] = anon_sym_GT_GT;
	v->a[27543] = anon_sym_LT_AMP;
	v->a[27544] = anon_sym_GT_AMP;
	v->a[27545] = anon_sym_GT_PIPE;
	v->a[27546] = anon_sym_LT_GT;
	v->a[27547] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27548] = anon_sym_DOLLAR;
	v->a[27549] = anon_sym_DQUOTE;
	v->a[27550] = sym_raw_string;
	v->a[27551] = sym_number;
	v->a[27552] = anon_sym_DOLLAR_LBRACE;
	v->a[27553] = anon_sym_DOLLAR_LPAREN;
	v->a[27554] = anon_sym_BQUOTE;
	v->a[27555] = sym_word;
	v->a[27556] = 11;
	v->a[27557] = actions(3);
	v->a[27558] = 1;
	v->a[27559] = sym_comment;
	small_parse_table_1378(v);
}

void	small_parse_table_1378(t_small_parse_table_array *v)
{
	v->a[27560] = actions(782);
	v->a[27561] = 1;
	v->a[27562] = anon_sym_PIPE;
	v->a[27563] = actions(792);
	v->a[27564] = 1;
	v->a[27565] = sym_file_descriptor;
	v->a[27566] = actions(1030);
	v->a[27567] = 1;
	v->a[27568] = sym_variable_name;
	v->a[27569] = state(795);
	v->a[27570] = 1;
	v->a[27571] = sym_terminator;
	v->a[27572] = actions(790);
	v->a[27573] = 2;
	v->a[27574] = anon_sym_LT_LT;
	v->a[27575] = anon_sym_LT_LT_DASH;
	v->a[27576] = actions(1028);
	v->a[27577] = 2;
	v->a[27578] = anon_sym_AMP_AMP;
	v->a[27579] = anon_sym_PIPE_PIPE;
	small_parse_table_1379(v);
}

void	small_parse_table_1379(t_small_parse_table_array *v)
{
	v->a[27580] = state(1137);
	v->a[27581] = 2;
	v->a[27582] = sym_variable_assignment;
	v->a[27583] = aux_sym__variable_assignments_repeat1;
	v->a[27584] = actions(786);
	v->a[27585] = 3;
	v->a[27586] = anon_sym_SEMI_SEMI;
	v->a[27587] = aux_sym_heredoc_redirect_token1;
	v->a[27588] = anon_sym_SEMI;
	v->a[27589] = state(1194);
	v->a[27590] = 3;
	v->a[27591] = sym_file_redirect;
	v->a[27592] = sym_heredoc_redirect;
	v->a[27593] = aux_sym_redirected_statement_repeat1;
	v->a[27594] = actions(780);
	v->a[27595] = 16;
	v->a[27596] = anon_sym_LT;
	v->a[27597] = anon_sym_GT;
	v->a[27598] = anon_sym_GT_GT;
	v->a[27599] = anon_sym_LT_AMP;
	small_parse_table_1380(v);
}

/* EOF small_parse_table_275.c */
