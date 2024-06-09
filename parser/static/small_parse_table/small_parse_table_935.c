/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_935.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4675(t_small_parse_table_array *v)
{
	v->a[93500] = actions(1404);
	v->a[93501] = 1;
	v->a[93502] = sym_comment;
	v->a[93503] = actions(4208);
	v->a[93504] = 1;
	v->a[93505] = sym__heredoc_body_beginning;
	v->a[93506] = actions(4216);
	v->a[93507] = 1;
	v->a[93508] = sym_simple_heredoc_body;
	v->a[93509] = state(1594);
	v->a[93510] = 1;
	v->a[93511] = sym__simple_heredoc_body;
	v->a[93512] = state(1595);
	v->a[93513] = 1;
	v->a[93514] = sym__heredoc_body;
	v->a[93515] = state(2119);
	v->a[93516] = 1;
	v->a[93517] = sym_heredoc_body;
	v->a[93518] = 5;
	v->a[93519] = actions(1404);
	small_parse_table_4676(v);
}

void	small_parse_table_4676(t_small_parse_table_array *v)
{
	v->a[93520] = 1;
	v->a[93521] = sym_comment;
	v->a[93522] = actions(4184);
	v->a[93523] = 1;
	v->a[93524] = aux_sym_concatenation_token1;
	v->a[93525] = actions(4404);
	v->a[93526] = 1;
	v->a[93527] = sym__concat;
	v->a[93528] = state(1931);
	v->a[93529] = 1;
	v->a[93530] = aux_sym_concatenation_repeat1;
	v->a[93531] = actions(1127);
	v->a[93532] = 2;
	v->a[93533] = anon_sym_PIPE;
	v->a[93534] = anon_sym_RPAREN;
	v->a[93535] = 6;
	v->a[93536] = actions(1404);
	v->a[93537] = 1;
	v->a[93538] = sym_comment;
	v->a[93539] = actions(4206);
	small_parse_table_4677(v);
}

void	small_parse_table_4677(t_small_parse_table_array *v)
{
	v->a[93540] = 1;
	v->a[93541] = sym_simple_heredoc_body;
	v->a[93542] = actions(4208);
	v->a[93543] = 1;
	v->a[93544] = sym__heredoc_body_beginning;
	v->a[93545] = state(1132);
	v->a[93546] = 1;
	v->a[93547] = sym__simple_heredoc_body;
	v->a[93548] = state(1139);
	v->a[93549] = 1;
	v->a[93550] = sym__heredoc_body;
	v->a[93551] = state(2151);
	v->a[93552] = 1;
	v->a[93553] = sym_heredoc_body;
	v->a[93554] = 4;
	v->a[93555] = actions(3);
	v->a[93556] = 1;
	v->a[93557] = sym_comment;
	v->a[93558] = actions(4406);
	v->a[93559] = 1;
	small_parse_table_4678(v);
}

void	small_parse_table_4678(t_small_parse_table_array *v)
{
	v->a[93560] = anon_sym_in;
	v->a[93561] = actions(4410);
	v->a[93562] = 1;
	v->a[93563] = aux_sym_heredoc_redirect_token1;
	v->a[93564] = actions(4408);
	v->a[93565] = 3;
	v->a[93566] = anon_sym_SEMI_SEMI;
	v->a[93567] = anon_sym_AMP;
	v->a[93568] = anon_sym_SEMI;
	v->a[93569] = 5;
	v->a[93570] = actions(1404);
	v->a[93571] = 1;
	v->a[93572] = sym_comment;
	v->a[93573] = actions(4206);
	v->a[93574] = 1;
	v->a[93575] = sym_simple_heredoc_body;
	v->a[93576] = actions(4208);
	v->a[93577] = 1;
	v->a[93578] = sym__heredoc_body_beginning;
	v->a[93579] = state(2151);
	small_parse_table_4679(v);
}

void	small_parse_table_4679(t_small_parse_table_array *v)
{
	v->a[93580] = 1;
	v->a[93581] = sym_heredoc_body;
	v->a[93582] = state(1143);
	v->a[93583] = 2;
	v->a[93584] = sym__heredoc_body;
	v->a[93585] = sym__simple_heredoc_body;
	v->a[93586] = 2;
	v->a[93587] = actions(1404);
	v->a[93588] = 1;
	v->a[93589] = sym_comment;
	v->a[93590] = actions(1194);
	v->a[93591] = 4;
	v->a[93592] = sym__concat;
	v->a[93593] = anon_sym_PIPE;
	v->a[93594] = anon_sym_RPAREN;
	v->a[93595] = aux_sym_concatenation_token1;
	v->a[93596] = 2;
	v->a[93597] = actions(1404);
	v->a[93598] = 1;
	v->a[93599] = sym_comment;
	small_parse_table_4680(v);
}

/* EOF small_parse_table_935.c */
