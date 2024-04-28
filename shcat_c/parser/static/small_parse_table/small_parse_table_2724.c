/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2724.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13620(t_small_parse_table_array *v)
{
	v->a[272400] = anon_sym_SEMI_AMP;
	v->a[272401] = anon_sym_SEMI_SEMI_AMP;
	v->a[272402] = anon_sym_PIPE_AMP;
	v->a[272403] = anon_sym_AMP_GT;
	v->a[272404] = anon_sym_AMP_GT_GT;
	v->a[272405] = anon_sym_LT_AMP;
	v->a[272406] = anon_sym_GT_AMP;
	v->a[272407] = anon_sym_GT_PIPE;
	v->a[272408] = anon_sym_LT_AMP_DASH;
	v->a[272409] = anon_sym_GT_AMP_DASH;
	v->a[272410] = anon_sym_LT_LT_DASH;
	v->a[272411] = 10;
	v->a[272412] = actions(3);
	v->a[272413] = 1;
	v->a[272414] = sym_comment;
	v->a[272415] = actions(2719);
	v->a[272416] = 1;
	v->a[272417] = anon_sym_BQUOTE;
	v->a[272418] = actions(5357);
	v->a[272419] = 1;
	small_parse_table_13621(v);
}

void	small_parse_table_13621(t_small_parse_table_array *v)
{
	v->a[272420] = aux_sym_heredoc_redirect_token1;
	v->a[272421] = actions(11856);
	v->a[272422] = 1;
	v->a[272423] = sym_file_descriptor;
	v->a[272424] = actions(4692);
	v->a[272425] = 2;
	v->a[272426] = anon_sym_LT_LT;
	v->a[272427] = anon_sym_LT_LT_DASH;
	v->a[272428] = actions(5355);
	v->a[272429] = 2;
	v->a[272430] = anon_sym_PIPE_PIPE;
	v->a[272431] = anon_sym_AMP_AMP;
	v->a[272432] = actions(11487);
	v->a[272433] = 2;
	v->a[272434] = anon_sym_LT_AMP_DASH;
	v->a[272435] = anon_sym_GT_AMP_DASH;
	v->a[272436] = actions(5353);
	v->a[272437] = 3;
	v->a[272438] = anon_sym_SEMI;
	v->a[272439] = anon_sym_AMP;
	small_parse_table_13622(v);
}

void	small_parse_table_13622(t_small_parse_table_array *v)
{
	v->a[272440] = anon_sym_SEMI_SEMI;
	v->a[272441] = state(4697);
	v->a[272442] = 3;
	v->a[272443] = sym_file_redirect;
	v->a[272444] = sym_heredoc_redirect;
	v->a[272445] = aux_sym_redirected_statement_repeat1;
	v->a[272446] = actions(11485);
	v->a[272447] = 8;
	v->a[272448] = anon_sym_LT;
	v->a[272449] = anon_sym_GT;
	v->a[272450] = anon_sym_GT_GT;
	v->a[272451] = anon_sym_AMP_GT;
	v->a[272452] = anon_sym_AMP_GT_GT;
	v->a[272453] = anon_sym_LT_AMP;
	v->a[272454] = anon_sym_GT_AMP;
	v->a[272455] = anon_sym_GT_PIPE;
	v->a[272456] = 5;
	v->a[272457] = actions(71);
	v->a[272458] = 1;
	v->a[272459] = sym_comment;
	small_parse_table_13623(v);
}

void	small_parse_table_13623(t_small_parse_table_array *v)
{
	v->a[272460] = state(5065);
	v->a[272461] = 1;
	v->a[272462] = aux_sym_concatenation_repeat1;
	v->a[272463] = actions(12309);
	v->a[272464] = 2;
	v->a[272465] = sym__concat;
	v->a[272466] = aux_sym_concatenation_token1;
	v->a[272467] = actions(5393);
	v->a[272468] = 6;
	v->a[272469] = anon_sym_DOLLAR;
	v->a[272470] = aux_sym_number_token1;
	v->a[272471] = aux_sym_number_token2;
	v->a[272472] = anon_sym_DOLLAR_LPAREN;
	v->a[272473] = anon_sym_BQUOTE;
	v->a[272474] = sym_word;
	v->a[272475] = actions(5395);
	v->a[272476] = 14;
	v->a[272477] = sym_test_operator;
	v->a[272478] = sym__brace_start;
	v->a[272479] = anon_sym_LPAREN_LPAREN;
	small_parse_table_13624(v);
}

void	small_parse_table_13624(t_small_parse_table_array *v)
{
	v->a[272480] = anon_sym_RPAREN;
	v->a[272481] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[272482] = anon_sym_DOLLAR_LBRACK;
	v->a[272483] = sym__special_character;
	v->a[272484] = anon_sym_DQUOTE;
	v->a[272485] = sym_raw_string;
	v->a[272486] = sym_ansi_c_string;
	v->a[272487] = anon_sym_DOLLAR_LBRACE;
	v->a[272488] = anon_sym_DOLLAR_BQUOTE;
	v->a[272489] = anon_sym_LT_LPAREN;
	v->a[272490] = anon_sym_GT_LPAREN;
	v->a[272491] = 3;
	v->a[272492] = actions(3);
	v->a[272493] = 1;
	v->a[272494] = sym_comment;
	v->a[272495] = actions(11739);
	v->a[272496] = 2;
	v->a[272497] = sym_file_descriptor;
	v->a[272498] = aux_sym_heredoc_redirect_token1;
	v->a[272499] = actions(11741);
	small_parse_table_13625(v);
}

/* EOF small_parse_table_2724.c */
