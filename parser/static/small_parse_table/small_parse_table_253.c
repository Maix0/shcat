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
	v->a[25300] = sym_word;
	v->a[25301] = actions(746);
	v->a[25302] = 16;
	v->a[25303] = anon_sym_PIPE;
	v->a[25304] = anon_sym_SEMI_SEMI;
	v->a[25305] = anon_sym_AMP_AMP;
	v->a[25306] = anon_sym_PIPE_PIPE;
	v->a[25307] = anon_sym_LT;
	v->a[25308] = anon_sym_GT;
	v->a[25309] = anon_sym_GT_GT;
	v->a[25310] = anon_sym_LT_AMP;
	v->a[25311] = anon_sym_GT_AMP;
	v->a[25312] = anon_sym_GT_PIPE;
	v->a[25313] = anon_sym_LT_GT;
	v->a[25314] = anon_sym_LT_LT;
	v->a[25315] = anon_sym_LT_LT_DASH;
	v->a[25316] = aux_sym_heredoc_redirect_token1;
	v->a[25317] = anon_sym_BQUOTE;
	v->a[25318] = anon_sym_SEMI;
	v->a[25319] = 13;
	small_parse_table_1266(v);
}

void	small_parse_table_1266(t_small_parse_table_array *v)
{
	v->a[25320] = actions(3);
	v->a[25321] = 1;
	v->a[25322] = sym_comment;
	v->a[25323] = actions(53);
	v->a[25324] = 1;
	v->a[25325] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25326] = actions(55);
	v->a[25327] = 1;
	v->a[25328] = anon_sym_DOLLAR;
	v->a[25329] = actions(57);
	v->a[25330] = 1;
	v->a[25331] = anon_sym_DQUOTE;
	v->a[25332] = actions(61);
	v->a[25333] = 1;
	v->a[25334] = anon_sym_DOLLAR_LBRACE;
	v->a[25335] = actions(63);
	v->a[25336] = 1;
	v->a[25337] = anon_sym_DOLLAR_LPAREN;
	v->a[25338] = actions(65);
	v->a[25339] = 1;
	small_parse_table_1267(v);
}

void	small_parse_table_1267(t_small_parse_table_array *v)
{
	v->a[25340] = anon_sym_BQUOTE;
	v->a[25341] = actions(535);
	v->a[25342] = 1;
	v->a[25343] = sym__bare_dollar;
	v->a[25344] = state(322);
	v->a[25345] = 1;
	v->a[25346] = aux_sym_command_repeat2;
	v->a[25347] = state(614);
	v->a[25348] = 1;
	v->a[25349] = sym_concatenation;
	v->a[25350] = actions(983);
	v->a[25351] = 3;
	v->a[25352] = sym_raw_string;
	v->a[25353] = sym_number;
	v->a[25354] = sym_word;
	v->a[25355] = state(570);
	v->a[25356] = 5;
	v->a[25357] = sym_arithmetic_expansion;
	v->a[25358] = sym_string;
	v->a[25359] = sym_simple_expansion;
	small_parse_table_1268(v);
}

void	small_parse_table_1268(t_small_parse_table_array *v)
{
	v->a[25360] = sym_expansion;
	v->a[25361] = sym_command_substitution;
	v->a[25362] = actions(565);
	v->a[25363] = 13;
	v->a[25364] = anon_sym_PIPE;
	v->a[25365] = anon_sym_AMP_AMP;
	v->a[25366] = anon_sym_PIPE_PIPE;
	v->a[25367] = anon_sym_LT;
	v->a[25368] = anon_sym_GT;
	v->a[25369] = anon_sym_GT_GT;
	v->a[25370] = anon_sym_LT_AMP;
	v->a[25371] = anon_sym_GT_AMP;
	v->a[25372] = anon_sym_GT_PIPE;
	v->a[25373] = anon_sym_LT_GT;
	v->a[25374] = anon_sym_LT_LT;
	v->a[25375] = anon_sym_LT_LT_DASH;
	v->a[25376] = aux_sym_heredoc_redirect_token1;
	v->a[25377] = 13;
	v->a[25378] = actions(3);
	v->a[25379] = 1;
	small_parse_table_1269(v);
}

void	small_parse_table_1269(t_small_parse_table_array *v)
{
	v->a[25380] = sym_comment;
	v->a[25381] = actions(53);
	v->a[25382] = 1;
	v->a[25383] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25384] = actions(55);
	v->a[25385] = 1;
	v->a[25386] = anon_sym_DOLLAR;
	v->a[25387] = actions(57);
	v->a[25388] = 1;
	v->a[25389] = anon_sym_DQUOTE;
	v->a[25390] = actions(61);
	v->a[25391] = 1;
	v->a[25392] = anon_sym_DOLLAR_LBRACE;
	v->a[25393] = actions(63);
	v->a[25394] = 1;
	v->a[25395] = anon_sym_DOLLAR_LPAREN;
	v->a[25396] = actions(65);
	v->a[25397] = 1;
	v->a[25398] = anon_sym_BQUOTE;
	v->a[25399] = actions(535);
	small_parse_table_1270(v);
}

/* EOF small_parse_table_253.c */
