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
	v->a[76700] = sym_string;
	v->a[76701] = sym_simple_expansion;
	v->a[76702] = sym_expansion;
	v->a[76703] = sym_command_substitution;
	v->a[76704] = 12;
	v->a[76705] = actions(3);
	v->a[76706] = 1;
	v->a[76707] = sym_comment;
	v->a[76708] = actions(2798);
	v->a[76709] = 1;
	v->a[76710] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76711] = actions(2802);
	v->a[76712] = 1;
	v->a[76713] = anon_sym_DQUOTE;
	v->a[76714] = actions(2804);
	v->a[76715] = 1;
	v->a[76716] = anon_sym_DOLLAR_LBRACE;
	v->a[76717] = actions(2806);
	v->a[76718] = 1;
	v->a[76719] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3836(v);
}

void	small_parse_table_3836(t_small_parse_table_array *v)
{
	v->a[76720] = actions(2808);
	v->a[76721] = 1;
	v->a[76722] = anon_sym_BQUOTE;
	v->a[76723] = actions(2929);
	v->a[76724] = 1;
	v->a[76725] = anon_sym_DOLLAR;
	v->a[76726] = actions(2931);
	v->a[76727] = 1;
	v->a[76728] = sym__comment_word;
	v->a[76729] = actions(2933);
	v->a[76730] = 1;
	v->a[76731] = sym__empty_value;
	v->a[76732] = state(1618);
	v->a[76733] = 1;
	v->a[76734] = sym_concatenation;
	v->a[76735] = actions(2927);
	v->a[76736] = 3;
	v->a[76737] = sym_raw_string;
	v->a[76738] = sym_number;
	v->a[76739] = sym_word;
	small_parse_table_3837(v);
}

void	small_parse_table_3837(t_small_parse_table_array *v)
{
	v->a[76740] = state(1398);
	v->a[76741] = 5;
	v->a[76742] = sym_arithmetic_expansion;
	v->a[76743] = sym_string;
	v->a[76744] = sym_simple_expansion;
	v->a[76745] = sym_expansion;
	v->a[76746] = sym_command_substitution;
	v->a[76747] = 12;
	v->a[76748] = actions(3);
	v->a[76749] = 1;
	v->a[76750] = sym_comment;
	v->a[76751] = actions(894);
	v->a[76752] = 1;
	v->a[76753] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76754] = actions(896);
	v->a[76755] = 1;
	v->a[76756] = anon_sym_DOLLAR;
	v->a[76757] = actions(898);
	v->a[76758] = 1;
	v->a[76759] = anon_sym_DQUOTE;
	small_parse_table_3838(v);
}

void	small_parse_table_3838(t_small_parse_table_array *v)
{
	v->a[76760] = actions(900);
	v->a[76761] = 1;
	v->a[76762] = anon_sym_DOLLAR_LBRACE;
	v->a[76763] = actions(902);
	v->a[76764] = 1;
	v->a[76765] = anon_sym_DOLLAR_LPAREN;
	v->a[76766] = actions(904);
	v->a[76767] = 1;
	v->a[76768] = anon_sym_BQUOTE;
	v->a[76769] = actions(2935);
	v->a[76770] = 1;
	v->a[76771] = aux_sym_heredoc_redirect_token1;
	v->a[76772] = state(1480);
	v->a[76773] = 1;
	v->a[76774] = aux_sym__heredoc_command;
	v->a[76775] = state(1937);
	v->a[76776] = 1;
	v->a[76777] = sym_concatenation;
	v->a[76778] = actions(882);
	v->a[76779] = 3;
	small_parse_table_3839(v);
}

void	small_parse_table_3839(t_small_parse_table_array *v)
{
	v->a[76780] = sym_raw_string;
	v->a[76781] = sym_number;
	v->a[76782] = sym_word;
	v->a[76783] = state(1774);
	v->a[76784] = 5;
	v->a[76785] = sym_arithmetic_expansion;
	v->a[76786] = sym_string;
	v->a[76787] = sym_simple_expansion;
	v->a[76788] = sym_expansion;
	v->a[76789] = sym_command_substitution;
	v->a[76790] = 10;
	v->a[76791] = actions(3);
	v->a[76792] = 1;
	v->a[76793] = sym_comment;
	v->a[76794] = actions(176);
	v->a[76795] = 1;
	v->a[76796] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76797] = actions(178);
	v->a[76798] = 1;
	v->a[76799] = anon_sym_DOLLAR;
	small_parse_table_3840(v);
}

/* EOF small_parse_table_767.c */
