/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_887.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4435(t_small_parse_table_array *v)
{
	v->a[88700] = sym_command_substitution;
	v->a[88701] = 10;
	v->a[88702] = actions(3);
	v->a[88703] = 1;
	v->a[88704] = sym_comment;
	v->a[88705] = actions(3712);
	v->a[88706] = 1;
	v->a[88707] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88708] = actions(3716);
	v->a[88709] = 1;
	v->a[88710] = sym_string_content;
	v->a[88711] = actions(3718);
	v->a[88712] = 1;
	v->a[88713] = anon_sym_DOLLAR_LBRACE;
	v->a[88714] = actions(3720);
	v->a[88715] = 1;
	v->a[88716] = anon_sym_DOLLAR_LPAREN;
	v->a[88717] = actions(3722);
	v->a[88718] = 1;
	v->a[88719] = anon_sym_BQUOTE;
	small_parse_table_4436(v);
}

void	small_parse_table_4436(t_small_parse_table_array *v)
{
	v->a[88720] = actions(3816);
	v->a[88721] = 1;
	v->a[88722] = anon_sym_DOLLAR;
	v->a[88723] = actions(3818);
	v->a[88724] = 1;
	v->a[88725] = anon_sym_DQUOTE;
	v->a[88726] = state(1776);
	v->a[88727] = 1;
	v->a[88728] = aux_sym_string_repeat1;
	v->a[88729] = state(1869);
	v->a[88730] = 4;
	v->a[88731] = sym_arithmetic_expansion;
	v->a[88732] = sym_simple_expansion;
	v->a[88733] = sym_expansion;
	v->a[88734] = sym_command_substitution;
	v->a[88735] = 10;
	v->a[88736] = actions(3);
	v->a[88737] = 1;
	v->a[88738] = sym_comment;
	v->a[88739] = actions(3712);
	small_parse_table_4437(v);
}

void	small_parse_table_4437(t_small_parse_table_array *v)
{
	v->a[88740] = 1;
	v->a[88741] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88742] = actions(3716);
	v->a[88743] = 1;
	v->a[88744] = sym_string_content;
	v->a[88745] = actions(3718);
	v->a[88746] = 1;
	v->a[88747] = anon_sym_DOLLAR_LBRACE;
	v->a[88748] = actions(3720);
	v->a[88749] = 1;
	v->a[88750] = anon_sym_DOLLAR_LPAREN;
	v->a[88751] = actions(3722);
	v->a[88752] = 1;
	v->a[88753] = anon_sym_BQUOTE;
	v->a[88754] = actions(3820);
	v->a[88755] = 1;
	v->a[88756] = anon_sym_DOLLAR;
	v->a[88757] = actions(3822);
	v->a[88758] = 1;
	v->a[88759] = anon_sym_DQUOTE;
	small_parse_table_4438(v);
}

void	small_parse_table_4438(t_small_parse_table_array *v)
{
	v->a[88760] = state(1824);
	v->a[88761] = 1;
	v->a[88762] = aux_sym_string_repeat1;
	v->a[88763] = state(1869);
	v->a[88764] = 4;
	v->a[88765] = sym_arithmetic_expansion;
	v->a[88766] = sym_simple_expansion;
	v->a[88767] = sym_expansion;
	v->a[88768] = sym_command_substitution;
	v->a[88769] = 4;
	v->a[88770] = actions(3);
	v->a[88771] = 1;
	v->a[88772] = sym_comment;
	v->a[88773] = actions(507);
	v->a[88774] = 1;
	v->a[88775] = sym_variable_name;
	v->a[88776] = actions(505);
	v->a[88777] = 2;
	v->a[88778] = aux_sym__simple_variable_name_token1;
	v->a[88779] = aux_sym__multiline_variable_name_token1;
	small_parse_table_4439(v);
}

void	small_parse_table_4439(t_small_parse_table_array *v)
{
	v->a[88780] = actions(503);
	v->a[88781] = 9;
	v->a[88782] = anon_sym_BANG;
	v->a[88783] = anon_sym_DASH;
	v->a[88784] = anon_sym_STAR;
	v->a[88785] = anon_sym_QMARK;
	v->a[88786] = anon_sym_DOLLAR;
	v->a[88787] = anon_sym_POUND;
	v->a[88788] = anon_sym_AT;
	v->a[88789] = anon_sym_0;
	v->a[88790] = anon_sym__;
	v->a[88791] = 10;
	v->a[88792] = actions(3);
	v->a[88793] = 1;
	v->a[88794] = sym_comment;
	v->a[88795] = actions(3512);
	v->a[88796] = 1;
	v->a[88797] = anon_sym_DQUOTE;
	v->a[88798] = actions(3712);
	v->a[88799] = 1;
	small_parse_table_4440(v);
}

/* EOF small_parse_table_887.c */
