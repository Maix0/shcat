/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1086.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5430(t_small_parse_table_array *v)
{
	v->a[108600] = anon_sym_EQ_EQ;
	v->a[108601] = anon_sym_LT;
	v->a[108602] = anon_sym_GT;
	v->a[108603] = anon_sym_LT_LT;
	v->a[108604] = anon_sym_EQ_TILDE;
	v->a[108605] = anon_sym_AMP_GT;
	v->a[108606] = anon_sym_LT_AMP;
	v->a[108607] = anon_sym_GT_AMP;
	v->a[108608] = anon_sym_DOLLAR;
	v->a[108609] = aux_sym_number_token1;
	v->a[108610] = aux_sym_number_token2;
	v->a[108611] = anon_sym_DOLLAR_LPAREN;
	v->a[108612] = anon_sym_BQUOTE;
	v->a[108613] = sym_word;
	v->a[108614] = actions(1253);
	v->a[108615] = 25;
	v->a[108616] = sym_file_descriptor;
	v->a[108617] = sym_test_operator;
	v->a[108618] = sym__bare_dollar;
	v->a[108619] = sym__brace_start;
	small_parse_table_5431(v);
}

void	small_parse_table_5431(t_small_parse_table_array *v)
{
	v->a[108620] = anon_sym_LPAREN_LPAREN;
	v->a[108621] = anon_sym_PIPE_PIPE;
	v->a[108622] = anon_sym_AMP_AMP;
	v->a[108623] = anon_sym_GT_GT;
	v->a[108624] = anon_sym_PIPE_AMP;
	v->a[108625] = anon_sym_AMP_GT_GT;
	v->a[108626] = anon_sym_GT_PIPE;
	v->a[108627] = anon_sym_LT_AMP_DASH;
	v->a[108628] = anon_sym_GT_AMP_DASH;
	v->a[108629] = anon_sym_LT_LT_DASH;
	v->a[108630] = anon_sym_LT_LT_LT;
	v->a[108631] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108632] = anon_sym_DOLLAR_LBRACK;
	v->a[108633] = sym__special_character;
	v->a[108634] = anon_sym_DQUOTE;
	v->a[108635] = sym_raw_string;
	v->a[108636] = sym_ansi_c_string;
	v->a[108637] = anon_sym_DOLLAR_LBRACE;
	v->a[108638] = anon_sym_DOLLAR_BQUOTE;
	v->a[108639] = anon_sym_LT_LPAREN;
	small_parse_table_5432(v);
}

void	small_parse_table_5432(t_small_parse_table_array *v)
{
	v->a[108640] = anon_sym_GT_LPAREN;
	v->a[108641] = 8;
	v->a[108642] = actions(3);
	v->a[108643] = 1;
	v->a[108644] = sym_comment;
	v->a[108645] = actions(5826);
	v->a[108646] = 1;
	v->a[108647] = aux_sym_heredoc_redirect_token1;
	v->a[108648] = actions(5828);
	v->a[108649] = 1;
	v->a[108650] = sym_file_descriptor;
	v->a[108651] = actions(6228);
	v->a[108652] = 1;
	v->a[108653] = anon_sym_RPAREN;
	v->a[108654] = actions(5831);
	v->a[108655] = 3;
	v->a[108656] = sym_variable_name;
	v->a[108657] = sym_test_operator;
	v->a[108658] = sym__brace_start;
	v->a[108659] = actions(5821);
	small_parse_table_5433(v);
}

void	small_parse_table_5433(t_small_parse_table_array *v)
{
	v->a[108660] = 9;
	v->a[108661] = anon_sym_SEMI;
	v->a[108662] = anon_sym_PIPE_PIPE;
	v->a[108663] = anon_sym_AMP_AMP;
	v->a[108664] = anon_sym_PIPE;
	v->a[108665] = anon_sym_AMP;
	v->a[108666] = anon_sym_LT_LT;
	v->a[108667] = anon_sym_SEMI_SEMI;
	v->a[108668] = anon_sym_PIPE_AMP;
	v->a[108669] = anon_sym_LT_LT_DASH;
	v->a[108670] = actions(5823);
	v->a[108671] = 11;
	v->a[108672] = anon_sym_LT;
	v->a[108673] = anon_sym_GT;
	v->a[108674] = anon_sym_GT_GT;
	v->a[108675] = anon_sym_AMP_GT;
	v->a[108676] = anon_sym_AMP_GT_GT;
	v->a[108677] = anon_sym_LT_AMP;
	v->a[108678] = anon_sym_GT_AMP;
	v->a[108679] = anon_sym_GT_PIPE;
	small_parse_table_5434(v);
}

void	small_parse_table_5434(t_small_parse_table_array *v)
{
	v->a[108680] = anon_sym_LT_AMP_DASH;
	v->a[108681] = anon_sym_GT_AMP_DASH;
	v->a[108682] = anon_sym_LT_LT_LT;
	v->a[108683] = actions(5819);
	v->a[108684] = 17;
	v->a[108685] = anon_sym_LPAREN_LPAREN;
	v->a[108686] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108687] = anon_sym_DOLLAR_LBRACK;
	v->a[108688] = anon_sym_DOLLAR;
	v->a[108689] = sym__special_character;
	v->a[108690] = anon_sym_DQUOTE;
	v->a[108691] = sym_raw_string;
	v->a[108692] = sym_ansi_c_string;
	v->a[108693] = aux_sym_number_token1;
	v->a[108694] = aux_sym_number_token2;
	v->a[108695] = anon_sym_DOLLAR_LBRACE;
	v->a[108696] = anon_sym_DOLLAR_LPAREN;
	v->a[108697] = anon_sym_BQUOTE;
	v->a[108698] = anon_sym_DOLLAR_BQUOTE;
	v->a[108699] = anon_sym_LT_LPAREN;
	small_parse_table_5435(v);
}

/* EOF small_parse_table_1086.c */
