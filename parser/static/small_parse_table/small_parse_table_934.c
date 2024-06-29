/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_934.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4670(t_small_parse_table_array *v)
{
	v->a[93400] = aux_sym_if_statement_repeat1;
	v->a[93401] = 6;
	v->a[93402] = actions(1074);
	v->a[93403] = 1;
	v->a[93404] = sym_comment;
	v->a[93405] = actions(3986);
	v->a[93406] = 1;
	v->a[93407] = anon_sym_PIPE;
	v->a[93408] = actions(4000);
	v->a[93409] = 1;
	v->a[93410] = anon_sym_RPAREN;
	v->a[93411] = state(2031);
	v->a[93412] = 1;
	v->a[93413] = aux_sym_concatenation_repeat1;
	v->a[93414] = state(2098);
	v->a[93415] = 1;
	v->a[93416] = aux_sym__case_item_last_repeat1;
	v->a[93417] = actions(3990);
	v->a[93418] = 2;
	v->a[93419] = sym__concat;
	small_parse_table_4671(v);
}

void	small_parse_table_4671(t_small_parse_table_array *v)
{
	v->a[93420] = aux_sym_concatenation_token1;
	v->a[93421] = 5;
	v->a[93422] = actions(3);
	v->a[93423] = 1;
	v->a[93424] = sym_comment;
	v->a[93425] = actions(3907);
	v->a[93426] = 1;
	v->a[93427] = aux_sym_heredoc_redirect_token1;
	v->a[93428] = actions(3925);
	v->a[93429] = 1;
	v->a[93430] = anon_sym_in;
	v->a[93431] = state(2308);
	v->a[93432] = 1;
	v->a[93433] = sym_terminator;
	v->a[93434] = actions(2481);
	v->a[93435] = 3;
	v->a[93436] = anon_sym_SEMI_SEMI;
	v->a[93437] = anon_sym_AMP;
	v->a[93438] = anon_sym_SEMI;
	v->a[93439] = 3;
	small_parse_table_4672(v);
}

void	small_parse_table_4672(t_small_parse_table_array *v)
{
	v->a[93440] = actions(1074);
	v->a[93441] = 1;
	v->a[93442] = sym_comment;
	v->a[93443] = actions(1112);
	v->a[93444] = 1;
	v->a[93445] = anon_sym_DOLLAR;
	v->a[93446] = actions(1114);
	v->a[93447] = 5;
	v->a[93448] = sym_heredoc_content;
	v->a[93449] = sym_heredoc_end;
	v->a[93450] = anon_sym_DOLLAR_LBRACE;
	v->a[93451] = anon_sym_DOLLAR_LPAREN;
	v->a[93452] = anon_sym_BQUOTE;
	v->a[93453] = 3;
	v->a[93454] = actions(1046);
	v->a[93455] = 1;
	v->a[93456] = anon_sym_DOLLAR;
	v->a[93457] = actions(1074);
	v->a[93458] = 1;
	v->a[93459] = sym_comment;
	small_parse_table_4673(v);
}

void	small_parse_table_4673(t_small_parse_table_array *v)
{
	v->a[93460] = actions(1048);
	v->a[93461] = 5;
	v->a[93462] = sym_heredoc_content;
	v->a[93463] = sym_heredoc_end;
	v->a[93464] = anon_sym_DOLLAR_LBRACE;
	v->a[93465] = anon_sym_DOLLAR_LPAREN;
	v->a[93466] = anon_sym_BQUOTE;
	v->a[93467] = 3;
	v->a[93468] = actions(3);
	v->a[93469] = 1;
	v->a[93470] = sym_comment;
	v->a[93471] = actions(1126);
	v->a[93472] = 2;
	v->a[93473] = sym_regex;
	v->a[93474] = aux_sym_expansion_regex_token1;
	v->a[93475] = actions(1124);
	v->a[93476] = 4;
	v->a[93477] = anon_sym_RPAREN;
	v->a[93478] = anon_sym_RBRACE;
	v->a[93479] = anon_sym_DQUOTE;
	small_parse_table_4674(v);
}

void	small_parse_table_4674(t_small_parse_table_array *v)
{
	v->a[93480] = sym_raw_string;
	v->a[93481] = 6;
	v->a[93482] = actions(1074);
	v->a[93483] = 1;
	v->a[93484] = sym_comment;
	v->a[93485] = actions(3982);
	v->a[93486] = 1;
	v->a[93487] = anon_sym_elif;
	v->a[93488] = actions(3984);
	v->a[93489] = 1;
	v->a[93490] = anon_sym_else;
	v->a[93491] = actions(4002);
	v->a[93492] = 1;
	v->a[93493] = anon_sym_fi;
	v->a[93494] = state(2160);
	v->a[93495] = 1;
	v->a[93496] = sym_else_clause;
	v->a[93497] = state(2065);
	v->a[93498] = 2;
	v->a[93499] = sym_elif_clause;
	small_parse_table_4675(v);
}

/* EOF small_parse_table_934.c */
