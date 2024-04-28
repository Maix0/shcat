/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1076.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5380(t_small_parse_table_array *v)
{
	v->a[107600] = sym_comment;
	v->a[107601] = actions(5826);
	v->a[107602] = 1;
	v->a[107603] = aux_sym_heredoc_redirect_token1;
	v->a[107604] = actions(5828);
	v->a[107605] = 1;
	v->a[107606] = sym_file_descriptor;
	v->a[107607] = actions(6202);
	v->a[107608] = 1;
	v->a[107609] = anon_sym_RPAREN;
	v->a[107610] = actions(5831);
	v->a[107611] = 3;
	v->a[107612] = sym_variable_name;
	v->a[107613] = sym_test_operator;
	v->a[107614] = sym__brace_start;
	v->a[107615] = actions(5821);
	v->a[107616] = 9;
	v->a[107617] = anon_sym_SEMI;
	v->a[107618] = anon_sym_PIPE_PIPE;
	v->a[107619] = anon_sym_AMP_AMP;
	small_parse_table_5381(v);
}

void	small_parse_table_5381(t_small_parse_table_array *v)
{
	v->a[107620] = anon_sym_PIPE;
	v->a[107621] = anon_sym_AMP;
	v->a[107622] = anon_sym_LT_LT;
	v->a[107623] = anon_sym_SEMI_SEMI;
	v->a[107624] = anon_sym_PIPE_AMP;
	v->a[107625] = anon_sym_LT_LT_DASH;
	v->a[107626] = actions(5823);
	v->a[107627] = 11;
	v->a[107628] = anon_sym_LT;
	v->a[107629] = anon_sym_GT;
	v->a[107630] = anon_sym_GT_GT;
	v->a[107631] = anon_sym_AMP_GT;
	v->a[107632] = anon_sym_AMP_GT_GT;
	v->a[107633] = anon_sym_LT_AMP;
	v->a[107634] = anon_sym_GT_AMP;
	v->a[107635] = anon_sym_GT_PIPE;
	v->a[107636] = anon_sym_LT_AMP_DASH;
	v->a[107637] = anon_sym_GT_AMP_DASH;
	v->a[107638] = anon_sym_LT_LT_LT;
	v->a[107639] = actions(5819);
	small_parse_table_5382(v);
}

void	small_parse_table_5382(t_small_parse_table_array *v)
{
	v->a[107640] = 17;
	v->a[107641] = anon_sym_LPAREN_LPAREN;
	v->a[107642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[107643] = anon_sym_DOLLAR_LBRACK;
	v->a[107644] = anon_sym_DOLLAR;
	v->a[107645] = sym__special_character;
	v->a[107646] = anon_sym_DQUOTE;
	v->a[107647] = sym_raw_string;
	v->a[107648] = sym_ansi_c_string;
	v->a[107649] = aux_sym_number_token1;
	v->a[107650] = aux_sym_number_token2;
	v->a[107651] = anon_sym_DOLLAR_LBRACE;
	v->a[107652] = anon_sym_DOLLAR_LPAREN;
	v->a[107653] = anon_sym_BQUOTE;
	v->a[107654] = anon_sym_DOLLAR_BQUOTE;
	v->a[107655] = anon_sym_LT_LPAREN;
	v->a[107656] = anon_sym_GT_LPAREN;
	v->a[107657] = sym_word;
	v->a[107658] = 3;
	v->a[107659] = actions(3);
	small_parse_table_5383(v);
}

void	small_parse_table_5383(t_small_parse_table_array *v)
{
	v->a[107660] = 1;
	v->a[107661] = sym_comment;
	v->a[107662] = actions(1330);
	v->a[107663] = 5;
	v->a[107664] = sym_file_descriptor;
	v->a[107665] = sym__concat;
	v->a[107666] = sym_test_operator;
	v->a[107667] = sym__brace_start;
	v->a[107668] = aux_sym_heredoc_redirect_token1;
	v->a[107669] = actions(1328);
	v->a[107670] = 38;
	v->a[107671] = anon_sym_LPAREN_LPAREN;
	v->a[107672] = anon_sym_SEMI;
	v->a[107673] = anon_sym_PIPE_PIPE;
	v->a[107674] = anon_sym_AMP_AMP;
	v->a[107675] = anon_sym_PIPE;
	v->a[107676] = anon_sym_AMP;
	v->a[107677] = anon_sym_LT;
	v->a[107678] = anon_sym_GT;
	v->a[107679] = anon_sym_LT_LT;
	small_parse_table_5384(v);
}

void	small_parse_table_5384(t_small_parse_table_array *v)
{
	v->a[107680] = anon_sym_GT_GT;
	v->a[107681] = anon_sym_RPAREN;
	v->a[107682] = anon_sym_SEMI_SEMI;
	v->a[107683] = anon_sym_PIPE_AMP;
	v->a[107684] = anon_sym_AMP_GT;
	v->a[107685] = anon_sym_AMP_GT_GT;
	v->a[107686] = anon_sym_LT_AMP;
	v->a[107687] = anon_sym_GT_AMP;
	v->a[107688] = anon_sym_GT_PIPE;
	v->a[107689] = anon_sym_LT_AMP_DASH;
	v->a[107690] = anon_sym_GT_AMP_DASH;
	v->a[107691] = anon_sym_LT_LT_DASH;
	v->a[107692] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[107693] = anon_sym_DOLLAR_LBRACK;
	v->a[107694] = aux_sym_concatenation_token1;
	v->a[107695] = anon_sym_DOLLAR;
	v->a[107696] = sym__special_character;
	v->a[107697] = anon_sym_DQUOTE;
	v->a[107698] = sym_raw_string;
	v->a[107699] = sym_ansi_c_string;
	small_parse_table_5385(v);
}

/* EOF small_parse_table_1076.c */
