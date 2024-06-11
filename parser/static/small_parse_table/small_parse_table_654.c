/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_654.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3270(t_small_parse_table_array *v)
{
	v->a[65400] = anon_sym_DOLLAR_LBRACE;
	v->a[65401] = actions(2021);
	v->a[65402] = 1;
	v->a[65403] = anon_sym_DOLLAR_LPAREN;
	v->a[65404] = actions(2023);
	v->a[65405] = 1;
	v->a[65406] = anon_sym_BQUOTE;
	v->a[65407] = actions(2025);
	v->a[65408] = 1;
	v->a[65409] = sym_variable_name;
	v->a[65410] = actions(2007);
	v->a[65411] = 2;
	v->a[65412] = anon_sym_PLUS_PLUS;
	v->a[65413] = anon_sym_DASH_DASH;
	v->a[65414] = actions(2009);
	v->a[65415] = 2;
	v->a[65416] = anon_sym_DASH2;
	v->a[65417] = anon_sym_PLUS2;
	v->a[65418] = actions(2017);
	v->a[65419] = 2;
	small_parse_table_3271(v);
}

void	small_parse_table_3271(t_small_parse_table_array *v)
{
	v->a[65420] = sym_number;
	v->a[65421] = aux_sym__simple_variable_name_token1;
	v->a[65422] = state(503);
	v->a[65423] = 3;
	v->a[65424] = sym_string;
	v->a[65425] = sym_simple_expansion;
	v->a[65426] = sym_expansion;
	v->a[65427] = state(585);
	v->a[65428] = 8;
	v->a[65429] = sym__arithmetic_expression;
	v->a[65430] = sym_arithmetic_literal;
	v->a[65431] = sym_arithmetic_binary_expression;
	v->a[65432] = sym_arithmetic_ternary_expression;
	v->a[65433] = sym_arithmetic_unary_expression;
	v->a[65434] = sym_arithmetic_postfix_expression;
	v->a[65435] = sym_arithmetic_parenthesized_expression;
	v->a[65436] = sym_command_substitution;
	v->a[65437] = 17;
	v->a[65438] = actions(3);
	v->a[65439] = 1;
	small_parse_table_3272(v);
}

void	small_parse_table_3272(t_small_parse_table_array *v)
{
	v->a[65440] = sym_comment;
	v->a[65441] = actions(1959);
	v->a[65442] = 1;
	v->a[65443] = anon_sym_LPAREN;
	v->a[65444] = actions(1963);
	v->a[65445] = 1;
	v->a[65446] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65447] = actions(1965);
	v->a[65448] = 1;
	v->a[65449] = anon_sym_DOLLAR;
	v->a[65450] = actions(1967);
	v->a[65451] = 1;
	v->a[65452] = anon_sym_DQUOTE;
	v->a[65453] = actions(1969);
	v->a[65454] = 1;
	v->a[65455] = anon_sym_DOLLAR_LBRACE;
	v->a[65456] = actions(1971);
	v->a[65457] = 1;
	v->a[65458] = anon_sym_DOLLAR_LPAREN;
	v->a[65459] = actions(1973);
	small_parse_table_3273(v);
}

void	small_parse_table_3273(t_small_parse_table_array *v)
{
	v->a[65460] = 1;
	v->a[65461] = anon_sym_BQUOTE;
	v->a[65462] = actions(1975);
	v->a[65463] = 1;
	v->a[65464] = sym_extglob_pattern;
	v->a[65465] = actions(2027);
	v->a[65466] = 1;
	v->a[65467] = anon_sym_esac;
	v->a[65468] = state(1470);
	v->a[65469] = 1;
	v->a[65470] = aux_sym_case_statement_repeat1;
	v->a[65471] = state(2080);
	v->a[65472] = 1;
	v->a[65473] = sym_case_item;
	v->a[65474] = state(2448);
	v->a[65475] = 1;
	v->a[65476] = sym__case_item_last;
	v->a[65477] = state(2224);
	v->a[65478] = 2;
	v->a[65479] = sym_concatenation;
	small_parse_table_3274(v);
}

void	small_parse_table_3274(t_small_parse_table_array *v)
{
	v->a[65480] = sym__extglob_blob;
	v->a[65481] = actions(1955);
	v->a[65482] = 3;
	v->a[65483] = sym_raw_string;
	v->a[65484] = sym_number;
	v->a[65485] = sym_word;
	v->a[65486] = actions(2029);
	v->a[65487] = 4;
	v->a[65488] = anon_sym_SEMI_SEMI;
	v->a[65489] = aux_sym_heredoc_redirect_token1;
	v->a[65490] = anon_sym_AMP;
	v->a[65491] = anon_sym_SEMI;
	v->a[65492] = state(2157);
	v->a[65493] = 5;
	v->a[65494] = sym_arithmetic_expansion;
	v->a[65495] = sym_string;
	v->a[65496] = sym_simple_expansion;
	v->a[65497] = sym_expansion;
	v->a[65498] = sym_command_substitution;
	v->a[65499] = 15;
	small_parse_table_3275(v);
}

/* EOF small_parse_table_654.c */
