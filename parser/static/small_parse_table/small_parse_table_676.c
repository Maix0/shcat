/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_676.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3380(t_small_parse_table_array *v)
{
	v->a[67600] = actions(1730);
	v->a[67601] = 1;
	v->a[67602] = anon_sym_DOLLAR_LBRACE;
	v->a[67603] = actions(1732);
	v->a[67604] = 1;
	v->a[67605] = anon_sym_DOLLAR_LPAREN;
	v->a[67606] = actions(1734);
	v->a[67607] = 1;
	v->a[67608] = anon_sym_BQUOTE;
	v->a[67609] = actions(2458);
	v->a[67610] = 1;
	v->a[67611] = sym__bare_dollar;
	v->a[67612] = actions(2699);
	v->a[67613] = 1;
	v->a[67614] = anon_sym_DOLLAR;
	v->a[67615] = actions(2456);
	v->a[67616] = 5;
	v->a[67617] = aux_sym_concatenation_token1;
	v->a[67618] = sym_raw_string;
	v->a[67619] = sym_number;
	small_parse_table_3381(v);
}

void	small_parse_table_3381(t_small_parse_table_array *v)
{
	v->a[67620] = sym__comment_word;
	v->a[67621] = sym_word;
	v->a[67622] = state(1865);
	v->a[67623] = 5;
	v->a[67624] = sym_arithmetic_expansion;
	v->a[67625] = sym_string;
	v->a[67626] = sym_simple_expansion;
	v->a[67627] = sym_expansion;
	v->a[67628] = sym_command_substitution;
	v->a[67629] = 10;
	v->a[67630] = actions(3);
	v->a[67631] = 1;
	v->a[67632] = sym_comment;
	v->a[67633] = actions(55);
	v->a[67634] = 1;
	v->a[67635] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67636] = actions(59);
	v->a[67637] = 1;
	v->a[67638] = anon_sym_DQUOTE;
	v->a[67639] = actions(63);
	small_parse_table_3382(v);
}

void	small_parse_table_3382(t_small_parse_table_array *v)
{
	v->a[67640] = 1;
	v->a[67641] = anon_sym_DOLLAR_LBRACE;
	v->a[67642] = actions(65);
	v->a[67643] = 1;
	v->a[67644] = anon_sym_DOLLAR_LPAREN;
	v->a[67645] = actions(67);
	v->a[67646] = 1;
	v->a[67647] = anon_sym_BQUOTE;
	v->a[67648] = actions(2496);
	v->a[67649] = 1;
	v->a[67650] = sym__bare_dollar;
	v->a[67651] = actions(2701);
	v->a[67652] = 1;
	v->a[67653] = anon_sym_DOLLAR;
	v->a[67654] = actions(2492);
	v->a[67655] = 5;
	v->a[67656] = aux_sym_concatenation_token1;
	v->a[67657] = sym_raw_string;
	v->a[67658] = sym_number;
	v->a[67659] = sym__comment_word;
	small_parse_table_3383(v);
}

void	small_parse_table_3383(t_small_parse_table_array *v)
{
	v->a[67660] = sym_word;
	v->a[67661] = state(419);
	v->a[67662] = 5;
	v->a[67663] = sym_arithmetic_expansion;
	v->a[67664] = sym_string;
	v->a[67665] = sym_simple_expansion;
	v->a[67666] = sym_expansion;
	v->a[67667] = sym_command_substitution;
	v->a[67668] = 12;
	v->a[67669] = actions(3);
	v->a[67670] = 1;
	v->a[67671] = sym_comment;
	v->a[67672] = actions(1012);
	v->a[67673] = 1;
	v->a[67674] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67675] = actions(1014);
	v->a[67676] = 1;
	v->a[67677] = anon_sym_DOLLAR;
	v->a[67678] = actions(1016);
	v->a[67679] = 1;
	small_parse_table_3384(v);
}

void	small_parse_table_3384(t_small_parse_table_array *v)
{
	v->a[67680] = anon_sym_DQUOTE;
	v->a[67681] = actions(1018);
	v->a[67682] = 1;
	v->a[67683] = anon_sym_DOLLAR_LBRACE;
	v->a[67684] = actions(1020);
	v->a[67685] = 1;
	v->a[67686] = anon_sym_DOLLAR_LPAREN;
	v->a[67687] = actions(1022);
	v->a[67688] = 1;
	v->a[67689] = anon_sym_BQUOTE;
	v->a[67690] = actions(2703);
	v->a[67691] = 1;
	v->a[67692] = aux_sym_heredoc_redirect_token1;
	v->a[67693] = state(1250);
	v->a[67694] = 1;
	v->a[67695] = aux_sym__heredoc_command;
	v->a[67696] = state(1722);
	v->a[67697] = 1;
	v->a[67698] = sym_concatenation;
	v->a[67699] = actions(1002);
	small_parse_table_3385(v);
}

/* EOF small_parse_table_676.c */
