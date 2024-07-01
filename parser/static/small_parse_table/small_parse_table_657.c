/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_657.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3285(t_small_parse_table_array *v)
{
	v->a[65700] = aux_sym_concatenation_repeat1;
	v->a[65701] = actions(1085);
	v->a[65702] = 2;
	v->a[65703] = sym_file_descriptor;
	v->a[65704] = sym_variable_name;
	v->a[65705] = actions(1081);
	v->a[65706] = 17;
	v->a[65707] = anon_sym_LT;
	v->a[65708] = anon_sym_GT;
	v->a[65709] = anon_sym_GT_GT;
	v->a[65710] = anon_sym_LT_AMP;
	v->a[65711] = anon_sym_GT_AMP;
	v->a[65712] = anon_sym_GT_PIPE;
	v->a[65713] = anon_sym_LT_AMP_DASH;
	v->a[65714] = anon_sym_GT_AMP_DASH;
	v->a[65715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65716] = anon_sym_DOLLAR;
	v->a[65717] = anon_sym_DQUOTE;
	v->a[65718] = sym_raw_string;
	v->a[65719] = sym_number;
	small_parse_table_3286(v);
}

void	small_parse_table_3286(t_small_parse_table_array *v)
{
	v->a[65720] = anon_sym_DOLLAR_LBRACE;
	v->a[65721] = anon_sym_DOLLAR_LPAREN;
	v->a[65722] = anon_sym_BQUOTE;
	v->a[65723] = sym_word;
	v->a[65724] = 5;
	v->a[65725] = actions(3);
	v->a[65726] = 1;
	v->a[65727] = sym_comment;
	v->a[65728] = actions(682);
	v->a[65729] = 1;
	v->a[65730] = anon_sym_PIPE;
	v->a[65731] = actions(984);
	v->a[65732] = 2;
	v->a[65733] = sym_file_descriptor;
	v->a[65734] = aux_sym_heredoc_redirect_token1;
	v->a[65735] = state(1165);
	v->a[65736] = 3;
	v->a[65737] = sym_file_redirect;
	v->a[65738] = sym_heredoc_redirect;
	v->a[65739] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3287(v);
}

void	small_parse_table_3287(t_small_parse_table_array *v)
{
	v->a[65740] = actions(935);
	v->a[65741] = 16;
	v->a[65742] = anon_sym_SEMI_SEMI;
	v->a[65743] = anon_sym_AMP_AMP;
	v->a[65744] = anon_sym_PIPE_PIPE;
	v->a[65745] = anon_sym_LT;
	v->a[65746] = anon_sym_GT;
	v->a[65747] = anon_sym_GT_GT;
	v->a[65748] = anon_sym_LT_AMP;
	v->a[65749] = anon_sym_GT_AMP;
	v->a[65750] = anon_sym_GT_PIPE;
	v->a[65751] = anon_sym_LT_AMP_DASH;
	v->a[65752] = anon_sym_GT_AMP_DASH;
	v->a[65753] = anon_sym_LT_LT;
	v->a[65754] = anon_sym_LT_LT_DASH;
	v->a[65755] = anon_sym_AMP;
	v->a[65756] = anon_sym_BQUOTE;
	v->a[65757] = anon_sym_SEMI;
	v->a[65758] = 4;
	v->a[65759] = actions(3);
	small_parse_table_3288(v);
}

void	small_parse_table_3288(t_small_parse_table_array *v)
{
	v->a[65760] = 1;
	v->a[65761] = sym_comment;
	v->a[65762] = actions(984);
	v->a[65763] = 2;
	v->a[65764] = sym_file_descriptor;
	v->a[65765] = aux_sym_heredoc_redirect_token1;
	v->a[65766] = state(1165);
	v->a[65767] = 3;
	v->a[65768] = sym_file_redirect;
	v->a[65769] = sym_heredoc_redirect;
	v->a[65770] = aux_sym_redirected_statement_repeat1;
	v->a[65771] = actions(935);
	v->a[65772] = 17;
	v->a[65773] = anon_sym_PIPE;
	v->a[65774] = anon_sym_SEMI_SEMI;
	v->a[65775] = anon_sym_AMP_AMP;
	v->a[65776] = anon_sym_PIPE_PIPE;
	v->a[65777] = anon_sym_LT;
	v->a[65778] = anon_sym_GT;
	v->a[65779] = anon_sym_GT_GT;
	small_parse_table_3289(v);
}

void	small_parse_table_3289(t_small_parse_table_array *v)
{
	v->a[65780] = anon_sym_LT_AMP;
	v->a[65781] = anon_sym_GT_AMP;
	v->a[65782] = anon_sym_GT_PIPE;
	v->a[65783] = anon_sym_LT_AMP_DASH;
	v->a[65784] = anon_sym_GT_AMP_DASH;
	v->a[65785] = anon_sym_LT_LT;
	v->a[65786] = anon_sym_LT_LT_DASH;
	v->a[65787] = anon_sym_AMP;
	v->a[65788] = anon_sym_BQUOTE;
	v->a[65789] = anon_sym_SEMI;
	v->a[65790] = 8;
	v->a[65791] = actions(3);
	v->a[65792] = 1;
	v->a[65793] = sym_comment;
	v->a[65794] = actions(2074);
	v->a[65795] = 1;
	v->a[65796] = aux_sym_heredoc_redirect_token1;
	v->a[65797] = actions(2184);
	v->a[65798] = 1;
	v->a[65799] = sym_file_descriptor;
	small_parse_table_3290(v);
}

/* EOF small_parse_table_657.c */
