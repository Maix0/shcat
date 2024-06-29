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
	v->a[43700] = anon_sym_BQUOTE;
	v->a[43701] = sym_word;
	v->a[43702] = anon_sym_SEMI;
	v->a[43703] = 3;
	v->a[43704] = actions(3);
	v->a[43705] = 1;
	v->a[43706] = sym_comment;
	v->a[43707] = actions(988);
	v->a[43708] = 2;
	v->a[43709] = sym_file_descriptor;
	v->a[43710] = sym__concat;
	v->a[43711] = actions(983);
	v->a[43712] = 30;
	v->a[43713] = anon_sym_PIPE;
	v->a[43714] = anon_sym_RPAREN;
	v->a[43715] = anon_sym_SEMI_SEMI;
	v->a[43716] = anon_sym_AMP_AMP;
	v->a[43717] = anon_sym_PIPE_PIPE;
	v->a[43718] = anon_sym_LT;
	v->a[43719] = anon_sym_GT;
	small_parse_table_2186(v);
}

void	small_parse_table_2186(t_small_parse_table_array *v)
{
	v->a[43720] = anon_sym_GT_GT;
	v->a[43721] = anon_sym_AMP_GT;
	v->a[43722] = anon_sym_AMP_GT_GT;
	v->a[43723] = anon_sym_LT_AMP;
	v->a[43724] = anon_sym_GT_AMP;
	v->a[43725] = anon_sym_GT_PIPE;
	v->a[43726] = anon_sym_LT_AMP_DASH;
	v->a[43727] = anon_sym_GT_AMP_DASH;
	v->a[43728] = anon_sym_LT_LT;
	v->a[43729] = anon_sym_LT_LT_DASH;
	v->a[43730] = aux_sym_heredoc_redirect_token1;
	v->a[43731] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43732] = anon_sym_AMP;
	v->a[43733] = aux_sym_concatenation_token1;
	v->a[43734] = anon_sym_DOLLAR;
	v->a[43735] = anon_sym_DQUOTE;
	v->a[43736] = sym_raw_string;
	v->a[43737] = sym_number;
	v->a[43738] = anon_sym_DOLLAR_LBRACE;
	v->a[43739] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2187(v);
}

void	small_parse_table_2187(t_small_parse_table_array *v)
{
	v->a[43740] = anon_sym_BQUOTE;
	v->a[43741] = sym_word;
	v->a[43742] = anon_sym_SEMI;
	v->a[43743] = 8;
	v->a[43744] = actions(3);
	v->a[43745] = 1;
	v->a[43746] = sym_comment;
	v->a[43747] = actions(766);
	v->a[43748] = 1;
	v->a[43749] = anon_sym_PIPE;
	v->a[43750] = actions(774);
	v->a[43751] = 1;
	v->a[43752] = sym_file_descriptor;
	v->a[43753] = actions(1474);
	v->a[43754] = 1;
	v->a[43755] = sym_variable_name;
	v->a[43756] = state(1404);
	v->a[43757] = 2;
	v->a[43758] = sym_variable_assignment;
	v->a[43759] = aux_sym__variable_assignments_repeat1;
	small_parse_table_2188(v);
}

void	small_parse_table_2188(t_small_parse_table_array *v)
{
	v->a[43760] = state(1397);
	v->a[43761] = 3;
	v->a[43762] = sym_file_redirect;
	v->a[43763] = sym_heredoc_redirect;
	v->a[43764] = aux_sym_redirected_statement_repeat1;
	v->a[43765] = actions(900);
	v->a[43766] = 5;
	v->a[43767] = anon_sym_AMP_AMP;
	v->a[43768] = anon_sym_PIPE_PIPE;
	v->a[43769] = anon_sym_LT_LT;
	v->a[43770] = anon_sym_LT_LT_DASH;
	v->a[43771] = aux_sym_heredoc_redirect_token1;
	v->a[43772] = actions(762);
	v->a[43773] = 19;
	v->a[43774] = anon_sym_LT;
	v->a[43775] = anon_sym_GT;
	v->a[43776] = anon_sym_GT_GT;
	v->a[43777] = anon_sym_AMP_GT;
	v->a[43778] = anon_sym_AMP_GT_GT;
	v->a[43779] = anon_sym_LT_AMP;
	small_parse_table_2189(v);
}

void	small_parse_table_2189(t_small_parse_table_array *v)
{
	v->a[43780] = anon_sym_GT_AMP;
	v->a[43781] = anon_sym_GT_PIPE;
	v->a[43782] = anon_sym_LT_AMP_DASH;
	v->a[43783] = anon_sym_GT_AMP_DASH;
	v->a[43784] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43785] = anon_sym_DOLLAR;
	v->a[43786] = anon_sym_DQUOTE;
	v->a[43787] = sym_raw_string;
	v->a[43788] = sym_number;
	v->a[43789] = anon_sym_DOLLAR_LBRACE;
	v->a[43790] = anon_sym_DOLLAR_LPAREN;
	v->a[43791] = anon_sym_BQUOTE;
	v->a[43792] = sym_word;
	v->a[43793] = 3;
	v->a[43794] = actions(3);
	v->a[43795] = 1;
	v->a[43796] = sym_comment;
	v->a[43797] = actions(1088);
	v->a[43798] = 3;
	v->a[43799] = sym_file_descriptor;
	small_parse_table_2190(v);
}

/* EOF small_parse_table_437.c */
