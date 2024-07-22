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
	v->a[78700] = sym_heredoc_content;
	v->a[78701] = actions(3459);
	v->a[78702] = 1;
	v->a[78703] = sym_heredoc_end;
	v->a[78704] = state(1724);
	v->a[78705] = 4;
	v->a[78706] = sym_simple_expansion;
	v->a[78707] = sym_expansion;
	v->a[78708] = sym_command_substitution;
	v->a[78709] = aux_sym_heredoc_body_repeat1;
	v->a[78710] = 5;
	v->a[78711] = actions(501);
	v->a[78712] = 1;
	v->a[78713] = sym_comment;
	v->a[78714] = actions(3465);
	v->a[78715] = 1;
	v->a[78716] = anon_sym_LT_LT;
	v->a[78717] = actions(3467);
	v->a[78718] = 1;
	v->a[78719] = anon_sym_LT_LT_DASH;
	small_parse_table_3936(v);
}

void	small_parse_table_3936(t_small_parse_table_array *v)
{
	v->a[78720] = actions(3461);
	v->a[78721] = 2;
	v->a[78722] = anon_sym_LT;
	v->a[78723] = anon_sym_GT;
	v->a[78724] = actions(3463);
	v->a[78725] = 5;
	v->a[78726] = anon_sym_GT_GT;
	v->a[78727] = anon_sym_LT_AMP;
	v->a[78728] = anon_sym_GT_AMP;
	v->a[78729] = anon_sym_GT_PIPE;
	v->a[78730] = anon_sym_LT_GT;
	v->a[78731] = 7;
	v->a[78732] = actions(501);
	v->a[78733] = 1;
	v->a[78734] = sym_comment;
	v->a[78735] = actions(3471);
	v->a[78736] = 1;
	v->a[78737] = anon_sym_DQUOTE;
	v->a[78738] = actions(3473);
	v->a[78739] = 1;
	small_parse_table_3937(v);
}

void	small_parse_table_3937(t_small_parse_table_array *v)
{
	v->a[78740] = anon_sym_DOLLAR_LBRACE;
	v->a[78741] = actions(3475);
	v->a[78742] = 1;
	v->a[78743] = anon_sym_DOLLAR_LPAREN;
	v->a[78744] = actions(3477);
	v->a[78745] = 1;
	v->a[78746] = anon_sym_BQUOTE;
	v->a[78747] = actions(3469);
	v->a[78748] = 2;
	v->a[78749] = anon_sym_PIPE;
	v->a[78750] = anon_sym_RPAREN;
	v->a[78751] = state(1873);
	v->a[78752] = 3;
	v->a[78753] = sym_string;
	v->a[78754] = sym_expansion;
	v->a[78755] = sym_command_substitution;
	v->a[78756] = 5;
	v->a[78757] = actions(501);
	v->a[78758] = 1;
	v->a[78759] = sym_comment;
	small_parse_table_3938(v);
}

void	small_parse_table_3938(t_small_parse_table_array *v)
{
	v->a[78760] = actions(3483);
	v->a[78761] = 1;
	v->a[78762] = anon_sym_LT_LT;
	v->a[78763] = actions(3485);
	v->a[78764] = 1;
	v->a[78765] = anon_sym_LT_LT_DASH;
	v->a[78766] = actions(3479);
	v->a[78767] = 2;
	v->a[78768] = anon_sym_LT;
	v->a[78769] = anon_sym_GT;
	v->a[78770] = actions(3481);
	v->a[78771] = 5;
	v->a[78772] = anon_sym_GT_GT;
	v->a[78773] = anon_sym_LT_AMP;
	v->a[78774] = anon_sym_GT_AMP;
	v->a[78775] = anon_sym_GT_PIPE;
	v->a[78776] = anon_sym_LT_GT;
	v->a[78777] = 5;
	v->a[78778] = actions(501);
	v->a[78779] = 1;
	small_parse_table_3939(v);
}

void	small_parse_table_3939(t_small_parse_table_array *v)
{
	v->a[78780] = sym_comment;
	v->a[78781] = actions(3465);
	v->a[78782] = 1;
	v->a[78783] = anon_sym_LT_LT;
	v->a[78784] = actions(3467);
	v->a[78785] = 1;
	v->a[78786] = anon_sym_LT_LT_DASH;
	v->a[78787] = actions(3487);
	v->a[78788] = 2;
	v->a[78789] = anon_sym_LT;
	v->a[78790] = anon_sym_GT;
	v->a[78791] = actions(3489);
	v->a[78792] = 5;
	v->a[78793] = anon_sym_GT_GT;
	v->a[78794] = anon_sym_LT_AMP;
	v->a[78795] = anon_sym_GT_AMP;
	v->a[78796] = anon_sym_GT_PIPE;
	v->a[78797] = anon_sym_LT_GT;
	v->a[78798] = 5;
	v->a[78799] = actions(501);
	small_parse_table_3940(v);
}

/* EOF small_parse_table_787.c */
