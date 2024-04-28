/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2404.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12020(t_small_parse_table_array *v)
{
	v->a[240400] = anon_sym_SEMI_SEMI;
	v->a[240401] = anon_sym_SEMI_AMP;
	v->a[240402] = anon_sym_SEMI_SEMI_AMP;
	v->a[240403] = anon_sym_PIPE_AMP;
	v->a[240404] = anon_sym_AMP_GT;
	v->a[240405] = anon_sym_AMP_GT_GT;
	v->a[240406] = anon_sym_LT_AMP;
	v->a[240407] = anon_sym_GT_AMP;
	v->a[240408] = anon_sym_GT_PIPE;
	v->a[240409] = anon_sym_LT_AMP_DASH;
	v->a[240410] = anon_sym_GT_AMP_DASH;
	v->a[240411] = anon_sym_LT_LT_DASH;
	v->a[240412] = 8;
	v->a[240413] = actions(3);
	v->a[240414] = 1;
	v->a[240415] = sym_comment;
	v->a[240416] = actions(11315);
	v->a[240417] = 1;
	v->a[240418] = aux_sym_heredoc_redirect_token1;
	v->a[240419] = actions(11317);
	small_parse_table_12021(v);
}

void	small_parse_table_12021(t_small_parse_table_array *v)
{
	v->a[240420] = 1;
	v->a[240421] = anon_sym_LT_LT_LT;
	v->a[240422] = actions(11320);
	v->a[240423] = 1;
	v->a[240424] = sym_file_descriptor;
	v->a[240425] = actions(11312);
	v->a[240426] = 2;
	v->a[240427] = anon_sym_LT_AMP_DASH;
	v->a[240428] = anon_sym_GT_AMP_DASH;
	v->a[240429] = state(4235);
	v->a[240430] = 3;
	v->a[240431] = sym_file_redirect;
	v->a[240432] = sym_herestring_redirect;
	v->a[240433] = aux_sym_redirected_statement_repeat2;
	v->a[240434] = actions(11309);
	v->a[240435] = 8;
	v->a[240436] = anon_sym_LT;
	v->a[240437] = anon_sym_GT;
	v->a[240438] = anon_sym_GT_GT;
	v->a[240439] = anon_sym_AMP_GT;
	small_parse_table_12022(v);
}

void	small_parse_table_12022(t_small_parse_table_array *v)
{
	v->a[240440] = anon_sym_AMP_GT_GT;
	v->a[240441] = anon_sym_LT_AMP;
	v->a[240442] = anon_sym_GT_AMP;
	v->a[240443] = anon_sym_GT_PIPE;
	v->a[240444] = actions(11307);
	v->a[240445] = 12;
	v->a[240446] = anon_sym_SEMI;
	v->a[240447] = anon_sym_PIPE_PIPE;
	v->a[240448] = anon_sym_AMP_AMP;
	v->a[240449] = anon_sym_PIPE;
	v->a[240450] = anon_sym_AMP;
	v->a[240451] = anon_sym_LT_LT;
	v->a[240452] = anon_sym_esac;
	v->a[240453] = anon_sym_SEMI_SEMI;
	v->a[240454] = anon_sym_SEMI_AMP;
	v->a[240455] = anon_sym_SEMI_SEMI_AMP;
	v->a[240456] = anon_sym_PIPE_AMP;
	v->a[240457] = anon_sym_LT_LT_DASH;
	v->a[240458] = 21;
	v->a[240459] = actions(3);
	small_parse_table_12023(v);
}

void	small_parse_table_12023(t_small_parse_table_array *v)
{
	v->a[240460] = 1;
	v->a[240461] = sym_comment;
	v->a[240462] = actions(11250);
	v->a[240463] = 1;
	v->a[240464] = anon_sym_LPAREN;
	v->a[240465] = actions(11252);
	v->a[240466] = 1;
	v->a[240467] = aux_sym__c_word_token1;
	v->a[240468] = actions(11256);
	v->a[240469] = 1;
	v->a[240470] = anon_sym_DOLLAR;
	v->a[240471] = actions(11258);
	v->a[240472] = 1;
	v->a[240473] = anon_sym_DQUOTE;
	v->a[240474] = actions(11260);
	v->a[240475] = 1;
	v->a[240476] = aux_sym_number_token1;
	v->a[240477] = actions(11262);
	v->a[240478] = 1;
	v->a[240479] = aux_sym_number_token2;
	small_parse_table_12024(v);
}

void	small_parse_table_12024(t_small_parse_table_array *v)
{
	v->a[240480] = actions(11264);
	v->a[240481] = 1;
	v->a[240482] = anon_sym_DOLLAR_LBRACE;
	v->a[240483] = actions(11266);
	v->a[240484] = 1;
	v->a[240485] = anon_sym_DOLLAR_LPAREN;
	v->a[240486] = actions(11268);
	v->a[240487] = 1;
	v->a[240488] = anon_sym_BQUOTE;
	v->a[240489] = actions(11270);
	v->a[240490] = 1;
	v->a[240491] = anon_sym_DOLLAR_BQUOTE;
	v->a[240492] = actions(11325);
	v->a[240493] = 1;
	v->a[240494] = aux_sym_heredoc_redirect_token1;
	v->a[240495] = state(3113);
	v->a[240496] = 1;
	v->a[240497] = sym__c_postfix_expression;
	v->a[240498] = state(3116);
	v->a[240499] = 1;
	small_parse_table_12025(v);
}

/* EOF small_parse_table_2404.c */
