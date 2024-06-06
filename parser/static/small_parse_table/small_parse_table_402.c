/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_402.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2010(t_small_parse_table_array *v)
{
	v->a[40200] = actions(3);
	v->a[40201] = 1;
	v->a[40202] = sym_comment;
	v->a[40203] = actions(3438);
	v->a[40204] = 1;
	v->a[40205] = aux_sym_concatenation_token1;
	v->a[40206] = actions(3570);
	v->a[40207] = 1;
	v->a[40208] = sym__concat;
	v->a[40209] = state(897);
	v->a[40210] = 1;
	v->a[40211] = aux_sym_concatenation_repeat1;
	v->a[40212] = actions(2690);
	v->a[40213] = 6;
	v->a[40214] = sym_file_descriptor;
	v->a[40215] = sym_variable_name;
	v->a[40216] = sym_test_operator;
	v->a[40217] = sym__brace_start;
	v->a[40218] = ts_builtin_sym_end;
	v->a[40219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2011(v);
}

void	small_parse_table_2011(t_small_parse_table_array *v)
{
	v->a[40220] = actions(2688);
	v->a[40221] = 31;
	v->a[40222] = anon_sym_PIPE;
	v->a[40223] = anon_sym_SEMI_SEMI;
	v->a[40224] = anon_sym_PIPE_AMP;
	v->a[40225] = anon_sym_AMP_AMP;
	v->a[40226] = anon_sym_PIPE_PIPE;
	v->a[40227] = anon_sym_LT;
	v->a[40228] = anon_sym_GT;
	v->a[40229] = anon_sym_GT_GT;
	v->a[40230] = anon_sym_AMP_GT;
	v->a[40231] = anon_sym_AMP_GT_GT;
	v->a[40232] = anon_sym_LT_AMP;
	v->a[40233] = anon_sym_GT_AMP;
	v->a[40234] = anon_sym_GT_PIPE;
	v->a[40235] = anon_sym_LT_AMP_DASH;
	v->a[40236] = anon_sym_GT_AMP_DASH;
	v->a[40237] = anon_sym_LT_LT;
	v->a[40238] = anon_sym_LT_LT_DASH;
	v->a[40239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2012(v);
}

void	small_parse_table_2012(t_small_parse_table_array *v)
{
	v->a[40240] = anon_sym_AMP;
	v->a[40241] = anon_sym_DOLLAR;
	v->a[40242] = sym__special_character;
	v->a[40243] = anon_sym_DQUOTE;
	v->a[40244] = sym_raw_string;
	v->a[40245] = aux_sym_number_token1;
	v->a[40246] = aux_sym_number_token2;
	v->a[40247] = anon_sym_DOLLAR_LBRACE;
	v->a[40248] = anon_sym_DOLLAR_LPAREN;
	v->a[40249] = anon_sym_BQUOTE;
	v->a[40250] = anon_sym_DOLLAR_BQUOTE;
	v->a[40251] = sym_word;
	v->a[40252] = anon_sym_SEMI;
	v->a[40253] = 3;
	v->a[40254] = actions(3);
	v->a[40255] = 1;
	v->a[40256] = sym_comment;
	v->a[40257] = actions(3050);
	v->a[40258] = 7;
	v->a[40259] = sym_file_descriptor;
	small_parse_table_2013(v);
}

void	small_parse_table_2013(t_small_parse_table_array *v)
{
	v->a[40260] = sym__concat;
	v->a[40261] = sym_test_operator;
	v->a[40262] = sym__bare_dollar;
	v->a[40263] = sym__brace_start;
	v->a[40264] = ts_builtin_sym_end;
	v->a[40265] = aux_sym_heredoc_redirect_token1;
	v->a[40266] = actions(3048);
	v->a[40267] = 33;
	v->a[40268] = anon_sym_LPAREN;
	v->a[40269] = anon_sym_PIPE;
	v->a[40270] = anon_sym_SEMI_SEMI;
	v->a[40271] = anon_sym_PIPE_AMP;
	v->a[40272] = anon_sym_AMP_AMP;
	v->a[40273] = anon_sym_PIPE_PIPE;
	v->a[40274] = anon_sym_LT;
	v->a[40275] = anon_sym_GT;
	v->a[40276] = anon_sym_GT_GT;
	v->a[40277] = anon_sym_AMP_GT;
	v->a[40278] = anon_sym_AMP_GT_GT;
	v->a[40279] = anon_sym_LT_AMP;
	small_parse_table_2014(v);
}

void	small_parse_table_2014(t_small_parse_table_array *v)
{
	v->a[40280] = anon_sym_GT_AMP;
	v->a[40281] = anon_sym_GT_PIPE;
	v->a[40282] = anon_sym_LT_AMP_DASH;
	v->a[40283] = anon_sym_GT_AMP_DASH;
	v->a[40284] = anon_sym_LT_LT;
	v->a[40285] = anon_sym_LT_LT_DASH;
	v->a[40286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40287] = anon_sym_AMP;
	v->a[40288] = aux_sym_concatenation_token1;
	v->a[40289] = anon_sym_DOLLAR;
	v->a[40290] = sym__special_character;
	v->a[40291] = anon_sym_DQUOTE;
	v->a[40292] = sym_raw_string;
	v->a[40293] = aux_sym_number_token1;
	v->a[40294] = aux_sym_number_token2;
	v->a[40295] = anon_sym_DOLLAR_LBRACE;
	v->a[40296] = anon_sym_DOLLAR_LPAREN;
	v->a[40297] = anon_sym_BQUOTE;
	v->a[40298] = anon_sym_DOLLAR_BQUOTE;
	v->a[40299] = sym_word;
	small_parse_table_2015(v);
}

/* EOF small_parse_table_402.c */
