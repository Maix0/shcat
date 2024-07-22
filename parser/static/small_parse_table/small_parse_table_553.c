/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_553.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2765(t_small_parse_table_array *v)
{
	v->a[55300] = state(1682);
	v->a[55301] = 1;
	v->a[55302] = sym_case_item;
	v->a[55303] = state(2047);
	v->a[55304] = 1;
	v->a[55305] = sym__case_item_last;
	v->a[55306] = state(1877);
	v->a[55307] = 2;
	v->a[55308] = sym_concatenation;
	v->a[55309] = sym__extglob_blob;
	v->a[55310] = actions(1716);
	v->a[55311] = 3;
	v->a[55312] = sym_raw_string;
	v->a[55313] = sym_number;
	v->a[55314] = sym_word;
	v->a[55315] = state(1772);
	v->a[55316] = 5;
	v->a[55317] = sym_arithmetic_expansion;
	v->a[55318] = sym_string;
	v->a[55319] = sym_simple_expansion;
	small_parse_table_2766(v);
}

void	small_parse_table_2766(t_small_parse_table_array *v)
{
	v->a[55320] = sym_expansion;
	v->a[55321] = sym_command_substitution;
	v->a[55322] = 11;
	v->a[55323] = actions(3);
	v->a[55324] = 1;
	v->a[55325] = sym_comment;
	v->a[55326] = actions(782);
	v->a[55327] = 1;
	v->a[55328] = anon_sym_PIPE;
	v->a[55329] = actions(950);
	v->a[55330] = 1;
	v->a[55331] = ts_builtin_sym_end;
	v->a[55332] = actions(1882);
	v->a[55333] = 1;
	v->a[55334] = aux_sym_heredoc_redirect_token1;
	v->a[55335] = actions(1884);
	v->a[55336] = 1;
	v->a[55337] = sym_file_descriptor;
	v->a[55338] = state(746);
	v->a[55339] = 1;
	small_parse_table_2767(v);
}

void	small_parse_table_2767(t_small_parse_table_array *v)
{
	v->a[55340] = sym_terminator;
	v->a[55341] = actions(790);
	v->a[55342] = 2;
	v->a[55343] = anon_sym_LT_LT;
	v->a[55344] = anon_sym_LT_LT_DASH;
	v->a[55345] = actions(808);
	v->a[55346] = 2;
	v->a[55347] = anon_sym_SEMI_SEMI;
	v->a[55348] = anon_sym_SEMI;
	v->a[55349] = actions(810);
	v->a[55350] = 2;
	v->a[55351] = anon_sym_AMP_AMP;
	v->a[55352] = anon_sym_PIPE_PIPE;
	v->a[55353] = state(1046);
	v->a[55354] = 3;
	v->a[55355] = sym_file_redirect;
	v->a[55356] = sym_heredoc_redirect;
	v->a[55357] = aux_sym_redirected_statement_repeat1;
	v->a[55358] = actions(1880);
	v->a[55359] = 7;
	small_parse_table_2768(v);
}

void	small_parse_table_2768(t_small_parse_table_array *v)
{
	v->a[55360] = anon_sym_LT;
	v->a[55361] = anon_sym_GT;
	v->a[55362] = anon_sym_GT_GT;
	v->a[55363] = anon_sym_LT_AMP;
	v->a[55364] = anon_sym_GT_AMP;
	v->a[55365] = anon_sym_GT_PIPE;
	v->a[55366] = anon_sym_LT_GT;
	v->a[55367] = 11;
	v->a[55368] = actions(3);
	v->a[55369] = 1;
	v->a[55370] = sym_comment;
	v->a[55371] = actions(782);
	v->a[55372] = 1;
	v->a[55373] = anon_sym_PIPE;
	v->a[55374] = actions(886);
	v->a[55375] = 1;
	v->a[55376] = anon_sym_SEMI;
	v->a[55377] = actions(1876);
	v->a[55378] = 1;
	v->a[55379] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2769(v);
}

void	small_parse_table_2769(t_small_parse_table_array *v)
{
	v->a[55380] = actions(1878);
	v->a[55381] = 1;
	v->a[55382] = sym_file_descriptor;
	v->a[55383] = state(609);
	v->a[55384] = 1;
	v->a[55385] = sym_terminator;
	v->a[55386] = actions(784);
	v->a[55387] = 2;
	v->a[55388] = anon_sym_esac;
	v->a[55389] = anon_sym_SEMI_SEMI;
	v->a[55390] = actions(882);
	v->a[55391] = 2;
	v->a[55392] = anon_sym_AMP_AMP;
	v->a[55393] = anon_sym_PIPE_PIPE;
	v->a[55394] = actions(884);
	v->a[55395] = 2;
	v->a[55396] = anon_sym_LT_LT;
	v->a[55397] = anon_sym_LT_LT_DASH;
	v->a[55398] = state(1099);
	v->a[55399] = 3;
	small_parse_table_2770(v);
}

/* EOF small_parse_table_553.c */
