/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_213.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1065(t_small_parse_table_array *v)
{
	v->a[21300] = sym__bare_dollar;
	v->a[21301] = actions(2664);
	v->a[21302] = 1;
	v->a[21303] = sym__brace_start;
	v->a[21304] = state(751);
	v->a[21305] = 1;
	v->a[21306] = aux_sym_command_repeat2;
	v->a[21307] = state(2417);
	v->a[21308] = 1;
	v->a[21309] = aux_sym__literal_repeat1;
	v->a[21310] = state(2558);
	v->a[21311] = 1;
	v->a[21312] = sym_concatenation;
	v->a[21313] = state(2562);
	v->a[21314] = 1;
	v->a[21315] = sym_herestring_redirect;
	v->a[21316] = actions(2630);
	v->a[21317] = 2;
	v->a[21318] = anon_sym_LPAREN_LPAREN;
	v->a[21319] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1066(v);
}

void	small_parse_table_1066(t_small_parse_table_array *v)
{
	v->a[21320] = actions(2632);
	v->a[21321] = 2;
	v->a[21322] = anon_sym_EQ_EQ;
	v->a[21323] = anon_sym_EQ_TILDE;
	v->a[21324] = actions(2644);
	v->a[21325] = 2;
	v->a[21326] = sym_raw_string;
	v->a[21327] = sym_ansi_c_string;
	v->a[21328] = actions(2658);
	v->a[21329] = 2;
	v->a[21330] = anon_sym_LT_LPAREN;
	v->a[21331] = anon_sym_GT_LPAREN;
	v->a[21332] = actions(1613);
	v->a[21333] = 7;
	v->a[21334] = anon_sym_PIPE;
	v->a[21335] = anon_sym_LT;
	v->a[21336] = anon_sym_GT;
	v->a[21337] = anon_sym_LT_LT;
	v->a[21338] = anon_sym_AMP_GT;
	v->a[21339] = anon_sym_LT_AMP;
	small_parse_table_1067(v);
}

void	small_parse_table_1067(t_small_parse_table_array *v)
{
	v->a[21340] = anon_sym_GT_AMP;
	v->a[21341] = state(2211);
	v->a[21342] = 9;
	v->a[21343] = sym_arithmetic_expansion;
	v->a[21344] = sym_brace_expression;
	v->a[21345] = sym_string;
	v->a[21346] = sym_translated_string;
	v->a[21347] = sym_number;
	v->a[21348] = sym_simple_expansion;
	v->a[21349] = sym_expansion;
	v->a[21350] = sym_command_substitution;
	v->a[21351] = sym_process_substitution;
	v->a[21352] = actions(1615);
	v->a[21353] = 10;
	v->a[21354] = sym_file_descriptor;
	v->a[21355] = anon_sym_PIPE_PIPE;
	v->a[21356] = anon_sym_AMP_AMP;
	v->a[21357] = anon_sym_GT_GT;
	v->a[21358] = anon_sym_PIPE_AMP;
	v->a[21359] = anon_sym_AMP_GT_GT;
	small_parse_table_1068(v);
}

void	small_parse_table_1068(t_small_parse_table_array *v)
{
	v->a[21360] = anon_sym_GT_PIPE;
	v->a[21361] = anon_sym_LT_AMP_DASH;
	v->a[21362] = anon_sym_GT_AMP_DASH;
	v->a[21363] = anon_sym_LT_LT_DASH;
	v->a[21364] = 30;
	v->a[21365] = actions(3);
	v->a[21366] = 1;
	v->a[21367] = sym_comment;
	v->a[21368] = actions(3727);
	v->a[21369] = 1;
	v->a[21370] = anon_sym_LT_LT_LT;
	v->a[21371] = actions(3729);
	v->a[21372] = 1;
	v->a[21373] = anon_sym_DOLLAR_LBRACK;
	v->a[21374] = actions(3731);
	v->a[21375] = 1;
	v->a[21376] = anon_sym_DOLLAR;
	v->a[21377] = actions(3733);
	v->a[21378] = 1;
	v->a[21379] = sym__special_character;
	small_parse_table_1069(v);
}

void	small_parse_table_1069(t_small_parse_table_array *v)
{
	v->a[21380] = actions(3735);
	v->a[21381] = 1;
	v->a[21382] = anon_sym_DQUOTE;
	v->a[21383] = actions(3737);
	v->a[21384] = 1;
	v->a[21385] = aux_sym_number_token1;
	v->a[21386] = actions(3739);
	v->a[21387] = 1;
	v->a[21388] = aux_sym_number_token2;
	v->a[21389] = actions(3741);
	v->a[21390] = 1;
	v->a[21391] = anon_sym_DOLLAR_LBRACE;
	v->a[21392] = actions(3743);
	v->a[21393] = 1;
	v->a[21394] = anon_sym_DOLLAR_LPAREN;
	v->a[21395] = actions(3745);
	v->a[21396] = 1;
	v->a[21397] = anon_sym_BQUOTE;
	v->a[21398] = actions(3747);
	v->a[21399] = 1;
	small_parse_table_1070(v);
}

/* EOF small_parse_table_213.c */
