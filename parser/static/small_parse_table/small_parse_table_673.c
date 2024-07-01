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
	v->a[67300] = 1;
	v->a[67301] = sym_extglob_pattern;
	v->a[67302] = state(1329);
	v->a[67303] = 1;
	v->a[67304] = aux_sym_case_statement_repeat1;
	v->a[67305] = state(1920);
	v->a[67306] = 1;
	v->a[67307] = sym_case_item;
	v->a[67308] = state(2165);
	v->a[67309] = 1;
	v->a[67310] = sym__case_item_last;
	v->a[67311] = state(2096);
	v->a[67312] = 2;
	v->a[67313] = sym_concatenation;
	v->a[67314] = sym__extglob_blob;
	v->a[67315] = actions(1770);
	v->a[67316] = 3;
	v->a[67317] = sym_raw_string;
	v->a[67318] = sym_number;
	v->a[67319] = sym_word;
	small_parse_table_3366(v);
}

void	small_parse_table_3366(t_small_parse_table_array *v)
{
	v->a[67320] = state(2001);
	v->a[67321] = 5;
	v->a[67322] = sym_arithmetic_expansion;
	v->a[67323] = sym_string;
	v->a[67324] = sym_simple_expansion;
	v->a[67325] = sym_expansion;
	v->a[67326] = sym_command_substitution;
	v->a[67327] = 3;
	v->a[67328] = actions(3);
	v->a[67329] = 1;
	v->a[67330] = sym_comment;
	v->a[67331] = actions(1027);
	v->a[67332] = 3;
	v->a[67333] = sym_file_descriptor;
	v->a[67334] = sym__concat;
	v->a[67335] = aux_sym_heredoc_redirect_token1;
	v->a[67336] = actions(1025);
	v->a[67337] = 18;
	v->a[67338] = anon_sym_esac;
	v->a[67339] = anon_sym_PIPE;
	small_parse_table_3367(v);
}

void	small_parse_table_3367(t_small_parse_table_array *v)
{
	v->a[67340] = anon_sym_SEMI_SEMI;
	v->a[67341] = anon_sym_AMP_AMP;
	v->a[67342] = anon_sym_PIPE_PIPE;
	v->a[67343] = anon_sym_LT;
	v->a[67344] = anon_sym_GT;
	v->a[67345] = anon_sym_GT_GT;
	v->a[67346] = anon_sym_LT_AMP;
	v->a[67347] = anon_sym_GT_AMP;
	v->a[67348] = anon_sym_GT_PIPE;
	v->a[67349] = anon_sym_LT_AMP_DASH;
	v->a[67350] = anon_sym_GT_AMP_DASH;
	v->a[67351] = anon_sym_LT_LT;
	v->a[67352] = anon_sym_LT_LT_DASH;
	v->a[67353] = anon_sym_AMP;
	v->a[67354] = aux_sym_concatenation_token1;
	v->a[67355] = anon_sym_SEMI;
	v->a[67356] = 3;
	v->a[67357] = actions(3);
	v->a[67358] = 1;
	v->a[67359] = sym_comment;
	small_parse_table_3368(v);
}

void	small_parse_table_3368(t_small_parse_table_array *v)
{
	v->a[67360] = actions(1015);
	v->a[67361] = 3;
	v->a[67362] = sym_file_descriptor;
	v->a[67363] = sym__concat;
	v->a[67364] = aux_sym_heredoc_redirect_token1;
	v->a[67365] = actions(1013);
	v->a[67366] = 18;
	v->a[67367] = anon_sym_esac;
	v->a[67368] = anon_sym_PIPE;
	v->a[67369] = anon_sym_SEMI_SEMI;
	v->a[67370] = anon_sym_AMP_AMP;
	v->a[67371] = anon_sym_PIPE_PIPE;
	v->a[67372] = anon_sym_LT;
	v->a[67373] = anon_sym_GT;
	v->a[67374] = anon_sym_GT_GT;
	v->a[67375] = anon_sym_LT_AMP;
	v->a[67376] = anon_sym_GT_AMP;
	v->a[67377] = anon_sym_GT_PIPE;
	v->a[67378] = anon_sym_LT_AMP_DASH;
	v->a[67379] = anon_sym_GT_AMP_DASH;
	small_parse_table_3369(v);
}

void	small_parse_table_3369(t_small_parse_table_array *v)
{
	v->a[67380] = anon_sym_LT_LT;
	v->a[67381] = anon_sym_LT_LT_DASH;
	v->a[67382] = anon_sym_AMP;
	v->a[67383] = aux_sym_concatenation_token1;
	v->a[67384] = anon_sym_SEMI;
	v->a[67385] = 3;
	v->a[67386] = actions(3);
	v->a[67387] = 1;
	v->a[67388] = sym_comment;
	v->a[67389] = actions(2228);
	v->a[67390] = 3;
	v->a[67391] = sym_file_descriptor;
	v->a[67392] = ts_builtin_sym_end;
	v->a[67393] = aux_sym_heredoc_redirect_token1;
	v->a[67394] = actions(2230);
	v->a[67395] = 18;
	v->a[67396] = anon_sym_PIPE;
	v->a[67397] = anon_sym_RPAREN;
	v->a[67398] = anon_sym_SEMI_SEMI;
	v->a[67399] = anon_sym_AMP_AMP;
	small_parse_table_3370(v);
}

/* EOF small_parse_table_673.c */
