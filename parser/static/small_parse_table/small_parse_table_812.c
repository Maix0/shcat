/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_812.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4060(t_small_parse_table_array *v)
{
	v->a[81200] = anon_sym_GT_PIPE;
	v->a[81201] = anon_sym_LT_AMP_DASH;
	v->a[81202] = anon_sym_GT_AMP_DASH;
	v->a[81203] = 6;
	v->a[81204] = actions(3);
	v->a[81205] = 1;
	v->a[81206] = sym_comment;
	v->a[81207] = actions(3170);
	v->a[81208] = 1;
	v->a[81209] = aux_sym_concatenation_token1;
	v->a[81210] = actions(3174);
	v->a[81211] = 1;
	v->a[81212] = sym__concat;
	v->a[81213] = state(1623);
	v->a[81214] = 1;
	v->a[81215] = aux_sym_concatenation_repeat1;
	v->a[81216] = actions(602);
	v->a[81217] = 2;
	v->a[81218] = sym_file_descriptor;
	v->a[81219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4061(v);
}

void	small_parse_table_4061(t_small_parse_table_array *v)
{
	v->a[81220] = actions(604);
	v->a[81221] = 10;
	v->a[81222] = anon_sym_AMP_AMP;
	v->a[81223] = anon_sym_PIPE_PIPE;
	v->a[81224] = anon_sym_LT;
	v->a[81225] = anon_sym_GT;
	v->a[81226] = anon_sym_GT_GT;
	v->a[81227] = anon_sym_LT_AMP;
	v->a[81228] = anon_sym_GT_AMP;
	v->a[81229] = anon_sym_GT_PIPE;
	v->a[81230] = anon_sym_LT_AMP_DASH;
	v->a[81231] = anon_sym_GT_AMP_DASH;
	v->a[81232] = 5;
	v->a[81233] = actions(870);
	v->a[81234] = 1;
	v->a[81235] = sym_comment;
	v->a[81236] = actions(3176);
	v->a[81237] = 1;
	v->a[81238] = anon_sym_PIPE;
	v->a[81239] = state(1625);
	small_parse_table_4062(v);
}

void	small_parse_table_4062(t_small_parse_table_array *v)
{
	v->a[81240] = 1;
	v->a[81241] = aux_sym_pipeline_repeat1;
	v->a[81242] = actions(2095);
	v->a[81243] = 5;
	v->a[81244] = anon_sym_LT;
	v->a[81245] = anon_sym_GT;
	v->a[81246] = anon_sym_LT_AMP;
	v->a[81247] = anon_sym_GT_AMP;
	v->a[81248] = anon_sym_LT_LT;
	v->a[81249] = actions(2090);
	v->a[81250] = 8;
	v->a[81251] = sym_file_descriptor;
	v->a[81252] = anon_sym_AMP_AMP;
	v->a[81253] = anon_sym_PIPE_PIPE;
	v->a[81254] = anon_sym_GT_GT;
	v->a[81255] = anon_sym_GT_PIPE;
	v->a[81256] = anon_sym_LT_AMP_DASH;
	v->a[81257] = anon_sym_GT_AMP_DASH;
	v->a[81258] = anon_sym_LT_LT_DASH;
	v->a[81259] = 3;
	small_parse_table_4063(v);
}

void	small_parse_table_4063(t_small_parse_table_array *v)
{
	v->a[81260] = actions(3);
	v->a[81261] = 1;
	v->a[81262] = sym_comment;
	v->a[81263] = actions(970);
	v->a[81264] = 1;
	v->a[81265] = sym__concat;
	v->a[81266] = actions(968);
	v->a[81267] = 14;
	v->a[81268] = anon_sym_SEMI_SEMI;
	v->a[81269] = aux_sym_heredoc_redirect_token1;
	v->a[81270] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81271] = anon_sym_AMP;
	v->a[81272] = aux_sym_concatenation_token1;
	v->a[81273] = anon_sym_DOLLAR;
	v->a[81274] = anon_sym_DQUOTE;
	v->a[81275] = sym_raw_string;
	v->a[81276] = sym_number;
	v->a[81277] = anon_sym_DOLLAR_LBRACE;
	v->a[81278] = anon_sym_DOLLAR_LPAREN;
	v->a[81279] = anon_sym_BQUOTE;
	small_parse_table_4064(v);
}

void	small_parse_table_4064(t_small_parse_table_array *v)
{
	v->a[81280] = sym_word;
	v->a[81281] = anon_sym_SEMI;
	v->a[81282] = 10;
	v->a[81283] = actions(3);
	v->a[81284] = 1;
	v->a[81285] = sym_comment;
	v->a[81286] = actions(2758);
	v->a[81287] = 1;
	v->a[81288] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81289] = actions(2762);
	v->a[81290] = 1;
	v->a[81291] = anon_sym_DQUOTE;
	v->a[81292] = actions(2764);
	v->a[81293] = 1;
	v->a[81294] = anon_sym_DOLLAR_LBRACE;
	v->a[81295] = actions(2766);
	v->a[81296] = 1;
	v->a[81297] = anon_sym_DOLLAR_LPAREN;
	v->a[81298] = actions(2768);
	v->a[81299] = 1;
	small_parse_table_4065(v);
}

/* EOF small_parse_table_812.c */
