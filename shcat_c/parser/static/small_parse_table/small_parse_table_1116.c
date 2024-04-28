/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1116.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5580(t_small_parse_table_array *v)
{
	v->a[111600] = sym__brace_start;
	v->a[111601] = actions(5821);
	v->a[111602] = 9;
	v->a[111603] = anon_sym_SEMI;
	v->a[111604] = anon_sym_PIPE_PIPE;
	v->a[111605] = anon_sym_AMP_AMP;
	v->a[111606] = anon_sym_PIPE;
	v->a[111607] = anon_sym_AMP;
	v->a[111608] = anon_sym_LT_LT;
	v->a[111609] = anon_sym_SEMI_SEMI;
	v->a[111610] = anon_sym_PIPE_AMP;
	v->a[111611] = anon_sym_LT_LT_DASH;
	v->a[111612] = actions(5823);
	v->a[111613] = 11;
	v->a[111614] = anon_sym_LT;
	v->a[111615] = anon_sym_GT;
	v->a[111616] = anon_sym_GT_GT;
	v->a[111617] = anon_sym_AMP_GT;
	v->a[111618] = anon_sym_AMP_GT_GT;
	v->a[111619] = anon_sym_LT_AMP;
	small_parse_table_5581(v);
}

void	small_parse_table_5581(t_small_parse_table_array *v)
{
	v->a[111620] = anon_sym_GT_AMP;
	v->a[111621] = anon_sym_GT_PIPE;
	v->a[111622] = anon_sym_LT_AMP_DASH;
	v->a[111623] = anon_sym_GT_AMP_DASH;
	v->a[111624] = anon_sym_LT_LT_LT;
	v->a[111625] = actions(5819);
	v->a[111626] = 17;
	v->a[111627] = anon_sym_LPAREN_LPAREN;
	v->a[111628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[111629] = anon_sym_DOLLAR_LBRACK;
	v->a[111630] = anon_sym_DOLLAR;
	v->a[111631] = sym__special_character;
	v->a[111632] = anon_sym_DQUOTE;
	v->a[111633] = sym_raw_string;
	v->a[111634] = sym_ansi_c_string;
	v->a[111635] = aux_sym_number_token1;
	v->a[111636] = aux_sym_number_token2;
	v->a[111637] = anon_sym_DOLLAR_LBRACE;
	v->a[111638] = anon_sym_DOLLAR_LPAREN;
	v->a[111639] = anon_sym_BQUOTE;
	small_parse_table_5582(v);
}

void	small_parse_table_5582(t_small_parse_table_array *v)
{
	v->a[111640] = anon_sym_DOLLAR_BQUOTE;
	v->a[111641] = anon_sym_LT_LPAREN;
	v->a[111642] = anon_sym_GT_LPAREN;
	v->a[111643] = sym_word;
	v->a[111644] = 3;
	v->a[111645] = actions(3);
	v->a[111646] = 1;
	v->a[111647] = sym_comment;
	v->a[111648] = actions(5768);
	v->a[111649] = 6;
	v->a[111650] = sym_file_descriptor;
	v->a[111651] = sym_variable_name;
	v->a[111652] = sym_test_operator;
	v->a[111653] = sym__brace_start;
	v->a[111654] = ts_builtin_sym_end;
	v->a[111655] = aux_sym_heredoc_redirect_token1;
	v->a[111656] = actions(5766);
	v->a[111657] = 37;
	v->a[111658] = anon_sym_LPAREN_LPAREN;
	v->a[111659] = anon_sym_SEMI;
	small_parse_table_5583(v);
}

void	small_parse_table_5583(t_small_parse_table_array *v)
{
	v->a[111660] = anon_sym_PIPE_PIPE;
	v->a[111661] = anon_sym_AMP_AMP;
	v->a[111662] = anon_sym_PIPE;
	v->a[111663] = anon_sym_AMP;
	v->a[111664] = anon_sym_LT;
	v->a[111665] = anon_sym_GT;
	v->a[111666] = anon_sym_LT_LT;
	v->a[111667] = anon_sym_GT_GT;
	v->a[111668] = anon_sym_SEMI_SEMI;
	v->a[111669] = anon_sym_PIPE_AMP;
	v->a[111670] = anon_sym_AMP_GT;
	v->a[111671] = anon_sym_AMP_GT_GT;
	v->a[111672] = anon_sym_LT_AMP;
	v->a[111673] = anon_sym_GT_AMP;
	v->a[111674] = anon_sym_GT_PIPE;
	v->a[111675] = anon_sym_LT_AMP_DASH;
	v->a[111676] = anon_sym_GT_AMP_DASH;
	v->a[111677] = anon_sym_LT_LT_DASH;
	v->a[111678] = anon_sym_LT_LT_LT;
	v->a[111679] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5584(v);
}

void	small_parse_table_5584(t_small_parse_table_array *v)
{
	v->a[111680] = anon_sym_DOLLAR_LBRACK;
	v->a[111681] = anon_sym_DOLLAR;
	v->a[111682] = sym__special_character;
	v->a[111683] = anon_sym_DQUOTE;
	v->a[111684] = sym_raw_string;
	v->a[111685] = sym_ansi_c_string;
	v->a[111686] = aux_sym_number_token1;
	v->a[111687] = aux_sym_number_token2;
	v->a[111688] = anon_sym_DOLLAR_LBRACE;
	v->a[111689] = anon_sym_DOLLAR_LPAREN;
	v->a[111690] = anon_sym_BQUOTE;
	v->a[111691] = anon_sym_DOLLAR_BQUOTE;
	v->a[111692] = anon_sym_LT_LPAREN;
	v->a[111693] = anon_sym_GT_LPAREN;
	v->a[111694] = sym_word;
	v->a[111695] = 26;
	v->a[111696] = actions(71);
	v->a[111697] = 1;
	v->a[111698] = sym_comment;
	v->a[111699] = actions(107);
	small_parse_table_5585(v);
}

/* EOF small_parse_table_1116.c */
