/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1414.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7070(t_small_parse_table_array *v)
{
	v->a[141400] = anon_sym_PERCENT;
	v->a[141401] = anon_sym_STAR_STAR;
	v->a[141402] = actions(6842);
	v->a[141403] = 24;
	v->a[141404] = anon_sym_RPAREN_RPAREN;
	v->a[141405] = anon_sym_COMMA;
	v->a[141406] = anon_sym_PLUS_PLUS;
	v->a[141407] = anon_sym_DASH_DASH;
	v->a[141408] = anon_sym_PLUS_EQ;
	v->a[141409] = anon_sym_DASH_EQ;
	v->a[141410] = anon_sym_STAR_EQ;
	v->a[141411] = anon_sym_SLASH_EQ;
	v->a[141412] = anon_sym_PERCENT_EQ;
	v->a[141413] = anon_sym_STAR_STAR_EQ;
	v->a[141414] = anon_sym_LT_LT_EQ;
	v->a[141415] = anon_sym_GT_GT_EQ;
	v->a[141416] = anon_sym_AMP_EQ;
	v->a[141417] = anon_sym_CARET_EQ;
	v->a[141418] = anon_sym_PIPE_EQ;
	v->a[141419] = anon_sym_PIPE_PIPE;
	small_parse_table_7071(v);
}

void	small_parse_table_7071(t_small_parse_table_array *v)
{
	v->a[141420] = anon_sym_AMP_AMP;
	v->a[141421] = anon_sym_EQ_EQ;
	v->a[141422] = anon_sym_BANG_EQ;
	v->a[141423] = anon_sym_LT_EQ;
	v->a[141424] = anon_sym_GT_EQ;
	v->a[141425] = anon_sym_EQ_TILDE;
	v->a[141426] = anon_sym_QMARK;
	v->a[141427] = anon_sym_COLON;
	v->a[141428] = 8;
	v->a[141429] = actions(3);
	v->a[141430] = 1;
	v->a[141431] = sym_comment;
	v->a[141432] = actions(1241);
	v->a[141433] = 1;
	v->a[141434] = sym_file_descriptor;
	v->a[141435] = actions(2867);
	v->a[141436] = 1;
	v->a[141437] = anon_sym_DQUOTE;
	v->a[141438] = actions(6852);
	v->a[141439] = 1;
	small_parse_table_7072(v);
}

void	small_parse_table_7072(t_small_parse_table_array *v)
{
	v->a[141440] = sym_variable_name;
	v->a[141441] = state(4263);
	v->a[141442] = 1;
	v->a[141443] = sym_string;
	v->a[141444] = actions(6850);
	v->a[141445] = 2;
	v->a[141446] = aux_sym__simple_variable_name_token1;
	v->a[141447] = aux_sym__multiline_variable_name_token1;
	v->a[141448] = actions(6848);
	v->a[141449] = 9;
	v->a[141450] = anon_sym_DASH;
	v->a[141451] = anon_sym_STAR;
	v->a[141452] = anon_sym_BANG;
	v->a[141453] = anon_sym_QMARK;
	v->a[141454] = anon_sym_DOLLAR;
	v->a[141455] = anon_sym_POUND;
	v->a[141456] = anon_sym_AT2;
	v->a[141457] = anon_sym_0;
	v->a[141458] = anon_sym__;
	v->a[141459] = actions(1239);
	small_parse_table_7073(v);
}

void	small_parse_table_7073(t_small_parse_table_array *v)
{
	v->a[141460] = 24;
	v->a[141461] = anon_sym_SEMI;
	v->a[141462] = anon_sym_PIPE_PIPE;
	v->a[141463] = anon_sym_AMP_AMP;
	v->a[141464] = anon_sym_PIPE;
	v->a[141465] = anon_sym_AMP;
	v->a[141466] = anon_sym_LT;
	v->a[141467] = anon_sym_GT;
	v->a[141468] = anon_sym_LT_LT;
	v->a[141469] = anon_sym_GT_GT;
	v->a[141470] = anon_sym_esac;
	v->a[141471] = anon_sym_SEMI_SEMI;
	v->a[141472] = anon_sym_SEMI_AMP;
	v->a[141473] = anon_sym_SEMI_SEMI_AMP;
	v->a[141474] = anon_sym_PIPE_AMP;
	v->a[141475] = anon_sym_AMP_GT;
	v->a[141476] = anon_sym_AMP_GT_GT;
	v->a[141477] = anon_sym_LT_AMP;
	v->a[141478] = anon_sym_GT_AMP;
	v->a[141479] = anon_sym_GT_PIPE;
	small_parse_table_7074(v);
}

void	small_parse_table_7074(t_small_parse_table_array *v)
{
	v->a[141480] = anon_sym_LT_AMP_DASH;
	v->a[141481] = anon_sym_GT_AMP_DASH;
	v->a[141482] = anon_sym_LT_LT_DASH;
	v->a[141483] = aux_sym_heredoc_redirect_token1;
	v->a[141484] = anon_sym_LT_LT_LT;
	v->a[141485] = 8;
	v->a[141486] = actions(3);
	v->a[141487] = 1;
	v->a[141488] = sym_comment;
	v->a[141489] = actions(1235);
	v->a[141490] = 1;
	v->a[141491] = sym_file_descriptor;
	v->a[141492] = actions(2867);
	v->a[141493] = 1;
	v->a[141494] = anon_sym_DQUOTE;
	v->a[141495] = actions(6852);
	v->a[141496] = 1;
	v->a[141497] = sym_variable_name;
	v->a[141498] = state(4263);
	v->a[141499] = 1;
	small_parse_table_7075(v);
}

/* EOF small_parse_table_1414.c */
