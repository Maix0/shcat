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
	v->a[55303] = actions(3808);
	v->a[55304] = 1;
	v->a[55305] = sym__special_character;
	v->a[55306] = state(1169);
	v->a[55307] = 1;
	v->a[55308] = aux_sym__literal_repeat1;
	v->a[55309] = actions(3519);
	v->a[55310] = 4;
	v->a[55311] = sym_file_descriptor;
	v->a[55312] = sym_test_operator;
	v->a[55313] = sym__brace_start;
	v->a[55314] = aux_sym_heredoc_redirect_token1;
	v->a[55315] = actions(3517);
	v->a[55316] = 32;
	v->a[55317] = anon_sym_PIPE;
	v->a[55318] = anon_sym_SEMI_SEMI;
	v->a[55319] = anon_sym_SEMI_AMP;
	small_parse_table_2766(v);
}

void	small_parse_table_2766(t_small_parse_table_array *v)
{
	v->a[55320] = anon_sym_SEMI_SEMI_AMP;
	v->a[55321] = anon_sym_PIPE_AMP;
	v->a[55322] = anon_sym_AMP_AMP;
	v->a[55323] = anon_sym_PIPE_PIPE;
	v->a[55324] = anon_sym_LT;
	v->a[55325] = anon_sym_GT;
	v->a[55326] = anon_sym_GT_GT;
	v->a[55327] = anon_sym_AMP_GT;
	v->a[55328] = anon_sym_AMP_GT_GT;
	v->a[55329] = anon_sym_LT_AMP;
	v->a[55330] = anon_sym_GT_AMP;
	v->a[55331] = anon_sym_GT_PIPE;
	v->a[55332] = anon_sym_LT_AMP_DASH;
	v->a[55333] = anon_sym_GT_AMP_DASH;
	v->a[55334] = anon_sym_LT_LT;
	v->a[55335] = anon_sym_LT_LT_DASH;
	v->a[55336] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55337] = anon_sym_AMP;
	v->a[55338] = anon_sym_DOLLAR;
	v->a[55339] = anon_sym_DQUOTE;
	small_parse_table_2767(v);
}

void	small_parse_table_2767(t_small_parse_table_array *v)
{
	v->a[55340] = sym_raw_string;
	v->a[55341] = aux_sym_number_token1;
	v->a[55342] = aux_sym_number_token2;
	v->a[55343] = anon_sym_DOLLAR_LBRACE;
	v->a[55344] = anon_sym_DOLLAR_LPAREN;
	v->a[55345] = anon_sym_BQUOTE;
	v->a[55346] = anon_sym_DOLLAR_BQUOTE;
	v->a[55347] = sym_word;
	v->a[55348] = anon_sym_SEMI;
	v->a[55349] = 3;
	v->a[55350] = actions(3);
	v->a[55351] = 1;
	v->a[55352] = sym_comment;
	v->a[55353] = actions(3062);
	v->a[55354] = 5;
	v->a[55355] = sym_file_descriptor;
	v->a[55356] = sym__concat;
	v->a[55357] = sym_test_operator;
	v->a[55358] = sym__brace_start;
	v->a[55359] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2768(v);
}

void	small_parse_table_2768(t_small_parse_table_array *v)
{
	v->a[55360] = actions(3060);
	v->a[55361] = 33;
	v->a[55362] = anon_sym_PIPE;
	v->a[55363] = anon_sym_RPAREN;
	v->a[55364] = anon_sym_SEMI_SEMI;
	v->a[55365] = anon_sym_PIPE_AMP;
	v->a[55366] = anon_sym_AMP_AMP;
	v->a[55367] = anon_sym_PIPE_PIPE;
	v->a[55368] = anon_sym_LT;
	v->a[55369] = anon_sym_GT;
	v->a[55370] = anon_sym_GT_GT;
	v->a[55371] = anon_sym_AMP_GT;
	v->a[55372] = anon_sym_AMP_GT_GT;
	v->a[55373] = anon_sym_LT_AMP;
	v->a[55374] = anon_sym_GT_AMP;
	v->a[55375] = anon_sym_GT_PIPE;
	v->a[55376] = anon_sym_LT_AMP_DASH;
	v->a[55377] = anon_sym_GT_AMP_DASH;
	v->a[55378] = anon_sym_LT_LT;
	v->a[55379] = anon_sym_LT_LT_DASH;
	small_parse_table_2769(v);
}

void	small_parse_table_2769(t_small_parse_table_array *v)
{
	v->a[55380] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55381] = anon_sym_AMP;
	v->a[55382] = aux_sym_concatenation_token1;
	v->a[55383] = anon_sym_DOLLAR;
	v->a[55384] = sym__special_character;
	v->a[55385] = anon_sym_DQUOTE;
	v->a[55386] = sym_raw_string;
	v->a[55387] = aux_sym_number_token1;
	v->a[55388] = aux_sym_number_token2;
	v->a[55389] = anon_sym_DOLLAR_LBRACE;
	v->a[55390] = anon_sym_DOLLAR_LPAREN;
	v->a[55391] = anon_sym_BQUOTE;
	v->a[55392] = anon_sym_DOLLAR_BQUOTE;
	v->a[55393] = sym_word;
	v->a[55394] = anon_sym_SEMI;
	v->a[55395] = 3;
	v->a[55396] = actions(3);
	v->a[55397] = 1;
	v->a[55398] = sym_comment;
	v->a[55399] = actions(2828);
	small_parse_table_2770(v);
}

/* EOF small_parse_table_553.c */
