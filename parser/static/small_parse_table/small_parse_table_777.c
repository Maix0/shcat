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
	v->a[77700] = 1;
	v->a[77701] = anon_sym_BQUOTE;
	v->a[77702] = actions(3243);
	v->a[77703] = 1;
	v->a[77704] = anon_sym_DOLLAR;
	v->a[77705] = actions(3245);
	v->a[77706] = 1;
	v->a[77707] = anon_sym_DQUOTE;
	v->a[77708] = state(1658);
	v->a[77709] = 1;
	v->a[77710] = aux_sym_string_repeat1;
	v->a[77711] = state(1739);
	v->a[77712] = 4;
	v->a[77713] = sym_arithmetic_expansion;
	v->a[77714] = sym_simple_expansion;
	v->a[77715] = sym_expansion;
	v->a[77716] = sym_command_substitution;
	v->a[77717] = 4;
	v->a[77718] = actions(3);
	v->a[77719] = 1;
	small_parse_table_3886(v);
}

void	small_parse_table_3886(t_small_parse_table_array *v)
{
	v->a[77720] = sym_comment;
	v->a[77721] = actions(1295);
	v->a[77722] = 1;
	v->a[77723] = sym_variable_name;
	v->a[77724] = actions(1293);
	v->a[77725] = 2;
	v->a[77726] = aux_sym__simple_variable_name_token1;
	v->a[77727] = aux_sym__multiline_variable_name_token1;
	v->a[77728] = actions(1291);
	v->a[77729] = 9;
	v->a[77730] = anon_sym_BANG;
	v->a[77731] = anon_sym_DASH;
	v->a[77732] = anon_sym_STAR;
	v->a[77733] = anon_sym_QMARK;
	v->a[77734] = anon_sym_DOLLAR;
	v->a[77735] = anon_sym_POUND;
	v->a[77736] = anon_sym_AT;
	v->a[77737] = anon_sym_0;
	v->a[77738] = anon_sym__;
	v->a[77739] = 10;
	small_parse_table_3887(v);
}

void	small_parse_table_3887(t_small_parse_table_array *v)
{
	v->a[77740] = actions(3);
	v->a[77741] = 1;
	v->a[77742] = sym_comment;
	v->a[77743] = actions(3071);
	v->a[77744] = 1;
	v->a[77745] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77746] = actions(3077);
	v->a[77747] = 1;
	v->a[77748] = sym_string_content;
	v->a[77749] = actions(3079);
	v->a[77750] = 1;
	v->a[77751] = anon_sym_DOLLAR_LBRACE;
	v->a[77752] = actions(3081);
	v->a[77753] = 1;
	v->a[77754] = anon_sym_DOLLAR_LPAREN;
	v->a[77755] = actions(3083);
	v->a[77756] = 1;
	v->a[77757] = anon_sym_BQUOTE;
	v->a[77758] = actions(3247);
	v->a[77759] = 1;
	small_parse_table_3888(v);
}

void	small_parse_table_3888(t_small_parse_table_array *v)
{
	v->a[77760] = anon_sym_DOLLAR;
	v->a[77761] = actions(3249);
	v->a[77762] = 1;
	v->a[77763] = anon_sym_DQUOTE;
	v->a[77764] = state(1666);
	v->a[77765] = 1;
	v->a[77766] = aux_sym_string_repeat1;
	v->a[77767] = state(1739);
	v->a[77768] = 4;
	v->a[77769] = sym_arithmetic_expansion;
	v->a[77770] = sym_simple_expansion;
	v->a[77771] = sym_expansion;
	v->a[77772] = sym_command_substitution;
	v->a[77773] = 4;
	v->a[77774] = actions(3);
	v->a[77775] = 1;
	v->a[77776] = sym_comment;
	v->a[77777] = actions(435);
	v->a[77778] = 1;
	v->a[77779] = sym_variable_name;
	small_parse_table_3889(v);
}

void	small_parse_table_3889(t_small_parse_table_array *v)
{
	v->a[77780] = actions(433);
	v->a[77781] = 2;
	v->a[77782] = aux_sym__simple_variable_name_token1;
	v->a[77783] = aux_sym__multiline_variable_name_token1;
	v->a[77784] = actions(431);
	v->a[77785] = 9;
	v->a[77786] = anon_sym_BANG;
	v->a[77787] = anon_sym_DASH;
	v->a[77788] = anon_sym_STAR;
	v->a[77789] = anon_sym_QMARK;
	v->a[77790] = anon_sym_DOLLAR;
	v->a[77791] = anon_sym_POUND;
	v->a[77792] = anon_sym_AT;
	v->a[77793] = anon_sym_0;
	v->a[77794] = anon_sym__;
	v->a[77795] = 10;
	v->a[77796] = actions(3);
	v->a[77797] = 1;
	v->a[77798] = sym_comment;
	v->a[77799] = actions(3071);
	small_parse_table_3890(v);
}

/* EOF small_parse_table_777.c */
