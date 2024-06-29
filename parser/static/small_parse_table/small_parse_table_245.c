/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_245.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1225(t_small_parse_table_array *v)
{
	v->a[24500] = sym_simple_expansion;
	v->a[24501] = sym_expansion;
	v->a[24502] = sym_command_substitution;
	v->a[24503] = actions(756);
	v->a[24504] = 29;
	v->a[24505] = anon_sym_PIPE;
	v->a[24506] = anon_sym_RPAREN;
	v->a[24507] = anon_sym_SEMI_SEMI;
	v->a[24508] = anon_sym_AMP_AMP;
	v->a[24509] = anon_sym_PIPE_PIPE;
	v->a[24510] = anon_sym_LT;
	v->a[24511] = anon_sym_GT;
	v->a[24512] = anon_sym_GT_GT;
	v->a[24513] = anon_sym_AMP_GT;
	v->a[24514] = anon_sym_AMP_GT_GT;
	v->a[24515] = anon_sym_LT_AMP;
	v->a[24516] = anon_sym_GT_AMP;
	v->a[24517] = anon_sym_GT_PIPE;
	v->a[24518] = anon_sym_LT_AMP_DASH;
	v->a[24519] = anon_sym_GT_AMP_DASH;
	small_parse_table_1226(v);
}

void	small_parse_table_1226(t_small_parse_table_array *v)
{
	v->a[24520] = anon_sym_LT_LT;
	v->a[24521] = anon_sym_LT_LT_DASH;
	v->a[24522] = aux_sym_heredoc_redirect_token1;
	v->a[24523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24524] = anon_sym_AMP;
	v->a[24525] = anon_sym_DOLLAR;
	v->a[24526] = anon_sym_DQUOTE;
	v->a[24527] = sym_raw_string;
	v->a[24528] = sym_number;
	v->a[24529] = anon_sym_DOLLAR_LBRACE;
	v->a[24530] = anon_sym_DOLLAR_LPAREN;
	v->a[24531] = anon_sym_BQUOTE;
	v->a[24532] = sym_word;
	v->a[24533] = anon_sym_SEMI;
	v->a[24534] = 13;
	v->a[24535] = actions(3);
	v->a[24536] = 1;
	v->a[24537] = sym_comment;
	v->a[24538] = actions(477);
	v->a[24539] = 1;
	small_parse_table_1227(v);
}

void	small_parse_table_1227(t_small_parse_table_array *v)
{
	v->a[24540] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24541] = actions(479);
	v->a[24542] = 1;
	v->a[24543] = anon_sym_DOLLAR;
	v->a[24544] = actions(481);
	v->a[24545] = 1;
	v->a[24546] = anon_sym_DQUOTE;
	v->a[24547] = actions(483);
	v->a[24548] = 1;
	v->a[24549] = anon_sym_DOLLAR_LBRACE;
	v->a[24550] = actions(485);
	v->a[24551] = 1;
	v->a[24552] = anon_sym_DOLLAR_LPAREN;
	v->a[24553] = actions(489);
	v->a[24554] = 1;
	v->a[24555] = sym__bare_dollar;
	v->a[24556] = actions(542);
	v->a[24557] = 1;
	v->a[24558] = sym_file_descriptor;
	v->a[24559] = state(218);
	small_parse_table_1228(v);
}

void	small_parse_table_1228(t_small_parse_table_array *v)
{
	v->a[24560] = 1;
	v->a[24561] = aux_sym_command_repeat2;
	v->a[24562] = state(712);
	v->a[24563] = 1;
	v->a[24564] = sym_concatenation;
	v->a[24565] = actions(511);
	v->a[24566] = 3;
	v->a[24567] = sym_raw_string;
	v->a[24568] = sym_number;
	v->a[24569] = sym_word;
	v->a[24570] = state(479);
	v->a[24571] = 5;
	v->a[24572] = sym_arithmetic_expansion;
	v->a[24573] = sym_string;
	v->a[24574] = sym_simple_expansion;
	v->a[24575] = sym_expansion;
	v->a[24576] = sym_command_substitution;
	v->a[24577] = actions(544);
	v->a[24578] = 20;
	v->a[24579] = anon_sym_PIPE;
	small_parse_table_1229(v);
}

void	small_parse_table_1229(t_small_parse_table_array *v)
{
	v->a[24580] = anon_sym_SEMI_SEMI;
	v->a[24581] = anon_sym_AMP_AMP;
	v->a[24582] = anon_sym_PIPE_PIPE;
	v->a[24583] = anon_sym_LT;
	v->a[24584] = anon_sym_GT;
	v->a[24585] = anon_sym_GT_GT;
	v->a[24586] = anon_sym_AMP_GT;
	v->a[24587] = anon_sym_AMP_GT_GT;
	v->a[24588] = anon_sym_LT_AMP;
	v->a[24589] = anon_sym_GT_AMP;
	v->a[24590] = anon_sym_GT_PIPE;
	v->a[24591] = anon_sym_LT_AMP_DASH;
	v->a[24592] = anon_sym_GT_AMP_DASH;
	v->a[24593] = anon_sym_LT_LT;
	v->a[24594] = anon_sym_LT_LT_DASH;
	v->a[24595] = aux_sym_heredoc_redirect_token1;
	v->a[24596] = anon_sym_AMP;
	v->a[24597] = anon_sym_BQUOTE;
	v->a[24598] = anon_sym_SEMI;
	v->a[24599] = 14;
	small_parse_table_1230(v);
}

/* EOF small_parse_table_245.c */
