/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_923.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4615(t_small_parse_table_array *v)
{
	v->a[92300] = 1;
	v->a[92301] = sym_comment;
	v->a[92302] = actions(4236);
	v->a[92303] = 1;
	v->a[92304] = anon_sym_DOLLAR_LBRACE;
	v->a[92305] = actions(4238);
	v->a[92306] = 1;
	v->a[92307] = anon_sym_DOLLAR_LPAREN;
	v->a[92308] = actions(4240);
	v->a[92309] = 1;
	v->a[92310] = anon_sym_BQUOTE;
	v->a[92311] = state(683);
	v->a[92312] = 2;
	v->a[92313] = sym_expansion;
	v->a[92314] = sym_command_substitution;
	v->a[92315] = 4;
	v->a[92316] = actions(1404);
	v->a[92317] = 1;
	v->a[92318] = sym_comment;
	v->a[92319] = actions(4244);
	small_parse_table_4616(v);
}

void	small_parse_table_4616(t_small_parse_table_array *v)
{
	v->a[92320] = 1;
	v->a[92321] = anon_sym_elif;
	v->a[92322] = actions(4242);
	v->a[92323] = 2;
	v->a[92324] = anon_sym_fi;
	v->a[92325] = anon_sym_else;
	v->a[92326] = state(1918);
	v->a[92327] = 2;
	v->a[92328] = sym_elif_clause;
	v->a[92329] = aux_sym_if_statement_repeat1;
	v->a[92330] = 5;
	v->a[92331] = actions(1404);
	v->a[92332] = 1;
	v->a[92333] = sym_comment;
	v->a[92334] = actions(4247);
	v->a[92335] = 1;
	v->a[92336] = anon_sym_DOLLAR_LBRACE;
	v->a[92337] = actions(4249);
	v->a[92338] = 1;
	v->a[92339] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4617(v);
}

void	small_parse_table_4617(t_small_parse_table_array *v)
{
	v->a[92340] = actions(4251);
	v->a[92341] = 1;
	v->a[92342] = anon_sym_BQUOTE;
	v->a[92343] = state(2002);
	v->a[92344] = 2;
	v->a[92345] = sym_expansion;
	v->a[92346] = sym_command_substitution;
	v->a[92347] = 6;
	v->a[92348] = actions(1404);
	v->a[92349] = 1;
	v->a[92350] = sym_comment;
	v->a[92351] = actions(4208);
	v->a[92352] = 1;
	v->a[92353] = sym__heredoc_body_beginning;
	v->a[92354] = actions(4216);
	v->a[92355] = 1;
	v->a[92356] = sym_simple_heredoc_body;
	v->a[92357] = state(1556);
	v->a[92358] = 1;
	v->a[92359] = sym__heredoc_body;
	small_parse_table_4618(v);
}

void	small_parse_table_4618(t_small_parse_table_array *v)
{
	v->a[92360] = state(1558);
	v->a[92361] = 1;
	v->a[92362] = sym__simple_heredoc_body;
	v->a[92363] = state(2119);
	v->a[92364] = 1;
	v->a[92365] = sym_heredoc_body;
	v->a[92366] = 5;
	v->a[92367] = actions(1404);
	v->a[92368] = 1;
	v->a[92369] = sym_comment;
	v->a[92370] = actions(4253);
	v->a[92371] = 1;
	v->a[92372] = anon_sym_DOLLAR_LBRACE;
	v->a[92373] = actions(4255);
	v->a[92374] = 1;
	v->a[92375] = anon_sym_DOLLAR_LPAREN;
	v->a[92376] = actions(4257);
	v->a[92377] = 1;
	v->a[92378] = anon_sym_BQUOTE;
	v->a[92379] = state(1164);
	small_parse_table_4619(v);
}

void	small_parse_table_4619(t_small_parse_table_array *v)
{
	v->a[92380] = 2;
	v->a[92381] = sym_expansion;
	v->a[92382] = sym_command_substitution;
	v->a[92383] = 5;
	v->a[92384] = actions(1404);
	v->a[92385] = 1;
	v->a[92386] = sym_comment;
	v->a[92387] = actions(4208);
	v->a[92388] = 1;
	v->a[92389] = sym__heredoc_body_beginning;
	v->a[92390] = actions(4216);
	v->a[92391] = 1;
	v->a[92392] = sym_simple_heredoc_body;
	v->a[92393] = state(2119);
	v->a[92394] = 1;
	v->a[92395] = sym_heredoc_body;
	v->a[92396] = state(1537);
	v->a[92397] = 2;
	v->a[92398] = sym__heredoc_body;
	v->a[92399] = sym__simple_heredoc_body;
	small_parse_table_4620(v);
}

/* EOF small_parse_table_923.c */
