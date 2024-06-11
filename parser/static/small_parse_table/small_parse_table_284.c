/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_284.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1420(t_small_parse_table_array *v)
{
	v->a[28400] = anon_sym_PIPE_PIPE;
	v->a[28401] = anon_sym_RPAREN_RPAREN;
	v->a[28402] = anon_sym_PLUS_EQ;
	v->a[28403] = anon_sym_DASH_EQ;
	v->a[28404] = anon_sym_STAR_EQ;
	v->a[28405] = anon_sym_SLASH_EQ;
	v->a[28406] = anon_sym_PERCENT_EQ;
	v->a[28407] = anon_sym_LT_LT_EQ;
	v->a[28408] = anon_sym_GT_GT_EQ;
	v->a[28409] = anon_sym_AMP_EQ;
	v->a[28410] = anon_sym_CARET_EQ;
	v->a[28411] = anon_sym_PIPE_EQ;
	v->a[28412] = anon_sym_EQ_EQ;
	v->a[28413] = anon_sym_BANG_EQ;
	v->a[28414] = anon_sym_LT_EQ;
	v->a[28415] = anon_sym_GT_EQ;
	v->a[28416] = anon_sym_QMARK;
	v->a[28417] = anon_sym_COLON;
	v->a[28418] = 6;
	v->a[28419] = actions(3);
	small_parse_table_1421(v);
}

void	small_parse_table_1421(t_small_parse_table_array *v)
{
	v->a[28420] = 1;
	v->a[28421] = sym_comment;
	v->a[28422] = actions(1096);
	v->a[28423] = 1;
	v->a[28424] = aux_sym_concatenation_token1;
	v->a[28425] = actions(1098);
	v->a[28426] = 1;
	v->a[28427] = sym__concat;
	v->a[28428] = state(349);
	v->a[28429] = 1;
	v->a[28430] = aux_sym_concatenation_repeat1;
	v->a[28431] = actions(608);
	v->a[28432] = 3;
	v->a[28433] = sym_file_descriptor;
	v->a[28434] = sym_variable_name;
	v->a[28435] = ts_builtin_sym_end;
	v->a[28436] = actions(610);
	v->a[28437] = 28;
	v->a[28438] = anon_sym_PIPE;
	v->a[28439] = anon_sym_SEMI_SEMI;
	small_parse_table_1422(v);
}

void	small_parse_table_1422(t_small_parse_table_array *v)
{
	v->a[28440] = anon_sym_AMP_AMP;
	v->a[28441] = anon_sym_PIPE_PIPE;
	v->a[28442] = anon_sym_LT;
	v->a[28443] = anon_sym_GT;
	v->a[28444] = anon_sym_GT_GT;
	v->a[28445] = anon_sym_AMP_GT;
	v->a[28446] = anon_sym_AMP_GT_GT;
	v->a[28447] = anon_sym_LT_AMP;
	v->a[28448] = anon_sym_GT_AMP;
	v->a[28449] = anon_sym_GT_PIPE;
	v->a[28450] = anon_sym_LT_AMP_DASH;
	v->a[28451] = anon_sym_GT_AMP_DASH;
	v->a[28452] = anon_sym_LT_LT;
	v->a[28453] = anon_sym_LT_LT_DASH;
	v->a[28454] = aux_sym_heredoc_redirect_token1;
	v->a[28455] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28456] = anon_sym_AMP;
	v->a[28457] = anon_sym_DOLLAR;
	v->a[28458] = anon_sym_DQUOTE;
	v->a[28459] = sym_raw_string;
	small_parse_table_1423(v);
}

void	small_parse_table_1423(t_small_parse_table_array *v)
{
	v->a[28460] = sym_number;
	v->a[28461] = anon_sym_DOLLAR_LBRACE;
	v->a[28462] = anon_sym_DOLLAR_LPAREN;
	v->a[28463] = anon_sym_BQUOTE;
	v->a[28464] = sym_word;
	v->a[28465] = anon_sym_SEMI;
	v->a[28466] = 4;
	v->a[28467] = actions(1094);
	v->a[28468] = 1;
	v->a[28469] = sym_comment;
	v->a[28470] = actions(1092);
	v->a[28471] = 2;
	v->a[28472] = anon_sym_PLUS_PLUS2;
	v->a[28473] = anon_sym_DASH_DASH2;
	v->a[28474] = actions(1078);
	v->a[28475] = 13;
	v->a[28476] = anon_sym_PIPE;
	v->a[28477] = anon_sym_EQ;
	v->a[28478] = anon_sym_LT;
	v->a[28479] = anon_sym_GT;
	small_parse_table_1424(v);
}

void	small_parse_table_1424(t_small_parse_table_array *v)
{
	v->a[28480] = anon_sym_GT_GT;
	v->a[28481] = anon_sym_LT_LT;
	v->a[28482] = anon_sym_CARET;
	v->a[28483] = anon_sym_AMP;
	v->a[28484] = anon_sym_PLUS;
	v->a[28485] = anon_sym_DASH;
	v->a[28486] = anon_sym_STAR;
	v->a[28487] = anon_sym_SLASH;
	v->a[28488] = anon_sym_PERCENT;
	v->a[28489] = actions(1080);
	v->a[28490] = 19;
	v->a[28491] = anon_sym_AMP_AMP;
	v->a[28492] = anon_sym_PIPE_PIPE;
	v->a[28493] = anon_sym_RPAREN_RPAREN;
	v->a[28494] = anon_sym_PLUS_EQ;
	v->a[28495] = anon_sym_DASH_EQ;
	v->a[28496] = anon_sym_STAR_EQ;
	v->a[28497] = anon_sym_SLASH_EQ;
	v->a[28498] = anon_sym_PERCENT_EQ;
	v->a[28499] = anon_sym_LT_LT_EQ;
	small_parse_table_1425(v);
}

/* EOF small_parse_table_284.c */
