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
	v->a[73600] = sym__brace_start;
	v->a[73601] = anon_sym_PIPE_AMP;
	v->a[73602] = anon_sym_AMP_AMP;
	v->a[73603] = anon_sym_PIPE_PIPE;
	v->a[73604] = anon_sym_GT_GT;
	v->a[73605] = anon_sym_AMP_GT_GT;
	v->a[73606] = anon_sym_GT_PIPE;
	v->a[73607] = anon_sym_LT_AMP_DASH;
	v->a[73608] = anon_sym_GT_AMP_DASH;
	v->a[73609] = anon_sym_LT_LT_DASH;
	v->a[73610] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73611] = aux_sym_concatenation_token1;
	v->a[73612] = sym__special_character;
	v->a[73613] = anon_sym_DQUOTE;
	v->a[73614] = sym_raw_string;
	v->a[73615] = anon_sym_DOLLAR_LBRACE;
	v->a[73616] = anon_sym_DOLLAR_BQUOTE;
	v->a[73617] = 6;
	v->a[73618] = actions(3);
	v->a[73619] = 1;
	small_parse_table_3681(v);
}

void	small_parse_table_3681(t_small_parse_table_array *v)
{
	v->a[73620] = sym_comment;
	v->a[73621] = actions(4412);
	v->a[73622] = 1;
	v->a[73623] = sym_variable_name;
	v->a[73624] = actions(828);
	v->a[73625] = 2;
	v->a[73626] = sym_file_descriptor;
	v->a[73627] = ts_builtin_sym_end;
	v->a[73628] = actions(4410);
	v->a[73629] = 2;
	v->a[73630] = aux_sym__simple_variable_name_token1;
	v->a[73631] = aux_sym__multiline_variable_name_token1;
	v->a[73632] = actions(4408);
	v->a[73633] = 9;
	v->a[73634] = anon_sym_BANG;
	v->a[73635] = anon_sym_DASH;
	v->a[73636] = anon_sym_STAR;
	v->a[73637] = anon_sym_QMARK;
	v->a[73638] = anon_sym_DOLLAR;
	v->a[73639] = anon_sym_POUND;
	small_parse_table_3682(v);
}

void	small_parse_table_3682(t_small_parse_table_array *v)
{
	v->a[73640] = anon_sym_AT;
	v->a[73641] = anon_sym_0;
	v->a[73642] = anon_sym__;
	v->a[73643] = actions(826);
	v->a[73644] = 20;
	v->a[73645] = anon_sym_PIPE;
	v->a[73646] = anon_sym_SEMI_SEMI;
	v->a[73647] = anon_sym_PIPE_AMP;
	v->a[73648] = anon_sym_AMP_AMP;
	v->a[73649] = anon_sym_PIPE_PIPE;
	v->a[73650] = anon_sym_LT;
	v->a[73651] = anon_sym_GT;
	v->a[73652] = anon_sym_GT_GT;
	v->a[73653] = anon_sym_AMP_GT;
	v->a[73654] = anon_sym_AMP_GT_GT;
	v->a[73655] = anon_sym_LT_AMP;
	v->a[73656] = anon_sym_GT_AMP;
	v->a[73657] = anon_sym_GT_PIPE;
	v->a[73658] = anon_sym_LT_AMP_DASH;
	v->a[73659] = anon_sym_GT_AMP_DASH;
	small_parse_table_3683(v);
}

void	small_parse_table_3683(t_small_parse_table_array *v)
{
	v->a[73660] = anon_sym_LT_LT;
	v->a[73661] = anon_sym_LT_LT_DASH;
	v->a[73662] = aux_sym_heredoc_redirect_token1;
	v->a[73663] = anon_sym_AMP;
	v->a[73664] = anon_sym_SEMI;
	v->a[73665] = 24;
	v->a[73666] = actions(3);
	v->a[73667] = 1;
	v->a[73668] = sym_comment;
	v->a[73669] = actions(4332);
	v->a[73670] = 1;
	v->a[73671] = anon_sym_LPAREN;
	v->a[73672] = actions(4338);
	v->a[73673] = 1;
	v->a[73674] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73675] = actions(4340);
	v->a[73676] = 1;
	v->a[73677] = anon_sym_DOLLAR;
	v->a[73678] = actions(4342);
	v->a[73679] = 1;
	small_parse_table_3684(v);
}

void	small_parse_table_3684(t_small_parse_table_array *v)
{
	v->a[73680] = sym__special_character;
	v->a[73681] = actions(4344);
	v->a[73682] = 1;
	v->a[73683] = anon_sym_DQUOTE;
	v->a[73684] = actions(4346);
	v->a[73685] = 1;
	v->a[73686] = aux_sym_number_token1;
	v->a[73687] = actions(4348);
	v->a[73688] = 1;
	v->a[73689] = aux_sym_number_token2;
	v->a[73690] = actions(4350);
	v->a[73691] = 1;
	v->a[73692] = anon_sym_DOLLAR_LBRACE;
	v->a[73693] = actions(4352);
	v->a[73694] = 1;
	v->a[73695] = anon_sym_DOLLAR_LPAREN;
	v->a[73696] = actions(4354);
	v->a[73697] = 1;
	v->a[73698] = anon_sym_BQUOTE;
	v->a[73699] = actions(4356);
	small_parse_table_3685(v);
}

/* EOF small_parse_table_736.c */
