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
	v->a[80500] = actions(680);
	v->a[80501] = 1;
	v->a[80502] = sym_comment;
	v->a[80503] = actions(3588);
	v->a[80504] = 2;
	v->a[80505] = anon_sym_LT;
	v->a[80506] = anon_sym_GT;
	v->a[80507] = actions(3590);
	v->a[80508] = 5;
	v->a[80509] = anon_sym_GT_GT;
	v->a[80510] = anon_sym_LT_AMP;
	v->a[80511] = anon_sym_GT_AMP;
	v->a[80512] = anon_sym_GT_PIPE;
	v->a[80513] = anon_sym_LT_GT;
	v->a[80514] = 2;
	v->a[80515] = actions(3);
	v->a[80516] = 1;
	v->a[80517] = sym_comment;
	v->a[80518] = actions(3274);
	v->a[80519] = 7;
	small_parse_table_4026(v);
}

void	small_parse_table_4026(t_small_parse_table_array *v)
{
	v->a[80520] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80521] = anon_sym_DOLLAR;
	v->a[80522] = anon_sym_DQUOTE;
	v->a[80523] = sym_string_content;
	v->a[80524] = anon_sym_DOLLAR_LBRACE;
	v->a[80525] = anon_sym_DOLLAR_LPAREN;
	v->a[80526] = anon_sym_BQUOTE;
	v->a[80527] = 3;
	v->a[80528] = actions(680);
	v->a[80529] = 1;
	v->a[80530] = sym_comment;
	v->a[80531] = actions(3592);
	v->a[80532] = 2;
	v->a[80533] = anon_sym_LT;
	v->a[80534] = anon_sym_GT;
	v->a[80535] = actions(3594);
	v->a[80536] = 5;
	v->a[80537] = anon_sym_GT_GT;
	v->a[80538] = anon_sym_LT_AMP;
	v->a[80539] = anon_sym_GT_AMP;
	small_parse_table_4027(v);
}

void	small_parse_table_4027(t_small_parse_table_array *v)
{
	v->a[80540] = anon_sym_GT_PIPE;
	v->a[80541] = anon_sym_LT_GT;
	v->a[80542] = 3;
	v->a[80543] = actions(680);
	v->a[80544] = 1;
	v->a[80545] = sym_comment;
	v->a[80546] = actions(3477);
	v->a[80547] = 2;
	v->a[80548] = anon_sym_LT;
	v->a[80549] = anon_sym_GT;
	v->a[80550] = actions(3479);
	v->a[80551] = 5;
	v->a[80552] = anon_sym_GT_GT;
	v->a[80553] = anon_sym_LT_AMP;
	v->a[80554] = anon_sym_GT_AMP;
	v->a[80555] = anon_sym_GT_PIPE;
	v->a[80556] = anon_sym_LT_GT;
	v->a[80557] = 3;
	v->a[80558] = actions(680);
	v->a[80559] = 1;
	small_parse_table_4028(v);
}

void	small_parse_table_4028(t_small_parse_table_array *v)
{
	v->a[80560] = sym_comment;
	v->a[80561] = actions(833);
	v->a[80562] = 1;
	v->a[80563] = anon_sym_DOLLAR;
	v->a[80564] = actions(835);
	v->a[80565] = 5;
	v->a[80566] = sym_heredoc_content;
	v->a[80567] = sym_heredoc_end;
	v->a[80568] = anon_sym_DOLLAR_LBRACE;
	v->a[80569] = anon_sym_DOLLAR_LPAREN;
	v->a[80570] = anon_sym_BQUOTE;
	v->a[80571] = 3;
	v->a[80572] = actions(680);
	v->a[80573] = 1;
	v->a[80574] = sym_comment;
	v->a[80575] = actions(790);
	v->a[80576] = 1;
	v->a[80577] = anon_sym_DOLLAR;
	v->a[80578] = actions(792);
	v->a[80579] = 5;
	small_parse_table_4029(v);
}

void	small_parse_table_4029(t_small_parse_table_array *v)
{
	v->a[80580] = sym_heredoc_content;
	v->a[80581] = sym_heredoc_end;
	v->a[80582] = anon_sym_DOLLAR_LBRACE;
	v->a[80583] = anon_sym_DOLLAR_LPAREN;
	v->a[80584] = anon_sym_BQUOTE;
	v->a[80585] = 6;
	v->a[80586] = actions(680);
	v->a[80587] = 1;
	v->a[80588] = sym_comment;
	v->a[80589] = actions(3596);
	v->a[80590] = 1;
	v->a[80591] = anon_sym_fi;
	v->a[80592] = actions(3598);
	v->a[80593] = 1;
	v->a[80594] = anon_sym_elif;
	v->a[80595] = actions(3600);
	v->a[80596] = 1;
	v->a[80597] = anon_sym_else;
	v->a[80598] = state(1973);
	v->a[80599] = 1;
	small_parse_table_4030(v);
}

/* EOF small_parse_table_805.c */
