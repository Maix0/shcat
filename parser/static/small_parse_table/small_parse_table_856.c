/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_856.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4280(t_small_parse_table_array *v)
{
	v->a[85600] = anon_sym_AMP_GT;
	v->a[85601] = anon_sym_AMP_GT_GT;
	v->a[85602] = anon_sym_LT_AMP;
	v->a[85603] = anon_sym_GT_AMP;
	v->a[85604] = anon_sym_GT_PIPE;
	v->a[85605] = anon_sym_LT_AMP_DASH;
	v->a[85606] = anon_sym_GT_AMP_DASH;
	v->a[85607] = anon_sym_LT_LT_DASH;
	v->a[85608] = anon_sym_LT_LT_LT;
	v->a[85609] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85610] = anon_sym_DOLLAR_LBRACK;
	v->a[85611] = anon_sym_DOLLAR;
	v->a[85612] = sym__special_character;
	v->a[85613] = anon_sym_DQUOTE;
	v->a[85614] = sym_raw_string;
	v->a[85615] = sym_ansi_c_string;
	v->a[85616] = aux_sym_number_token1;
	v->a[85617] = aux_sym_number_token2;
	v->a[85618] = anon_sym_DOLLAR_LBRACE;
	v->a[85619] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4281(v);
}

void	small_parse_table_4281(t_small_parse_table_array *v)
{
	v->a[85620] = anon_sym_BQUOTE;
	v->a[85621] = anon_sym_DOLLAR_BQUOTE;
	v->a[85622] = anon_sym_LT_LPAREN;
	v->a[85623] = anon_sym_GT_LPAREN;
	v->a[85624] = sym_word;
	v->a[85625] = 3;
	v->a[85626] = actions(3);
	v->a[85627] = 1;
	v->a[85628] = sym_comment;
	v->a[85629] = actions(1318);
	v->a[85630] = 5;
	v->a[85631] = sym_file_descriptor;
	v->a[85632] = sym__concat;
	v->a[85633] = sym_test_operator;
	v->a[85634] = sym__brace_start;
	v->a[85635] = aux_sym_heredoc_redirect_token1;
	v->a[85636] = actions(1316);
	v->a[85637] = 39;
	v->a[85638] = anon_sym_LPAREN_LPAREN;
	v->a[85639] = anon_sym_SEMI;
	small_parse_table_4282(v);
}

void	small_parse_table_4282(t_small_parse_table_array *v)
{
	v->a[85640] = anon_sym_PIPE_PIPE;
	v->a[85641] = anon_sym_AMP_AMP;
	v->a[85642] = anon_sym_PIPE;
	v->a[85643] = anon_sym_AMP;
	v->a[85644] = anon_sym_LT;
	v->a[85645] = anon_sym_GT;
	v->a[85646] = anon_sym_LT_LT;
	v->a[85647] = anon_sym_GT_GT;
	v->a[85648] = anon_sym_RPAREN;
	v->a[85649] = anon_sym_SEMI_SEMI;
	v->a[85650] = anon_sym_PIPE_AMP;
	v->a[85651] = anon_sym_AMP_GT;
	v->a[85652] = anon_sym_AMP_GT_GT;
	v->a[85653] = anon_sym_LT_AMP;
	v->a[85654] = anon_sym_GT_AMP;
	v->a[85655] = anon_sym_GT_PIPE;
	v->a[85656] = anon_sym_LT_AMP_DASH;
	v->a[85657] = anon_sym_GT_AMP_DASH;
	v->a[85658] = anon_sym_LT_LT_DASH;
	v->a[85659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4283(v);
}

void	small_parse_table_4283(t_small_parse_table_array *v)
{
	v->a[85660] = anon_sym_DOLLAR_LBRACK;
	v->a[85661] = aux_sym_concatenation_token1;
	v->a[85662] = anon_sym_DOLLAR;
	v->a[85663] = sym__special_character;
	v->a[85664] = anon_sym_DQUOTE;
	v->a[85665] = sym_raw_string;
	v->a[85666] = sym_ansi_c_string;
	v->a[85667] = aux_sym_number_token1;
	v->a[85668] = aux_sym_number_token2;
	v->a[85669] = anon_sym_DOLLAR_LBRACE;
	v->a[85670] = anon_sym_DOLLAR_LPAREN;
	v->a[85671] = anon_sym_BQUOTE;
	v->a[85672] = anon_sym_DOLLAR_BQUOTE;
	v->a[85673] = anon_sym_LT_LPAREN;
	v->a[85674] = anon_sym_GT_LPAREN;
	v->a[85675] = aux_sym__simple_variable_name_token1;
	v->a[85676] = sym_word;
	v->a[85677] = 5;
	v->a[85678] = actions(3);
	v->a[85679] = 1;
	small_parse_table_4284(v);
}

void	small_parse_table_4284(t_small_parse_table_array *v)
{
	v->a[85680] = sym_comment;
	v->a[85681] = actions(5983);
	v->a[85682] = 1;
	v->a[85683] = sym__special_character;
	v->a[85684] = state(1789);
	v->a[85685] = 1;
	v->a[85686] = aux_sym__literal_repeat1;
	v->a[85687] = actions(1364);
	v->a[85688] = 4;
	v->a[85689] = sym_file_descriptor;
	v->a[85690] = sym_test_operator;
	v->a[85691] = sym__brace_start;
	v->a[85692] = aux_sym_heredoc_redirect_token1;
	v->a[85693] = actions(1362);
	v->a[85694] = 38;
	v->a[85695] = anon_sym_LPAREN_LPAREN;
	v->a[85696] = anon_sym_SEMI;
	v->a[85697] = anon_sym_PIPE_PIPE;
	v->a[85698] = anon_sym_AMP_AMP;
	v->a[85699] = anon_sym_PIPE;
	small_parse_table_4285(v);
}

/* EOF small_parse_table_856.c */
