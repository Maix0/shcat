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
	v->a[93500] = aux_sym_if_statement_repeat1;
	v->a[93501] = 6;
	v->a[93502] = actions(1074);
	v->a[93503] = 1;
	v->a[93504] = sym_comment;
	v->a[93505] = actions(3986);
	v->a[93506] = 1;
	v->a[93507] = anon_sym_PIPE;
	v->a[93508] = actions(4004);
	v->a[93509] = 1;
	v->a[93510] = anon_sym_RPAREN;
	v->a[93511] = state(2031);
	v->a[93512] = 1;
	v->a[93513] = aux_sym_concatenation_repeat1;
	v->a[93514] = state(2085);
	v->a[93515] = 1;
	v->a[93516] = aux_sym__case_item_last_repeat1;
	v->a[93517] = actions(3990);
	v->a[93518] = 2;
	v->a[93519] = sym__concat;
	small_parse_table_4676(v);
}

void	small_parse_table_4676(t_small_parse_table_array *v)
{
	v->a[93520] = aux_sym_concatenation_token1;
	v->a[93521] = 3;
	v->a[93522] = actions(1042);
	v->a[93523] = 1;
	v->a[93524] = anon_sym_DOLLAR;
	v->a[93525] = actions(1074);
	v->a[93526] = 1;
	v->a[93527] = sym_comment;
	v->a[93528] = actions(1044);
	v->a[93529] = 5;
	v->a[93530] = sym_heredoc_content;
	v->a[93531] = sym_heredoc_end;
	v->a[93532] = anon_sym_DOLLAR_LBRACE;
	v->a[93533] = anon_sym_DOLLAR_LPAREN;
	v->a[93534] = anon_sym_BQUOTE;
	v->a[93535] = 3;
	v->a[93536] = actions(1074);
	v->a[93537] = 1;
	v->a[93538] = sym_comment;
	v->a[93539] = actions(1120);
	small_parse_table_4677(v);
}

void	small_parse_table_4677(t_small_parse_table_array *v)
{
	v->a[93540] = 1;
	v->a[93541] = anon_sym_DOLLAR;
	v->a[93542] = actions(1122);
	v->a[93543] = 5;
	v->a[93544] = sym_heredoc_content;
	v->a[93545] = sym_heredoc_end;
	v->a[93546] = anon_sym_DOLLAR_LBRACE;
	v->a[93547] = anon_sym_DOLLAR_LPAREN;
	v->a[93548] = anon_sym_BQUOTE;
	v->a[93549] = 3;
	v->a[93550] = actions(3);
	v->a[93551] = 1;
	v->a[93552] = sym_comment;
	v->a[93553] = actions(1100);
	v->a[93554] = 2;
	v->a[93555] = sym_regex;
	v->a[93556] = aux_sym_expansion_regex_token1;
	v->a[93557] = actions(1098);
	v->a[93558] = 4;
	v->a[93559] = anon_sym_RPAREN;
	small_parse_table_4678(v);
}

void	small_parse_table_4678(t_small_parse_table_array *v)
{
	v->a[93560] = anon_sym_RBRACE;
	v->a[93561] = anon_sym_DQUOTE;
	v->a[93562] = sym_raw_string;
	v->a[93563] = 3;
	v->a[93564] = actions(3);
	v->a[93565] = 1;
	v->a[93566] = sym_comment;
	v->a[93567] = actions(4008);
	v->a[93568] = 2;
	v->a[93569] = sym_regex;
	v->a[93570] = aux_sym_expansion_regex_token1;
	v->a[93571] = actions(4006);
	v->a[93572] = 4;
	v->a[93573] = anon_sym_RPAREN;
	v->a[93574] = anon_sym_RBRACE;
	v->a[93575] = anon_sym_DQUOTE;
	v->a[93576] = sym_raw_string;
	v->a[93577] = 5;
	v->a[93578] = actions(3);
	v->a[93579] = 1;
	small_parse_table_4679(v);
}

void	small_parse_table_4679(t_small_parse_table_array *v)
{
	v->a[93580] = sym_comment;
	v->a[93581] = actions(3905);
	v->a[93582] = 1;
	v->a[93583] = anon_sym_in;
	v->a[93584] = actions(3907);
	v->a[93585] = 1;
	v->a[93586] = aux_sym_heredoc_redirect_token1;
	v->a[93587] = state(2176);
	v->a[93588] = 1;
	v->a[93589] = sym_terminator;
	v->a[93590] = actions(2481);
	v->a[93591] = 3;
	v->a[93592] = anon_sym_SEMI_SEMI;
	v->a[93593] = anon_sym_AMP;
	v->a[93594] = anon_sym_SEMI;
	v->a[93595] = 3;
	v->a[93596] = actions(3);
	v->a[93597] = 1;
	v->a[93598] = sym_comment;
	v->a[93599] = actions(1070);
	small_parse_table_4680(v);
}

/* EOF small_parse_table_935.c */
