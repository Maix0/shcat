/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_244.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1220(t_small_parse_table_array *v)
{
	v->a[24400] = sym_raw_string;
	v->a[24401] = aux_sym_number_token1;
	v->a[24402] = aux_sym_number_token2;
	v->a[24403] = anon_sym_DOLLAR_LBRACE;
	v->a[24404] = anon_sym_DOLLAR_LPAREN;
	v->a[24405] = anon_sym_BQUOTE;
	v->a[24406] = anon_sym_DOLLAR_BQUOTE;
	v->a[24407] = sym_word;
	v->a[24408] = anon_sym_SEMI;
	v->a[24409] = 3;
	v->a[24410] = actions(3);
	v->a[24411] = 1;
	v->a[24412] = sym_comment;
	v->a[24413] = actions(2654);
	v->a[24414] = 6;
	v->a[24415] = sym_file_descriptor;
	v->a[24416] = sym__concat;
	v->a[24417] = sym_variable_name;
	v->a[24418] = sym_test_operator;
	v->a[24419] = sym__brace_start;
	small_parse_table_1221(v);
}

void	small_parse_table_1221(t_small_parse_table_array *v)
{
	v->a[24420] = aux_sym_heredoc_redirect_token1;
	v->a[24421] = actions(2652);
	v->a[24422] = 36;
	v->a[24423] = anon_sym_esac;
	v->a[24424] = anon_sym_PIPE;
	v->a[24425] = anon_sym_SEMI_SEMI;
	v->a[24426] = anon_sym_SEMI_AMP;
	v->a[24427] = anon_sym_SEMI_SEMI_AMP;
	v->a[24428] = anon_sym_PIPE_AMP;
	v->a[24429] = anon_sym_AMP_AMP;
	v->a[24430] = anon_sym_PIPE_PIPE;
	v->a[24431] = anon_sym_LT;
	v->a[24432] = anon_sym_GT;
	v->a[24433] = anon_sym_GT_GT;
	v->a[24434] = anon_sym_AMP_GT;
	v->a[24435] = anon_sym_AMP_GT_GT;
	v->a[24436] = anon_sym_LT_AMP;
	v->a[24437] = anon_sym_GT_AMP;
	v->a[24438] = anon_sym_GT_PIPE;
	v->a[24439] = anon_sym_LT_AMP_DASH;
	small_parse_table_1222(v);
}

void	small_parse_table_1222(t_small_parse_table_array *v)
{
	v->a[24440] = anon_sym_GT_AMP_DASH;
	v->a[24441] = anon_sym_LT_LT;
	v->a[24442] = anon_sym_LT_LT_DASH;
	v->a[24443] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24444] = anon_sym_AMP;
	v->a[24445] = aux_sym_concatenation_token1;
	v->a[24446] = anon_sym_DOLLAR;
	v->a[24447] = sym__special_character;
	v->a[24448] = anon_sym_DQUOTE;
	v->a[24449] = sym_raw_string;
	v->a[24450] = aux_sym_number_token1;
	v->a[24451] = aux_sym_number_token2;
	v->a[24452] = anon_sym_DOLLAR_LBRACE;
	v->a[24453] = anon_sym_DOLLAR_LPAREN;
	v->a[24454] = anon_sym_BQUOTE;
	v->a[24455] = anon_sym_DOLLAR_BQUOTE;
	v->a[24456] = aux_sym__simple_variable_name_token1;
	v->a[24457] = sym_word;
	v->a[24458] = anon_sym_SEMI;
	v->a[24459] = 3;
	small_parse_table_1223(v);
}

void	small_parse_table_1223(t_small_parse_table_array *v)
{
	v->a[24460] = actions(3);
	v->a[24461] = 1;
	v->a[24462] = sym_comment;
	v->a[24463] = actions(2774);
	v->a[24464] = 6;
	v->a[24465] = sym_file_descriptor;
	v->a[24466] = sym__concat;
	v->a[24467] = sym_test_operator;
	v->a[24468] = sym__bare_dollar;
	v->a[24469] = sym__brace_start;
	v->a[24470] = aux_sym_heredoc_redirect_token1;
	v->a[24471] = actions(2772);
	v->a[24472] = 36;
	v->a[24473] = anon_sym_esac;
	v->a[24474] = anon_sym_LPAREN;
	v->a[24475] = anon_sym_PIPE;
	v->a[24476] = anon_sym_SEMI_SEMI;
	v->a[24477] = anon_sym_SEMI_AMP;
	v->a[24478] = anon_sym_SEMI_SEMI_AMP;
	v->a[24479] = anon_sym_PIPE_AMP;
	small_parse_table_1224(v);
}

void	small_parse_table_1224(t_small_parse_table_array *v)
{
	v->a[24480] = anon_sym_AMP_AMP;
	v->a[24481] = anon_sym_PIPE_PIPE;
	v->a[24482] = anon_sym_LT;
	v->a[24483] = anon_sym_GT;
	v->a[24484] = anon_sym_GT_GT;
	v->a[24485] = anon_sym_AMP_GT;
	v->a[24486] = anon_sym_AMP_GT_GT;
	v->a[24487] = anon_sym_LT_AMP;
	v->a[24488] = anon_sym_GT_AMP;
	v->a[24489] = anon_sym_GT_PIPE;
	v->a[24490] = anon_sym_LT_AMP_DASH;
	v->a[24491] = anon_sym_GT_AMP_DASH;
	v->a[24492] = anon_sym_LT_LT;
	v->a[24493] = anon_sym_LT_LT_DASH;
	v->a[24494] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24495] = anon_sym_AMP;
	v->a[24496] = aux_sym_concatenation_token1;
	v->a[24497] = anon_sym_DOLLAR;
	v->a[24498] = sym__special_character;
	v->a[24499] = anon_sym_DQUOTE;
	small_parse_table_1225(v);
}

/* EOF small_parse_table_244.c */
