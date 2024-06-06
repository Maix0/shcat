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
	v->a[56400] = anon_sym_SEMI_SEMI;
	v->a[56401] = anon_sym_PIPE_AMP;
	v->a[56402] = anon_sym_AMP_AMP;
	v->a[56403] = anon_sym_PIPE_PIPE;
	v->a[56404] = anon_sym_LT;
	v->a[56405] = anon_sym_GT;
	v->a[56406] = anon_sym_GT_GT;
	v->a[56407] = anon_sym_AMP_GT;
	v->a[56408] = anon_sym_AMP_GT_GT;
	v->a[56409] = anon_sym_LT_AMP;
	v->a[56410] = anon_sym_GT_AMP;
	v->a[56411] = anon_sym_GT_PIPE;
	v->a[56412] = anon_sym_LT_AMP_DASH;
	v->a[56413] = anon_sym_GT_AMP_DASH;
	v->a[56414] = anon_sym_LT_LT;
	v->a[56415] = anon_sym_LT_LT_DASH;
	v->a[56416] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56417] = anon_sym_AMP;
	v->a[56418] = aux_sym_concatenation_token1;
	v->a[56419] = anon_sym_DOLLAR;
	small_parse_table_2821(v);
}

void	small_parse_table_2821(t_small_parse_table_array *v)
{
	v->a[56420] = sym__special_character;
	v->a[56421] = anon_sym_DQUOTE;
	v->a[56422] = sym_raw_string;
	v->a[56423] = aux_sym_number_token1;
	v->a[56424] = aux_sym_number_token2;
	v->a[56425] = anon_sym_DOLLAR_LBRACE;
	v->a[56426] = anon_sym_DOLLAR_LPAREN;
	v->a[56427] = anon_sym_BQUOTE;
	v->a[56428] = anon_sym_DOLLAR_BQUOTE;
	v->a[56429] = sym_word;
	v->a[56430] = anon_sym_SEMI;
	v->a[56431] = 3;
	v->a[56432] = actions(3);
	v->a[56433] = 1;
	v->a[56434] = sym_comment;
	v->a[56435] = actions(2664);
	v->a[56436] = 5;
	v->a[56437] = sym_file_descriptor;
	v->a[56438] = sym_test_operator;
	v->a[56439] = sym__bare_dollar;
	small_parse_table_2822(v);
}

void	small_parse_table_2822(t_small_parse_table_array *v)
{
	v->a[56440] = sym__brace_start;
	v->a[56441] = aux_sym_heredoc_redirect_token1;
	v->a[56442] = actions(2662);
	v->a[56443] = 33;
	v->a[56444] = anon_sym_PIPE;
	v->a[56445] = anon_sym_SEMI_SEMI;
	v->a[56446] = anon_sym_SEMI_AMP;
	v->a[56447] = anon_sym_SEMI_SEMI_AMP;
	v->a[56448] = anon_sym_PIPE_AMP;
	v->a[56449] = anon_sym_AMP_AMP;
	v->a[56450] = anon_sym_PIPE_PIPE;
	v->a[56451] = anon_sym_LT;
	v->a[56452] = anon_sym_GT;
	v->a[56453] = anon_sym_GT_GT;
	v->a[56454] = anon_sym_AMP_GT;
	v->a[56455] = anon_sym_AMP_GT_GT;
	v->a[56456] = anon_sym_LT_AMP;
	v->a[56457] = anon_sym_GT_AMP;
	v->a[56458] = anon_sym_GT_PIPE;
	v->a[56459] = anon_sym_LT_AMP_DASH;
	small_parse_table_2823(v);
}

void	small_parse_table_2823(t_small_parse_table_array *v)
{
	v->a[56460] = anon_sym_GT_AMP_DASH;
	v->a[56461] = anon_sym_LT_LT;
	v->a[56462] = anon_sym_LT_LT_DASH;
	v->a[56463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56464] = anon_sym_AMP;
	v->a[56465] = anon_sym_DOLLAR;
	v->a[56466] = sym__special_character;
	v->a[56467] = anon_sym_DQUOTE;
	v->a[56468] = sym_raw_string;
	v->a[56469] = aux_sym_number_token1;
	v->a[56470] = aux_sym_number_token2;
	v->a[56471] = anon_sym_DOLLAR_LBRACE;
	v->a[56472] = anon_sym_DOLLAR_LPAREN;
	v->a[56473] = anon_sym_BQUOTE;
	v->a[56474] = anon_sym_DOLLAR_BQUOTE;
	v->a[56475] = sym_word;
	v->a[56476] = anon_sym_SEMI;
	v->a[56477] = 5;
	v->a[56478] = actions(3);
	v->a[56479] = 1;
	small_parse_table_2824(v);
}

void	small_parse_table_2824(t_small_parse_table_array *v)
{
	v->a[56480] = sym_comment;
	v->a[56481] = actions(3815);
	v->a[56482] = 1;
	v->a[56483] = sym__special_character;
	v->a[56484] = state(1214);
	v->a[56485] = 1;
	v->a[56486] = aux_sym__literal_repeat1;
	v->a[56487] = actions(3252);
	v->a[56488] = 5;
	v->a[56489] = sym_file_descriptor;
	v->a[56490] = sym_variable_name;
	v->a[56491] = sym_test_operator;
	v->a[56492] = sym__brace_start;
	v->a[56493] = aux_sym_heredoc_redirect_token1;
	v->a[56494] = actions(3250);
	v->a[56495] = 31;
	v->a[56496] = anon_sym_PIPE;
	v->a[56497] = anon_sym_RPAREN;
	v->a[56498] = anon_sym_SEMI_SEMI;
	v->a[56499] = anon_sym_PIPE_AMP;
	small_parse_table_2825(v);
}

/* EOF small_parse_table_564.c */
