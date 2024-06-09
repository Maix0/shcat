/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_335.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1675(t_small_parse_table_array *v)
{
	v->a[33500] = actions(1253);
	v->a[33501] = 32;
	v->a[33502] = anon_sym_LPAREN;
	v->a[33503] = anon_sym_PIPE;
	v->a[33504] = anon_sym_RPAREN;
	v->a[33505] = anon_sym_SEMI_SEMI;
	v->a[33506] = anon_sym_AMP_AMP;
	v->a[33507] = anon_sym_PIPE_PIPE;
	v->a[33508] = anon_sym_LT;
	v->a[33509] = anon_sym_GT;
	v->a[33510] = anon_sym_GT_GT;
	v->a[33511] = anon_sym_AMP_GT;
	v->a[33512] = anon_sym_AMP_GT_GT;
	v->a[33513] = anon_sym_LT_AMP;
	v->a[33514] = anon_sym_GT_AMP;
	v->a[33515] = anon_sym_GT_PIPE;
	v->a[33516] = anon_sym_LT_AMP_DASH;
	v->a[33517] = anon_sym_GT_AMP_DASH;
	v->a[33518] = anon_sym_LT_LT;
	v->a[33519] = anon_sym_LT_LT_DASH;
	small_parse_table_1676(v);
}

void	small_parse_table_1676(t_small_parse_table_array *v)
{
	v->a[33520] = aux_sym_heredoc_redirect_token1;
	v->a[33521] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33522] = anon_sym_AMP;
	v->a[33523] = aux_sym_concatenation_token1;
	v->a[33524] = anon_sym_DOLLAR;
	v->a[33525] = anon_sym_DQUOTE;
	v->a[33526] = sym_raw_string;
	v->a[33527] = aux_sym_number_token1;
	v->a[33528] = aux_sym_number_token2;
	v->a[33529] = anon_sym_DOLLAR_LBRACE;
	v->a[33530] = anon_sym_DOLLAR_LPAREN;
	v->a[33531] = anon_sym_BQUOTE;
	v->a[33532] = sym_word;
	v->a[33533] = anon_sym_SEMI;
	v->a[33534] = 6;
	v->a[33535] = actions(3);
	v->a[33536] = 1;
	v->a[33537] = sym_comment;
	v->a[33538] = actions(1159);
	v->a[33539] = 1;
	small_parse_table_1677(v);
}

void	small_parse_table_1677(t_small_parse_table_array *v)
{
	v->a[33540] = aux_sym_concatenation_token1;
	v->a[33541] = actions(1380);
	v->a[33542] = 1;
	v->a[33543] = sym__concat;
	v->a[33544] = state(291);
	v->a[33545] = 1;
	v->a[33546] = aux_sym_concatenation_repeat1;
	v->a[33547] = actions(1127);
	v->a[33548] = 2;
	v->a[33549] = sym_file_descriptor;
	v->a[33550] = sym__bare_dollar;
	v->a[33551] = actions(1129);
	v->a[33552] = 30;
	v->a[33553] = anon_sym_LPAREN;
	v->a[33554] = anon_sym_PIPE;
	v->a[33555] = anon_sym_SEMI_SEMI;
	v->a[33556] = anon_sym_AMP_AMP;
	v->a[33557] = anon_sym_PIPE_PIPE;
	v->a[33558] = anon_sym_LT;
	v->a[33559] = anon_sym_GT;
	small_parse_table_1678(v);
}

void	small_parse_table_1678(t_small_parse_table_array *v)
{
	v->a[33560] = anon_sym_GT_GT;
	v->a[33561] = anon_sym_AMP_GT;
	v->a[33562] = anon_sym_AMP_GT_GT;
	v->a[33563] = anon_sym_LT_AMP;
	v->a[33564] = anon_sym_GT_AMP;
	v->a[33565] = anon_sym_GT_PIPE;
	v->a[33566] = anon_sym_LT_AMP_DASH;
	v->a[33567] = anon_sym_GT_AMP_DASH;
	v->a[33568] = anon_sym_LT_LT;
	v->a[33569] = anon_sym_LT_LT_DASH;
	v->a[33570] = aux_sym_heredoc_redirect_token1;
	v->a[33571] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33572] = anon_sym_AMP;
	v->a[33573] = anon_sym_DOLLAR;
	v->a[33574] = anon_sym_DQUOTE;
	v->a[33575] = sym_raw_string;
	v->a[33576] = aux_sym_number_token1;
	v->a[33577] = aux_sym_number_token2;
	v->a[33578] = anon_sym_DOLLAR_LBRACE;
	v->a[33579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1679(v);
}

void	small_parse_table_1679(t_small_parse_table_array *v)
{
	v->a[33580] = anon_sym_BQUOTE;
	v->a[33581] = sym_word;
	v->a[33582] = anon_sym_SEMI;
	v->a[33583] = 14;
	v->a[33584] = actions(3);
	v->a[33585] = 1;
	v->a[33586] = sym_comment;
	v->a[33587] = actions(662);
	v->a[33588] = 1;
	v->a[33589] = sym_file_descriptor;
	v->a[33590] = actions(846);
	v->a[33591] = 1;
	v->a[33592] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33593] = actions(849);
	v->a[33594] = 1;
	v->a[33595] = anon_sym_DOLLAR;
	v->a[33596] = actions(852);
	v->a[33597] = 1;
	v->a[33598] = anon_sym_DQUOTE;
	v->a[33599] = actions(855);
	small_parse_table_1680(v);
}

/* EOF small_parse_table_335.c */
