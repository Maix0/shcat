/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_356.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1780(t_small_parse_table_array *v)
{
	v->a[35600] = ts_builtin_sym_end;
	v->a[35601] = actions(1198);
	v->a[35602] = 26;
	v->a[35603] = anon_sym_PIPE;
	v->a[35604] = anon_sym_SEMI_SEMI;
	v->a[35605] = anon_sym_AMP_AMP;
	v->a[35606] = anon_sym_PIPE_PIPE;
	v->a[35607] = anon_sym_LT;
	v->a[35608] = anon_sym_GT;
	v->a[35609] = anon_sym_GT_GT;
	v->a[35610] = anon_sym_LT_AMP;
	v->a[35611] = anon_sym_GT_AMP;
	v->a[35612] = anon_sym_GT_PIPE;
	v->a[35613] = anon_sym_LT_GT;
	v->a[35614] = anon_sym_LT_LT;
	v->a[35615] = anon_sym_LT_LT_DASH;
	v->a[35616] = aux_sym_heredoc_redirect_token1;
	v->a[35617] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35618] = anon_sym_AMP;
	v->a[35619] = aux_sym_concatenation_token1;
	small_parse_table_1781(v);
}

void	small_parse_table_1781(t_small_parse_table_array *v)
{
	v->a[35620] = anon_sym_DOLLAR;
	v->a[35621] = anon_sym_DQUOTE;
	v->a[35622] = sym_raw_string;
	v->a[35623] = sym_number;
	v->a[35624] = anon_sym_DOLLAR_LBRACE;
	v->a[35625] = anon_sym_DOLLAR_LPAREN;
	v->a[35626] = anon_sym_BQUOTE;
	v->a[35627] = sym_word;
	v->a[35628] = anon_sym_SEMI;
	v->a[35629] = 6;
	v->a[35630] = actions(3);
	v->a[35631] = 1;
	v->a[35632] = sym_comment;
	v->a[35633] = actions(1273);
	v->a[35634] = 1;
	v->a[35635] = sym_variable_name;
	v->a[35636] = actions(361);
	v->a[35637] = 2;
	v->a[35638] = sym_file_descriptor;
	v->a[35639] = ts_builtin_sym_end;
	small_parse_table_1782(v);
}

void	small_parse_table_1782(t_small_parse_table_array *v)
{
	v->a[35640] = actions(1271);
	v->a[35641] = 2;
	v->a[35642] = aux_sym__simple_variable_name_token1;
	v->a[35643] = aux_sym__multiline_variable_name_token1;
	v->a[35644] = actions(1269);
	v->a[35645] = 9;
	v->a[35646] = anon_sym_BANG;
	v->a[35647] = anon_sym_DASH;
	v->a[35648] = anon_sym_STAR;
	v->a[35649] = anon_sym_QMARK;
	v->a[35650] = anon_sym_DOLLAR;
	v->a[35651] = anon_sym_POUND;
	v->a[35652] = anon_sym_AT;
	v->a[35653] = anon_sym_0;
	v->a[35654] = anon_sym__;
	v->a[35655] = actions(363);
	v->a[35656] = 16;
	v->a[35657] = anon_sym_PIPE;
	v->a[35658] = anon_sym_SEMI_SEMI;
	v->a[35659] = anon_sym_AMP_AMP;
	small_parse_table_1783(v);
}

void	small_parse_table_1783(t_small_parse_table_array *v)
{
	v->a[35660] = anon_sym_PIPE_PIPE;
	v->a[35661] = anon_sym_LT;
	v->a[35662] = anon_sym_GT;
	v->a[35663] = anon_sym_GT_GT;
	v->a[35664] = anon_sym_LT_AMP;
	v->a[35665] = anon_sym_GT_AMP;
	v->a[35666] = anon_sym_GT_PIPE;
	v->a[35667] = anon_sym_LT_GT;
	v->a[35668] = anon_sym_LT_LT;
	v->a[35669] = anon_sym_LT_LT_DASH;
	v->a[35670] = aux_sym_heredoc_redirect_token1;
	v->a[35671] = anon_sym_AMP;
	v->a[35672] = anon_sym_SEMI;
	v->a[35673] = 3;
	v->a[35674] = actions(3);
	v->a[35675] = 1;
	v->a[35676] = sym_comment;
	v->a[35677] = actions(709);
	v->a[35678] = 3;
	v->a[35679] = sym_file_descriptor;
	small_parse_table_1784(v);
}

void	small_parse_table_1784(t_small_parse_table_array *v)
{
	v->a[35680] = sym__concat;
	v->a[35681] = sym__bare_dollar;
	v->a[35682] = actions(707);
	v->a[35683] = 27;
	v->a[35684] = anon_sym_PIPE;
	v->a[35685] = anon_sym_RPAREN;
	v->a[35686] = anon_sym_SEMI_SEMI;
	v->a[35687] = anon_sym_AMP_AMP;
	v->a[35688] = anon_sym_PIPE_PIPE;
	v->a[35689] = anon_sym_LT;
	v->a[35690] = anon_sym_GT;
	v->a[35691] = anon_sym_GT_GT;
	v->a[35692] = anon_sym_LT_AMP;
	v->a[35693] = anon_sym_GT_AMP;
	v->a[35694] = anon_sym_GT_PIPE;
	v->a[35695] = anon_sym_LT_GT;
	v->a[35696] = anon_sym_LT_LT;
	v->a[35697] = anon_sym_LT_LT_DASH;
	v->a[35698] = aux_sym_heredoc_redirect_token1;
	v->a[35699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1785(v);
}

/* EOF small_parse_table_356.c */
