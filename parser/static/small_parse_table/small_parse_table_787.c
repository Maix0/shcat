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
	v->a[78700] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78701] = actions(2805);
	v->a[78702] = 1;
	v->a[78703] = anon_sym_DOLLAR;
	v->a[78704] = actions(2807);
	v->a[78705] = 1;
	v->a[78706] = anon_sym_DQUOTE;
	v->a[78707] = actions(2809);
	v->a[78708] = 1;
	v->a[78709] = aux_sym_number_token1;
	v->a[78710] = actions(2811);
	v->a[78711] = 1;
	v->a[78712] = aux_sym_number_token2;
	v->a[78713] = actions(2813);
	v->a[78714] = 1;
	v->a[78715] = anon_sym_DOLLAR_LBRACE;
	v->a[78716] = actions(2815);
	v->a[78717] = 1;
	v->a[78718] = anon_sym_DOLLAR_LPAREN;
	v->a[78719] = actions(2817);
	small_parse_table_3936(v);
}

void	small_parse_table_3936(t_small_parse_table_array *v)
{
	v->a[78720] = 1;
	v->a[78721] = anon_sym_BQUOTE;
	v->a[78722] = actions(3224);
	v->a[78723] = 1;
	v->a[78724] = sym__bare_dollar;
	v->a[78725] = actions(3222);
	v->a[78726] = 3;
	v->a[78727] = sym_raw_string;
	v->a[78728] = sym__comment_word;
	v->a[78729] = sym_word;
	v->a[78730] = state(472);
	v->a[78731] = 6;
	v->a[78732] = sym_arithmetic_expansion;
	v->a[78733] = sym_string;
	v->a[78734] = sym_number;
	v->a[78735] = sym_simple_expansion;
	v->a[78736] = sym_expansion;
	v->a[78737] = sym_command_substitution;
	v->a[78738] = 12;
	v->a[78739] = actions(3);
	small_parse_table_3937(v);
}

void	small_parse_table_3937(t_small_parse_table_array *v)
{
	v->a[78740] = 1;
	v->a[78741] = sym_comment;
	v->a[78742] = actions(2803);
	v->a[78743] = 1;
	v->a[78744] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78745] = actions(2807);
	v->a[78746] = 1;
	v->a[78747] = anon_sym_DQUOTE;
	v->a[78748] = actions(2809);
	v->a[78749] = 1;
	v->a[78750] = aux_sym_number_token1;
	v->a[78751] = actions(2811);
	v->a[78752] = 1;
	v->a[78753] = aux_sym_number_token2;
	v->a[78754] = actions(2813);
	v->a[78755] = 1;
	v->a[78756] = anon_sym_DOLLAR_LBRACE;
	v->a[78757] = actions(2815);
	v->a[78758] = 1;
	v->a[78759] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3938(v);
}

void	small_parse_table_3938(t_small_parse_table_array *v)
{
	v->a[78760] = actions(2817);
	v->a[78761] = 1;
	v->a[78762] = anon_sym_BQUOTE;
	v->a[78763] = actions(3224);
	v->a[78764] = 1;
	v->a[78765] = sym__bare_dollar;
	v->a[78766] = actions(3226);
	v->a[78767] = 1;
	v->a[78768] = anon_sym_DOLLAR;
	v->a[78769] = actions(3222);
	v->a[78770] = 3;
	v->a[78771] = sym_raw_string;
	v->a[78772] = sym__comment_word;
	v->a[78773] = sym_word;
	v->a[78774] = state(472);
	v->a[78775] = 6;
	v->a[78776] = sym_arithmetic_expansion;
	v->a[78777] = sym_string;
	v->a[78778] = sym_number;
	v->a[78779] = sym_simple_expansion;
	small_parse_table_3939(v);
}

void	small_parse_table_3939(t_small_parse_table_array *v)
{
	v->a[78780] = sym_expansion;
	v->a[78781] = sym_command_substitution;
	v->a[78782] = 12;
	v->a[78783] = actions(3);
	v->a[78784] = 1;
	v->a[78785] = sym_comment;
	v->a[78786] = actions(1618);
	v->a[78787] = 1;
	v->a[78788] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78789] = actions(1620);
	v->a[78790] = 1;
	v->a[78791] = anon_sym_DOLLAR;
	v->a[78792] = actions(1622);
	v->a[78793] = 1;
	v->a[78794] = anon_sym_DQUOTE;
	v->a[78795] = actions(1624);
	v->a[78796] = 1;
	v->a[78797] = aux_sym_number_token1;
	v->a[78798] = actions(1626);
	v->a[78799] = 1;
	small_parse_table_3940(v);
}

/* EOF small_parse_table_787.c */
