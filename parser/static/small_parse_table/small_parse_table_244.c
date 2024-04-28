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
	v->a[24400] = anon_sym_DOLLAR_BQUOTE;
	v->a[24401] = actions(3632);
	v->a[24402] = 1;
	v->a[24403] = sym__brace_start;
	v->a[24404] = actions(4133);
	v->a[24405] = 1;
	v->a[24406] = sym__special_character;
	v->a[24407] = actions(4135);
	v->a[24408] = 1;
	v->a[24409] = sym_test_operator;
	v->a[24410] = state(2270);
	v->a[24411] = 1;
	v->a[24412] = aux_sym__literal_repeat1;
	v->a[24413] = actions(2074);
	v->a[24414] = 2;
	v->a[24415] = sym_file_descriptor;
	v->a[24416] = aux_sym_heredoc_redirect_token1;
	v->a[24417] = actions(3608);
	v->a[24418] = 2;
	v->a[24419] = anon_sym_LPAREN_LPAREN;
	small_parse_table_1221(v);
}

void	small_parse_table_1221(t_small_parse_table_array *v)
{
	v->a[24420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24421] = actions(3628);
	v->a[24422] = 2;
	v->a[24423] = anon_sym_LT_LPAREN;
	v->a[24424] = anon_sym_GT_LPAREN;
	v->a[24425] = state(781);
	v->a[24426] = 2;
	v->a[24427] = sym_concatenation;
	v->a[24428] = aux_sym_for_statement_repeat1;
	v->a[24429] = actions(4131);
	v->a[24430] = 3;
	v->a[24431] = sym_raw_string;
	v->a[24432] = sym_ansi_c_string;
	v->a[24433] = sym_word;
	v->a[24434] = state(1968);
	v->a[24435] = 9;
	v->a[24436] = sym_arithmetic_expansion;
	v->a[24437] = sym_brace_expression;
	v->a[24438] = sym_string;
	v->a[24439] = sym_translated_string;
	small_parse_table_1222(v);
}

void	small_parse_table_1222(t_small_parse_table_array *v)
{
	v->a[24440] = sym_number;
	v->a[24441] = sym_simple_expansion;
	v->a[24442] = sym_expansion;
	v->a[24443] = sym_command_substitution;
	v->a[24444] = sym_process_substitution;
	v->a[24445] = actions(2072);
	v->a[24446] = 20;
	v->a[24447] = anon_sym_SEMI;
	v->a[24448] = anon_sym_PIPE_PIPE;
	v->a[24449] = anon_sym_AMP_AMP;
	v->a[24450] = anon_sym_PIPE;
	v->a[24451] = anon_sym_AMP;
	v->a[24452] = anon_sym_LT;
	v->a[24453] = anon_sym_GT;
	v->a[24454] = anon_sym_LT_LT;
	v->a[24455] = anon_sym_GT_GT;
	v->a[24456] = anon_sym_SEMI_SEMI;
	v->a[24457] = anon_sym_PIPE_AMP;
	v->a[24458] = anon_sym_AMP_GT;
	v->a[24459] = anon_sym_AMP_GT_GT;
	small_parse_table_1223(v);
}

void	small_parse_table_1223(t_small_parse_table_array *v)
{
	v->a[24460] = anon_sym_LT_AMP;
	v->a[24461] = anon_sym_GT_AMP;
	v->a[24462] = anon_sym_GT_PIPE;
	v->a[24463] = anon_sym_LT_AMP_DASH;
	v->a[24464] = anon_sym_GT_AMP_DASH;
	v->a[24465] = anon_sym_LT_LT_DASH;
	v->a[24466] = anon_sym_BQUOTE;
	v->a[24467] = 8;
	v->a[24468] = actions(3);
	v->a[24469] = 1;
	v->a[24470] = sym_comment;
	v->a[24471] = actions(3189);
	v->a[24472] = 1;
	v->a[24473] = anon_sym_DQUOTE;
	v->a[24474] = actions(4058);
	v->a[24475] = 1;
	v->a[24476] = sym_variable_name;
	v->a[24477] = state(1737);
	v->a[24478] = 1;
	v->a[24479] = sym_string;
	small_parse_table_1224(v);
}

void	small_parse_table_1224(t_small_parse_table_array *v)
{
	v->a[24480] = actions(4056);
	v->a[24481] = 2;
	v->a[24482] = aux_sym__simple_variable_name_token1;
	v->a[24483] = aux_sym__multiline_variable_name_token1;
	v->a[24484] = actions(1241);
	v->a[24485] = 3;
	v->a[24486] = sym_file_descriptor;
	v->a[24487] = sym_test_operator;
	v->a[24488] = sym__brace_start;
	v->a[24489] = actions(4054);
	v->a[24490] = 9;
	v->a[24491] = anon_sym_DASH;
	v->a[24492] = anon_sym_STAR;
	v->a[24493] = anon_sym_BANG;
	v->a[24494] = anon_sym_QMARK;
	v->a[24495] = anon_sym_DOLLAR;
	v->a[24496] = anon_sym_POUND;
	v->a[24497] = anon_sym_AT2;
	v->a[24498] = anon_sym_0;
	v->a[24499] = anon_sym__;
	small_parse_table_1225(v);
}

/* EOF small_parse_table_244.c */
