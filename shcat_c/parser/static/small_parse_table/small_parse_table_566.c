/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_566.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2830(t_small_parse_table_array *v)
{
	v->a[56600] = sym_raw_string;
	v->a[56601] = sym_ansi_c_string;
	v->a[56602] = aux_sym_number_token1;
	v->a[56603] = aux_sym_number_token2;
	v->a[56604] = anon_sym_DOLLAR_LBRACE;
	v->a[56605] = anon_sym_DOLLAR_LPAREN;
	v->a[56606] = anon_sym_BQUOTE;
	v->a[56607] = anon_sym_DOLLAR_BQUOTE;
	v->a[56608] = anon_sym_LT_LPAREN;
	v->a[56609] = anon_sym_GT_LPAREN;
	v->a[56610] = sym_word;
	v->a[56611] = 3;
	v->a[56612] = actions(3);
	v->a[56613] = 1;
	v->a[56614] = sym_comment;
	v->a[56615] = actions(1354);
	v->a[56616] = 6;
	v->a[56617] = sym_file_descriptor;
	v->a[56618] = sym__concat;
	v->a[56619] = sym_variable_name;
	small_parse_table_2831(v);
}

void	small_parse_table_2831(t_small_parse_table_array *v)
{
	v->a[56620] = sym_test_operator;
	v->a[56621] = sym__brace_start;
	v->a[56622] = aux_sym_heredoc_redirect_token1;
	v->a[56623] = actions(1352);
	v->a[56624] = 41;
	v->a[56625] = anon_sym_LPAREN_LPAREN;
	v->a[56626] = anon_sym_SEMI;
	v->a[56627] = anon_sym_PIPE_PIPE;
	v->a[56628] = anon_sym_AMP_AMP;
	v->a[56629] = anon_sym_PIPE;
	v->a[56630] = anon_sym_AMP;
	v->a[56631] = anon_sym_LT;
	v->a[56632] = anon_sym_GT;
	v->a[56633] = anon_sym_LT_LT;
	v->a[56634] = anon_sym_GT_GT;
	v->a[56635] = anon_sym_esac;
	v->a[56636] = anon_sym_SEMI_SEMI;
	v->a[56637] = anon_sym_SEMI_AMP;
	v->a[56638] = anon_sym_SEMI_SEMI_AMP;
	v->a[56639] = anon_sym_PIPE_AMP;
	small_parse_table_2832(v);
}

void	small_parse_table_2832(t_small_parse_table_array *v)
{
	v->a[56640] = anon_sym_AMP_GT;
	v->a[56641] = anon_sym_AMP_GT_GT;
	v->a[56642] = anon_sym_LT_AMP;
	v->a[56643] = anon_sym_GT_AMP;
	v->a[56644] = anon_sym_GT_PIPE;
	v->a[56645] = anon_sym_LT_AMP_DASH;
	v->a[56646] = anon_sym_GT_AMP_DASH;
	v->a[56647] = anon_sym_LT_LT_DASH;
	v->a[56648] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56649] = anon_sym_DOLLAR_LBRACK;
	v->a[56650] = aux_sym_concatenation_token1;
	v->a[56651] = anon_sym_DOLLAR;
	v->a[56652] = sym__special_character;
	v->a[56653] = anon_sym_DQUOTE;
	v->a[56654] = sym_raw_string;
	v->a[56655] = sym_ansi_c_string;
	v->a[56656] = aux_sym_number_token1;
	v->a[56657] = aux_sym_number_token2;
	v->a[56658] = anon_sym_DOLLAR_LBRACE;
	v->a[56659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2833(v);
}

void	small_parse_table_2833(t_small_parse_table_array *v)
{
	v->a[56660] = anon_sym_BQUOTE;
	v->a[56661] = anon_sym_DOLLAR_BQUOTE;
	v->a[56662] = anon_sym_LT_LPAREN;
	v->a[56663] = anon_sym_GT_LPAREN;
	v->a[56664] = aux_sym__simple_variable_name_token1;
	v->a[56665] = sym_word;
	v->a[56666] = 3;
	v->a[56667] = actions(3);
	v->a[56668] = 1;
	v->a[56669] = sym_comment;
	v->a[56670] = actions(1294);
	v->a[56671] = 7;
	v->a[56672] = sym_file_descriptor;
	v->a[56673] = sym__concat;
	v->a[56674] = sym_test_operator;
	v->a[56675] = sym__bare_dollar;
	v->a[56676] = sym__brace_start;
	v->a[56677] = ts_builtin_sym_end;
	v->a[56678] = aux_sym_heredoc_redirect_token1;
	v->a[56679] = actions(1292);
	small_parse_table_2834(v);
}

void	small_parse_table_2834(t_small_parse_table_array *v)
{
	v->a[56680] = 40;
	v->a[56681] = anon_sym_LPAREN_LPAREN;
	v->a[56682] = anon_sym_SEMI;
	v->a[56683] = anon_sym_PIPE_PIPE;
	v->a[56684] = anon_sym_AMP_AMP;
	v->a[56685] = anon_sym_PIPE;
	v->a[56686] = anon_sym_AMP;
	v->a[56687] = anon_sym_EQ_EQ;
	v->a[56688] = anon_sym_LT;
	v->a[56689] = anon_sym_GT;
	v->a[56690] = anon_sym_LT_LT;
	v->a[56691] = anon_sym_GT_GT;
	v->a[56692] = anon_sym_SEMI_SEMI;
	v->a[56693] = anon_sym_PIPE_AMP;
	v->a[56694] = anon_sym_EQ_TILDE;
	v->a[56695] = anon_sym_AMP_GT;
	v->a[56696] = anon_sym_AMP_GT_GT;
	v->a[56697] = anon_sym_LT_AMP;
	v->a[56698] = anon_sym_GT_AMP;
	v->a[56699] = anon_sym_GT_PIPE;
	small_parse_table_2835(v);
}

/* EOF small_parse_table_566.c */
