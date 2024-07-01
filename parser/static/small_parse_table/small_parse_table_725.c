/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_725.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3625(t_small_parse_table_array *v)
{
	v->a[72500] = anon_sym_GT;
	v->a[72501] = anon_sym_GT_GT;
	v->a[72502] = anon_sym_LT_AMP;
	v->a[72503] = anon_sym_GT_AMP;
	v->a[72504] = anon_sym_GT_PIPE;
	v->a[72505] = anon_sym_LT_GT;
	v->a[72506] = 6;
	v->a[72507] = actions(3);
	v->a[72508] = 1;
	v->a[72509] = sym_comment;
	v->a[72510] = actions(2852);
	v->a[72511] = 1;
	v->a[72512] = sym_string_content;
	v->a[72513] = actions(2856);
	v->a[72514] = 1;
	v->a[72515] = sym_variable_name;
	v->a[72516] = actions(2876);
	v->a[72517] = 1;
	v->a[72518] = anon_sym_DQUOTE;
	v->a[72519] = actions(2854);
	small_parse_table_3626(v);
}

void	small_parse_table_3626(t_small_parse_table_array *v)
{
	v->a[72520] = 2;
	v->a[72521] = aux_sym__simple_variable_name_token1;
	v->a[72522] = aux_sym__multiline_variable_name_token1;
	v->a[72523] = actions(2848);
	v->a[72524] = 9;
	v->a[72525] = anon_sym_BANG;
	v->a[72526] = anon_sym_DASH;
	v->a[72527] = anon_sym_STAR;
	v->a[72528] = anon_sym_QMARK;
	v->a[72529] = anon_sym_DOLLAR;
	v->a[72530] = anon_sym_POUND;
	v->a[72531] = anon_sym_AT;
	v->a[72532] = anon_sym_0;
	v->a[72533] = anon_sym__;
	v->a[72534] = 6;
	v->a[72535] = actions(3);
	v->a[72536] = 1;
	v->a[72537] = sym_comment;
	v->a[72538] = actions(2852);
	v->a[72539] = 1;
	small_parse_table_3627(v);
}

void	small_parse_table_3627(t_small_parse_table_array *v)
{
	v->a[72540] = sym_string_content;
	v->a[72541] = actions(2856);
	v->a[72542] = 1;
	v->a[72543] = sym_variable_name;
	v->a[72544] = actions(2878);
	v->a[72545] = 1;
	v->a[72546] = anon_sym_DQUOTE;
	v->a[72547] = actions(2854);
	v->a[72548] = 2;
	v->a[72549] = aux_sym__simple_variable_name_token1;
	v->a[72550] = aux_sym__multiline_variable_name_token1;
	v->a[72551] = actions(2848);
	v->a[72552] = 9;
	v->a[72553] = anon_sym_BANG;
	v->a[72554] = anon_sym_DASH;
	v->a[72555] = anon_sym_STAR;
	v->a[72556] = anon_sym_QMARK;
	v->a[72557] = anon_sym_DOLLAR;
	v->a[72558] = anon_sym_POUND;
	v->a[72559] = anon_sym_AT;
	small_parse_table_3628(v);
}

void	small_parse_table_3628(t_small_parse_table_array *v)
{
	v->a[72560] = anon_sym_0;
	v->a[72561] = anon_sym__;
	v->a[72562] = 7;
	v->a[72563] = actions(3);
	v->a[72564] = 1;
	v->a[72565] = sym_comment;
	v->a[72566] = actions(1086);
	v->a[72567] = 1;
	v->a[72568] = sym_file_descriptor;
	v->a[72569] = actions(2880);
	v->a[72570] = 1;
	v->a[72571] = aux_sym_heredoc_redirect_token1;
	v->a[72572] = state(1925);
	v->a[72573] = 1;
	v->a[72574] = sym__heredoc_expression;
	v->a[72575] = actions(1068);
	v->a[72576] = 2;
	v->a[72577] = anon_sym_AMP_AMP;
	v->a[72578] = anon_sym_PIPE_PIPE;
	v->a[72579] = state(1600);
	small_parse_table_3629(v);
}

void	small_parse_table_3629(t_small_parse_table_array *v)
{
	v->a[72580] = 2;
	v->a[72581] = sym_file_redirect;
	v->a[72582] = aux_sym_redirected_statement_repeat2;
	v->a[72583] = actions(1070);
	v->a[72584] = 7;
	v->a[72585] = anon_sym_LT;
	v->a[72586] = anon_sym_GT;
	v->a[72587] = anon_sym_GT_GT;
	v->a[72588] = anon_sym_LT_AMP;
	v->a[72589] = anon_sym_GT_AMP;
	v->a[72590] = anon_sym_GT_PIPE;
	v->a[72591] = anon_sym_LT_GT;
	v->a[72592] = 6;
	v->a[72593] = actions(3);
	v->a[72594] = 1;
	v->a[72595] = sym_comment;
	v->a[72596] = actions(2852);
	v->a[72597] = 1;
	v->a[72598] = sym_string_content;
	v->a[72599] = actions(2856);
	small_parse_table_3630(v);
}

/* EOF small_parse_table_725.c */
