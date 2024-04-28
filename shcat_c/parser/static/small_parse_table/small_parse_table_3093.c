/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3093.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15465(t_small_parse_table_array *v)
{
	v->a[309300] = actions(14278);
	v->a[309301] = 1;
	v->a[309302] = anon_sym_LBRACK_LBRACK;
	v->a[309303] = state(4758);
	v->a[309304] = 4;
	v->a[309305] = sym_if_statement;
	v->a[309306] = sym_compound_statement;
	v->a[309307] = sym_subshell;
	v->a[309308] = sym_test_command;
	v->a[309309] = 2;
	v->a[309310] = actions(3);
	v->a[309311] = 1;
	v->a[309312] = sym_comment;
	v->a[309313] = actions(13333);
	v->a[309314] = 10;
	v->a[309315] = anon_sym_LPAREN_LPAREN;
	v->a[309316] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[309317] = anon_sym_DOLLAR_LBRACK;
	v->a[309318] = anon_sym_DOLLAR;
	v->a[309319] = anon_sym_DQUOTE;
	small_parse_table_15466(v);
}

void	small_parse_table_15466(t_small_parse_table_array *v)
{
	v->a[309320] = sym_string_content;
	v->a[309321] = anon_sym_DOLLAR_LBRACE;
	v->a[309322] = anon_sym_DOLLAR_LPAREN;
	v->a[309323] = anon_sym_BQUOTE;
	v->a[309324] = anon_sym_DOLLAR_BQUOTE;
	v->a[309325] = 8;
	v->a[309326] = actions(71);
	v->a[309327] = 1;
	v->a[309328] = sym_comment;
	v->a[309329] = actions(14268);
	v->a[309330] = 1;
	v->a[309331] = anon_sym_LPAREN_LPAREN;
	v->a[309332] = actions(14270);
	v->a[309333] = 1;
	v->a[309334] = anon_sym_LPAREN;
	v->a[309335] = actions(14272);
	v->a[309336] = 1;
	v->a[309337] = anon_sym_if;
	v->a[309338] = actions(14274);
	v->a[309339] = 1;
	small_parse_table_15467(v);
}

void	small_parse_table_15467(t_small_parse_table_array *v)
{
	v->a[309340] = anon_sym_LBRACE;
	v->a[309341] = actions(14276);
	v->a[309342] = 1;
	v->a[309343] = anon_sym_LBRACK;
	v->a[309344] = actions(14278);
	v->a[309345] = 1;
	v->a[309346] = anon_sym_LBRACK_LBRACK;
	v->a[309347] = state(4685);
	v->a[309348] = 4;
	v->a[309349] = sym_if_statement;
	v->a[309350] = sym_compound_statement;
	v->a[309351] = sym_subshell;
	v->a[309352] = sym_test_command;
	v->a[309353] = 8;
	v->a[309354] = actions(71);
	v->a[309355] = 1;
	v->a[309356] = sym_comment;
	v->a[309357] = actions(14268);
	v->a[309358] = 1;
	v->a[309359] = anon_sym_LPAREN_LPAREN;
	small_parse_table_15468(v);
}

void	small_parse_table_15468(t_small_parse_table_array *v)
{
	v->a[309360] = actions(14272);
	v->a[309361] = 1;
	v->a[309362] = anon_sym_if;
	v->a[309363] = actions(14274);
	v->a[309364] = 1;
	v->a[309365] = anon_sym_LBRACE;
	v->a[309366] = actions(14276);
	v->a[309367] = 1;
	v->a[309368] = anon_sym_LBRACK;
	v->a[309369] = actions(14278);
	v->a[309370] = 1;
	v->a[309371] = anon_sym_LBRACK_LBRACK;
	v->a[309372] = actions(14316);
	v->a[309373] = 1;
	v->a[309374] = anon_sym_LPAREN;
	v->a[309375] = state(4667);
	v->a[309376] = 4;
	v->a[309377] = sym_if_statement;
	v->a[309378] = sym_compound_statement;
	v->a[309379] = sym_subshell;
	small_parse_table_15469(v);
}

void	small_parse_table_15469(t_small_parse_table_array *v)
{
	v->a[309380] = sym_test_command;
	v->a[309381] = 8;
	v->a[309382] = actions(71);
	v->a[309383] = 1;
	v->a[309384] = sym_comment;
	v->a[309385] = actions(14268);
	v->a[309386] = 1;
	v->a[309387] = anon_sym_LPAREN_LPAREN;
	v->a[309388] = actions(14272);
	v->a[309389] = 1;
	v->a[309390] = anon_sym_if;
	v->a[309391] = actions(14274);
	v->a[309392] = 1;
	v->a[309393] = anon_sym_LBRACE;
	v->a[309394] = actions(14276);
	v->a[309395] = 1;
	v->a[309396] = anon_sym_LBRACK;
	v->a[309397] = actions(14278);
	v->a[309398] = 1;
	v->a[309399] = anon_sym_LBRACK_LBRACK;
	small_parse_table_15470(v);
}

/* EOF small_parse_table_3093.c */
