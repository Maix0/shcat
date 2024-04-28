/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_664.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3320(t_small_parse_table_array *v)
{
	v->a[66400] = anon_sym_GT;
	v->a[66401] = anon_sym_LT_LT;
	v->a[66402] = anon_sym_GT_GT;
	v->a[66403] = anon_sym_esac;
	v->a[66404] = anon_sym_SEMI_SEMI;
	v->a[66405] = anon_sym_SEMI_AMP;
	v->a[66406] = anon_sym_SEMI_SEMI_AMP;
	v->a[66407] = anon_sym_PIPE_AMP;
	v->a[66408] = anon_sym_AMP_GT;
	v->a[66409] = anon_sym_AMP_GT_GT;
	v->a[66410] = anon_sym_LT_AMP;
	v->a[66411] = anon_sym_GT_AMP;
	v->a[66412] = anon_sym_GT_PIPE;
	v->a[66413] = anon_sym_LT_AMP_DASH;
	v->a[66414] = anon_sym_GT_AMP_DASH;
	v->a[66415] = anon_sym_LT_LT_DASH;
	v->a[66416] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66417] = anon_sym_DOLLAR_LBRACK;
	v->a[66418] = anon_sym_DOLLAR;
	v->a[66419] = anon_sym_DQUOTE;
	small_parse_table_3321(v);
}

void	small_parse_table_3321(t_small_parse_table_array *v)
{
	v->a[66420] = sym_raw_string;
	v->a[66421] = sym_ansi_c_string;
	v->a[66422] = aux_sym_number_token1;
	v->a[66423] = aux_sym_number_token2;
	v->a[66424] = anon_sym_DOLLAR_LBRACE;
	v->a[66425] = anon_sym_DOLLAR_LPAREN;
	v->a[66426] = anon_sym_BQUOTE;
	v->a[66427] = anon_sym_DOLLAR_BQUOTE;
	v->a[66428] = anon_sym_LT_LPAREN;
	v->a[66429] = anon_sym_GT_LPAREN;
	v->a[66430] = aux_sym__simple_variable_name_token1;
	v->a[66431] = sym_word;
	v->a[66432] = 3;
	v->a[66433] = actions(3);
	v->a[66434] = 1;
	v->a[66435] = sym_comment;
	v->a[66436] = actions(1330);
	v->a[66437] = 6;
	v->a[66438] = sym_file_descriptor;
	v->a[66439] = sym__concat;
	small_parse_table_3322(v);
}

void	small_parse_table_3322(t_small_parse_table_array *v)
{
	v->a[66440] = sym_variable_name;
	v->a[66441] = sym_test_operator;
	v->a[66442] = sym__brace_start;
	v->a[66443] = aux_sym_heredoc_redirect_token1;
	v->a[66444] = actions(1328);
	v->a[66445] = 40;
	v->a[66446] = anon_sym_LPAREN_LPAREN;
	v->a[66447] = anon_sym_SEMI;
	v->a[66448] = anon_sym_PIPE_PIPE;
	v->a[66449] = anon_sym_AMP_AMP;
	v->a[66450] = anon_sym_PIPE;
	v->a[66451] = anon_sym_AMP;
	v->a[66452] = anon_sym_LT;
	v->a[66453] = anon_sym_GT;
	v->a[66454] = anon_sym_LT_LT;
	v->a[66455] = anon_sym_GT_GT;
	v->a[66456] = anon_sym_SEMI_SEMI;
	v->a[66457] = anon_sym_SEMI_AMP;
	v->a[66458] = anon_sym_SEMI_SEMI_AMP;
	v->a[66459] = anon_sym_PIPE_AMP;
	small_parse_table_3323(v);
}

void	small_parse_table_3323(t_small_parse_table_array *v)
{
	v->a[66460] = anon_sym_AMP_GT;
	v->a[66461] = anon_sym_AMP_GT_GT;
	v->a[66462] = anon_sym_LT_AMP;
	v->a[66463] = anon_sym_GT_AMP;
	v->a[66464] = anon_sym_GT_PIPE;
	v->a[66465] = anon_sym_LT_AMP_DASH;
	v->a[66466] = anon_sym_GT_AMP_DASH;
	v->a[66467] = anon_sym_LT_LT_DASH;
	v->a[66468] = anon_sym_LT_LT_LT;
	v->a[66469] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66470] = anon_sym_DOLLAR_LBRACK;
	v->a[66471] = aux_sym_concatenation_token1;
	v->a[66472] = anon_sym_DOLLAR;
	v->a[66473] = sym__special_character;
	v->a[66474] = anon_sym_DQUOTE;
	v->a[66475] = sym_raw_string;
	v->a[66476] = sym_ansi_c_string;
	v->a[66477] = aux_sym_number_token1;
	v->a[66478] = aux_sym_number_token2;
	v->a[66479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3324(v);
}

void	small_parse_table_3324(t_small_parse_table_array *v)
{
	v->a[66480] = anon_sym_DOLLAR_LPAREN;
	v->a[66481] = anon_sym_BQUOTE;
	v->a[66482] = anon_sym_DOLLAR_BQUOTE;
	v->a[66483] = anon_sym_LT_LPAREN;
	v->a[66484] = anon_sym_GT_LPAREN;
	v->a[66485] = sym_word;
	v->a[66486] = 3;
	v->a[66487] = actions(3);
	v->a[66488] = 1;
	v->a[66489] = sym_comment;
	v->a[66490] = actions(1338);
	v->a[66491] = 5;
	v->a[66492] = sym_file_descriptor;
	v->a[66493] = sym__concat;
	v->a[66494] = sym_test_operator;
	v->a[66495] = sym__brace_start;
	v->a[66496] = aux_sym_heredoc_redirect_token1;
	v->a[66497] = actions(1336);
	v->a[66498] = 41;
	v->a[66499] = anon_sym_LPAREN_LPAREN;
	small_parse_table_3325(v);
}

/* EOF small_parse_table_664.c */
