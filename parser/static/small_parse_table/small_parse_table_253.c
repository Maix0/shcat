/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_253.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1265(t_small_parse_table_array *v)
{
	v->a[25300] = 1;
	v->a[25301] = anon_sym_PIPE_PIPE;
	v->a[25302] = actions(738);
	v->a[25303] = 1;
	v->a[25304] = anon_sym_QMARK;
	v->a[25305] = actions(740);
	v->a[25306] = 1;
	v->a[25307] = anon_sym_EQ;
	v->a[25308] = actions(957);
	v->a[25309] = 1;
	v->a[25310] = anon_sym_RPAREN_RPAREN;
	v->a[25311] = actions(664);
	v->a[25312] = 2;
	v->a[25313] = anon_sym_LT;
	v->a[25314] = anon_sym_GT;
	v->a[25315] = actions(666);
	v->a[25316] = 2;
	v->a[25317] = anon_sym_GT_GT;
	v->a[25318] = anon_sym_LT_LT;
	v->a[25319] = actions(670);
	small_parse_table_1266(v);
}

void	small_parse_table_1266(t_small_parse_table_array *v)
{
	v->a[25320] = 2;
	v->a[25321] = anon_sym_EQ_EQ;
	v->a[25322] = anon_sym_BANG_EQ;
	v->a[25323] = actions(672);
	v->a[25324] = 2;
	v->a[25325] = anon_sym_LT_EQ;
	v->a[25326] = anon_sym_GT_EQ;
	v->a[25327] = actions(674);
	v->a[25328] = 2;
	v->a[25329] = anon_sym_PLUS;
	v->a[25330] = anon_sym_DASH;
	v->a[25331] = actions(678);
	v->a[25332] = 2;
	v->a[25333] = anon_sym_PLUS_PLUS2;
	v->a[25334] = anon_sym_DASH_DASH2;
	v->a[25335] = actions(676);
	v->a[25336] = 3;
	v->a[25337] = anon_sym_STAR;
	v->a[25338] = anon_sym_SLASH;
	v->a[25339] = anon_sym_PERCENT;
	small_parse_table_1267(v);
}

void	small_parse_table_1267(t_small_parse_table_array *v)
{
	v->a[25340] = actions(912);
	v->a[25341] = 10;
	v->a[25342] = anon_sym_PLUS_EQ;
	v->a[25343] = anon_sym_DASH_EQ;
	v->a[25344] = anon_sym_STAR_EQ;
	v->a[25345] = anon_sym_SLASH_EQ;
	v->a[25346] = anon_sym_PERCENT_EQ;
	v->a[25347] = anon_sym_LT_LT_EQ;
	v->a[25348] = anon_sym_GT_GT_EQ;
	v->a[25349] = anon_sym_AMP_EQ;
	v->a[25350] = anon_sym_CARET_EQ;
	v->a[25351] = anon_sym_PIPE_EQ;
	v->a[25352] = 11;
	v->a[25353] = actions(3);
	v->a[25354] = 1;
	v->a[25355] = sym_comment;
	v->a[25356] = actions(515);
	v->a[25357] = 1;
	v->a[25358] = sym_file_descriptor;
	v->a[25359] = actions(821);
	small_parse_table_1268(v);
}

void	small_parse_table_1268(t_small_parse_table_array *v)
{
	v->a[25360] = 1;
	v->a[25361] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25362] = actions(823);
	v->a[25363] = 1;
	v->a[25364] = anon_sym_DOLLAR;
	v->a[25365] = actions(825);
	v->a[25366] = 1;
	v->a[25367] = anon_sym_DQUOTE;
	v->a[25368] = actions(827);
	v->a[25369] = 1;
	v->a[25370] = anon_sym_DOLLAR_LBRACE;
	v->a[25371] = actions(829);
	v->a[25372] = 1;
	v->a[25373] = anon_sym_DOLLAR_LPAREN;
	v->a[25374] = state(274);
	v->a[25375] = 2;
	v->a[25376] = sym_concatenation;
	v->a[25377] = aux_sym_for_statement_repeat1;
	v->a[25378] = actions(919);
	v->a[25379] = 3;
	small_parse_table_1269(v);
}

void	small_parse_table_1269(t_small_parse_table_array *v)
{
	v->a[25380] = sym_raw_string;
	v->a[25381] = sym_number;
	v->a[25382] = sym_word;
	v->a[25383] = state(593);
	v->a[25384] = 5;
	v->a[25385] = sym_arithmetic_expansion;
	v->a[25386] = sym_string;
	v->a[25387] = sym_simple_expansion;
	v->a[25388] = sym_expansion;
	v->a[25389] = sym_command_substitution;
	v->a[25390] = actions(513);
	v->a[25391] = 17;
	v->a[25392] = anon_sym_PIPE;
	v->a[25393] = anon_sym_SEMI_SEMI;
	v->a[25394] = anon_sym_AMP_AMP;
	v->a[25395] = anon_sym_PIPE_PIPE;
	v->a[25396] = anon_sym_LT;
	v->a[25397] = anon_sym_GT;
	v->a[25398] = anon_sym_GT_GT;
	v->a[25399] = anon_sym_LT_AMP;
	small_parse_table_1270(v);
}

/* EOF small_parse_table_253.c */
