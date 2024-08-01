/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_437.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2185(t_small_parse_table_array *v)
{
	v->a[43700] = sym_file_redirect;
	v->a[43701] = sym_heredoc_redirect;
	v->a[43702] = aux_sym_redirected_statement_repeat1;
	v->a[43703] = 9;
	v->a[43704] = actions(3);
	v->a[43705] = 1;
	v->a[43706] = sym_comment;
	v->a[43707] = actions(591);
	v->a[43708] = 1;
	v->a[43709] = anon_sym_RPAREN;
	v->a[43710] = actions(597);
	v->a[43711] = 1;
	v->a[43712] = anon_sym_LT_LT;
	v->a[43713] = actions(1870);
	v->a[43714] = 1;
	v->a[43715] = aux_sym_heredoc_redirect_token1;
	v->a[43716] = state(376);
	v->a[43717] = 1;
	v->a[43718] = sym_terminator;
	v->a[43719] = actions(593);
	small_parse_table_2186(v);
}

void	small_parse_table_2186(t_small_parse_table_array *v)
{
	v->a[43720] = 2;
	v->a[43721] = anon_sym_SEMI_SEMI;
	v->a[43722] = anon_sym_SEMI;
	v->a[43723] = actions(595);
	v->a[43724] = 2;
	v->a[43725] = anon_sym_AMP_AMP;
	v->a[43726] = anon_sym_PIPE_PIPE;
	v->a[43727] = actions(1868);
	v->a[43728] = 3;
	v->a[43729] = anon_sym_LT;
	v->a[43730] = anon_sym_GT;
	v->a[43731] = anon_sym_GT_GT;
	v->a[43732] = state(916);
	v->a[43733] = 3;
	v->a[43734] = sym_file_redirect;
	v->a[43735] = sym_heredoc_redirect;
	v->a[43736] = aux_sym_redirected_statement_repeat1;
	v->a[43737] = 9;
	v->a[43738] = actions(3);
	v->a[43739] = 1;
	small_parse_table_2187(v);
}

void	small_parse_table_2187(t_small_parse_table_array *v)
{
	v->a[43740] = sym_comment;
	v->a[43741] = actions(580);
	v->a[43742] = 1;
	v->a[43743] = anon_sym_PIPE;
	v->a[43744] = actions(597);
	v->a[43745] = 1;
	v->a[43746] = anon_sym_LT_LT;
	v->a[43747] = actions(1926);
	v->a[43748] = 1;
	v->a[43749] = aux_sym_heredoc_redirect_token1;
	v->a[43750] = state(281);
	v->a[43751] = 1;
	v->a[43752] = sym_terminator;
	v->a[43753] = actions(769);
	v->a[43754] = 2;
	v->a[43755] = anon_sym_AMP_AMP;
	v->a[43756] = anon_sym_PIPE_PIPE;
	v->a[43757] = actions(823);
	v->a[43758] = 2;
	v->a[43759] = anon_sym_SEMI_SEMI;
	small_parse_table_2188(v);
}

void	small_parse_table_2188(t_small_parse_table_array *v)
{
	v->a[43760] = anon_sym_SEMI;
	v->a[43761] = actions(1924);
	v->a[43762] = 3;
	v->a[43763] = anon_sym_LT;
	v->a[43764] = anon_sym_GT;
	v->a[43765] = anon_sym_GT_GT;
	v->a[43766] = state(1040);
	v->a[43767] = 3;
	v->a[43768] = sym_file_redirect;
	v->a[43769] = sym_heredoc_redirect;
	v->a[43770] = aux_sym_redirected_statement_repeat1;
	v->a[43771] = 3;
	v->a[43772] = actions(3);
	v->a[43773] = 1;
	v->a[43774] = sym_comment;
	v->a[43775] = actions(1050);
	v->a[43776] = 3;
	v->a[43777] = sym__concat;
	v->a[43778] = sym_variable_name;
	v->a[43779] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2189(v);
}

void	small_parse_table_2189(t_small_parse_table_array *v)
{
	v->a[43780] = actions(1052);
	v->a[43781] = 11;
	v->a[43782] = anon_sym_esac;
	v->a[43783] = anon_sym_PIPE;
	v->a[43784] = anon_sym_SEMI_SEMI;
	v->a[43785] = anon_sym_AMP_AMP;
	v->a[43786] = anon_sym_PIPE_PIPE;
	v->a[43787] = anon_sym_LT;
	v->a[43788] = anon_sym_GT;
	v->a[43789] = anon_sym_GT_GT;
	v->a[43790] = anon_sym_LT_LT;
	v->a[43791] = aux_sym_concatenation_token1;
	v->a[43792] = anon_sym_SEMI;
	v->a[43793] = 3;
	v->a[43794] = actions(3);
	v->a[43795] = 1;
	v->a[43796] = sym_comment;
	v->a[43797] = actions(1060);
	v->a[43798] = 3;
	v->a[43799] = sym__concat;
	small_parse_table_2190(v);
}

/* EOF small_parse_table_437.c */
