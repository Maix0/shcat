/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_246.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1230(t_small_parse_table_array *v)
{
	v->a[24600] = 1;
	v->a[24601] = sym_comment;
	v->a[24602] = actions(682);
	v->a[24603] = 1;
	v->a[24604] = anon_sym_PIPE;
	v->a[24605] = actions(690);
	v->a[24606] = 1;
	v->a[24607] = sym_file_descriptor;
	v->a[24608] = actions(756);
	v->a[24609] = 1;
	v->a[24610] = sym_variable_name;
	v->a[24611] = state(1163);
	v->a[24612] = 2;
	v->a[24613] = sym_variable_assignment;
	v->a[24614] = aux_sym__variable_assignments_repeat1;
	v->a[24615] = state(1128);
	v->a[24616] = 3;
	v->a[24617] = sym_file_redirect;
	v->a[24618] = sym_heredoc_redirect;
	v->a[24619] = aux_sym_redirected_statement_repeat1;
	small_parse_table_1231(v);
}

void	small_parse_table_1231(t_small_parse_table_array *v)
{
	v->a[24620] = actions(935);
	v->a[24621] = 9;
	v->a[24622] = anon_sym_RPAREN;
	v->a[24623] = anon_sym_SEMI_SEMI;
	v->a[24624] = anon_sym_AMP_AMP;
	v->a[24625] = anon_sym_PIPE_PIPE;
	v->a[24626] = anon_sym_LT_LT;
	v->a[24627] = anon_sym_LT_LT_DASH;
	v->a[24628] = aux_sym_heredoc_redirect_token1;
	v->a[24629] = anon_sym_AMP;
	v->a[24630] = anon_sym_SEMI;
	v->a[24631] = actions(678);
	v->a[24632] = 17;
	v->a[24633] = anon_sym_LT;
	v->a[24634] = anon_sym_GT;
	v->a[24635] = anon_sym_GT_GT;
	v->a[24636] = anon_sym_LT_AMP;
	v->a[24637] = anon_sym_GT_AMP;
	v->a[24638] = anon_sym_GT_PIPE;
	v->a[24639] = anon_sym_LT_AMP_DASH;
	small_parse_table_1232(v);
}

void	small_parse_table_1232(t_small_parse_table_array *v)
{
	v->a[24640] = anon_sym_GT_AMP_DASH;
	v->a[24641] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24642] = anon_sym_DOLLAR;
	v->a[24643] = anon_sym_DQUOTE;
	v->a[24644] = sym_raw_string;
	v->a[24645] = sym_number;
	v->a[24646] = anon_sym_DOLLAR_LBRACE;
	v->a[24647] = anon_sym_DOLLAR_LPAREN;
	v->a[24648] = anon_sym_BQUOTE;
	v->a[24649] = sym_word;
	v->a[24650] = 3;
	v->a[24651] = actions(870);
	v->a[24652] = 1;
	v->a[24653] = sym_comment;
	v->a[24654] = actions(937);
	v->a[24655] = 13;
	v->a[24656] = anon_sym_PIPE;
	v->a[24657] = anon_sym_EQ;
	v->a[24658] = anon_sym_LT;
	v->a[24659] = anon_sym_GT;
	small_parse_table_1233(v);
}

void	small_parse_table_1233(t_small_parse_table_array *v)
{
	v->a[24660] = anon_sym_GT_GT;
	v->a[24661] = anon_sym_LT_LT;
	v->a[24662] = anon_sym_CARET;
	v->a[24663] = anon_sym_AMP;
	v->a[24664] = anon_sym_PLUS;
	v->a[24665] = anon_sym_DASH;
	v->a[24666] = anon_sym_STAR;
	v->a[24667] = anon_sym_SLASH;
	v->a[24668] = anon_sym_PERCENT;
	v->a[24669] = actions(939);
	v->a[24670] = 21;
	v->a[24671] = anon_sym_AMP_AMP;
	v->a[24672] = anon_sym_PIPE_PIPE;
	v->a[24673] = anon_sym_RPAREN_RPAREN;
	v->a[24674] = anon_sym_PLUS_EQ;
	v->a[24675] = anon_sym_DASH_EQ;
	v->a[24676] = anon_sym_STAR_EQ;
	v->a[24677] = anon_sym_SLASH_EQ;
	v->a[24678] = anon_sym_PERCENT_EQ;
	v->a[24679] = anon_sym_LT_LT_EQ;
	small_parse_table_1234(v);
}

void	small_parse_table_1234(t_small_parse_table_array *v)
{
	v->a[24680] = anon_sym_GT_GT_EQ;
	v->a[24681] = anon_sym_AMP_EQ;
	v->a[24682] = anon_sym_CARET_EQ;
	v->a[24683] = anon_sym_PIPE_EQ;
	v->a[24684] = anon_sym_EQ_EQ;
	v->a[24685] = anon_sym_BANG_EQ;
	v->a[24686] = anon_sym_LT_EQ;
	v->a[24687] = anon_sym_GT_EQ;
	v->a[24688] = anon_sym_QMARK;
	v->a[24689] = anon_sym_COLON;
	v->a[24690] = anon_sym_PLUS_PLUS2;
	v->a[24691] = anon_sym_DASH_DASH2;
	v->a[24692] = 12;
	v->a[24693] = actions(3);
	v->a[24694] = 1;
	v->a[24695] = sym_comment;
	v->a[24696] = actions(713);
	v->a[24697] = 1;
	v->a[24698] = sym_file_descriptor;
	v->a[24699] = actions(943);
	small_parse_table_1235(v);
}

/* EOF small_parse_table_246.c */
