/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1172.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5860(t_small_parse_table_array *v)
{
	v->a[117200] = 1;
	v->a[117201] = sym__special_character;
	v->a[117202] = actions(6841);
	v->a[117203] = 1;
	v->a[117204] = sym__comment_word;
	v->a[117205] = actions(6877);
	v->a[117206] = 1;
	v->a[117207] = anon_sym_DOLLAR;
	v->a[117208] = actions(6839);
	v->a[117209] = 3;
	v->a[117210] = sym_test_operator;
	v->a[117211] = sym__bare_dollar;
	v->a[117212] = sym_raw_string;
	v->a[117213] = state(1070);
	v->a[117214] = 7;
	v->a[117215] = sym_arithmetic_expansion;
	v->a[117216] = sym_brace_expression;
	v->a[117217] = sym_string;
	v->a[117218] = sym_number;
	v->a[117219] = sym_simple_expansion;
	small_parse_table_5861(v);
}

void	small_parse_table_5861(t_small_parse_table_array *v)
{
	v->a[117220] = sym_expansion;
	v->a[117221] = sym_command_substitution;
	v->a[117222] = 16;
	v->a[117223] = actions(3);
	v->a[117224] = 1;
	v->a[117225] = sym_comment;
	v->a[117226] = actions(1260);
	v->a[117227] = 1;
	v->a[117228] = aux_sym_number_token1;
	v->a[117229] = actions(1262);
	v->a[117230] = 1;
	v->a[117231] = aux_sym_number_token2;
	v->a[117232] = actions(1266);
	v->a[117233] = 1;
	v->a[117234] = anon_sym_DOLLAR_LPAREN;
	v->a[117235] = actions(1276);
	v->a[117236] = 1;
	v->a[117237] = sym__brace_start;
	v->a[117238] = actions(6879);
	v->a[117239] = 1;
	small_parse_table_5862(v);
}

void	small_parse_table_5862(t_small_parse_table_array *v)
{
	v->a[117240] = sym_word;
	v->a[117241] = actions(6881);
	v->a[117242] = 1;
	v->a[117243] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117244] = actions(6883);
	v->a[117245] = 1;
	v->a[117246] = anon_sym_DOLLAR;
	v->a[117247] = actions(6885);
	v->a[117248] = 1;
	v->a[117249] = sym__special_character;
	v->a[117250] = actions(6887);
	v->a[117251] = 1;
	v->a[117252] = anon_sym_DQUOTE;
	v->a[117253] = actions(6891);
	v->a[117254] = 1;
	v->a[117255] = anon_sym_DOLLAR_LBRACE;
	v->a[117256] = actions(6893);
	v->a[117257] = 1;
	v->a[117258] = anon_sym_BQUOTE;
	v->a[117259] = actions(6895);
	small_parse_table_5863(v);
}

void	small_parse_table_5863(t_small_parse_table_array *v)
{
	v->a[117260] = 1;
	v->a[117261] = anon_sym_DOLLAR_BQUOTE;
	v->a[117262] = actions(6897);
	v->a[117263] = 1;
	v->a[117264] = sym__comment_word;
	v->a[117265] = actions(6889);
	v->a[117266] = 3;
	v->a[117267] = sym_test_operator;
	v->a[117268] = sym__bare_dollar;
	v->a[117269] = sym_raw_string;
	v->a[117270] = state(1005);
	v->a[117271] = 7;
	v->a[117272] = sym_arithmetic_expansion;
	v->a[117273] = sym_brace_expression;
	v->a[117274] = sym_string;
	v->a[117275] = sym_number;
	v->a[117276] = sym_simple_expansion;
	v->a[117277] = sym_expansion;
	v->a[117278] = sym_command_substitution;
	v->a[117279] = 16;
	small_parse_table_5864(v);
}

void	small_parse_table_5864(t_small_parse_table_array *v)
{
	v->a[117280] = actions(3);
	v->a[117281] = 1;
	v->a[117282] = sym_comment;
	v->a[117283] = actions(1260);
	v->a[117284] = 1;
	v->a[117285] = aux_sym_number_token1;
	v->a[117286] = actions(1262);
	v->a[117287] = 1;
	v->a[117288] = aux_sym_number_token2;
	v->a[117289] = actions(1266);
	v->a[117290] = 1;
	v->a[117291] = anon_sym_DOLLAR_LPAREN;
	v->a[117292] = actions(1276);
	v->a[117293] = 1;
	v->a[117294] = sym__brace_start;
	v->a[117295] = actions(6879);
	v->a[117296] = 1;
	v->a[117297] = sym_word;
	v->a[117298] = actions(6881);
	v->a[117299] = 1;
	small_parse_table_5865(v);
}

/* EOF small_parse_table_1172.c */
