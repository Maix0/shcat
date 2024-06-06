/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_674.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3370(t_small_parse_table_array *v)
{
	v->a[67400] = anon_sym_PERCENT;
	v->a[67401] = actions(4235);
	v->a[67402] = 10;
	v->a[67403] = anon_sym_PIPE;
	v->a[67404] = anon_sym_EQ;
	v->a[67405] = anon_sym_LT;
	v->a[67406] = anon_sym_GT;
	v->a[67407] = anon_sym_GT_GT;
	v->a[67408] = anon_sym_LT_LT;
	v->a[67409] = anon_sym_CARET;
	v->a[67410] = anon_sym_AMP;
	v->a[67411] = anon_sym_PLUS;
	v->a[67412] = anon_sym_DASH;
	v->a[67413] = actions(4237);
	v->a[67414] = 20;
	v->a[67415] = anon_sym_AMP_AMP;
	v->a[67416] = anon_sym_PIPE_PIPE;
	v->a[67417] = anon_sym_COMMA;
	v->a[67418] = anon_sym_RPAREN_RPAREN;
	v->a[67419] = anon_sym_PLUS_EQ;
	small_parse_table_3371(v);
}

void	small_parse_table_3371(t_small_parse_table_array *v)
{
	v->a[67420] = anon_sym_DASH_EQ;
	v->a[67421] = anon_sym_STAR_EQ;
	v->a[67422] = anon_sym_SLASH_EQ;
	v->a[67423] = anon_sym_PERCENT_EQ;
	v->a[67424] = anon_sym_LT_LT_EQ;
	v->a[67425] = anon_sym_GT_GT_EQ;
	v->a[67426] = anon_sym_AMP_EQ;
	v->a[67427] = anon_sym_CARET_EQ;
	v->a[67428] = anon_sym_PIPE_EQ;
	v->a[67429] = anon_sym_EQ_EQ;
	v->a[67430] = anon_sym_BANG_EQ;
	v->a[67431] = anon_sym_LT_EQ;
	v->a[67432] = anon_sym_GT_EQ;
	v->a[67433] = anon_sym_QMARK;
	v->a[67434] = anon_sym_COLON;
	v->a[67435] = 5;
	v->a[67436] = actions(57);
	v->a[67437] = 1;
	v->a[67438] = sym_comment;
	v->a[67439] = state(1437);
	small_parse_table_3372(v);
}

void	small_parse_table_3372(t_small_parse_table_array *v)
{
	v->a[67440] = 1;
	v->a[67441] = aux_sym_concatenation_repeat1;
	v->a[67442] = actions(4223);
	v->a[67443] = 2;
	v->a[67444] = sym__concat;
	v->a[67445] = aux_sym_concatenation_token1;
	v->a[67446] = actions(1180);
	v->a[67447] = 13;
	v->a[67448] = anon_sym_PIPE;
	v->a[67449] = anon_sym_LT;
	v->a[67450] = anon_sym_GT;
	v->a[67451] = anon_sym_AMP_GT;
	v->a[67452] = anon_sym_LT_AMP;
	v->a[67453] = anon_sym_GT_AMP;
	v->a[67454] = anon_sym_LT_LT;
	v->a[67455] = anon_sym_DOLLAR;
	v->a[67456] = aux_sym_number_token1;
	v->a[67457] = aux_sym_number_token2;
	v->a[67458] = anon_sym_DOLLAR_LPAREN;
	v->a[67459] = anon_sym_BQUOTE;
	small_parse_table_3373(v);
}

void	small_parse_table_3373(t_small_parse_table_array *v)
{
	v->a[67460] = sym_word;
	v->a[67461] = actions(1182);
	v->a[67462] = 19;
	v->a[67463] = sym_file_descriptor;
	v->a[67464] = sym_variable_name;
	v->a[67465] = sym_test_operator;
	v->a[67466] = sym__brace_start;
	v->a[67467] = anon_sym_PIPE_AMP;
	v->a[67468] = anon_sym_AMP_AMP;
	v->a[67469] = anon_sym_PIPE_PIPE;
	v->a[67470] = anon_sym_GT_GT;
	v->a[67471] = anon_sym_AMP_GT_GT;
	v->a[67472] = anon_sym_GT_PIPE;
	v->a[67473] = anon_sym_LT_AMP_DASH;
	v->a[67474] = anon_sym_GT_AMP_DASH;
	v->a[67475] = anon_sym_LT_LT_DASH;
	v->a[67476] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67477] = sym__special_character;
	v->a[67478] = anon_sym_DQUOTE;
	v->a[67479] = sym_raw_string;
	small_parse_table_3374(v);
}

void	small_parse_table_3374(t_small_parse_table_array *v)
{
	v->a[67480] = anon_sym_DOLLAR_LBRACE;
	v->a[67481] = anon_sym_DOLLAR_BQUOTE;
	v->a[67482] = 3;
	v->a[67483] = actions(57);
	v->a[67484] = 1;
	v->a[67485] = sym_comment;
	v->a[67486] = actions(2965);
	v->a[67487] = 14;
	v->a[67488] = anon_sym_PIPE;
	v->a[67489] = anon_sym_LT;
	v->a[67490] = anon_sym_GT;
	v->a[67491] = anon_sym_AMP_GT;
	v->a[67492] = anon_sym_LT_AMP;
	v->a[67493] = anon_sym_GT_AMP;
	v->a[67494] = anon_sym_LT_LT;
	v->a[67495] = anon_sym_DOLLAR;
	v->a[67496] = aux_sym_number_token1;
	v->a[67497] = aux_sym_number_token2;
	v->a[67498] = anon_sym_DOLLAR_LPAREN;
	v->a[67499] = anon_sym_BQUOTE;
	small_parse_table_3375(v);
}

/* EOF small_parse_table_674.c */
