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
	v->a[24400] = aux_sym_number_token1;
	v->a[24401] = actions(805);
	v->a[24402] = 1;
	v->a[24403] = aux_sym_number_token2;
	v->a[24404] = actions(807);
	v->a[24405] = 1;
	v->a[24406] = anon_sym_DOLLAR_LBRACE;
	v->a[24407] = actions(809);
	v->a[24408] = 1;
	v->a[24409] = anon_sym_DOLLAR_LPAREN;
	v->a[24410] = actions(811);
	v->a[24411] = 1;
	v->a[24412] = anon_sym_BQUOTE;
	v->a[24413] = actions(795);
	v->a[24414] = 2;
	v->a[24415] = sym_raw_string;
	v->a[24416] = sym_word;
	v->a[24417] = state(223);
	v->a[24418] = 2;
	v->a[24419] = sym_concatenation;
	small_parse_table_1221(v);
}

void	small_parse_table_1221(t_small_parse_table_array *v)
{
	v->a[24420] = aux_sym_for_statement_repeat1;
	v->a[24421] = state(424);
	v->a[24422] = 6;
	v->a[24423] = sym_arithmetic_expansion;
	v->a[24424] = sym_string;
	v->a[24425] = sym_number;
	v->a[24426] = sym_simple_expansion;
	v->a[24427] = sym_expansion;
	v->a[24428] = sym_command_substitution;
	v->a[24429] = actions(567);
	v->a[24430] = 20;
	v->a[24431] = anon_sym_esac;
	v->a[24432] = anon_sym_PIPE;
	v->a[24433] = anon_sym_SEMI_SEMI;
	v->a[24434] = anon_sym_AMP_AMP;
	v->a[24435] = anon_sym_PIPE_PIPE;
	v->a[24436] = anon_sym_LT;
	v->a[24437] = anon_sym_GT;
	v->a[24438] = anon_sym_GT_GT;
	v->a[24439] = anon_sym_AMP_GT;
	small_parse_table_1222(v);
}

void	small_parse_table_1222(t_small_parse_table_array *v)
{
	v->a[24440] = anon_sym_AMP_GT_GT;
	v->a[24441] = anon_sym_LT_AMP;
	v->a[24442] = anon_sym_GT_AMP;
	v->a[24443] = anon_sym_GT_PIPE;
	v->a[24444] = anon_sym_LT_AMP_DASH;
	v->a[24445] = anon_sym_GT_AMP_DASH;
	v->a[24446] = anon_sym_LT_LT;
	v->a[24447] = anon_sym_LT_LT_DASH;
	v->a[24448] = aux_sym_heredoc_redirect_token1;
	v->a[24449] = anon_sym_AMP;
	v->a[24450] = anon_sym_SEMI;
	v->a[24451] = 14;
	v->a[24452] = actions(3);
	v->a[24453] = 1;
	v->a[24454] = sym_comment;
	v->a[24455] = actions(555);
	v->a[24456] = 1;
	v->a[24457] = sym_file_descriptor;
	v->a[24458] = actions(797);
	v->a[24459] = 1;
	small_parse_table_1223(v);
}

void	small_parse_table_1223(t_small_parse_table_array *v)
{
	v->a[24460] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24461] = actions(799);
	v->a[24462] = 1;
	v->a[24463] = anon_sym_DOLLAR;
	v->a[24464] = actions(801);
	v->a[24465] = 1;
	v->a[24466] = anon_sym_DQUOTE;
	v->a[24467] = actions(803);
	v->a[24468] = 1;
	v->a[24469] = aux_sym_number_token1;
	v->a[24470] = actions(805);
	v->a[24471] = 1;
	v->a[24472] = aux_sym_number_token2;
	v->a[24473] = actions(807);
	v->a[24474] = 1;
	v->a[24475] = anon_sym_DOLLAR_LBRACE;
	v->a[24476] = actions(809);
	v->a[24477] = 1;
	v->a[24478] = anon_sym_DOLLAR_LPAREN;
	v->a[24479] = actions(811);
	small_parse_table_1224(v);
}

void	small_parse_table_1224(t_small_parse_table_array *v)
{
	v->a[24480] = 1;
	v->a[24481] = anon_sym_BQUOTE;
	v->a[24482] = actions(795);
	v->a[24483] = 2;
	v->a[24484] = sym_raw_string;
	v->a[24485] = sym_word;
	v->a[24486] = state(223);
	v->a[24487] = 2;
	v->a[24488] = sym_concatenation;
	v->a[24489] = aux_sym_for_statement_repeat1;
	v->a[24490] = state(424);
	v->a[24491] = 6;
	v->a[24492] = sym_arithmetic_expansion;
	v->a[24493] = sym_string;
	v->a[24494] = sym_number;
	v->a[24495] = sym_simple_expansion;
	v->a[24496] = sym_expansion;
	v->a[24497] = sym_command_substitution;
	v->a[24498] = actions(553);
	v->a[24499] = 20;
	small_parse_table_1225(v);
}

/* EOF small_parse_table_244.c */
