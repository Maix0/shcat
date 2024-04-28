/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1913.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9565(t_small_parse_table_array *v)
{
	v->a[191300] = anon_sym_DOLLAR_LBRACE;
	v->a[191301] = anon_sym_DOLLAR_BQUOTE;
	v->a[191302] = anon_sym_LT_LPAREN;
	v->a[191303] = anon_sym_GT_LPAREN;
	v->a[191304] = 23;
	v->a[191305] = actions(3);
	v->a[191306] = 1;
	v->a[191307] = sym_comment;
	v->a[191308] = actions(8506);
	v->a[191309] = 1;
	v->a[191310] = sym_word;
	v->a[191311] = actions(8510);
	v->a[191312] = 1;
	v->a[191313] = anon_sym_LPAREN;
	v->a[191314] = actions(8512);
	v->a[191315] = 1;
	v->a[191316] = anon_sym_DOLLAR_LBRACK;
	v->a[191317] = actions(8514);
	v->a[191318] = 1;
	v->a[191319] = anon_sym_DOLLAR;
	small_parse_table_9566(v);
}

void	small_parse_table_9566(t_small_parse_table_array *v)
{
	v->a[191320] = actions(8516);
	v->a[191321] = 1;
	v->a[191322] = sym__special_character;
	v->a[191323] = actions(8518);
	v->a[191324] = 1;
	v->a[191325] = anon_sym_DQUOTE;
	v->a[191326] = actions(8522);
	v->a[191327] = 1;
	v->a[191328] = aux_sym_number_token1;
	v->a[191329] = actions(8524);
	v->a[191330] = 1;
	v->a[191331] = aux_sym_number_token2;
	v->a[191332] = actions(8526);
	v->a[191333] = 1;
	v->a[191334] = anon_sym_DOLLAR_LBRACE;
	v->a[191335] = actions(8528);
	v->a[191336] = 1;
	v->a[191337] = anon_sym_DOLLAR_LPAREN;
	v->a[191338] = actions(8530);
	v->a[191339] = 1;
	small_parse_table_9567(v);
}

void	small_parse_table_9567(t_small_parse_table_array *v)
{
	v->a[191340] = anon_sym_BQUOTE;
	v->a[191341] = actions(8532);
	v->a[191342] = 1;
	v->a[191343] = anon_sym_DOLLAR_BQUOTE;
	v->a[191344] = actions(8536);
	v->a[191345] = 1;
	v->a[191346] = sym__comment_word;
	v->a[191347] = actions(8538);
	v->a[191348] = 1;
	v->a[191349] = sym__empty_value;
	v->a[191350] = actions(8540);
	v->a[191351] = 1;
	v->a[191352] = sym_test_operator;
	v->a[191353] = actions(8542);
	v->a[191354] = 1;
	v->a[191355] = sym__brace_start;
	v->a[191356] = state(2678);
	v->a[191357] = 1;
	v->a[191358] = aux_sym__literal_repeat1;
	v->a[191359] = actions(8508);
	small_parse_table_9568(v);
}

void	small_parse_table_9568(t_small_parse_table_array *v)
{
	v->a[191360] = 2;
	v->a[191361] = anon_sym_LPAREN_LPAREN;
	v->a[191362] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[191363] = actions(8520);
	v->a[191364] = 2;
	v->a[191365] = sym_raw_string;
	v->a[191366] = sym_ansi_c_string;
	v->a[191367] = actions(8534);
	v->a[191368] = 2;
	v->a[191369] = anon_sym_LT_LPAREN;
	v->a[191370] = anon_sym_GT_LPAREN;
	v->a[191371] = state(2934);
	v->a[191372] = 2;
	v->a[191373] = sym_concatenation;
	v->a[191374] = sym_array;
	v->a[191375] = state(2440);
	v->a[191376] = 9;
	v->a[191377] = sym_arithmetic_expansion;
	v->a[191378] = sym_brace_expression;
	v->a[191379] = sym_string;
	small_parse_table_9569(v);
}

void	small_parse_table_9569(t_small_parse_table_array *v)
{
	v->a[191380] = sym_translated_string;
	v->a[191381] = sym_number;
	v->a[191382] = sym_simple_expansion;
	v->a[191383] = sym_expansion;
	v->a[191384] = sym_command_substitution;
	v->a[191385] = sym_process_substitution;
	v->a[191386] = 19;
	v->a[191387] = actions(3);
	v->a[191388] = 1;
	v->a[191389] = sym_comment;
	v->a[191390] = actions(8030);
	v->a[191391] = 1;
	v->a[191392] = anon_sym_SLASH;
	v->a[191393] = actions(8032);
	v->a[191394] = 1;
	v->a[191395] = anon_sym_PERCENT;
	v->a[191396] = actions(8034);
	v->a[191397] = 1;
	v->a[191398] = anon_sym_COLON;
	v->a[191399] = actions(8544);
	small_parse_table_9570(v);
}

/* EOF small_parse_table_1913.c */
