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
	v->a[78701] = sym_string;
	v->a[78702] = sym_simple_expansion;
	v->a[78703] = sym_expansion;
	v->a[78704] = sym_command_substitution;
	v->a[78705] = 3;
	v->a[78706] = actions(870);
	v->a[78707] = 1;
	v->a[78708] = sym_comment;
	v->a[78709] = actions(1025);
	v->a[78710] = 6;
	v->a[78711] = anon_sym_PIPE;
	v->a[78712] = anon_sym_LT;
	v->a[78713] = anon_sym_GT;
	v->a[78714] = anon_sym_LT_AMP;
	v->a[78715] = anon_sym_GT_AMP;
	v->a[78716] = anon_sym_LT_LT;
	v->a[78717] = actions(1027);
	v->a[78718] = 10;
	v->a[78719] = sym_file_descriptor;
	small_parse_table_3936(v);
}

void	small_parse_table_3936(t_small_parse_table_array *v)
{
	v->a[78720] = sym__concat;
	v->a[78721] = anon_sym_AMP_AMP;
	v->a[78722] = anon_sym_PIPE_PIPE;
	v->a[78723] = anon_sym_GT_GT;
	v->a[78724] = anon_sym_GT_PIPE;
	v->a[78725] = anon_sym_LT_AMP_DASH;
	v->a[78726] = anon_sym_GT_AMP_DASH;
	v->a[78727] = anon_sym_LT_LT_DASH;
	v->a[78728] = aux_sym_concatenation_token1;
	v->a[78729] = 10;
	v->a[78730] = actions(3);
	v->a[78731] = 1;
	v->a[78732] = sym_comment;
	v->a[78733] = actions(2685);
	v->a[78734] = 1;
	v->a[78735] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78736] = actions(2687);
	v->a[78737] = 1;
	v->a[78738] = anon_sym_DOLLAR;
	v->a[78739] = actions(2689);
	small_parse_table_3937(v);
}

void	small_parse_table_3937(t_small_parse_table_array *v)
{
	v->a[78740] = 1;
	v->a[78741] = anon_sym_DQUOTE;
	v->a[78742] = actions(2691);
	v->a[78743] = 1;
	v->a[78744] = anon_sym_DOLLAR_LBRACE;
	v->a[78745] = actions(2693);
	v->a[78746] = 1;
	v->a[78747] = anon_sym_DOLLAR_LPAREN;
	v->a[78748] = actions(2695);
	v->a[78749] = 1;
	v->a[78750] = anon_sym_BQUOTE;
	v->a[78751] = state(201);
	v->a[78752] = 2;
	v->a[78753] = sym_concatenation;
	v->a[78754] = aux_sym_for_statement_repeat1;
	v->a[78755] = actions(3059);
	v->a[78756] = 3;
	v->a[78757] = sym_raw_string;
	v->a[78758] = sym_number;
	v->a[78759] = sym_word;
	small_parse_table_3938(v);
}

void	small_parse_table_3938(t_small_parse_table_array *v)
{
	v->a[78760] = state(456);
	v->a[78761] = 5;
	v->a[78762] = sym_arithmetic_expansion;
	v->a[78763] = sym_string;
	v->a[78764] = sym_simple_expansion;
	v->a[78765] = sym_expansion;
	v->a[78766] = sym_command_substitution;
	v->a[78767] = 9;
	v->a[78768] = actions(754);
	v->a[78769] = 1;
	v->a[78770] = anon_sym_LT_LT;
	v->a[78771] = actions(870);
	v->a[78772] = 1;
	v->a[78773] = sym_comment;
	v->a[78774] = actions(2546);
	v->a[78775] = 1;
	v->a[78776] = sym_file_descriptor;
	v->a[78777] = actions(3057);
	v->a[78778] = 1;
	v->a[78779] = anon_sym_LT_LT_DASH;
	small_parse_table_3939(v);
}

void	small_parse_table_3939(t_small_parse_table_array *v)
{
	v->a[78780] = actions(3061);
	v->a[78781] = 2;
	v->a[78782] = anon_sym_AMP_AMP;
	v->a[78783] = anon_sym_PIPE_PIPE;
	v->a[78784] = actions(3063);
	v->a[78785] = 2;
	v->a[78786] = anon_sym_GT_GT;
	v->a[78787] = anon_sym_GT_PIPE;
	v->a[78788] = actions(3065);
	v->a[78789] = 2;
	v->a[78790] = anon_sym_LT_AMP_DASH;
	v->a[78791] = anon_sym_GT_AMP_DASH;
	v->a[78792] = state(1408);
	v->a[78793] = 3;
	v->a[78794] = sym_file_redirect;
	v->a[78795] = sym_heredoc_redirect;
	v->a[78796] = aux_sym_redirected_statement_repeat1;
	v->a[78797] = actions(2540);
	v->a[78798] = 4;
	v->a[78799] = anon_sym_LT;
	small_parse_table_3940(v);
}

/* EOF small_parse_table_787.c */
