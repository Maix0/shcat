/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_606.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3030(t_small_parse_table_array *v)
{
	v->a[60600] = anon_sym_0;
	v->a[60601] = anon_sym__;
	v->a[60602] = 15;
	v->a[60603] = actions(3);
	v->a[60604] = 1;
	v->a[60605] = sym_comment;
	v->a[60606] = actions(1637);
	v->a[60607] = 1;
	v->a[60608] = anon_sym_LPAREN;
	v->a[60609] = actions(1641);
	v->a[60610] = 1;
	v->a[60611] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60612] = actions(1643);
	v->a[60613] = 1;
	v->a[60614] = anon_sym_DOLLAR;
	v->a[60615] = actions(1645);
	v->a[60616] = 1;
	v->a[60617] = anon_sym_DQUOTE;
	v->a[60618] = actions(1647);
	v->a[60619] = 1;
	small_parse_table_3031(v);
}

void	small_parse_table_3031(t_small_parse_table_array *v)
{
	v->a[60620] = anon_sym_DOLLAR_LBRACE;
	v->a[60621] = actions(1649);
	v->a[60622] = 1;
	v->a[60623] = anon_sym_DOLLAR_LPAREN;
	v->a[60624] = actions(1651);
	v->a[60625] = 1;
	v->a[60626] = anon_sym_BQUOTE;
	v->a[60627] = actions(1653);
	v->a[60628] = 1;
	v->a[60629] = sym_extglob_pattern;
	v->a[60630] = state(1123);
	v->a[60631] = 1;
	v->a[60632] = aux_sym_case_statement_repeat1;
	v->a[60633] = state(1713);
	v->a[60634] = 1;
	v->a[60635] = sym_case_item;
	v->a[60636] = state(1972);
	v->a[60637] = 1;
	v->a[60638] = sym__case_item_last;
	v->a[60639] = state(1873);
	small_parse_table_3032(v);
}

void	small_parse_table_3032(t_small_parse_table_array *v)
{
	v->a[60640] = 2;
	v->a[60641] = sym_concatenation;
	v->a[60642] = sym__extglob_blob;
	v->a[60643] = actions(1633);
	v->a[60644] = 3;
	v->a[60645] = sym_raw_string;
	v->a[60646] = sym_number;
	v->a[60647] = sym_word;
	v->a[60648] = state(1806);
	v->a[60649] = 5;
	v->a[60650] = sym_arithmetic_expansion;
	v->a[60651] = sym_string;
	v->a[60652] = sym_simple_expansion;
	v->a[60653] = sym_expansion;
	v->a[60654] = sym_command_substitution;
	v->a[60655] = 3;
	v->a[60656] = actions(3);
	v->a[60657] = 1;
	v->a[60658] = sym_comment;
	v->a[60659] = actions(2032);
	small_parse_table_3033(v);
}

void	small_parse_table_3033(t_small_parse_table_array *v)
{
	v->a[60660] = 3;
	v->a[60661] = sym_file_descriptor;
	v->a[60662] = ts_builtin_sym_end;
	v->a[60663] = aux_sym_heredoc_redirect_token1;
	v->a[60664] = actions(2034);
	v->a[60665] = 17;
	v->a[60666] = anon_sym_PIPE;
	v->a[60667] = anon_sym_RPAREN;
	v->a[60668] = anon_sym_SEMI_SEMI;
	v->a[60669] = anon_sym_AMP_AMP;
	v->a[60670] = anon_sym_PIPE_PIPE;
	v->a[60671] = anon_sym_LT;
	v->a[60672] = anon_sym_GT;
	v->a[60673] = anon_sym_GT_GT;
	v->a[60674] = anon_sym_LT_AMP;
	v->a[60675] = anon_sym_GT_AMP;
	v->a[60676] = anon_sym_GT_PIPE;
	v->a[60677] = anon_sym_LT_GT;
	v->a[60678] = anon_sym_LT_LT;
	v->a[60679] = anon_sym_LT_LT_DASH;
	small_parse_table_3034(v);
}

void	small_parse_table_3034(t_small_parse_table_array *v)
{
	v->a[60680] = anon_sym_AMP;
	v->a[60681] = anon_sym_BQUOTE;
	v->a[60682] = anon_sym_SEMI;
	v->a[60683] = 6;
	v->a[60684] = actions(3);
	v->a[60685] = 1;
	v->a[60686] = sym_comment;
	v->a[60687] = actions(2038);
	v->a[60688] = 1;
	v->a[60689] = aux_sym_heredoc_redirect_token1;
	v->a[60690] = actions(2040);
	v->a[60691] = 1;
	v->a[60692] = sym_file_descriptor;
	v->a[60693] = state(1102);
	v->a[60694] = 2;
	v->a[60695] = sym_file_redirect;
	v->a[60696] = aux_sym_redirected_statement_repeat2;
	v->a[60697] = actions(1869);
	v->a[60698] = 7;
	v->a[60699] = anon_sym_LT;
	small_parse_table_3035(v);
}

/* EOF small_parse_table_606.c */
