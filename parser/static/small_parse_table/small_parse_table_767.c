/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_767.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3835(t_small_parse_table_array *v)
{
	v->a[76700] = 1;
	v->a[76701] = sym_comment;
	v->a[76702] = actions(3058);
	v->a[76703] = 1;
	v->a[76704] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76705] = actions(3064);
	v->a[76706] = 1;
	v->a[76707] = sym_string_content;
	v->a[76708] = actions(3066);
	v->a[76709] = 1;
	v->a[76710] = anon_sym_DOLLAR_LBRACE;
	v->a[76711] = actions(3068);
	v->a[76712] = 1;
	v->a[76713] = anon_sym_DOLLAR_LPAREN;
	v->a[76714] = actions(3070);
	v->a[76715] = 1;
	v->a[76716] = anon_sym_BQUOTE;
	v->a[76717] = actions(3286);
	v->a[76718] = 1;
	v->a[76719] = anon_sym_DOLLAR;
	small_parse_table_3836(v);
}

void	small_parse_table_3836(t_small_parse_table_array *v)
{
	v->a[76720] = actions(3288);
	v->a[76721] = 1;
	v->a[76722] = anon_sym_DQUOTE;
	v->a[76723] = state(1610);
	v->a[76724] = 1;
	v->a[76725] = aux_sym_string_repeat1;
	v->a[76726] = state(1748);
	v->a[76727] = 4;
	v->a[76728] = sym_arithmetic_expansion;
	v->a[76729] = sym_simple_expansion;
	v->a[76730] = sym_expansion;
	v->a[76731] = sym_command_substitution;
	v->a[76732] = 4;
	v->a[76733] = actions(3);
	v->a[76734] = 1;
	v->a[76735] = sym_comment;
	v->a[76736] = actions(3292);
	v->a[76737] = 1;
	v->a[76738] = anon_sym_esac;
	v->a[76739] = actions(3294);
	small_parse_table_3837(v);
}

void	small_parse_table_3837(t_small_parse_table_array *v)
{
	v->a[76740] = 1;
	v->a[76741] = sym_extglob_pattern;
	v->a[76742] = actions(3290);
	v->a[76743] = 10;
	v->a[76744] = anon_sym_LPAREN;
	v->a[76745] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76746] = anon_sym_DOLLAR;
	v->a[76747] = anon_sym_DQUOTE;
	v->a[76748] = sym_raw_string;
	v->a[76749] = sym_number;
	v->a[76750] = anon_sym_DOLLAR_LBRACE;
	v->a[76751] = anon_sym_DOLLAR_LPAREN;
	v->a[76752] = anon_sym_BQUOTE;
	v->a[76753] = sym_word;
	v->a[76754] = 10;
	v->a[76755] = actions(3);
	v->a[76756] = 1;
	v->a[76757] = sym_comment;
	v->a[76758] = actions(3058);
	v->a[76759] = 1;
	small_parse_table_3838(v);
}

void	small_parse_table_3838(t_small_parse_table_array *v)
{
	v->a[76760] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76761] = actions(3064);
	v->a[76762] = 1;
	v->a[76763] = sym_string_content;
	v->a[76764] = actions(3066);
	v->a[76765] = 1;
	v->a[76766] = anon_sym_DOLLAR_LBRACE;
	v->a[76767] = actions(3068);
	v->a[76768] = 1;
	v->a[76769] = anon_sym_DOLLAR_LPAREN;
	v->a[76770] = actions(3070);
	v->a[76771] = 1;
	v->a[76772] = anon_sym_BQUOTE;
	v->a[76773] = actions(3296);
	v->a[76774] = 1;
	v->a[76775] = anon_sym_DOLLAR;
	v->a[76776] = actions(3298);
	v->a[76777] = 1;
	v->a[76778] = anon_sym_DQUOTE;
	v->a[76779] = state(1610);
	small_parse_table_3839(v);
}

void	small_parse_table_3839(t_small_parse_table_array *v)
{
	v->a[76780] = 1;
	v->a[76781] = aux_sym_string_repeat1;
	v->a[76782] = state(1748);
	v->a[76783] = 4;
	v->a[76784] = sym_arithmetic_expansion;
	v->a[76785] = sym_simple_expansion;
	v->a[76786] = sym_expansion;
	v->a[76787] = sym_command_substitution;
	v->a[76788] = 10;
	v->a[76789] = actions(3);
	v->a[76790] = 1;
	v->a[76791] = sym_comment;
	v->a[76792] = actions(3058);
	v->a[76793] = 1;
	v->a[76794] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76795] = actions(3064);
	v->a[76796] = 1;
	v->a[76797] = sym_string_content;
	v->a[76798] = actions(3066);
	v->a[76799] = 1;
	small_parse_table_3840(v);
}

/* EOF small_parse_table_767.c */
