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
	v->a[76700] = aux_sym_string_repeat1;
	v->a[76701] = state(1739);
	v->a[76702] = 4;
	v->a[76703] = sym_arithmetic_expansion;
	v->a[76704] = sym_simple_expansion;
	v->a[76705] = sym_expansion;
	v->a[76706] = sym_command_substitution;
	v->a[76707] = 10;
	v->a[76708] = actions(3);
	v->a[76709] = 1;
	v->a[76710] = sym_comment;
	v->a[76711] = actions(3071);
	v->a[76712] = 1;
	v->a[76713] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76714] = actions(3077);
	v->a[76715] = 1;
	v->a[76716] = sym_string_content;
	v->a[76717] = actions(3079);
	v->a[76718] = 1;
	v->a[76719] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3836(v);
}

void	small_parse_table_3836(t_small_parse_table_array *v)
{
	v->a[76720] = actions(3081);
	v->a[76721] = 1;
	v->a[76722] = anon_sym_DOLLAR_LPAREN;
	v->a[76723] = actions(3083);
	v->a[76724] = 1;
	v->a[76725] = anon_sym_BQUOTE;
	v->a[76726] = actions(3147);
	v->a[76727] = 1;
	v->a[76728] = anon_sym_DOLLAR;
	v->a[76729] = actions(3149);
	v->a[76730] = 1;
	v->a[76731] = anon_sym_DQUOTE;
	v->a[76732] = state(1681);
	v->a[76733] = 1;
	v->a[76734] = aux_sym_string_repeat1;
	v->a[76735] = state(1739);
	v->a[76736] = 4;
	v->a[76737] = sym_arithmetic_expansion;
	v->a[76738] = sym_simple_expansion;
	v->a[76739] = sym_expansion;
	small_parse_table_3837(v);
}

void	small_parse_table_3837(t_small_parse_table_array *v)
{
	v->a[76740] = sym_command_substitution;
	v->a[76741] = 4;
	v->a[76742] = actions(3);
	v->a[76743] = 1;
	v->a[76744] = sym_comment;
	v->a[76745] = actions(423);
	v->a[76746] = 1;
	v->a[76747] = sym_variable_name;
	v->a[76748] = actions(421);
	v->a[76749] = 2;
	v->a[76750] = aux_sym__simple_variable_name_token1;
	v->a[76751] = aux_sym__multiline_variable_name_token1;
	v->a[76752] = actions(419);
	v->a[76753] = 9;
	v->a[76754] = anon_sym_BANG;
	v->a[76755] = anon_sym_DASH;
	v->a[76756] = anon_sym_STAR;
	v->a[76757] = anon_sym_QMARK;
	v->a[76758] = anon_sym_DOLLAR;
	v->a[76759] = anon_sym_POUND;
	small_parse_table_3838(v);
}

void	small_parse_table_3838(t_small_parse_table_array *v)
{
	v->a[76760] = anon_sym_AT;
	v->a[76761] = anon_sym_0;
	v->a[76762] = anon_sym__;
	v->a[76763] = 3;
	v->a[76764] = actions(3);
	v->a[76765] = 1;
	v->a[76766] = sym_comment;
	v->a[76767] = actions(1289);
	v->a[76768] = 1;
	v->a[76769] = sym_extglob_pattern;
	v->a[76770] = actions(1287);
	v->a[76771] = 11;
	v->a[76772] = anon_sym_esac;
	v->a[76773] = anon_sym_LPAREN;
	v->a[76774] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76775] = anon_sym_DOLLAR;
	v->a[76776] = anon_sym_DQUOTE;
	v->a[76777] = sym_raw_string;
	v->a[76778] = sym_number;
	v->a[76779] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3839(v);
}

void	small_parse_table_3839(t_small_parse_table_array *v)
{
	v->a[76780] = anon_sym_DOLLAR_LPAREN;
	v->a[76781] = anon_sym_BQUOTE;
	v->a[76782] = sym_word;
	v->a[76783] = 4;
	v->a[76784] = actions(3);
	v->a[76785] = 1;
	v->a[76786] = sym_comment;
	v->a[76787] = actions(3153);
	v->a[76788] = 1;
	v->a[76789] = anon_sym_esac;
	v->a[76790] = actions(3155);
	v->a[76791] = 1;
	v->a[76792] = sym_extglob_pattern;
	v->a[76793] = actions(3151);
	v->a[76794] = 10;
	v->a[76795] = anon_sym_LPAREN;
	v->a[76796] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76797] = anon_sym_DOLLAR;
	v->a[76798] = anon_sym_DQUOTE;
	v->a[76799] = sym_raw_string;
	small_parse_table_3840(v);
}

/* EOF small_parse_table_767.c */
