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
	v->a[25301] = state(1944);
	v->a[25302] = 5;
	v->a[25303] = sym_arithmetic_expansion;
	v->a[25304] = sym_string;
	v->a[25305] = sym_simple_expansion;
	v->a[25306] = sym_expansion;
	v->a[25307] = sym_command_substitution;
	v->a[25308] = actions(878);
	v->a[25309] = 8;
	v->a[25310] = anon_sym_LT;
	v->a[25311] = anon_sym_GT;
	v->a[25312] = anon_sym_GT_GT;
	v->a[25313] = anon_sym_AMP_GT;
	v->a[25314] = anon_sym_AMP_GT_GT;
	v->a[25315] = anon_sym_LT_AMP;
	v->a[25316] = anon_sym_GT_AMP;
	v->a[25317] = anon_sym_GT_PIPE;
	v->a[25318] = 16;
	v->a[25319] = actions(3);
	small_parse_table_1266(v);
}

void	small_parse_table_1266(t_small_parse_table_array *v)
{
	v->a[25320] = 1;
	v->a[25321] = sym_comment;
	v->a[25322] = actions(17);
	v->a[25323] = 1;
	v->a[25324] = anon_sym_LPAREN;
	v->a[25325] = actions(471);
	v->a[25326] = 1;
	v->a[25327] = sym_file_descriptor;
	v->a[25328] = actions(497);
	v->a[25329] = 1;
	v->a[25330] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25331] = actions(499);
	v->a[25332] = 1;
	v->a[25333] = anon_sym_DOLLAR;
	v->a[25334] = actions(501);
	v->a[25335] = 1;
	v->a[25336] = anon_sym_DQUOTE;
	v->a[25337] = actions(503);
	v->a[25338] = 1;
	v->a[25339] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1267(v);
}

void	small_parse_table_1267(t_small_parse_table_array *v)
{
	v->a[25340] = actions(505);
	v->a[25341] = 1;
	v->a[25342] = anon_sym_DOLLAR_LPAREN;
	v->a[25343] = actions(507);
	v->a[25344] = 1;
	v->a[25345] = anon_sym_BQUOTE;
	v->a[25346] = actions(509);
	v->a[25347] = 1;
	v->a[25348] = sym__bare_dollar;
	v->a[25349] = state(395);
	v->a[25350] = 1;
	v->a[25351] = aux_sym_command_repeat2;
	v->a[25352] = state(729);
	v->a[25353] = 1;
	v->a[25354] = sym_concatenation;
	v->a[25355] = state(1436);
	v->a[25356] = 1;
	v->a[25357] = sym_subshell;
	v->a[25358] = actions(838);
	v->a[25359] = 3;
	small_parse_table_1268(v);
}

void	small_parse_table_1268(t_small_parse_table_array *v)
{
	v->a[25360] = sym_raw_string;
	v->a[25361] = sym_number;
	v->a[25362] = sym_word;
	v->a[25363] = state(910);
	v->a[25364] = 5;
	v->a[25365] = sym_arithmetic_expansion;
	v->a[25366] = sym_string;
	v->a[25367] = sym_simple_expansion;
	v->a[25368] = sym_expansion;
	v->a[25369] = sym_command_substitution;
	v->a[25370] = actions(457);
	v->a[25371] = 16;
	v->a[25372] = anon_sym_PIPE;
	v->a[25373] = anon_sym_AMP_AMP;
	v->a[25374] = anon_sym_PIPE_PIPE;
	v->a[25375] = anon_sym_LT;
	v->a[25376] = anon_sym_GT;
	v->a[25377] = anon_sym_GT_GT;
	v->a[25378] = anon_sym_AMP_GT;
	v->a[25379] = anon_sym_AMP_GT_GT;
	small_parse_table_1269(v);
}

void	small_parse_table_1269(t_small_parse_table_array *v)
{
	v->a[25380] = anon_sym_LT_AMP;
	v->a[25381] = anon_sym_GT_AMP;
	v->a[25382] = anon_sym_GT_PIPE;
	v->a[25383] = anon_sym_LT_AMP_DASH;
	v->a[25384] = anon_sym_GT_AMP_DASH;
	v->a[25385] = anon_sym_LT_LT;
	v->a[25386] = anon_sym_LT_LT_DASH;
	v->a[25387] = aux_sym_heredoc_redirect_token1;
	v->a[25388] = 8;
	v->a[25389] = actions(3);
	v->a[25390] = 1;
	v->a[25391] = sym_comment;
	v->a[25392] = actions(807);
	v->a[25393] = 1;
	v->a[25394] = anon_sym_PIPE;
	v->a[25395] = actions(811);
	v->a[25396] = 1;
	v->a[25397] = sym_file_descriptor;
	v->a[25398] = actions(869);
	v->a[25399] = 1;
	small_parse_table_1270(v);
}

/* EOF small_parse_table_253.c */
