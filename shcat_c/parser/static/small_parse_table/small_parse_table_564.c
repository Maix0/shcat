/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_564.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2820(t_small_parse_table_array *v)
{
	v->a[56400] = anon_sym_AMP;
	v->a[56401] = anon_sym_EQ_EQ;
	v->a[56402] = anon_sym_LT;
	v->a[56403] = anon_sym_GT;
	v->a[56404] = anon_sym_LT_LT;
	v->a[56405] = anon_sym_GT_GT;
	v->a[56406] = anon_sym_SEMI_SEMI;
	v->a[56407] = anon_sym_PIPE_AMP;
	v->a[56408] = anon_sym_EQ_TILDE;
	v->a[56409] = anon_sym_AMP_GT;
	v->a[56410] = anon_sym_AMP_GT_GT;
	v->a[56411] = anon_sym_LT_AMP;
	v->a[56412] = anon_sym_GT_AMP;
	v->a[56413] = anon_sym_GT_PIPE;
	v->a[56414] = anon_sym_LT_AMP_DASH;
	v->a[56415] = anon_sym_GT_AMP_DASH;
	v->a[56416] = anon_sym_LT_LT_DASH;
	v->a[56417] = anon_sym_LT_LT_LT;
	v->a[56418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56419] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_2821(v);
}

void	small_parse_table_2821(t_small_parse_table_array *v)
{
	v->a[56420] = anon_sym_DOLLAR;
	v->a[56421] = sym__special_character;
	v->a[56422] = anon_sym_DQUOTE;
	v->a[56423] = sym_raw_string;
	v->a[56424] = sym_ansi_c_string;
	v->a[56425] = aux_sym_number_token1;
	v->a[56426] = aux_sym_number_token2;
	v->a[56427] = anon_sym_DOLLAR_LBRACE;
	v->a[56428] = anon_sym_DOLLAR_LPAREN;
	v->a[56429] = anon_sym_BQUOTE;
	v->a[56430] = anon_sym_DOLLAR_BQUOTE;
	v->a[56431] = anon_sym_LT_LPAREN;
	v->a[56432] = anon_sym_GT_LPAREN;
	v->a[56433] = sym_word;
	v->a[56434] = 6;
	v->a[56435] = actions(3);
	v->a[56436] = 1;
	v->a[56437] = sym_comment;
	v->a[56438] = actions(5464);
	v->a[56439] = 1;
	small_parse_table_2822(v);
}

void	small_parse_table_2822(t_small_parse_table_array *v)
{
	v->a[56440] = aux_sym_concatenation_token1;
	v->a[56441] = actions(5466);
	v->a[56442] = 1;
	v->a[56443] = sym__concat;
	v->a[56444] = state(1249);
	v->a[56445] = 1;
	v->a[56446] = aux_sym_concatenation_repeat1;
	v->a[56447] = actions(2096);
	v->a[56448] = 5;
	v->a[56449] = sym_file_descriptor;
	v->a[56450] = sym_variable_name;
	v->a[56451] = sym_test_operator;
	v->a[56452] = sym__brace_start;
	v->a[56453] = aux_sym_heredoc_redirect_token1;
	v->a[56454] = actions(2094);
	v->a[56455] = 39;
	v->a[56456] = anon_sym_LPAREN_LPAREN;
	v->a[56457] = anon_sym_SEMI;
	v->a[56458] = anon_sym_PIPE_PIPE;
	v->a[56459] = anon_sym_AMP_AMP;
	small_parse_table_2823(v);
}

void	small_parse_table_2823(t_small_parse_table_array *v)
{
	v->a[56460] = anon_sym_PIPE;
	v->a[56461] = anon_sym_AMP;
	v->a[56462] = anon_sym_LT;
	v->a[56463] = anon_sym_GT;
	v->a[56464] = anon_sym_LT_LT;
	v->a[56465] = anon_sym_GT_GT;
	v->a[56466] = anon_sym_SEMI_SEMI;
	v->a[56467] = anon_sym_SEMI_AMP;
	v->a[56468] = anon_sym_SEMI_SEMI_AMP;
	v->a[56469] = anon_sym_PIPE_AMP;
	v->a[56470] = anon_sym_AMP_GT;
	v->a[56471] = anon_sym_AMP_GT_GT;
	v->a[56472] = anon_sym_LT_AMP;
	v->a[56473] = anon_sym_GT_AMP;
	v->a[56474] = anon_sym_GT_PIPE;
	v->a[56475] = anon_sym_LT_AMP_DASH;
	v->a[56476] = anon_sym_GT_AMP_DASH;
	v->a[56477] = anon_sym_LT_LT_DASH;
	v->a[56478] = anon_sym_LT_LT_LT;
	v->a[56479] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2824(v);
}

void	small_parse_table_2824(t_small_parse_table_array *v)
{
	v->a[56480] = anon_sym_DOLLAR_LBRACK;
	v->a[56481] = anon_sym_DOLLAR;
	v->a[56482] = sym__special_character;
	v->a[56483] = anon_sym_DQUOTE;
	v->a[56484] = sym_raw_string;
	v->a[56485] = sym_ansi_c_string;
	v->a[56486] = aux_sym_number_token1;
	v->a[56487] = aux_sym_number_token2;
	v->a[56488] = anon_sym_DOLLAR_LBRACE;
	v->a[56489] = anon_sym_DOLLAR_LPAREN;
	v->a[56490] = anon_sym_BQUOTE;
	v->a[56491] = anon_sym_DOLLAR_BQUOTE;
	v->a[56492] = anon_sym_LT_LPAREN;
	v->a[56493] = anon_sym_GT_LPAREN;
	v->a[56494] = sym_word;
	v->a[56495] = 6;
	v->a[56496] = actions(3);
	v->a[56497] = 1;
	v->a[56498] = sym_comment;
	v->a[56499] = actions(5080);
	small_parse_table_2825(v);
}

/* EOF small_parse_table_564.c */
