/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_303.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1515(t_small_parse_table_array *v)
{
	v->a[30300] = 23;
	v->a[30301] = actions(3);
	v->a[30302] = 1;
	v->a[30303] = sym_comment;
	v->a[30304] = actions(17);
	v->a[30305] = 1;
	v->a[30306] = anon_sym_LPAREN;
	v->a[30307] = actions(27);
	v->a[30308] = 1;
	v->a[30309] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30310] = actions(29);
	v->a[30311] = 1;
	v->a[30312] = anon_sym_DOLLAR;
	v->a[30313] = actions(31);
	v->a[30314] = 1;
	v->a[30315] = anon_sym_DQUOTE;
	v->a[30316] = actions(35);
	v->a[30317] = 1;
	v->a[30318] = aux_sym_number_token1;
	v->a[30319] = actions(37);
	small_parse_table_1516(v);
}

void	small_parse_table_1516(t_small_parse_table_array *v)
{
	v->a[30320] = 1;
	v->a[30321] = aux_sym_number_token2;
	v->a[30322] = actions(39);
	v->a[30323] = 1;
	v->a[30324] = anon_sym_DOLLAR_LBRACE;
	v->a[30325] = actions(41);
	v->a[30326] = 1;
	v->a[30327] = anon_sym_DOLLAR_LPAREN;
	v->a[30328] = actions(43);
	v->a[30329] = 1;
	v->a[30330] = anon_sym_BQUOTE;
	v->a[30331] = actions(47);
	v->a[30332] = 1;
	v->a[30333] = sym_variable_name;
	v->a[30334] = actions(1102);
	v->a[30335] = 1;
	v->a[30336] = sym_file_descriptor;
	v->a[30337] = state(182);
	v->a[30338] = 1;
	v->a[30339] = sym_command_name;
	small_parse_table_1517(v);
}

void	small_parse_table_1517(t_small_parse_table_array *v)
{
	v->a[30340] = state(565);
	v->a[30341] = 1;
	v->a[30342] = sym_concatenation;
	v->a[30343] = state(572);
	v->a[30344] = 1;
	v->a[30345] = aux_sym_command_repeat1;
	v->a[30346] = state(730);
	v->a[30347] = 1;
	v->a[30348] = sym_variable_assignment;
	v->a[30349] = state(1175);
	v->a[30350] = 1;
	v->a[30351] = sym_subshell;
	v->a[30352] = state(1179);
	v->a[30353] = 1;
	v->a[30354] = sym_command;
	v->a[30355] = state(1237);
	v->a[30356] = 1;
	v->a[30357] = sym_file_redirect;
	v->a[30358] = actions(33);
	v->a[30359] = 2;
	small_parse_table_1518(v);
}

void	small_parse_table_1518(t_small_parse_table_array *v)
{
	v->a[30360] = sym_raw_string;
	v->a[30361] = sym_word;
	v->a[30362] = actions(1100);
	v->a[30363] = 2;
	v->a[30364] = anon_sym_LT_AMP_DASH;
	v->a[30365] = anon_sym_GT_AMP_DASH;
	v->a[30366] = state(311);
	v->a[30367] = 6;
	v->a[30368] = sym_arithmetic_expansion;
	v->a[30369] = sym_string;
	v->a[30370] = sym_number;
	v->a[30371] = sym_simple_expansion;
	v->a[30372] = sym_expansion;
	v->a[30373] = sym_command_substitution;
	v->a[30374] = actions(1098);
	v->a[30375] = 8;
	v->a[30376] = anon_sym_LT;
	v->a[30377] = anon_sym_GT;
	v->a[30378] = anon_sym_GT_GT;
	v->a[30379] = anon_sym_AMP_GT;
	small_parse_table_1519(v);
}

void	small_parse_table_1519(t_small_parse_table_array *v)
{
	v->a[30380] = anon_sym_AMP_GT_GT;
	v->a[30381] = anon_sym_LT_AMP;
	v->a[30382] = anon_sym_GT_AMP;
	v->a[30383] = anon_sym_GT_PIPE;
	v->a[30384] = 7;
	v->a[30385] = actions(3);
	v->a[30386] = 1;
	v->a[30387] = sym_comment;
	v->a[30388] = actions(1081);
	v->a[30389] = 1;
	v->a[30390] = sym_file_descriptor;
	v->a[30391] = actions(1095);
	v->a[30392] = 1;
	v->a[30393] = sym_variable_name;
	v->a[30394] = state(1151);
	v->a[30395] = 2;
	v->a[30396] = sym_variable_assignment;
	v->a[30397] = aux_sym_variable_assignments_repeat1;
	v->a[30398] = state(1160);
	v->a[30399] = 3;
	small_parse_table_1520(v);
}

/* EOF small_parse_table_303.c */
