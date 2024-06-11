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
	v->a[58200] = anon_sym_case;
	v->a[58201] = anon_sym_LPAREN;
	v->a[58202] = anon_sym_LBRACE;
	v->a[58203] = anon_sym_BANG;
	v->a[58204] = anon_sym_LT;
	v->a[58205] = anon_sym_GT;
	v->a[58206] = anon_sym_GT_GT;
	v->a[58207] = anon_sym_AMP_GT;
	v->a[58208] = anon_sym_AMP_GT_GT;
	v->a[58209] = anon_sym_LT_AMP;
	v->a[58210] = anon_sym_GT_AMP;
	v->a[58211] = anon_sym_GT_PIPE;
	v->a[58212] = anon_sym_LT_AMP_DASH;
	v->a[58213] = anon_sym_GT_AMP_DASH;
	v->a[58214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58215] = anon_sym_DOLLAR;
	v->a[58216] = anon_sym_DQUOTE;
	v->a[58217] = sym_raw_string;
	v->a[58218] = sym_number;
	v->a[58219] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2911(v);
}

void	small_parse_table_2911(t_small_parse_table_array *v)
{
	v->a[58220] = anon_sym_DOLLAR_LPAREN;
	v->a[58221] = sym_word;
	v->a[58222] = 12;
	v->a[58223] = actions(3);
	v->a[58224] = 1;
	v->a[58225] = sym_comment;
	v->a[58226] = actions(713);
	v->a[58227] = 1;
	v->a[58228] = sym_file_descriptor;
	v->a[58229] = actions(1804);
	v->a[58230] = 1;
	v->a[58231] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58232] = actions(1806);
	v->a[58233] = 1;
	v->a[58234] = anon_sym_DOLLAR;
	v->a[58235] = actions(1808);
	v->a[58236] = 1;
	v->a[58237] = anon_sym_DQUOTE;
	v->a[58238] = actions(1810);
	v->a[58239] = 1;
	small_parse_table_2912(v);
}

void	small_parse_table_2912(t_small_parse_table_array *v)
{
	v->a[58240] = anon_sym_DOLLAR_LBRACE;
	v->a[58241] = actions(1812);
	v->a[58242] = 1;
	v->a[58243] = anon_sym_DOLLAR_LPAREN;
	v->a[58244] = actions(1814);
	v->a[58245] = 1;
	v->a[58246] = anon_sym_BQUOTE;
	v->a[58247] = state(1902);
	v->a[58248] = 1;
	v->a[58249] = sym_concatenation;
	v->a[58250] = actions(1802);
	v->a[58251] = 3;
	v->a[58252] = sym_raw_string;
	v->a[58253] = sym_number;
	v->a[58254] = sym_word;
	v->a[58255] = state(1718);
	v->a[58256] = 5;
	v->a[58257] = sym_arithmetic_expansion;
	v->a[58258] = sym_string;
	v->a[58259] = sym_simple_expansion;
	small_parse_table_2913(v);
}

void	small_parse_table_2913(t_small_parse_table_array *v)
{
	v->a[58260] = sym_expansion;
	v->a[58261] = sym_command_substitution;
	v->a[58262] = actions(715);
	v->a[58263] = 13;
	v->a[58264] = anon_sym_AMP_AMP;
	v->a[58265] = anon_sym_PIPE_PIPE;
	v->a[58266] = anon_sym_LT;
	v->a[58267] = anon_sym_GT;
	v->a[58268] = anon_sym_GT_GT;
	v->a[58269] = anon_sym_AMP_GT;
	v->a[58270] = anon_sym_AMP_GT_GT;
	v->a[58271] = anon_sym_LT_AMP;
	v->a[58272] = anon_sym_GT_AMP;
	v->a[58273] = anon_sym_GT_PIPE;
	v->a[58274] = anon_sym_LT_AMP_DASH;
	v->a[58275] = anon_sym_GT_AMP_DASH;
	v->a[58276] = aux_sym_heredoc_redirect_token1;
	v->a[58277] = 12;
	v->a[58278] = actions(3);
	v->a[58279] = 1;
	small_parse_table_2914(v);
}

void	small_parse_table_2914(t_small_parse_table_array *v)
{
	v->a[58280] = sym_comment;
	v->a[58281] = actions(717);
	v->a[58282] = 1;
	v->a[58283] = sym_file_descriptor;
	v->a[58284] = actions(1804);
	v->a[58285] = 1;
	v->a[58286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58287] = actions(1806);
	v->a[58288] = 1;
	v->a[58289] = anon_sym_DOLLAR;
	v->a[58290] = actions(1808);
	v->a[58291] = 1;
	v->a[58292] = anon_sym_DQUOTE;
	v->a[58293] = actions(1810);
	v->a[58294] = 1;
	v->a[58295] = anon_sym_DOLLAR_LBRACE;
	v->a[58296] = actions(1812);
	v->a[58297] = 1;
	v->a[58298] = anon_sym_DOLLAR_LPAREN;
	v->a[58299] = actions(1814);
	small_parse_table_2915(v);
}

/* EOF small_parse_table_582.c */
