/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_853.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4265(t_small_parse_table_array *v)
{
	v->a[85300] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85301] = actions(3310);
	v->a[85302] = 1;
	v->a[85303] = anon_sym_DOLLAR;
	v->a[85304] = actions(3312);
	v->a[85305] = 1;
	v->a[85306] = anon_sym_DQUOTE;
	v->a[85307] = actions(3314);
	v->a[85308] = 1;
	v->a[85309] = anon_sym_DOLLAR_LBRACE;
	v->a[85310] = actions(3316);
	v->a[85311] = 1;
	v->a[85312] = anon_sym_DOLLAR_LPAREN;
	v->a[85313] = actions(3318);
	v->a[85314] = 1;
	v->a[85315] = anon_sym_BQUOTE;
	v->a[85316] = actions(3415);
	v->a[85317] = 1;
	v->a[85318] = sym__comment_word;
	v->a[85319] = actions(3417);
	small_parse_table_4266(v);
}

void	small_parse_table_4266(t_small_parse_table_array *v)
{
	v->a[85320] = 1;
	v->a[85321] = sym__empty_value;
	v->a[85322] = state(1461);
	v->a[85323] = 1;
	v->a[85324] = sym_concatenation;
	v->a[85325] = actions(3413);
	v->a[85326] = 3;
	v->a[85327] = sym_raw_string;
	v->a[85328] = sym_number;
	v->a[85329] = sym_word;
	v->a[85330] = state(1152);
	v->a[85331] = 5;
	v->a[85332] = sym_arithmetic_expansion;
	v->a[85333] = sym_string;
	v->a[85334] = sym_simple_expansion;
	v->a[85335] = sym_expansion;
	v->a[85336] = sym_command_substitution;
	v->a[85337] = 10;
	v->a[85338] = actions(3);
	v->a[85339] = 1;
	small_parse_table_4267(v);
}

void	small_parse_table_4267(t_small_parse_table_array *v)
{
	v->a[85340] = sym_comment;
	v->a[85341] = actions(749);
	v->a[85342] = 1;
	v->a[85343] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85344] = actions(753);
	v->a[85345] = 1;
	v->a[85346] = anon_sym_DQUOTE;
	v->a[85347] = actions(755);
	v->a[85348] = 1;
	v->a[85349] = anon_sym_DOLLAR_LBRACE;
	v->a[85350] = actions(757);
	v->a[85351] = 1;
	v->a[85352] = anon_sym_DOLLAR_LPAREN;
	v->a[85353] = actions(759);
	v->a[85354] = 1;
	v->a[85355] = anon_sym_BQUOTE;
	v->a[85356] = actions(3340);
	v->a[85357] = 1;
	v->a[85358] = sym__bare_dollar;
	v->a[85359] = actions(3419);
	small_parse_table_4268(v);
}

void	small_parse_table_4268(t_small_parse_table_array *v)
{
	v->a[85360] = 1;
	v->a[85361] = anon_sym_DOLLAR;
	v->a[85362] = actions(3338);
	v->a[85363] = 5;
	v->a[85364] = aux_sym_concatenation_token1;
	v->a[85365] = sym_raw_string;
	v->a[85366] = sym_number;
	v->a[85367] = sym__comment_word;
	v->a[85368] = sym_word;
	v->a[85369] = state(630);
	v->a[85370] = 5;
	v->a[85371] = sym_arithmetic_expansion;
	v->a[85372] = sym_string;
	v->a[85373] = sym_simple_expansion;
	v->a[85374] = sym_expansion;
	v->a[85375] = sym_command_substitution;
	v->a[85376] = 10;
	v->a[85377] = actions(3);
	v->a[85378] = 1;
	v->a[85379] = sym_comment;
	small_parse_table_4269(v);
}

void	small_parse_table_4269(t_small_parse_table_array *v)
{
	v->a[85380] = actions(3266);
	v->a[85381] = 1;
	v->a[85382] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85383] = actions(3270);
	v->a[85384] = 1;
	v->a[85385] = anon_sym_DQUOTE;
	v->a[85386] = actions(3272);
	v->a[85387] = 1;
	v->a[85388] = anon_sym_DOLLAR_LBRACE;
	v->a[85389] = actions(3274);
	v->a[85390] = 1;
	v->a[85391] = anon_sym_DOLLAR_LPAREN;
	v->a[85392] = actions(3276);
	v->a[85393] = 1;
	v->a[85394] = anon_sym_BQUOTE;
	v->a[85395] = actions(3278);
	v->a[85396] = 1;
	v->a[85397] = sym__bare_dollar;
	v->a[85398] = actions(3421);
	v->a[85399] = 1;
	small_parse_table_4270(v);
}

/* EOF small_parse_table_853.c */
