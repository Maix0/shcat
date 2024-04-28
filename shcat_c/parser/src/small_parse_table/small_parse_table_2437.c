/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2437.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12185(t_small_parse_table_array *v)
{
	v->a[243700] = anon_sym_LT_LT_DASH;
	v->a[243701] = aux_sym_concatenation_token1;
	v->a[243702] = anon_sym_BQUOTE;
	v->a[243703] = 13;
	v->a[243704] = actions(3);
	v->a[243705] = 1;
	v->a[243706] = sym_comment;
	v->a[243707] = actions(4257);
	v->a[243708] = 1;
	v->a[243709] = anon_sym_BQUOTE;
	v->a[243710] = actions(5379);
	v->a[243711] = 1;
	v->a[243712] = aux_sym_heredoc_redirect_token1;
	v->a[243713] = actions(11410);
	v->a[243714] = 1;
	v->a[243715] = anon_sym_LT_LT_LT;
	v->a[243716] = actions(11489);
	v->a[243717] = 1;
	v->a[243718] = sym_file_descriptor;
	v->a[243719] = state(4912);
	small_parse_table_12186(v);
}

void	small_parse_table_12186(t_small_parse_table_array *v)
{
	v->a[243720] = 1;
	v->a[243721] = sym_herestring_redirect;
	v->a[243722] = actions(4253);
	v->a[243723] = 2;
	v->a[243724] = anon_sym_PIPE;
	v->a[243725] = anon_sym_PIPE_AMP;
	v->a[243726] = actions(4692);
	v->a[243727] = 2;
	v->a[243728] = anon_sym_LT_LT;
	v->a[243729] = anon_sym_LT_LT_DASH;
	v->a[243730] = actions(5355);
	v->a[243731] = 2;
	v->a[243732] = anon_sym_PIPE_PIPE;
	v->a[243733] = anon_sym_AMP_AMP;
	v->a[243734] = actions(11487);
	v->a[243735] = 2;
	v->a[243736] = anon_sym_LT_AMP_DASH;
	v->a[243737] = anon_sym_GT_AMP_DASH;
	v->a[243738] = actions(5377);
	v->a[243739] = 3;
	small_parse_table_12187(v);
}

void	small_parse_table_12187(t_small_parse_table_array *v)
{
	v->a[243740] = anon_sym_SEMI;
	v->a[243741] = anon_sym_AMP;
	v->a[243742] = anon_sym_SEMI_SEMI;
	v->a[243743] = state(4697);
	v->a[243744] = 3;
	v->a[243745] = sym_file_redirect;
	v->a[243746] = sym_heredoc_redirect;
	v->a[243747] = aux_sym_redirected_statement_repeat1;
	v->a[243748] = actions(11485);
	v->a[243749] = 8;
	v->a[243750] = anon_sym_LT;
	v->a[243751] = anon_sym_GT;
	v->a[243752] = anon_sym_GT_GT;
	v->a[243753] = anon_sym_AMP_GT;
	v->a[243754] = anon_sym_AMP_GT_GT;
	v->a[243755] = anon_sym_LT_AMP;
	v->a[243756] = anon_sym_GT_AMP;
	v->a[243757] = anon_sym_GT_PIPE;
	v->a[243758] = 6;
	v->a[243759] = actions(3);
	small_parse_table_12188(v);
}

void	small_parse_table_12188(t_small_parse_table_array *v)
{
	v->a[243760] = 1;
	v->a[243761] = sym_comment;
	v->a[243762] = actions(11491);
	v->a[243763] = 1;
	v->a[243764] = aux_sym_concatenation_token1;
	v->a[243765] = actions(11493);
	v->a[243766] = 1;
	v->a[243767] = sym__concat;
	v->a[243768] = state(4471);
	v->a[243769] = 1;
	v->a[243770] = aux_sym_concatenation_repeat1;
	v->a[243771] = actions(1263);
	v->a[243772] = 2;
	v->a[243773] = sym_file_descriptor;
	v->a[243774] = aux_sym_heredoc_redirect_token1;
	v->a[243775] = actions(1261);
	v->a[243776] = 22;
	v->a[243777] = anon_sym_SEMI;
	v->a[243778] = anon_sym_PIPE_PIPE;
	v->a[243779] = anon_sym_AMP_AMP;
	small_parse_table_12189(v);
}

void	small_parse_table_12189(t_small_parse_table_array *v)
{
	v->a[243780] = anon_sym_PIPE;
	v->a[243781] = anon_sym_AMP;
	v->a[243782] = anon_sym_LT;
	v->a[243783] = anon_sym_GT;
	v->a[243784] = anon_sym_LT_LT;
	v->a[243785] = anon_sym_GT_GT;
	v->a[243786] = anon_sym_SEMI_SEMI;
	v->a[243787] = anon_sym_SEMI_AMP;
	v->a[243788] = anon_sym_SEMI_SEMI_AMP;
	v->a[243789] = anon_sym_PIPE_AMP;
	v->a[243790] = anon_sym_AMP_GT;
	v->a[243791] = anon_sym_AMP_GT_GT;
	v->a[243792] = anon_sym_LT_AMP;
	v->a[243793] = anon_sym_GT_AMP;
	v->a[243794] = anon_sym_GT_PIPE;
	v->a[243795] = anon_sym_LT_AMP_DASH;
	v->a[243796] = anon_sym_GT_AMP_DASH;
	v->a[243797] = anon_sym_LT_LT_DASH;
	v->a[243798] = sym__special_character;
	v->a[243799] = 3;
	small_parse_table_12190(v);
}

/* EOF small_parse_table_2437.c */
