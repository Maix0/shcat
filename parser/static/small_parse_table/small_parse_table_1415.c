/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1415.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7075(t_small_parse_table_array *v)
{
	v->a[141500] = actions(2908);
	v->a[141501] = 1;
	v->a[141502] = sym__concat;
	v->a[141503] = actions(2906);
	v->a[141504] = 8;
	v->a[141505] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[141506] = anon_sym_DOLLAR;
	v->a[141507] = anon_sym_DQUOTE;
	v->a[141508] = sym_string_content;
	v->a[141509] = anon_sym_DOLLAR_LBRACE;
	v->a[141510] = anon_sym_DOLLAR_LPAREN;
	v->a[141511] = anon_sym_BQUOTE;
	v->a[141512] = anon_sym_DOLLAR_BQUOTE;
	v->a[141513] = 7;
	v->a[141514] = actions(3);
	v->a[141515] = 1;
	v->a[141516] = sym_comment;
	v->a[141517] = actions(8385);
	v->a[141518] = 1;
	v->a[141519] = aux_sym_concatenation_token1;
	small_parse_table_7076(v);
}

void	small_parse_table_7076(t_small_parse_table_array *v)
{
	v->a[141520] = actions(8387);
	v->a[141521] = 1;
	v->a[141522] = sym__concat;
	v->a[141523] = actions(8389);
	v->a[141524] = 1;
	v->a[141525] = anon_sym_in;
	v->a[141526] = actions(8393);
	v->a[141527] = 1;
	v->a[141528] = aux_sym_heredoc_redirect_token1;
	v->a[141529] = state(3228);
	v->a[141530] = 1;
	v->a[141531] = aux_sym_concatenation_repeat1;
	v->a[141532] = actions(8391);
	v->a[141533] = 3;
	v->a[141534] = anon_sym_SEMI_SEMI;
	v->a[141535] = anon_sym_AMP;
	v->a[141536] = anon_sym_SEMI;
	v->a[141537] = 8;
	v->a[141538] = actions(3);
	v->a[141539] = 1;
	small_parse_table_7077(v);
}

void	small_parse_table_7077(t_small_parse_table_array *v)
{
	v->a[141540] = sym_comment;
	v->a[141541] = actions(8395);
	v->a[141542] = 1;
	v->a[141543] = anon_sym_RPAREN;
	v->a[141544] = actions(8398);
	v->a[141545] = 1;
	v->a[141546] = anon_sym_DQUOTE;
	v->a[141547] = actions(8401);
	v->a[141548] = 1;
	v->a[141549] = sym_raw_string;
	v->a[141550] = actions(8404);
	v->a[141551] = 1;
	v->a[141552] = anon_sym_RBRACE3;
	v->a[141553] = actions(8406);
	v->a[141554] = 1;
	v->a[141555] = aux_sym__expansion_regex_token1;
	v->a[141556] = actions(8409);
	v->a[141557] = 1;
	v->a[141558] = sym_regex;
	v->a[141559] = state(3227);
	small_parse_table_7078(v);
}

void	small_parse_table_7078(t_small_parse_table_array *v)
{
	v->a[141560] = 2;
	v->a[141561] = sym_string;
	v->a[141562] = aux_sym__expansion_regex_repeat1;
	v->a[141563] = 6;
	v->a[141564] = actions(3);
	v->a[141565] = 1;
	v->a[141566] = sym_comment;
	v->a[141567] = actions(2690);
	v->a[141568] = 1;
	v->a[141569] = aux_sym_heredoc_redirect_token1;
	v->a[141570] = actions(8385);
	v->a[141571] = 1;
	v->a[141572] = aux_sym_concatenation_token1;
	v->a[141573] = actions(8412);
	v->a[141574] = 1;
	v->a[141575] = sym__concat;
	v->a[141576] = state(3231);
	v->a[141577] = 1;
	v->a[141578] = aux_sym_concatenation_repeat1;
	v->a[141579] = actions(2688);
	small_parse_table_7079(v);
}

void	small_parse_table_7079(t_small_parse_table_array *v)
{
	v->a[141580] = 4;
	v->a[141581] = anon_sym_in;
	v->a[141582] = anon_sym_SEMI_SEMI;
	v->a[141583] = anon_sym_AMP;
	v->a[141584] = anon_sym_SEMI;
	v->a[141585] = 2;
	v->a[141586] = actions(3);
	v->a[141587] = 1;
	v->a[141588] = sym_comment;
	v->a[141589] = actions(8414);
	v->a[141590] = 8;
	v->a[141591] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[141592] = anon_sym_DOLLAR;
	v->a[141593] = anon_sym_DQUOTE;
	v->a[141594] = sym_string_content;
	v->a[141595] = anon_sym_DOLLAR_LBRACE;
	v->a[141596] = anon_sym_DOLLAR_LPAREN;
	v->a[141597] = anon_sym_BQUOTE;
	v->a[141598] = anon_sym_DOLLAR_BQUOTE;
	v->a[141599] = 7;
	small_parse_table_7080(v);
}

/* EOF small_parse_table_1415.c */
