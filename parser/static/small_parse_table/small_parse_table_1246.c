/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1246.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6230(t_small_parse_table_array *v)
{
	v->a[124600] = 1;
	v->a[124601] = sym_comment;
	v->a[124602] = actions(5151);
	v->a[124603] = 1;
	v->a[124604] = anon_sym_PIPE;
	v->a[124605] = actions(7147);
	v->a[124606] = 1;
	v->a[124607] = anon_sym_LT_LT;
	v->a[124608] = actions(7149);
	v->a[124609] = 1;
	v->a[124610] = anon_sym_LT_LT_DASH;
	v->a[124611] = actions(7151);
	v->a[124612] = 1;
	v->a[124613] = sym_file_descriptor;
	v->a[124614] = actions(7145);
	v->a[124615] = 2;
	v->a[124616] = anon_sym_LT_AMP_DASH;
	v->a[124617] = anon_sym_GT_AMP_DASH;
	v->a[124618] = actions(5157);
	v->a[124619] = 3;
	small_parse_table_6231(v);
}

void	small_parse_table_6231(t_small_parse_table_array *v)
{
	v->a[124620] = anon_sym_PIPE_AMP;
	v->a[124621] = anon_sym_AMP_AMP;
	v->a[124622] = anon_sym_PIPE_PIPE;
	v->a[124623] = actions(7143);
	v->a[124624] = 3;
	v->a[124625] = anon_sym_GT_GT;
	v->a[124626] = anon_sym_AMP_GT_GT;
	v->a[124627] = anon_sym_GT_PIPE;
	v->a[124628] = state(2655);
	v->a[124629] = 3;
	v->a[124630] = sym_file_redirect;
	v->a[124631] = sym_heredoc_redirect;
	v->a[124632] = aux_sym_redirected_statement_repeat1;
	v->a[124633] = actions(7141);
	v->a[124634] = 5;
	v->a[124635] = anon_sym_LT;
	v->a[124636] = anon_sym_GT;
	v->a[124637] = anon_sym_AMP_GT;
	v->a[124638] = anon_sym_LT_AMP;
	v->a[124639] = anon_sym_GT_AMP;
	small_parse_table_6232(v);
}

void	small_parse_table_6232(t_small_parse_table_array *v)
{
	v->a[124640] = 3;
	v->a[124641] = actions(3);
	v->a[124642] = 1;
	v->a[124643] = sym_comment;
	v->a[124644] = actions(2967);
	v->a[124645] = 4;
	v->a[124646] = sym__concat;
	v->a[124647] = sym_test_operator;
	v->a[124648] = sym__brace_start;
	v->a[124649] = aux_sym_heredoc_redirect_token1;
	v->a[124650] = actions(2965);
	v->a[124651] = 16;
	v->a[124652] = anon_sym_SEMI_SEMI;
	v->a[124653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124654] = anon_sym_AMP;
	v->a[124655] = aux_sym_concatenation_token1;
	v->a[124656] = anon_sym_DOLLAR;
	v->a[124657] = sym__special_character;
	v->a[124658] = anon_sym_DQUOTE;
	v->a[124659] = sym_raw_string;
	small_parse_table_6233(v);
}

void	small_parse_table_6233(t_small_parse_table_array *v)
{
	v->a[124660] = aux_sym_number_token1;
	v->a[124661] = aux_sym_number_token2;
	v->a[124662] = anon_sym_DOLLAR_LBRACE;
	v->a[124663] = anon_sym_DOLLAR_LPAREN;
	v->a[124664] = anon_sym_BQUOTE;
	v->a[124665] = anon_sym_DOLLAR_BQUOTE;
	v->a[124666] = sym_word;
	v->a[124667] = anon_sym_SEMI;
	v->a[124668] = 3;
	v->a[124669] = actions(57);
	v->a[124670] = 1;
	v->a[124671] = sym_comment;
	v->a[124672] = actions(3064);
	v->a[124673] = 7;
	v->a[124674] = anon_sym_PIPE;
	v->a[124675] = anon_sym_LT;
	v->a[124676] = anon_sym_GT;
	v->a[124677] = anon_sym_AMP_GT;
	v->a[124678] = anon_sym_LT_AMP;
	v->a[124679] = anon_sym_GT_AMP;
	small_parse_table_6234(v);
}

void	small_parse_table_6234(t_small_parse_table_array *v)
{
	v->a[124680] = anon_sym_LT_LT;
	v->a[124681] = actions(3066);
	v->a[124682] = 13;
	v->a[124683] = sym_file_descriptor;
	v->a[124684] = sym__concat;
	v->a[124685] = sym_variable_name;
	v->a[124686] = anon_sym_PIPE_AMP;
	v->a[124687] = anon_sym_AMP_AMP;
	v->a[124688] = anon_sym_PIPE_PIPE;
	v->a[124689] = anon_sym_GT_GT;
	v->a[124690] = anon_sym_AMP_GT_GT;
	v->a[124691] = anon_sym_GT_PIPE;
	v->a[124692] = anon_sym_LT_AMP_DASH;
	v->a[124693] = anon_sym_GT_AMP_DASH;
	v->a[124694] = anon_sym_LT_LT_DASH;
	v->a[124695] = aux_sym_concatenation_token1;
	v->a[124696] = 3;
	v->a[124697] = actions(3);
	v->a[124698] = 1;
	v->a[124699] = sym_comment;
	small_parse_table_6235(v);
}

/* EOF small_parse_table_1246.c */
