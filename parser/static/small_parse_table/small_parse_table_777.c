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
	v->a[77700] = aux_sym_heredoc_redirect_token1;
	v->a[77701] = anon_sym_AMP;
	v->a[77702] = anon_sym_SEMI;
	v->a[77703] = actions(2976);
	v->a[77704] = 9;
	v->a[77705] = anon_sym_BANG;
	v->a[77706] = anon_sym_DASH;
	v->a[77707] = anon_sym_STAR;
	v->a[77708] = anon_sym_QMARK;
	v->a[77709] = anon_sym_DOLLAR;
	v->a[77710] = anon_sym_POUND;
	v->a[77711] = anon_sym_AT;
	v->a[77712] = anon_sym_0;
	v->a[77713] = anon_sym__;
	v->a[77714] = 10;
	v->a[77715] = actions(3);
	v->a[77716] = 1;
	v->a[77717] = sym_comment;
	v->a[77718] = actions(894);
	v->a[77719] = 1;
	small_parse_table_3886(v);
}

void	small_parse_table_3886(t_small_parse_table_array *v)
{
	v->a[77720] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77721] = actions(898);
	v->a[77722] = 1;
	v->a[77723] = anon_sym_DQUOTE;
	v->a[77724] = actions(900);
	v->a[77725] = 1;
	v->a[77726] = anon_sym_DOLLAR_LBRACE;
	v->a[77727] = actions(902);
	v->a[77728] = 1;
	v->a[77729] = anon_sym_DOLLAR_LPAREN;
	v->a[77730] = actions(904);
	v->a[77731] = 1;
	v->a[77732] = anon_sym_BQUOTE;
	v->a[77733] = actions(2950);
	v->a[77734] = 1;
	v->a[77735] = sym__bare_dollar;
	v->a[77736] = actions(2982);
	v->a[77737] = 1;
	v->a[77738] = anon_sym_DOLLAR;
	v->a[77739] = actions(2948);
	small_parse_table_3887(v);
}

void	small_parse_table_3887(t_small_parse_table_array *v)
{
	v->a[77740] = 5;
	v->a[77741] = aux_sym_concatenation_token1;
	v->a[77742] = sym_raw_string;
	v->a[77743] = sym_number;
	v->a[77744] = sym__comment_word;
	v->a[77745] = sym_word;
	v->a[77746] = state(1633);
	v->a[77747] = 5;
	v->a[77748] = sym_arithmetic_expansion;
	v->a[77749] = sym_string;
	v->a[77750] = sym_simple_expansion;
	v->a[77751] = sym_expansion;
	v->a[77752] = sym_command_substitution;
	v->a[77753] = 10;
	v->a[77754] = actions(870);
	v->a[77755] = 1;
	v->a[77756] = sym_comment;
	v->a[77757] = actions(2114);
	v->a[77758] = 1;
	v->a[77759] = anon_sym_PIPE;
	small_parse_table_3888(v);
}

void	small_parse_table_3888(t_small_parse_table_array *v)
{
	v->a[77760] = actions(2990);
	v->a[77761] = 1;
	v->a[77762] = anon_sym_LT_LT;
	v->a[77763] = actions(2992);
	v->a[77764] = 1;
	v->a[77765] = anon_sym_LT_LT_DASH;
	v->a[77766] = actions(2994);
	v->a[77767] = 1;
	v->a[77768] = sym_file_descriptor;
	v->a[77769] = actions(2116);
	v->a[77770] = 2;
	v->a[77771] = anon_sym_AMP_AMP;
	v->a[77772] = anon_sym_PIPE_PIPE;
	v->a[77773] = actions(2986);
	v->a[77774] = 2;
	v->a[77775] = anon_sym_GT_GT;
	v->a[77776] = anon_sym_GT_PIPE;
	v->a[77777] = actions(2988);
	v->a[77778] = 2;
	v->a[77779] = anon_sym_LT_AMP_DASH;
	small_parse_table_3889(v);
}

void	small_parse_table_3889(t_small_parse_table_array *v)
{
	v->a[77780] = anon_sym_GT_AMP_DASH;
	v->a[77781] = state(1535);
	v->a[77782] = 3;
	v->a[77783] = sym_file_redirect;
	v->a[77784] = sym_heredoc_redirect;
	v->a[77785] = aux_sym_redirected_statement_repeat1;
	v->a[77786] = actions(2984);
	v->a[77787] = 4;
	v->a[77788] = anon_sym_LT;
	v->a[77789] = anon_sym_GT;
	v->a[77790] = anon_sym_LT_AMP;
	v->a[77791] = anon_sym_GT_AMP;
	v->a[77792] = 10;
	v->a[77793] = actions(3);
	v->a[77794] = 1;
	v->a[77795] = sym_comment;
	v->a[77796] = actions(2643);
	v->a[77797] = 1;
	v->a[77798] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77799] = actions(2645);
	small_parse_table_3890(v);
}

/* EOF small_parse_table_777.c */
