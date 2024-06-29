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
	v->a[27500] = 3;
	v->a[27501] = sym_raw_string;
	v->a[27502] = sym_number;
	v->a[27503] = sym_word;
	v->a[27504] = state(1185);
	v->a[27505] = 5;
	v->a[27506] = sym_arithmetic_expansion;
	v->a[27507] = sym_string;
	v->a[27508] = sym_simple_expansion;
	v->a[27509] = sym_expansion;
	v->a[27510] = sym_command_substitution;
	v->a[27511] = actions(756);
	v->a[27512] = 19;
	v->a[27513] = anon_sym_PIPE;
	v->a[27514] = anon_sym_SEMI_SEMI;
	v->a[27515] = anon_sym_AMP_AMP;
	v->a[27516] = anon_sym_PIPE_PIPE;
	v->a[27517] = anon_sym_LT;
	v->a[27518] = anon_sym_GT;
	v->a[27519] = anon_sym_GT_GT;
	small_parse_table_1376(v);
}

void	small_parse_table_1376(t_small_parse_table_array *v)
{
	v->a[27520] = anon_sym_AMP_GT;
	v->a[27521] = anon_sym_AMP_GT_GT;
	v->a[27522] = anon_sym_LT_AMP;
	v->a[27523] = anon_sym_GT_AMP;
	v->a[27524] = anon_sym_GT_PIPE;
	v->a[27525] = anon_sym_LT_AMP_DASH;
	v->a[27526] = anon_sym_GT_AMP_DASH;
	v->a[27527] = anon_sym_LT_LT;
	v->a[27528] = anon_sym_LT_LT_DASH;
	v->a[27529] = aux_sym_heredoc_redirect_token1;
	v->a[27530] = anon_sym_AMP;
	v->a[27531] = anon_sym_SEMI;
	v->a[27532] = 6;
	v->a[27533] = actions(3);
	v->a[27534] = 1;
	v->a[27535] = sym_comment;
	v->a[27536] = actions(1006);
	v->a[27537] = 1;
	v->a[27538] = aux_sym_concatenation_token1;
	v->a[27539] = actions(1008);
	small_parse_table_1377(v);
}

void	small_parse_table_1377(t_small_parse_table_array *v)
{
	v->a[27540] = 1;
	v->a[27541] = sym__concat;
	v->a[27542] = state(300);
	v->a[27543] = 1;
	v->a[27544] = aux_sym_concatenation_repeat1;
	v->a[27545] = actions(1000);
	v->a[27546] = 3;
	v->a[27547] = sym_file_descriptor;
	v->a[27548] = sym__bare_dollar;
	v->a[27549] = ts_builtin_sym_end;
	v->a[27550] = actions(993);
	v->a[27551] = 29;
	v->a[27552] = anon_sym_LPAREN;
	v->a[27553] = anon_sym_PIPE;
	v->a[27554] = anon_sym_SEMI_SEMI;
	v->a[27555] = anon_sym_AMP_AMP;
	v->a[27556] = anon_sym_PIPE_PIPE;
	v->a[27557] = anon_sym_LT;
	v->a[27558] = anon_sym_GT;
	v->a[27559] = anon_sym_GT_GT;
	small_parse_table_1378(v);
}

void	small_parse_table_1378(t_small_parse_table_array *v)
{
	v->a[27560] = anon_sym_AMP_GT;
	v->a[27561] = anon_sym_AMP_GT_GT;
	v->a[27562] = anon_sym_LT_AMP;
	v->a[27563] = anon_sym_GT_AMP;
	v->a[27564] = anon_sym_GT_PIPE;
	v->a[27565] = anon_sym_LT_AMP_DASH;
	v->a[27566] = anon_sym_GT_AMP_DASH;
	v->a[27567] = anon_sym_LT_LT;
	v->a[27568] = anon_sym_LT_LT_DASH;
	v->a[27569] = aux_sym_heredoc_redirect_token1;
	v->a[27570] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27571] = anon_sym_AMP;
	v->a[27572] = anon_sym_DOLLAR;
	v->a[27573] = anon_sym_DQUOTE;
	v->a[27574] = sym_raw_string;
	v->a[27575] = sym_number;
	v->a[27576] = anon_sym_DOLLAR_LBRACE;
	v->a[27577] = anon_sym_DOLLAR_LPAREN;
	v->a[27578] = anon_sym_BQUOTE;
	v->a[27579] = sym_word;
	small_parse_table_1379(v);
}

void	small_parse_table_1379(t_small_parse_table_array *v)
{
	v->a[27580] = anon_sym_SEMI;
	v->a[27581] = 7;
	v->a[27582] = actions(3);
	v->a[27583] = 1;
	v->a[27584] = sym_comment;
	v->a[27585] = actions(1006);
	v->a[27586] = 1;
	v->a[27587] = aux_sym_concatenation_token1;
	v->a[27588] = actions(1008);
	v->a[27589] = 1;
	v->a[27590] = sym__concat;
	v->a[27591] = actions(1010);
	v->a[27592] = 1;
	v->a[27593] = anon_sym_LPAREN;
	v->a[27594] = state(300);
	v->a[27595] = 1;
	v->a[27596] = aux_sym_concatenation_repeat1;
	v->a[27597] = actions(1000);
	v->a[27598] = 3;
	v->a[27599] = sym_file_descriptor;
	small_parse_table_1380(v);
}

/* EOF small_parse_table_275.c */
