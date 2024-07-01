/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_803.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4015(t_small_parse_table_array *v)
{
	v->a[80300] = anon_sym_in;
	v->a[80301] = anon_sym_SEMI_SEMI;
	v->a[80302] = anon_sym_AMP;
	v->a[80303] = aux_sym_concatenation_token1;
	v->a[80304] = anon_sym_SEMI;
	v->a[80305] = 3;
	v->a[80306] = actions(3);
	v->a[80307] = 1;
	v->a[80308] = sym_comment;
	v->a[80309] = actions(846);
	v->a[80310] = 2;
	v->a[80311] = sym__concat;
	v->a[80312] = aux_sym_heredoc_redirect_token1;
	v->a[80313] = actions(844);
	v->a[80314] = 5;
	v->a[80315] = anon_sym_in;
	v->a[80316] = anon_sym_SEMI_SEMI;
	v->a[80317] = anon_sym_AMP;
	v->a[80318] = aux_sym_concatenation_token1;
	v->a[80319] = anon_sym_SEMI;
	small_parse_table_4016(v);
}

void	small_parse_table_4016(t_small_parse_table_array *v)
{
	v->a[80320] = 3;
	v->a[80321] = actions(664);
	v->a[80322] = 1;
	v->a[80323] = sym_comment;
	v->a[80324] = actions(800);
	v->a[80325] = 1;
	v->a[80326] = anon_sym_DOLLAR;
	v->a[80327] = actions(802);
	v->a[80328] = 5;
	v->a[80329] = sym_heredoc_content;
	v->a[80330] = sym_heredoc_end;
	v->a[80331] = anon_sym_DOLLAR_LBRACE;
	v->a[80332] = anon_sym_DOLLAR_LPAREN;
	v->a[80333] = anon_sym_BQUOTE;
	v->a[80334] = 3;
	v->a[80335] = actions(3);
	v->a[80336] = 1;
	v->a[80337] = sym_comment;
	v->a[80338] = actions(3575);
	v->a[80339] = 2;
	small_parse_table_4017(v);
}

void	small_parse_table_4017(t_small_parse_table_array *v)
{
	v->a[80340] = sym_regex;
	v->a[80341] = aux_sym_expansion_regex_token1;
	v->a[80342] = actions(3573);
	v->a[80343] = 4;
	v->a[80344] = anon_sym_RPAREN;
	v->a[80345] = anon_sym_RBRACE;
	v->a[80346] = anon_sym_DQUOTE;
	v->a[80347] = sym_raw_string;
	v->a[80348] = 6;
	v->a[80349] = actions(664);
	v->a[80350] = 1;
	v->a[80351] = sym_comment;
	v->a[80352] = actions(3577);
	v->a[80353] = 1;
	v->a[80354] = anon_sym_fi;
	v->a[80355] = actions(3579);
	v->a[80356] = 1;
	v->a[80357] = anon_sym_elif;
	v->a[80358] = actions(3581);
	v->a[80359] = 1;
	small_parse_table_4018(v);
}

void	small_parse_table_4018(t_small_parse_table_array *v)
{
	v->a[80360] = anon_sym_else;
	v->a[80361] = state(1968);
	v->a[80362] = 1;
	v->a[80363] = sym_else_clause;
	v->a[80364] = state(1818);
	v->a[80365] = 2;
	v->a[80366] = sym_elif_clause;
	v->a[80367] = aux_sym_if_statement_repeat1;
	v->a[80368] = 3;
	v->a[80369] = actions(664);
	v->a[80370] = 1;
	v->a[80371] = sym_comment;
	v->a[80372] = actions(906);
	v->a[80373] = 1;
	v->a[80374] = anon_sym_DOLLAR;
	v->a[80375] = actions(908);
	v->a[80376] = 5;
	v->a[80377] = sym_heredoc_content;
	v->a[80378] = sym_heredoc_end;
	v->a[80379] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4019(v);
}

void	small_parse_table_4019(t_small_parse_table_array *v)
{
	v->a[80380] = anon_sym_DOLLAR_LPAREN;
	v->a[80381] = anon_sym_BQUOTE;
	v->a[80382] = 3;
	v->a[80383] = actions(664);
	v->a[80384] = 1;
	v->a[80385] = sym_comment;
	v->a[80386] = actions(893);
	v->a[80387] = 1;
	v->a[80388] = anon_sym_DOLLAR;
	v->a[80389] = actions(895);
	v->a[80390] = 5;
	v->a[80391] = sym_heredoc_content;
	v->a[80392] = sym_heredoc_end;
	v->a[80393] = anon_sym_DOLLAR_LBRACE;
	v->a[80394] = anon_sym_DOLLAR_LPAREN;
	v->a[80395] = anon_sym_BQUOTE;
	v->a[80396] = 6;
	v->a[80397] = actions(664);
	v->a[80398] = 1;
	v->a[80399] = sym_comment;
	small_parse_table_4020(v);
}

/* EOF small_parse_table_803.c */
