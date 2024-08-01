/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_377.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1885(t_small_parse_table_array *v)
{
	v->a[37700] = sym_arithmetic_expansion;
	v->a[37701] = sym_string;
	v->a[37702] = sym_simple_expansion;
	v->a[37703] = sym_expansion;
	v->a[37704] = sym_command_substitution;
	v->a[37705] = 10;
	v->a[37706] = actions(3);
	v->a[37707] = 1;
	v->a[37708] = sym_comment;
	v->a[37709] = actions(1625);
	v->a[37710] = 1;
	v->a[37711] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37712] = actions(1629);
	v->a[37713] = 1;
	v->a[37714] = anon_sym_DQUOTE;
	v->a[37715] = actions(1631);
	v->a[37716] = 1;
	v->a[37717] = anon_sym_DOLLAR_LBRACE;
	v->a[37718] = actions(1633);
	v->a[37719] = 1;
	small_parse_table_1886(v);
}

void	small_parse_table_1886(t_small_parse_table_array *v)
{
	v->a[37720] = anon_sym_DOLLAR_LPAREN;
	v->a[37721] = actions(1635);
	v->a[37722] = 1;
	v->a[37723] = anon_sym_BQUOTE;
	v->a[37724] = actions(1699);
	v->a[37725] = 1;
	v->a[37726] = anon_sym_DOLLAR;
	v->a[37727] = actions(1701);
	v->a[37728] = 1;
	v->a[37729] = sym__bare_dollar;
	v->a[37730] = actions(1697);
	v->a[37731] = 5;
	v->a[37732] = aux_sym_concatenation_token1;
	v->a[37733] = sym_raw_string;
	v->a[37734] = sym_number;
	v->a[37735] = sym__comment_word;
	v->a[37736] = sym_word;
	v->a[37737] = state(311);
	v->a[37738] = 5;
	v->a[37739] = sym_arithmetic_expansion;
	small_parse_table_1887(v);
}

void	small_parse_table_1887(t_small_parse_table_array *v)
{
	v->a[37740] = sym_string;
	v->a[37741] = sym_simple_expansion;
	v->a[37742] = sym_expansion;
	v->a[37743] = sym_command_substitution;
	v->a[37744] = 10;
	v->a[37745] = actions(3);
	v->a[37746] = 1;
	v->a[37747] = sym_comment;
	v->a[37748] = actions(782);
	v->a[37749] = 1;
	v->a[37750] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37751] = actions(784);
	v->a[37752] = 1;
	v->a[37753] = anon_sym_DOLLAR;
	v->a[37754] = actions(786);
	v->a[37755] = 1;
	v->a[37756] = anon_sym_DQUOTE;
	v->a[37757] = actions(788);
	v->a[37758] = 1;
	v->a[37759] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1888(v);
}

void	small_parse_table_1888(t_small_parse_table_array *v)
{
	v->a[37760] = actions(790);
	v->a[37761] = 1;
	v->a[37762] = anon_sym_DOLLAR_LPAREN;
	v->a[37763] = actions(792);
	v->a[37764] = 1;
	v->a[37765] = anon_sym_BQUOTE;
	v->a[37766] = actions(1705);
	v->a[37767] = 1;
	v->a[37768] = sym__bare_dollar;
	v->a[37769] = actions(1703);
	v->a[37770] = 5;
	v->a[37771] = aux_sym_concatenation_token1;
	v->a[37772] = sym_raw_string;
	v->a[37773] = sym_number;
	v->a[37774] = sym__comment_word;
	v->a[37775] = sym_word;
	v->a[37776] = state(1519);
	v->a[37777] = 5;
	v->a[37778] = sym_arithmetic_expansion;
	v->a[37779] = sym_string;
	small_parse_table_1889(v);
}

void	small_parse_table_1889(t_small_parse_table_array *v)
{
	v->a[37780] = sym_simple_expansion;
	v->a[37781] = sym_expansion;
	v->a[37782] = sym_command_substitution;
	v->a[37783] = 12;
	v->a[37784] = actions(3);
	v->a[37785] = 1;
	v->a[37786] = sym_comment;
	v->a[37787] = actions(1535);
	v->a[37788] = 1;
	v->a[37789] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37790] = actions(1539);
	v->a[37791] = 1;
	v->a[37792] = anon_sym_DQUOTE;
	v->a[37793] = actions(1541);
	v->a[37794] = 1;
	v->a[37795] = anon_sym_DOLLAR_LBRACE;
	v->a[37796] = actions(1543);
	v->a[37797] = 1;
	v->a[37798] = anon_sym_DOLLAR_LPAREN;
	v->a[37799] = actions(1545);
	small_parse_table_1890(v);
}

/* EOF small_parse_table_377.c */
