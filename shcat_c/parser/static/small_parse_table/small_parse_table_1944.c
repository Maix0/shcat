/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1944.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9720(t_small_parse_table_array *v)
{
	v->a[194400] = sym_string;
	v->a[194401] = actions(7675);
	v->a[194402] = 2;
	v->a[194403] = aux_sym__simple_variable_name_token1;
	v->a[194404] = aux_sym__multiline_variable_name_token1;
	v->a[194405] = actions(7671);
	v->a[194406] = 9;
	v->a[194407] = anon_sym_DASH;
	v->a[194408] = anon_sym_STAR;
	v->a[194409] = anon_sym_BANG;
	v->a[194410] = anon_sym_QMARK;
	v->a[194411] = anon_sym_DOLLAR;
	v->a[194412] = anon_sym_POUND;
	v->a[194413] = anon_sym_AT2;
	v->a[194414] = anon_sym_0;
	v->a[194415] = anon_sym__;
	v->a[194416] = actions(1227);
	v->a[194417] = 17;
	v->a[194418] = anon_sym_PIPE_PIPE;
	v->a[194419] = anon_sym_AMP_AMP;
	small_parse_table_9721(v);
}

void	small_parse_table_9721(t_small_parse_table_array *v)
{
	v->a[194420] = anon_sym_PIPE;
	v->a[194421] = anon_sym_LT;
	v->a[194422] = anon_sym_GT;
	v->a[194423] = anon_sym_LT_LT;
	v->a[194424] = anon_sym_GT_GT;
	v->a[194425] = anon_sym_PIPE_AMP;
	v->a[194426] = anon_sym_AMP_GT;
	v->a[194427] = anon_sym_AMP_GT_GT;
	v->a[194428] = anon_sym_LT_AMP;
	v->a[194429] = anon_sym_GT_AMP;
	v->a[194430] = anon_sym_GT_PIPE;
	v->a[194431] = anon_sym_LT_AMP_DASH;
	v->a[194432] = anon_sym_GT_AMP_DASH;
	v->a[194433] = anon_sym_LT_LT_DASH;
	v->a[194434] = aux_sym_heredoc_redirect_token1;
	v->a[194435] = 8;
	v->a[194436] = actions(3);
	v->a[194437] = 1;
	v->a[194438] = sym_comment;
	v->a[194439] = actions(1241);
	small_parse_table_9722(v);
}

void	small_parse_table_9722(t_small_parse_table_array *v)
{
	v->a[194440] = 1;
	v->a[194441] = sym_file_descriptor;
	v->a[194442] = actions(8714);
	v->a[194443] = 1;
	v->a[194444] = anon_sym_DQUOTE;
	v->a[194445] = actions(8718);
	v->a[194446] = 1;
	v->a[194447] = sym_variable_name;
	v->a[194448] = state(5444);
	v->a[194449] = 1;
	v->a[194450] = sym_string;
	v->a[194451] = actions(8716);
	v->a[194452] = 2;
	v->a[194453] = aux_sym__simple_variable_name_token1;
	v->a[194454] = aux_sym__multiline_variable_name_token1;
	v->a[194455] = actions(8712);
	v->a[194456] = 9;
	v->a[194457] = anon_sym_DASH;
	v->a[194458] = anon_sym_STAR;
	v->a[194459] = anon_sym_BANG;
	small_parse_table_9723(v);
}

void	small_parse_table_9723(t_small_parse_table_array *v)
{
	v->a[194460] = anon_sym_QMARK;
	v->a[194461] = anon_sym_DOLLAR;
	v->a[194462] = anon_sym_POUND;
	v->a[194463] = anon_sym_AT2;
	v->a[194464] = anon_sym_0;
	v->a[194465] = anon_sym__;
	v->a[194466] = actions(1239);
	v->a[194467] = 17;
	v->a[194468] = anon_sym_PIPE_PIPE;
	v->a[194469] = anon_sym_AMP_AMP;
	v->a[194470] = anon_sym_PIPE;
	v->a[194471] = anon_sym_LT;
	v->a[194472] = anon_sym_GT;
	v->a[194473] = anon_sym_LT_LT;
	v->a[194474] = anon_sym_GT_GT;
	v->a[194475] = anon_sym_PIPE_AMP;
	v->a[194476] = anon_sym_AMP_GT;
	v->a[194477] = anon_sym_AMP_GT_GT;
	v->a[194478] = anon_sym_LT_AMP;
	v->a[194479] = anon_sym_GT_AMP;
	small_parse_table_9724(v);
}

void	small_parse_table_9724(t_small_parse_table_array *v)
{
	v->a[194480] = anon_sym_GT_PIPE;
	v->a[194481] = anon_sym_LT_AMP_DASH;
	v->a[194482] = anon_sym_GT_AMP_DASH;
	v->a[194483] = anon_sym_LT_LT_DASH;
	v->a[194484] = anon_sym_LT_LT_LT;
	v->a[194485] = 3;
	v->a[194486] = actions(71);
	v->a[194487] = 1;
	v->a[194488] = sym_comment;
	v->a[194489] = actions(5819);
	v->a[194490] = 10;
	v->a[194491] = anon_sym_LT;
	v->a[194492] = anon_sym_GT;
	v->a[194493] = anon_sym_AMP_GT;
	v->a[194494] = anon_sym_LT_AMP;
	v->a[194495] = anon_sym_GT_AMP;
	v->a[194496] = anon_sym_DOLLAR;
	v->a[194497] = aux_sym_number_token1;
	v->a[194498] = aux_sym_number_token2;
	v->a[194499] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9725(v);
}

/* EOF small_parse_table_1944.c */
