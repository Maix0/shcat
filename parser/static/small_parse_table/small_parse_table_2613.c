/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2613.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13065(t_small_parse_table_array *v)
{
	v->a[261300] = anon_sym_BANG;
	v->a[261301] = anon_sym_DOLLAR;
	v->a[261302] = anon_sym_POUND;
	v->a[261303] = anon_sym_0;
	v->a[261304] = anon_sym__;
	v->a[261305] = 6;
	v->a[261306] = actions(3);
	v->a[261307] = 1;
	v->a[261308] = sym_comment;
	v->a[261309] = actions(11512);
	v->a[261310] = 1;
	v->a[261311] = aux_sym_concatenation_token1;
	v->a[261312] = actions(11514);
	v->a[261313] = 1;
	v->a[261314] = sym__concat;
	v->a[261315] = state(4777);
	v->a[261316] = 1;
	v->a[261317] = aux_sym_concatenation_repeat1;
	v->a[261318] = actions(4554);
	v->a[261319] = 2;
	small_parse_table_13066(v);
}

void	small_parse_table_13066(t_small_parse_table_array *v)
{
	v->a[261320] = sym_file_descriptor;
	v->a[261321] = aux_sym_heredoc_redirect_token1;
	v->a[261322] = actions(4552);
	v->a[261323] = 20;
	v->a[261324] = anon_sym_SEMI;
	v->a[261325] = anon_sym_PIPE_PIPE;
	v->a[261326] = anon_sym_AMP_AMP;
	v->a[261327] = anon_sym_PIPE;
	v->a[261328] = anon_sym_AMP;
	v->a[261329] = anon_sym_LT;
	v->a[261330] = anon_sym_GT;
	v->a[261331] = anon_sym_LT_LT;
	v->a[261332] = anon_sym_GT_GT;
	v->a[261333] = anon_sym_SEMI_SEMI;
	v->a[261334] = anon_sym_PIPE_AMP;
	v->a[261335] = anon_sym_AMP_GT;
	v->a[261336] = anon_sym_AMP_GT_GT;
	v->a[261337] = anon_sym_LT_AMP;
	v->a[261338] = anon_sym_GT_AMP;
	v->a[261339] = anon_sym_GT_PIPE;
	small_parse_table_13067(v);
}

void	small_parse_table_13067(t_small_parse_table_array *v)
{
	v->a[261340] = anon_sym_LT_AMP_DASH;
	v->a[261341] = anon_sym_GT_AMP_DASH;
	v->a[261342] = anon_sym_LT_LT_DASH;
	v->a[261343] = anon_sym_LT_LT_LT;
	v->a[261344] = 16;
	v->a[261345] = actions(3);
	v->a[261346] = 1;
	v->a[261347] = sym_comment;
	v->a[261348] = actions(11760);
	v->a[261349] = 1;
	v->a[261350] = anon_sym_BANG2;
	v->a[261351] = actions(11764);
	v->a[261352] = 1;
	v->a[261353] = anon_sym_DOLLAR_LPAREN;
	v->a[261354] = actions(11766);
	v->a[261355] = 1;
	v->a[261356] = anon_sym_BQUOTE;
	v->a[261357] = actions(11768);
	v->a[261358] = 1;
	v->a[261359] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_13068(v);
}

void	small_parse_table_13068(t_small_parse_table_array *v)
{
	v->a[261360] = actions(11770);
	v->a[261361] = 1;
	v->a[261362] = aux_sym__simple_variable_name_token1;
	v->a[261363] = actions(11772);
	v->a[261364] = 1;
	v->a[261365] = sym_variable_name;
	v->a[261366] = actions(11997);
	v->a[261367] = 1;
	v->a[261368] = anon_sym_RBRACE3;
	v->a[261369] = state(3532);
	v->a[261370] = 1;
	v->a[261371] = sym_subscript;
	v->a[261372] = state(6428);
	v->a[261373] = 1;
	v->a[261374] = aux_sym__expansion_body_repeat1;
	v->a[261375] = state(6472);
	v->a[261376] = 1;
	v->a[261377] = sym_command_substitution;
	v->a[261378] = state(7184);
	v->a[261379] = 1;
	small_parse_table_13069(v);
}

void	small_parse_table_13069(t_small_parse_table_array *v)
{
	v->a[261380] = sym__expansion_body;
	v->a[261381] = actions(11762);
	v->a[261382] = 2;
	v->a[261383] = anon_sym_POUND2;
	v->a[261384] = anon_sym_EQ2;
	v->a[261385] = actions(8050);
	v->a[261386] = 3;
	v->a[261387] = sym__external_expansion_sym_hash;
	v->a[261388] = sym__external_expansion_sym_bang;
	v->a[261389] = sym__external_expansion_sym_equal;
	v->a[261390] = actions(11754);
	v->a[261391] = 4;
	v->a[261392] = anon_sym_DASH;
	v->a[261393] = anon_sym_STAR;
	v->a[261394] = anon_sym_QMARK;
	v->a[261395] = anon_sym_AT2;
	v->a[261396] = actions(11756);
	v->a[261397] = 5;
	v->a[261398] = anon_sym_BANG;
	v->a[261399] = anon_sym_DOLLAR;
	small_parse_table_13070(v);
}

/* EOF small_parse_table_2613.c */
