/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_545.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2725(t_small_parse_table_array *v)
{
	v->a[54500] = actions(1201);
	v->a[54501] = 2;
	v->a[54502] = sym_file_descriptor;
	v->a[54503] = sym__concat;
	v->a[54504] = actions(1199);
	v->a[54505] = 20;
	v->a[54506] = anon_sym_AMP_AMP;
	v->a[54507] = anon_sym_PIPE_PIPE;
	v->a[54508] = anon_sym_LT;
	v->a[54509] = anon_sym_GT;
	v->a[54510] = anon_sym_GT_GT;
	v->a[54511] = anon_sym_LT_AMP;
	v->a[54512] = anon_sym_GT_AMP;
	v->a[54513] = anon_sym_GT_PIPE;
	v->a[54514] = anon_sym_LT_GT;
	v->a[54515] = aux_sym_heredoc_redirect_token1;
	v->a[54516] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54517] = aux_sym_concatenation_token1;
	v->a[54518] = anon_sym_DOLLAR;
	v->a[54519] = anon_sym_DQUOTE;
	small_parse_table_2726(v);
}

void	small_parse_table_2726(t_small_parse_table_array *v)
{
	v->a[54520] = sym_raw_string;
	v->a[54521] = sym_number;
	v->a[54522] = anon_sym_DOLLAR_LBRACE;
	v->a[54523] = anon_sym_DOLLAR_LPAREN;
	v->a[54524] = anon_sym_BQUOTE;
	v->a[54525] = sym_word;
	v->a[54526] = 3;
	v->a[54527] = actions(3);
	v->a[54528] = 1;
	v->a[54529] = sym_comment;
	v->a[54530] = actions(1178);
	v->a[54531] = 2;
	v->a[54532] = sym_file_descriptor;
	v->a[54533] = sym__concat;
	v->a[54534] = actions(1176);
	v->a[54535] = 20;
	v->a[54536] = anon_sym_AMP_AMP;
	v->a[54537] = anon_sym_PIPE_PIPE;
	v->a[54538] = anon_sym_LT;
	v->a[54539] = anon_sym_GT;
	small_parse_table_2727(v);
}

void	small_parse_table_2727(t_small_parse_table_array *v)
{
	v->a[54540] = anon_sym_GT_GT;
	v->a[54541] = anon_sym_LT_AMP;
	v->a[54542] = anon_sym_GT_AMP;
	v->a[54543] = anon_sym_GT_PIPE;
	v->a[54544] = anon_sym_LT_GT;
	v->a[54545] = aux_sym_heredoc_redirect_token1;
	v->a[54546] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54547] = aux_sym_concatenation_token1;
	v->a[54548] = anon_sym_DOLLAR;
	v->a[54549] = anon_sym_DQUOTE;
	v->a[54550] = sym_raw_string;
	v->a[54551] = sym_number;
	v->a[54552] = anon_sym_DOLLAR_LBRACE;
	v->a[54553] = anon_sym_DOLLAR_LPAREN;
	v->a[54554] = anon_sym_BQUOTE;
	v->a[54555] = sym_word;
	v->a[54556] = 11;
	v->a[54557] = actions(3);
	v->a[54558] = 1;
	v->a[54559] = sym_comment;
	small_parse_table_2728(v);
}

void	small_parse_table_2728(t_small_parse_table_array *v)
{
	v->a[54560] = actions(736);
	v->a[54561] = 1;
	v->a[54562] = anon_sym_PIPE;
	v->a[54563] = actions(804);
	v->a[54564] = 1;
	v->a[54565] = ts_builtin_sym_end;
	v->a[54566] = actions(1839);
	v->a[54567] = 1;
	v->a[54568] = aux_sym_heredoc_redirect_token1;
	v->a[54569] = actions(1841);
	v->a[54570] = 1;
	v->a[54571] = sym_file_descriptor;
	v->a[54572] = state(717);
	v->a[54573] = 1;
	v->a[54574] = sym_terminator;
	v->a[54575] = actions(744);
	v->a[54576] = 2;
	v->a[54577] = anon_sym_LT_LT;
	v->a[54578] = anon_sym_LT_LT_DASH;
	v->a[54579] = actions(808);
	small_parse_table_2729(v);
}

void	small_parse_table_2729(t_small_parse_table_array *v)
{
	v->a[54580] = 2;
	v->a[54581] = anon_sym_AMP_AMP;
	v->a[54582] = anon_sym_PIPE_PIPE;
	v->a[54583] = actions(806);
	v->a[54584] = 3;
	v->a[54585] = anon_sym_SEMI_SEMI;
	v->a[54586] = anon_sym_AMP;
	v->a[54587] = anon_sym_SEMI;
	v->a[54588] = state(1073);
	v->a[54589] = 3;
	v->a[54590] = sym_file_redirect;
	v->a[54591] = sym_heredoc_redirect;
	v->a[54592] = aux_sym_redirected_statement_repeat1;
	v->a[54593] = actions(1837);
	v->a[54594] = 7;
	v->a[54595] = anon_sym_LT;
	v->a[54596] = anon_sym_GT;
	v->a[54597] = anon_sym_GT_GT;
	v->a[54598] = anon_sym_LT_AMP;
	v->a[54599] = anon_sym_GT_AMP;
	small_parse_table_2730(v);
}

/* EOF small_parse_table_545.c */
