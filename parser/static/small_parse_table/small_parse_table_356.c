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
	v->a[35600] = anon_sym_GT_AMP;
	v->a[35601] = anon_sym_GT_PIPE;
	v->a[35602] = anon_sym_LT_AMP_DASH;
	v->a[35603] = anon_sym_GT_AMP_DASH;
	v->a[35604] = anon_sym_LT_LT;
	v->a[35605] = anon_sym_LT_LT_DASH;
	v->a[35606] = aux_sym_heredoc_redirect_token1;
	v->a[35607] = 3;
	v->a[35608] = actions(3);
	v->a[35609] = 1;
	v->a[35610] = sym_comment;
	v->a[35611] = actions(1027);
	v->a[35612] = 4;
	v->a[35613] = sym_file_descriptor;
	v->a[35614] = sym__concat;
	v->a[35615] = sym__bare_dollar;
	v->a[35616] = ts_builtin_sym_end;
	v->a[35617] = actions(1025);
	v->a[35618] = 28;
	v->a[35619] = anon_sym_LPAREN;
	small_parse_table_1781(v);
}

void	small_parse_table_1781(t_small_parse_table_array *v)
{
	v->a[35620] = anon_sym_PIPE;
	v->a[35621] = anon_sym_SEMI_SEMI;
	v->a[35622] = anon_sym_AMP_AMP;
	v->a[35623] = anon_sym_PIPE_PIPE;
	v->a[35624] = anon_sym_LT;
	v->a[35625] = anon_sym_GT;
	v->a[35626] = anon_sym_GT_GT;
	v->a[35627] = anon_sym_LT_AMP;
	v->a[35628] = anon_sym_GT_AMP;
	v->a[35629] = anon_sym_GT_PIPE;
	v->a[35630] = anon_sym_LT_AMP_DASH;
	v->a[35631] = anon_sym_GT_AMP_DASH;
	v->a[35632] = anon_sym_LT_LT;
	v->a[35633] = anon_sym_LT_LT_DASH;
	v->a[35634] = aux_sym_heredoc_redirect_token1;
	v->a[35635] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35636] = anon_sym_AMP;
	v->a[35637] = aux_sym_concatenation_token1;
	v->a[35638] = anon_sym_DOLLAR;
	v->a[35639] = anon_sym_DQUOTE;
	small_parse_table_1782(v);
}

void	small_parse_table_1782(t_small_parse_table_array *v)
{
	v->a[35640] = sym_raw_string;
	v->a[35641] = sym_number;
	v->a[35642] = anon_sym_DOLLAR_LBRACE;
	v->a[35643] = anon_sym_DOLLAR_LPAREN;
	v->a[35644] = anon_sym_BQUOTE;
	v->a[35645] = sym_word;
	v->a[35646] = anon_sym_SEMI;
	v->a[35647] = 21;
	v->a[35648] = actions(3);
	v->a[35649] = 1;
	v->a[35650] = sym_comment;
	v->a[35651] = actions(17);
	v->a[35652] = 1;
	v->a[35653] = anon_sym_LPAREN;
	v->a[35654] = actions(59);
	v->a[35655] = 1;
	v->a[35656] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35657] = actions(61);
	v->a[35658] = 1;
	v->a[35659] = anon_sym_DOLLAR;
	small_parse_table_1783(v);
}

void	small_parse_table_1783(t_small_parse_table_array *v)
{
	v->a[35660] = actions(63);
	v->a[35661] = 1;
	v->a[35662] = anon_sym_DQUOTE;
	v->a[35663] = actions(67);
	v->a[35664] = 1;
	v->a[35665] = anon_sym_DOLLAR_LBRACE;
	v->a[35666] = actions(69);
	v->a[35667] = 1;
	v->a[35668] = anon_sym_DOLLAR_LPAREN;
	v->a[35669] = actions(71);
	v->a[35670] = 1;
	v->a[35671] = anon_sym_BQUOTE;
	v->a[35672] = actions(75);
	v->a[35673] = 1;
	v->a[35674] = sym_variable_name;
	v->a[35675] = actions(1256);
	v->a[35676] = 1;
	v->a[35677] = sym_file_descriptor;
	v->a[35678] = state(188);
	v->a[35679] = 1;
	small_parse_table_1784(v);
}

void	small_parse_table_1784(t_small_parse_table_array *v)
{
	v->a[35680] = sym_command_name;
	v->a[35681] = state(650);
	v->a[35682] = 1;
	v->a[35683] = sym_concatenation;
	v->a[35684] = state(749);
	v->a[35685] = 1;
	v->a[35686] = aux_sym_command_repeat1;
	v->a[35687] = state(794);
	v->a[35688] = 1;
	v->a[35689] = sym_variable_assignment;
	v->a[35690] = state(1216);
	v->a[35691] = 1;
	v->a[35692] = sym_subshell;
	v->a[35693] = state(1220);
	v->a[35694] = 1;
	v->a[35695] = sym_command;
	v->a[35696] = state(1385);
	v->a[35697] = 1;
	v->a[35698] = sym_file_redirect;
	v->a[35699] = actions(1254);
	small_parse_table_1785(v);
}

/* EOF small_parse_table_356.c */
