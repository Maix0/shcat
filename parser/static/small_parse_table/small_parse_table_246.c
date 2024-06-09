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
	v->a[24601] = anon_sym_DQUOTE;
	v->a[24602] = actions(583);
	v->a[24603] = 1;
	v->a[24604] = aux_sym_number_token1;
	v->a[24605] = actions(586);
	v->a[24606] = 1;
	v->a[24607] = aux_sym_number_token2;
	v->a[24608] = actions(589);
	v->a[24609] = 1;
	v->a[24610] = anon_sym_DOLLAR_LBRACE;
	v->a[24611] = actions(592);
	v->a[24612] = 1;
	v->a[24613] = anon_sym_DOLLAR_LPAREN;
	v->a[24614] = actions(595);
	v->a[24615] = 1;
	v->a[24616] = anon_sym_BQUOTE;
	v->a[24617] = actions(598);
	v->a[24618] = 1;
	v->a[24619] = sym_file_descriptor;
	small_parse_table_1231(v);
}

void	small_parse_table_1231(t_small_parse_table_array *v)
{
	v->a[24620] = actions(600);
	v->a[24621] = 1;
	v->a[24622] = sym__bare_dollar;
	v->a[24623] = state(224);
	v->a[24624] = 1;
	v->a[24625] = aux_sym_command_repeat2;
	v->a[24626] = state(753);
	v->a[24627] = 1;
	v->a[24628] = sym_concatenation;
	v->a[24629] = actions(840);
	v->a[24630] = 2;
	v->a[24631] = sym_raw_string;
	v->a[24632] = sym_word;
	v->a[24633] = state(452);
	v->a[24634] = 6;
	v->a[24635] = sym_arithmetic_expansion;
	v->a[24636] = sym_string;
	v->a[24637] = sym_number;
	v->a[24638] = sym_simple_expansion;
	v->a[24639] = sym_expansion;
	small_parse_table_1232(v);
}

void	small_parse_table_1232(t_small_parse_table_array *v)
{
	v->a[24640] = sym_command_substitution;
	v->a[24641] = actions(572);
	v->a[24642] = 19;
	v->a[24643] = anon_sym_PIPE;
	v->a[24644] = anon_sym_SEMI_SEMI;
	v->a[24645] = anon_sym_AMP_AMP;
	v->a[24646] = anon_sym_PIPE_PIPE;
	v->a[24647] = anon_sym_LT;
	v->a[24648] = anon_sym_GT;
	v->a[24649] = anon_sym_GT_GT;
	v->a[24650] = anon_sym_AMP_GT;
	v->a[24651] = anon_sym_AMP_GT_GT;
	v->a[24652] = anon_sym_LT_AMP;
	v->a[24653] = anon_sym_GT_AMP;
	v->a[24654] = anon_sym_GT_PIPE;
	v->a[24655] = anon_sym_LT_AMP_DASH;
	v->a[24656] = anon_sym_GT_AMP_DASH;
	v->a[24657] = anon_sym_LT_LT;
	v->a[24658] = anon_sym_LT_LT_DASH;
	v->a[24659] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1233(v);
}

void	small_parse_table_1233(t_small_parse_table_array *v)
{
	v->a[24660] = anon_sym_AMP;
	v->a[24661] = anon_sym_SEMI;
	v->a[24662] = 16;
	v->a[24663] = actions(3);
	v->a[24664] = 1;
	v->a[24665] = sym_comment;
	v->a[24666] = actions(485);
	v->a[24667] = 1;
	v->a[24668] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24669] = actions(487);
	v->a[24670] = 1;
	v->a[24671] = anon_sym_DOLLAR;
	v->a[24672] = actions(489);
	v->a[24673] = 1;
	v->a[24674] = anon_sym_DQUOTE;
	v->a[24675] = actions(491);
	v->a[24676] = 1;
	v->a[24677] = aux_sym_number_token1;
	v->a[24678] = actions(493);
	v->a[24679] = 1;
	small_parse_table_1234(v);
}

void	small_parse_table_1234(t_small_parse_table_array *v)
{
	v->a[24680] = aux_sym_number_token2;
	v->a[24681] = actions(495);
	v->a[24682] = 1;
	v->a[24683] = anon_sym_DOLLAR_LBRACE;
	v->a[24684] = actions(497);
	v->a[24685] = 1;
	v->a[24686] = anon_sym_DOLLAR_LPAREN;
	v->a[24687] = actions(499);
	v->a[24688] = 1;
	v->a[24689] = anon_sym_BQUOTE;
	v->a[24690] = actions(501);
	v->a[24691] = 1;
	v->a[24692] = sym__bare_dollar;
	v->a[24693] = actions(559);
	v->a[24694] = 1;
	v->a[24695] = sym_file_descriptor;
	v->a[24696] = state(224);
	v->a[24697] = 1;
	v->a[24698] = aux_sym_command_repeat2;
	v->a[24699] = state(753);
	small_parse_table_1235(v);
}

/* EOF small_parse_table_246.c */
