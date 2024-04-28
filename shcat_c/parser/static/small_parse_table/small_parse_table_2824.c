/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2824.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14120(t_small_parse_table_array *v)
{
	v->a[282400] = 6;
	v->a[282401] = anon_sym_LPAREN;
	v->a[282402] = anon_sym_DOLLAR;
	v->a[282403] = aux_sym_number_token1;
	v->a[282404] = aux_sym_number_token2;
	v->a[282405] = anon_sym_DOLLAR_LPAREN;
	v->a[282406] = sym_word;
	v->a[282407] = actions(12716);
	v->a[282408] = 15;
	v->a[282409] = sym_test_operator;
	v->a[282410] = sym_extglob_pattern;
	v->a[282411] = sym__brace_start;
	v->a[282412] = anon_sym_LPAREN_LPAREN;
	v->a[282413] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[282414] = anon_sym_DOLLAR_LBRACK;
	v->a[282415] = sym__special_character;
	v->a[282416] = anon_sym_DQUOTE;
	v->a[282417] = sym_raw_string;
	v->a[282418] = sym_ansi_c_string;
	v->a[282419] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_14121(v);
}

void	small_parse_table_14121(t_small_parse_table_array *v)
{
	v->a[282420] = anon_sym_BQUOTE;
	v->a[282421] = anon_sym_DOLLAR_BQUOTE;
	v->a[282422] = anon_sym_LT_LPAREN;
	v->a[282423] = anon_sym_GT_LPAREN;
	v->a[282424] = 3;
	v->a[282425] = actions(71);
	v->a[282426] = 1;
	v->a[282427] = sym_comment;
	v->a[282428] = actions(12393);
	v->a[282429] = 6;
	v->a[282430] = anon_sym_LPAREN;
	v->a[282431] = anon_sym_DOLLAR;
	v->a[282432] = aux_sym_number_token1;
	v->a[282433] = aux_sym_number_token2;
	v->a[282434] = anon_sym_DOLLAR_LPAREN;
	v->a[282435] = sym_word;
	v->a[282436] = actions(12395);
	v->a[282437] = 15;
	v->a[282438] = sym_test_operator;
	v->a[282439] = sym_extglob_pattern;
	small_parse_table_14122(v);
}

void	small_parse_table_14122(t_small_parse_table_array *v)
{
	v->a[282440] = sym__brace_start;
	v->a[282441] = anon_sym_LPAREN_LPAREN;
	v->a[282442] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[282443] = anon_sym_DOLLAR_LBRACK;
	v->a[282444] = sym__special_character;
	v->a[282445] = anon_sym_DQUOTE;
	v->a[282446] = sym_raw_string;
	v->a[282447] = sym_ansi_c_string;
	v->a[282448] = anon_sym_DOLLAR_LBRACE;
	v->a[282449] = anon_sym_BQUOTE;
	v->a[282450] = anon_sym_DOLLAR_BQUOTE;
	v->a[282451] = anon_sym_LT_LPAREN;
	v->a[282452] = anon_sym_GT_LPAREN;
	v->a[282453] = 6;
	v->a[282454] = actions(3);
	v->a[282455] = 1;
	v->a[282456] = sym_comment;
	v->a[282457] = actions(11651);
	v->a[282458] = 1;
	v->a[282459] = aux_sym_concatenation_token1;
	small_parse_table_14123(v);
}

void	small_parse_table_14123(t_small_parse_table_array *v)
{
	v->a[282460] = actions(11653);
	v->a[282461] = 1;
	v->a[282462] = sym__concat;
	v->a[282463] = state(5393);
	v->a[282464] = 1;
	v->a[282465] = aux_sym_concatenation_repeat1;
	v->a[282466] = actions(4469);
	v->a[282467] = 2;
	v->a[282468] = sym_file_descriptor;
	v->a[282469] = aux_sym_heredoc_redirect_token1;
	v->a[282470] = actions(4467);
	v->a[282471] = 16;
	v->a[282472] = anon_sym_PIPE_PIPE;
	v->a[282473] = anon_sym_AMP_AMP;
	v->a[282474] = anon_sym_PIPE;
	v->a[282475] = anon_sym_LT;
	v->a[282476] = anon_sym_GT;
	v->a[282477] = anon_sym_LT_LT;
	v->a[282478] = anon_sym_GT_GT;
	v->a[282479] = anon_sym_PIPE_AMP;
	small_parse_table_14124(v);
}

void	small_parse_table_14124(t_small_parse_table_array *v)
{
	v->a[282480] = anon_sym_AMP_GT;
	v->a[282481] = anon_sym_AMP_GT_GT;
	v->a[282482] = anon_sym_LT_AMP;
	v->a[282483] = anon_sym_GT_AMP;
	v->a[282484] = anon_sym_GT_PIPE;
	v->a[282485] = anon_sym_LT_AMP_DASH;
	v->a[282486] = anon_sym_GT_AMP_DASH;
	v->a[282487] = anon_sym_LT_LT_DASH;
	v->a[282488] = 3;
	v->a[282489] = actions(71);
	v->a[282490] = 1;
	v->a[282491] = sym_comment;
	v->a[282492] = actions(12714);
	v->a[282493] = 6;
	v->a[282494] = anon_sym_LPAREN;
	v->a[282495] = anon_sym_DOLLAR;
	v->a[282496] = aux_sym_number_token1;
	v->a[282497] = aux_sym_number_token2;
	v->a[282498] = anon_sym_DOLLAR_LPAREN;
	v->a[282499] = sym_word;
	small_parse_table_14125(v);
}

/* EOF small_parse_table_2824.c */
