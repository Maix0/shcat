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
	v->a[58600] = actions(1888);
	v->a[58601] = 1;
	v->a[58602] = aux_sym_heredoc_redirect_token1;
	v->a[58603] = actions(1933);
	v->a[58604] = 1;
	v->a[58605] = sym_file_descriptor;
	v->a[58606] = state(572);
	v->a[58607] = 1;
	v->a[58608] = sym_terminator;
	v->a[58609] = actions(786);
	v->a[58610] = 2;
	v->a[58611] = anon_sym_SEMI_SEMI;
	v->a[58612] = anon_sym_SEMI;
	v->a[58613] = actions(788);
	v->a[58614] = 2;
	v->a[58615] = anon_sym_AMP_AMP;
	v->a[58616] = anon_sym_PIPE_PIPE;
	v->a[58617] = actions(790);
	v->a[58618] = 2;
	v->a[58619] = anon_sym_LT_LT;
	small_parse_table_2931(v);
}

void	small_parse_table_2931(t_small_parse_table_array *v)
{
	v->a[58620] = anon_sym_LT_LT_DASH;
	v->a[58621] = state(1034);
	v->a[58622] = 3;
	v->a[58623] = sym_file_redirect;
	v->a[58624] = sym_heredoc_redirect;
	v->a[58625] = aux_sym_redirected_statement_repeat1;
	v->a[58626] = actions(1931);
	v->a[58627] = 7;
	v->a[58628] = anon_sym_LT;
	v->a[58629] = anon_sym_GT;
	v->a[58630] = anon_sym_GT_GT;
	v->a[58631] = anon_sym_LT_AMP;
	v->a[58632] = anon_sym_GT_AMP;
	v->a[58633] = anon_sym_GT_PIPE;
	v->a[58634] = anon_sym_LT_GT;
	v->a[58635] = 3;
	v->a[58636] = actions(3);
	v->a[58637] = 1;
	v->a[58638] = sym_comment;
	v->a[58639] = actions(686);
	small_parse_table_2932(v);
}

void	small_parse_table_2932(t_small_parse_table_array *v)
{
	v->a[58640] = 3;
	v->a[58641] = sym_file_descriptor;
	v->a[58642] = sym__concat;
	v->a[58643] = sym_variable_name;
	v->a[58644] = actions(684);
	v->a[58645] = 17;
	v->a[58646] = anon_sym_LT;
	v->a[58647] = anon_sym_GT;
	v->a[58648] = anon_sym_GT_GT;
	v->a[58649] = anon_sym_LT_AMP;
	v->a[58650] = anon_sym_GT_AMP;
	v->a[58651] = anon_sym_GT_PIPE;
	v->a[58652] = anon_sym_LT_GT;
	v->a[58653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58654] = aux_sym_concatenation_token1;
	v->a[58655] = anon_sym_DOLLAR;
	v->a[58656] = anon_sym_DQUOTE;
	v->a[58657] = sym_raw_string;
	v->a[58658] = sym_number;
	v->a[58659] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2933(v);
}

void	small_parse_table_2933(t_small_parse_table_array *v)
{
	v->a[58660] = anon_sym_DOLLAR_LPAREN;
	v->a[58661] = anon_sym_BQUOTE;
	v->a[58662] = sym_word;
	v->a[58663] = 3;
	v->a[58664] = actions(3);
	v->a[58665] = 1;
	v->a[58666] = sym_comment;
	v->a[58667] = actions(682);
	v->a[58668] = 3;
	v->a[58669] = sym_file_descriptor;
	v->a[58670] = sym__concat;
	v->a[58671] = sym_variable_name;
	v->a[58672] = actions(680);
	v->a[58673] = 17;
	v->a[58674] = anon_sym_LT;
	v->a[58675] = anon_sym_GT;
	v->a[58676] = anon_sym_GT_GT;
	v->a[58677] = anon_sym_LT_AMP;
	v->a[58678] = anon_sym_GT_AMP;
	v->a[58679] = anon_sym_GT_PIPE;
	small_parse_table_2934(v);
}

void	small_parse_table_2934(t_small_parse_table_array *v)
{
	v->a[58680] = anon_sym_LT_GT;
	v->a[58681] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58682] = aux_sym_concatenation_token1;
	v->a[58683] = anon_sym_DOLLAR;
	v->a[58684] = anon_sym_DQUOTE;
	v->a[58685] = sym_raw_string;
	v->a[58686] = sym_number;
	v->a[58687] = anon_sym_DOLLAR_LBRACE;
	v->a[58688] = anon_sym_DOLLAR_LPAREN;
	v->a[58689] = anon_sym_BQUOTE;
	v->a[58690] = sym_word;
	v->a[58691] = 3;
	v->a[58692] = actions(3);
	v->a[58693] = 1;
	v->a[58694] = sym_comment;
	v->a[58695] = actions(731);
	v->a[58696] = 3;
	v->a[58697] = sym_file_descriptor;
	v->a[58698] = sym__concat;
	v->a[58699] = sym_variable_name;
	small_parse_table_2935(v);
}

/* EOF small_parse_table_586.c */
