/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1274.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6370(t_small_parse_table_array *v)
{
	v->a[127400] = anon_sym_AMP_AMP;
	v->a[127401] = anon_sym_PIPE_PIPE;
	v->a[127402] = actions(2454);
	v->a[127403] = 2;
	v->a[127404] = anon_sym_LT_AMP_DASH;
	v->a[127405] = anon_sym_GT_AMP_DASH;
	v->a[127406] = state(2874);
	v->a[127407] = 2;
	v->a[127408] = sym_file_redirect;
	v->a[127409] = aux_sym_redirected_statement_repeat2;
	v->a[127410] = actions(2452);
	v->a[127411] = 8;
	v->a[127412] = anon_sym_LT;
	v->a[127413] = anon_sym_GT;
	v->a[127414] = anon_sym_GT_GT;
	v->a[127415] = anon_sym_AMP_GT;
	v->a[127416] = anon_sym_AMP_GT_GT;
	v->a[127417] = anon_sym_LT_AMP;
	v->a[127418] = anon_sym_GT_AMP;
	v->a[127419] = anon_sym_GT_PIPE;
	small_parse_table_6371(v);
}

void	small_parse_table_6371(t_small_parse_table_array *v)
{
	v->a[127420] = 6;
	v->a[127421] = actions(3);
	v->a[127422] = 1;
	v->a[127423] = sym_comment;
	v->a[127424] = actions(7278);
	v->a[127425] = 1;
	v->a[127426] = aux_sym_concatenation_token1;
	v->a[127427] = actions(7306);
	v->a[127428] = 1;
	v->a[127429] = sym__concat;
	v->a[127430] = state(2729);
	v->a[127431] = 1;
	v->a[127432] = aux_sym_concatenation_repeat1;
	v->a[127433] = actions(2690);
	v->a[127434] = 2;
	v->a[127435] = sym_file_descriptor;
	v->a[127436] = aux_sym_heredoc_redirect_token1;
	v->a[127437] = actions(2688);
	v->a[127438] = 12;
	v->a[127439] = anon_sym_AMP_AMP;
	small_parse_table_6372(v);
}

void	small_parse_table_6372(t_small_parse_table_array *v)
{
	v->a[127440] = anon_sym_PIPE_PIPE;
	v->a[127441] = anon_sym_LT;
	v->a[127442] = anon_sym_GT;
	v->a[127443] = anon_sym_GT_GT;
	v->a[127444] = anon_sym_AMP_GT;
	v->a[127445] = anon_sym_AMP_GT_GT;
	v->a[127446] = anon_sym_LT_AMP;
	v->a[127447] = anon_sym_GT_AMP;
	v->a[127448] = anon_sym_GT_PIPE;
	v->a[127449] = anon_sym_LT_AMP_DASH;
	v->a[127450] = anon_sym_GT_AMP_DASH;
	v->a[127451] = 4;
	v->a[127452] = actions(57);
	v->a[127453] = 1;
	v->a[127454] = sym_comment;
	v->a[127455] = actions(7310);
	v->a[127456] = 1;
	v->a[127457] = anon_sym_esac;
	v->a[127458] = actions(7308);
	v->a[127459] = 5;
	small_parse_table_6373(v);
}

void	small_parse_table_6373(t_small_parse_table_array *v)
{
	v->a[127460] = anon_sym_DOLLAR;
	v->a[127461] = aux_sym_number_token1;
	v->a[127462] = aux_sym_number_token2;
	v->a[127463] = anon_sym_DOLLAR_LPAREN;
	v->a[127464] = sym_word;
	v->a[127465] = actions(7312);
	v->a[127466] = 11;
	v->a[127467] = sym_test_operator;
	v->a[127468] = sym_extglob_pattern;
	v->a[127469] = sym__brace_start;
	v->a[127470] = anon_sym_LPAREN;
	v->a[127471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[127472] = sym__special_character;
	v->a[127473] = anon_sym_DQUOTE;
	v->a[127474] = sym_raw_string;
	v->a[127475] = anon_sym_DOLLAR_LBRACE;
	v->a[127476] = anon_sym_BQUOTE;
	v->a[127477] = anon_sym_DOLLAR_BQUOTE;
	v->a[127478] = 6;
	v->a[127479] = actions(3);
	small_parse_table_6374(v);
}

void	small_parse_table_6374(t_small_parse_table_array *v)
{
	v->a[127480] = 1;
	v->a[127481] = sym_comment;
	v->a[127482] = actions(7278);
	v->a[127483] = 1;
	v->a[127484] = aux_sym_concatenation_token1;
	v->a[127485] = actions(7314);
	v->a[127486] = 1;
	v->a[127487] = sym__concat;
	v->a[127488] = state(2729);
	v->a[127489] = 1;
	v->a[127490] = aux_sym_concatenation_repeat1;
	v->a[127491] = actions(2696);
	v->a[127492] = 2;
	v->a[127493] = sym_file_descriptor;
	v->a[127494] = aux_sym_heredoc_redirect_token1;
	v->a[127495] = actions(2694);
	v->a[127496] = 12;
	v->a[127497] = anon_sym_AMP_AMP;
	v->a[127498] = anon_sym_PIPE_PIPE;
	v->a[127499] = anon_sym_LT;
	small_parse_table_6375(v);
}

/* EOF small_parse_table_1274.c */
