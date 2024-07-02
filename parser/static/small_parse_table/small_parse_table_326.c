/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_326.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1630(t_small_parse_table_array *v)
{
	v->a[32600] = anon_sym_DQUOTE;
	v->a[32601] = sym_raw_string;
	v->a[32602] = sym_number;
	v->a[32603] = anon_sym_DOLLAR_LBRACE;
	v->a[32604] = anon_sym_DOLLAR_LPAREN;
	v->a[32605] = anon_sym_BQUOTE;
	v->a[32606] = sym_word;
	v->a[32607] = anon_sym_SEMI;
	v->a[32608] = 12;
	v->a[32609] = actions(3);
	v->a[32610] = 1;
	v->a[32611] = sym_comment;
	v->a[32612] = actions(597);
	v->a[32613] = 1;
	v->a[32614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32615] = actions(600);
	v->a[32616] = 1;
	v->a[32617] = anon_sym_DOLLAR;
	v->a[32618] = actions(603);
	v->a[32619] = 1;
	small_parse_table_1631(v);
}

void	small_parse_table_1631(t_small_parse_table_array *v)
{
	v->a[32620] = anon_sym_DQUOTE;
	v->a[32621] = actions(606);
	v->a[32622] = 1;
	v->a[32623] = anon_sym_DOLLAR_LBRACE;
	v->a[32624] = actions(609);
	v->a[32625] = 1;
	v->a[32626] = anon_sym_DOLLAR_LPAREN;
	v->a[32627] = actions(612);
	v->a[32628] = 1;
	v->a[32629] = anon_sym_BQUOTE;
	v->a[32630] = actions(540);
	v->a[32631] = 2;
	v->a[32632] = sym_file_descriptor;
	v->a[32633] = sym_variable_name;
	v->a[32634] = state(426);
	v->a[32635] = 2;
	v->a[32636] = sym_concatenation;
	v->a[32637] = aux_sym_for_statement_repeat1;
	v->a[32638] = actions(1235);
	v->a[32639] = 3;
	small_parse_table_1632(v);
}

void	small_parse_table_1632(t_small_parse_table_array *v)
{
	v->a[32640] = sym_raw_string;
	v->a[32641] = sym_number;
	v->a[32642] = sym_word;
	v->a[32643] = state(714);
	v->a[32644] = 5;
	v->a[32645] = sym_arithmetic_expansion;
	v->a[32646] = sym_string;
	v->a[32647] = sym_simple_expansion;
	v->a[32648] = sym_expansion;
	v->a[32649] = sym_command_substitution;
	v->a[32650] = actions(520);
	v->a[32651] = 13;
	v->a[32652] = anon_sym_PIPE;
	v->a[32653] = anon_sym_AMP_AMP;
	v->a[32654] = anon_sym_PIPE_PIPE;
	v->a[32655] = anon_sym_LT;
	v->a[32656] = anon_sym_GT;
	v->a[32657] = anon_sym_GT_GT;
	v->a[32658] = anon_sym_LT_AMP;
	v->a[32659] = anon_sym_GT_AMP;
	small_parse_table_1633(v);
}

void	small_parse_table_1633(t_small_parse_table_array *v)
{
	v->a[32660] = anon_sym_GT_PIPE;
	v->a[32661] = anon_sym_LT_GT;
	v->a[32662] = anon_sym_LT_LT;
	v->a[32663] = anon_sym_LT_LT_DASH;
	v->a[32664] = aux_sym_heredoc_redirect_token1;
	v->a[32665] = 3;
	v->a[32666] = actions(3);
	v->a[32667] = 1;
	v->a[32668] = sym_comment;
	v->a[32669] = actions(709);
	v->a[32670] = 4;
	v->a[32671] = sym_file_descriptor;
	v->a[32672] = sym__concat;
	v->a[32673] = sym__bare_dollar;
	v->a[32674] = ts_builtin_sym_end;
	v->a[32675] = actions(707);
	v->a[32676] = 27;
	v->a[32677] = anon_sym_LPAREN;
	v->a[32678] = anon_sym_PIPE;
	v->a[32679] = anon_sym_SEMI_SEMI;
	small_parse_table_1634(v);
}

void	small_parse_table_1634(t_small_parse_table_array *v)
{
	v->a[32680] = anon_sym_AMP_AMP;
	v->a[32681] = anon_sym_PIPE_PIPE;
	v->a[32682] = anon_sym_LT;
	v->a[32683] = anon_sym_GT;
	v->a[32684] = anon_sym_GT_GT;
	v->a[32685] = anon_sym_LT_AMP;
	v->a[32686] = anon_sym_GT_AMP;
	v->a[32687] = anon_sym_GT_PIPE;
	v->a[32688] = anon_sym_LT_GT;
	v->a[32689] = anon_sym_LT_LT;
	v->a[32690] = anon_sym_LT_LT_DASH;
	v->a[32691] = aux_sym_heredoc_redirect_token1;
	v->a[32692] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32693] = anon_sym_AMP;
	v->a[32694] = aux_sym_concatenation_token1;
	v->a[32695] = anon_sym_DOLLAR;
	v->a[32696] = anon_sym_DQUOTE;
	v->a[32697] = sym_raw_string;
	v->a[32698] = sym_number;
	v->a[32699] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1635(v);
}

/* EOF small_parse_table_326.c */
