/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_487.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2435(t_small_parse_table_array *v)
{
	v->a[48700] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48701] = actions(2295);
	v->a[48702] = 1;
	v->a[48703] = anon_sym_DOLLAR;
	v->a[48704] = actions(2297);
	v->a[48705] = 1;
	v->a[48706] = anon_sym_DQUOTE;
	v->a[48707] = actions(2299);
	v->a[48708] = 1;
	v->a[48709] = sym_string_content;
	v->a[48710] = actions(2301);
	v->a[48711] = 1;
	v->a[48712] = anon_sym_DOLLAR_LBRACE;
	v->a[48713] = actions(2303);
	v->a[48714] = 1;
	v->a[48715] = anon_sym_DOLLAR_LPAREN;
	v->a[48716] = actions(2305);
	v->a[48717] = 1;
	v->a[48718] = anon_sym_BQUOTE;
	v->a[48719] = state(1170);
	small_parse_table_2436(v);
}

void	small_parse_table_2436(t_small_parse_table_array *v)
{
	v->a[48720] = 1;
	v->a[48721] = aux_sym_string_repeat1;
	v->a[48722] = state(1394);
	v->a[48723] = 4;
	v->a[48724] = sym_arithmetic_expansion;
	v->a[48725] = sym_simple_expansion;
	v->a[48726] = sym_expansion;
	v->a[48727] = sym_command_substitution;
	v->a[48728] = 8;
	v->a[48729] = actions(3);
	v->a[48730] = 1;
	v->a[48731] = sym_comment;
	v->a[48732] = actions(2277);
	v->a[48733] = 1;
	v->a[48734] = anon_sym_POUND;
	v->a[48735] = actions(2279);
	v->a[48736] = 1;
	v->a[48737] = aux_sym__simple_variable_name_token1;
	v->a[48738] = actions(2281);
	v->a[48739] = 1;
	small_parse_table_2437(v);
}

void	small_parse_table_2437(t_small_parse_table_array *v)
{
	v->a[48740] = anon_sym_0;
	v->a[48741] = actions(2283);
	v->a[48742] = 1;
	v->a[48743] = sym_variable_name;
	v->a[48744] = actions(2307);
	v->a[48745] = 1;
	v->a[48746] = anon_sym_RBRACE;
	v->a[48747] = state(1726);
	v->a[48748] = 1;
	v->a[48749] = sym__expansion_body;
	v->a[48750] = actions(2275);
	v->a[48751] = 6;
	v->a[48752] = anon_sym_BANG;
	v->a[48753] = anon_sym_DASH;
	v->a[48754] = anon_sym_STAR;
	v->a[48755] = anon_sym_QMARK;
	v->a[48756] = anon_sym_DOLLAR;
	v->a[48757] = anon_sym_AT;
	v->a[48758] = 10;
	v->a[48759] = actions(3);
	small_parse_table_2438(v);
}

void	small_parse_table_2438(t_small_parse_table_array *v)
{
	v->a[48760] = 1;
	v->a[48761] = sym_comment;
	v->a[48762] = actions(2293);
	v->a[48763] = 1;
	v->a[48764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48765] = actions(2299);
	v->a[48766] = 1;
	v->a[48767] = sym_string_content;
	v->a[48768] = actions(2301);
	v->a[48769] = 1;
	v->a[48770] = anon_sym_DOLLAR_LBRACE;
	v->a[48771] = actions(2303);
	v->a[48772] = 1;
	v->a[48773] = anon_sym_DOLLAR_LPAREN;
	v->a[48774] = actions(2305);
	v->a[48775] = 1;
	v->a[48776] = anon_sym_BQUOTE;
	v->a[48777] = actions(2309);
	v->a[48778] = 1;
	v->a[48779] = anon_sym_DOLLAR;
	small_parse_table_2439(v);
}

void	small_parse_table_2439(t_small_parse_table_array *v)
{
	v->a[48780] = actions(2311);
	v->a[48781] = 1;
	v->a[48782] = anon_sym_DQUOTE;
	v->a[48783] = state(1182);
	v->a[48784] = 1;
	v->a[48785] = aux_sym_string_repeat1;
	v->a[48786] = state(1394);
	v->a[48787] = 4;
	v->a[48788] = sym_arithmetic_expansion;
	v->a[48789] = sym_simple_expansion;
	v->a[48790] = sym_expansion;
	v->a[48791] = sym_command_substitution;
	v->a[48792] = 10;
	v->a[48793] = actions(3);
	v->a[48794] = 1;
	v->a[48795] = sym_comment;
	v->a[48796] = actions(2293);
	v->a[48797] = 1;
	v->a[48798] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48799] = actions(2299);
	small_parse_table_2440(v);
}

/* EOF small_parse_table_487.c */
