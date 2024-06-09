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
	v->a[35600] = anon_sym_STAR_EQ;
	v->a[35601] = anon_sym_SLASH_EQ;
	v->a[35602] = anon_sym_PERCENT_EQ;
	v->a[35603] = anon_sym_LT_LT_EQ;
	v->a[35604] = anon_sym_GT_GT_EQ;
	v->a[35605] = anon_sym_AMP_EQ;
	v->a[35606] = anon_sym_CARET_EQ;
	v->a[35607] = anon_sym_PIPE_EQ;
	v->a[35608] = anon_sym_EQ_EQ;
	v->a[35609] = anon_sym_BANG_EQ;
	v->a[35610] = anon_sym_LT_EQ;
	v->a[35611] = anon_sym_GT_EQ;
	v->a[35612] = anon_sym_QMARK;
	v->a[35613] = anon_sym_COLON;
	v->a[35614] = anon_sym_PLUS_PLUS2;
	v->a[35615] = anon_sym_DASH_DASH2;
	v->a[35616] = 6;
	v->a[35617] = actions(3);
	v->a[35618] = 1;
	v->a[35619] = sym_comment;
	small_parse_table_1781(v);
}

void	small_parse_table_1781(t_small_parse_table_array *v)
{
	v->a[35620] = actions(1210);
	v->a[35621] = 1;
	v->a[35622] = sym_file_descriptor;
	v->a[35623] = actions(1463);
	v->a[35624] = 1;
	v->a[35625] = aux_sym_concatenation_token1;
	v->a[35626] = actions(1465);
	v->a[35627] = 1;
	v->a[35628] = sym__concat;
	v->a[35629] = state(510);
	v->a[35630] = 1;
	v->a[35631] = aux_sym_concatenation_repeat1;
	v->a[35632] = actions(1206);
	v->a[35633] = 30;
	v->a[35634] = anon_sym_esac;
	v->a[35635] = anon_sym_PIPE;
	v->a[35636] = anon_sym_SEMI_SEMI;
	v->a[35637] = anon_sym_AMP_AMP;
	v->a[35638] = anon_sym_PIPE_PIPE;
	v->a[35639] = anon_sym_LT;
	small_parse_table_1782(v);
}

void	small_parse_table_1782(t_small_parse_table_array *v)
{
	v->a[35640] = anon_sym_GT;
	v->a[35641] = anon_sym_GT_GT;
	v->a[35642] = anon_sym_AMP_GT;
	v->a[35643] = anon_sym_AMP_GT_GT;
	v->a[35644] = anon_sym_LT_AMP;
	v->a[35645] = anon_sym_GT_AMP;
	v->a[35646] = anon_sym_GT_PIPE;
	v->a[35647] = anon_sym_LT_AMP_DASH;
	v->a[35648] = anon_sym_GT_AMP_DASH;
	v->a[35649] = anon_sym_LT_LT;
	v->a[35650] = anon_sym_LT_LT_DASH;
	v->a[35651] = aux_sym_heredoc_redirect_token1;
	v->a[35652] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35653] = anon_sym_AMP;
	v->a[35654] = anon_sym_DOLLAR;
	v->a[35655] = anon_sym_DQUOTE;
	v->a[35656] = sym_raw_string;
	v->a[35657] = aux_sym_number_token1;
	v->a[35658] = aux_sym_number_token2;
	v->a[35659] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1783(v);
}

void	small_parse_table_1783(t_small_parse_table_array *v)
{
	v->a[35660] = anon_sym_DOLLAR_LPAREN;
	v->a[35661] = anon_sym_BQUOTE;
	v->a[35662] = sym_word;
	v->a[35663] = anon_sym_SEMI;
	v->a[35664] = 3;
	v->a[35665] = actions(3);
	v->a[35666] = 1;
	v->a[35667] = sym_comment;
	v->a[35668] = actions(1112);
	v->a[35669] = 4;
	v->a[35670] = sym_file_descriptor;
	v->a[35671] = sym__concat;
	v->a[35672] = sym__bare_dollar;
	v->a[35673] = ts_builtin_sym_end;
	v->a[35674] = actions(1114);
	v->a[35675] = 30;
	v->a[35676] = anon_sym_PIPE;
	v->a[35677] = anon_sym_SEMI_SEMI;
	v->a[35678] = anon_sym_AMP_AMP;
	v->a[35679] = anon_sym_PIPE_PIPE;
	small_parse_table_1784(v);
}

void	small_parse_table_1784(t_small_parse_table_array *v)
{
	v->a[35680] = anon_sym_LT;
	v->a[35681] = anon_sym_GT;
	v->a[35682] = anon_sym_GT_GT;
	v->a[35683] = anon_sym_AMP_GT;
	v->a[35684] = anon_sym_AMP_GT_GT;
	v->a[35685] = anon_sym_LT_AMP;
	v->a[35686] = anon_sym_GT_AMP;
	v->a[35687] = anon_sym_GT_PIPE;
	v->a[35688] = anon_sym_LT_AMP_DASH;
	v->a[35689] = anon_sym_GT_AMP_DASH;
	v->a[35690] = anon_sym_LT_LT;
	v->a[35691] = anon_sym_LT_LT_DASH;
	v->a[35692] = aux_sym_heredoc_redirect_token1;
	v->a[35693] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35694] = anon_sym_AMP;
	v->a[35695] = aux_sym_concatenation_token1;
	v->a[35696] = anon_sym_DOLLAR;
	v->a[35697] = anon_sym_DQUOTE;
	v->a[35698] = sym_raw_string;
	v->a[35699] = aux_sym_number_token1;
	small_parse_table_1785(v);
}

/* EOF small_parse_table_356.c */
