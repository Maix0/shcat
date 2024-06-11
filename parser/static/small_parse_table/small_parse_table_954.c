/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_954.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4770(t_small_parse_table_array *v)
{
	v->a[95400] = actions(3868);
	v->a[95401] = 1;
	v->a[95402] = anon_sym_BQUOTE;
	v->a[95403] = actions(3980);
	v->a[95404] = 1;
	v->a[95405] = anon_sym_DOLLAR;
	v->a[95406] = actions(3982);
	v->a[95407] = 1;
	v->a[95408] = anon_sym_DQUOTE;
	v->a[95409] = state(1987);
	v->a[95410] = 1;
	v->a[95411] = aux_sym_string_repeat1;
	v->a[95412] = state(2107);
	v->a[95413] = 4;
	v->a[95414] = sym_arithmetic_expansion;
	v->a[95415] = sym_simple_expansion;
	v->a[95416] = sym_expansion;
	v->a[95417] = sym_command_substitution;
	v->a[95418] = 10;
	v->a[95419] = actions(3);
	small_parse_table_4771(v);
}

void	small_parse_table_4771(t_small_parse_table_array *v)
{
	v->a[95420] = 1;
	v->a[95421] = sym_comment;
	v->a[95422] = actions(3984);
	v->a[95423] = 1;
	v->a[95424] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95425] = actions(3987);
	v->a[95426] = 1;
	v->a[95427] = anon_sym_DOLLAR;
	v->a[95428] = actions(3990);
	v->a[95429] = 1;
	v->a[95430] = anon_sym_DQUOTE;
	v->a[95431] = actions(3992);
	v->a[95432] = 1;
	v->a[95433] = sym_string_content;
	v->a[95434] = actions(3995);
	v->a[95435] = 1;
	v->a[95436] = anon_sym_DOLLAR_LBRACE;
	v->a[95437] = actions(3998);
	v->a[95438] = 1;
	v->a[95439] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4772(v);
}

void	small_parse_table_4772(t_small_parse_table_array *v)
{
	v->a[95440] = actions(4001);
	v->a[95441] = 1;
	v->a[95442] = anon_sym_BQUOTE;
	v->a[95443] = state(1987);
	v->a[95444] = 1;
	v->a[95445] = aux_sym_string_repeat1;
	v->a[95446] = state(2107);
	v->a[95447] = 4;
	v->a[95448] = sym_arithmetic_expansion;
	v->a[95449] = sym_simple_expansion;
	v->a[95450] = sym_expansion;
	v->a[95451] = sym_command_substitution;
	v->a[95452] = 4;
	v->a[95453] = actions(3);
	v->a[95454] = 1;
	v->a[95455] = sym_comment;
	v->a[95456] = actions(1342);
	v->a[95457] = 1;
	v->a[95458] = sym_variable_name;
	v->a[95459] = actions(1340);
	small_parse_table_4773(v);
}

void	small_parse_table_4773(t_small_parse_table_array *v)
{
	v->a[95460] = 2;
	v->a[95461] = aux_sym__simple_variable_name_token1;
	v->a[95462] = aux_sym__multiline_variable_name_token1;
	v->a[95463] = actions(1338);
	v->a[95464] = 9;
	v->a[95465] = anon_sym_BANG;
	v->a[95466] = anon_sym_DASH;
	v->a[95467] = anon_sym_STAR;
	v->a[95468] = anon_sym_QMARK;
	v->a[95469] = anon_sym_DOLLAR;
	v->a[95470] = anon_sym_POUND;
	v->a[95471] = anon_sym_AT;
	v->a[95472] = anon_sym_0;
	v->a[95473] = anon_sym__;
	v->a[95474] = 10;
	v->a[95475] = actions(3);
	v->a[95476] = 1;
	v->a[95477] = sym_comment;
	v->a[95478] = actions(3856);
	v->a[95479] = 1;
	small_parse_table_4774(v);
}

void	small_parse_table_4774(t_small_parse_table_array *v)
{
	v->a[95480] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95481] = actions(3862);
	v->a[95482] = 1;
	v->a[95483] = sym_string_content;
	v->a[95484] = actions(3864);
	v->a[95485] = 1;
	v->a[95486] = anon_sym_DOLLAR_LBRACE;
	v->a[95487] = actions(3866);
	v->a[95488] = 1;
	v->a[95489] = anon_sym_DOLLAR_LPAREN;
	v->a[95490] = actions(3868);
	v->a[95491] = 1;
	v->a[95492] = anon_sym_BQUOTE;
	v->a[95493] = actions(4004);
	v->a[95494] = 1;
	v->a[95495] = anon_sym_DOLLAR;
	v->a[95496] = actions(4006);
	v->a[95497] = 1;
	v->a[95498] = anon_sym_DQUOTE;
	v->a[95499] = state(1992);
	small_parse_table_4775(v);
}

/* EOF small_parse_table_954.c */
