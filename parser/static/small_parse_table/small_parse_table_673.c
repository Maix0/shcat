/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_673.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3365(t_small_parse_table_array *v)
{
	v->a[67300] = sym_string;
	v->a[67301] = sym_simple_expansion;
	v->a[67302] = sym_expansion;
	v->a[67303] = sym_command_substitution;
	v->a[67304] = 10;
	v->a[67305] = actions(3);
	v->a[67306] = 1;
	v->a[67307] = sym_comment;
	v->a[67308] = actions(459);
	v->a[67309] = 1;
	v->a[67310] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67311] = actions(461);
	v->a[67312] = 1;
	v->a[67313] = anon_sym_DOLLAR;
	v->a[67314] = actions(463);
	v->a[67315] = 1;
	v->a[67316] = anon_sym_DQUOTE;
	v->a[67317] = actions(465);
	v->a[67318] = 1;
	v->a[67319] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3366(v);
}

void	small_parse_table_3366(t_small_parse_table_array *v)
{
	v->a[67320] = actions(467);
	v->a[67321] = 1;
	v->a[67322] = anon_sym_DOLLAR_LPAREN;
	v->a[67323] = actions(469);
	v->a[67324] = 1;
	v->a[67325] = anon_sym_BQUOTE;
	v->a[67326] = actions(2518);
	v->a[67327] = 1;
	v->a[67328] = sym__bare_dollar;
	v->a[67329] = actions(2514);
	v->a[67330] = 5;
	v->a[67331] = aux_sym_concatenation_token1;
	v->a[67332] = sym_raw_string;
	v->a[67333] = sym_number;
	v->a[67334] = sym__comment_word;
	v->a[67335] = sym_word;
	v->a[67336] = state(524);
	v->a[67337] = 5;
	v->a[67338] = sym_arithmetic_expansion;
	v->a[67339] = sym_string;
	small_parse_table_3367(v);
}

void	small_parse_table_3367(t_small_parse_table_array *v)
{
	v->a[67340] = sym_simple_expansion;
	v->a[67341] = sym_expansion;
	v->a[67342] = sym_command_substitution;
	v->a[67343] = 10;
	v->a[67344] = actions(3);
	v->a[67345] = 1;
	v->a[67346] = sym_comment;
	v->a[67347] = actions(107);
	v->a[67348] = 1;
	v->a[67349] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67350] = actions(111);
	v->a[67351] = 1;
	v->a[67352] = anon_sym_DQUOTE;
	v->a[67353] = actions(115);
	v->a[67354] = 1;
	v->a[67355] = anon_sym_DOLLAR_LBRACE;
	v->a[67356] = actions(117);
	v->a[67357] = 1;
	v->a[67358] = anon_sym_DOLLAR_LPAREN;
	v->a[67359] = actions(119);
	small_parse_table_3368(v);
}

void	small_parse_table_3368(t_small_parse_table_array *v)
{
	v->a[67360] = 1;
	v->a[67361] = anon_sym_BQUOTE;
	v->a[67362] = actions(2552);
	v->a[67363] = 1;
	v->a[67364] = sym__bare_dollar;
	v->a[67365] = actions(2570);
	v->a[67366] = 1;
	v->a[67367] = anon_sym_DOLLAR;
	v->a[67368] = actions(2550);
	v->a[67369] = 5;
	v->a[67370] = aux_sym_concatenation_token1;
	v->a[67371] = sym_raw_string;
	v->a[67372] = sym_number;
	v->a[67373] = sym__comment_word;
	v->a[67374] = sym_word;
	v->a[67375] = state(376);
	v->a[67376] = 5;
	v->a[67377] = sym_arithmetic_expansion;
	v->a[67378] = sym_string;
	v->a[67379] = sym_simple_expansion;
	small_parse_table_3369(v);
}

void	small_parse_table_3369(t_small_parse_table_array *v)
{
	v->a[67380] = sym_expansion;
	v->a[67381] = sym_command_substitution;
	v->a[67382] = 10;
	v->a[67383] = actions(3);
	v->a[67384] = 1;
	v->a[67385] = sym_comment;
	v->a[67386] = actions(2574);
	v->a[67387] = 1;
	v->a[67388] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67389] = actions(2576);
	v->a[67390] = 1;
	v->a[67391] = anon_sym_DOLLAR;
	v->a[67392] = actions(2578);
	v->a[67393] = 1;
	v->a[67394] = anon_sym_DQUOTE;
	v->a[67395] = actions(2580);
	v->a[67396] = 1;
	v->a[67397] = anon_sym_DOLLAR_LBRACE;
	v->a[67398] = actions(2582);
	v->a[67399] = 1;
	small_parse_table_3370(v);
}

/* EOF small_parse_table_673.c */
