/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1013.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5065(t_small_parse_table_array *v)
{
	v->a[101300] = sym_comment;
	v->a[101301] = actions(6128);
	v->a[101302] = 1;
	v->a[101303] = sym__special_character;
	v->a[101304] = state(2026);
	v->a[101305] = 1;
	v->a[101306] = aux_sym__literal_repeat1;
	v->a[101307] = actions(5395);
	v->a[101308] = 5;
	v->a[101309] = sym_file_descriptor;
	v->a[101310] = sym_test_operator;
	v->a[101311] = sym__brace_start;
	v->a[101312] = ts_builtin_sym_end;
	v->a[101313] = aux_sym_heredoc_redirect_token1;
	v->a[101314] = actions(5393);
	v->a[101315] = 36;
	v->a[101316] = anon_sym_LPAREN_LPAREN;
	v->a[101317] = anon_sym_SEMI;
	v->a[101318] = anon_sym_PIPE_PIPE;
	v->a[101319] = anon_sym_AMP_AMP;
	small_parse_table_5066(v);
}

void	small_parse_table_5066(t_small_parse_table_array *v)
{
	v->a[101320] = anon_sym_PIPE;
	v->a[101321] = anon_sym_AMP;
	v->a[101322] = anon_sym_LT;
	v->a[101323] = anon_sym_GT;
	v->a[101324] = anon_sym_LT_LT;
	v->a[101325] = anon_sym_GT_GT;
	v->a[101326] = anon_sym_SEMI_SEMI;
	v->a[101327] = anon_sym_PIPE_AMP;
	v->a[101328] = anon_sym_AMP_GT;
	v->a[101329] = anon_sym_AMP_GT_GT;
	v->a[101330] = anon_sym_LT_AMP;
	v->a[101331] = anon_sym_GT_AMP;
	v->a[101332] = anon_sym_GT_PIPE;
	v->a[101333] = anon_sym_LT_AMP_DASH;
	v->a[101334] = anon_sym_GT_AMP_DASH;
	v->a[101335] = anon_sym_LT_LT_DASH;
	v->a[101336] = anon_sym_LT_LT_LT;
	v->a[101337] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101338] = anon_sym_DOLLAR_LBRACK;
	v->a[101339] = anon_sym_DOLLAR;
	small_parse_table_5067(v);
}

void	small_parse_table_5067(t_small_parse_table_array *v)
{
	v->a[101340] = anon_sym_DQUOTE;
	v->a[101341] = sym_raw_string;
	v->a[101342] = sym_ansi_c_string;
	v->a[101343] = aux_sym_number_token1;
	v->a[101344] = aux_sym_number_token2;
	v->a[101345] = anon_sym_DOLLAR_LBRACE;
	v->a[101346] = anon_sym_DOLLAR_LPAREN;
	v->a[101347] = anon_sym_BQUOTE;
	v->a[101348] = anon_sym_DOLLAR_BQUOTE;
	v->a[101349] = anon_sym_LT_LPAREN;
	v->a[101350] = anon_sym_GT_LPAREN;
	v->a[101351] = sym_word;
	v->a[101352] = 3;
	v->a[101353] = actions(3);
	v->a[101354] = 1;
	v->a[101355] = sym_comment;
	v->a[101356] = actions(1350);
	v->a[101357] = 6;
	v->a[101358] = sym_file_descriptor;
	v->a[101359] = sym__concat;
	small_parse_table_5068(v);
}

void	small_parse_table_5068(t_small_parse_table_array *v)
{
	v->a[101360] = sym_test_operator;
	v->a[101361] = sym__brace_start;
	v->a[101362] = ts_builtin_sym_end;
	v->a[101363] = aux_sym_heredoc_redirect_token1;
	v->a[101364] = actions(1348);
	v->a[101365] = 37;
	v->a[101366] = anon_sym_LPAREN_LPAREN;
	v->a[101367] = anon_sym_SEMI;
	v->a[101368] = anon_sym_PIPE_PIPE;
	v->a[101369] = anon_sym_AMP_AMP;
	v->a[101370] = anon_sym_PIPE;
	v->a[101371] = anon_sym_AMP;
	v->a[101372] = anon_sym_LT;
	v->a[101373] = anon_sym_GT;
	v->a[101374] = anon_sym_LT_LT;
	v->a[101375] = anon_sym_GT_GT;
	v->a[101376] = anon_sym_SEMI_SEMI;
	v->a[101377] = anon_sym_PIPE_AMP;
	v->a[101378] = anon_sym_AMP_GT;
	v->a[101379] = anon_sym_AMP_GT_GT;
	small_parse_table_5069(v);
}

void	small_parse_table_5069(t_small_parse_table_array *v)
{
	v->a[101380] = anon_sym_LT_AMP;
	v->a[101381] = anon_sym_GT_AMP;
	v->a[101382] = anon_sym_GT_PIPE;
	v->a[101383] = anon_sym_LT_AMP_DASH;
	v->a[101384] = anon_sym_GT_AMP_DASH;
	v->a[101385] = anon_sym_LT_LT_DASH;
	v->a[101386] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101387] = anon_sym_DOLLAR_LBRACK;
	v->a[101388] = aux_sym_concatenation_token1;
	v->a[101389] = anon_sym_DOLLAR;
	v->a[101390] = sym__special_character;
	v->a[101391] = anon_sym_DQUOTE;
	v->a[101392] = sym_raw_string;
	v->a[101393] = sym_ansi_c_string;
	v->a[101394] = aux_sym_number_token1;
	v->a[101395] = aux_sym_number_token2;
	v->a[101396] = anon_sym_DOLLAR_LBRACE;
	v->a[101397] = anon_sym_DOLLAR_LPAREN;
	v->a[101398] = anon_sym_BQUOTE;
	v->a[101399] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5070(v);
}

/* EOF small_parse_table_1013.c */
