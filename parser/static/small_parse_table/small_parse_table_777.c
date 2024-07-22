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
	v->a[77700] = actions(3044);
	v->a[77701] = 1;
	v->a[77702] = anon_sym_0;
	v->a[77703] = actions(3046);
	v->a[77704] = 1;
	v->a[77705] = sym_variable_name;
	v->a[77706] = actions(3394);
	v->a[77707] = 1;
	v->a[77708] = anon_sym_RBRACE;
	v->a[77709] = state(1945);
	v->a[77710] = 1;
	v->a[77711] = sym__expansion_body;
	v->a[77712] = actions(3038);
	v->a[77713] = 6;
	v->a[77714] = anon_sym_BANG;
	v->a[77715] = anon_sym_DASH;
	v->a[77716] = anon_sym_STAR;
	v->a[77717] = anon_sym_QMARK;
	v->a[77718] = anon_sym_DOLLAR;
	v->a[77719] = anon_sym_AT;
	small_parse_table_3886(v);
}

void	small_parse_table_3886(t_small_parse_table_array *v)
{
	v->a[77720] = 3;
	v->a[77721] = actions(3);
	v->a[77722] = 1;
	v->a[77723] = sym_comment;
	v->a[77724] = actions(1233);
	v->a[77725] = 1;
	v->a[77726] = sym_extglob_pattern;
	v->a[77727] = actions(1231);
	v->a[77728] = 11;
	v->a[77729] = anon_sym_esac;
	v->a[77730] = anon_sym_LPAREN;
	v->a[77731] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77732] = anon_sym_DOLLAR;
	v->a[77733] = anon_sym_DQUOTE;
	v->a[77734] = sym_raw_string;
	v->a[77735] = sym_number;
	v->a[77736] = anon_sym_DOLLAR_LBRACE;
	v->a[77737] = anon_sym_DOLLAR_LPAREN;
	v->a[77738] = anon_sym_BQUOTE;
	v->a[77739] = sym_word;
	small_parse_table_3887(v);
}

void	small_parse_table_3887(t_small_parse_table_array *v)
{
	v->a[77740] = 4;
	v->a[77741] = actions(3);
	v->a[77742] = 1;
	v->a[77743] = sym_comment;
	v->a[77744] = actions(3398);
	v->a[77745] = 1;
	v->a[77746] = anon_sym_esac;
	v->a[77747] = actions(3400);
	v->a[77748] = 1;
	v->a[77749] = sym_extglob_pattern;
	v->a[77750] = actions(3396);
	v->a[77751] = 10;
	v->a[77752] = anon_sym_LPAREN;
	v->a[77753] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77754] = anon_sym_DOLLAR;
	v->a[77755] = anon_sym_DQUOTE;
	v->a[77756] = sym_raw_string;
	v->a[77757] = sym_number;
	v->a[77758] = anon_sym_DOLLAR_LBRACE;
	v->a[77759] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3888(v);
}

void	small_parse_table_3888(t_small_parse_table_array *v)
{
	v->a[77760] = anon_sym_BQUOTE;
	v->a[77761] = sym_word;
	v->a[77762] = 10;
	v->a[77763] = actions(3);
	v->a[77764] = 1;
	v->a[77765] = sym_comment;
	v->a[77766] = actions(3058);
	v->a[77767] = 1;
	v->a[77768] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77769] = actions(3064);
	v->a[77770] = 1;
	v->a[77771] = sym_string_content;
	v->a[77772] = actions(3066);
	v->a[77773] = 1;
	v->a[77774] = anon_sym_DOLLAR_LBRACE;
	v->a[77775] = actions(3068);
	v->a[77776] = 1;
	v->a[77777] = anon_sym_DOLLAR_LPAREN;
	v->a[77778] = actions(3070);
	v->a[77779] = 1;
	small_parse_table_3889(v);
}

void	small_parse_table_3889(t_small_parse_table_array *v)
{
	v->a[77780] = anon_sym_BQUOTE;
	v->a[77781] = actions(3402);
	v->a[77782] = 1;
	v->a[77783] = anon_sym_DOLLAR;
	v->a[77784] = actions(3404);
	v->a[77785] = 1;
	v->a[77786] = anon_sym_DQUOTE;
	v->a[77787] = state(1610);
	v->a[77788] = 1;
	v->a[77789] = aux_sym_string_repeat1;
	v->a[77790] = state(1748);
	v->a[77791] = 4;
	v->a[77792] = sym_arithmetic_expansion;
	v->a[77793] = sym_simple_expansion;
	v->a[77794] = sym_expansion;
	v->a[77795] = sym_command_substitution;
	v->a[77796] = 3;
	v->a[77797] = actions(3);
	v->a[77798] = 1;
	v->a[77799] = sym_comment;
	small_parse_table_3890(v);
}

/* EOF small_parse_table_777.c */
