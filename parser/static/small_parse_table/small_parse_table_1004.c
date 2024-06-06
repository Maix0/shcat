/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1004.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5020(t_small_parse_table_array *v)
{
	v->a[100400] = sym_expansion;
	v->a[100401] = sym_command_substitution;
	v->a[100402] = 5;
	v->a[100403] = actions(3);
	v->a[100404] = 1;
	v->a[100405] = sym_comment;
	v->a[100406] = actions(2516);
	v->a[100407] = 2;
	v->a[100408] = anon_sym_PIPE;
	v->a[100409] = anon_sym_PIPE_AMP;
	v->a[100410] = actions(2632);
	v->a[100411] = 2;
	v->a[100412] = sym_file_descriptor;
	v->a[100413] = aux_sym_heredoc_redirect_token1;
	v->a[100414] = state(2140);
	v->a[100415] = 3;
	v->a[100416] = sym_file_redirect;
	v->a[100417] = sym_heredoc_redirect;
	v->a[100418] = aux_sym_redirected_statement_repeat1;
	v->a[100419] = actions(2630);
	small_parse_table_5021(v);
}

void	small_parse_table_5021(t_small_parse_table_array *v)
{
	v->a[100420] = 18;
	v->a[100421] = anon_sym_SEMI_SEMI;
	v->a[100422] = anon_sym_AMP_AMP;
	v->a[100423] = anon_sym_PIPE_PIPE;
	v->a[100424] = anon_sym_LT;
	v->a[100425] = anon_sym_GT;
	v->a[100426] = anon_sym_GT_GT;
	v->a[100427] = anon_sym_AMP_GT;
	v->a[100428] = anon_sym_AMP_GT_GT;
	v->a[100429] = anon_sym_LT_AMP;
	v->a[100430] = anon_sym_GT_AMP;
	v->a[100431] = anon_sym_GT_PIPE;
	v->a[100432] = anon_sym_LT_AMP_DASH;
	v->a[100433] = anon_sym_GT_AMP_DASH;
	v->a[100434] = anon_sym_LT_LT;
	v->a[100435] = anon_sym_LT_LT_DASH;
	v->a[100436] = anon_sym_AMP;
	v->a[100437] = anon_sym_BQUOTE;
	v->a[100438] = anon_sym_SEMI;
	v->a[100439] = 3;
	small_parse_table_5022(v);
}

void	small_parse_table_5022(t_small_parse_table_array *v)
{
	v->a[100440] = actions(3);
	v->a[100441] = 1;
	v->a[100442] = sym_comment;
	v->a[100443] = actions(3050);
	v->a[100444] = 3;
	v->a[100445] = sym_file_descriptor;
	v->a[100446] = sym__concat;
	v->a[100447] = aux_sym_heredoc_redirect_token1;
	v->a[100448] = actions(3048);
	v->a[100449] = 22;
	v->a[100450] = anon_sym_PIPE;
	v->a[100451] = anon_sym_SEMI_SEMI;
	v->a[100452] = anon_sym_SEMI_AMP;
	v->a[100453] = anon_sym_SEMI_SEMI_AMP;
	v->a[100454] = anon_sym_PIPE_AMP;
	v->a[100455] = anon_sym_AMP_AMP;
	v->a[100456] = anon_sym_PIPE_PIPE;
	v->a[100457] = anon_sym_LT;
	v->a[100458] = anon_sym_GT;
	v->a[100459] = anon_sym_GT_GT;
	small_parse_table_5023(v);
}

void	small_parse_table_5023(t_small_parse_table_array *v)
{
	v->a[100460] = anon_sym_AMP_GT;
	v->a[100461] = anon_sym_AMP_GT_GT;
	v->a[100462] = anon_sym_LT_AMP;
	v->a[100463] = anon_sym_GT_AMP;
	v->a[100464] = anon_sym_GT_PIPE;
	v->a[100465] = anon_sym_LT_AMP_DASH;
	v->a[100466] = anon_sym_GT_AMP_DASH;
	v->a[100467] = anon_sym_LT_LT;
	v->a[100468] = anon_sym_LT_LT_DASH;
	v->a[100469] = anon_sym_AMP;
	v->a[100470] = aux_sym_concatenation_token1;
	v->a[100471] = anon_sym_SEMI;
	v->a[100472] = 19;
	v->a[100473] = actions(3);
	v->a[100474] = 1;
	v->a[100475] = sym_comment;
	v->a[100476] = actions(5690);
	v->a[100477] = 1;
	v->a[100478] = sym_word;
	v->a[100479] = actions(5692);
	small_parse_table_5024(v);
}

void	small_parse_table_5024(t_small_parse_table_array *v)
{
	v->a[100480] = 1;
	v->a[100481] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100482] = actions(5694);
	v->a[100483] = 1;
	v->a[100484] = anon_sym_DOLLAR;
	v->a[100485] = actions(5696);
	v->a[100486] = 1;
	v->a[100487] = sym__special_character;
	v->a[100488] = actions(5698);
	v->a[100489] = 1;
	v->a[100490] = anon_sym_DQUOTE;
	v->a[100491] = actions(5702);
	v->a[100492] = 1;
	v->a[100493] = aux_sym_number_token1;
	v->a[100494] = actions(5704);
	v->a[100495] = 1;
	v->a[100496] = aux_sym_number_token2;
	v->a[100497] = actions(5706);
	v->a[100498] = 1;
	v->a[100499] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5025(v);
}

/* EOF small_parse_table_1004.c */
