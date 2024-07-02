/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_777.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3885(t_small_parse_table_array *v)
{
	v->a[77700] = sym_arithmetic_expansion;
	v->a[77701] = sym_simple_expansion;
	v->a[77702] = sym_expansion;
	v->a[77703] = sym_command_substitution;
	v->a[77704] = 4;
	v->a[77705] = actions(3);
	v->a[77706] = 1;
	v->a[77707] = sym_comment;
	v->a[77708] = actions(369);
	v->a[77709] = 1;
	v->a[77710] = sym_variable_name;
	v->a[77711] = actions(367);
	v->a[77712] = 2;
	v->a[77713] = aux_sym__simple_variable_name_token1;
	v->a[77714] = aux_sym__multiline_variable_name_token1;
	v->a[77715] = actions(365);
	v->a[77716] = 9;
	v->a[77717] = anon_sym_BANG;
	v->a[77718] = anon_sym_DASH;
	v->a[77719] = anon_sym_STAR;
	small_parse_table_3886(v);
}

void	small_parse_table_3886(t_small_parse_table_array *v)
{
	v->a[77720] = anon_sym_QMARK;
	v->a[77721] = anon_sym_DOLLAR;
	v->a[77722] = anon_sym_POUND;
	v->a[77723] = anon_sym_AT;
	v->a[77724] = anon_sym_0;
	v->a[77725] = anon_sym__;
	v->a[77726] = 10;
	v->a[77727] = actions(3);
	v->a[77728] = 1;
	v->a[77729] = sym_comment;
	v->a[77730] = actions(3104);
	v->a[77731] = 1;
	v->a[77732] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77733] = actions(3110);
	v->a[77734] = 1;
	v->a[77735] = sym_string_content;
	v->a[77736] = actions(3112);
	v->a[77737] = 1;
	v->a[77738] = anon_sym_DOLLAR_LBRACE;
	v->a[77739] = actions(3114);
	small_parse_table_3887(v);
}

void	small_parse_table_3887(t_small_parse_table_array *v)
{
	v->a[77740] = 1;
	v->a[77741] = anon_sym_DOLLAR_LPAREN;
	v->a[77742] = actions(3116);
	v->a[77743] = 1;
	v->a[77744] = anon_sym_BQUOTE;
	v->a[77745] = actions(3260);
	v->a[77746] = 1;
	v->a[77747] = anon_sym_DOLLAR;
	v->a[77748] = actions(3262);
	v->a[77749] = 1;
	v->a[77750] = anon_sym_DQUOTE;
	v->a[77751] = state(1661);
	v->a[77752] = 1;
	v->a[77753] = aux_sym_string_repeat1;
	v->a[77754] = state(1748);
	v->a[77755] = 4;
	v->a[77756] = sym_arithmetic_expansion;
	v->a[77757] = sym_simple_expansion;
	v->a[77758] = sym_expansion;
	v->a[77759] = sym_command_substitution;
	small_parse_table_3888(v);
}

void	small_parse_table_3888(t_small_parse_table_array *v)
{
	v->a[77760] = 10;
	v->a[77761] = actions(3);
	v->a[77762] = 1;
	v->a[77763] = sym_comment;
	v->a[77764] = actions(3104);
	v->a[77765] = 1;
	v->a[77766] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77767] = actions(3110);
	v->a[77768] = 1;
	v->a[77769] = sym_string_content;
	v->a[77770] = actions(3112);
	v->a[77771] = 1;
	v->a[77772] = anon_sym_DOLLAR_LBRACE;
	v->a[77773] = actions(3114);
	v->a[77774] = 1;
	v->a[77775] = anon_sym_DOLLAR_LPAREN;
	v->a[77776] = actions(3116);
	v->a[77777] = 1;
	v->a[77778] = anon_sym_BQUOTE;
	v->a[77779] = actions(3264);
	small_parse_table_3889(v);
}

void	small_parse_table_3889(t_small_parse_table_array *v)
{
	v->a[77780] = 1;
	v->a[77781] = anon_sym_DOLLAR;
	v->a[77782] = actions(3266);
	v->a[77783] = 1;
	v->a[77784] = anon_sym_DQUOTE;
	v->a[77785] = state(1708);
	v->a[77786] = 1;
	v->a[77787] = aux_sym_string_repeat1;
	v->a[77788] = state(1748);
	v->a[77789] = 4;
	v->a[77790] = sym_arithmetic_expansion;
	v->a[77791] = sym_simple_expansion;
	v->a[77792] = sym_expansion;
	v->a[77793] = sym_command_substitution;
	v->a[77794] = 10;
	v->a[77795] = actions(3);
	v->a[77796] = 1;
	v->a[77797] = sym_comment;
	v->a[77798] = actions(3268);
	v->a[77799] = 1;
	small_parse_table_3890(v);
}

/* EOF small_parse_table_777.c */
