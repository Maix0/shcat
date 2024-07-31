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
	v->a[54500] = actions(1347);
	v->a[54501] = 1;
	v->a[54502] = anon_sym_DOLLAR_LBRACE;
	v->a[54503] = actions(1349);
	v->a[54504] = 1;
	v->a[54505] = anon_sym_DOLLAR_LPAREN;
	v->a[54506] = actions(1351);
	v->a[54507] = 1;
	v->a[54508] = anon_sym_BQUOTE;
	v->a[54509] = actions(2142);
	v->a[54510] = 1;
	v->a[54511] = anon_sym_DOLLAR;
	v->a[54512] = actions(2144);
	v->a[54513] = 1;
	v->a[54514] = sym__bare_dollar;
	v->a[54515] = actions(2140);
	v->a[54516] = 5;
	v->a[54517] = aux_sym_concatenation_token1;
	v->a[54518] = sym_raw_string;
	v->a[54519] = sym_number;
	small_parse_table_2726(v);
}

void	small_parse_table_2726(t_small_parse_table_array *v)
{
	v->a[54520] = sym__comment_word;
	v->a[54521] = sym_word;
	v->a[54522] = state(1568);
	v->a[54523] = 5;
	v->a[54524] = sym_arithmetic_expansion;
	v->a[54525] = sym_string;
	v->a[54526] = sym_simple_expansion;
	v->a[54527] = sym_expansion;
	v->a[54528] = sym_command_substitution;
	v->a[54529] = 12;
	v->a[54530] = actions(3);
	v->a[54531] = 1;
	v->a[54532] = sym_comment;
	v->a[54533] = actions(2057);
	v->a[54534] = 1;
	v->a[54535] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54536] = actions(2059);
	v->a[54537] = 1;
	v->a[54538] = anon_sym_DOLLAR;
	v->a[54539] = actions(2061);
	small_parse_table_2727(v);
}

void	small_parse_table_2727(t_small_parse_table_array *v)
{
	v->a[54540] = 1;
	v->a[54541] = anon_sym_DQUOTE;
	v->a[54542] = actions(2063);
	v->a[54543] = 1;
	v->a[54544] = anon_sym_DOLLAR_LBRACE;
	v->a[54545] = actions(2065);
	v->a[54546] = 1;
	v->a[54547] = anon_sym_DOLLAR_LPAREN;
	v->a[54548] = actions(2067);
	v->a[54549] = 1;
	v->a[54550] = anon_sym_BQUOTE;
	v->a[54551] = actions(2148);
	v->a[54552] = 1;
	v->a[54553] = sym__comment_word;
	v->a[54554] = actions(2150);
	v->a[54555] = 1;
	v->a[54556] = sym__empty_value;
	v->a[54557] = state(1040);
	v->a[54558] = 1;
	v->a[54559] = sym_concatenation;
	small_parse_table_2728(v);
}

void	small_parse_table_2728(t_small_parse_table_array *v)
{
	v->a[54560] = actions(2146);
	v->a[54561] = 3;
	v->a[54562] = sym_raw_string;
	v->a[54563] = sym_number;
	v->a[54564] = sym_word;
	v->a[54565] = state(883);
	v->a[54566] = 5;
	v->a[54567] = sym_arithmetic_expansion;
	v->a[54568] = sym_string;
	v->a[54569] = sym_simple_expansion;
	v->a[54570] = sym_expansion;
	v->a[54571] = sym_command_substitution;
	v->a[54572] = 5;
	v->a[54573] = actions(3);
	v->a[54574] = 1;
	v->a[54575] = sym_comment;
	v->a[54576] = actions(2152);
	v->a[54577] = 1;
	v->a[54578] = anon_sym_PIPE;
	v->a[54579] = state(1079);
	small_parse_table_2729(v);
}

void	small_parse_table_2729(t_small_parse_table_array *v)
{
	v->a[54580] = 1;
	v->a[54581] = aux_sym_pipeline_repeat1;
	v->a[54582] = actions(1712);
	v->a[54583] = 2;
	v->a[54584] = ts_builtin_sym_end;
	v->a[54585] = aux_sym_heredoc_redirect_token1;
	v->a[54586] = actions(1717);
	v->a[54587] = 13;
	v->a[54588] = anon_sym_SEMI_SEMI;
	v->a[54589] = anon_sym_AMP_AMP;
	v->a[54590] = anon_sym_PIPE_PIPE;
	v->a[54591] = anon_sym_LT;
	v->a[54592] = anon_sym_GT;
	v->a[54593] = anon_sym_GT_GT;
	v->a[54594] = anon_sym_LT_AMP;
	v->a[54595] = anon_sym_GT_AMP;
	v->a[54596] = anon_sym_GT_PIPE;
	v->a[54597] = anon_sym_LT_GT;
	v->a[54598] = anon_sym_LT_LT;
	v->a[54599] = anon_sym_LT_LT_DASH;
	small_parse_table_2730(v);
}

/* EOF small_parse_table_545.c */
