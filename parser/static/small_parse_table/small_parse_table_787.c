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
	v->a[78700] = aux_sym_concatenation_token1;
	v->a[78701] = sym_raw_string;
	v->a[78702] = sym_number;
	v->a[78703] = sym__comment_word;
	v->a[78704] = sym_word;
	v->a[78705] = state(477);
	v->a[78706] = 5;
	v->a[78707] = sym_arithmetic_expansion;
	v->a[78708] = sym_string;
	v->a[78709] = sym_simple_expansion;
	v->a[78710] = sym_expansion;
	v->a[78711] = sym_command_substitution;
	v->a[78712] = 8;
	v->a[78713] = actions(3);
	v->a[78714] = 1;
	v->a[78715] = sym_comment;
	v->a[78716] = actions(871);
	v->a[78717] = 1;
	v->a[78718] = sym_file_descriptor;
	v->a[78719] = actions(2851);
	small_parse_table_3936(v);
}

void	small_parse_table_3936(t_small_parse_table_array *v)
{
	v->a[78720] = 1;
	v->a[78721] = aux_sym_heredoc_redirect_token1;
	v->a[78722] = state(2161);
	v->a[78723] = 1;
	v->a[78724] = sym__heredoc_expression;
	v->a[78725] = actions(851);
	v->a[78726] = 2;
	v->a[78727] = anon_sym_AMP_AMP;
	v->a[78728] = anon_sym_PIPE_PIPE;
	v->a[78729] = actions(855);
	v->a[78730] = 2;
	v->a[78731] = anon_sym_LT_AMP_DASH;
	v->a[78732] = anon_sym_GT_AMP_DASH;
	v->a[78733] = state(1609);
	v->a[78734] = 2;
	v->a[78735] = sym_file_redirect;
	v->a[78736] = aux_sym_redirected_statement_repeat2;
	v->a[78737] = actions(853);
	v->a[78738] = 8;
	v->a[78739] = anon_sym_LT;
	small_parse_table_3937(v);
}

void	small_parse_table_3937(t_small_parse_table_array *v)
{
	v->a[78740] = anon_sym_GT;
	v->a[78741] = anon_sym_GT_GT;
	v->a[78742] = anon_sym_AMP_GT;
	v->a[78743] = anon_sym_AMP_GT_GT;
	v->a[78744] = anon_sym_LT_AMP;
	v->a[78745] = anon_sym_GT_AMP;
	v->a[78746] = anon_sym_GT_PIPE;
	v->a[78747] = 12;
	v->a[78748] = actions(3);
	v->a[78749] = 1;
	v->a[78750] = sym_comment;
	v->a[78751] = actions(2809);
	v->a[78752] = 1;
	v->a[78753] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78754] = actions(2813);
	v->a[78755] = 1;
	v->a[78756] = anon_sym_DQUOTE;
	v->a[78757] = actions(2815);
	v->a[78758] = 1;
	v->a[78759] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3938(v);
}

void	small_parse_table_3938(t_small_parse_table_array *v)
{
	v->a[78760] = actions(2817);
	v->a[78761] = 1;
	v->a[78762] = anon_sym_DOLLAR_LPAREN;
	v->a[78763] = actions(2819);
	v->a[78764] = 1;
	v->a[78765] = anon_sym_BQUOTE;
	v->a[78766] = actions(2841);
	v->a[78767] = 1;
	v->a[78768] = anon_sym_DOLLAR;
	v->a[78769] = actions(2843);
	v->a[78770] = 1;
	v->a[78771] = sym__comment_word;
	v->a[78772] = actions(2845);
	v->a[78773] = 1;
	v->a[78774] = sym__empty_value;
	v->a[78775] = state(1101);
	v->a[78776] = 1;
	v->a[78777] = sym_concatenation;
	v->a[78778] = actions(2853);
	v->a[78779] = 3;
	small_parse_table_3939(v);
}

void	small_parse_table_3939(t_small_parse_table_array *v)
{
	v->a[78780] = sym_raw_string;
	v->a[78781] = sym_number;
	v->a[78782] = sym_word;
	v->a[78783] = state(1090);
	v->a[78784] = 5;
	v->a[78785] = sym_arithmetic_expansion;
	v->a[78786] = sym_string;
	v->a[78787] = sym_simple_expansion;
	v->a[78788] = sym_expansion;
	v->a[78789] = sym_command_substitution;
	v->a[78790] = 12;
	v->a[78791] = actions(3);
	v->a[78792] = 1;
	v->a[78793] = sym_comment;
	v->a[78794] = actions(859);
	v->a[78795] = 1;
	v->a[78796] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78797] = actions(861);
	v->a[78798] = 1;
	v->a[78799] = anon_sym_DOLLAR;
	small_parse_table_3940(v);
}

/* EOF small_parse_table_787.c */
