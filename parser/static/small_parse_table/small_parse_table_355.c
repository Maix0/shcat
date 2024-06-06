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
	v->a[35500] = sym__special_character;
	v->a[35501] = anon_sym_DQUOTE;
	v->a[35502] = sym_raw_string;
	v->a[35503] = aux_sym_number_token1;
	v->a[35504] = aux_sym_number_token2;
	v->a[35505] = anon_sym_DOLLAR_LBRACE;
	v->a[35506] = anon_sym_DOLLAR_LPAREN;
	v->a[35507] = anon_sym_BQUOTE;
	v->a[35508] = anon_sym_DOLLAR_BQUOTE;
	v->a[35509] = sym_word;
	v->a[35510] = anon_sym_SEMI;
	v->a[35511] = 3;
	v->a[35512] = actions(3);
	v->a[35513] = 1;
	v->a[35514] = sym_comment;
	v->a[35515] = actions(2774);
	v->a[35516] = 6;
	v->a[35517] = sym_file_descriptor;
	v->a[35518] = sym__concat;
	v->a[35519] = sym_variable_name;
	small_parse_table_1776(v);
}

void	small_parse_table_1776(t_small_parse_table_array *v)
{
	v->a[35520] = sym_test_operator;
	v->a[35521] = sym__brace_start;
	v->a[35522] = aux_sym_heredoc_redirect_token1;
	v->a[35523] = actions(2772);
	v->a[35524] = 34;
	v->a[35525] = anon_sym_PIPE;
	v->a[35526] = anon_sym_RPAREN;
	v->a[35527] = anon_sym_SEMI_SEMI;
	v->a[35528] = anon_sym_PIPE_AMP;
	v->a[35529] = anon_sym_AMP_AMP;
	v->a[35530] = anon_sym_PIPE_PIPE;
	v->a[35531] = anon_sym_LT;
	v->a[35532] = anon_sym_GT;
	v->a[35533] = anon_sym_GT_GT;
	v->a[35534] = anon_sym_AMP_GT;
	v->a[35535] = anon_sym_AMP_GT_GT;
	v->a[35536] = anon_sym_LT_AMP;
	v->a[35537] = anon_sym_GT_AMP;
	v->a[35538] = anon_sym_GT_PIPE;
	v->a[35539] = anon_sym_LT_AMP_DASH;
	small_parse_table_1777(v);
}

void	small_parse_table_1777(t_small_parse_table_array *v)
{
	v->a[35540] = anon_sym_GT_AMP_DASH;
	v->a[35541] = anon_sym_LT_LT;
	v->a[35542] = anon_sym_LT_LT_DASH;
	v->a[35543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35544] = anon_sym_AMP;
	v->a[35545] = aux_sym_concatenation_token1;
	v->a[35546] = anon_sym_DOLLAR;
	v->a[35547] = sym__special_character;
	v->a[35548] = anon_sym_DQUOTE;
	v->a[35549] = sym_raw_string;
	v->a[35550] = aux_sym_number_token1;
	v->a[35551] = aux_sym_number_token2;
	v->a[35552] = anon_sym_DOLLAR_LBRACE;
	v->a[35553] = anon_sym_DOLLAR_LPAREN;
	v->a[35554] = anon_sym_BQUOTE;
	v->a[35555] = anon_sym_DOLLAR_BQUOTE;
	v->a[35556] = aux_sym__simple_variable_name_token1;
	v->a[35557] = sym_word;
	v->a[35558] = anon_sym_SEMI;
	v->a[35559] = 3;
	small_parse_table_1778(v);
}

void	small_parse_table_1778(t_small_parse_table_array *v)
{
	v->a[35560] = actions(3);
	v->a[35561] = 1;
	v->a[35562] = sym_comment;
	v->a[35563] = actions(2778);
	v->a[35564] = 6;
	v->a[35565] = sym_file_descriptor;
	v->a[35566] = sym__concat;
	v->a[35567] = sym_variable_name;
	v->a[35568] = sym_test_operator;
	v->a[35569] = sym__brace_start;
	v->a[35570] = aux_sym_heredoc_redirect_token1;
	v->a[35571] = actions(2776);
	v->a[35572] = 34;
	v->a[35573] = anon_sym_PIPE;
	v->a[35574] = anon_sym_RPAREN;
	v->a[35575] = anon_sym_SEMI_SEMI;
	v->a[35576] = anon_sym_PIPE_AMP;
	v->a[35577] = anon_sym_AMP_AMP;
	v->a[35578] = anon_sym_PIPE_PIPE;
	v->a[35579] = anon_sym_LT;
	small_parse_table_1779(v);
}

void	small_parse_table_1779(t_small_parse_table_array *v)
{
	v->a[35580] = anon_sym_GT;
	v->a[35581] = anon_sym_GT_GT;
	v->a[35582] = anon_sym_AMP_GT;
	v->a[35583] = anon_sym_AMP_GT_GT;
	v->a[35584] = anon_sym_LT_AMP;
	v->a[35585] = anon_sym_GT_AMP;
	v->a[35586] = anon_sym_GT_PIPE;
	v->a[35587] = anon_sym_LT_AMP_DASH;
	v->a[35588] = anon_sym_GT_AMP_DASH;
	v->a[35589] = anon_sym_LT_LT;
	v->a[35590] = anon_sym_LT_LT_DASH;
	v->a[35591] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35592] = anon_sym_AMP;
	v->a[35593] = aux_sym_concatenation_token1;
	v->a[35594] = anon_sym_DOLLAR;
	v->a[35595] = sym__special_character;
	v->a[35596] = anon_sym_DQUOTE;
	v->a[35597] = sym_raw_string;
	v->a[35598] = aux_sym_number_token1;
	v->a[35599] = aux_sym_number_token2;
	small_parse_table_1780(v);
}

/* EOF small_parse_table_355.c */
