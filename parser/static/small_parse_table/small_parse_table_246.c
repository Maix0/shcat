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
	v->a[24600] = anon_sym_AMP;
	v->a[24601] = aux_sym_concatenation_token1;
	v->a[24602] = anon_sym_DOLLAR;
	v->a[24603] = sym__special_character;
	v->a[24604] = anon_sym_DQUOTE;
	v->a[24605] = sym_raw_string;
	v->a[24606] = aux_sym_number_token1;
	v->a[24607] = aux_sym_number_token2;
	v->a[24608] = anon_sym_DOLLAR_LBRACE;
	v->a[24609] = anon_sym_DOLLAR_LPAREN;
	v->a[24610] = anon_sym_BQUOTE;
	v->a[24611] = anon_sym_DOLLAR_BQUOTE;
	v->a[24612] = aux_sym__simple_variable_name_token1;
	v->a[24613] = sym_word;
	v->a[24614] = anon_sym_SEMI;
	v->a[24615] = 6;
	v->a[24616] = actions(3);
	v->a[24617] = 1;
	v->a[24618] = sym_comment;
	v->a[24619] = actions(3155);
	small_parse_table_1231(v);
}

void	small_parse_table_1231(t_small_parse_table_array *v)
{
	v->a[24620] = 1;
	v->a[24621] = sym_variable_name;
	v->a[24622] = actions(3153);
	v->a[24623] = 2;
	v->a[24624] = aux_sym__simple_variable_name_token1;
	v->a[24625] = aux_sym__multiline_variable_name_token1;
	v->a[24626] = actions(828);
	v->a[24627] = 3;
	v->a[24628] = sym_file_descriptor;
	v->a[24629] = sym_test_operator;
	v->a[24630] = sym__brace_start;
	v->a[24631] = actions(3151);
	v->a[24632] = 9;
	v->a[24633] = anon_sym_BANG;
	v->a[24634] = anon_sym_DASH;
	v->a[24635] = anon_sym_STAR;
	v->a[24636] = anon_sym_QMARK;
	v->a[24637] = anon_sym_DOLLAR;
	v->a[24638] = anon_sym_POUND;
	v->a[24639] = anon_sym_AT;
	small_parse_table_1232(v);
}

void	small_parse_table_1232(t_small_parse_table_array *v)
{
	v->a[24640] = anon_sym_0;
	v->a[24641] = anon_sym__;
	v->a[24642] = actions(826);
	v->a[24643] = 27;
	v->a[24644] = anon_sym_PIPE;
	v->a[24645] = anon_sym_PIPE_AMP;
	v->a[24646] = anon_sym_AMP_AMP;
	v->a[24647] = anon_sym_PIPE_PIPE;
	v->a[24648] = anon_sym_LT;
	v->a[24649] = anon_sym_GT;
	v->a[24650] = anon_sym_GT_GT;
	v->a[24651] = anon_sym_AMP_GT;
	v->a[24652] = anon_sym_AMP_GT_GT;
	v->a[24653] = anon_sym_LT_AMP;
	v->a[24654] = anon_sym_GT_AMP;
	v->a[24655] = anon_sym_GT_PIPE;
	v->a[24656] = anon_sym_LT_AMP_DASH;
	v->a[24657] = anon_sym_GT_AMP_DASH;
	v->a[24658] = anon_sym_LT_LT;
	v->a[24659] = anon_sym_LT_LT_DASH;
	small_parse_table_1233(v);
}

void	small_parse_table_1233(t_small_parse_table_array *v)
{
	v->a[24660] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24661] = sym__special_character;
	v->a[24662] = anon_sym_DQUOTE;
	v->a[24663] = sym_raw_string;
	v->a[24664] = aux_sym_number_token1;
	v->a[24665] = aux_sym_number_token2;
	v->a[24666] = anon_sym_DOLLAR_LBRACE;
	v->a[24667] = anon_sym_DOLLAR_LPAREN;
	v->a[24668] = anon_sym_BQUOTE;
	v->a[24669] = anon_sym_DOLLAR_BQUOTE;
	v->a[24670] = sym_word;
	v->a[24671] = 3;
	v->a[24672] = actions(3);
	v->a[24673] = 1;
	v->a[24674] = sym_comment;
	v->a[24675] = actions(3159);
	v->a[24676] = 6;
	v->a[24677] = sym_file_descriptor;
	v->a[24678] = sym__concat;
	v->a[24679] = sym_test_operator;
	small_parse_table_1234(v);
}

void	small_parse_table_1234(t_small_parse_table_array *v)
{
	v->a[24680] = sym__bare_dollar;
	v->a[24681] = sym__brace_start;
	v->a[24682] = aux_sym_heredoc_redirect_token1;
	v->a[24683] = actions(3157);
	v->a[24684] = 36;
	v->a[24685] = anon_sym_esac;
	v->a[24686] = anon_sym_LPAREN;
	v->a[24687] = anon_sym_PIPE;
	v->a[24688] = anon_sym_SEMI_SEMI;
	v->a[24689] = anon_sym_SEMI_AMP;
	v->a[24690] = anon_sym_SEMI_SEMI_AMP;
	v->a[24691] = anon_sym_PIPE_AMP;
	v->a[24692] = anon_sym_AMP_AMP;
	v->a[24693] = anon_sym_PIPE_PIPE;
	v->a[24694] = anon_sym_LT;
	v->a[24695] = anon_sym_GT;
	v->a[24696] = anon_sym_GT_GT;
	v->a[24697] = anon_sym_AMP_GT;
	v->a[24698] = anon_sym_AMP_GT_GT;
	v->a[24699] = anon_sym_LT_AMP;
	small_parse_table_1235(v);
}

/* EOF small_parse_table_246.c */
