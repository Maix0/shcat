/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_637.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3185(t_small_parse_table_array *v)
{
	v->a[63700] = actions(802);
	v->a[63701] = 2;
	v->a[63702] = anon_sym_AMP_AMP;
	v->a[63703] = anon_sym_PIPE_PIPE;
	v->a[63704] = actions(804);
	v->a[63705] = 2;
	v->a[63706] = anon_sym_LT_LT;
	v->a[63707] = anon_sym_LT_LT_DASH;
	v->a[63708] = actions(2041);
	v->a[63709] = 2;
	v->a[63710] = anon_sym_LT_AMP_DASH;
	v->a[63711] = anon_sym_GT_AMP_DASH;
	v->a[63712] = actions(800);
	v->a[63713] = 3;
	v->a[63714] = anon_sym_SEMI_SEMI;
	v->a[63715] = anon_sym_AMP;
	v->a[63716] = anon_sym_SEMI;
	v->a[63717] = state(1137);
	v->a[63718] = 3;
	v->a[63719] = sym_file_redirect;
	small_parse_table_3186(v);
}

void	small_parse_table_3186(t_small_parse_table_array *v)
{
	v->a[63720] = sym_heredoc_redirect;
	v->a[63721] = aux_sym_redirected_statement_repeat1;
	v->a[63722] = actions(2039);
	v->a[63723] = 8;
	v->a[63724] = anon_sym_LT;
	v->a[63725] = anon_sym_GT;
	v->a[63726] = anon_sym_GT_GT;
	v->a[63727] = anon_sym_AMP_GT;
	v->a[63728] = anon_sym_AMP_GT_GT;
	v->a[63729] = anon_sym_LT_AMP;
	v->a[63730] = anon_sym_GT_AMP;
	v->a[63731] = anon_sym_GT_PIPE;
	v->a[63732] = 12;
	v->a[63733] = actions(3);
	v->a[63734] = 1;
	v->a[63735] = sym_comment;
	v->a[63736] = actions(764);
	v->a[63737] = 1;
	v->a[63738] = anon_sym_RPAREN;
	v->a[63739] = actions(766);
	small_parse_table_3187(v);
}

void	small_parse_table_3187(t_small_parse_table_array *v)
{
	v->a[63740] = 1;
	v->a[63741] = anon_sym_PIPE;
	v->a[63742] = actions(2031);
	v->a[63743] = 1;
	v->a[63744] = aux_sym_heredoc_redirect_token1;
	v->a[63745] = actions(2043);
	v->a[63746] = 1;
	v->a[63747] = sym_file_descriptor;
	v->a[63748] = state(674);
	v->a[63749] = 1;
	v->a[63750] = sym_terminator;
	v->a[63751] = actions(802);
	v->a[63752] = 2;
	v->a[63753] = anon_sym_AMP_AMP;
	v->a[63754] = anon_sym_PIPE_PIPE;
	v->a[63755] = actions(804);
	v->a[63756] = 2;
	v->a[63757] = anon_sym_LT_LT;
	v->a[63758] = anon_sym_LT_LT_DASH;
	v->a[63759] = actions(2041);
	small_parse_table_3188(v);
}

void	small_parse_table_3188(t_small_parse_table_array *v)
{
	v->a[63760] = 2;
	v->a[63761] = anon_sym_LT_AMP_DASH;
	v->a[63762] = anon_sym_GT_AMP_DASH;
	v->a[63763] = actions(800);
	v->a[63764] = 3;
	v->a[63765] = anon_sym_SEMI_SEMI;
	v->a[63766] = anon_sym_AMP;
	v->a[63767] = anon_sym_SEMI;
	v->a[63768] = state(1137);
	v->a[63769] = 3;
	v->a[63770] = sym_file_redirect;
	v->a[63771] = sym_heredoc_redirect;
	v->a[63772] = aux_sym_redirected_statement_repeat1;
	v->a[63773] = actions(2039);
	v->a[63774] = 8;
	v->a[63775] = anon_sym_LT;
	v->a[63776] = anon_sym_GT;
	v->a[63777] = anon_sym_GT_GT;
	v->a[63778] = anon_sym_AMP_GT;
	v->a[63779] = anon_sym_AMP_GT_GT;
	small_parse_table_3189(v);
}

void	small_parse_table_3189(t_small_parse_table_array *v)
{
	v->a[63780] = anon_sym_LT_AMP;
	v->a[63781] = anon_sym_GT_AMP;
	v->a[63782] = anon_sym_GT_PIPE;
	v->a[63783] = 12;
	v->a[63784] = actions(3);
	v->a[63785] = 1;
	v->a[63786] = sym_comment;
	v->a[63787] = actions(766);
	v->a[63788] = 1;
	v->a[63789] = anon_sym_PIPE;
	v->a[63790] = actions(2003);
	v->a[63791] = 1;
	v->a[63792] = aux_sym_heredoc_redirect_token1;
	v->a[63793] = actions(2005);
	v->a[63794] = 1;
	v->a[63795] = sym_file_descriptor;
	v->a[63796] = state(755);
	v->a[63797] = 1;
	v->a[63798] = sym_terminator;
	v->a[63799] = actions(764);
	small_parse_table_3190(v);
}

/* EOF small_parse_table_637.c */
