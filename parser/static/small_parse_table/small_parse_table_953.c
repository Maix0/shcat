/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_953.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4765(t_small_parse_table_array *v)
{
	v->a[95300] = anon_sym_QMARK;
	v->a[95301] = anon_sym_DOLLAR;
	v->a[95302] = anon_sym_POUND;
	v->a[95303] = anon_sym_AT;
	v->a[95304] = anon_sym_0;
	v->a[95305] = anon_sym__;
	v->a[95306] = 4;
	v->a[95307] = actions(3);
	v->a[95308] = 1;
	v->a[95309] = sym_comment;
	v->a[95310] = actions(3966);
	v->a[95311] = 1;
	v->a[95312] = anon_sym_esac;
	v->a[95313] = actions(3968);
	v->a[95314] = 1;
	v->a[95315] = sym_extglob_pattern;
	v->a[95316] = actions(3964);
	v->a[95317] = 10;
	v->a[95318] = anon_sym_LPAREN;
	v->a[95319] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4766(v);
}

void	small_parse_table_4766(t_small_parse_table_array *v)
{
	v->a[95320] = anon_sym_DOLLAR;
	v->a[95321] = anon_sym_DQUOTE;
	v->a[95322] = sym_raw_string;
	v->a[95323] = sym_number;
	v->a[95324] = anon_sym_DOLLAR_LBRACE;
	v->a[95325] = anon_sym_DOLLAR_LPAREN;
	v->a[95326] = anon_sym_BQUOTE;
	v->a[95327] = sym_word;
	v->a[95328] = 4;
	v->a[95329] = actions(3);
	v->a[95330] = 1;
	v->a[95331] = sym_comment;
	v->a[95332] = actions(3974);
	v->a[95333] = 1;
	v->a[95334] = sym_variable_name;
	v->a[95335] = actions(3972);
	v->a[95336] = 2;
	v->a[95337] = aux_sym__simple_variable_name_token1;
	v->a[95338] = aux_sym__multiline_variable_name_token1;
	v->a[95339] = actions(3970);
	small_parse_table_4767(v);
}

void	small_parse_table_4767(t_small_parse_table_array *v)
{
	v->a[95340] = 9;
	v->a[95341] = anon_sym_BANG;
	v->a[95342] = anon_sym_DASH;
	v->a[95343] = anon_sym_STAR;
	v->a[95344] = anon_sym_QMARK;
	v->a[95345] = anon_sym_DOLLAR;
	v->a[95346] = anon_sym_POUND;
	v->a[95347] = anon_sym_AT;
	v->a[95348] = anon_sym_0;
	v->a[95349] = anon_sym__;
	v->a[95350] = 10;
	v->a[95351] = actions(3);
	v->a[95352] = 1;
	v->a[95353] = sym_comment;
	v->a[95354] = actions(3856);
	v->a[95355] = 1;
	v->a[95356] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95357] = actions(3862);
	v->a[95358] = 1;
	v->a[95359] = sym_string_content;
	small_parse_table_4768(v);
}

void	small_parse_table_4768(t_small_parse_table_array *v)
{
	v->a[95360] = actions(3864);
	v->a[95361] = 1;
	v->a[95362] = anon_sym_DOLLAR_LBRACE;
	v->a[95363] = actions(3866);
	v->a[95364] = 1;
	v->a[95365] = anon_sym_DOLLAR_LPAREN;
	v->a[95366] = actions(3868);
	v->a[95367] = 1;
	v->a[95368] = anon_sym_BQUOTE;
	v->a[95369] = actions(3976);
	v->a[95370] = 1;
	v->a[95371] = anon_sym_DOLLAR;
	v->a[95372] = actions(3978);
	v->a[95373] = 1;
	v->a[95374] = anon_sym_DQUOTE;
	v->a[95375] = state(1987);
	v->a[95376] = 1;
	v->a[95377] = aux_sym_string_repeat1;
	v->a[95378] = state(2107);
	v->a[95379] = 4;
	small_parse_table_4769(v);
}

void	small_parse_table_4769(t_small_parse_table_array *v)
{
	v->a[95380] = sym_arithmetic_expansion;
	v->a[95381] = sym_simple_expansion;
	v->a[95382] = sym_expansion;
	v->a[95383] = sym_command_substitution;
	v->a[95384] = 10;
	v->a[95385] = actions(3);
	v->a[95386] = 1;
	v->a[95387] = sym_comment;
	v->a[95388] = actions(3856);
	v->a[95389] = 1;
	v->a[95390] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95391] = actions(3862);
	v->a[95392] = 1;
	v->a[95393] = sym_string_content;
	v->a[95394] = actions(3864);
	v->a[95395] = 1;
	v->a[95396] = anon_sym_DOLLAR_LBRACE;
	v->a[95397] = actions(3866);
	v->a[95398] = 1;
	v->a[95399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4770(v);
}

/* EOF small_parse_table_953.c */
