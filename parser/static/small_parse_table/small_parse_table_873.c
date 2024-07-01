/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_873.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4365(t_small_parse_table_array *v)
{
	v->a[87300] = 1;
	v->a[87301] = sym_comment;
	v->a[87302] = actions(3414);
	v->a[87303] = 1;
	v->a[87304] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87305] = actions(3420);
	v->a[87306] = 1;
	v->a[87307] = sym_string_content;
	v->a[87308] = actions(3422);
	v->a[87309] = 1;
	v->a[87310] = anon_sym_DOLLAR_LBRACE;
	v->a[87311] = actions(3424);
	v->a[87312] = 1;
	v->a[87313] = anon_sym_DOLLAR_LPAREN;
	v->a[87314] = actions(3426);
	v->a[87315] = 1;
	v->a[87316] = anon_sym_BQUOTE;
	v->a[87317] = actions(3556);
	v->a[87318] = 1;
	v->a[87319] = anon_sym_DOLLAR;
	small_parse_table_4366(v);
}

void	small_parse_table_4366(t_small_parse_table_array *v)
{
	v->a[87320] = actions(3558);
	v->a[87321] = 1;
	v->a[87322] = anon_sym_DQUOTE;
	v->a[87323] = state(1837);
	v->a[87324] = 1;
	v->a[87325] = aux_sym_string_repeat1;
	v->a[87326] = state(1959);
	v->a[87327] = 4;
	v->a[87328] = sym_arithmetic_expansion;
	v->a[87329] = sym_simple_expansion;
	v->a[87330] = sym_expansion;
	v->a[87331] = sym_command_substitution;
	v->a[87332] = 4;
	v->a[87333] = actions(3);
	v->a[87334] = 1;
	v->a[87335] = sym_comment;
	v->a[87336] = actions(652);
	v->a[87337] = 1;
	v->a[87338] = sym_variable_name;
	v->a[87339] = actions(650);
	small_parse_table_4367(v);
}

void	small_parse_table_4367(t_small_parse_table_array *v)
{
	v->a[87340] = 2;
	v->a[87341] = aux_sym__simple_variable_name_token1;
	v->a[87342] = aux_sym__multiline_variable_name_token1;
	v->a[87343] = actions(648);
	v->a[87344] = 9;
	v->a[87345] = anon_sym_BANG;
	v->a[87346] = anon_sym_DASH;
	v->a[87347] = anon_sym_STAR;
	v->a[87348] = anon_sym_QMARK;
	v->a[87349] = anon_sym_DOLLAR;
	v->a[87350] = anon_sym_POUND;
	v->a[87351] = anon_sym_AT;
	v->a[87352] = anon_sym_0;
	v->a[87353] = anon_sym__;
	v->a[87354] = 10;
	v->a[87355] = actions(3);
	v->a[87356] = 1;
	v->a[87357] = sym_comment;
	v->a[87358] = actions(3414);
	v->a[87359] = 1;
	small_parse_table_4368(v);
}

void	small_parse_table_4368(t_small_parse_table_array *v)
{
	v->a[87360] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87361] = actions(3420);
	v->a[87362] = 1;
	v->a[87363] = sym_string_content;
	v->a[87364] = actions(3422);
	v->a[87365] = 1;
	v->a[87366] = anon_sym_DOLLAR_LBRACE;
	v->a[87367] = actions(3424);
	v->a[87368] = 1;
	v->a[87369] = anon_sym_DOLLAR_LPAREN;
	v->a[87370] = actions(3426);
	v->a[87371] = 1;
	v->a[87372] = anon_sym_BQUOTE;
	v->a[87373] = actions(3560);
	v->a[87374] = 1;
	v->a[87375] = anon_sym_DOLLAR;
	v->a[87376] = actions(3562);
	v->a[87377] = 1;
	v->a[87378] = anon_sym_DQUOTE;
	v->a[87379] = state(1858);
	small_parse_table_4369(v);
}

void	small_parse_table_4369(t_small_parse_table_array *v)
{
	v->a[87380] = 1;
	v->a[87381] = aux_sym_string_repeat1;
	v->a[87382] = state(1959);
	v->a[87383] = 4;
	v->a[87384] = sym_arithmetic_expansion;
	v->a[87385] = sym_simple_expansion;
	v->a[87386] = sym_expansion;
	v->a[87387] = sym_command_substitution;
	v->a[87388] = 4;
	v->a[87389] = actions(3);
	v->a[87390] = 1;
	v->a[87391] = sym_comment;
	v->a[87392] = actions(1381);
	v->a[87393] = 1;
	v->a[87394] = sym_variable_name;
	v->a[87395] = actions(1379);
	v->a[87396] = 2;
	v->a[87397] = aux_sym__simple_variable_name_token1;
	v->a[87398] = aux_sym__multiline_variable_name_token1;
	v->a[87399] = actions(1377);
	small_parse_table_4370(v);
}

/* EOF small_parse_table_873.c */
