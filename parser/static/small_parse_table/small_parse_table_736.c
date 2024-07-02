/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_736.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3680(t_small_parse_table_array *v)
{
	v->a[73600] = anon_sym_DASH;
	v->a[73601] = anon_sym_STAR;
	v->a[73602] = anon_sym_QMARK;
	v->a[73603] = anon_sym_DOLLAR;
	v->a[73604] = anon_sym_POUND;
	v->a[73605] = anon_sym_AT;
	v->a[73606] = anon_sym_0;
	v->a[73607] = anon_sym__;
	v->a[73608] = 6;
	v->a[73609] = actions(3);
	v->a[73610] = 1;
	v->a[73611] = sym_comment;
	v->a[73612] = actions(2881);
	v->a[73613] = 1;
	v->a[73614] = sym_string_content;
	v->a[73615] = actions(2885);
	v->a[73616] = 1;
	v->a[73617] = sym_variable_name;
	v->a[73618] = actions(2974);
	v->a[73619] = 1;
	small_parse_table_3681(v);
}

void	small_parse_table_3681(t_small_parse_table_array *v)
{
	v->a[73620] = anon_sym_DQUOTE;
	v->a[73621] = actions(2883);
	v->a[73622] = 2;
	v->a[73623] = aux_sym__simple_variable_name_token1;
	v->a[73624] = aux_sym__multiline_variable_name_token1;
	v->a[73625] = actions(2877);
	v->a[73626] = 9;
	v->a[73627] = anon_sym_BANG;
	v->a[73628] = anon_sym_DASH;
	v->a[73629] = anon_sym_STAR;
	v->a[73630] = anon_sym_QMARK;
	v->a[73631] = anon_sym_DOLLAR;
	v->a[73632] = anon_sym_POUND;
	v->a[73633] = anon_sym_AT;
	v->a[73634] = anon_sym_0;
	v->a[73635] = anon_sym__;
	v->a[73636] = 7;
	v->a[73637] = actions(3);
	v->a[73638] = 1;
	v->a[73639] = sym_comment;
	small_parse_table_3682(v);
}

void	small_parse_table_3682(t_small_parse_table_array *v)
{
	v->a[73640] = actions(1079);
	v->a[73641] = 1;
	v->a[73642] = sym_file_descriptor;
	v->a[73643] = actions(2976);
	v->a[73644] = 1;
	v->a[73645] = aux_sym_heredoc_redirect_token1;
	v->a[73646] = state(2123);
	v->a[73647] = 1;
	v->a[73648] = sym__heredoc_expression;
	v->a[73649] = actions(1061);
	v->a[73650] = 2;
	v->a[73651] = anon_sym_AMP_AMP;
	v->a[73652] = anon_sym_PIPE_PIPE;
	v->a[73653] = state(1581);
	v->a[73654] = 2;
	v->a[73655] = sym_file_redirect;
	v->a[73656] = aux_sym_redirected_statement_repeat2;
	v->a[73657] = actions(1063);
	v->a[73658] = 7;
	v->a[73659] = anon_sym_LT;
	small_parse_table_3683(v);
}

void	small_parse_table_3683(t_small_parse_table_array *v)
{
	v->a[73660] = anon_sym_GT;
	v->a[73661] = anon_sym_GT_GT;
	v->a[73662] = anon_sym_LT_AMP;
	v->a[73663] = anon_sym_GT_AMP;
	v->a[73664] = anon_sym_GT_PIPE;
	v->a[73665] = anon_sym_LT_GT;
	v->a[73666] = 3;
	v->a[73667] = actions(680);
	v->a[73668] = 1;
	v->a[73669] = sym_comment;
	v->a[73670] = actions(1154);
	v->a[73671] = 4;
	v->a[73672] = anon_sym_PIPE;
	v->a[73673] = anon_sym_LT;
	v->a[73674] = anon_sym_GT;
	v->a[73675] = anon_sym_LT_LT;
	v->a[73676] = actions(1158);
	v->a[73677] = 10;
	v->a[73678] = sym_file_descriptor;
	v->a[73679] = sym_variable_name;
	small_parse_table_3684(v);
}

void	small_parse_table_3684(t_small_parse_table_array *v)
{
	v->a[73680] = anon_sym_AMP_AMP;
	v->a[73681] = anon_sym_PIPE_PIPE;
	v->a[73682] = anon_sym_GT_GT;
	v->a[73683] = anon_sym_LT_AMP;
	v->a[73684] = anon_sym_GT_AMP;
	v->a[73685] = anon_sym_GT_PIPE;
	v->a[73686] = anon_sym_LT_GT;
	v->a[73687] = anon_sym_LT_LT_DASH;
	v->a[73688] = 6;
	v->a[73689] = actions(3);
	v->a[73690] = 1;
	v->a[73691] = sym_comment;
	v->a[73692] = actions(2881);
	v->a[73693] = 1;
	v->a[73694] = sym_string_content;
	v->a[73695] = actions(2885);
	v->a[73696] = 1;
	v->a[73697] = sym_variable_name;
	v->a[73698] = actions(2978);
	v->a[73699] = 1;
	small_parse_table_3685(v);
}

/* EOF small_parse_table_736.c */
