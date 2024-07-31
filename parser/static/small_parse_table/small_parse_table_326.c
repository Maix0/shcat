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
	v->a[32600] = aux_sym_concatenation_token1;
	v->a[32601] = anon_sym_DOLLAR;
	v->a[32602] = anon_sym_DQUOTE;
	v->a[32603] = sym_raw_string;
	v->a[32604] = sym_number;
	v->a[32605] = anon_sym_DOLLAR_LBRACE;
	v->a[32606] = anon_sym_DOLLAR_LPAREN;
	v->a[32607] = anon_sym_BQUOTE;
	v->a[32608] = sym_word;
	v->a[32609] = anon_sym_SEMI;
	v->a[32610] = 3;
	v->a[32611] = actions(3);
	v->a[32612] = 1;
	v->a[32613] = sym_comment;
	v->a[32614] = actions(457);
	v->a[32615] = 2;
	v->a[32616] = sym__concat;
	v->a[32617] = ts_builtin_sym_end;
	v->a[32618] = actions(455);
	v->a[32619] = 25;
	small_parse_table_1631(v);
}

void	small_parse_table_1631(t_small_parse_table_array *v)
{
	v->a[32620] = anon_sym_PIPE;
	v->a[32621] = anon_sym_SEMI_SEMI;
	v->a[32622] = anon_sym_AMP_AMP;
	v->a[32623] = anon_sym_PIPE_PIPE;
	v->a[32624] = anon_sym_LT;
	v->a[32625] = anon_sym_GT;
	v->a[32626] = anon_sym_GT_GT;
	v->a[32627] = anon_sym_LT_AMP;
	v->a[32628] = anon_sym_GT_AMP;
	v->a[32629] = anon_sym_GT_PIPE;
	v->a[32630] = anon_sym_LT_GT;
	v->a[32631] = anon_sym_LT_LT;
	v->a[32632] = anon_sym_LT_LT_DASH;
	v->a[32633] = aux_sym_heredoc_redirect_token1;
	v->a[32634] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32635] = aux_sym_concatenation_token1;
	v->a[32636] = anon_sym_DOLLAR;
	v->a[32637] = anon_sym_DQUOTE;
	v->a[32638] = sym_raw_string;
	v->a[32639] = sym_number;
	small_parse_table_1632(v);
}

void	small_parse_table_1632(t_small_parse_table_array *v)
{
	v->a[32640] = anon_sym_DOLLAR_LBRACE;
	v->a[32641] = anon_sym_DOLLAR_LPAREN;
	v->a[32642] = anon_sym_BQUOTE;
	v->a[32643] = sym_word;
	v->a[32644] = anon_sym_SEMI;
	v->a[32645] = 15;
	v->a[32646] = actions(3);
	v->a[32647] = 1;
	v->a[32648] = sym_comment;
	v->a[32649] = actions(325);
	v->a[32650] = 1;
	v->a[32651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32652] = actions(327);
	v->a[32653] = 1;
	v->a[32654] = anon_sym_DOLLAR;
	v->a[32655] = actions(329);
	v->a[32656] = 1;
	v->a[32657] = anon_sym_DQUOTE;
	v->a[32658] = actions(333);
	v->a[32659] = 1;
	small_parse_table_1633(v);
}

void	small_parse_table_1633(t_small_parse_table_array *v)
{
	v->a[32660] = anon_sym_DOLLAR_LBRACE;
	v->a[32661] = actions(335);
	v->a[32662] = 1;
	v->a[32663] = anon_sym_DOLLAR_LPAREN;
	v->a[32664] = actions(337);
	v->a[32665] = 1;
	v->a[32666] = anon_sym_BQUOTE;
	v->a[32667] = actions(341);
	v->a[32668] = 1;
	v->a[32669] = sym_variable_name;
	v->a[32670] = state(350);
	v->a[32671] = 1;
	v->a[32672] = sym_command_name;
	v->a[32673] = state(732);
	v->a[32674] = 1;
	v->a[32675] = sym_concatenation;
	v->a[32676] = state(1073);
	v->a[32677] = 1;
	v->a[32678] = sym_file_redirect;
	v->a[32679] = state(823);
	small_parse_table_1634(v);
}

void	small_parse_table_1634(t_small_parse_table_array *v)
{
	v->a[32680] = 2;
	v->a[32681] = sym_variable_assignment;
	v->a[32682] = aux_sym_command_repeat1;
	v->a[32683] = actions(331);
	v->a[32684] = 3;
	v->a[32685] = sym_raw_string;
	v->a[32686] = sym_number;
	v->a[32687] = sym_word;
	v->a[32688] = state(635);
	v->a[32689] = 5;
	v->a[32690] = sym_arithmetic_expansion;
	v->a[32691] = sym_string;
	v->a[32692] = sym_simple_expansion;
	v->a[32693] = sym_expansion;
	v->a[32694] = sym_command_substitution;
	v->a[32695] = actions(965);
	v->a[32696] = 7;
	v->a[32697] = anon_sym_LT;
	v->a[32698] = anon_sym_GT;
	v->a[32699] = anon_sym_GT_GT;
	small_parse_table_1635(v);
}

/* EOF small_parse_table_326.c */
