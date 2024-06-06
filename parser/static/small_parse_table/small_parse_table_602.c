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
	v->a[60200] = 9;
	v->a[60201] = anon_sym_PIPE;
	v->a[60202] = anon_sym_SEMI_SEMI;
	v->a[60203] = anon_sym_PIPE_AMP;
	v->a[60204] = anon_sym_AMP_AMP;
	v->a[60205] = anon_sym_PIPE_PIPE;
	v->a[60206] = anon_sym_LT_LT;
	v->a[60207] = anon_sym_LT_LT_DASH;
	v->a[60208] = anon_sym_AMP;
	v->a[60209] = anon_sym_SEMI;
	v->a[60210] = actions(3629);
	v->a[60211] = 10;
	v->a[60212] = anon_sym_LT;
	v->a[60213] = anon_sym_GT;
	v->a[60214] = anon_sym_GT_GT;
	v->a[60215] = anon_sym_AMP_GT;
	v->a[60216] = anon_sym_AMP_GT_GT;
	v->a[60217] = anon_sym_LT_AMP;
	v->a[60218] = anon_sym_GT_AMP;
	v->a[60219] = anon_sym_GT_PIPE;
	small_parse_table_3011(v);
}

void	small_parse_table_3011(t_small_parse_table_array *v)
{
	v->a[60220] = anon_sym_LT_AMP_DASH;
	v->a[60221] = anon_sym_GT_AMP_DASH;
	v->a[60222] = actions(3625);
	v->a[60223] = 12;
	v->a[60224] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60225] = anon_sym_DOLLAR;
	v->a[60226] = sym__special_character;
	v->a[60227] = anon_sym_DQUOTE;
	v->a[60228] = sym_raw_string;
	v->a[60229] = aux_sym_number_token1;
	v->a[60230] = aux_sym_number_token2;
	v->a[60231] = anon_sym_DOLLAR_LBRACE;
	v->a[60232] = anon_sym_DOLLAR_LPAREN;
	v->a[60233] = anon_sym_BQUOTE;
	v->a[60234] = anon_sym_DOLLAR_BQUOTE;
	v->a[60235] = sym_word;
	v->a[60236] = 8;
	v->a[60237] = actions(3);
	v->a[60238] = 1;
	v->a[60239] = sym_comment;
	small_parse_table_3012(v);
}

void	small_parse_table_3012(t_small_parse_table_array *v)
{
	v->a[60240] = actions(3632);
	v->a[60241] = 1;
	v->a[60242] = aux_sym_heredoc_redirect_token1;
	v->a[60243] = actions(3634);
	v->a[60244] = 1;
	v->a[60245] = sym_file_descriptor;
	v->a[60246] = actions(3966);
	v->a[60247] = 1;
	v->a[60248] = anon_sym_RPAREN;
	v->a[60249] = actions(3637);
	v->a[60250] = 3;
	v->a[60251] = sym_variable_name;
	v->a[60252] = sym_test_operator;
	v->a[60253] = sym__brace_start;
	v->a[60254] = actions(3627);
	v->a[60255] = 9;
	v->a[60256] = anon_sym_PIPE;
	v->a[60257] = anon_sym_SEMI_SEMI;
	v->a[60258] = anon_sym_PIPE_AMP;
	v->a[60259] = anon_sym_AMP_AMP;
	small_parse_table_3013(v);
}

void	small_parse_table_3013(t_small_parse_table_array *v)
{
	v->a[60260] = anon_sym_PIPE_PIPE;
	v->a[60261] = anon_sym_LT_LT;
	v->a[60262] = anon_sym_LT_LT_DASH;
	v->a[60263] = anon_sym_AMP;
	v->a[60264] = anon_sym_SEMI;
	v->a[60265] = actions(3629);
	v->a[60266] = 10;
	v->a[60267] = anon_sym_LT;
	v->a[60268] = anon_sym_GT;
	v->a[60269] = anon_sym_GT_GT;
	v->a[60270] = anon_sym_AMP_GT;
	v->a[60271] = anon_sym_AMP_GT_GT;
	v->a[60272] = anon_sym_LT_AMP;
	v->a[60273] = anon_sym_GT_AMP;
	v->a[60274] = anon_sym_GT_PIPE;
	v->a[60275] = anon_sym_LT_AMP_DASH;
	v->a[60276] = anon_sym_GT_AMP_DASH;
	v->a[60277] = actions(3625);
	v->a[60278] = 12;
	v->a[60279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3014(v);
}

void	small_parse_table_3014(t_small_parse_table_array *v)
{
	v->a[60280] = anon_sym_DOLLAR;
	v->a[60281] = sym__special_character;
	v->a[60282] = anon_sym_DQUOTE;
	v->a[60283] = sym_raw_string;
	v->a[60284] = aux_sym_number_token1;
	v->a[60285] = aux_sym_number_token2;
	v->a[60286] = anon_sym_DOLLAR_LBRACE;
	v->a[60287] = anon_sym_DOLLAR_LPAREN;
	v->a[60288] = anon_sym_BQUOTE;
	v->a[60289] = anon_sym_DOLLAR_BQUOTE;
	v->a[60290] = sym_word;
	v->a[60291] = 3;
	v->a[60292] = actions(3);
	v->a[60293] = 1;
	v->a[60294] = sym_comment;
	v->a[60295] = actions(2664);
	v->a[60296] = 4;
	v->a[60297] = sym_file_descriptor;
	v->a[60298] = sym_test_operator;
	v->a[60299] = sym__brace_start;
	small_parse_table_3015(v);
}

/* EOF small_parse_table_602.c */
