/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_602.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3010(t_small_parse_table_array *v)
{
	v->a[60200] = anon_sym_LT_AMP_DASH;
	v->a[60201] = anon_sym_GT_AMP_DASH;
	v->a[60202] = anon_sym_LT_LT_DASH;
	v->a[60203] = anon_sym_LT_LT_LT;
	v->a[60204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60205] = anon_sym_DOLLAR_LBRACK;
	v->a[60206] = anon_sym_DOLLAR;
	v->a[60207] = sym__special_character;
	v->a[60208] = anon_sym_DQUOTE;
	v->a[60209] = sym_raw_string;
	v->a[60210] = sym_ansi_c_string;
	v->a[60211] = aux_sym_number_token1;
	v->a[60212] = aux_sym_number_token2;
	v->a[60213] = anon_sym_DOLLAR_LBRACE;
	v->a[60214] = anon_sym_DOLLAR_LPAREN;
	v->a[60215] = anon_sym_BQUOTE;
	v->a[60216] = anon_sym_DOLLAR_BQUOTE;
	v->a[60217] = anon_sym_LT_LPAREN;
	v->a[60218] = anon_sym_GT_LPAREN;
	v->a[60219] = sym_word;
	small_parse_table_3011(v);
}

void	small_parse_table_3011(t_small_parse_table_array *v)
{
	v->a[60220] = 3;
	v->a[60221] = actions(3);
	v->a[60222] = 1;
	v->a[60223] = sym_comment;
	v->a[60224] = actions(1310);
	v->a[60225] = 6;
	v->a[60226] = sym_file_descriptor;
	v->a[60227] = sym__concat;
	v->a[60228] = sym_variable_name;
	v->a[60229] = sym_test_operator;
	v->a[60230] = sym__brace_start;
	v->a[60231] = aux_sym_heredoc_redirect_token1;
	v->a[60232] = actions(1308);
	v->a[60233] = 40;
	v->a[60234] = anon_sym_LPAREN_LPAREN;
	v->a[60235] = anon_sym_SEMI;
	v->a[60236] = anon_sym_PIPE_PIPE;
	v->a[60237] = anon_sym_AMP_AMP;
	v->a[60238] = anon_sym_PIPE;
	v->a[60239] = anon_sym_AMP;
	small_parse_table_3012(v);
}

void	small_parse_table_3012(t_small_parse_table_array *v)
{
	v->a[60240] = anon_sym_LT;
	v->a[60241] = anon_sym_GT;
	v->a[60242] = anon_sym_LT_LT;
	v->a[60243] = anon_sym_GT_GT;
	v->a[60244] = anon_sym_SEMI_SEMI;
	v->a[60245] = anon_sym_SEMI_AMP;
	v->a[60246] = anon_sym_SEMI_SEMI_AMP;
	v->a[60247] = anon_sym_PIPE_AMP;
	v->a[60248] = anon_sym_AMP_GT;
	v->a[60249] = anon_sym_AMP_GT_GT;
	v->a[60250] = anon_sym_LT_AMP;
	v->a[60251] = anon_sym_GT_AMP;
	v->a[60252] = anon_sym_GT_PIPE;
	v->a[60253] = anon_sym_LT_AMP_DASH;
	v->a[60254] = anon_sym_GT_AMP_DASH;
	v->a[60255] = anon_sym_LT_LT_DASH;
	v->a[60256] = anon_sym_LT_LT_LT;
	v->a[60257] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60258] = anon_sym_DOLLAR_LBRACK;
	v->a[60259] = aux_sym_concatenation_token1;
	small_parse_table_3013(v);
}

void	small_parse_table_3013(t_small_parse_table_array *v)
{
	v->a[60260] = anon_sym_DOLLAR;
	v->a[60261] = sym__special_character;
	v->a[60262] = anon_sym_DQUOTE;
	v->a[60263] = sym_raw_string;
	v->a[60264] = sym_ansi_c_string;
	v->a[60265] = aux_sym_number_token1;
	v->a[60266] = aux_sym_number_token2;
	v->a[60267] = anon_sym_DOLLAR_LBRACE;
	v->a[60268] = anon_sym_DOLLAR_LPAREN;
	v->a[60269] = anon_sym_BQUOTE;
	v->a[60270] = anon_sym_DOLLAR_BQUOTE;
	v->a[60271] = anon_sym_LT_LPAREN;
	v->a[60272] = anon_sym_GT_LPAREN;
	v->a[60273] = sym_word;
	v->a[60274] = 6;
	v->a[60275] = actions(3);
	v->a[60276] = 1;
	v->a[60277] = sym_comment;
	v->a[60278] = actions(5634);
	v->a[60279] = 1;
	small_parse_table_3014(v);
}

void	small_parse_table_3014(t_small_parse_table_array *v)
{
	v->a[60280] = aux_sym_concatenation_token1;
	v->a[60281] = actions(5636);
	v->a[60282] = 1;
	v->a[60283] = sym__concat;
	v->a[60284] = state(1398);
	v->a[60285] = 1;
	v->a[60286] = aux_sym_concatenation_repeat1;
	v->a[60287] = actions(5069);
	v->a[60288] = 6;
	v->a[60289] = sym_file_descriptor;
	v->a[60290] = sym_variable_name;
	v->a[60291] = sym_test_operator;
	v->a[60292] = sym__brace_start;
	v->a[60293] = ts_builtin_sym_end;
	v->a[60294] = aux_sym_heredoc_redirect_token1;
	v->a[60295] = actions(5067);
	v->a[60296] = 37;
	v->a[60297] = anon_sym_LPAREN_LPAREN;
	v->a[60298] = anon_sym_SEMI;
	v->a[60299] = anon_sym_PIPE_PIPE;
	small_parse_table_3015(v);
}

/* EOF small_parse_table_602.c */
