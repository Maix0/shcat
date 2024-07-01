/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_805.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4025(t_small_parse_table_array *v)
{
	v->a[80500] = 10;
	v->a[80501] = sym_file_descriptor;
	v->a[80502] = sym__concat;
	v->a[80503] = anon_sym_AMP_AMP;
	v->a[80504] = anon_sym_PIPE_PIPE;
	v->a[80505] = anon_sym_GT_GT;
	v->a[80506] = anon_sym_GT_PIPE;
	v->a[80507] = anon_sym_LT_AMP_DASH;
	v->a[80508] = anon_sym_GT_AMP_DASH;
	v->a[80509] = anon_sym_LT_LT_DASH;
	v->a[80510] = aux_sym_concatenation_token1;
	v->a[80511] = 8;
	v->a[80512] = actions(3);
	v->a[80513] = 1;
	v->a[80514] = sym_comment;
	v->a[80515] = actions(906);
	v->a[80516] = 1;
	v->a[80517] = sym_file_descriptor;
	v->a[80518] = actions(3128);
	v->a[80519] = 1;
	small_parse_table_4026(v);
}

void	small_parse_table_4026(t_small_parse_table_array *v)
{
	v->a[80520] = aux_sym_heredoc_redirect_token1;
	v->a[80521] = state(2224);
	v->a[80522] = 1;
	v->a[80523] = sym__heredoc_expression;
	v->a[80524] = actions(886);
	v->a[80525] = 2;
	v->a[80526] = anon_sym_AMP_AMP;
	v->a[80527] = anon_sym_PIPE_PIPE;
	v->a[80528] = actions(890);
	v->a[80529] = 2;
	v->a[80530] = anon_sym_LT_AMP_DASH;
	v->a[80531] = anon_sym_GT_AMP_DASH;
	v->a[80532] = state(1670);
	v->a[80533] = 2;
	v->a[80534] = sym_file_redirect;
	v->a[80535] = aux_sym_redirected_statement_repeat2;
	v->a[80536] = actions(888);
	v->a[80537] = 6;
	v->a[80538] = anon_sym_LT;
	v->a[80539] = anon_sym_GT;
	small_parse_table_4027(v);
}

void	small_parse_table_4027(t_small_parse_table_array *v)
{
	v->a[80540] = anon_sym_GT_GT;
	v->a[80541] = anon_sym_LT_AMP;
	v->a[80542] = anon_sym_GT_AMP;
	v->a[80543] = anon_sym_GT_PIPE;
	v->a[80544] = 3;
	v->a[80545] = actions(3);
	v->a[80546] = 1;
	v->a[80547] = sym_comment;
	v->a[80548] = actions(1009);
	v->a[80549] = 1;
	v->a[80550] = sym__concat;
	v->a[80551] = actions(1007);
	v->a[80552] = 14;
	v->a[80553] = anon_sym_SEMI_SEMI;
	v->a[80554] = aux_sym_heredoc_redirect_token1;
	v->a[80555] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80556] = anon_sym_AMP;
	v->a[80557] = aux_sym_concatenation_token1;
	v->a[80558] = anon_sym_DOLLAR;
	v->a[80559] = anon_sym_DQUOTE;
	small_parse_table_4028(v);
}

void	small_parse_table_4028(t_small_parse_table_array *v)
{
	v->a[80560] = sym_raw_string;
	v->a[80561] = sym_number;
	v->a[80562] = anon_sym_DOLLAR_LBRACE;
	v->a[80563] = anon_sym_DOLLAR_LPAREN;
	v->a[80564] = anon_sym_BQUOTE;
	v->a[80565] = sym_word;
	v->a[80566] = anon_sym_SEMI;
	v->a[80567] = 3;
	v->a[80568] = actions(3);
	v->a[80569] = 1;
	v->a[80570] = sym_comment;
	v->a[80571] = actions(1264);
	v->a[80572] = 1;
	v->a[80573] = sym__concat;
	v->a[80574] = actions(1266);
	v->a[80575] = 14;
	v->a[80576] = anon_sym_SEMI_SEMI;
	v->a[80577] = aux_sym_heredoc_redirect_token1;
	v->a[80578] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80579] = anon_sym_AMP;
	small_parse_table_4029(v);
}

void	small_parse_table_4029(t_small_parse_table_array *v)
{
	v->a[80580] = aux_sym_concatenation_token1;
	v->a[80581] = anon_sym_DOLLAR;
	v->a[80582] = anon_sym_DQUOTE;
	v->a[80583] = sym_raw_string;
	v->a[80584] = sym_number;
	v->a[80585] = anon_sym_DOLLAR_LBRACE;
	v->a[80586] = anon_sym_DOLLAR_LPAREN;
	v->a[80587] = anon_sym_BQUOTE;
	v->a[80588] = sym_word;
	v->a[80589] = anon_sym_SEMI;
	v->a[80590] = 3;
	v->a[80591] = actions(3);
	v->a[80592] = 1;
	v->a[80593] = sym_comment;
	v->a[80594] = actions(1033);
	v->a[80595] = 1;
	v->a[80596] = sym__concat;
	v->a[80597] = actions(1031);
	v->a[80598] = 14;
	v->a[80599] = anon_sym_SEMI_SEMI;
	small_parse_table_4030(v);
}

/* EOF small_parse_table_805.c */
