/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_406.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2030(t_small_parse_table_array *v)
{
	v->a[40600] = anon_sym_PIPE;
	v->a[40601] = anon_sym_RPAREN;
	v->a[40602] = anon_sym_SEMI_SEMI;
	v->a[40603] = anon_sym_AMP_AMP;
	v->a[40604] = anon_sym_PIPE_PIPE;
	v->a[40605] = anon_sym_LT;
	v->a[40606] = anon_sym_GT;
	v->a[40607] = anon_sym_GT_GT;
	v->a[40608] = anon_sym_LT_AMP;
	v->a[40609] = anon_sym_GT_AMP;
	v->a[40610] = anon_sym_GT_PIPE;
	v->a[40611] = anon_sym_LT_GT;
	v->a[40612] = anon_sym_LT_LT;
	v->a[40613] = anon_sym_LT_LT_DASH;
	v->a[40614] = aux_sym_heredoc_redirect_token1;
	v->a[40615] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40616] = anon_sym_AMP;
	v->a[40617] = anon_sym_DOLLAR;
	v->a[40618] = anon_sym_DQUOTE;
	v->a[40619] = sym_raw_string;
	small_parse_table_2031(v);
}

void	small_parse_table_2031(t_small_parse_table_array *v)
{
	v->a[40620] = sym_number;
	v->a[40621] = anon_sym_DOLLAR_LBRACE;
	v->a[40622] = anon_sym_DOLLAR_LPAREN;
	v->a[40623] = anon_sym_BQUOTE;
	v->a[40624] = sym_word;
	v->a[40625] = anon_sym_SEMI;
	v->a[40626] = 7;
	v->a[40627] = actions(3);
	v->a[40628] = 1;
	v->a[40629] = sym_comment;
	v->a[40630] = actions(1432);
	v->a[40631] = 1;
	v->a[40632] = sym_file_descriptor;
	v->a[40633] = actions(1435);
	v->a[40634] = 1;
	v->a[40635] = sym_variable_name;
	v->a[40636] = actions(1446);
	v->a[40637] = 1;
	v->a[40638] = anon_sym_RPAREN;
	v->a[40639] = actions(1429);
	small_parse_table_2032(v);
}

void	small_parse_table_2032(t_small_parse_table_array *v)
{
	v->a[40640] = 7;
	v->a[40641] = anon_sym_LT;
	v->a[40642] = anon_sym_GT;
	v->a[40643] = anon_sym_GT_GT;
	v->a[40644] = anon_sym_LT_AMP;
	v->a[40645] = anon_sym_GT_AMP;
	v->a[40646] = anon_sym_GT_PIPE;
	v->a[40647] = anon_sym_LT_GT;
	v->a[40648] = actions(1422);
	v->a[40649] = 9;
	v->a[40650] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40651] = anon_sym_DOLLAR;
	v->a[40652] = anon_sym_DQUOTE;
	v->a[40653] = sym_raw_string;
	v->a[40654] = sym_number;
	v->a[40655] = anon_sym_DOLLAR_LBRACE;
	v->a[40656] = anon_sym_DOLLAR_LPAREN;
	v->a[40657] = anon_sym_BQUOTE;
	v->a[40658] = sym_word;
	v->a[40659] = actions(1424);
	small_parse_table_2033(v);
}

void	small_parse_table_2033(t_small_parse_table_array *v)
{
	v->a[40660] = 9;
	v->a[40661] = anon_sym_PIPE;
	v->a[40662] = anon_sym_SEMI_SEMI;
	v->a[40663] = anon_sym_AMP_AMP;
	v->a[40664] = anon_sym_PIPE_PIPE;
	v->a[40665] = anon_sym_LT_LT;
	v->a[40666] = anon_sym_LT_LT_DASH;
	v->a[40667] = aux_sym_heredoc_redirect_token1;
	v->a[40668] = anon_sym_AMP;
	v->a[40669] = anon_sym_SEMI;
	v->a[40670] = 7;
	v->a[40671] = actions(3);
	v->a[40672] = 1;
	v->a[40673] = sym_comment;
	v->a[40674] = actions(1432);
	v->a[40675] = 1;
	v->a[40676] = sym_file_descriptor;
	v->a[40677] = actions(1435);
	v->a[40678] = 1;
	v->a[40679] = sym_variable_name;
	small_parse_table_2034(v);
}

void	small_parse_table_2034(t_small_parse_table_array *v)
{
	v->a[40680] = actions(1449);
	v->a[40681] = 1;
	v->a[40682] = anon_sym_RPAREN;
	v->a[40683] = actions(1429);
	v->a[40684] = 7;
	v->a[40685] = anon_sym_LT;
	v->a[40686] = anon_sym_GT;
	v->a[40687] = anon_sym_GT_GT;
	v->a[40688] = anon_sym_LT_AMP;
	v->a[40689] = anon_sym_GT_AMP;
	v->a[40690] = anon_sym_GT_PIPE;
	v->a[40691] = anon_sym_LT_GT;
	v->a[40692] = actions(1422);
	v->a[40693] = 9;
	v->a[40694] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40695] = anon_sym_DOLLAR;
	v->a[40696] = anon_sym_DQUOTE;
	v->a[40697] = sym_raw_string;
	v->a[40698] = sym_number;
	v->a[40699] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2035(v);
}

/* EOF small_parse_table_406.c */
