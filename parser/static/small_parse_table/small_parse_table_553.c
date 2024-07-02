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
	v->a[55300] = actions(3);
	v->a[55301] = 1;
	v->a[55302] = sym_comment;
	v->a[55303] = actions(692);
	v->a[55304] = 1;
	v->a[55305] = anon_sym_PIPE;
	v->a[55306] = actions(862);
	v->a[55307] = 1;
	v->a[55308] = ts_builtin_sym_end;
	v->a[55309] = actions(1863);
	v->a[55310] = 1;
	v->a[55311] = aux_sym_heredoc_redirect_token1;
	v->a[55312] = actions(1865);
	v->a[55313] = 1;
	v->a[55314] = sym_file_descriptor;
	v->a[55315] = state(735);
	v->a[55316] = 1;
	v->a[55317] = sym_terminator;
	v->a[55318] = actions(700);
	v->a[55319] = 2;
	small_parse_table_2766(v);
}

void	small_parse_table_2766(t_small_parse_table_array *v)
{
	v->a[55320] = anon_sym_LT_LT;
	v->a[55321] = anon_sym_LT_LT_DASH;
	v->a[55322] = actions(719);
	v->a[55323] = 2;
	v->a[55324] = anon_sym_AMP_AMP;
	v->a[55325] = anon_sym_PIPE_PIPE;
	v->a[55326] = actions(717);
	v->a[55327] = 3;
	v->a[55328] = anon_sym_SEMI_SEMI;
	v->a[55329] = anon_sym_AMP;
	v->a[55330] = anon_sym_SEMI;
	v->a[55331] = state(1086);
	v->a[55332] = 3;
	v->a[55333] = sym_file_redirect;
	v->a[55334] = sym_heredoc_redirect;
	v->a[55335] = aux_sym_redirected_statement_repeat1;
	v->a[55336] = actions(1861);
	v->a[55337] = 7;
	v->a[55338] = anon_sym_LT;
	v->a[55339] = anon_sym_GT;
	small_parse_table_2767(v);
}

void	small_parse_table_2767(t_small_parse_table_array *v)
{
	v->a[55340] = anon_sym_GT_GT;
	v->a[55341] = anon_sym_LT_AMP;
	v->a[55342] = anon_sym_GT_AMP;
	v->a[55343] = anon_sym_GT_PIPE;
	v->a[55344] = anon_sym_LT_GT;
	v->a[55345] = 3;
	v->a[55346] = actions(3);
	v->a[55347] = 1;
	v->a[55348] = sym_comment;
	v->a[55349] = actions(839);
	v->a[55350] = 2;
	v->a[55351] = sym_file_descriptor;
	v->a[55352] = sym__concat;
	v->a[55353] = actions(837);
	v->a[55354] = 20;
	v->a[55355] = anon_sym_AMP_AMP;
	v->a[55356] = anon_sym_PIPE_PIPE;
	v->a[55357] = anon_sym_LT;
	v->a[55358] = anon_sym_GT;
	v->a[55359] = anon_sym_GT_GT;
	small_parse_table_2768(v);
}

void	small_parse_table_2768(t_small_parse_table_array *v)
{
	v->a[55360] = anon_sym_LT_AMP;
	v->a[55361] = anon_sym_GT_AMP;
	v->a[55362] = anon_sym_GT_PIPE;
	v->a[55363] = anon_sym_LT_GT;
	v->a[55364] = aux_sym_heredoc_redirect_token1;
	v->a[55365] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55366] = aux_sym_concatenation_token1;
	v->a[55367] = anon_sym_DOLLAR;
	v->a[55368] = anon_sym_DQUOTE;
	v->a[55369] = sym_raw_string;
	v->a[55370] = sym_number;
	v->a[55371] = anon_sym_DOLLAR_LBRACE;
	v->a[55372] = anon_sym_DOLLAR_LPAREN;
	v->a[55373] = anon_sym_BQUOTE;
	v->a[55374] = sym_word;
	v->a[55375] = 3;
	v->a[55376] = actions(3);
	v->a[55377] = 1;
	v->a[55378] = sym_comment;
	v->a[55379] = actions(835);
	small_parse_table_2769(v);
}

void	small_parse_table_2769(t_small_parse_table_array *v)
{
	v->a[55380] = 2;
	v->a[55381] = sym_file_descriptor;
	v->a[55382] = sym__concat;
	v->a[55383] = actions(833);
	v->a[55384] = 20;
	v->a[55385] = anon_sym_AMP_AMP;
	v->a[55386] = anon_sym_PIPE_PIPE;
	v->a[55387] = anon_sym_LT;
	v->a[55388] = anon_sym_GT;
	v->a[55389] = anon_sym_GT_GT;
	v->a[55390] = anon_sym_LT_AMP;
	v->a[55391] = anon_sym_GT_AMP;
	v->a[55392] = anon_sym_GT_PIPE;
	v->a[55393] = anon_sym_LT_GT;
	v->a[55394] = aux_sym_heredoc_redirect_token1;
	v->a[55395] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55396] = aux_sym_concatenation_token1;
	v->a[55397] = anon_sym_DOLLAR;
	v->a[55398] = anon_sym_DQUOTE;
	v->a[55399] = sym_raw_string;
	small_parse_table_2770(v);
}

/* EOF small_parse_table_553.c */
