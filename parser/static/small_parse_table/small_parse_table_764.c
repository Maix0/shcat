/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_764.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3820(t_small_parse_table_array *v)
{
	v->a[76400] = sym_file_descriptor;
	v->a[76401] = sym_variable_name;
	v->a[76402] = sym_test_operator;
	v->a[76403] = sym__brace_start;
	v->a[76404] = aux_sym_heredoc_redirect_token1;
	v->a[76405] = actions(4552);
	v->a[76406] = 40;
	v->a[76407] = anon_sym_LPAREN_LPAREN;
	v->a[76408] = anon_sym_SEMI;
	v->a[76409] = anon_sym_PIPE_PIPE;
	v->a[76410] = anon_sym_AMP_AMP;
	v->a[76411] = anon_sym_PIPE;
	v->a[76412] = anon_sym_AMP;
	v->a[76413] = anon_sym_LT;
	v->a[76414] = anon_sym_GT;
	v->a[76415] = anon_sym_LT_LT;
	v->a[76416] = anon_sym_GT_GT;
	v->a[76417] = anon_sym_esac;
	v->a[76418] = anon_sym_SEMI_SEMI;
	v->a[76419] = anon_sym_SEMI_AMP;
	small_parse_table_3821(v);
}

void	small_parse_table_3821(t_small_parse_table_array *v)
{
	v->a[76420] = anon_sym_SEMI_SEMI_AMP;
	v->a[76421] = anon_sym_PIPE_AMP;
	v->a[76422] = anon_sym_AMP_GT;
	v->a[76423] = anon_sym_AMP_GT_GT;
	v->a[76424] = anon_sym_LT_AMP;
	v->a[76425] = anon_sym_GT_AMP;
	v->a[76426] = anon_sym_GT_PIPE;
	v->a[76427] = anon_sym_LT_AMP_DASH;
	v->a[76428] = anon_sym_GT_AMP_DASH;
	v->a[76429] = anon_sym_LT_LT_DASH;
	v->a[76430] = anon_sym_LT_LT_LT;
	v->a[76431] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76432] = anon_sym_DOLLAR_LBRACK;
	v->a[76433] = anon_sym_DOLLAR;
	v->a[76434] = sym__special_character;
	v->a[76435] = anon_sym_DQUOTE;
	v->a[76436] = sym_raw_string;
	v->a[76437] = sym_ansi_c_string;
	v->a[76438] = aux_sym_number_token1;
	v->a[76439] = aux_sym_number_token2;
	small_parse_table_3822(v);
}

void	small_parse_table_3822(t_small_parse_table_array *v)
{
	v->a[76440] = anon_sym_DOLLAR_LBRACE;
	v->a[76441] = anon_sym_DOLLAR_LPAREN;
	v->a[76442] = anon_sym_BQUOTE;
	v->a[76443] = anon_sym_DOLLAR_BQUOTE;
	v->a[76444] = anon_sym_LT_LPAREN;
	v->a[76445] = anon_sym_GT_LPAREN;
	v->a[76446] = sym_word;
	v->a[76447] = 6;
	v->a[76448] = actions(3);
	v->a[76449] = 1;
	v->a[76450] = sym_comment;
	v->a[76451] = actions(5813);
	v->a[76452] = 1;
	v->a[76453] = aux_sym_concatenation_token1;
	v->a[76454] = actions(5815);
	v->a[76455] = 1;
	v->a[76456] = sym__concat;
	v->a[76457] = state(1638);
	v->a[76458] = 1;
	v->a[76459] = aux_sym_concatenation_repeat1;
	small_parse_table_3823(v);
}

void	small_parse_table_3823(t_small_parse_table_array *v)
{
	v->a[76460] = actions(5391);
	v->a[76461] = 5;
	v->a[76462] = sym_file_descriptor;
	v->a[76463] = sym_test_operator;
	v->a[76464] = sym__brace_start;
	v->a[76465] = ts_builtin_sym_end;
	v->a[76466] = aux_sym_heredoc_redirect_token1;
	v->a[76467] = actions(5389);
	v->a[76468] = 37;
	v->a[76469] = anon_sym_LPAREN_LPAREN;
	v->a[76470] = anon_sym_SEMI;
	v->a[76471] = anon_sym_PIPE_PIPE;
	v->a[76472] = anon_sym_AMP_AMP;
	v->a[76473] = anon_sym_PIPE;
	v->a[76474] = anon_sym_AMP;
	v->a[76475] = anon_sym_LT;
	v->a[76476] = anon_sym_GT;
	v->a[76477] = anon_sym_LT_LT;
	v->a[76478] = anon_sym_GT_GT;
	v->a[76479] = anon_sym_SEMI_SEMI;
	small_parse_table_3824(v);
}

void	small_parse_table_3824(t_small_parse_table_array *v)
{
	v->a[76480] = anon_sym_PIPE_AMP;
	v->a[76481] = anon_sym_AMP_GT;
	v->a[76482] = anon_sym_AMP_GT_GT;
	v->a[76483] = anon_sym_LT_AMP;
	v->a[76484] = anon_sym_GT_AMP;
	v->a[76485] = anon_sym_GT_PIPE;
	v->a[76486] = anon_sym_LT_AMP_DASH;
	v->a[76487] = anon_sym_GT_AMP_DASH;
	v->a[76488] = anon_sym_LT_LT_DASH;
	v->a[76489] = anon_sym_LT_LT_LT;
	v->a[76490] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76491] = anon_sym_DOLLAR_LBRACK;
	v->a[76492] = anon_sym_DOLLAR;
	v->a[76493] = sym__special_character;
	v->a[76494] = anon_sym_DQUOTE;
	v->a[76495] = sym_raw_string;
	v->a[76496] = sym_ansi_c_string;
	v->a[76497] = aux_sym_number_token1;
	v->a[76498] = aux_sym_number_token2;
	v->a[76499] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3825(v);
}

/* EOF small_parse_table_764.c */
