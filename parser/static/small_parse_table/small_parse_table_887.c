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
	v->a[88700] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88701] = actions(3420);
	v->a[88702] = 1;
	v->a[88703] = sym_string_content;
	v->a[88704] = actions(3422);
	v->a[88705] = 1;
	v->a[88706] = anon_sym_DOLLAR_LBRACE;
	v->a[88707] = actions(3424);
	v->a[88708] = 1;
	v->a[88709] = anon_sym_DOLLAR_LPAREN;
	v->a[88710] = actions(3426);
	v->a[88711] = 1;
	v->a[88712] = anon_sym_BQUOTE;
	v->a[88713] = actions(3714);
	v->a[88714] = 1;
	v->a[88715] = anon_sym_DOLLAR;
	v->a[88716] = actions(3716);
	v->a[88717] = 1;
	v->a[88718] = anon_sym_DQUOTE;
	v->a[88719] = state(1907);
	small_parse_table_4436(v);
}

void	small_parse_table_4436(t_small_parse_table_array *v)
{
	v->a[88720] = 1;
	v->a[88721] = aux_sym_string_repeat1;
	v->a[88722] = state(1959);
	v->a[88723] = 4;
	v->a[88724] = sym_arithmetic_expansion;
	v->a[88725] = sym_simple_expansion;
	v->a[88726] = sym_expansion;
	v->a[88727] = sym_command_substitution;
	v->a[88728] = 4;
	v->a[88729] = actions(3);
	v->a[88730] = 1;
	v->a[88731] = sym_comment;
	v->a[88732] = actions(447);
	v->a[88733] = 1;
	v->a[88734] = sym_variable_name;
	v->a[88735] = actions(445);
	v->a[88736] = 2;
	v->a[88737] = aux_sym__simple_variable_name_token1;
	v->a[88738] = aux_sym__multiline_variable_name_token1;
	v->a[88739] = actions(443);
	small_parse_table_4437(v);
}

void	small_parse_table_4437(t_small_parse_table_array *v)
{
	v->a[88740] = 9;
	v->a[88741] = anon_sym_BANG;
	v->a[88742] = anon_sym_DASH;
	v->a[88743] = anon_sym_STAR;
	v->a[88744] = anon_sym_QMARK;
	v->a[88745] = anon_sym_DOLLAR;
	v->a[88746] = anon_sym_POUND;
	v->a[88747] = anon_sym_AT;
	v->a[88748] = anon_sym_0;
	v->a[88749] = anon_sym__;
	v->a[88750] = 10;
	v->a[88751] = actions(3);
	v->a[88752] = 1;
	v->a[88753] = sym_comment;
	v->a[88754] = actions(3414);
	v->a[88755] = 1;
	v->a[88756] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88757] = actions(3420);
	v->a[88758] = 1;
	v->a[88759] = sym_string_content;
	small_parse_table_4438(v);
}

void	small_parse_table_4438(t_small_parse_table_array *v)
{
	v->a[88760] = actions(3422);
	v->a[88761] = 1;
	v->a[88762] = anon_sym_DOLLAR_LBRACE;
	v->a[88763] = actions(3424);
	v->a[88764] = 1;
	v->a[88765] = anon_sym_DOLLAR_LPAREN;
	v->a[88766] = actions(3426);
	v->a[88767] = 1;
	v->a[88768] = anon_sym_BQUOTE;
	v->a[88769] = actions(3718);
	v->a[88770] = 1;
	v->a[88771] = anon_sym_DOLLAR;
	v->a[88772] = actions(3720);
	v->a[88773] = 1;
	v->a[88774] = anon_sym_DQUOTE;
	v->a[88775] = state(1842);
	v->a[88776] = 1;
	v->a[88777] = aux_sym_string_repeat1;
	v->a[88778] = state(1959);
	v->a[88779] = 4;
	small_parse_table_4439(v);
}

void	small_parse_table_4439(t_small_parse_table_array *v)
{
	v->a[88780] = sym_arithmetic_expansion;
	v->a[88781] = sym_simple_expansion;
	v->a[88782] = sym_expansion;
	v->a[88783] = sym_command_substitution;
	v->a[88784] = 10;
	v->a[88785] = actions(3);
	v->a[88786] = 1;
	v->a[88787] = sym_comment;
	v->a[88788] = actions(3722);
	v->a[88789] = 1;
	v->a[88790] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88791] = actions(3725);
	v->a[88792] = 1;
	v->a[88793] = anon_sym_DOLLAR;
	v->a[88794] = actions(3728);
	v->a[88795] = 1;
	v->a[88796] = anon_sym_DQUOTE;
	v->a[88797] = actions(3730);
	v->a[88798] = 1;
	v->a[88799] = sym_string_content;
	small_parse_table_4440(v);
}

/* EOF small_parse_table_887.c */
