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
	v->a[35500] = 3;
	v->a[35501] = sym_file_descriptor;
	v->a[35502] = sym__concat;
	v->a[35503] = sym__bare_dollar;
	v->a[35504] = actions(768);
	v->a[35505] = 27;
	v->a[35506] = anon_sym_PIPE;
	v->a[35507] = anon_sym_RPAREN;
	v->a[35508] = anon_sym_SEMI_SEMI;
	v->a[35509] = anon_sym_AMP_AMP;
	v->a[35510] = anon_sym_PIPE_PIPE;
	v->a[35511] = anon_sym_LT;
	v->a[35512] = anon_sym_GT;
	v->a[35513] = anon_sym_GT_GT;
	v->a[35514] = anon_sym_LT_AMP;
	v->a[35515] = anon_sym_GT_AMP;
	v->a[35516] = anon_sym_GT_PIPE;
	v->a[35517] = anon_sym_LT_GT;
	v->a[35518] = anon_sym_LT_LT;
	v->a[35519] = anon_sym_LT_LT_DASH;
	small_parse_table_1776(v);
}

void	small_parse_table_1776(t_small_parse_table_array *v)
{
	v->a[35520] = aux_sym_heredoc_redirect_token1;
	v->a[35521] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35522] = anon_sym_AMP;
	v->a[35523] = aux_sym_concatenation_token1;
	v->a[35524] = anon_sym_DOLLAR;
	v->a[35525] = anon_sym_DQUOTE;
	v->a[35526] = sym_raw_string;
	v->a[35527] = sym_number;
	v->a[35528] = anon_sym_DOLLAR_LBRACE;
	v->a[35529] = anon_sym_DOLLAR_LPAREN;
	v->a[35530] = anon_sym_BQUOTE;
	v->a[35531] = sym_word;
	v->a[35532] = anon_sym_SEMI;
	v->a[35533] = 12;
	v->a[35534] = actions(3);
	v->a[35535] = 1;
	v->a[35536] = sym_comment;
	v->a[35537] = actions(552);
	v->a[35538] = 1;
	v->a[35539] = sym_file_descriptor;
	small_parse_table_1777(v);
}

void	small_parse_table_1777(t_small_parse_table_array *v)
{
	v->a[35540] = actions(871);
	v->a[35541] = 1;
	v->a[35542] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35543] = actions(873);
	v->a[35544] = 1;
	v->a[35545] = anon_sym_DOLLAR;
	v->a[35546] = actions(875);
	v->a[35547] = 1;
	v->a[35548] = anon_sym_DQUOTE;
	v->a[35549] = actions(877);
	v->a[35550] = 1;
	v->a[35551] = anon_sym_DOLLAR_LBRACE;
	v->a[35552] = actions(879);
	v->a[35553] = 1;
	v->a[35554] = anon_sym_DOLLAR_LPAREN;
	v->a[35555] = actions(881);
	v->a[35556] = 1;
	v->a[35557] = anon_sym_BQUOTE;
	v->a[35558] = state(539);
	v->a[35559] = 2;
	small_parse_table_1778(v);
}

void	small_parse_table_1778(t_small_parse_table_array *v)
{
	v->a[35560] = sym_concatenation;
	v->a[35561] = aux_sym_for_statement_repeat1;
	v->a[35562] = actions(1319);
	v->a[35563] = 3;
	v->a[35564] = sym_raw_string;
	v->a[35565] = sym_number;
	v->a[35566] = sym_word;
	v->a[35567] = state(842);
	v->a[35568] = 5;
	v->a[35569] = sym_arithmetic_expansion;
	v->a[35570] = sym_string;
	v->a[35571] = sym_simple_expansion;
	v->a[35572] = sym_expansion;
	v->a[35573] = sym_command_substitution;
	v->a[35574] = actions(554);
	v->a[35575] = 13;
	v->a[35576] = anon_sym_PIPE;
	v->a[35577] = anon_sym_AMP_AMP;
	v->a[35578] = anon_sym_PIPE_PIPE;
	v->a[35579] = anon_sym_LT;
	small_parse_table_1779(v);
}

void	small_parse_table_1779(t_small_parse_table_array *v)
{
	v->a[35580] = anon_sym_GT;
	v->a[35581] = anon_sym_GT_GT;
	v->a[35582] = anon_sym_LT_AMP;
	v->a[35583] = anon_sym_GT_AMP;
	v->a[35584] = anon_sym_GT_PIPE;
	v->a[35585] = anon_sym_LT_GT;
	v->a[35586] = anon_sym_LT_LT;
	v->a[35587] = anon_sym_LT_LT_DASH;
	v->a[35588] = aux_sym_heredoc_redirect_token1;
	v->a[35589] = 3;
	v->a[35590] = actions(3);
	v->a[35591] = 1;
	v->a[35592] = sym_comment;
	v->a[35593] = actions(846);
	v->a[35594] = 3;
	v->a[35595] = sym_file_descriptor;
	v->a[35596] = sym__concat;
	v->a[35597] = sym_variable_name;
	v->a[35598] = actions(844);
	v->a[35599] = 27;
	small_parse_table_1780(v);
}

/* EOF small_parse_table_355.c */
