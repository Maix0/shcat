/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_814.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4070(t_small_parse_table_array *v)
{
	v->a[81400] = 1;
	v->a[81401] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81402] = actions(4552);
	v->a[81403] = 1;
	v->a[81404] = sym__special_character;
	v->a[81405] = actions(4554);
	v->a[81406] = 1;
	v->a[81407] = anon_sym_DQUOTE;
	v->a[81408] = actions(4556);
	v->a[81409] = 1;
	v->a[81410] = anon_sym_DOLLAR_LBRACE;
	v->a[81411] = actions(4558);
	v->a[81412] = 1;
	v->a[81413] = anon_sym_BQUOTE;
	v->a[81414] = actions(4560);
	v->a[81415] = 1;
	v->a[81416] = anon_sym_DOLLAR_BQUOTE;
	v->a[81417] = actions(4572);
	v->a[81418] = 1;
	v->a[81419] = anon_sym_esac;
	small_parse_table_4071(v);
}

void	small_parse_table_4071(t_small_parse_table_array *v)
{
	v->a[81420] = state(3393);
	v->a[81421] = 1;
	v->a[81422] = aux_sym__literal_repeat1;
	v->a[81423] = state(3947);
	v->a[81424] = 1;
	v->a[81425] = sym_last_case_item;
	v->a[81426] = actions(4358);
	v->a[81427] = 2;
	v->a[81428] = sym_test_operator;
	v->a[81429] = sym_raw_string;
	v->a[81430] = state(1781);
	v->a[81431] = 2;
	v->a[81432] = sym_case_item;
	v->a[81433] = aux_sym_case_statement_repeat1;
	v->a[81434] = state(3472);
	v->a[81435] = 2;
	v->a[81436] = sym_concatenation;
	v->a[81437] = sym__extglob_blob;
	v->a[81438] = state(3295);
	v->a[81439] = 7;
	small_parse_table_4072(v);
}

void	small_parse_table_4072(t_small_parse_table_array *v)
{
	v->a[81440] = sym_arithmetic_expansion;
	v->a[81441] = sym_brace_expression;
	v->a[81442] = sym_string;
	v->a[81443] = sym_number;
	v->a[81444] = sym_simple_expansion;
	v->a[81445] = sym_expansion;
	v->a[81446] = sym_command_substitution;
	v->a[81447] = 3;
	v->a[81448] = actions(3);
	v->a[81449] = 1;
	v->a[81450] = sym_comment;
	v->a[81451] = actions(3024);
	v->a[81452] = 5;
	v->a[81453] = sym_file_descriptor;
	v->a[81454] = sym__concat;
	v->a[81455] = sym_test_operator;
	v->a[81456] = sym__brace_start;
	v->a[81457] = aux_sym_heredoc_redirect_token1;
	v->a[81458] = actions(3022);
	v->a[81459] = 25;
	small_parse_table_4073(v);
}

void	small_parse_table_4073(t_small_parse_table_array *v)
{
	v->a[81460] = anon_sym_AMP_AMP;
	v->a[81461] = anon_sym_PIPE_PIPE;
	v->a[81462] = anon_sym_LT;
	v->a[81463] = anon_sym_GT;
	v->a[81464] = anon_sym_GT_GT;
	v->a[81465] = anon_sym_AMP_GT;
	v->a[81466] = anon_sym_AMP_GT_GT;
	v->a[81467] = anon_sym_LT_AMP;
	v->a[81468] = anon_sym_GT_AMP;
	v->a[81469] = anon_sym_GT_PIPE;
	v->a[81470] = anon_sym_LT_AMP_DASH;
	v->a[81471] = anon_sym_GT_AMP_DASH;
	v->a[81472] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81473] = aux_sym_concatenation_token1;
	v->a[81474] = anon_sym_DOLLAR;
	v->a[81475] = sym__special_character;
	v->a[81476] = anon_sym_DQUOTE;
	v->a[81477] = sym_raw_string;
	v->a[81478] = aux_sym_number_token1;
	v->a[81479] = aux_sym_number_token2;
	small_parse_table_4074(v);
}

void	small_parse_table_4074(t_small_parse_table_array *v)
{
	v->a[81480] = anon_sym_DOLLAR_LBRACE;
	v->a[81481] = anon_sym_DOLLAR_LPAREN;
	v->a[81482] = anon_sym_BQUOTE;
	v->a[81483] = anon_sym_DOLLAR_BQUOTE;
	v->a[81484] = sym_word;
	v->a[81485] = 22;
	v->a[81486] = actions(57);
	v->a[81487] = 1;
	v->a[81488] = sym_comment;
	v->a[81489] = actions(4328);
	v->a[81490] = 1;
	v->a[81491] = sym_word;
	v->a[81492] = actions(4340);
	v->a[81493] = 1;
	v->a[81494] = anon_sym_DOLLAR;
	v->a[81495] = actions(4346);
	v->a[81496] = 1;
	v->a[81497] = aux_sym_number_token1;
	v->a[81498] = actions(4348);
	v->a[81499] = 1;
	small_parse_table_4075(v);
}

/* EOF small_parse_table_814.c */
