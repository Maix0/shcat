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
	v->a[27500] = actions(618);
	v->a[27501] = 12;
	v->a[27502] = anon_sym_PIPE;
	v->a[27503] = anon_sym_AMP_AMP;
	v->a[27504] = anon_sym_PIPE_PIPE;
	v->a[27505] = anon_sym_LT;
	v->a[27506] = anon_sym_GT;
	v->a[27507] = anon_sym_GT_GT;
	v->a[27508] = anon_sym_LT_AMP;
	v->a[27509] = anon_sym_GT_AMP;
	v->a[27510] = anon_sym_GT_PIPE;
	v->a[27511] = anon_sym_LT_GT;
	v->a[27512] = anon_sym_LT_LT;
	v->a[27513] = anon_sym_LT_LT_DASH;
	v->a[27514] = 13;
	v->a[27515] = actions(3);
	v->a[27516] = 1;
	v->a[27517] = sym_comment;
	v->a[27518] = actions(325);
	v->a[27519] = 1;
	small_parse_table_1376(v);
}

void	small_parse_table_1376(t_small_parse_table_array *v)
{
	v->a[27520] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27521] = actions(327);
	v->a[27522] = 1;
	v->a[27523] = anon_sym_DOLLAR;
	v->a[27524] = actions(329);
	v->a[27525] = 1;
	v->a[27526] = anon_sym_DQUOTE;
	v->a[27527] = actions(333);
	v->a[27528] = 1;
	v->a[27529] = anon_sym_DOLLAR_LBRACE;
	v->a[27530] = actions(335);
	v->a[27531] = 1;
	v->a[27532] = anon_sym_DOLLAR_LPAREN;
	v->a[27533] = actions(337);
	v->a[27534] = 1;
	v->a[27535] = anon_sym_BQUOTE;
	v->a[27536] = actions(1075);
	v->a[27537] = 1;
	v->a[27538] = sym__bare_dollar;
	v->a[27539] = state(335);
	small_parse_table_1377(v);
}

void	small_parse_table_1377(t_small_parse_table_array *v)
{
	v->a[27540] = 1;
	v->a[27541] = aux_sym_command_repeat2;
	v->a[27542] = state(750);
	v->a[27543] = 1;
	v->a[27544] = sym_concatenation;
	v->a[27545] = actions(1073);
	v->a[27546] = 3;
	v->a[27547] = sym_raw_string;
	v->a[27548] = sym_number;
	v->a[27549] = sym_word;
	v->a[27550] = state(630);
	v->a[27551] = 5;
	v->a[27552] = sym_arithmetic_expansion;
	v->a[27553] = sym_string;
	v->a[27554] = sym_simple_expansion;
	v->a[27555] = sym_expansion;
	v->a[27556] = sym_command_substitution;
	v->a[27557] = actions(533);
	v->a[27558] = 12;
	v->a[27559] = anon_sym_PIPE;
	small_parse_table_1378(v);
}

void	small_parse_table_1378(t_small_parse_table_array *v)
{
	v->a[27560] = anon_sym_AMP_AMP;
	v->a[27561] = anon_sym_PIPE_PIPE;
	v->a[27562] = anon_sym_LT;
	v->a[27563] = anon_sym_GT;
	v->a[27564] = anon_sym_GT_GT;
	v->a[27565] = anon_sym_LT_AMP;
	v->a[27566] = anon_sym_GT_AMP;
	v->a[27567] = anon_sym_GT_PIPE;
	v->a[27568] = anon_sym_LT_GT;
	v->a[27569] = anon_sym_LT_LT;
	v->a[27570] = anon_sym_LT_LT_DASH;
	v->a[27571] = 11;
	v->a[27572] = actions(3);
	v->a[27573] = 1;
	v->a[27574] = sym_comment;
	v->a[27575] = actions(824);
	v->a[27576] = 1;
	v->a[27577] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27578] = actions(827);
	v->a[27579] = 1;
	small_parse_table_1379(v);
}

void	small_parse_table_1379(t_small_parse_table_array *v)
{
	v->a[27580] = anon_sym_DOLLAR;
	v->a[27581] = actions(830);
	v->a[27582] = 1;
	v->a[27583] = anon_sym_DQUOTE;
	v->a[27584] = actions(833);
	v->a[27585] = 1;
	v->a[27586] = anon_sym_DOLLAR_LBRACE;
	v->a[27587] = actions(836);
	v->a[27588] = 1;
	v->a[27589] = anon_sym_DOLLAR_LPAREN;
	v->a[27590] = actions(839);
	v->a[27591] = 1;
	v->a[27592] = anon_sym_BQUOTE;
	v->a[27593] = state(356);
	v->a[27594] = 2;
	v->a[27595] = sym_concatenation;
	v->a[27596] = aux_sym_for_statement_repeat1;
	v->a[27597] = actions(1134);
	v->a[27598] = 3;
	v->a[27599] = sym_raw_string;
	small_parse_table_1380(v);
}

/* EOF small_parse_table_275.c */
