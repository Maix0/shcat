/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1312.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6560(t_small_parse_table_array *v)
{
	v->a[131200] = anon_sym_EQ_TILDE;
	v->a[131201] = anon_sym_QMARK;
	v->a[131202] = 3;
	v->a[131203] = actions(71);
	v->a[131204] = 1;
	v->a[131205] = sym_comment;
	v->a[131206] = actions(1312);
	v->a[131207] = 14;
	v->a[131208] = anon_sym_PIPE;
	v->a[131209] = anon_sym_LT;
	v->a[131210] = anon_sym_GT;
	v->a[131211] = anon_sym_LT_LT;
	v->a[131212] = anon_sym_AMP_GT;
	v->a[131213] = anon_sym_LT_AMP;
	v->a[131214] = anon_sym_GT_AMP;
	v->a[131215] = anon_sym_DOLLAR;
	v->a[131216] = sym__special_character;
	v->a[131217] = aux_sym_number_token1;
	v->a[131218] = aux_sym_number_token2;
	v->a[131219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6561(v);
}

void	small_parse_table_6561(t_small_parse_table_array *v)
{
	v->a[131220] = anon_sym_BQUOTE;
	v->a[131221] = sym_word;
	v->a[131222] = actions(1314);
	v->a[131223] = 26;
	v->a[131224] = sym_file_descriptor;
	v->a[131225] = sym__concat;
	v->a[131226] = sym_test_operator;
	v->a[131227] = sym__brace_start;
	v->a[131228] = anon_sym_LPAREN_LPAREN;
	v->a[131229] = anon_sym_PIPE_PIPE;
	v->a[131230] = anon_sym_AMP_AMP;
	v->a[131231] = anon_sym_GT_GT;
	v->a[131232] = anon_sym_PIPE_AMP;
	v->a[131233] = anon_sym_RBRACK;
	v->a[131234] = anon_sym_AMP_GT_GT;
	v->a[131235] = anon_sym_GT_PIPE;
	v->a[131236] = anon_sym_LT_AMP_DASH;
	v->a[131237] = anon_sym_GT_AMP_DASH;
	v->a[131238] = anon_sym_LT_LT_DASH;
	v->a[131239] = anon_sym_LT_LT_LT;
	small_parse_table_6562(v);
}

void	small_parse_table_6562(t_small_parse_table_array *v)
{
	v->a[131240] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[131241] = anon_sym_DOLLAR_LBRACK;
	v->a[131242] = aux_sym_concatenation_token1;
	v->a[131243] = anon_sym_DQUOTE;
	v->a[131244] = sym_raw_string;
	v->a[131245] = sym_ansi_c_string;
	v->a[131246] = anon_sym_DOLLAR_LBRACE;
	v->a[131247] = anon_sym_DOLLAR_BQUOTE;
	v->a[131248] = anon_sym_LT_LPAREN;
	v->a[131249] = anon_sym_GT_LPAREN;
	v->a[131250] = 7;
	v->a[131251] = actions(71);
	v->a[131252] = 1;
	v->a[131253] = sym_comment;
	v->a[131254] = actions(1105);
	v->a[131255] = 1;
	v->a[131256] = aux_sym_concatenation_token1;
	v->a[131257] = actions(6708);
	v->a[131258] = 1;
	v->a[131259] = anon_sym_RBRACK;
	small_parse_table_6563(v);
}

void	small_parse_table_6563(t_small_parse_table_array *v)
{
	v->a[131260] = actions(6710);
	v->a[131261] = 1;
	v->a[131262] = sym__concat;
	v->a[131263] = state(2533);
	v->a[131264] = 1;
	v->a[131265] = aux_sym_concatenation_repeat1;
	v->a[131266] = actions(1273);
	v->a[131267] = 14;
	v->a[131268] = anon_sym_EQ;
	v->a[131269] = anon_sym_PIPE;
	v->a[131270] = anon_sym_CARET;
	v->a[131271] = anon_sym_AMP;
	v->a[131272] = anon_sym_LT;
	v->a[131273] = anon_sym_GT;
	v->a[131274] = anon_sym_LT_LT;
	v->a[131275] = anon_sym_GT_GT;
	v->a[131276] = anon_sym_PLUS;
	v->a[131277] = anon_sym_DASH;
	v->a[131278] = anon_sym_STAR;
	v->a[131279] = anon_sym_SLASH;
	small_parse_table_6564(v);
}

void	small_parse_table_6564(t_small_parse_table_array *v)
{
	v->a[131280] = anon_sym_PERCENT;
	v->a[131281] = anon_sym_STAR_STAR;
	v->a[131282] = actions(1369);
	v->a[131283] = 22;
	v->a[131284] = sym_test_operator;
	v->a[131285] = anon_sym_PLUS_PLUS;
	v->a[131286] = anon_sym_DASH_DASH;
	v->a[131287] = anon_sym_PLUS_EQ;
	v->a[131288] = anon_sym_DASH_EQ;
	v->a[131289] = anon_sym_STAR_EQ;
	v->a[131290] = anon_sym_SLASH_EQ;
	v->a[131291] = anon_sym_PERCENT_EQ;
	v->a[131292] = anon_sym_STAR_STAR_EQ;
	v->a[131293] = anon_sym_LT_LT_EQ;
	v->a[131294] = anon_sym_GT_GT_EQ;
	v->a[131295] = anon_sym_AMP_EQ;
	v->a[131296] = anon_sym_CARET_EQ;
	v->a[131297] = anon_sym_PIPE_EQ;
	v->a[131298] = anon_sym_PIPE_PIPE;
	v->a[131299] = anon_sym_AMP_AMP;
	small_parse_table_6565(v);
}

/* EOF small_parse_table_1312.c */
