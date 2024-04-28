/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_726.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3630(t_small_parse_table_array *v)
{
	v->a[72600] = actions(4253);
	v->a[72601] = 2;
	v->a[72602] = anon_sym_PIPE;
	v->a[72603] = anon_sym_PIPE_AMP;
	v->a[72604] = state(5148);
	v->a[72605] = 2;
	v->a[72606] = sym_variable_assignment;
	v->a[72607] = aux_sym_variable_assignments_repeat1;
	v->a[72608] = actions(4261);
	v->a[72609] = 3;
	v->a[72610] = sym_file_descriptor;
	v->a[72611] = sym_test_operator;
	v->a[72612] = sym__brace_start;
	v->a[72613] = state(5366);
	v->a[72614] = 3;
	v->a[72615] = sym_file_redirect;
	v->a[72616] = sym_heredoc_redirect;
	v->a[72617] = aux_sym_redirected_statement_repeat1;
	v->a[72618] = actions(4270);
	v->a[72619] = 4;
	small_parse_table_3631(v);
}

void	small_parse_table_3631(t_small_parse_table_array *v)
{
	v->a[72620] = anon_sym_PIPE_PIPE;
	v->a[72621] = anon_sym_AMP_AMP;
	v->a[72622] = anon_sym_LT_LT;
	v->a[72623] = anon_sym_LT_LT_DASH;
	v->a[72624] = actions(4247);
	v->a[72625] = 28;
	v->a[72626] = anon_sym_LPAREN_LPAREN;
	v->a[72627] = anon_sym_LT;
	v->a[72628] = anon_sym_GT;
	v->a[72629] = anon_sym_GT_GT;
	v->a[72630] = anon_sym_AMP_GT;
	v->a[72631] = anon_sym_AMP_GT_GT;
	v->a[72632] = anon_sym_LT_AMP;
	v->a[72633] = anon_sym_GT_AMP;
	v->a[72634] = anon_sym_GT_PIPE;
	v->a[72635] = anon_sym_LT_AMP_DASH;
	v->a[72636] = anon_sym_GT_AMP_DASH;
	v->a[72637] = anon_sym_LT_LT_LT;
	v->a[72638] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72639] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_3632(v);
}

void	small_parse_table_3632(t_small_parse_table_array *v)
{
	v->a[72640] = anon_sym_DOLLAR;
	v->a[72641] = sym__special_character;
	v->a[72642] = anon_sym_DQUOTE;
	v->a[72643] = sym_raw_string;
	v->a[72644] = sym_ansi_c_string;
	v->a[72645] = aux_sym_number_token1;
	v->a[72646] = aux_sym_number_token2;
	v->a[72647] = anon_sym_DOLLAR_LBRACE;
	v->a[72648] = anon_sym_DOLLAR_LPAREN;
	v->a[72649] = anon_sym_BQUOTE;
	v->a[72650] = anon_sym_DOLLAR_BQUOTE;
	v->a[72651] = anon_sym_LT_LPAREN;
	v->a[72652] = anon_sym_GT_LPAREN;
	v->a[72653] = sym_word;
	v->a[72654] = 3;
	v->a[72655] = actions(3);
	v->a[72656] = 1;
	v->a[72657] = sym_comment;
	v->a[72658] = actions(1354);
	v->a[72659] = 6;
	small_parse_table_3633(v);
}

void	small_parse_table_3633(t_small_parse_table_array *v)
{
	v->a[72660] = sym_file_descriptor;
	v->a[72661] = sym__concat;
	v->a[72662] = sym_variable_name;
	v->a[72663] = sym_test_operator;
	v->a[72664] = sym__brace_start;
	v->a[72665] = aux_sym_heredoc_redirect_token1;
	v->a[72666] = actions(1352);
	v->a[72667] = 39;
	v->a[72668] = anon_sym_LPAREN_LPAREN;
	v->a[72669] = anon_sym_SEMI;
	v->a[72670] = anon_sym_PIPE_PIPE;
	v->a[72671] = anon_sym_AMP_AMP;
	v->a[72672] = anon_sym_PIPE;
	v->a[72673] = anon_sym_AMP;
	v->a[72674] = anon_sym_LT;
	v->a[72675] = anon_sym_GT;
	v->a[72676] = anon_sym_LT_LT;
	v->a[72677] = anon_sym_GT_GT;
	v->a[72678] = anon_sym_RPAREN;
	v->a[72679] = anon_sym_SEMI_SEMI;
	small_parse_table_3634(v);
}

void	small_parse_table_3634(t_small_parse_table_array *v)
{
	v->a[72680] = anon_sym_PIPE_AMP;
	v->a[72681] = anon_sym_AMP_GT;
	v->a[72682] = anon_sym_AMP_GT_GT;
	v->a[72683] = anon_sym_LT_AMP;
	v->a[72684] = anon_sym_GT_AMP;
	v->a[72685] = anon_sym_GT_PIPE;
	v->a[72686] = anon_sym_LT_AMP_DASH;
	v->a[72687] = anon_sym_GT_AMP_DASH;
	v->a[72688] = anon_sym_LT_LT_DASH;
	v->a[72689] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72690] = anon_sym_DOLLAR_LBRACK;
	v->a[72691] = aux_sym_concatenation_token1;
	v->a[72692] = anon_sym_DOLLAR;
	v->a[72693] = sym__special_character;
	v->a[72694] = anon_sym_DQUOTE;
	v->a[72695] = sym_raw_string;
	v->a[72696] = sym_ansi_c_string;
	v->a[72697] = aux_sym_number_token1;
	v->a[72698] = aux_sym_number_token2;
	v->a[72699] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3635(v);
}

/* EOF small_parse_table_726.c */
