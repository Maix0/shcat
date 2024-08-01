/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_503.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2515(t_small_parse_table_array *v)
{
	v->a[50300] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50301] = actions(2299);
	v->a[50302] = 1;
	v->a[50303] = sym_string_content;
	v->a[50304] = actions(2301);
	v->a[50305] = 1;
	v->a[50306] = anon_sym_DOLLAR_LBRACE;
	v->a[50307] = actions(2303);
	v->a[50308] = 1;
	v->a[50309] = anon_sym_DOLLAR_LPAREN;
	v->a[50310] = actions(2305);
	v->a[50311] = 1;
	v->a[50312] = anon_sym_BQUOTE;
	v->a[50313] = actions(2485);
	v->a[50314] = 1;
	v->a[50315] = anon_sym_DOLLAR;
	v->a[50316] = actions(2487);
	v->a[50317] = 1;
	v->a[50318] = anon_sym_DQUOTE;
	v->a[50319] = state(1176);
	small_parse_table_2516(v);
}

void	small_parse_table_2516(t_small_parse_table_array *v)
{
	v->a[50320] = 1;
	v->a[50321] = aux_sym_string_repeat1;
	v->a[50322] = state(1394);
	v->a[50323] = 4;
	v->a[50324] = sym_arithmetic_expansion;
	v->a[50325] = sym_simple_expansion;
	v->a[50326] = sym_expansion;
	v->a[50327] = sym_command_substitution;
	v->a[50328] = 8;
	v->a[50329] = actions(3);
	v->a[50330] = 1;
	v->a[50331] = sym_comment;
	v->a[50332] = actions(2277);
	v->a[50333] = 1;
	v->a[50334] = anon_sym_POUND;
	v->a[50335] = actions(2279);
	v->a[50336] = 1;
	v->a[50337] = aux_sym__simple_variable_name_token1;
	v->a[50338] = actions(2281);
	v->a[50339] = 1;
	small_parse_table_2517(v);
}

void	small_parse_table_2517(t_small_parse_table_array *v)
{
	v->a[50340] = anon_sym_0;
	v->a[50341] = actions(2283);
	v->a[50342] = 1;
	v->a[50343] = sym_variable_name;
	v->a[50344] = actions(2489);
	v->a[50345] = 1;
	v->a[50346] = anon_sym_RBRACE;
	v->a[50347] = state(1740);
	v->a[50348] = 1;
	v->a[50349] = sym__expansion_body;
	v->a[50350] = actions(2275);
	v->a[50351] = 6;
	v->a[50352] = anon_sym_BANG;
	v->a[50353] = anon_sym_DASH;
	v->a[50354] = anon_sym_STAR;
	v->a[50355] = anon_sym_QMARK;
	v->a[50356] = anon_sym_DOLLAR;
	v->a[50357] = anon_sym_AT;
	v->a[50358] = 10;
	v->a[50359] = actions(3);
	small_parse_table_2518(v);
}

void	small_parse_table_2518(t_small_parse_table_array *v)
{
	v->a[50360] = 1;
	v->a[50361] = sym_comment;
	v->a[50362] = actions(2293);
	v->a[50363] = 1;
	v->a[50364] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50365] = actions(2299);
	v->a[50366] = 1;
	v->a[50367] = sym_string_content;
	v->a[50368] = actions(2301);
	v->a[50369] = 1;
	v->a[50370] = anon_sym_DOLLAR_LBRACE;
	v->a[50371] = actions(2303);
	v->a[50372] = 1;
	v->a[50373] = anon_sym_DOLLAR_LPAREN;
	v->a[50374] = actions(2305);
	v->a[50375] = 1;
	v->a[50376] = anon_sym_BQUOTE;
	v->a[50377] = actions(2491);
	v->a[50378] = 1;
	v->a[50379] = anon_sym_DOLLAR;
	small_parse_table_2519(v);
}

void	small_parse_table_2519(t_small_parse_table_array *v)
{
	v->a[50380] = actions(2493);
	v->a[50381] = 1;
	v->a[50382] = anon_sym_DQUOTE;
	v->a[50383] = state(1144);
	v->a[50384] = 1;
	v->a[50385] = aux_sym_string_repeat1;
	v->a[50386] = state(1394);
	v->a[50387] = 4;
	v->a[50388] = sym_arithmetic_expansion;
	v->a[50389] = sym_simple_expansion;
	v->a[50390] = sym_expansion;
	v->a[50391] = sym_command_substitution;
	v->a[50392] = 5;
	v->a[50393] = actions(3);
	v->a[50394] = 1;
	v->a[50395] = sym_comment;
	v->a[50396] = actions(2093);
	v->a[50397] = 1;
	v->a[50398] = aux_sym_heredoc_redirect_token1;
	v->a[50399] = state(1109);
	small_parse_table_2520(v);
}

/* EOF small_parse_table_503.c */
