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
	v->a[48400] = actions(3);
	v->a[48401] = 1;
	v->a[48402] = sym_comment;
	v->a[48403] = actions(1522);
	v->a[48404] = 2;
	v->a[48405] = anon_sym_RPAREN;
	v->a[48406] = anon_sym_SEMI_SEMI;
	v->a[48407] = actions(1524);
	v->a[48408] = 2;
	v->a[48409] = sym_file_descriptor;
	v->a[48410] = sym_variable_name;
	v->a[48411] = actions(1520);
	v->a[48412] = 27;
	v->a[48413] = anon_sym_for;
	v->a[48414] = anon_sym_while;
	v->a[48415] = anon_sym_until;
	v->a[48416] = anon_sym_if;
	v->a[48417] = anon_sym_case;
	v->a[48418] = anon_sym_LPAREN;
	v->a[48419] = anon_sym_LBRACE;
	small_parse_table_2421(v);
}

void	small_parse_table_2421(t_small_parse_table_array *v)
{
	v->a[48420] = anon_sym_BANG;
	v->a[48421] = anon_sym_LT;
	v->a[48422] = anon_sym_GT;
	v->a[48423] = anon_sym_GT_GT;
	v->a[48424] = anon_sym_AMP_GT;
	v->a[48425] = anon_sym_AMP_GT_GT;
	v->a[48426] = anon_sym_LT_AMP;
	v->a[48427] = anon_sym_GT_AMP;
	v->a[48428] = anon_sym_GT_PIPE;
	v->a[48429] = anon_sym_LT_AMP_DASH;
	v->a[48430] = anon_sym_GT_AMP_DASH;
	v->a[48431] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48432] = anon_sym_DOLLAR;
	v->a[48433] = anon_sym_DQUOTE;
	v->a[48434] = sym_raw_string;
	v->a[48435] = sym_number;
	v->a[48436] = anon_sym_DOLLAR_LBRACE;
	v->a[48437] = anon_sym_DOLLAR_LPAREN;
	v->a[48438] = anon_sym_BQUOTE;
	v->a[48439] = sym_word;
	small_parse_table_2422(v);
}

void	small_parse_table_2422(t_small_parse_table_array *v)
{
	v->a[48440] = 17;
	v->a[48441] = actions(3);
	v->a[48442] = 1;
	v->a[48443] = sym_comment;
	v->a[48444] = actions(345);
	v->a[48445] = 1;
	v->a[48446] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48447] = actions(347);
	v->a[48448] = 1;
	v->a[48449] = anon_sym_DOLLAR;
	v->a[48450] = actions(349);
	v->a[48451] = 1;
	v->a[48452] = anon_sym_DQUOTE;
	v->a[48453] = actions(353);
	v->a[48454] = 1;
	v->a[48455] = anon_sym_DOLLAR_LBRACE;
	v->a[48456] = actions(355);
	v->a[48457] = 1;
	v->a[48458] = anon_sym_DOLLAR_LPAREN;
	v->a[48459] = actions(357);
	small_parse_table_2423(v);
}

void	small_parse_table_2423(t_small_parse_table_array *v)
{
	v->a[48460] = 1;
	v->a[48461] = anon_sym_BQUOTE;
	v->a[48462] = actions(377);
	v->a[48463] = 1;
	v->a[48464] = sym_variable_name;
	v->a[48465] = actions(1068);
	v->a[48466] = 1;
	v->a[48467] = sym_file_descriptor;
	v->a[48468] = state(285);
	v->a[48469] = 1;
	v->a[48470] = sym_command_name;
	v->a[48471] = state(928);
	v->a[48472] = 1;
	v->a[48473] = sym_concatenation;
	v->a[48474] = state(1343);
	v->a[48475] = 1;
	v->a[48476] = sym_file_redirect;
	v->a[48477] = actions(1066);
	v->a[48478] = 2;
	v->a[48479] = anon_sym_LT_AMP_DASH;
	small_parse_table_2424(v);
}

void	small_parse_table_2424(t_small_parse_table_array *v)
{
	v->a[48480] = anon_sym_GT_AMP_DASH;
	v->a[48481] = state(1100);
	v->a[48482] = 2;
	v->a[48483] = sym_variable_assignment;
	v->a[48484] = aux_sym_command_repeat1;
	v->a[48485] = actions(351);
	v->a[48486] = 3;
	v->a[48487] = sym_raw_string;
	v->a[48488] = sym_number;
	v->a[48489] = sym_word;
	v->a[48490] = state(777);
	v->a[48491] = 5;
	v->a[48492] = sym_arithmetic_expansion;
	v->a[48493] = sym_string;
	v->a[48494] = sym_simple_expansion;
	v->a[48495] = sym_expansion;
	v->a[48496] = sym_command_substitution;
	v->a[48497] = actions(1064);
	v->a[48498] = 8;
	v->a[48499] = anon_sym_LT;
	small_parse_table_2425(v);
}

/* EOF small_parse_table_484.c */
