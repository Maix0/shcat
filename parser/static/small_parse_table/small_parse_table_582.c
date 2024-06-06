/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_582.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2910(t_small_parse_table_array *v)
{
	v->a[58200] = anon_sym_PIPE_PIPE;
	v->a[58201] = anon_sym_LT_LT;
	v->a[58202] = anon_sym_LT_LT_DASH;
	v->a[58203] = anon_sym_AMP;
	v->a[58204] = anon_sym_SEMI;
	v->a[58205] = actions(3629);
	v->a[58206] = 10;
	v->a[58207] = anon_sym_LT;
	v->a[58208] = anon_sym_GT;
	v->a[58209] = anon_sym_GT_GT;
	v->a[58210] = anon_sym_AMP_GT;
	v->a[58211] = anon_sym_AMP_GT_GT;
	v->a[58212] = anon_sym_LT_AMP;
	v->a[58213] = anon_sym_GT_AMP;
	v->a[58214] = anon_sym_GT_PIPE;
	v->a[58215] = anon_sym_LT_AMP_DASH;
	v->a[58216] = anon_sym_GT_AMP_DASH;
	v->a[58217] = actions(3625);
	v->a[58218] = 12;
	v->a[58219] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2911(v);
}

void	small_parse_table_2911(t_small_parse_table_array *v)
{
	v->a[58220] = anon_sym_DOLLAR;
	v->a[58221] = sym__special_character;
	v->a[58222] = anon_sym_DQUOTE;
	v->a[58223] = sym_raw_string;
	v->a[58224] = aux_sym_number_token1;
	v->a[58225] = aux_sym_number_token2;
	v->a[58226] = anon_sym_DOLLAR_LBRACE;
	v->a[58227] = anon_sym_DOLLAR_LPAREN;
	v->a[58228] = anon_sym_BQUOTE;
	v->a[58229] = anon_sym_DOLLAR_BQUOTE;
	v->a[58230] = sym_word;
	v->a[58231] = 6;
	v->a[58232] = actions(3);
	v->a[58233] = 1;
	v->a[58234] = sym_comment;
	v->a[58235] = actions(3358);
	v->a[58236] = 1;
	v->a[58237] = aux_sym_concatenation_token1;
	v->a[58238] = actions(3360);
	v->a[58239] = 1;
	small_parse_table_2912(v);
}

void	small_parse_table_2912(t_small_parse_table_array *v)
{
	v->a[58240] = sym__concat;
	v->a[58241] = state(1308);
	v->a[58242] = 1;
	v->a[58243] = aux_sym_concatenation_repeat1;
	v->a[58244] = actions(2754);
	v->a[58245] = 5;
	v->a[58246] = sym_file_descriptor;
	v->a[58247] = sym_test_operator;
	v->a[58248] = sym__bare_dollar;
	v->a[58249] = sym__brace_start;
	v->a[58250] = aux_sym_heredoc_redirect_token1;
	v->a[58251] = actions(2749);
	v->a[58252] = 29;
	v->a[58253] = anon_sym_LPAREN;
	v->a[58254] = anon_sym_PIPE;
	v->a[58255] = anon_sym_PIPE_AMP;
	v->a[58256] = anon_sym_AMP_AMP;
	v->a[58257] = anon_sym_PIPE_PIPE;
	v->a[58258] = anon_sym_LT;
	v->a[58259] = anon_sym_GT;
	small_parse_table_2913(v);
}

void	small_parse_table_2913(t_small_parse_table_array *v)
{
	v->a[58260] = anon_sym_GT_GT;
	v->a[58261] = anon_sym_AMP_GT;
	v->a[58262] = anon_sym_AMP_GT_GT;
	v->a[58263] = anon_sym_LT_AMP;
	v->a[58264] = anon_sym_GT_AMP;
	v->a[58265] = anon_sym_GT_PIPE;
	v->a[58266] = anon_sym_LT_AMP_DASH;
	v->a[58267] = anon_sym_GT_AMP_DASH;
	v->a[58268] = anon_sym_LT_LT;
	v->a[58269] = anon_sym_LT_LT_DASH;
	v->a[58270] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58271] = anon_sym_DOLLAR;
	v->a[58272] = sym__special_character;
	v->a[58273] = anon_sym_DQUOTE;
	v->a[58274] = sym_raw_string;
	v->a[58275] = aux_sym_number_token1;
	v->a[58276] = aux_sym_number_token2;
	v->a[58277] = anon_sym_DOLLAR_LBRACE;
	v->a[58278] = anon_sym_DOLLAR_LPAREN;
	v->a[58279] = anon_sym_BQUOTE;
	small_parse_table_2914(v);
}

void	small_parse_table_2914(t_small_parse_table_array *v)
{
	v->a[58280] = anon_sym_DOLLAR_BQUOTE;
	v->a[58281] = sym_word;
	v->a[58282] = 8;
	v->a[58283] = actions(3);
	v->a[58284] = 1;
	v->a[58285] = sym_comment;
	v->a[58286] = actions(3632);
	v->a[58287] = 1;
	v->a[58288] = aux_sym_heredoc_redirect_token1;
	v->a[58289] = actions(3634);
	v->a[58290] = 1;
	v->a[58291] = sym_file_descriptor;
	v->a[58292] = actions(3862);
	v->a[58293] = 1;
	v->a[58294] = anon_sym_RPAREN;
	v->a[58295] = actions(3637);
	v->a[58296] = 3;
	v->a[58297] = sym_variable_name;
	v->a[58298] = sym_test_operator;
	v->a[58299] = sym__brace_start;
	small_parse_table_2915(v);
}

/* EOF small_parse_table_582.c */
