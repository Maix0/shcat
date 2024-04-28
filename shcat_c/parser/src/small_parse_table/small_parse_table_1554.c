/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1554.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7770(t_small_parse_table_array *v)
{
	v->a[155400] = anon_sym_LPAREN_LPAREN;
	v->a[155401] = anon_sym_PIPE_PIPE;
	v->a[155402] = anon_sym_AMP_AMP;
	v->a[155403] = anon_sym_GT_GT;
	v->a[155404] = anon_sym_PIPE_AMP;
	v->a[155405] = anon_sym_AMP_GT_GT;
	v->a[155406] = anon_sym_GT_PIPE;
	v->a[155407] = anon_sym_LT_AMP_DASH;
	v->a[155408] = anon_sym_GT_AMP_DASH;
	v->a[155409] = anon_sym_LT_LT_DASH;
	v->a[155410] = anon_sym_LT_LT_LT;
	v->a[155411] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[155412] = anon_sym_DOLLAR_LBRACK;
	v->a[155413] = sym__special_character;
	v->a[155414] = anon_sym_DQUOTE;
	v->a[155415] = sym_raw_string;
	v->a[155416] = sym_ansi_c_string;
	v->a[155417] = anon_sym_DOLLAR_LBRACE;
	v->a[155418] = anon_sym_BQUOTE;
	v->a[155419] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_7771(v);
}

void	small_parse_table_7771(t_small_parse_table_array *v)
{
	v->a[155420] = anon_sym_LT_LPAREN;
	v->a[155421] = anon_sym_GT_LPAREN;
	v->a[155422] = 5;
	v->a[155423] = actions(71);
	v->a[155424] = 1;
	v->a[155425] = sym_comment;
	v->a[155426] = actions(4247);
	v->a[155427] = 5;
	v->a[155428] = anon_sym_DOLLAR;
	v->a[155429] = aux_sym_number_token1;
	v->a[155430] = aux_sym_number_token2;
	v->a[155431] = anon_sym_DOLLAR_LPAREN;
	v->a[155432] = sym_word;
	v->a[155433] = actions(5930);
	v->a[155434] = 7;
	v->a[155435] = anon_sym_PIPE;
	v->a[155436] = anon_sym_LT;
	v->a[155437] = anon_sym_GT;
	v->a[155438] = anon_sym_LT_LT;
	v->a[155439] = anon_sym_AMP_GT;
	small_parse_table_7772(v);
}

void	small_parse_table_7772(t_small_parse_table_array *v)
{
	v->a[155440] = anon_sym_LT_AMP;
	v->a[155441] = anon_sym_GT_AMP;
	v->a[155442] = actions(5932);
	v->a[155443] = 10;
	v->a[155444] = sym_file_descriptor;
	v->a[155445] = anon_sym_PIPE_PIPE;
	v->a[155446] = anon_sym_AMP_AMP;
	v->a[155447] = anon_sym_GT_GT;
	v->a[155448] = anon_sym_PIPE_AMP;
	v->a[155449] = anon_sym_AMP_GT_GT;
	v->a[155450] = anon_sym_GT_PIPE;
	v->a[155451] = anon_sym_LT_AMP_DASH;
	v->a[155452] = anon_sym_GT_AMP_DASH;
	v->a[155453] = anon_sym_LT_LT_DASH;
	v->a[155454] = actions(4261);
	v->a[155455] = 16;
	v->a[155456] = sym_variable_name;
	v->a[155457] = sym_test_operator;
	v->a[155458] = sym__brace_start;
	v->a[155459] = anon_sym_LPAREN_LPAREN;
	small_parse_table_7773(v);
}

void	small_parse_table_7773(t_small_parse_table_array *v)
{
	v->a[155460] = anon_sym_LT_LT_LT;
	v->a[155461] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[155462] = anon_sym_DOLLAR_LBRACK;
	v->a[155463] = sym__special_character;
	v->a[155464] = anon_sym_DQUOTE;
	v->a[155465] = sym_raw_string;
	v->a[155466] = sym_ansi_c_string;
	v->a[155467] = anon_sym_DOLLAR_LBRACE;
	v->a[155468] = anon_sym_BQUOTE;
	v->a[155469] = anon_sym_DOLLAR_BQUOTE;
	v->a[155470] = anon_sym_LT_LPAREN;
	v->a[155471] = anon_sym_GT_LPAREN;
	v->a[155472] = 20;
	v->a[155473] = actions(71);
	v->a[155474] = 1;
	v->a[155475] = sym_comment;
	v->a[155476] = actions(7172);
	v->a[155477] = 1;
	v->a[155478] = anon_sym_EQ;
	v->a[155479] = actions(7176);
	small_parse_table_7774(v);
}

void	small_parse_table_7774(t_small_parse_table_array *v)
{
	v->a[155480] = 1;
	v->a[155481] = anon_sym_PIPE_PIPE;
	v->a[155482] = actions(7178);
	v->a[155483] = 1;
	v->a[155484] = anon_sym_AMP_AMP;
	v->a[155485] = actions(7180);
	v->a[155486] = 1;
	v->a[155487] = anon_sym_PIPE;
	v->a[155488] = actions(7182);
	v->a[155489] = 1;
	v->a[155490] = anon_sym_CARET;
	v->a[155491] = actions(7184);
	v->a[155492] = 1;
	v->a[155493] = anon_sym_AMP;
	v->a[155494] = actions(7198);
	v->a[155495] = 1;
	v->a[155496] = anon_sym_STAR_STAR;
	v->a[155497] = actions(7200);
	v->a[155498] = 1;
	v->a[155499] = anon_sym_EQ_TILDE;
	small_parse_table_7775(v);
}

/* EOF small_parse_table_1554.c */
