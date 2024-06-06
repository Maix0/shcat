/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_152.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_760(t_small_parse_table_array *v)
{
	v->a[15200] = anon_sym_GT_AMP_DASH;
	v->a[15201] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15202] = anon_sym_DQUOTE;
	v->a[15203] = sym_raw_string;
	v->a[15204] = anon_sym_DOLLAR_LBRACE;
	v->a[15205] = anon_sym_BQUOTE;
	v->a[15206] = anon_sym_DOLLAR_BQUOTE;
	v->a[15207] = actions(1689);
	v->a[15208] = 26;
	v->a[15209] = anon_sym_for;
	v->a[15210] = anon_sym_select;
	v->a[15211] = anon_sym_while;
	v->a[15212] = anon_sym_until;
	v->a[15213] = anon_sym_if;
	v->a[15214] = anon_sym_case;
	v->a[15215] = anon_sym_function;
	v->a[15216] = anon_sym_BANG;
	v->a[15217] = anon_sym_declare;
	v->a[15218] = anon_sym_typeset;
	v->a[15219] = anon_sym_export;
	small_parse_table_761(v);
}

void	small_parse_table_761(t_small_parse_table_array *v)
{
	v->a[15220] = anon_sym_readonly;
	v->a[15221] = anon_sym_local;
	v->a[15222] = anon_sym_unset;
	v->a[15223] = anon_sym_unsetenv;
	v->a[15224] = anon_sym_LT;
	v->a[15225] = anon_sym_GT;
	v->a[15226] = anon_sym_AMP_GT;
	v->a[15227] = anon_sym_LT_AMP;
	v->a[15228] = anon_sym_GT_AMP;
	v->a[15229] = anon_sym_DOLLAR;
	v->a[15230] = sym__special_character;
	v->a[15231] = aux_sym_number_token1;
	v->a[15232] = aux_sym_number_token2;
	v->a[15233] = anon_sym_DOLLAR_LPAREN;
	v->a[15234] = sym_word;
	v->a[15235] = 27;
	v->a[15236] = actions(3);
	v->a[15237] = 1;
	v->a[15238] = sym_comment;
	v->a[15239] = actions(2458);
	small_parse_table_762(v);
}

void	small_parse_table_762(t_small_parse_table_array *v)
{
	v->a[15240] = 1;
	v->a[15241] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15242] = actions(2460);
	v->a[15243] = 1;
	v->a[15244] = anon_sym_DOLLAR;
	v->a[15245] = actions(2462);
	v->a[15246] = 1;
	v->a[15247] = sym__special_character;
	v->a[15248] = actions(2464);
	v->a[15249] = 1;
	v->a[15250] = anon_sym_DQUOTE;
	v->a[15251] = actions(2466);
	v->a[15252] = 1;
	v->a[15253] = aux_sym_number_token1;
	v->a[15254] = actions(2468);
	v->a[15255] = 1;
	v->a[15256] = aux_sym_number_token2;
	v->a[15257] = actions(2470);
	v->a[15258] = 1;
	v->a[15259] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_763(v);
}

void	small_parse_table_763(t_small_parse_table_array *v)
{
	v->a[15260] = actions(2472);
	v->a[15261] = 1;
	v->a[15262] = anon_sym_DOLLAR_LPAREN;
	v->a[15263] = actions(2474);
	v->a[15264] = 1;
	v->a[15265] = anon_sym_BQUOTE;
	v->a[15266] = actions(2476);
	v->a[15267] = 1;
	v->a[15268] = anon_sym_DOLLAR_BQUOTE;
	v->a[15269] = actions(2478);
	v->a[15270] = 1;
	v->a[15271] = sym_file_descriptor;
	v->a[15272] = actions(2480);
	v->a[15273] = 1;
	v->a[15274] = sym_test_operator;
	v->a[15275] = actions(2482);
	v->a[15276] = 1;
	v->a[15277] = sym__brace_start;
	v->a[15278] = actions(2626);
	v->a[15279] = 1;
	small_parse_table_764(v);
}

void	small_parse_table_764(t_small_parse_table_array *v)
{
	v->a[15280] = aux_sym_heredoc_redirect_token1;
	v->a[15281] = state(2124);
	v->a[15282] = 1;
	v->a[15283] = aux_sym__heredoc_command;
	v->a[15284] = state(2852);
	v->a[15285] = 1;
	v->a[15286] = aux_sym__literal_repeat1;
	v->a[15287] = state(2882);
	v->a[15288] = 1;
	v->a[15289] = sym_concatenation;
	v->a[15290] = state(3860);
	v->a[15291] = 1;
	v->a[15292] = sym__heredoc_expression;
	v->a[15293] = state(3861);
	v->a[15294] = 1;
	v->a[15295] = sym__heredoc_pipeline;
	v->a[15296] = actions(2446);
	v->a[15297] = 2;
	v->a[15298] = sym_raw_string;
	v->a[15299] = sym_word;
	small_parse_table_765(v);
}

/* EOF small_parse_table_152.c */
