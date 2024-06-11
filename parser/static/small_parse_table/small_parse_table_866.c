/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_866.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4330(t_small_parse_table_array *v)
{
	v->a[86600] = actions(3499);
	v->a[86601] = 1;
	v->a[86602] = aux_sym_heredoc_redirect_token1;
	v->a[86603] = state(2321);
	v->a[86604] = 1;
	v->a[86605] = sym__heredoc_expression;
	v->a[86606] = actions(876);
	v->a[86607] = 2;
	v->a[86608] = anon_sym_AMP_AMP;
	v->a[86609] = anon_sym_PIPE_PIPE;
	v->a[86610] = actions(880);
	v->a[86611] = 2;
	v->a[86612] = anon_sym_LT_AMP_DASH;
	v->a[86613] = anon_sym_GT_AMP_DASH;
	v->a[86614] = state(1733);
	v->a[86615] = 2;
	v->a[86616] = sym_file_redirect;
	v->a[86617] = aux_sym_redirected_statement_repeat2;
	v->a[86618] = actions(878);
	v->a[86619] = 8;
	small_parse_table_4331(v);
}

void	small_parse_table_4331(t_small_parse_table_array *v)
{
	v->a[86620] = anon_sym_LT;
	v->a[86621] = anon_sym_GT;
	v->a[86622] = anon_sym_GT_GT;
	v->a[86623] = anon_sym_AMP_GT;
	v->a[86624] = anon_sym_AMP_GT_GT;
	v->a[86625] = anon_sym_LT_AMP;
	v->a[86626] = anon_sym_GT_AMP;
	v->a[86627] = anon_sym_GT_PIPE;
	v->a[86628] = 10;
	v->a[86629] = actions(3);
	v->a[86630] = 1;
	v->a[86631] = sym_comment;
	v->a[86632] = actions(884);
	v->a[86633] = 1;
	v->a[86634] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86635] = actions(888);
	v->a[86636] = 1;
	v->a[86637] = anon_sym_DQUOTE;
	v->a[86638] = actions(890);
	v->a[86639] = 1;
	small_parse_table_4332(v);
}

void	small_parse_table_4332(t_small_parse_table_array *v)
{
	v->a[86640] = anon_sym_DOLLAR_LBRACE;
	v->a[86641] = actions(892);
	v->a[86642] = 1;
	v->a[86643] = anon_sym_DOLLAR_LPAREN;
	v->a[86644] = actions(894);
	v->a[86645] = 1;
	v->a[86646] = anon_sym_BQUOTE;
	v->a[86647] = actions(3344);
	v->a[86648] = 1;
	v->a[86649] = sym__bare_dollar;
	v->a[86650] = actions(3501);
	v->a[86651] = 1;
	v->a[86652] = anon_sym_DOLLAR;
	v->a[86653] = actions(3342);
	v->a[86654] = 5;
	v->a[86655] = aux_sym_concatenation_token1;
	v->a[86656] = sym_raw_string;
	v->a[86657] = sym_number;
	v->a[86658] = sym__comment_word;
	v->a[86659] = sym_word;
	small_parse_table_4333(v);
}

void	small_parse_table_4333(t_small_parse_table_array *v)
{
	v->a[86660] = state(1847);
	v->a[86661] = 5;
	v->a[86662] = sym_arithmetic_expansion;
	v->a[86663] = sym_string;
	v->a[86664] = sym_simple_expansion;
	v->a[86665] = sym_expansion;
	v->a[86666] = sym_command_substitution;
	v->a[86667] = 10;
	v->a[86668] = actions(3);
	v->a[86669] = 1;
	v->a[86670] = sym_comment;
	v->a[86671] = actions(3172);
	v->a[86672] = 1;
	v->a[86673] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86674] = actions(3176);
	v->a[86675] = 1;
	v->a[86676] = anon_sym_DQUOTE;
	v->a[86677] = actions(3178);
	v->a[86678] = 1;
	v->a[86679] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4334(v);
}

void	small_parse_table_4334(t_small_parse_table_array *v)
{
	v->a[86680] = actions(3180);
	v->a[86681] = 1;
	v->a[86682] = anon_sym_DOLLAR_LPAREN;
	v->a[86683] = actions(3182);
	v->a[86684] = 1;
	v->a[86685] = anon_sym_BQUOTE;
	v->a[86686] = actions(3437);
	v->a[86687] = 1;
	v->a[86688] = sym__bare_dollar;
	v->a[86689] = actions(3503);
	v->a[86690] = 1;
	v->a[86691] = anon_sym_DOLLAR;
	v->a[86692] = actions(3435);
	v->a[86693] = 5;
	v->a[86694] = aux_sym_concatenation_token1;
	v->a[86695] = sym_raw_string;
	v->a[86696] = sym_number;
	v->a[86697] = sym__comment_word;
	v->a[86698] = sym_word;
	v->a[86699] = state(460);
	small_parse_table_4335(v);
}

/* EOF small_parse_table_866.c */
