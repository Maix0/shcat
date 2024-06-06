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
	v->a[40600] = aux_sym_number_token2;
	v->a[40601] = anon_sym_DOLLAR_LBRACE;
	v->a[40602] = anon_sym_DOLLAR_LPAREN;
	v->a[40603] = anon_sym_BQUOTE;
	v->a[40604] = anon_sym_DOLLAR_BQUOTE;
	v->a[40605] = sym_word;
	v->a[40606] = anon_sym_SEMI;
	v->a[40607] = 3;
	v->a[40608] = actions(3);
	v->a[40609] = 1;
	v->a[40610] = sym_comment;
	v->a[40611] = actions(2774);
	v->a[40612] = 6;
	v->a[40613] = sym_file_descriptor;
	v->a[40614] = sym__concat;
	v->a[40615] = sym_test_operator;
	v->a[40616] = sym__bare_dollar;
	v->a[40617] = sym__brace_start;
	v->a[40618] = aux_sym_heredoc_redirect_token1;
	v->a[40619] = actions(2772);
	small_parse_table_2031(v);
}

void	small_parse_table_2031(t_small_parse_table_array *v)
{
	v->a[40620] = 34;
	v->a[40621] = anon_sym_PIPE;
	v->a[40622] = anon_sym_SEMI_SEMI;
	v->a[40623] = anon_sym_SEMI_AMP;
	v->a[40624] = anon_sym_SEMI_SEMI_AMP;
	v->a[40625] = anon_sym_PIPE_AMP;
	v->a[40626] = anon_sym_AMP_AMP;
	v->a[40627] = anon_sym_PIPE_PIPE;
	v->a[40628] = anon_sym_LT;
	v->a[40629] = anon_sym_GT;
	v->a[40630] = anon_sym_GT_GT;
	v->a[40631] = anon_sym_AMP_GT;
	v->a[40632] = anon_sym_AMP_GT_GT;
	v->a[40633] = anon_sym_LT_AMP;
	v->a[40634] = anon_sym_GT_AMP;
	v->a[40635] = anon_sym_GT_PIPE;
	v->a[40636] = anon_sym_LT_AMP_DASH;
	v->a[40637] = anon_sym_GT_AMP_DASH;
	v->a[40638] = anon_sym_LT_LT;
	v->a[40639] = anon_sym_LT_LT_DASH;
	small_parse_table_2032(v);
}

void	small_parse_table_2032(t_small_parse_table_array *v)
{
	v->a[40640] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40641] = anon_sym_AMP;
	v->a[40642] = aux_sym_concatenation_token1;
	v->a[40643] = anon_sym_DOLLAR;
	v->a[40644] = sym__special_character;
	v->a[40645] = anon_sym_DQUOTE;
	v->a[40646] = sym_raw_string;
	v->a[40647] = aux_sym_number_token1;
	v->a[40648] = aux_sym_number_token2;
	v->a[40649] = anon_sym_DOLLAR_LBRACE;
	v->a[40650] = anon_sym_DOLLAR_LPAREN;
	v->a[40651] = anon_sym_BQUOTE;
	v->a[40652] = anon_sym_DOLLAR_BQUOTE;
	v->a[40653] = sym_word;
	v->a[40654] = anon_sym_SEMI;
	v->a[40655] = 3;
	v->a[40656] = actions(3);
	v->a[40657] = 1;
	v->a[40658] = sym_comment;
	v->a[40659] = actions(3125);
	small_parse_table_2033(v);
}

void	small_parse_table_2033(t_small_parse_table_array *v)
{
	v->a[40660] = 6;
	v->a[40661] = sym_file_descriptor;
	v->a[40662] = sym__concat;
	v->a[40663] = sym_test_operator;
	v->a[40664] = sym__bare_dollar;
	v->a[40665] = sym__brace_start;
	v->a[40666] = aux_sym_heredoc_redirect_token1;
	v->a[40667] = actions(3123);
	v->a[40668] = 34;
	v->a[40669] = anon_sym_PIPE;
	v->a[40670] = anon_sym_SEMI_SEMI;
	v->a[40671] = anon_sym_SEMI_AMP;
	v->a[40672] = anon_sym_SEMI_SEMI_AMP;
	v->a[40673] = anon_sym_PIPE_AMP;
	v->a[40674] = anon_sym_AMP_AMP;
	v->a[40675] = anon_sym_PIPE_PIPE;
	v->a[40676] = anon_sym_LT;
	v->a[40677] = anon_sym_GT;
	v->a[40678] = anon_sym_GT_GT;
	v->a[40679] = anon_sym_AMP_GT;
	small_parse_table_2034(v);
}

void	small_parse_table_2034(t_small_parse_table_array *v)
{
	v->a[40680] = anon_sym_AMP_GT_GT;
	v->a[40681] = anon_sym_LT_AMP;
	v->a[40682] = anon_sym_GT_AMP;
	v->a[40683] = anon_sym_GT_PIPE;
	v->a[40684] = anon_sym_LT_AMP_DASH;
	v->a[40685] = anon_sym_GT_AMP_DASH;
	v->a[40686] = anon_sym_LT_LT;
	v->a[40687] = anon_sym_LT_LT_DASH;
	v->a[40688] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40689] = anon_sym_AMP;
	v->a[40690] = aux_sym_concatenation_token1;
	v->a[40691] = anon_sym_DOLLAR;
	v->a[40692] = sym__special_character;
	v->a[40693] = anon_sym_DQUOTE;
	v->a[40694] = sym_raw_string;
	v->a[40695] = aux_sym_number_token1;
	v->a[40696] = aux_sym_number_token2;
	v->a[40697] = anon_sym_DOLLAR_LBRACE;
	v->a[40698] = anon_sym_DOLLAR_LPAREN;
	v->a[40699] = anon_sym_BQUOTE;
	small_parse_table_2035(v);
}

/* EOF small_parse_table_406.c */
