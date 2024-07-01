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
	v->a[78700] = sym_simple_expansion;
	v->a[78701] = sym_expansion;
	v->a[78702] = sym_command_substitution;
	v->a[78703] = 4;
	v->a[78704] = actions(3);
	v->a[78705] = 1;
	v->a[78706] = sym_comment;
	v->a[78707] = actions(3325);
	v->a[78708] = 1;
	v->a[78709] = anon_sym_esac;
	v->a[78710] = actions(3327);
	v->a[78711] = 1;
	v->a[78712] = sym_extglob_pattern;
	v->a[78713] = actions(3323);
	v->a[78714] = 10;
	v->a[78715] = anon_sym_LPAREN;
	v->a[78716] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78717] = anon_sym_DOLLAR;
	v->a[78718] = anon_sym_DQUOTE;
	v->a[78719] = sym_raw_string;
	small_parse_table_3936(v);
}

void	small_parse_table_3936(t_small_parse_table_array *v)
{
	v->a[78720] = sym_number;
	v->a[78721] = anon_sym_DOLLAR_LBRACE;
	v->a[78722] = anon_sym_DOLLAR_LPAREN;
	v->a[78723] = anon_sym_BQUOTE;
	v->a[78724] = sym_word;
	v->a[78725] = 4;
	v->a[78726] = actions(3);
	v->a[78727] = 1;
	v->a[78728] = sym_comment;
	v->a[78729] = actions(887);
	v->a[78730] = 1;
	v->a[78731] = sym_variable_name;
	v->a[78732] = actions(885);
	v->a[78733] = 2;
	v->a[78734] = aux_sym__simple_variable_name_token1;
	v->a[78735] = aux_sym__multiline_variable_name_token1;
	v->a[78736] = actions(883);
	v->a[78737] = 9;
	v->a[78738] = anon_sym_BANG;
	v->a[78739] = anon_sym_DASH;
	small_parse_table_3937(v);
}

void	small_parse_table_3937(t_small_parse_table_array *v)
{
	v->a[78740] = anon_sym_STAR;
	v->a[78741] = anon_sym_QMARK;
	v->a[78742] = anon_sym_DOLLAR;
	v->a[78743] = anon_sym_POUND;
	v->a[78744] = anon_sym_AT;
	v->a[78745] = anon_sym_0;
	v->a[78746] = anon_sym__;
	v->a[78747] = 10;
	v->a[78748] = actions(3);
	v->a[78749] = 1;
	v->a[78750] = sym_comment;
	v->a[78751] = actions(3071);
	v->a[78752] = 1;
	v->a[78753] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78754] = actions(3077);
	v->a[78755] = 1;
	v->a[78756] = sym_string_content;
	v->a[78757] = actions(3079);
	v->a[78758] = 1;
	v->a[78759] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3938(v);
}

void	small_parse_table_3938(t_small_parse_table_array *v)
{
	v->a[78760] = actions(3081);
	v->a[78761] = 1;
	v->a[78762] = anon_sym_DOLLAR_LPAREN;
	v->a[78763] = actions(3083);
	v->a[78764] = 1;
	v->a[78765] = anon_sym_BQUOTE;
	v->a[78766] = actions(3371);
	v->a[78767] = 1;
	v->a[78768] = anon_sym_DOLLAR;
	v->a[78769] = actions(3373);
	v->a[78770] = 1;
	v->a[78771] = anon_sym_DQUOTE;
	v->a[78772] = state(1681);
	v->a[78773] = 1;
	v->a[78774] = aux_sym_string_repeat1;
	v->a[78775] = state(1739);
	v->a[78776] = 4;
	v->a[78777] = sym_arithmetic_expansion;
	v->a[78778] = sym_simple_expansion;
	v->a[78779] = sym_expansion;
	small_parse_table_3939(v);
}

void	small_parse_table_3939(t_small_parse_table_array *v)
{
	v->a[78780] = sym_command_substitution;
	v->a[78781] = 10;
	v->a[78782] = actions(3);
	v->a[78783] = 1;
	v->a[78784] = sym_comment;
	v->a[78785] = actions(3071);
	v->a[78786] = 1;
	v->a[78787] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78788] = actions(3077);
	v->a[78789] = 1;
	v->a[78790] = sym_string_content;
	v->a[78791] = actions(3079);
	v->a[78792] = 1;
	v->a[78793] = anon_sym_DOLLAR_LBRACE;
	v->a[78794] = actions(3081);
	v->a[78795] = 1;
	v->a[78796] = anon_sym_DOLLAR_LPAREN;
	v->a[78797] = actions(3083);
	v->a[78798] = 1;
	v->a[78799] = anon_sym_BQUOTE;
	small_parse_table_3940(v);
}

/* EOF small_parse_table_787.c */
