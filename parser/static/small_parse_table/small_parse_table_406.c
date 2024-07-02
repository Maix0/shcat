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
	v->a[40600] = actions(1442);
	v->a[40601] = 1;
	v->a[40602] = anon_sym_RPAREN;
	v->a[40603] = actions(1432);
	v->a[40604] = 7;
	v->a[40605] = anon_sym_LT;
	v->a[40606] = anon_sym_GT;
	v->a[40607] = anon_sym_GT_GT;
	v->a[40608] = anon_sym_LT_AMP;
	v->a[40609] = anon_sym_GT_AMP;
	v->a[40610] = anon_sym_GT_PIPE;
	v->a[40611] = anon_sym_LT_GT;
	v->a[40612] = actions(1428);
	v->a[40613] = 9;
	v->a[40614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40615] = anon_sym_DOLLAR;
	v->a[40616] = anon_sym_DQUOTE;
	v->a[40617] = sym_raw_string;
	v->a[40618] = sym_number;
	v->a[40619] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2031(v);
}

void	small_parse_table_2031(t_small_parse_table_array *v)
{
	v->a[40620] = anon_sym_DOLLAR_LPAREN;
	v->a[40621] = anon_sym_BQUOTE;
	v->a[40622] = sym_word;
	v->a[40623] = actions(1430);
	v->a[40624] = 9;
	v->a[40625] = anon_sym_PIPE;
	v->a[40626] = anon_sym_SEMI_SEMI;
	v->a[40627] = anon_sym_AMP_AMP;
	v->a[40628] = anon_sym_PIPE_PIPE;
	v->a[40629] = anon_sym_LT_LT;
	v->a[40630] = anon_sym_LT_LT_DASH;
	v->a[40631] = aux_sym_heredoc_redirect_token1;
	v->a[40632] = anon_sym_AMP;
	v->a[40633] = anon_sym_SEMI;
	v->a[40634] = 16;
	v->a[40635] = actions(3);
	v->a[40636] = 1;
	v->a[40637] = sym_comment;
	v->a[40638] = actions(55);
	v->a[40639] = 1;
	small_parse_table_2032(v);
}

void	small_parse_table_2032(t_small_parse_table_array *v)
{
	v->a[40640] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40641] = actions(57);
	v->a[40642] = 1;
	v->a[40643] = anon_sym_DOLLAR;
	v->a[40644] = actions(59);
	v->a[40645] = 1;
	v->a[40646] = anon_sym_DQUOTE;
	v->a[40647] = actions(63);
	v->a[40648] = 1;
	v->a[40649] = anon_sym_DOLLAR_LBRACE;
	v->a[40650] = actions(65);
	v->a[40651] = 1;
	v->a[40652] = anon_sym_DOLLAR_LPAREN;
	v->a[40653] = actions(67);
	v->a[40654] = 1;
	v->a[40655] = anon_sym_BQUOTE;
	v->a[40656] = actions(359);
	v->a[40657] = 1;
	v->a[40658] = sym_variable_name;
	v->a[40659] = actions(1164);
	small_parse_table_2033(v);
}

void	small_parse_table_2033(t_small_parse_table_array *v)
{
	v->a[40660] = 1;
	v->a[40661] = sym_file_descriptor;
	v->a[40662] = state(179);
	v->a[40663] = 1;
	v->a[40664] = sym_command_name;
	v->a[40665] = state(584);
	v->a[40666] = 1;
	v->a[40667] = sym_concatenation;
	v->a[40668] = state(1218);
	v->a[40669] = 1;
	v->a[40670] = sym_file_redirect;
	v->a[40671] = state(1055);
	v->a[40672] = 2;
	v->a[40673] = sym_variable_assignment;
	v->a[40674] = aux_sym_command_repeat1;
	v->a[40675] = actions(61);
	v->a[40676] = 3;
	v->a[40677] = sym_raw_string;
	v->a[40678] = sym_number;
	v->a[40679] = sym_word;
	small_parse_table_2034(v);
}

void	small_parse_table_2034(t_small_parse_table_array *v)
{
	v->a[40680] = state(433);
	v->a[40681] = 5;
	v->a[40682] = sym_arithmetic_expansion;
	v->a[40683] = sym_string;
	v->a[40684] = sym_simple_expansion;
	v->a[40685] = sym_expansion;
	v->a[40686] = sym_command_substitution;
	v->a[40687] = actions(1162);
	v->a[40688] = 7;
	v->a[40689] = anon_sym_LT;
	v->a[40690] = anon_sym_GT;
	v->a[40691] = anon_sym_GT_GT;
	v->a[40692] = anon_sym_LT_AMP;
	v->a[40693] = anon_sym_GT_AMP;
	v->a[40694] = anon_sym_GT_PIPE;
	v->a[40695] = anon_sym_LT_GT;
	v->a[40696] = 16;
	v->a[40697] = actions(3);
	v->a[40698] = 1;
	v->a[40699] = sym_comment;
	small_parse_table_2035(v);
}

/* EOF small_parse_table_406.c */
