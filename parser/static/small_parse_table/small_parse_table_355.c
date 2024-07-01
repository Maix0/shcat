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
	v->a[35500] = actions(3);
	v->a[35501] = 1;
	v->a[35502] = sym_comment;
	v->a[35503] = actions(1287);
	v->a[35504] = 1;
	v->a[35505] = aux_sym_concatenation_token1;
	v->a[35506] = actions(1297);
	v->a[35507] = 1;
	v->a[35508] = sym__concat;
	v->a[35509] = state(435);
	v->a[35510] = 1;
	v->a[35511] = aux_sym_concatenation_repeat1;
	v->a[35512] = actions(1303);
	v->a[35513] = 3;
	v->a[35514] = sym_file_descriptor;
	v->a[35515] = sym_variable_name;
	v->a[35516] = ts_builtin_sym_end;
	v->a[35517] = actions(1301);
	v->a[35518] = 26;
	v->a[35519] = anon_sym_PIPE;
	small_parse_table_1776(v);
}

void	small_parse_table_1776(t_small_parse_table_array *v)
{
	v->a[35520] = anon_sym_SEMI_SEMI;
	v->a[35521] = anon_sym_AMP_AMP;
	v->a[35522] = anon_sym_PIPE_PIPE;
	v->a[35523] = anon_sym_LT;
	v->a[35524] = anon_sym_GT;
	v->a[35525] = anon_sym_GT_GT;
	v->a[35526] = anon_sym_LT_AMP;
	v->a[35527] = anon_sym_GT_AMP;
	v->a[35528] = anon_sym_GT_PIPE;
	v->a[35529] = anon_sym_LT_AMP_DASH;
	v->a[35530] = anon_sym_GT_AMP_DASH;
	v->a[35531] = anon_sym_LT_LT;
	v->a[35532] = anon_sym_LT_LT_DASH;
	v->a[35533] = aux_sym_heredoc_redirect_token1;
	v->a[35534] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35535] = anon_sym_AMP;
	v->a[35536] = anon_sym_DOLLAR;
	v->a[35537] = anon_sym_DQUOTE;
	v->a[35538] = sym_raw_string;
	v->a[35539] = sym_number;
	small_parse_table_1777(v);
}

void	small_parse_table_1777(t_small_parse_table_array *v)
{
	v->a[35540] = anon_sym_DOLLAR_LBRACE;
	v->a[35541] = anon_sym_DOLLAR_LPAREN;
	v->a[35542] = anon_sym_BQUOTE;
	v->a[35543] = sym_word;
	v->a[35544] = anon_sym_SEMI;
	v->a[35545] = 14;
	v->a[35546] = actions(3);
	v->a[35547] = 1;
	v->a[35548] = sym_comment;
	v->a[35549] = actions(536);
	v->a[35550] = 1;
	v->a[35551] = sym_file_descriptor;
	v->a[35552] = actions(657);
	v->a[35553] = 1;
	v->a[35554] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35555] = actions(660);
	v->a[35556] = 1;
	v->a[35557] = anon_sym_DOLLAR;
	v->a[35558] = actions(663);
	v->a[35559] = 1;
	small_parse_table_1778(v);
}

void	small_parse_table_1778(t_small_parse_table_array *v)
{
	v->a[35560] = anon_sym_DQUOTE;
	v->a[35561] = actions(666);
	v->a[35562] = 1;
	v->a[35563] = anon_sym_DOLLAR_LBRACE;
	v->a[35564] = actions(669);
	v->a[35565] = 1;
	v->a[35566] = anon_sym_DOLLAR_LPAREN;
	v->a[35567] = actions(672);
	v->a[35568] = 1;
	v->a[35569] = anon_sym_BQUOTE;
	v->a[35570] = actions(675);
	v->a[35571] = 1;
	v->a[35572] = sym__bare_dollar;
	v->a[35573] = state(457);
	v->a[35574] = 1;
	v->a[35575] = aux_sym_command_repeat2;
	v->a[35576] = state(718);
	v->a[35577] = 1;
	v->a[35578] = sym_concatenation;
	v->a[35579] = actions(1317);
	small_parse_table_1779(v);
}

void	small_parse_table_1779(t_small_parse_table_array *v)
{
	v->a[35580] = 3;
	v->a[35581] = sym_raw_string;
	v->a[35582] = sym_number;
	v->a[35583] = sym_word;
	v->a[35584] = state(772);
	v->a[35585] = 5;
	v->a[35586] = sym_arithmetic_expansion;
	v->a[35587] = sym_string;
	v->a[35588] = sym_simple_expansion;
	v->a[35589] = sym_expansion;
	v->a[35590] = sym_command_substitution;
	v->a[35591] = actions(516);
	v->a[35592] = 14;
	v->a[35593] = anon_sym_PIPE;
	v->a[35594] = anon_sym_AMP_AMP;
	v->a[35595] = anon_sym_PIPE_PIPE;
	v->a[35596] = anon_sym_LT;
	v->a[35597] = anon_sym_GT;
	v->a[35598] = anon_sym_GT_GT;
	v->a[35599] = anon_sym_LT_AMP;
	small_parse_table_1780(v);
}

/* EOF small_parse_table_355.c */
