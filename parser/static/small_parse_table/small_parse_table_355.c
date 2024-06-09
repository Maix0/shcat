/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_355.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1775(t_small_parse_table_array *v)
{
	v->a[35500] = 2;
	v->a[35501] = sym_raw_string;
	v->a[35502] = sym_word;
	v->a[35503] = state(421);
	v->a[35504] = 2;
	v->a[35505] = sym_concatenation;
	v->a[35506] = aux_sym_for_statement_repeat1;
	v->a[35507] = state(832);
	v->a[35508] = 6;
	v->a[35509] = sym_arithmetic_expansion;
	v->a[35510] = sym_string;
	v->a[35511] = sym_number;
	v->a[35512] = sym_simple_expansion;
	v->a[35513] = sym_expansion;
	v->a[35514] = sym_command_substitution;
	v->a[35515] = actions(636);
	v->a[35516] = 15;
	v->a[35517] = anon_sym_PIPE;
	v->a[35518] = anon_sym_AMP_AMP;
	v->a[35519] = anon_sym_PIPE_PIPE;
	small_parse_table_1776(v);
}

void	small_parse_table_1776(t_small_parse_table_array *v)
{
	v->a[35520] = anon_sym_LT;
	v->a[35521] = anon_sym_GT;
	v->a[35522] = anon_sym_GT_GT;
	v->a[35523] = anon_sym_AMP_GT;
	v->a[35524] = anon_sym_AMP_GT_GT;
	v->a[35525] = anon_sym_LT_AMP;
	v->a[35526] = anon_sym_GT_AMP;
	v->a[35527] = anon_sym_GT_PIPE;
	v->a[35528] = anon_sym_LT_AMP_DASH;
	v->a[35529] = anon_sym_GT_AMP_DASH;
	v->a[35530] = anon_sym_LT_LT;
	v->a[35531] = anon_sym_LT_LT_DASH;
	v->a[35532] = 3;
	v->a[35533] = actions(1404);
	v->a[35534] = 1;
	v->a[35535] = sym_comment;
	v->a[35536] = actions(1299);
	v->a[35537] = 13;
	v->a[35538] = anon_sym_PIPE;
	v->a[35539] = anon_sym_EQ;
	small_parse_table_1777(v);
}

void	small_parse_table_1777(t_small_parse_table_array *v)
{
	v->a[35540] = anon_sym_LT;
	v->a[35541] = anon_sym_GT;
	v->a[35542] = anon_sym_GT_GT;
	v->a[35543] = anon_sym_LT_LT;
	v->a[35544] = anon_sym_CARET;
	v->a[35545] = anon_sym_AMP;
	v->a[35546] = anon_sym_PLUS;
	v->a[35547] = anon_sym_DASH;
	v->a[35548] = anon_sym_STAR;
	v->a[35549] = anon_sym_SLASH;
	v->a[35550] = anon_sym_PERCENT;
	v->a[35551] = actions(1301);
	v->a[35552] = 21;
	v->a[35553] = anon_sym_AMP_AMP;
	v->a[35554] = anon_sym_PIPE_PIPE;
	v->a[35555] = anon_sym_RPAREN_RPAREN;
	v->a[35556] = anon_sym_PLUS_EQ;
	v->a[35557] = anon_sym_DASH_EQ;
	v->a[35558] = anon_sym_STAR_EQ;
	v->a[35559] = anon_sym_SLASH_EQ;
	small_parse_table_1778(v);
}

void	small_parse_table_1778(t_small_parse_table_array *v)
{
	v->a[35560] = anon_sym_PERCENT_EQ;
	v->a[35561] = anon_sym_LT_LT_EQ;
	v->a[35562] = anon_sym_GT_GT_EQ;
	v->a[35563] = anon_sym_AMP_EQ;
	v->a[35564] = anon_sym_CARET_EQ;
	v->a[35565] = anon_sym_PIPE_EQ;
	v->a[35566] = anon_sym_EQ_EQ;
	v->a[35567] = anon_sym_BANG_EQ;
	v->a[35568] = anon_sym_LT_EQ;
	v->a[35569] = anon_sym_GT_EQ;
	v->a[35570] = anon_sym_QMARK;
	v->a[35571] = anon_sym_COLON;
	v->a[35572] = anon_sym_PLUS_PLUS2;
	v->a[35573] = anon_sym_DASH_DASH2;
	v->a[35574] = 3;
	v->a[35575] = actions(1404);
	v->a[35576] = 1;
	v->a[35577] = sym_comment;
	v->a[35578] = actions(1313);
	v->a[35579] = 13;
	small_parse_table_1779(v);
}

void	small_parse_table_1779(t_small_parse_table_array *v)
{
	v->a[35580] = anon_sym_PIPE;
	v->a[35581] = anon_sym_EQ;
	v->a[35582] = anon_sym_LT;
	v->a[35583] = anon_sym_GT;
	v->a[35584] = anon_sym_GT_GT;
	v->a[35585] = anon_sym_LT_LT;
	v->a[35586] = anon_sym_CARET;
	v->a[35587] = anon_sym_AMP;
	v->a[35588] = anon_sym_PLUS;
	v->a[35589] = anon_sym_DASH;
	v->a[35590] = anon_sym_STAR;
	v->a[35591] = anon_sym_SLASH;
	v->a[35592] = anon_sym_PERCENT;
	v->a[35593] = actions(1315);
	v->a[35594] = 21;
	v->a[35595] = anon_sym_AMP_AMP;
	v->a[35596] = anon_sym_PIPE_PIPE;
	v->a[35597] = anon_sym_RPAREN_RPAREN;
	v->a[35598] = anon_sym_PLUS_EQ;
	v->a[35599] = anon_sym_DASH_EQ;
	small_parse_table_1780(v);
}

/* EOF small_parse_table_355.c */
