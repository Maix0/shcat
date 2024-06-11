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
	v->a[27500] = anon_sym_GT;
	v->a[27501] = anon_sym_GT_GT;
	v->a[27502] = anon_sym_AMP_GT;
	v->a[27503] = anon_sym_AMP_GT_GT;
	v->a[27504] = anon_sym_LT_AMP;
	v->a[27505] = anon_sym_GT_AMP;
	v->a[27506] = anon_sym_GT_PIPE;
	v->a[27507] = anon_sym_LT_AMP_DASH;
	v->a[27508] = anon_sym_GT_AMP_DASH;
	v->a[27509] = anon_sym_LT_LT;
	v->a[27510] = anon_sym_LT_LT_DASH;
	v->a[27511] = aux_sym_heredoc_redirect_token1;
	v->a[27512] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27513] = anon_sym_AMP;
	v->a[27514] = anon_sym_DOLLAR;
	v->a[27515] = anon_sym_DQUOTE;
	v->a[27516] = sym_raw_string;
	v->a[27517] = sym_number;
	v->a[27518] = anon_sym_DOLLAR_LBRACE;
	v->a[27519] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1376(v);
}

void	small_parse_table_1376(t_small_parse_table_array *v)
{
	v->a[27520] = anon_sym_BQUOTE;
	v->a[27521] = sym_word;
	v->a[27522] = anon_sym_SEMI;
	v->a[27523] = 11;
	v->a[27524] = actions(3);
	v->a[27525] = 1;
	v->a[27526] = sym_comment;
	v->a[27527] = actions(713);
	v->a[27528] = 1;
	v->a[27529] = sym_file_descriptor;
	v->a[27530] = actions(824);
	v->a[27531] = 1;
	v->a[27532] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27533] = actions(826);
	v->a[27534] = 1;
	v->a[27535] = anon_sym_DOLLAR;
	v->a[27536] = actions(828);
	v->a[27537] = 1;
	v->a[27538] = anon_sym_DQUOTE;
	v->a[27539] = actions(830);
	small_parse_table_1377(v);
}

void	small_parse_table_1377(t_small_parse_table_array *v)
{
	v->a[27540] = 1;
	v->a[27541] = anon_sym_DOLLAR_LBRACE;
	v->a[27542] = actions(832);
	v->a[27543] = 1;
	v->a[27544] = anon_sym_DOLLAR_LPAREN;
	v->a[27545] = state(1410);
	v->a[27546] = 1;
	v->a[27547] = sym_concatenation;
	v->a[27548] = actions(1043);
	v->a[27549] = 3;
	v->a[27550] = sym_raw_string;
	v->a[27551] = sym_number;
	v->a[27552] = sym_word;
	v->a[27553] = state(1247);
	v->a[27554] = 5;
	v->a[27555] = sym_arithmetic_expansion;
	v->a[27556] = sym_string;
	v->a[27557] = sym_simple_expansion;
	v->a[27558] = sym_expansion;
	v->a[27559] = sym_command_substitution;
	small_parse_table_1378(v);
}

void	small_parse_table_1378(t_small_parse_table_array *v)
{
	v->a[27560] = actions(715);
	v->a[27561] = 20;
	v->a[27562] = anon_sym_PIPE;
	v->a[27563] = anon_sym_SEMI_SEMI;
	v->a[27564] = anon_sym_AMP_AMP;
	v->a[27565] = anon_sym_PIPE_PIPE;
	v->a[27566] = anon_sym_LT;
	v->a[27567] = anon_sym_GT;
	v->a[27568] = anon_sym_GT_GT;
	v->a[27569] = anon_sym_AMP_GT;
	v->a[27570] = anon_sym_AMP_GT_GT;
	v->a[27571] = anon_sym_LT_AMP;
	v->a[27572] = anon_sym_GT_AMP;
	v->a[27573] = anon_sym_GT_PIPE;
	v->a[27574] = anon_sym_LT_AMP_DASH;
	v->a[27575] = anon_sym_GT_AMP_DASH;
	v->a[27576] = anon_sym_LT_LT;
	v->a[27577] = anon_sym_LT_LT_DASH;
	v->a[27578] = aux_sym_heredoc_redirect_token1;
	v->a[27579] = anon_sym_AMP;
	small_parse_table_1379(v);
}

void	small_parse_table_1379(t_small_parse_table_array *v)
{
	v->a[27580] = anon_sym_BQUOTE;
	v->a[27581] = anon_sym_SEMI;
	v->a[27582] = 6;
	v->a[27583] = actions(3);
	v->a[27584] = 1;
	v->a[27585] = sym_comment;
	v->a[27586] = actions(1045);
	v->a[27587] = 1;
	v->a[27588] = aux_sym_concatenation_token1;
	v->a[27589] = actions(1048);
	v->a[27590] = 1;
	v->a[27591] = sym__concat;
	v->a[27592] = state(293);
	v->a[27593] = 1;
	v->a[27594] = aux_sym_concatenation_repeat1;
	v->a[27595] = actions(1004);
	v->a[27596] = 3;
	v->a[27597] = sym_file_descriptor;
	v->a[27598] = sym__bare_dollar;
	v->a[27599] = ts_builtin_sym_end;
	small_parse_table_1380(v);
}

/* EOF small_parse_table_275.c */
