/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_174.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_870(t_small_parse_table_array *v)
{
	v->a[17400] = actions(2708);
	v->a[17401] = 2;
	v->a[17402] = anon_sym_LT_LT;
	v->a[17403] = anon_sym_LT_LT_DASH;
	v->a[17404] = actions(2712);
	v->a[17405] = 2;
	v->a[17406] = anon_sym_AMP;
	v->a[17407] = anon_sym_SEMI;
	v->a[17408] = state(1989);
	v->a[17409] = 2;
	v->a[17410] = sym_variable_assignment;
	v->a[17411] = aux_sym_variable_assignments_repeat1;
	v->a[17412] = actions(1995);
	v->a[17413] = 3;
	v->a[17414] = anon_sym_SEMI_SEMI;
	v->a[17415] = anon_sym_SEMI_AMP;
	v->a[17416] = anon_sym_SEMI_SEMI_AMP;
	v->a[17417] = actions(2526);
	v->a[17418] = 3;
	v->a[17419] = sym_file_descriptor;
	small_parse_table_871(v);
}

void	small_parse_table_871(t_small_parse_table_array *v)
{
	v->a[17420] = sym_test_operator;
	v->a[17421] = sym__brace_start;
	v->a[17422] = state(1983);
	v->a[17423] = 3;
	v->a[17424] = sym_file_redirect;
	v->a[17425] = sym_heredoc_redirect;
	v->a[17426] = aux_sym_redirected_statement_repeat1;
	v->a[17427] = actions(2512);
	v->a[17428] = 22;
	v->a[17429] = anon_sym_LT;
	v->a[17430] = anon_sym_GT;
	v->a[17431] = anon_sym_GT_GT;
	v->a[17432] = anon_sym_AMP_GT;
	v->a[17433] = anon_sym_AMP_GT_GT;
	v->a[17434] = anon_sym_LT_AMP;
	v->a[17435] = anon_sym_GT_AMP;
	v->a[17436] = anon_sym_GT_PIPE;
	v->a[17437] = anon_sym_LT_AMP_DASH;
	v->a[17438] = anon_sym_GT_AMP_DASH;
	v->a[17439] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_872(v);
}

void	small_parse_table_872(t_small_parse_table_array *v)
{
	v->a[17440] = anon_sym_DOLLAR;
	v->a[17441] = sym__special_character;
	v->a[17442] = anon_sym_DQUOTE;
	v->a[17443] = sym_raw_string;
	v->a[17444] = aux_sym_number_token1;
	v->a[17445] = aux_sym_number_token2;
	v->a[17446] = anon_sym_DOLLAR_LBRACE;
	v->a[17447] = anon_sym_DOLLAR_LPAREN;
	v->a[17448] = anon_sym_BQUOTE;
	v->a[17449] = anon_sym_DOLLAR_BQUOTE;
	v->a[17450] = sym_word;
	v->a[17451] = 6;
	v->a[17452] = actions(3);
	v->a[17453] = 1;
	v->a[17454] = sym_comment;
	v->a[17455] = actions(2666);
	v->a[17456] = 1;
	v->a[17457] = aux_sym_concatenation_token1;
	v->a[17458] = actions(2668);
	v->a[17459] = 1;
	small_parse_table_873(v);
}

void	small_parse_table_873(t_small_parse_table_array *v)
{
	v->a[17460] = sym__concat;
	v->a[17461] = state(488);
	v->a[17462] = 1;
	v->a[17463] = aux_sym_concatenation_repeat1;
	v->a[17464] = actions(2719);
	v->a[17465] = 5;
	v->a[17466] = sym_file_descriptor;
	v->a[17467] = sym_variable_name;
	v->a[17468] = sym_test_operator;
	v->a[17469] = sym__brace_start;
	v->a[17470] = aux_sym_heredoc_redirect_token1;
	v->a[17471] = actions(2717);
	v->a[17472] = 35;
	v->a[17473] = anon_sym_esac;
	v->a[17474] = anon_sym_PIPE;
	v->a[17475] = anon_sym_SEMI_SEMI;
	v->a[17476] = anon_sym_SEMI_AMP;
	v->a[17477] = anon_sym_SEMI_SEMI_AMP;
	v->a[17478] = anon_sym_PIPE_AMP;
	v->a[17479] = anon_sym_AMP_AMP;
	small_parse_table_874(v);
}

void	small_parse_table_874(t_small_parse_table_array *v)
{
	v->a[17480] = anon_sym_PIPE_PIPE;
	v->a[17481] = anon_sym_LT;
	v->a[17482] = anon_sym_GT;
	v->a[17483] = anon_sym_GT_GT;
	v->a[17484] = anon_sym_AMP_GT;
	v->a[17485] = anon_sym_AMP_GT_GT;
	v->a[17486] = anon_sym_LT_AMP;
	v->a[17487] = anon_sym_GT_AMP;
	v->a[17488] = anon_sym_GT_PIPE;
	v->a[17489] = anon_sym_LT_AMP_DASH;
	v->a[17490] = anon_sym_GT_AMP_DASH;
	v->a[17491] = anon_sym_LT_LT;
	v->a[17492] = anon_sym_LT_LT_DASH;
	v->a[17493] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17494] = anon_sym_AMP;
	v->a[17495] = anon_sym_DOLLAR;
	v->a[17496] = sym__special_character;
	v->a[17497] = anon_sym_DQUOTE;
	v->a[17498] = sym_raw_string;
	v->a[17499] = aux_sym_number_token1;
	small_parse_table_875(v);
}

/* EOF small_parse_table_174.c */
