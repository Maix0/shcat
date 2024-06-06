/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1176.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5880(t_small_parse_table_array *v)
{
	v->a[117600] = actions(6781);
	v->a[117601] = 1;
	v->a[117602] = sym__special_character;
	v->a[117603] = actions(6785);
	v->a[117604] = 1;
	v->a[117605] = sym__comment_word;
	v->a[117606] = actions(6911);
	v->a[117607] = 1;
	v->a[117608] = anon_sym_DOLLAR;
	v->a[117609] = actions(6783);
	v->a[117610] = 3;
	v->a[117611] = sym_test_operator;
	v->a[117612] = sym__bare_dollar;
	v->a[117613] = sym_raw_string;
	v->a[117614] = state(2646);
	v->a[117615] = 7;
	v->a[117616] = sym_arithmetic_expansion;
	v->a[117617] = sym_brace_expression;
	v->a[117618] = sym_string;
	v->a[117619] = sym_number;
	small_parse_table_5881(v);
}

void	small_parse_table_5881(t_small_parse_table_array *v)
{
	v->a[117620] = sym_simple_expansion;
	v->a[117621] = sym_expansion;
	v->a[117622] = sym_command_substitution;
	v->a[117623] = 16;
	v->a[117624] = actions(3);
	v->a[117625] = 1;
	v->a[117626] = sym_comment;
	v->a[117627] = actions(2466);
	v->a[117628] = 1;
	v->a[117629] = aux_sym_number_token1;
	v->a[117630] = actions(2468);
	v->a[117631] = 1;
	v->a[117632] = aux_sym_number_token2;
	v->a[117633] = actions(2472);
	v->a[117634] = 1;
	v->a[117635] = anon_sym_DOLLAR_LPAREN;
	v->a[117636] = actions(2482);
	v->a[117637] = 1;
	v->a[117638] = sym__brace_start;
	v->a[117639] = actions(6051);
	small_parse_table_5882(v);
}

void	small_parse_table_5882(t_small_parse_table_array *v)
{
	v->a[117640] = 1;
	v->a[117641] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117642] = actions(6055);
	v->a[117643] = 1;
	v->a[117644] = anon_sym_DQUOTE;
	v->a[117645] = actions(6057);
	v->a[117646] = 1;
	v->a[117647] = anon_sym_DOLLAR_LBRACE;
	v->a[117648] = actions(6059);
	v->a[117649] = 1;
	v->a[117650] = anon_sym_BQUOTE;
	v->a[117651] = actions(6061);
	v->a[117652] = 1;
	v->a[117653] = anon_sym_DOLLAR_BQUOTE;
	v->a[117654] = actions(6779);
	v->a[117655] = 1;
	v->a[117656] = sym_word;
	v->a[117657] = actions(6781);
	v->a[117658] = 1;
	v->a[117659] = sym__special_character;
	small_parse_table_5883(v);
}

void	small_parse_table_5883(t_small_parse_table_array *v)
{
	v->a[117660] = actions(6785);
	v->a[117661] = 1;
	v->a[117662] = sym__comment_word;
	v->a[117663] = actions(6913);
	v->a[117664] = 1;
	v->a[117665] = anon_sym_DOLLAR;
	v->a[117666] = actions(6783);
	v->a[117667] = 3;
	v->a[117668] = sym_test_operator;
	v->a[117669] = sym__bare_dollar;
	v->a[117670] = sym_raw_string;
	v->a[117671] = state(2646);
	v->a[117672] = 7;
	v->a[117673] = sym_arithmetic_expansion;
	v->a[117674] = sym_brace_expression;
	v->a[117675] = sym_string;
	v->a[117676] = sym_number;
	v->a[117677] = sym_simple_expansion;
	v->a[117678] = sym_expansion;
	v->a[117679] = sym_command_substitution;
	small_parse_table_5884(v);
}

void	small_parse_table_5884(t_small_parse_table_array *v)
{
	v->a[117680] = 16;
	v->a[117681] = actions(3);
	v->a[117682] = 1;
	v->a[117683] = sym_comment;
	v->a[117684] = actions(2160);
	v->a[117685] = 1;
	v->a[117686] = aux_sym_number_token1;
	v->a[117687] = actions(2162);
	v->a[117688] = 1;
	v->a[117689] = aux_sym_number_token2;
	v->a[117690] = actions(2166);
	v->a[117691] = 1;
	v->a[117692] = anon_sym_DOLLAR_LPAREN;
	v->a[117693] = actions(2174);
	v->a[117694] = 1;
	v->a[117695] = sym__brace_start;
	v->a[117696] = actions(5989);
	v->a[117697] = 1;
	v->a[117698] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117699] = actions(5993);
	small_parse_table_5885(v);
}

/* EOF small_parse_table_1176.c */
