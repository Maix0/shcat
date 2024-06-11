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
	v->a[77700] = actions(861);
	v->a[77701] = 2;
	v->a[77702] = anon_sym_LT_LT;
	v->a[77703] = anon_sym_LT_LT_DASH;
	v->a[77704] = actions(965);
	v->a[77705] = 2;
	v->a[77706] = anon_sym_AMP_AMP;
	v->a[77707] = anon_sym_PIPE_PIPE;
	v->a[77708] = actions(2598);
	v->a[77709] = 2;
	v->a[77710] = anon_sym_LT_AMP_DASH;
	v->a[77711] = anon_sym_GT_AMP_DASH;
	v->a[77712] = actions(963);
	v->a[77713] = 3;
	v->a[77714] = anon_sym_SEMI_SEMI;
	v->a[77715] = anon_sym_AMP;
	v->a[77716] = anon_sym_SEMI;
	v->a[77717] = state(1322);
	v->a[77718] = 3;
	v->a[77719] = sym_file_redirect;
	small_parse_table_3886(v);
}

void	small_parse_table_3886(t_small_parse_table_array *v)
{
	v->a[77720] = sym_heredoc_redirect;
	v->a[77721] = aux_sym_redirected_statement_repeat1;
	v->a[77722] = actions(2596);
	v->a[77723] = 8;
	v->a[77724] = anon_sym_LT;
	v->a[77725] = anon_sym_GT;
	v->a[77726] = anon_sym_GT_GT;
	v->a[77727] = anon_sym_AMP_GT;
	v->a[77728] = anon_sym_AMP_GT_GT;
	v->a[77729] = anon_sym_LT_AMP;
	v->a[77730] = anon_sym_GT_AMP;
	v->a[77731] = anon_sym_GT_PIPE;
	v->a[77732] = 5;
	v->a[77733] = actions(3);
	v->a[77734] = 1;
	v->a[77735] = sym_comment;
	v->a[77736] = actions(2882);
	v->a[77737] = 1;
	v->a[77738] = anon_sym_PIPE;
	v->a[77739] = state(1440);
	small_parse_table_3887(v);
}

void	small_parse_table_3887(t_small_parse_table_array *v)
{
	v->a[77740] = 1;
	v->a[77741] = aux_sym_pipeline_repeat1;
	v->a[77742] = actions(2316);
	v->a[77743] = 3;
	v->a[77744] = sym_file_descriptor;
	v->a[77745] = ts_builtin_sym_end;
	v->a[77746] = aux_sym_heredoc_redirect_token1;
	v->a[77747] = actions(2321);
	v->a[77748] = 17;
	v->a[77749] = anon_sym_SEMI_SEMI;
	v->a[77750] = anon_sym_AMP_AMP;
	v->a[77751] = anon_sym_PIPE_PIPE;
	v->a[77752] = anon_sym_LT;
	v->a[77753] = anon_sym_GT;
	v->a[77754] = anon_sym_GT_GT;
	v->a[77755] = anon_sym_AMP_GT;
	v->a[77756] = anon_sym_AMP_GT_GT;
	v->a[77757] = anon_sym_LT_AMP;
	v->a[77758] = anon_sym_GT_AMP;
	v->a[77759] = anon_sym_GT_PIPE;
	small_parse_table_3888(v);
}

void	small_parse_table_3888(t_small_parse_table_array *v)
{
	v->a[77760] = anon_sym_LT_AMP_DASH;
	v->a[77761] = anon_sym_GT_AMP_DASH;
	v->a[77762] = anon_sym_LT_LT;
	v->a[77763] = anon_sym_LT_LT_DASH;
	v->a[77764] = anon_sym_AMP;
	v->a[77765] = anon_sym_SEMI;
	v->a[77766] = 16;
	v->a[77767] = actions(3);
	v->a[77768] = 1;
	v->a[77769] = sym_comment;
	v->a[77770] = actions(1959);
	v->a[77771] = 1;
	v->a[77772] = anon_sym_LPAREN;
	v->a[77773] = actions(1963);
	v->a[77774] = 1;
	v->a[77775] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77776] = actions(1965);
	v->a[77777] = 1;
	v->a[77778] = anon_sym_DOLLAR;
	v->a[77779] = actions(1967);
	small_parse_table_3889(v);
}

void	small_parse_table_3889(t_small_parse_table_array *v)
{
	v->a[77780] = 1;
	v->a[77781] = anon_sym_DQUOTE;
	v->a[77782] = actions(1969);
	v->a[77783] = 1;
	v->a[77784] = anon_sym_DOLLAR_LBRACE;
	v->a[77785] = actions(1971);
	v->a[77786] = 1;
	v->a[77787] = anon_sym_DOLLAR_LPAREN;
	v->a[77788] = actions(1973);
	v->a[77789] = 1;
	v->a[77790] = anon_sym_BQUOTE;
	v->a[77791] = actions(1975);
	v->a[77792] = 1;
	v->a[77793] = sym_extglob_pattern;
	v->a[77794] = actions(2885);
	v->a[77795] = 1;
	v->a[77796] = anon_sym_esac;
	v->a[77797] = state(1467);
	v->a[77798] = 1;
	v->a[77799] = aux_sym_case_statement_repeat1;
	small_parse_table_3890(v);
}

/* EOF small_parse_table_777.c */
