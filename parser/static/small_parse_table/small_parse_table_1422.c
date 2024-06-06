/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1422.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7110(t_small_parse_table_array *v)
{
	v->a[142200] = actions(3);
	v->a[142201] = 1;
	v->a[142202] = sym_comment;
	v->a[142203] = actions(3020);
	v->a[142204] = 2;
	v->a[142205] = sym__concat;
	v->a[142206] = aux_sym_heredoc_redirect_token1;
	v->a[142207] = actions(3018);
	v->a[142208] = 5;
	v->a[142209] = anon_sym_in;
	v->a[142210] = anon_sym_SEMI_SEMI;
	v->a[142211] = anon_sym_AMP;
	v->a[142212] = aux_sym_concatenation_token1;
	v->a[142213] = anon_sym_SEMI;
	v->a[142214] = 3;
	v->a[142215] = actions(57);
	v->a[142216] = 1;
	v->a[142217] = sym_comment;
	v->a[142218] = actions(3018);
	v->a[142219] = 1;
	small_parse_table_7111(v);
}

void	small_parse_table_7111(t_small_parse_table_array *v)
{
	v->a[142220] = anon_sym_DOLLAR;
	v->a[142221] = actions(3020);
	v->a[142222] = 6;
	v->a[142223] = sym_heredoc_content;
	v->a[142224] = sym_heredoc_end;
	v->a[142225] = anon_sym_DOLLAR_LBRACE;
	v->a[142226] = anon_sym_DOLLAR_LPAREN;
	v->a[142227] = anon_sym_BQUOTE;
	v->a[142228] = anon_sym_DOLLAR_BQUOTE;
	v->a[142229] = 3;
	v->a[142230] = actions(57);
	v->a[142231] = 1;
	v->a[142232] = sym_comment;
	v->a[142233] = actions(2772);
	v->a[142234] = 1;
	v->a[142235] = anon_sym_DOLLAR;
	v->a[142236] = actions(2774);
	v->a[142237] = 6;
	v->a[142238] = sym_heredoc_content;
	v->a[142239] = sym_heredoc_end;
	small_parse_table_7112(v);
}

void	small_parse_table_7112(t_small_parse_table_array *v)
{
	v->a[142240] = anon_sym_DOLLAR_LBRACE;
	v->a[142241] = anon_sym_DOLLAR_LPAREN;
	v->a[142242] = anon_sym_BQUOTE;
	v->a[142243] = anon_sym_DOLLAR_BQUOTE;
	v->a[142244] = 6;
	v->a[142245] = actions(57);
	v->a[142246] = 1;
	v->a[142247] = sym_comment;
	v->a[142248] = actions(6312);
	v->a[142249] = 1;
	v->a[142250] = anon_sym_DOLLAR_LBRACE;
	v->a[142251] = actions(6314);
	v->a[142252] = 1;
	v->a[142253] = anon_sym_BQUOTE;
	v->a[142254] = actions(6316);
	v->a[142255] = 1;
	v->a[142256] = anon_sym_DOLLAR_BQUOTE;
	v->a[142257] = actions(8489);
	v->a[142258] = 1;
	v->a[142259] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_7113(v);
}

void	small_parse_table_7113(t_small_parse_table_array *v)
{
	v->a[142260] = state(636);
	v->a[142261] = 2;
	v->a[142262] = sym_expansion;
	v->a[142263] = sym_command_substitution;
	v->a[142264] = 6;
	v->a[142265] = actions(57);
	v->a[142266] = 1;
	v->a[142267] = sym_comment;
	v->a[142268] = actions(6717);
	v->a[142269] = 1;
	v->a[142270] = anon_sym_DOLLAR_LBRACE;
	v->a[142271] = actions(6719);
	v->a[142272] = 1;
	v->a[142273] = anon_sym_BQUOTE;
	v->a[142274] = actions(6721);
	v->a[142275] = 1;
	v->a[142276] = anon_sym_DOLLAR_BQUOTE;
	v->a[142277] = actions(8491);
	v->a[142278] = 1;
	v->a[142279] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_7114(v);
}

void	small_parse_table_7114(t_small_parse_table_array *v)
{
	v->a[142280] = state(1151);
	v->a[142281] = 2;
	v->a[142282] = sym_expansion;
	v->a[142283] = sym_command_substitution;
	v->a[142284] = 6;
	v->a[142285] = actions(57);
	v->a[142286] = 1;
	v->a[142287] = sym_comment;
	v->a[142288] = actions(8493);
	v->a[142289] = 1;
	v->a[142290] = anon_sym_fi;
	v->a[142291] = actions(8495);
	v->a[142292] = 1;
	v->a[142293] = anon_sym_elif;
	v->a[142294] = actions(8497);
	v->a[142295] = 1;
	v->a[142296] = anon_sym_else;
	v->a[142297] = state(3845);
	v->a[142298] = 1;
	v->a[142299] = sym_else_clause;
	small_parse_table_7115(v);
}

/* EOF small_parse_table_1422.c */
