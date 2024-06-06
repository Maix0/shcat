/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1216.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6080(t_small_parse_table_array *v)
{
	v->a[121600] = sym_brace_expression;
	v->a[121601] = sym_string;
	v->a[121602] = sym_number;
	v->a[121603] = sym_simple_expansion;
	v->a[121604] = sym_expansion;
	v->a[121605] = sym_command_substitution;
	v->a[121606] = 16;
	v->a[121607] = actions(3);
	v->a[121608] = 1;
	v->a[121609] = sym_comment;
	v->a[121610] = actions(2466);
	v->a[121611] = 1;
	v->a[121612] = aux_sym_number_token1;
	v->a[121613] = actions(2468);
	v->a[121614] = 1;
	v->a[121615] = aux_sym_number_token2;
	v->a[121616] = actions(2472);
	v->a[121617] = 1;
	v->a[121618] = anon_sym_DOLLAR_LPAREN;
	v->a[121619] = actions(2482);
	small_parse_table_6081(v);
}

void	small_parse_table_6081(t_small_parse_table_array *v)
{
	v->a[121620] = 1;
	v->a[121621] = sym__brace_start;
	v->a[121622] = actions(6051);
	v->a[121623] = 1;
	v->a[121624] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121625] = actions(6055);
	v->a[121626] = 1;
	v->a[121627] = anon_sym_DQUOTE;
	v->a[121628] = actions(6057);
	v->a[121629] = 1;
	v->a[121630] = anon_sym_DOLLAR_LBRACE;
	v->a[121631] = actions(6059);
	v->a[121632] = 1;
	v->a[121633] = anon_sym_BQUOTE;
	v->a[121634] = actions(6061);
	v->a[121635] = 1;
	v->a[121636] = anon_sym_DOLLAR_BQUOTE;
	v->a[121637] = actions(6779);
	v->a[121638] = 1;
	v->a[121639] = sym_word;
	small_parse_table_6082(v);
}

void	small_parse_table_6082(t_small_parse_table_array *v)
{
	v->a[121640] = actions(6781);
	v->a[121641] = 1;
	v->a[121642] = sym__special_character;
	v->a[121643] = actions(6785);
	v->a[121644] = 1;
	v->a[121645] = sym__comment_word;
	v->a[121646] = actions(7041);
	v->a[121647] = 1;
	v->a[121648] = anon_sym_DOLLAR;
	v->a[121649] = actions(6783);
	v->a[121650] = 3;
	v->a[121651] = sym_test_operator;
	v->a[121652] = sym__bare_dollar;
	v->a[121653] = sym_raw_string;
	v->a[121654] = state(2646);
	v->a[121655] = 7;
	v->a[121656] = sym_arithmetic_expansion;
	v->a[121657] = sym_brace_expression;
	v->a[121658] = sym_string;
	v->a[121659] = sym_number;
	small_parse_table_6083(v);
}

void	small_parse_table_6083(t_small_parse_table_array *v)
{
	v->a[121660] = sym_simple_expansion;
	v->a[121661] = sym_expansion;
	v->a[121662] = sym_command_substitution;
	v->a[121663] = 16;
	v->a[121664] = actions(3);
	v->a[121665] = 1;
	v->a[121666] = sym_comment;
	v->a[121667] = actions(661);
	v->a[121668] = 1;
	v->a[121669] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121670] = actions(667);
	v->a[121671] = 1;
	v->a[121672] = anon_sym_DQUOTE;
	v->a[121673] = actions(671);
	v->a[121674] = 1;
	v->a[121675] = aux_sym_number_token1;
	v->a[121676] = actions(673);
	v->a[121677] = 1;
	v->a[121678] = aux_sym_number_token2;
	v->a[121679] = actions(675);
	small_parse_table_6084(v);
}

void	small_parse_table_6084(t_small_parse_table_array *v)
{
	v->a[121680] = 1;
	v->a[121681] = anon_sym_DOLLAR_LBRACE;
	v->a[121682] = actions(677);
	v->a[121683] = 1;
	v->a[121684] = anon_sym_DOLLAR_LPAREN;
	v->a[121685] = actions(679);
	v->a[121686] = 1;
	v->a[121687] = anon_sym_BQUOTE;
	v->a[121688] = actions(681);
	v->a[121689] = 1;
	v->a[121690] = anon_sym_DOLLAR_BQUOTE;
	v->a[121691] = actions(687);
	v->a[121692] = 1;
	v->a[121693] = sym__brace_start;
	v->a[121694] = actions(6541);
	v->a[121695] = 1;
	v->a[121696] = sym_word;
	v->a[121697] = actions(6543);
	v->a[121698] = 1;
	v->a[121699] = sym__special_character;
	small_parse_table_6085(v);
}

/* EOF small_parse_table_1216.c */
