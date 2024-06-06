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
	v->a[32600] = sym__special_character;
	v->a[32601] = anon_sym_DQUOTE;
	v->a[32602] = sym_raw_string;
	v->a[32603] = aux_sym_number_token1;
	v->a[32604] = aux_sym_number_token2;
	v->a[32605] = anon_sym_DOLLAR_LBRACE;
	v->a[32606] = anon_sym_DOLLAR_LPAREN;
	v->a[32607] = anon_sym_BQUOTE;
	v->a[32608] = anon_sym_DOLLAR_BQUOTE;
	v->a[32609] = sym_word;
	v->a[32610] = anon_sym_SEMI;
	v->a[32611] = 6;
	v->a[32612] = actions(3);
	v->a[32613] = 1;
	v->a[32614] = sym_comment;
	v->a[32615] = actions(3167);
	v->a[32616] = 1;
	v->a[32617] = aux_sym_concatenation_token1;
	v->a[32618] = actions(3296);
	v->a[32619] = 1;
	small_parse_table_1631(v);
}

void	small_parse_table_1631(t_small_parse_table_array *v)
{
	v->a[32620] = sym__concat;
	v->a[32621] = state(682);
	v->a[32622] = 1;
	v->a[32623] = aux_sym_concatenation_repeat1;
	v->a[32624] = actions(2664);
	v->a[32625] = 5;
	v->a[32626] = sym_file_descriptor;
	v->a[32627] = sym_variable_name;
	v->a[32628] = sym_test_operator;
	v->a[32629] = sym__brace_start;
	v->a[32630] = aux_sym_heredoc_redirect_token1;
	v->a[32631] = actions(2662);
	v->a[32632] = 33;
	v->a[32633] = anon_sym_PIPE;
	v->a[32634] = anon_sym_RPAREN;
	v->a[32635] = anon_sym_SEMI_SEMI;
	v->a[32636] = anon_sym_PIPE_AMP;
	v->a[32637] = anon_sym_AMP_AMP;
	v->a[32638] = anon_sym_PIPE_PIPE;
	v->a[32639] = anon_sym_LT;
	small_parse_table_1632(v);
}

void	small_parse_table_1632(t_small_parse_table_array *v)
{
	v->a[32640] = anon_sym_GT;
	v->a[32641] = anon_sym_GT_GT;
	v->a[32642] = anon_sym_AMP_GT;
	v->a[32643] = anon_sym_AMP_GT_GT;
	v->a[32644] = anon_sym_LT_AMP;
	v->a[32645] = anon_sym_GT_AMP;
	v->a[32646] = anon_sym_GT_PIPE;
	v->a[32647] = anon_sym_LT_AMP_DASH;
	v->a[32648] = anon_sym_GT_AMP_DASH;
	v->a[32649] = anon_sym_LT_LT;
	v->a[32650] = anon_sym_LT_LT_DASH;
	v->a[32651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32652] = anon_sym_AMP;
	v->a[32653] = anon_sym_DOLLAR;
	v->a[32654] = sym__special_character;
	v->a[32655] = anon_sym_DQUOTE;
	v->a[32656] = sym_raw_string;
	v->a[32657] = aux_sym_number_token1;
	v->a[32658] = aux_sym_number_token2;
	v->a[32659] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1633(v);
}

void	small_parse_table_1633(t_small_parse_table_array *v)
{
	v->a[32660] = anon_sym_DOLLAR_LPAREN;
	v->a[32661] = anon_sym_BQUOTE;
	v->a[32662] = anon_sym_DOLLAR_BQUOTE;
	v->a[32663] = aux_sym__simple_variable_name_token1;
	v->a[32664] = sym_word;
	v->a[32665] = anon_sym_SEMI;
	v->a[32666] = 3;
	v->a[32667] = actions(3);
	v->a[32668] = 1;
	v->a[32669] = sym_comment;
	v->a[32670] = actions(2774);
	v->a[32671] = 6;
	v->a[32672] = sym_file_descriptor;
	v->a[32673] = sym__concat;
	v->a[32674] = sym_variable_name;
	v->a[32675] = sym_test_operator;
	v->a[32676] = sym__brace_start;
	v->a[32677] = aux_sym_heredoc_redirect_token1;
	v->a[32678] = actions(2772);
	v->a[32679] = 35;
	small_parse_table_1634(v);
}

void	small_parse_table_1634(t_small_parse_table_array *v)
{
	v->a[32680] = anon_sym_esac;
	v->a[32681] = anon_sym_PIPE;
	v->a[32682] = anon_sym_SEMI_SEMI;
	v->a[32683] = anon_sym_SEMI_AMP;
	v->a[32684] = anon_sym_SEMI_SEMI_AMP;
	v->a[32685] = anon_sym_PIPE_AMP;
	v->a[32686] = anon_sym_AMP_AMP;
	v->a[32687] = anon_sym_PIPE_PIPE;
	v->a[32688] = anon_sym_LT;
	v->a[32689] = anon_sym_GT;
	v->a[32690] = anon_sym_GT_GT;
	v->a[32691] = anon_sym_AMP_GT;
	v->a[32692] = anon_sym_AMP_GT_GT;
	v->a[32693] = anon_sym_LT_AMP;
	v->a[32694] = anon_sym_GT_AMP;
	v->a[32695] = anon_sym_GT_PIPE;
	v->a[32696] = anon_sym_LT_AMP_DASH;
	v->a[32697] = anon_sym_GT_AMP_DASH;
	v->a[32698] = anon_sym_LT_LT;
	v->a[32699] = anon_sym_LT_LT_DASH;
	small_parse_table_1635(v);
}

/* EOF small_parse_table_326.c */
