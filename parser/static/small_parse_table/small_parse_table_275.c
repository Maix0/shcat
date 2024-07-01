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
	v->a[27501] = sym__heredoc_pipeline;
	v->a[27502] = actions(884);
	v->a[27503] = 2;
	v->a[27504] = anon_sym_PIPE;
	v->a[27505] = anon_sym_PIPE_AMP;
	v->a[27506] = actions(886);
	v->a[27507] = 2;
	v->a[27508] = anon_sym_AMP_AMP;
	v->a[27509] = anon_sym_PIPE_PIPE;
	v->a[27510] = actions(890);
	v->a[27511] = 2;
	v->a[27512] = anon_sym_LT_AMP_DASH;
	v->a[27513] = anon_sym_GT_AMP_DASH;
	v->a[27514] = state(1607);
	v->a[27515] = 2;
	v->a[27516] = sym_file_redirect;
	v->a[27517] = aux_sym_redirected_statement_repeat2;
	v->a[27518] = actions(882);
	v->a[27519] = 3;
	small_parse_table_1376(v);
}

void	small_parse_table_1376(t_small_parse_table_array *v)
{
	v->a[27520] = sym_raw_string;
	v->a[27521] = sym_number;
	v->a[27522] = sym_word;
	v->a[27523] = state(1774);
	v->a[27524] = 5;
	v->a[27525] = sym_arithmetic_expansion;
	v->a[27526] = sym_string;
	v->a[27527] = sym_simple_expansion;
	v->a[27528] = sym_expansion;
	v->a[27529] = sym_command_substitution;
	v->a[27530] = actions(888);
	v->a[27531] = 6;
	v->a[27532] = anon_sym_LT;
	v->a[27533] = anon_sym_GT;
	v->a[27534] = anon_sym_GT_GT;
	v->a[27535] = anon_sym_LT_AMP;
	v->a[27536] = anon_sym_GT_AMP;
	v->a[27537] = anon_sym_GT_PIPE;
	v->a[27538] = 10;
	v->a[27539] = actions(870);
	small_parse_table_1377(v);
}

void	small_parse_table_1377(t_small_parse_table_array *v)
{
	v->a[27540] = 1;
	v->a[27541] = sym_comment;
	v->a[27542] = actions(850);
	v->a[27543] = 2;
	v->a[27544] = anon_sym_LT;
	v->a[27545] = anon_sym_GT;
	v->a[27546] = actions(852);
	v->a[27547] = 2;
	v->a[27548] = anon_sym_GT_GT;
	v->a[27549] = anon_sym_LT_LT;
	v->a[27550] = actions(860);
	v->a[27551] = 2;
	v->a[27552] = anon_sym_EQ_EQ;
	v->a[27553] = anon_sym_BANG_EQ;
	v->a[27554] = actions(862);
	v->a[27555] = 2;
	v->a[27556] = anon_sym_LT_EQ;
	v->a[27557] = anon_sym_GT_EQ;
	v->a[27558] = actions(864);
	v->a[27559] = 2;
	small_parse_table_1378(v);
}

void	small_parse_table_1378(t_small_parse_table_array *v)
{
	v->a[27560] = anon_sym_PLUS;
	v->a[27561] = anon_sym_DASH;
	v->a[27562] = actions(868);
	v->a[27563] = 2;
	v->a[27564] = anon_sym_PLUS_PLUS2;
	v->a[27565] = anon_sym_DASH_DASH2;
	v->a[27566] = actions(866);
	v->a[27567] = 3;
	v->a[27568] = anon_sym_STAR;
	v->a[27569] = anon_sym_SLASH;
	v->a[27570] = anon_sym_PERCENT;
	v->a[27571] = actions(872);
	v->a[27572] = 4;
	v->a[27573] = anon_sym_PIPE;
	v->a[27574] = anon_sym_EQ;
	v->a[27575] = anon_sym_CARET;
	v->a[27576] = anon_sym_AMP;
	v->a[27577] = actions(874);
	v->a[27578] = 15;
	v->a[27579] = anon_sym_AMP_AMP;
	small_parse_table_1379(v);
}

void	small_parse_table_1379(t_small_parse_table_array *v)
{
	v->a[27580] = anon_sym_PIPE_PIPE;
	v->a[27581] = anon_sym_RPAREN_RPAREN;
	v->a[27582] = anon_sym_PLUS_EQ;
	v->a[27583] = anon_sym_DASH_EQ;
	v->a[27584] = anon_sym_STAR_EQ;
	v->a[27585] = anon_sym_SLASH_EQ;
	v->a[27586] = anon_sym_PERCENT_EQ;
	v->a[27587] = anon_sym_LT_LT_EQ;
	v->a[27588] = anon_sym_GT_GT_EQ;
	v->a[27589] = anon_sym_AMP_EQ;
	v->a[27590] = anon_sym_CARET_EQ;
	v->a[27591] = anon_sym_PIPE_EQ;
	v->a[27592] = anon_sym_QMARK;
	v->a[27593] = anon_sym_COLON;
	v->a[27594] = 11;
	v->a[27595] = actions(3);
	v->a[27596] = 1;
	v->a[27597] = sym_comment;
	v->a[27598] = actions(682);
	v->a[27599] = 1;
	small_parse_table_1380(v);
}

/* EOF small_parse_table_275.c */
