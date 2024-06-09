/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_777.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3885(t_small_parse_table_array *v)
{
	v->a[77700] = sym__concat;
	v->a[77701] = anon_sym_AMP_AMP;
	v->a[77702] = anon_sym_PIPE_PIPE;
	v->a[77703] = anon_sym_GT_GT;
	v->a[77704] = anon_sym_AMP_GT_GT;
	v->a[77705] = anon_sym_GT_PIPE;
	v->a[77706] = anon_sym_LT_AMP_DASH;
	v->a[77707] = anon_sym_GT_AMP_DASH;
	v->a[77708] = anon_sym_LT_LT_DASH;
	v->a[77709] = aux_sym_concatenation_token1;
	v->a[77710] = 12;
	v->a[77711] = actions(3);
	v->a[77712] = 1;
	v->a[77713] = sym_comment;
	v->a[77714] = actions(761);
	v->a[77715] = 1;
	v->a[77716] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77717] = actions(763);
	v->a[77718] = 1;
	v->a[77719] = anon_sym_DOLLAR;
	small_parse_table_3886(v);
}

void	small_parse_table_3886(t_small_parse_table_array *v)
{
	v->a[77720] = actions(765);
	v->a[77721] = 1;
	v->a[77722] = anon_sym_DQUOTE;
	v->a[77723] = actions(767);
	v->a[77724] = 1;
	v->a[77725] = aux_sym_number_token1;
	v->a[77726] = actions(769);
	v->a[77727] = 1;
	v->a[77728] = aux_sym_number_token2;
	v->a[77729] = actions(771);
	v->a[77730] = 1;
	v->a[77731] = anon_sym_DOLLAR_LBRACE;
	v->a[77732] = actions(773);
	v->a[77733] = 1;
	v->a[77734] = anon_sym_DOLLAR_LPAREN;
	v->a[77735] = actions(775);
	v->a[77736] = 1;
	v->a[77737] = anon_sym_BQUOTE;
	v->a[77738] = actions(1385);
	v->a[77739] = 2;
	small_parse_table_3887(v);
}

void	small_parse_table_3887(t_small_parse_table_array *v)
{
	v->a[77740] = sym_raw_string;
	v->a[77741] = sym_word;
	v->a[77742] = state(391);
	v->a[77743] = 2;
	v->a[77744] = sym_concatenation;
	v->a[77745] = aux_sym_for_statement_repeat1;
	v->a[77746] = state(805);
	v->a[77747] = 6;
	v->a[77748] = sym_arithmetic_expansion;
	v->a[77749] = sym_string;
	v->a[77750] = sym_number;
	v->a[77751] = sym_simple_expansion;
	v->a[77752] = sym_expansion;
	v->a[77753] = sym_command_substitution;
	v->a[77754] = 12;
	v->a[77755] = actions(3);
	v->a[77756] = 1;
	v->a[77757] = sym_comment;
	v->a[77758] = actions(63);
	v->a[77759] = 1;
	small_parse_table_3888(v);
}

void	small_parse_table_3888(t_small_parse_table_array *v)
{
	v->a[77760] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77761] = actions(65);
	v->a[77762] = 1;
	v->a[77763] = anon_sym_DOLLAR;
	v->a[77764] = actions(67);
	v->a[77765] = 1;
	v->a[77766] = anon_sym_DQUOTE;
	v->a[77767] = actions(71);
	v->a[77768] = 1;
	v->a[77769] = aux_sym_number_token1;
	v->a[77770] = actions(73);
	v->a[77771] = 1;
	v->a[77772] = aux_sym_number_token2;
	v->a[77773] = actions(75);
	v->a[77774] = 1;
	v->a[77775] = anon_sym_DOLLAR_LBRACE;
	v->a[77776] = actions(77);
	v->a[77777] = 1;
	v->a[77778] = anon_sym_DOLLAR_LPAREN;
	v->a[77779] = actions(79);
	small_parse_table_3889(v);
}

void	small_parse_table_3889(t_small_parse_table_array *v)
{
	v->a[77780] = 1;
	v->a[77781] = anon_sym_BQUOTE;
	v->a[77782] = actions(3160);
	v->a[77783] = 1;
	v->a[77784] = sym__bare_dollar;
	v->a[77785] = actions(3158);
	v->a[77786] = 3;
	v->a[77787] = sym_raw_string;
	v->a[77788] = sym__comment_word;
	v->a[77789] = sym_word;
	v->a[77790] = state(354);
	v->a[77791] = 6;
	v->a[77792] = sym_arithmetic_expansion;
	v->a[77793] = sym_string;
	v->a[77794] = sym_number;
	v->a[77795] = sym_simple_expansion;
	v->a[77796] = sym_expansion;
	v->a[77797] = sym_command_substitution;
	v->a[77798] = 12;
	v->a[77799] = actions(3);
	small_parse_table_3890(v);
}

/* EOF small_parse_table_777.c */
