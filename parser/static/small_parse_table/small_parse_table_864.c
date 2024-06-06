/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_864.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4320(t_small_parse_table_array *v)
{
	v->a[86400] = 1;
	v->a[86401] = anon_sym_LPAREN;
	v->a[86402] = actions(4550);
	v->a[86403] = 1;
	v->a[86404] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86405] = actions(4552);
	v->a[86406] = 1;
	v->a[86407] = sym__special_character;
	v->a[86408] = actions(4554);
	v->a[86409] = 1;
	v->a[86410] = anon_sym_DQUOTE;
	v->a[86411] = actions(4556);
	v->a[86412] = 1;
	v->a[86413] = anon_sym_DOLLAR_LBRACE;
	v->a[86414] = actions(4558);
	v->a[86415] = 1;
	v->a[86416] = anon_sym_BQUOTE;
	v->a[86417] = actions(4560);
	v->a[86418] = 1;
	v->a[86419] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4321(v);
}

void	small_parse_table_4321(t_small_parse_table_array *v)
{
	v->a[86420] = state(3393);
	v->a[86421] = 1;
	v->a[86422] = aux_sym__literal_repeat1;
	v->a[86423] = state(3880);
	v->a[86424] = 1;
	v->a[86425] = sym_last_case_item;
	v->a[86426] = actions(4358);
	v->a[86427] = 2;
	v->a[86428] = sym_test_operator;
	v->a[86429] = sym_raw_string;
	v->a[86430] = state(1881);
	v->a[86431] = 2;
	v->a[86432] = sym_case_item;
	v->a[86433] = aux_sym_case_statement_repeat1;
	v->a[86434] = state(3472);
	v->a[86435] = 2;
	v->a[86436] = sym_concatenation;
	v->a[86437] = sym__extglob_blob;
	v->a[86438] = state(3295);
	v->a[86439] = 7;
	small_parse_table_4322(v);
}

void	small_parse_table_4322(t_small_parse_table_array *v)
{
	v->a[86440] = sym_arithmetic_expansion;
	v->a[86441] = sym_brace_expression;
	v->a[86442] = sym_string;
	v->a[86443] = sym_number;
	v->a[86444] = sym_simple_expansion;
	v->a[86445] = sym_expansion;
	v->a[86446] = sym_command_substitution;
	v->a[86447] = 21;
	v->a[86448] = actions(57);
	v->a[86449] = 1;
	v->a[86450] = sym_comment;
	v->a[86451] = actions(4584);
	v->a[86452] = 1;
	v->a[86453] = anon_sym_LPAREN;
	v->a[86454] = actions(4586);
	v->a[86455] = 1;
	v->a[86456] = anon_sym_BANG;
	v->a[86457] = actions(4592);
	v->a[86458] = 1;
	v->a[86459] = anon_sym_TILDE;
	small_parse_table_4323(v);
}

void	small_parse_table_4323(t_small_parse_table_array *v)
{
	v->a[86460] = actions(4594);
	v->a[86461] = 1;
	v->a[86462] = anon_sym_DOLLAR;
	v->a[86463] = actions(4596);
	v->a[86464] = 1;
	v->a[86465] = anon_sym_DQUOTE;
	v->a[86466] = actions(4598);
	v->a[86467] = 1;
	v->a[86468] = aux_sym_number_token1;
	v->a[86469] = actions(4600);
	v->a[86470] = 1;
	v->a[86471] = aux_sym_number_token2;
	v->a[86472] = actions(4602);
	v->a[86473] = 1;
	v->a[86474] = anon_sym_DOLLAR_LBRACE;
	v->a[86475] = actions(4604);
	v->a[86476] = 1;
	v->a[86477] = anon_sym_DOLLAR_LPAREN;
	v->a[86478] = actions(4606);
	v->a[86479] = 1;
	small_parse_table_4324(v);
}

void	small_parse_table_4324(t_small_parse_table_array *v)
{
	v->a[86480] = anon_sym_BQUOTE;
	v->a[86481] = actions(4608);
	v->a[86482] = 1;
	v->a[86483] = anon_sym_DOLLAR_BQUOTE;
	v->a[86484] = actions(4809);
	v->a[86485] = 1;
	v->a[86486] = aux_sym__simple_variable_name_token1;
	v->a[86487] = actions(4811);
	v->a[86488] = 1;
	v->a[86489] = sym_variable_name;
	v->a[86490] = state(1476);
	v->a[86491] = 1;
	v->a[86492] = sym__arithmetic_postfix_expression;
	v->a[86493] = state(1478);
	v->a[86494] = 1;
	v->a[86495] = sym__arithmetic_unary_expression;
	v->a[86496] = state(1490);
	v->a[86497] = 1;
	v->a[86498] = sym__arithmetic_ternary_expression;
	v->a[86499] = state(1511);
	small_parse_table_4325(v);
}

/* EOF small_parse_table_864.c */
