/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_586.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2930(t_small_parse_table_array *v)
{
	v->a[58600] = anon_sym_GT;
	v->a[58601] = anon_sym_GT_GT;
	v->a[58602] = anon_sym_LT_AMP;
	v->a[58603] = anon_sym_GT_AMP;
	v->a[58604] = anon_sym_GT_PIPE;
	v->a[58605] = anon_sym_LT_GT;
	v->a[58606] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58607] = anon_sym_DOLLAR;
	v->a[58608] = anon_sym_DQUOTE;
	v->a[58609] = sym_raw_string;
	v->a[58610] = sym_number;
	v->a[58611] = anon_sym_DOLLAR_LBRACE;
	v->a[58612] = anon_sym_DOLLAR_LPAREN;
	v->a[58613] = anon_sym_BQUOTE;
	v->a[58614] = sym_word;
	v->a[58615] = 10;
	v->a[58616] = actions(3);
	v->a[58617] = 1;
	v->a[58618] = sym_comment;
	v->a[58619] = actions(842);
	small_parse_table_2931(v);
}

void	small_parse_table_2931(t_small_parse_table_array *v)
{
	v->a[58620] = 1;
	v->a[58621] = anon_sym_BQUOTE;
	v->a[58622] = actions(1865);
	v->a[58623] = 1;
	v->a[58624] = aux_sym_heredoc_redirect_token1;
	v->a[58625] = actions(1867);
	v->a[58626] = 1;
	v->a[58627] = sym_file_descriptor;
	v->a[58628] = state(804);
	v->a[58629] = 1;
	v->a[58630] = sym_terminator;
	v->a[58631] = actions(744);
	v->a[58632] = 2;
	v->a[58633] = anon_sym_LT_LT;
	v->a[58634] = anon_sym_LT_LT_DASH;
	v->a[58635] = actions(990);
	v->a[58636] = 2;
	v->a[58637] = anon_sym_AMP_AMP;
	v->a[58638] = anon_sym_PIPE_PIPE;
	v->a[58639] = actions(740);
	small_parse_table_2932(v);
}

void	small_parse_table_2932(t_small_parse_table_array *v)
{
	v->a[58640] = 3;
	v->a[58641] = anon_sym_SEMI_SEMI;
	v->a[58642] = anon_sym_AMP;
	v->a[58643] = anon_sym_SEMI;
	v->a[58644] = state(1059);
	v->a[58645] = 3;
	v->a[58646] = sym_file_redirect;
	v->a[58647] = sym_heredoc_redirect;
	v->a[58648] = aux_sym_redirected_statement_repeat1;
	v->a[58649] = actions(1863);
	v->a[58650] = 7;
	v->a[58651] = anon_sym_LT;
	v->a[58652] = anon_sym_GT;
	v->a[58653] = anon_sym_GT_GT;
	v->a[58654] = anon_sym_LT_AMP;
	v->a[58655] = anon_sym_GT_AMP;
	v->a[58656] = anon_sym_GT_PIPE;
	v->a[58657] = anon_sym_LT_GT;
	v->a[58658] = 11;
	v->a[58659] = actions(3);
	small_parse_table_2933(v);
}

void	small_parse_table_2933(t_small_parse_table_array *v)
{
	v->a[58660] = 1;
	v->a[58661] = sym_comment;
	v->a[58662] = actions(736);
	v->a[58663] = 1;
	v->a[58664] = anon_sym_PIPE;
	v->a[58665] = actions(842);
	v->a[58666] = 1;
	v->a[58667] = anon_sym_SEMI_SEMI;
	v->a[58668] = actions(1865);
	v->a[58669] = 1;
	v->a[58670] = aux_sym_heredoc_redirect_token1;
	v->a[58671] = actions(1889);
	v->a[58672] = 1;
	v->a[58673] = sym_file_descriptor;
	v->a[58674] = state(634);
	v->a[58675] = 1;
	v->a[58676] = sym_terminator;
	v->a[58677] = actions(740);
	v->a[58678] = 2;
	v->a[58679] = anon_sym_AMP;
	small_parse_table_2934(v);
}

void	small_parse_table_2934(t_small_parse_table_array *v)
{
	v->a[58680] = anon_sym_SEMI;
	v->a[58681] = actions(744);
	v->a[58682] = 2;
	v->a[58683] = anon_sym_LT_LT;
	v->a[58684] = anon_sym_LT_LT_DASH;
	v->a[58685] = actions(955);
	v->a[58686] = 2;
	v->a[58687] = anon_sym_AMP_AMP;
	v->a[58688] = anon_sym_PIPE_PIPE;
	v->a[58689] = state(1194);
	v->a[58690] = 3;
	v->a[58691] = sym_file_redirect;
	v->a[58692] = sym_heredoc_redirect;
	v->a[58693] = aux_sym_redirected_statement_repeat1;
	v->a[58694] = actions(1887);
	v->a[58695] = 7;
	v->a[58696] = anon_sym_LT;
	v->a[58697] = anon_sym_GT;
	v->a[58698] = anon_sym_GT_GT;
	v->a[58699] = anon_sym_LT_AMP;
	small_parse_table_2935(v);
}

/* EOF small_parse_table_586.c */
