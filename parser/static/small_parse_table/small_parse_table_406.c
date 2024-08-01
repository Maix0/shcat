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
	v->a[40600] = 1;
	v->a[40601] = sym_comment;
	v->a[40602] = actions(1553);
	v->a[40603] = 1;
	v->a[40604] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40605] = actions(1555);
	v->a[40606] = 1;
	v->a[40607] = anon_sym_DOLLAR;
	v->a[40608] = actions(1557);
	v->a[40609] = 1;
	v->a[40610] = anon_sym_DQUOTE;
	v->a[40611] = actions(1559);
	v->a[40612] = 1;
	v->a[40613] = anon_sym_DOLLAR_LBRACE;
	v->a[40614] = actions(1561);
	v->a[40615] = 1;
	v->a[40616] = anon_sym_DOLLAR_LPAREN;
	v->a[40617] = actions(1563);
	v->a[40618] = 1;
	v->a[40619] = anon_sym_BQUOTE;
	small_parse_table_2031(v);
}

void	small_parse_table_2031(t_small_parse_table_array *v)
{
	v->a[40620] = state(169);
	v->a[40621] = 2;
	v->a[40622] = sym_concatenation;
	v->a[40623] = aux_sym_for_statement_repeat1;
	v->a[40624] = actions(1864);
	v->a[40625] = 3;
	v->a[40626] = sym_raw_string;
	v->a[40627] = sym_number;
	v->a[40628] = sym_word;
	v->a[40629] = state(258);
	v->a[40630] = 5;
	v->a[40631] = sym_arithmetic_expansion;
	v->a[40632] = sym_string;
	v->a[40633] = sym_simple_expansion;
	v->a[40634] = sym_expansion;
	v->a[40635] = sym_command_substitution;
	v->a[40636] = 10;
	v->a[40637] = actions(3);
	v->a[40638] = 1;
	v->a[40639] = sym_comment;
	small_parse_table_2032(v);
}

void	small_parse_table_2032(t_small_parse_table_array *v)
{
	v->a[40640] = actions(704);
	v->a[40641] = 1;
	v->a[40642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40643] = actions(706);
	v->a[40644] = 1;
	v->a[40645] = anon_sym_DOLLAR;
	v->a[40646] = actions(708);
	v->a[40647] = 1;
	v->a[40648] = anon_sym_DQUOTE;
	v->a[40649] = actions(710);
	v->a[40650] = 1;
	v->a[40651] = anon_sym_DOLLAR_LBRACE;
	v->a[40652] = actions(712);
	v->a[40653] = 1;
	v->a[40654] = anon_sym_DOLLAR_LPAREN;
	v->a[40655] = actions(714);
	v->a[40656] = 1;
	v->a[40657] = anon_sym_BQUOTE;
	v->a[40658] = state(224);
	v->a[40659] = 2;
	small_parse_table_2033(v);
}

void	small_parse_table_2033(t_small_parse_table_array *v)
{
	v->a[40660] = sym_concatenation;
	v->a[40661] = aux_sym_for_statement_repeat1;
	v->a[40662] = actions(760);
	v->a[40663] = 3;
	v->a[40664] = sym_raw_string;
	v->a[40665] = sym_number;
	v->a[40666] = sym_word;
	v->a[40667] = state(493);
	v->a[40668] = 5;
	v->a[40669] = sym_arithmetic_expansion;
	v->a[40670] = sym_string;
	v->a[40671] = sym_simple_expansion;
	v->a[40672] = sym_expansion;
	v->a[40673] = sym_command_substitution;
	v->a[40674] = 3;
	v->a[40675] = actions(3);
	v->a[40676] = 1;
	v->a[40677] = sym_comment;
	v->a[40678] = actions(1083);
	v->a[40679] = 4;
	small_parse_table_2034(v);
}

void	small_parse_table_2034(t_small_parse_table_array *v)
{
	v->a[40680] = sym__concat;
	v->a[40681] = sym_variable_name;
	v->a[40682] = ts_builtin_sym_end;
	v->a[40683] = aux_sym_heredoc_redirect_token1;
	v->a[40684] = actions(1085);
	v->a[40685] = 12;
	v->a[40686] = anon_sym_PIPE;
	v->a[40687] = anon_sym_RPAREN;
	v->a[40688] = anon_sym_SEMI_SEMI;
	v->a[40689] = anon_sym_AMP_AMP;
	v->a[40690] = anon_sym_PIPE_PIPE;
	v->a[40691] = anon_sym_LT;
	v->a[40692] = anon_sym_GT;
	v->a[40693] = anon_sym_GT_GT;
	v->a[40694] = anon_sym_LT_LT;
	v->a[40695] = aux_sym_concatenation_token1;
	v->a[40696] = anon_sym_BQUOTE;
	v->a[40697] = anon_sym_SEMI;
	v->a[40698] = 6;
	v->a[40699] = actions(3);
	small_parse_table_2035(v);
}

/* EOF small_parse_table_406.c */
