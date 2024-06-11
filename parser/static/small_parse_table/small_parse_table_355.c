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
	v->a[35500] = anon_sym_GT_GT;
	v->a[35501] = anon_sym_AMP_GT;
	v->a[35502] = anon_sym_AMP_GT_GT;
	v->a[35503] = anon_sym_LT_AMP;
	v->a[35504] = anon_sym_GT_AMP;
	v->a[35505] = anon_sym_GT_PIPE;
	v->a[35506] = anon_sym_LT_AMP_DASH;
	v->a[35507] = anon_sym_GT_AMP_DASH;
	v->a[35508] = anon_sym_LT_LT;
	v->a[35509] = anon_sym_LT_LT_DASH;
	v->a[35510] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35511] = anon_sym_DOLLAR;
	v->a[35512] = anon_sym_DQUOTE;
	v->a[35513] = sym_raw_string;
	v->a[35514] = sym_number;
	v->a[35515] = anon_sym_DOLLAR_LBRACE;
	v->a[35516] = anon_sym_DOLLAR_LPAREN;
	v->a[35517] = anon_sym_BQUOTE;
	v->a[35518] = sym_word;
	v->a[35519] = 6;
	small_parse_table_1776(v);
}

void	small_parse_table_1776(t_small_parse_table_array *v)
{
	v->a[35520] = actions(3);
	v->a[35521] = 1;
	v->a[35522] = sym_comment;
	v->a[35523] = actions(1342);
	v->a[35524] = 1;
	v->a[35525] = sym_variable_name;
	v->a[35526] = actions(379);
	v->a[35527] = 2;
	v->a[35528] = sym_file_descriptor;
	v->a[35529] = ts_builtin_sym_end;
	v->a[35530] = actions(1340);
	v->a[35531] = 2;
	v->a[35532] = aux_sym__simple_variable_name_token1;
	v->a[35533] = aux_sym__multiline_variable_name_token1;
	v->a[35534] = actions(1338);
	v->a[35535] = 9;
	v->a[35536] = anon_sym_BANG;
	v->a[35537] = anon_sym_DASH;
	v->a[35538] = anon_sym_STAR;
	v->a[35539] = anon_sym_QMARK;
	small_parse_table_1777(v);
}

void	small_parse_table_1777(t_small_parse_table_array *v)
{
	v->a[35540] = anon_sym_DOLLAR;
	v->a[35541] = anon_sym_POUND;
	v->a[35542] = anon_sym_AT;
	v->a[35543] = anon_sym_0;
	v->a[35544] = anon_sym__;
	v->a[35545] = actions(381);
	v->a[35546] = 19;
	v->a[35547] = anon_sym_PIPE;
	v->a[35548] = anon_sym_SEMI_SEMI;
	v->a[35549] = anon_sym_AMP_AMP;
	v->a[35550] = anon_sym_PIPE_PIPE;
	v->a[35551] = anon_sym_LT;
	v->a[35552] = anon_sym_GT;
	v->a[35553] = anon_sym_GT_GT;
	v->a[35554] = anon_sym_AMP_GT;
	v->a[35555] = anon_sym_AMP_GT_GT;
	v->a[35556] = anon_sym_LT_AMP;
	v->a[35557] = anon_sym_GT_AMP;
	v->a[35558] = anon_sym_GT_PIPE;
	v->a[35559] = anon_sym_LT_AMP_DASH;
	small_parse_table_1778(v);
}

void	small_parse_table_1778(t_small_parse_table_array *v)
{
	v->a[35560] = anon_sym_GT_AMP_DASH;
	v->a[35561] = anon_sym_LT_LT;
	v->a[35562] = anon_sym_LT_LT_DASH;
	v->a[35563] = aux_sym_heredoc_redirect_token1;
	v->a[35564] = anon_sym_AMP;
	v->a[35565] = anon_sym_SEMI;
	v->a[35566] = 6;
	v->a[35567] = actions(3);
	v->a[35568] = 1;
	v->a[35569] = sym_comment;
	v->a[35570] = actions(972);
	v->a[35571] = 1;
	v->a[35572] = sym_file_descriptor;
	v->a[35573] = actions(1344);
	v->a[35574] = 1;
	v->a[35575] = aux_sym_concatenation_token1;
	v->a[35576] = actions(1346);
	v->a[35577] = 1;
	v->a[35578] = sym__concat;
	v->a[35579] = state(508);
	small_parse_table_1779(v);
}

void	small_parse_table_1779(t_small_parse_table_array *v)
{
	v->a[35580] = 1;
	v->a[35581] = aux_sym_concatenation_repeat1;
	v->a[35582] = actions(974);
	v->a[35583] = 29;
	v->a[35584] = anon_sym_PIPE;
	v->a[35585] = anon_sym_RPAREN;
	v->a[35586] = anon_sym_SEMI_SEMI;
	v->a[35587] = anon_sym_AMP_AMP;
	v->a[35588] = anon_sym_PIPE_PIPE;
	v->a[35589] = anon_sym_LT;
	v->a[35590] = anon_sym_GT;
	v->a[35591] = anon_sym_GT_GT;
	v->a[35592] = anon_sym_AMP_GT;
	v->a[35593] = anon_sym_AMP_GT_GT;
	v->a[35594] = anon_sym_LT_AMP;
	v->a[35595] = anon_sym_GT_AMP;
	v->a[35596] = anon_sym_GT_PIPE;
	v->a[35597] = anon_sym_LT_AMP_DASH;
	v->a[35598] = anon_sym_GT_AMP_DASH;
	v->a[35599] = anon_sym_LT_LT;
	small_parse_table_1780(v);
}

/* EOF small_parse_table_355.c */
