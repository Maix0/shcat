/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2392.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11960(t_small_parse_table_array *v)
{
	v->a[239200] = sym_simple_expansion;
	v->a[239201] = sym_expansion;
	v->a[239202] = sym_command_substitution;
	v->a[239203] = 18;
	v->a[239204] = actions(3);
	v->a[239205] = 1;
	v->a[239206] = sym_comment;
	v->a[239207] = actions(2580);
	v->a[239208] = 1;
	v->a[239209] = aux_sym_number_token1;
	v->a[239210] = actions(2582);
	v->a[239211] = 1;
	v->a[239212] = aux_sym_number_token2;
	v->a[239213] = actions(2586);
	v->a[239214] = 1;
	v->a[239215] = anon_sym_DOLLAR_LPAREN;
	v->a[239216] = actions(2596);
	v->a[239217] = 1;
	v->a[239218] = sym__brace_start;
	v->a[239219] = actions(9064);
	small_parse_table_11961(v);
}

void	small_parse_table_11961(t_small_parse_table_array *v)
{
	v->a[239220] = 1;
	v->a[239221] = anon_sym_DOLLAR_LBRACK;
	v->a[239222] = actions(9068);
	v->a[239223] = 1;
	v->a[239224] = anon_sym_DQUOTE;
	v->a[239225] = actions(9072);
	v->a[239226] = 1;
	v->a[239227] = anon_sym_DOLLAR_LBRACE;
	v->a[239228] = actions(9074);
	v->a[239229] = 1;
	v->a[239230] = anon_sym_BQUOTE;
	v->a[239231] = actions(9076);
	v->a[239232] = 1;
	v->a[239233] = anon_sym_DOLLAR_BQUOTE;
	v->a[239234] = actions(10548);
	v->a[239235] = 1;
	v->a[239236] = sym_word;
	v->a[239237] = actions(10554);
	v->a[239238] = 1;
	v->a[239239] = sym__comment_word;
	small_parse_table_11962(v);
}

void	small_parse_table_11962(t_small_parse_table_array *v)
{
	v->a[239240] = actions(11234);
	v->a[239241] = 1;
	v->a[239242] = anon_sym_DOLLAR;
	v->a[239243] = actions(9062);
	v->a[239244] = 2;
	v->a[239245] = anon_sym_LPAREN_LPAREN;
	v->a[239246] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[239247] = actions(9078);
	v->a[239248] = 2;
	v->a[239249] = anon_sym_LT_LPAREN;
	v->a[239250] = anon_sym_GT_LPAREN;
	v->a[239251] = actions(10550);
	v->a[239252] = 2;
	v->a[239253] = sym_test_operator;
	v->a[239254] = sym__special_character;
	v->a[239255] = actions(10552);
	v->a[239256] = 3;
	v->a[239257] = sym__bare_dollar;
	v->a[239258] = sym_raw_string;
	v->a[239259] = sym_ansi_c_string;
	small_parse_table_11963(v);
}

void	small_parse_table_11963(t_small_parse_table_array *v)
{
	v->a[239260] = state(1669);
	v->a[239261] = 9;
	v->a[239262] = sym_arithmetic_expansion;
	v->a[239263] = sym_brace_expression;
	v->a[239264] = sym_string;
	v->a[239265] = sym_translated_string;
	v->a[239266] = sym_number;
	v->a[239267] = sym_simple_expansion;
	v->a[239268] = sym_expansion;
	v->a[239269] = sym_command_substitution;
	v->a[239270] = sym_process_substitution;
	v->a[239271] = 18;
	v->a[239272] = actions(3);
	v->a[239273] = 1;
	v->a[239274] = sym_comment;
	v->a[239275] = actions(2580);
	v->a[239276] = 1;
	v->a[239277] = aux_sym_number_token1;
	v->a[239278] = actions(2582);
	v->a[239279] = 1;
	small_parse_table_11964(v);
}

void	small_parse_table_11964(t_small_parse_table_array *v)
{
	v->a[239280] = aux_sym_number_token2;
	v->a[239281] = actions(2586);
	v->a[239282] = 1;
	v->a[239283] = anon_sym_DOLLAR_LPAREN;
	v->a[239284] = actions(2596);
	v->a[239285] = 1;
	v->a[239286] = sym__brace_start;
	v->a[239287] = actions(9064);
	v->a[239288] = 1;
	v->a[239289] = anon_sym_DOLLAR_LBRACK;
	v->a[239290] = actions(9068);
	v->a[239291] = 1;
	v->a[239292] = anon_sym_DQUOTE;
	v->a[239293] = actions(9072);
	v->a[239294] = 1;
	v->a[239295] = anon_sym_DOLLAR_LBRACE;
	v->a[239296] = actions(9074);
	v->a[239297] = 1;
	v->a[239298] = anon_sym_BQUOTE;
	v->a[239299] = actions(9076);
	small_parse_table_11965(v);
}

/* EOF small_parse_table_2392.c */
