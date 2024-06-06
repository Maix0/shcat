/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1222.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6110(t_small_parse_table_array *v)
{
	v->a[122200] = sym__special_character;
	v->a[122201] = actions(6797);
	v->a[122202] = 1;
	v->a[122203] = anon_sym_DQUOTE;
	v->a[122204] = actions(6801);
	v->a[122205] = 1;
	v->a[122206] = anon_sym_DOLLAR_LBRACE;
	v->a[122207] = actions(6803);
	v->a[122208] = 1;
	v->a[122209] = anon_sym_BQUOTE;
	v->a[122210] = actions(6805);
	v->a[122211] = 1;
	v->a[122212] = anon_sym_DOLLAR_BQUOTE;
	v->a[122213] = actions(6807);
	v->a[122214] = 1;
	v->a[122215] = sym__comment_word;
	v->a[122216] = actions(7059);
	v->a[122217] = 1;
	v->a[122218] = anon_sym_DOLLAR;
	v->a[122219] = actions(6799);
	small_parse_table_6111(v);
}

void	small_parse_table_6111(t_small_parse_table_array *v)
{
	v->a[122220] = 3;
	v->a[122221] = sym_test_operator;
	v->a[122222] = sym__bare_dollar;
	v->a[122223] = sym_raw_string;
	v->a[122224] = state(1108);
	v->a[122225] = 7;
	v->a[122226] = sym_arithmetic_expansion;
	v->a[122227] = sym_brace_expression;
	v->a[122228] = sym_string;
	v->a[122229] = sym_number;
	v->a[122230] = sym_simple_expansion;
	v->a[122231] = sym_expansion;
	v->a[122232] = sym_command_substitution;
	v->a[122233] = 16;
	v->a[122234] = actions(3);
	v->a[122235] = 1;
	v->a[122236] = sym_comment;
	v->a[122237] = actions(369);
	v->a[122238] = 1;
	v->a[122239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_6112(v);
}

void	small_parse_table_6112(t_small_parse_table_array *v)
{
	v->a[122240] = actions(375);
	v->a[122241] = 1;
	v->a[122242] = anon_sym_DQUOTE;
	v->a[122243] = actions(379);
	v->a[122244] = 1;
	v->a[122245] = aux_sym_number_token1;
	v->a[122246] = actions(381);
	v->a[122247] = 1;
	v->a[122248] = aux_sym_number_token2;
	v->a[122249] = actions(383);
	v->a[122250] = 1;
	v->a[122251] = anon_sym_DOLLAR_LBRACE;
	v->a[122252] = actions(385);
	v->a[122253] = 1;
	v->a[122254] = anon_sym_DOLLAR_LPAREN;
	v->a[122255] = actions(387);
	v->a[122256] = 1;
	v->a[122257] = anon_sym_BQUOTE;
	v->a[122258] = actions(389);
	v->a[122259] = 1;
	small_parse_table_6113(v);
}

void	small_parse_table_6113(t_small_parse_table_array *v)
{
	v->a[122260] = anon_sym_DOLLAR_BQUOTE;
	v->a[122261] = actions(395);
	v->a[122262] = 1;
	v->a[122263] = sym__brace_start;
	v->a[122264] = actions(6340);
	v->a[122265] = 1;
	v->a[122266] = sym_word;
	v->a[122267] = actions(6342);
	v->a[122268] = 1;
	v->a[122269] = sym__special_character;
	v->a[122270] = actions(6346);
	v->a[122271] = 1;
	v->a[122272] = sym__comment_word;
	v->a[122273] = actions(7061);
	v->a[122274] = 1;
	v->a[122275] = anon_sym_DOLLAR;
	v->a[122276] = actions(6344);
	v->a[122277] = 3;
	v->a[122278] = sym_test_operator;
	v->a[122279] = sym__bare_dollar;
	small_parse_table_6114(v);
}

void	small_parse_table_6114(t_small_parse_table_array *v)
{
	v->a[122280] = sym_raw_string;
	v->a[122281] = state(762);
	v->a[122282] = 7;
	v->a[122283] = sym_arithmetic_expansion;
	v->a[122284] = sym_brace_expression;
	v->a[122285] = sym_string;
	v->a[122286] = sym_number;
	v->a[122287] = sym_simple_expansion;
	v->a[122288] = sym_expansion;
	v->a[122289] = sym_command_substitution;
	v->a[122290] = 16;
	v->a[122291] = actions(3);
	v->a[122292] = 1;
	v->a[122293] = sym_comment;
	v->a[122294] = actions(2486);
	v->a[122295] = 1;
	v->a[122296] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122297] = actions(2488);
	v->a[122298] = 1;
	v->a[122299] = anon_sym_DOLLAR;
	small_parse_table_6115(v);
}

/* EOF small_parse_table_1222.c */
