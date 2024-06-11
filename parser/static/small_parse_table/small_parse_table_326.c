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
	v->a[32600] = sym_concatenation;
	v->a[32601] = state(735);
	v->a[32602] = 1;
	v->a[32603] = sym_variable_assignment;
	v->a[32604] = state(736);
	v->a[32605] = 1;
	v->a[32606] = aux_sym_command_repeat1;
	v->a[32607] = state(1328);
	v->a[32608] = 1;
	v->a[32609] = sym_command;
	v->a[32610] = state(1329);
	v->a[32611] = 1;
	v->a[32612] = sym_subshell;
	v->a[32613] = state(1477);
	v->a[32614] = 1;
	v->a[32615] = sym_file_redirect;
	v->a[32616] = actions(1199);
	v->a[32617] = 2;
	v->a[32618] = anon_sym_LT_AMP_DASH;
	v->a[32619] = anon_sym_GT_AMP_DASH;
	small_parse_table_1631(v);
}

void	small_parse_table_1631(t_small_parse_table_array *v)
{
	v->a[32620] = actions(65);
	v->a[32621] = 3;
	v->a[32622] = sym_raw_string;
	v->a[32623] = sym_number;
	v->a[32624] = sym_word;
	v->a[32625] = state(394);
	v->a[32626] = 5;
	v->a[32627] = sym_arithmetic_expansion;
	v->a[32628] = sym_string;
	v->a[32629] = sym_simple_expansion;
	v->a[32630] = sym_expansion;
	v->a[32631] = sym_command_substitution;
	v->a[32632] = actions(1197);
	v->a[32633] = 8;
	v->a[32634] = anon_sym_LT;
	v->a[32635] = anon_sym_GT;
	v->a[32636] = anon_sym_GT_GT;
	v->a[32637] = anon_sym_AMP_GT;
	v->a[32638] = anon_sym_AMP_GT_GT;
	v->a[32639] = anon_sym_LT_AMP;
	small_parse_table_1632(v);
}

void	small_parse_table_1632(t_small_parse_table_array *v)
{
	v->a[32640] = anon_sym_GT_AMP;
	v->a[32641] = anon_sym_GT_PIPE;
	v->a[32642] = 5;
	v->a[32643] = actions(3);
	v->a[32644] = 1;
	v->a[32645] = sym_comment;
	v->a[32646] = actions(543);
	v->a[32647] = 2;
	v->a[32648] = sym_file_descriptor;
	v->a[32649] = sym_variable_name;
	v->a[32650] = state(389);
	v->a[32651] = 2;
	v->a[32652] = sym_concatenation;
	v->a[32653] = aux_sym_for_statement_repeat1;
	v->a[32654] = state(909);
	v->a[32655] = 5;
	v->a[32656] = sym_arithmetic_expansion;
	v->a[32657] = sym_string;
	v->a[32658] = sym_simple_expansion;
	v->a[32659] = sym_expansion;
	small_parse_table_1633(v);
}

void	small_parse_table_1633(t_small_parse_table_array *v)
{
	v->a[32660] = sym_command_substitution;
	v->a[32661] = actions(541);
	v->a[32662] = 25;
	v->a[32663] = anon_sym_PIPE;
	v->a[32664] = anon_sym_AMP_AMP;
	v->a[32665] = anon_sym_PIPE_PIPE;
	v->a[32666] = anon_sym_LT;
	v->a[32667] = anon_sym_GT;
	v->a[32668] = anon_sym_GT_GT;
	v->a[32669] = anon_sym_AMP_GT;
	v->a[32670] = anon_sym_AMP_GT_GT;
	v->a[32671] = anon_sym_LT_AMP;
	v->a[32672] = anon_sym_GT_AMP;
	v->a[32673] = anon_sym_GT_PIPE;
	v->a[32674] = anon_sym_LT_AMP_DASH;
	v->a[32675] = anon_sym_GT_AMP_DASH;
	v->a[32676] = anon_sym_LT_LT;
	v->a[32677] = anon_sym_LT_LT_DASH;
	v->a[32678] = aux_sym_heredoc_redirect_token1;
	v->a[32679] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1634(v);
}

void	small_parse_table_1634(t_small_parse_table_array *v)
{
	v->a[32680] = anon_sym_DOLLAR;
	v->a[32681] = anon_sym_DQUOTE;
	v->a[32682] = sym_raw_string;
	v->a[32683] = sym_number;
	v->a[32684] = anon_sym_DOLLAR_LBRACE;
	v->a[32685] = anon_sym_DOLLAR_LPAREN;
	v->a[32686] = anon_sym_BQUOTE;
	v->a[32687] = sym_word;
	v->a[32688] = 21;
	v->a[32689] = actions(3);
	v->a[32690] = 1;
	v->a[32691] = sym_comment;
	v->a[32692] = actions(17);
	v->a[32693] = 1;
	v->a[32694] = anon_sym_LPAREN;
	v->a[32695] = actions(59);
	v->a[32696] = 1;
	v->a[32697] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32698] = actions(61);
	v->a[32699] = 1;
	small_parse_table_1635(v);
}

/* EOF small_parse_table_326.c */
