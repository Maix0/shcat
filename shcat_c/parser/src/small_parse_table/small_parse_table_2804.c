/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2804.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14020(t_small_parse_table_array *v)
{
	v->a[280400] = aux_sym_heredoc_redirect_token1;
	v->a[280401] = actions(12221);
	v->a[280402] = 1;
	v->a[280403] = sym_file_descriptor;
	v->a[280404] = actions(4692);
	v->a[280405] = 2;
	v->a[280406] = anon_sym_LT_LT;
	v->a[280407] = anon_sym_LT_LT_DASH;
	v->a[280408] = actions(5099);
	v->a[280409] = 2;
	v->a[280410] = anon_sym_PIPE_PIPE;
	v->a[280411] = anon_sym_AMP_AMP;
	v->a[280412] = actions(11556);
	v->a[280413] = 2;
	v->a[280414] = anon_sym_LT_AMP_DASH;
	v->a[280415] = anon_sym_GT_AMP_DASH;
	v->a[280416] = actions(5140);
	v->a[280417] = 3;
	v->a[280418] = anon_sym_SEMI;
	v->a[280419] = anon_sym_AMP;
	small_parse_table_14021(v);
}

void	small_parse_table_14021(t_small_parse_table_array *v)
{
	v->a[280420] = anon_sym_SEMI_SEMI;
	v->a[280421] = state(4986);
	v->a[280422] = 3;
	v->a[280423] = sym_file_redirect;
	v->a[280424] = sym_heredoc_redirect;
	v->a[280425] = aux_sym_redirected_statement_repeat1;
	v->a[280426] = actions(11554);
	v->a[280427] = 8;
	v->a[280428] = anon_sym_LT;
	v->a[280429] = anon_sym_GT;
	v->a[280430] = anon_sym_GT_GT;
	v->a[280431] = anon_sym_AMP_GT;
	v->a[280432] = anon_sym_AMP_GT_GT;
	v->a[280433] = anon_sym_LT_AMP;
	v->a[280434] = anon_sym_GT_AMP;
	v->a[280435] = anon_sym_GT_PIPE;
	v->a[280436] = 15;
	v->a[280437] = actions(71);
	v->a[280438] = 1;
	v->a[280439] = sym_comment;
	small_parse_table_14022(v);
}

void	small_parse_table_14022(t_small_parse_table_array *v)
{
	v->a[280440] = actions(7789);
	v->a[280441] = 1;
	v->a[280442] = anon_sym_DQUOTE;
	v->a[280443] = actions(7797);
	v->a[280444] = 1;
	v->a[280445] = anon_sym_DOLLAR_LBRACE;
	v->a[280446] = actions(7809);
	v->a[280447] = 1;
	v->a[280448] = sym_variable_name;
	v->a[280449] = actions(12648);
	v->a[280450] = 1;
	v->a[280451] = anon_sym_LPAREN;
	v->a[280452] = actions(12650);
	v->a[280453] = 1;
	v->a[280454] = anon_sym_DOLLAR;
	v->a[280455] = actions(12652);
	v->a[280456] = 1;
	v->a[280457] = anon_sym_RBRACE3;
	v->a[280458] = actions(12654);
	v->a[280459] = 1;
	small_parse_table_14023(v);
}

void	small_parse_table_14023(t_small_parse_table_array *v)
{
	v->a[280460] = anon_sym_DOLLAR_LPAREN;
	v->a[280461] = actions(12656);
	v->a[280462] = 1;
	v->a[280463] = anon_sym_BQUOTE;
	v->a[280464] = actions(12658);
	v->a[280465] = 1;
	v->a[280466] = anon_sym_DOLLAR_BQUOTE;
	v->a[280467] = state(6631);
	v->a[280468] = 1;
	v->a[280469] = sym_process_substitution;
	v->a[280470] = state(7008);
	v->a[280471] = 1;
	v->a[280472] = sym__concatenation_in_expansion;
	v->a[280473] = actions(7240);
	v->a[280474] = 2;
	v->a[280475] = anon_sym_LT_LPAREN;
	v->a[280476] = anon_sym_GT_LPAREN;
	v->a[280477] = actions(12646);
	v->a[280478] = 4;
	v->a[280479] = sym__expansion_word;
	small_parse_table_14024(v);
}

void	small_parse_table_14024(t_small_parse_table_array *v)
{
	v->a[280480] = sym_raw_string;
	v->a[280481] = sym_ansi_c_string;
	v->a[280482] = sym_word;
	v->a[280483] = state(6498);
	v->a[280484] = 5;
	v->a[280485] = sym_string;
	v->a[280486] = sym_array;
	v->a[280487] = sym_simple_expansion;
	v->a[280488] = sym_expansion;
	v->a[280489] = sym_command_substitution;
	v->a[280490] = 4;
	v->a[280491] = actions(71);
	v->a[280492] = 1;
	v->a[280493] = sym_comment;
	v->a[280494] = actions(12644);
	v->a[280495] = 1;
	v->a[280496] = anon_sym_esac;
	v->a[280497] = actions(12640);
	v->a[280498] = 6;
	v->a[280499] = anon_sym_LPAREN;
	small_parse_table_14025(v);
}

/* EOF small_parse_table_2804.c */
