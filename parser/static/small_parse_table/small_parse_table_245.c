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
	v->a[24500] = anon_sym_esac;
	v->a[24501] = anon_sym_PIPE;
	v->a[24502] = anon_sym_SEMI_SEMI;
	v->a[24503] = anon_sym_AMP_AMP;
	v->a[24504] = anon_sym_PIPE_PIPE;
	v->a[24505] = anon_sym_LT;
	v->a[24506] = anon_sym_GT;
	v->a[24507] = anon_sym_GT_GT;
	v->a[24508] = anon_sym_AMP_GT;
	v->a[24509] = anon_sym_AMP_GT_GT;
	v->a[24510] = anon_sym_LT_AMP;
	v->a[24511] = anon_sym_GT_AMP;
	v->a[24512] = anon_sym_GT_PIPE;
	v->a[24513] = anon_sym_LT_AMP_DASH;
	v->a[24514] = anon_sym_GT_AMP_DASH;
	v->a[24515] = anon_sym_LT_LT;
	v->a[24516] = anon_sym_LT_LT_DASH;
	v->a[24517] = aux_sym_heredoc_redirect_token1;
	v->a[24518] = anon_sym_AMP;
	v->a[24519] = anon_sym_SEMI;
	small_parse_table_1226(v);
}

void	small_parse_table_1226(t_small_parse_table_array *v)
{
	v->a[24520] = 14;
	v->a[24521] = actions(3);
	v->a[24522] = 1;
	v->a[24523] = sym_comment;
	v->a[24524] = actions(662);
	v->a[24525] = 1;
	v->a[24526] = sym_file_descriptor;
	v->a[24527] = actions(816);
	v->a[24528] = 1;
	v->a[24529] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24530] = actions(819);
	v->a[24531] = 1;
	v->a[24532] = anon_sym_DOLLAR;
	v->a[24533] = actions(822);
	v->a[24534] = 1;
	v->a[24535] = anon_sym_DQUOTE;
	v->a[24536] = actions(825);
	v->a[24537] = 1;
	v->a[24538] = aux_sym_number_token1;
	v->a[24539] = actions(828);
	small_parse_table_1227(v);
}

void	small_parse_table_1227(t_small_parse_table_array *v)
{
	v->a[24540] = 1;
	v->a[24541] = aux_sym_number_token2;
	v->a[24542] = actions(831);
	v->a[24543] = 1;
	v->a[24544] = anon_sym_DOLLAR_LBRACE;
	v->a[24545] = actions(834);
	v->a[24546] = 1;
	v->a[24547] = anon_sym_DOLLAR_LPAREN;
	v->a[24548] = actions(837);
	v->a[24549] = 1;
	v->a[24550] = anon_sym_BQUOTE;
	v->a[24551] = actions(813);
	v->a[24552] = 2;
	v->a[24553] = sym_raw_string;
	v->a[24554] = sym_word;
	v->a[24555] = state(223);
	v->a[24556] = 2;
	v->a[24557] = sym_concatenation;
	v->a[24558] = aux_sym_for_statement_repeat1;
	v->a[24559] = state(424);
	small_parse_table_1228(v);
}

void	small_parse_table_1228(t_small_parse_table_array *v)
{
	v->a[24560] = 6;
	v->a[24561] = sym_arithmetic_expansion;
	v->a[24562] = sym_string;
	v->a[24563] = sym_number;
	v->a[24564] = sym_simple_expansion;
	v->a[24565] = sym_expansion;
	v->a[24566] = sym_command_substitution;
	v->a[24567] = actions(636);
	v->a[24568] = 20;
	v->a[24569] = anon_sym_esac;
	v->a[24570] = anon_sym_PIPE;
	v->a[24571] = anon_sym_SEMI_SEMI;
	v->a[24572] = anon_sym_AMP_AMP;
	v->a[24573] = anon_sym_PIPE_PIPE;
	v->a[24574] = anon_sym_LT;
	v->a[24575] = anon_sym_GT;
	v->a[24576] = anon_sym_GT_GT;
	v->a[24577] = anon_sym_AMP_GT;
	v->a[24578] = anon_sym_AMP_GT_GT;
	v->a[24579] = anon_sym_LT_AMP;
	small_parse_table_1229(v);
}

void	small_parse_table_1229(t_small_parse_table_array *v)
{
	v->a[24580] = anon_sym_GT_AMP;
	v->a[24581] = anon_sym_GT_PIPE;
	v->a[24582] = anon_sym_LT_AMP_DASH;
	v->a[24583] = anon_sym_GT_AMP_DASH;
	v->a[24584] = anon_sym_LT_LT;
	v->a[24585] = anon_sym_LT_LT_DASH;
	v->a[24586] = aux_sym_heredoc_redirect_token1;
	v->a[24587] = anon_sym_AMP;
	v->a[24588] = anon_sym_SEMI;
	v->a[24589] = 16;
	v->a[24590] = actions(3);
	v->a[24591] = 1;
	v->a[24592] = sym_comment;
	v->a[24593] = actions(574);
	v->a[24594] = 1;
	v->a[24595] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24596] = actions(577);
	v->a[24597] = 1;
	v->a[24598] = anon_sym_DOLLAR;
	v->a[24599] = actions(580);
	small_parse_table_1230(v);
}

/* EOF small_parse_table_245.c */
