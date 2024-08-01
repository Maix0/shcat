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
	v->a[17400] = 3;
	v->a[17401] = sym_raw_string;
	v->a[17402] = sym_number;
	v->a[17403] = sym_word;
	v->a[17404] = state(431);
	v->a[17405] = 5;
	v->a[17406] = sym_arithmetic_expansion;
	v->a[17407] = sym_string;
	v->a[17408] = sym_simple_expansion;
	v->a[17409] = sym_expansion;
	v->a[17410] = sym_command_substitution;
	v->a[17411] = actions(403);
	v->a[17412] = 11;
	v->a[17413] = anon_sym_PIPE;
	v->a[17414] = anon_sym_SEMI_SEMI;
	v->a[17415] = anon_sym_AMP_AMP;
	v->a[17416] = anon_sym_PIPE_PIPE;
	v->a[17417] = anon_sym_LT;
	v->a[17418] = anon_sym_GT;
	v->a[17419] = anon_sym_GT_GT;
	small_parse_table_871(v);
}

void	small_parse_table_871(t_small_parse_table_array *v)
{
	v->a[17420] = anon_sym_LT_LT;
	v->a[17421] = aux_sym_heredoc_redirect_token1;
	v->a[17422] = anon_sym_BQUOTE;
	v->a[17423] = anon_sym_SEMI;
	v->a[17424] = 11;
	v->a[17425] = actions(3);
	v->a[17426] = 1;
	v->a[17427] = sym_comment;
	v->a[17428] = actions(607);
	v->a[17429] = 1;
	v->a[17430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17431] = actions(610);
	v->a[17432] = 1;
	v->a[17433] = anon_sym_DOLLAR;
	v->a[17434] = actions(613);
	v->a[17435] = 1;
	v->a[17436] = anon_sym_DQUOTE;
	v->a[17437] = actions(616);
	v->a[17438] = 1;
	v->a[17439] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_872(v);
}

void	small_parse_table_872(t_small_parse_table_array *v)
{
	v->a[17440] = actions(619);
	v->a[17441] = 1;
	v->a[17442] = anon_sym_DOLLAR_LPAREN;
	v->a[17443] = actions(622);
	v->a[17444] = 1;
	v->a[17445] = anon_sym_BQUOTE;
	v->a[17446] = state(181);
	v->a[17447] = 2;
	v->a[17448] = sym_concatenation;
	v->a[17449] = aux_sym_for_statement_repeat1;
	v->a[17450] = actions(604);
	v->a[17451] = 3;
	v->a[17452] = sym_raw_string;
	v->a[17453] = sym_number;
	v->a[17454] = sym_word;
	v->a[17455] = state(402);
	v->a[17456] = 5;
	v->a[17457] = sym_arithmetic_expansion;
	v->a[17458] = sym_string;
	v->a[17459] = sym_simple_expansion;
	small_parse_table_873(v);
}

void	small_parse_table_873(t_small_parse_table_array *v)
{
	v->a[17460] = sym_expansion;
	v->a[17461] = sym_command_substitution;
	v->a[17462] = actions(428);
	v->a[17463] = 11;
	v->a[17464] = anon_sym_PIPE;
	v->a[17465] = anon_sym_RPAREN;
	v->a[17466] = anon_sym_SEMI_SEMI;
	v->a[17467] = anon_sym_AMP_AMP;
	v->a[17468] = anon_sym_PIPE_PIPE;
	v->a[17469] = anon_sym_LT;
	v->a[17470] = anon_sym_GT;
	v->a[17471] = anon_sym_GT_GT;
	v->a[17472] = anon_sym_LT_LT;
	v->a[17473] = aux_sym_heredoc_redirect_token1;
	v->a[17474] = anon_sym_SEMI;
	v->a[17475] = 11;
	v->a[17476] = actions(3);
	v->a[17477] = 1;
	v->a[17478] = sym_comment;
	v->a[17479] = actions(627);
	small_parse_table_874(v);
}

void	small_parse_table_874(t_small_parse_table_array *v)
{
	v->a[17480] = 1;
	v->a[17481] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17482] = actions(629);
	v->a[17483] = 1;
	v->a[17484] = anon_sym_DOLLAR;
	v->a[17485] = actions(631);
	v->a[17486] = 1;
	v->a[17487] = anon_sym_DQUOTE;
	v->a[17488] = actions(633);
	v->a[17489] = 1;
	v->a[17490] = anon_sym_DOLLAR_LBRACE;
	v->a[17491] = actions(635);
	v->a[17492] = 1;
	v->a[17493] = anon_sym_DOLLAR_LPAREN;
	v->a[17494] = actions(637);
	v->a[17495] = 1;
	v->a[17496] = anon_sym_BQUOTE;
	v->a[17497] = state(187);
	v->a[17498] = 2;
	v->a[17499] = sym_concatenation;
	small_parse_table_875(v);
}

/* EOF small_parse_table_174.c */
