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
	v->a[24600] = sym_word;
	v->a[24601] = state(1968);
	v->a[24602] = 9;
	v->a[24603] = sym_arithmetic_expansion;
	v->a[24604] = sym_brace_expression;
	v->a[24605] = sym_string;
	v->a[24606] = sym_translated_string;
	v->a[24607] = sym_number;
	v->a[24608] = sym_simple_expansion;
	v->a[24609] = sym_expansion;
	v->a[24610] = sym_command_substitution;
	v->a[24611] = sym_process_substitution;
	v->a[24612] = actions(2072);
	v->a[24613] = 19;
	v->a[24614] = anon_sym_SEMI;
	v->a[24615] = anon_sym_PIPE_PIPE;
	v->a[24616] = anon_sym_AMP_AMP;
	v->a[24617] = anon_sym_PIPE;
	v->a[24618] = anon_sym_AMP;
	v->a[24619] = anon_sym_LT;
	small_parse_table_1231(v);
}

void	small_parse_table_1231(t_small_parse_table_array *v)
{
	v->a[24620] = anon_sym_GT;
	v->a[24621] = anon_sym_LT_LT;
	v->a[24622] = anon_sym_GT_GT;
	v->a[24623] = anon_sym_SEMI_SEMI;
	v->a[24624] = anon_sym_PIPE_AMP;
	v->a[24625] = anon_sym_AMP_GT;
	v->a[24626] = anon_sym_AMP_GT_GT;
	v->a[24627] = anon_sym_LT_AMP;
	v->a[24628] = anon_sym_GT_AMP;
	v->a[24629] = anon_sym_GT_PIPE;
	v->a[24630] = anon_sym_LT_AMP_DASH;
	v->a[24631] = anon_sym_GT_AMP_DASH;
	v->a[24632] = anon_sym_LT_LT_DASH;
	v->a[24633] = 21;
	v->a[24634] = actions(3);
	v->a[24635] = 1;
	v->a[24636] = sym_comment;
	v->a[24637] = actions(3580);
	v->a[24638] = 1;
	v->a[24639] = anon_sym_DQUOTE;
	small_parse_table_1232(v);
}

void	small_parse_table_1232(t_small_parse_table_array *v)
{
	v->a[24640] = actions(3610);
	v->a[24641] = 1;
	v->a[24642] = anon_sym_DOLLAR_LBRACK;
	v->a[24643] = actions(3612);
	v->a[24644] = 1;
	v->a[24645] = anon_sym_DOLLAR;
	v->a[24646] = actions(3616);
	v->a[24647] = 1;
	v->a[24648] = aux_sym_number_token1;
	v->a[24649] = actions(3618);
	v->a[24650] = 1;
	v->a[24651] = aux_sym_number_token2;
	v->a[24652] = actions(3620);
	v->a[24653] = 1;
	v->a[24654] = anon_sym_DOLLAR_LBRACE;
	v->a[24655] = actions(3622);
	v->a[24656] = 1;
	v->a[24657] = anon_sym_DOLLAR_LPAREN;
	v->a[24658] = actions(3624);
	v->a[24659] = 1;
	small_parse_table_1233(v);
}

void	small_parse_table_1233(t_small_parse_table_array *v)
{
	v->a[24660] = anon_sym_BQUOTE;
	v->a[24661] = actions(3626);
	v->a[24662] = 1;
	v->a[24663] = anon_sym_DOLLAR_BQUOTE;
	v->a[24664] = actions(3632);
	v->a[24665] = 1;
	v->a[24666] = sym__brace_start;
	v->a[24667] = actions(4133);
	v->a[24668] = 1;
	v->a[24669] = sym__special_character;
	v->a[24670] = actions(4135);
	v->a[24671] = 1;
	v->a[24672] = sym_test_operator;
	v->a[24673] = state(2270);
	v->a[24674] = 1;
	v->a[24675] = aux_sym__literal_repeat1;
	v->a[24676] = actions(2096);
	v->a[24677] = 2;
	v->a[24678] = sym_file_descriptor;
	v->a[24679] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1234(v);
}

void	small_parse_table_1234(t_small_parse_table_array *v)
{
	v->a[24680] = actions(3608);
	v->a[24681] = 2;
	v->a[24682] = anon_sym_LPAREN_LPAREN;
	v->a[24683] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24684] = actions(3628);
	v->a[24685] = 2;
	v->a[24686] = anon_sym_LT_LPAREN;
	v->a[24687] = anon_sym_GT_LPAREN;
	v->a[24688] = state(781);
	v->a[24689] = 2;
	v->a[24690] = sym_concatenation;
	v->a[24691] = aux_sym_for_statement_repeat1;
	v->a[24692] = actions(4131);
	v->a[24693] = 3;
	v->a[24694] = sym_raw_string;
	v->a[24695] = sym_ansi_c_string;
	v->a[24696] = sym_word;
	v->a[24697] = state(1968);
	v->a[24698] = 9;
	v->a[24699] = sym_arithmetic_expansion;
	small_parse_table_1235(v);
}

/* EOF small_parse_table_246.c */
