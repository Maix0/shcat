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
	v->a[24600] = 3;
	v->a[24601] = sym_file_redirect;
	v->a[24602] = sym_heredoc_redirect;
	v->a[24603] = aux_sym_redirected_statement_repeat1;
	v->a[24604] = actions(960);
	v->a[24605] = 9;
	v->a[24606] = anon_sym_esac;
	v->a[24607] = anon_sym_SEMI_SEMI;
	v->a[24608] = anon_sym_AMP_AMP;
	v->a[24609] = anon_sym_PIPE_PIPE;
	v->a[24610] = anon_sym_LT_LT;
	v->a[24611] = anon_sym_LT_LT_DASH;
	v->a[24612] = aux_sym_heredoc_redirect_token1;
	v->a[24613] = anon_sym_AMP;
	v->a[24614] = anon_sym_SEMI;
	v->a[24615] = actions(734);
	v->a[24616] = 16;
	v->a[24617] = anon_sym_LT;
	v->a[24618] = anon_sym_GT;
	v->a[24619] = anon_sym_GT_GT;
	small_parse_table_1231(v);
}

void	small_parse_table_1231(t_small_parse_table_array *v)
{
	v->a[24620] = anon_sym_LT_AMP;
	v->a[24621] = anon_sym_GT_AMP;
	v->a[24622] = anon_sym_GT_PIPE;
	v->a[24623] = anon_sym_LT_GT;
	v->a[24624] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24625] = anon_sym_DOLLAR;
	v->a[24626] = anon_sym_DQUOTE;
	v->a[24627] = sym_raw_string;
	v->a[24628] = sym_number;
	v->a[24629] = anon_sym_DOLLAR_LBRACE;
	v->a[24630] = anon_sym_DOLLAR_LPAREN;
	v->a[24631] = anon_sym_BQUOTE;
	v->a[24632] = sym_word;
	v->a[24633] = 17;
	v->a[24634] = actions(664);
	v->a[24635] = 1;
	v->a[24636] = sym_comment;
	v->a[24637] = actions(702);
	v->a[24638] = 1;
	v->a[24639] = anon_sym_CARET;
	small_parse_table_1232(v);
}

void	small_parse_table_1232(t_small_parse_table_array *v)
{
	v->a[24640] = actions(704);
	v->a[24641] = 1;
	v->a[24642] = anon_sym_AMP;
	v->a[24643] = actions(710);
	v->a[24644] = 1;
	v->a[24645] = anon_sym_PIPE;
	v->a[24646] = actions(712);
	v->a[24647] = 1;
	v->a[24648] = anon_sym_AMP_AMP;
	v->a[24649] = actions(714);
	v->a[24650] = 1;
	v->a[24651] = anon_sym_PIPE_PIPE;
	v->a[24652] = actions(716);
	v->a[24653] = 1;
	v->a[24654] = anon_sym_QMARK;
	v->a[24655] = actions(718);
	v->a[24656] = 1;
	v->a[24657] = anon_sym_EQ;
	v->a[24658] = actions(962);
	v->a[24659] = 1;
	small_parse_table_1233(v);
}

void	small_parse_table_1233(t_small_parse_table_array *v)
{
	v->a[24660] = anon_sym_RPAREN_RPAREN;
	v->a[24661] = actions(684);
	v->a[24662] = 2;
	v->a[24663] = anon_sym_GT_GT;
	v->a[24664] = anon_sym_LT_LT;
	v->a[24665] = actions(686);
	v->a[24666] = 2;
	v->a[24667] = anon_sym_PLUS;
	v->a[24668] = anon_sym_DASH;
	v->a[24669] = actions(690);
	v->a[24670] = 2;
	v->a[24671] = anon_sym_PLUS_PLUS2;
	v->a[24672] = anon_sym_DASH_DASH2;
	v->a[24673] = actions(700);
	v->a[24674] = 2;
	v->a[24675] = anon_sym_LT;
	v->a[24676] = anon_sym_GT;
	v->a[24677] = actions(706);
	v->a[24678] = 2;
	v->a[24679] = anon_sym_EQ_EQ;
	small_parse_table_1234(v);
}

void	small_parse_table_1234(t_small_parse_table_array *v)
{
	v->a[24680] = anon_sym_BANG_EQ;
	v->a[24681] = actions(708);
	v->a[24682] = 2;
	v->a[24683] = anon_sym_LT_EQ;
	v->a[24684] = anon_sym_GT_EQ;
	v->a[24685] = actions(688);
	v->a[24686] = 3;
	v->a[24687] = anon_sym_STAR;
	v->a[24688] = anon_sym_SLASH;
	v->a[24689] = anon_sym_PERCENT;
	v->a[24690] = actions(953);
	v->a[24691] = 10;
	v->a[24692] = anon_sym_PLUS_EQ;
	v->a[24693] = anon_sym_DASH_EQ;
	v->a[24694] = anon_sym_STAR_EQ;
	v->a[24695] = anon_sym_SLASH_EQ;
	v->a[24696] = anon_sym_PERCENT_EQ;
	v->a[24697] = anon_sym_LT_LT_EQ;
	v->a[24698] = anon_sym_GT_GT_EQ;
	v->a[24699] = anon_sym_AMP_EQ;
	small_parse_table_1235(v);
}

/* EOF small_parse_table_246.c */
