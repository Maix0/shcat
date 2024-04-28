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
	v->a[35500] = anon_sym_0;
	v->a[35501] = anon_sym__;
	v->a[35502] = actions(1227);
	v->a[35503] = 32;
	v->a[35504] = anon_sym_LPAREN_LPAREN;
	v->a[35505] = anon_sym_PIPE_PIPE;
	v->a[35506] = anon_sym_AMP_AMP;
	v->a[35507] = anon_sym_PIPE;
	v->a[35508] = anon_sym_LT;
	v->a[35509] = anon_sym_GT;
	v->a[35510] = anon_sym_LT_LT;
	v->a[35511] = anon_sym_GT_GT;
	v->a[35512] = anon_sym_PIPE_AMP;
	v->a[35513] = anon_sym_AMP_GT;
	v->a[35514] = anon_sym_AMP_GT_GT;
	v->a[35515] = anon_sym_LT_AMP;
	v->a[35516] = anon_sym_GT_AMP;
	v->a[35517] = anon_sym_GT_PIPE;
	v->a[35518] = anon_sym_LT_AMP_DASH;
	v->a[35519] = anon_sym_GT_AMP_DASH;
	small_parse_table_1776(v);
}

void	small_parse_table_1776(t_small_parse_table_array *v)
{
	v->a[35520] = anon_sym_LT_LT_DASH;
	v->a[35521] = aux_sym_heredoc_redirect_token1;
	v->a[35522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35523] = anon_sym_DOLLAR_LBRACK;
	v->a[35524] = sym__special_character;
	v->a[35525] = sym_raw_string;
	v->a[35526] = sym_ansi_c_string;
	v->a[35527] = aux_sym_number_token1;
	v->a[35528] = aux_sym_number_token2;
	v->a[35529] = anon_sym_DOLLAR_LBRACE;
	v->a[35530] = anon_sym_DOLLAR_LPAREN;
	v->a[35531] = anon_sym_BQUOTE;
	v->a[35532] = anon_sym_DOLLAR_BQUOTE;
	v->a[35533] = anon_sym_LT_LPAREN;
	v->a[35534] = anon_sym_GT_LPAREN;
	v->a[35535] = sym_word;
	v->a[35536] = 8;
	v->a[35537] = actions(3);
	v->a[35538] = 1;
	v->a[35539] = sym_comment;
	small_parse_table_1777(v);
}

void	small_parse_table_1777(t_small_parse_table_array *v)
{
	v->a[35540] = actions(4797);
	v->a[35541] = 1;
	v->a[35542] = anon_sym_DQUOTE;
	v->a[35543] = actions(4801);
	v->a[35544] = 1;
	v->a[35545] = sym_variable_name;
	v->a[35546] = state(2585);
	v->a[35547] = 1;
	v->a[35548] = sym_string;
	v->a[35549] = actions(4799);
	v->a[35550] = 2;
	v->a[35551] = aux_sym__simple_variable_name_token1;
	v->a[35552] = aux_sym__multiline_variable_name_token1;
	v->a[35553] = actions(1235);
	v->a[35554] = 3;
	v->a[35555] = sym_file_descriptor;
	v->a[35556] = sym_test_operator;
	v->a[35557] = sym__brace_start;
	v->a[35558] = actions(4795);
	v->a[35559] = 9;
	small_parse_table_1778(v);
}

void	small_parse_table_1778(t_small_parse_table_array *v)
{
	v->a[35560] = anon_sym_DASH;
	v->a[35561] = anon_sym_STAR;
	v->a[35562] = anon_sym_BANG;
	v->a[35563] = anon_sym_QMARK;
	v->a[35564] = anon_sym_DOLLAR;
	v->a[35565] = anon_sym_POUND;
	v->a[35566] = anon_sym_AT2;
	v->a[35567] = anon_sym_0;
	v->a[35568] = anon_sym__;
	v->a[35569] = actions(1227);
	v->a[35570] = 32;
	v->a[35571] = anon_sym_LPAREN_LPAREN;
	v->a[35572] = anon_sym_PIPE_PIPE;
	v->a[35573] = anon_sym_AMP_AMP;
	v->a[35574] = anon_sym_PIPE;
	v->a[35575] = anon_sym_LT;
	v->a[35576] = anon_sym_GT;
	v->a[35577] = anon_sym_LT_LT;
	v->a[35578] = anon_sym_GT_GT;
	v->a[35579] = anon_sym_PIPE_AMP;
	small_parse_table_1779(v);
}

void	small_parse_table_1779(t_small_parse_table_array *v)
{
	v->a[35580] = anon_sym_RBRACK;
	v->a[35581] = anon_sym_AMP_GT;
	v->a[35582] = anon_sym_AMP_GT_GT;
	v->a[35583] = anon_sym_LT_AMP;
	v->a[35584] = anon_sym_GT_AMP;
	v->a[35585] = anon_sym_GT_PIPE;
	v->a[35586] = anon_sym_LT_AMP_DASH;
	v->a[35587] = anon_sym_GT_AMP_DASH;
	v->a[35588] = anon_sym_LT_LT_DASH;
	v->a[35589] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35590] = anon_sym_DOLLAR_LBRACK;
	v->a[35591] = sym__special_character;
	v->a[35592] = sym_raw_string;
	v->a[35593] = sym_ansi_c_string;
	v->a[35594] = aux_sym_number_token1;
	v->a[35595] = aux_sym_number_token2;
	v->a[35596] = anon_sym_DOLLAR_LBRACE;
	v->a[35597] = anon_sym_DOLLAR_LPAREN;
	v->a[35598] = anon_sym_BQUOTE;
	v->a[35599] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1780(v);
}

/* EOF small_parse_table_355.c */
