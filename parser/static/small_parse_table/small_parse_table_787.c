/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_787.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3935(t_small_parse_table_array *v)
{
	v->a[78700] = sym_arithmetic_expansion;
	v->a[78701] = sym_simple_expansion;
	v->a[78702] = sym_expansion;
	v->a[78703] = sym_command_substitution;
	v->a[78704] = 10;
	v->a[78705] = actions(3);
	v->a[78706] = 1;
	v->a[78707] = sym_comment;
	v->a[78708] = actions(3104);
	v->a[78709] = 1;
	v->a[78710] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78711] = actions(3110);
	v->a[78712] = 1;
	v->a[78713] = sym_string_content;
	v->a[78714] = actions(3112);
	v->a[78715] = 1;
	v->a[78716] = anon_sym_DOLLAR_LBRACE;
	v->a[78717] = actions(3114);
	v->a[78718] = 1;
	v->a[78719] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3936(v);
}

void	small_parse_table_3936(t_small_parse_table_array *v)
{
	v->a[78720] = actions(3116);
	v->a[78721] = 1;
	v->a[78722] = anon_sym_BQUOTE;
	v->a[78723] = actions(3372);
	v->a[78724] = 1;
	v->a[78725] = anon_sym_DOLLAR;
	v->a[78726] = actions(3374);
	v->a[78727] = 1;
	v->a[78728] = anon_sym_DQUOTE;
	v->a[78729] = state(1691);
	v->a[78730] = 1;
	v->a[78731] = aux_sym_string_repeat1;
	v->a[78732] = state(1748);
	v->a[78733] = 4;
	v->a[78734] = sym_arithmetic_expansion;
	v->a[78735] = sym_simple_expansion;
	v->a[78736] = sym_expansion;
	v->a[78737] = sym_command_substitution;
	v->a[78738] = 4;
	v->a[78739] = actions(3);
	small_parse_table_3937(v);
}

void	small_parse_table_3937(t_small_parse_table_array *v)
{
	v->a[78740] = 1;
	v->a[78741] = sym_comment;
	v->a[78742] = actions(499);
	v->a[78743] = 1;
	v->a[78744] = sym_variable_name;
	v->a[78745] = actions(497);
	v->a[78746] = 2;
	v->a[78747] = aux_sym__simple_variable_name_token1;
	v->a[78748] = aux_sym__multiline_variable_name_token1;
	v->a[78749] = actions(495);
	v->a[78750] = 9;
	v->a[78751] = anon_sym_BANG;
	v->a[78752] = anon_sym_DASH;
	v->a[78753] = anon_sym_STAR;
	v->a[78754] = anon_sym_QMARK;
	v->a[78755] = anon_sym_DOLLAR;
	v->a[78756] = anon_sym_POUND;
	v->a[78757] = anon_sym_AT;
	v->a[78758] = anon_sym_0;
	v->a[78759] = anon_sym__;
	small_parse_table_3938(v);
}

void	small_parse_table_3938(t_small_parse_table_array *v)
{
	v->a[78760] = 10;
	v->a[78761] = actions(3);
	v->a[78762] = 1;
	v->a[78763] = sym_comment;
	v->a[78764] = actions(3104);
	v->a[78765] = 1;
	v->a[78766] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78767] = actions(3110);
	v->a[78768] = 1;
	v->a[78769] = sym_string_content;
	v->a[78770] = actions(3112);
	v->a[78771] = 1;
	v->a[78772] = anon_sym_DOLLAR_LBRACE;
	v->a[78773] = actions(3114);
	v->a[78774] = 1;
	v->a[78775] = anon_sym_DOLLAR_LPAREN;
	v->a[78776] = actions(3116);
	v->a[78777] = 1;
	v->a[78778] = anon_sym_BQUOTE;
	v->a[78779] = actions(3376);
	small_parse_table_3939(v);
}

void	small_parse_table_3939(t_small_parse_table_array *v)
{
	v->a[78780] = 1;
	v->a[78781] = anon_sym_DOLLAR;
	v->a[78782] = actions(3378);
	v->a[78783] = 1;
	v->a[78784] = anon_sym_DQUOTE;
	v->a[78785] = state(1698);
	v->a[78786] = 1;
	v->a[78787] = aux_sym_string_repeat1;
	v->a[78788] = state(1748);
	v->a[78789] = 4;
	v->a[78790] = sym_arithmetic_expansion;
	v->a[78791] = sym_simple_expansion;
	v->a[78792] = sym_expansion;
	v->a[78793] = sym_command_substitution;
	v->a[78794] = 4;
	v->a[78795] = actions(3);
	v->a[78796] = 1;
	v->a[78797] = sym_comment;
	v->a[78798] = actions(435);
	v->a[78799] = 1;
	small_parse_table_3940(v);
}

/* EOF small_parse_table_787.c */
