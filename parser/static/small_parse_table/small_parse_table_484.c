/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_484.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2420(t_small_parse_table_array *v)
{
	v->a[48400] = sym_word;
	v->a[48401] = state(394);
	v->a[48402] = 5;
	v->a[48403] = sym_arithmetic_expansion;
	v->a[48404] = sym_string;
	v->a[48405] = sym_simple_expansion;
	v->a[48406] = sym_expansion;
	v->a[48407] = sym_command_substitution;
	v->a[48408] = actions(1197);
	v->a[48409] = 8;
	v->a[48410] = anon_sym_LT;
	v->a[48411] = anon_sym_GT;
	v->a[48412] = anon_sym_GT_GT;
	v->a[48413] = anon_sym_AMP_GT;
	v->a[48414] = anon_sym_AMP_GT_GT;
	v->a[48415] = anon_sym_LT_AMP;
	v->a[48416] = anon_sym_GT_AMP;
	v->a[48417] = anon_sym_GT_PIPE;
	v->a[48418] = 4;
	v->a[48419] = actions(3);
	small_parse_table_2421(v);
}

void	small_parse_table_2421(t_small_parse_table_array *v)
{
	v->a[48420] = 1;
	v->a[48421] = sym_comment;
	v->a[48422] = actions(1554);
	v->a[48423] = 2;
	v->a[48424] = anon_sym_esac;
	v->a[48425] = anon_sym_SEMI_SEMI;
	v->a[48426] = actions(1556);
	v->a[48427] = 2;
	v->a[48428] = sym_file_descriptor;
	v->a[48429] = sym_variable_name;
	v->a[48430] = actions(1552);
	v->a[48431] = 27;
	v->a[48432] = anon_sym_for;
	v->a[48433] = anon_sym_while;
	v->a[48434] = anon_sym_until;
	v->a[48435] = anon_sym_if;
	v->a[48436] = anon_sym_case;
	v->a[48437] = anon_sym_LPAREN;
	v->a[48438] = anon_sym_LBRACE;
	v->a[48439] = anon_sym_BANG;
	small_parse_table_2422(v);
}

void	small_parse_table_2422(t_small_parse_table_array *v)
{
	v->a[48440] = anon_sym_LT;
	v->a[48441] = anon_sym_GT;
	v->a[48442] = anon_sym_GT_GT;
	v->a[48443] = anon_sym_AMP_GT;
	v->a[48444] = anon_sym_AMP_GT_GT;
	v->a[48445] = anon_sym_LT_AMP;
	v->a[48446] = anon_sym_GT_AMP;
	v->a[48447] = anon_sym_GT_PIPE;
	v->a[48448] = anon_sym_LT_AMP_DASH;
	v->a[48449] = anon_sym_GT_AMP_DASH;
	v->a[48450] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48451] = anon_sym_DOLLAR;
	v->a[48452] = anon_sym_DQUOTE;
	v->a[48453] = sym_raw_string;
	v->a[48454] = sym_number;
	v->a[48455] = anon_sym_DOLLAR_LBRACE;
	v->a[48456] = anon_sym_DOLLAR_LPAREN;
	v->a[48457] = anon_sym_BQUOTE;
	v->a[48458] = sym_word;
	v->a[48459] = 6;
	small_parse_table_2423(v);
}

void	small_parse_table_2423(t_small_parse_table_array *v)
{
	v->a[48460] = actions(3);
	v->a[48461] = 1;
	v->a[48462] = sym_comment;
	v->a[48463] = actions(1565);
	v->a[48464] = 1;
	v->a[48465] = sym_file_descriptor;
	v->a[48466] = actions(1568);
	v->a[48467] = 1;
	v->a[48468] = sym_variable_name;
	v->a[48469] = actions(1558);
	v->a[48470] = 9;
	v->a[48471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48472] = anon_sym_DOLLAR;
	v->a[48473] = anon_sym_DQUOTE;
	v->a[48474] = sym_raw_string;
	v->a[48475] = sym_number;
	v->a[48476] = anon_sym_DOLLAR_LBRACE;
	v->a[48477] = anon_sym_DOLLAR_LPAREN;
	v->a[48478] = anon_sym_BQUOTE;
	v->a[48479] = sym_word;
	small_parse_table_2424(v);
}

void	small_parse_table_2424(t_small_parse_table_array *v)
{
	v->a[48480] = actions(1560);
	v->a[48481] = 10;
	v->a[48482] = anon_sym_PIPE;
	v->a[48483] = anon_sym_RPAREN;
	v->a[48484] = anon_sym_SEMI_SEMI;
	v->a[48485] = anon_sym_AMP_AMP;
	v->a[48486] = anon_sym_PIPE_PIPE;
	v->a[48487] = anon_sym_LT_LT;
	v->a[48488] = anon_sym_LT_LT_DASH;
	v->a[48489] = aux_sym_heredoc_redirect_token1;
	v->a[48490] = anon_sym_AMP;
	v->a[48491] = anon_sym_SEMI;
	v->a[48492] = actions(1562);
	v->a[48493] = 10;
	v->a[48494] = anon_sym_LT;
	v->a[48495] = anon_sym_GT;
	v->a[48496] = anon_sym_GT_GT;
	v->a[48497] = anon_sym_AMP_GT;
	v->a[48498] = anon_sym_AMP_GT_GT;
	v->a[48499] = anon_sym_LT_AMP;
	small_parse_table_2425(v);
}

/* EOF small_parse_table_484.c */
