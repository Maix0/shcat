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
	v->a[67300] = sym_arithmetic_expansion;
	v->a[67301] = sym_string;
	v->a[67302] = sym_simple_expansion;
	v->a[67303] = sym_expansion;
	v->a[67304] = sym_command_substitution;
	v->a[67305] = 5;
	v->a[67306] = actions(680);
	v->a[67307] = 1;
	v->a[67308] = sym_comment;
	v->a[67309] = state(1311);
	v->a[67310] = 1;
	v->a[67311] = aux_sym_concatenation_repeat1;
	v->a[67312] = actions(2579);
	v->a[67313] = 2;
	v->a[67314] = sym__concat;
	v->a[67315] = aux_sym_concatenation_token1;
	v->a[67316] = actions(1094);
	v->a[67317] = 4;
	v->a[67318] = anon_sym_PIPE;
	v->a[67319] = anon_sym_LT;
	small_parse_table_3366(v);
}

void	small_parse_table_3366(t_small_parse_table_array *v)
{
	v->a[67320] = anon_sym_GT;
	v->a[67321] = anon_sym_LT_LT;
	v->a[67322] = actions(1092);
	v->a[67323] = 10;
	v->a[67324] = sym_file_descriptor;
	v->a[67325] = sym_variable_name;
	v->a[67326] = anon_sym_AMP_AMP;
	v->a[67327] = anon_sym_PIPE_PIPE;
	v->a[67328] = anon_sym_GT_GT;
	v->a[67329] = anon_sym_LT_AMP;
	v->a[67330] = anon_sym_GT_AMP;
	v->a[67331] = anon_sym_GT_PIPE;
	v->a[67332] = anon_sym_LT_GT;
	v->a[67333] = anon_sym_LT_LT_DASH;
	v->a[67334] = 10;
	v->a[67335] = actions(3);
	v->a[67336] = 1;
	v->a[67337] = sym_comment;
	v->a[67338] = actions(850);
	v->a[67339] = 1;
	small_parse_table_3367(v);
}

void	small_parse_table_3367(t_small_parse_table_array *v)
{
	v->a[67340] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67341] = actions(854);
	v->a[67342] = 1;
	v->a[67343] = anon_sym_DQUOTE;
	v->a[67344] = actions(856);
	v->a[67345] = 1;
	v->a[67346] = anon_sym_DOLLAR_LBRACE;
	v->a[67347] = actions(858);
	v->a[67348] = 1;
	v->a[67349] = anon_sym_DOLLAR_LPAREN;
	v->a[67350] = actions(860);
	v->a[67351] = 1;
	v->a[67352] = anon_sym_BQUOTE;
	v->a[67353] = actions(2584);
	v->a[67354] = 1;
	v->a[67355] = anon_sym_DOLLAR;
	v->a[67356] = actions(2586);
	v->a[67357] = 1;
	v->a[67358] = sym__bare_dollar;
	v->a[67359] = actions(2582);
	small_parse_table_3368(v);
}

void	small_parse_table_3368(t_small_parse_table_array *v)
{
	v->a[67360] = 5;
	v->a[67361] = aux_sym_concatenation_token1;
	v->a[67362] = sym_raw_string;
	v->a[67363] = sym_number;
	v->a[67364] = sym__comment_word;
	v->a[67365] = sym_word;
	v->a[67366] = state(577);
	v->a[67367] = 5;
	v->a[67368] = sym_arithmetic_expansion;
	v->a[67369] = sym_string;
	v->a[67370] = sym_simple_expansion;
	v->a[67371] = sym_expansion;
	v->a[67372] = sym_command_substitution;
	v->a[67373] = 10;
	v->a[67374] = actions(3);
	v->a[67375] = 1;
	v->a[67376] = sym_comment;
	v->a[67377] = actions(821);
	v->a[67378] = 1;
	v->a[67379] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3369(v);
}

void	small_parse_table_3369(t_small_parse_table_array *v)
{
	v->a[67380] = actions(825);
	v->a[67381] = 1;
	v->a[67382] = anon_sym_DQUOTE;
	v->a[67383] = actions(827);
	v->a[67384] = 1;
	v->a[67385] = anon_sym_DOLLAR_LBRACE;
	v->a[67386] = actions(829);
	v->a[67387] = 1;
	v->a[67388] = anon_sym_DOLLAR_LPAREN;
	v->a[67389] = actions(831);
	v->a[67390] = 1;
	v->a[67391] = anon_sym_BQUOTE;
	v->a[67392] = actions(2590);
	v->a[67393] = 1;
	v->a[67394] = anon_sym_DOLLAR;
	v->a[67395] = actions(2592);
	v->a[67396] = 1;
	v->a[67397] = sym__bare_dollar;
	v->a[67398] = actions(2588);
	v->a[67399] = 5;
	small_parse_table_3370(v);
}

/* EOF small_parse_table_673.c */
