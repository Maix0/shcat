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
	v->a[30300] = 26;
	v->a[30301] = anon_sym_esac;
	v->a[30302] = anon_sym_PIPE;
	v->a[30303] = anon_sym_SEMI_SEMI;
	v->a[30304] = anon_sym_AMP_AMP;
	v->a[30305] = anon_sym_PIPE_PIPE;
	v->a[30306] = anon_sym_LT;
	v->a[30307] = anon_sym_GT;
	v->a[30308] = anon_sym_GT_GT;
	v->a[30309] = anon_sym_LT_AMP;
	v->a[30310] = anon_sym_GT_AMP;
	v->a[30311] = anon_sym_GT_PIPE;
	v->a[30312] = anon_sym_LT_GT;
	v->a[30313] = anon_sym_LT_LT;
	v->a[30314] = anon_sym_LT_LT_DASH;
	v->a[30315] = aux_sym_heredoc_redirect_token1;
	v->a[30316] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30317] = anon_sym_AMP;
	v->a[30318] = anon_sym_DOLLAR;
	v->a[30319] = anon_sym_DQUOTE;
	small_parse_table_1516(v);
}

void	small_parse_table_1516(t_small_parse_table_array *v)
{
	v->a[30320] = sym_raw_string;
	v->a[30321] = sym_number;
	v->a[30322] = anon_sym_DOLLAR_LBRACE;
	v->a[30323] = anon_sym_DOLLAR_LPAREN;
	v->a[30324] = anon_sym_BQUOTE;
	v->a[30325] = sym_word;
	v->a[30326] = anon_sym_SEMI;
	v->a[30327] = 20;
	v->a[30328] = actions(3);
	v->a[30329] = 1;
	v->a[30330] = sym_comment;
	v->a[30331] = actions(17);
	v->a[30332] = 1;
	v->a[30333] = anon_sym_LPAREN;
	v->a[30334] = actions(55);
	v->a[30335] = 1;
	v->a[30336] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30337] = actions(57);
	v->a[30338] = 1;
	v->a[30339] = anon_sym_DOLLAR;
	small_parse_table_1517(v);
}

void	small_parse_table_1517(t_small_parse_table_array *v)
{
	v->a[30340] = actions(59);
	v->a[30341] = 1;
	v->a[30342] = anon_sym_DQUOTE;
	v->a[30343] = actions(63);
	v->a[30344] = 1;
	v->a[30345] = anon_sym_DOLLAR_LBRACE;
	v->a[30346] = actions(65);
	v->a[30347] = 1;
	v->a[30348] = anon_sym_DOLLAR_LPAREN;
	v->a[30349] = actions(67);
	v->a[30350] = 1;
	v->a[30351] = anon_sym_BQUOTE;
	v->a[30352] = actions(221);
	v->a[30353] = 1;
	v->a[30354] = sym_variable_name;
	v->a[30355] = actions(1164);
	v->a[30356] = 1;
	v->a[30357] = sym_file_descriptor;
	v->a[30358] = state(177);
	v->a[30359] = 1;
	small_parse_table_1518(v);
}

void	small_parse_table_1518(t_small_parse_table_array *v)
{
	v->a[30360] = sym_command_name;
	v->a[30361] = state(584);
	v->a[30362] = 1;
	v->a[30363] = sym_concatenation;
	v->a[30364] = state(639);
	v->a[30365] = 1;
	v->a[30366] = aux_sym_command_repeat1;
	v->a[30367] = state(640);
	v->a[30368] = 1;
	v->a[30369] = sym_variable_assignment;
	v->a[30370] = state(1109);
	v->a[30371] = 1;
	v->a[30372] = sym_subshell;
	v->a[30373] = state(1113);
	v->a[30374] = 1;
	v->a[30375] = sym_command;
	v->a[30376] = state(1218);
	v->a[30377] = 1;
	v->a[30378] = sym_file_redirect;
	v->a[30379] = actions(217);
	small_parse_table_1519(v);
}

void	small_parse_table_1519(t_small_parse_table_array *v)
{
	v->a[30380] = 3;
	v->a[30381] = sym_raw_string;
	v->a[30382] = sym_number;
	v->a[30383] = sym_word;
	v->a[30384] = state(347);
	v->a[30385] = 5;
	v->a[30386] = sym_arithmetic_expansion;
	v->a[30387] = sym_string;
	v->a[30388] = sym_simple_expansion;
	v->a[30389] = sym_expansion;
	v->a[30390] = sym_command_substitution;
	v->a[30391] = actions(1162);
	v->a[30392] = 7;
	v->a[30393] = anon_sym_LT;
	v->a[30394] = anon_sym_GT;
	v->a[30395] = anon_sym_GT_GT;
	v->a[30396] = anon_sym_LT_AMP;
	v->a[30397] = anon_sym_GT_AMP;
	v->a[30398] = anon_sym_GT_PIPE;
	v->a[30399] = anon_sym_LT_GT;
	small_parse_table_1520(v);
}

/* EOF small_parse_table_303.c */
