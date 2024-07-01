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
	v->a[25300] = anon_sym_AMP;
	v->a[25301] = anon_sym_SEMI;
	v->a[25302] = 12;
	v->a[25303] = actions(3);
	v->a[25304] = 1;
	v->a[25305] = sym_comment;
	v->a[25306] = actions(910);
	v->a[25307] = 1;
	v->a[25308] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25309] = actions(912);
	v->a[25310] = 1;
	v->a[25311] = anon_sym_DOLLAR;
	v->a[25312] = actions(914);
	v->a[25313] = 1;
	v->a[25314] = anon_sym_DQUOTE;
	v->a[25315] = actions(916);
	v->a[25316] = 1;
	v->a[25317] = anon_sym_DOLLAR_LBRACE;
	v->a[25318] = actions(918);
	v->a[25319] = 1;
	small_parse_table_1266(v);
}

void	small_parse_table_1266(t_small_parse_table_array *v)
{
	v->a[25320] = anon_sym_DOLLAR_LPAREN;
	v->a[25321] = actions(920);
	v->a[25322] = 1;
	v->a[25323] = anon_sym_BQUOTE;
	v->a[25324] = state(1259);
	v->a[25325] = 1;
	v->a[25326] = sym_concatenation;
	v->a[25327] = actions(713);
	v->a[25328] = 2;
	v->a[25329] = sym_file_descriptor;
	v->a[25330] = ts_builtin_sym_end;
	v->a[25331] = actions(978);
	v->a[25332] = 3;
	v->a[25333] = sym_raw_string;
	v->a[25334] = sym_number;
	v->a[25335] = sym_word;
	v->a[25336] = state(1149);
	v->a[25337] = 5;
	v->a[25338] = sym_arithmetic_expansion;
	v->a[25339] = sym_string;
	small_parse_table_1267(v);
}

void	small_parse_table_1267(t_small_parse_table_array *v)
{
	v->a[25340] = sym_simple_expansion;
	v->a[25341] = sym_expansion;
	v->a[25342] = sym_command_substitution;
	v->a[25343] = actions(711);
	v->a[25344] = 17;
	v->a[25345] = anon_sym_PIPE;
	v->a[25346] = anon_sym_SEMI_SEMI;
	v->a[25347] = anon_sym_AMP_AMP;
	v->a[25348] = anon_sym_PIPE_PIPE;
	v->a[25349] = anon_sym_LT;
	v->a[25350] = anon_sym_GT;
	v->a[25351] = anon_sym_GT_GT;
	v->a[25352] = anon_sym_LT_AMP;
	v->a[25353] = anon_sym_GT_AMP;
	v->a[25354] = anon_sym_GT_PIPE;
	v->a[25355] = anon_sym_LT_AMP_DASH;
	v->a[25356] = anon_sym_GT_AMP_DASH;
	v->a[25357] = anon_sym_LT_LT;
	v->a[25358] = anon_sym_LT_LT_DASH;
	v->a[25359] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1268(v);
}

void	small_parse_table_1268(t_small_parse_table_array *v)
{
	v->a[25360] = anon_sym_AMP;
	v->a[25361] = anon_sym_SEMI;
	v->a[25362] = 3;
	v->a[25363] = actions(870);
	v->a[25364] = 1;
	v->a[25365] = sym_comment;
	v->a[25366] = actions(980);
	v->a[25367] = 13;
	v->a[25368] = anon_sym_PIPE;
	v->a[25369] = anon_sym_EQ;
	v->a[25370] = anon_sym_LT;
	v->a[25371] = anon_sym_GT;
	v->a[25372] = anon_sym_GT_GT;
	v->a[25373] = anon_sym_LT_LT;
	v->a[25374] = anon_sym_CARET;
	v->a[25375] = anon_sym_AMP;
	v->a[25376] = anon_sym_PLUS;
	v->a[25377] = anon_sym_DASH;
	v->a[25378] = anon_sym_STAR;
	v->a[25379] = anon_sym_SLASH;
	small_parse_table_1269(v);
}

void	small_parse_table_1269(t_small_parse_table_array *v)
{
	v->a[25380] = anon_sym_PERCENT;
	v->a[25381] = actions(982);
	v->a[25382] = 21;
	v->a[25383] = anon_sym_AMP_AMP;
	v->a[25384] = anon_sym_PIPE_PIPE;
	v->a[25385] = anon_sym_RPAREN_RPAREN;
	v->a[25386] = anon_sym_PLUS_EQ;
	v->a[25387] = anon_sym_DASH_EQ;
	v->a[25388] = anon_sym_STAR_EQ;
	v->a[25389] = anon_sym_SLASH_EQ;
	v->a[25390] = anon_sym_PERCENT_EQ;
	v->a[25391] = anon_sym_LT_LT_EQ;
	v->a[25392] = anon_sym_GT_GT_EQ;
	v->a[25393] = anon_sym_AMP_EQ;
	v->a[25394] = anon_sym_CARET_EQ;
	v->a[25395] = anon_sym_PIPE_EQ;
	v->a[25396] = anon_sym_EQ_EQ;
	v->a[25397] = anon_sym_BANG_EQ;
	v->a[25398] = anon_sym_LT_EQ;
	v->a[25399] = anon_sym_GT_EQ;
	small_parse_table_1270(v);
}

/* EOF small_parse_table_253.c */
