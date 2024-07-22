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
	v->a[40200] = 7;
	v->a[40201] = anon_sym_LT;
	v->a[40202] = anon_sym_GT;
	v->a[40203] = anon_sym_GT_GT;
	v->a[40204] = anon_sym_LT_AMP;
	v->a[40205] = anon_sym_GT_AMP;
	v->a[40206] = anon_sym_GT_PIPE;
	v->a[40207] = anon_sym_LT_GT;
	v->a[40208] = 3;
	v->a[40209] = actions(3);
	v->a[40210] = 1;
	v->a[40211] = sym_comment;
	v->a[40212] = actions(1233);
	v->a[40213] = 2;
	v->a[40214] = sym_file_descriptor;
	v->a[40215] = sym_variable_name;
	v->a[40216] = actions(1231);
	v->a[40217] = 26;
	v->a[40218] = anon_sym_for;
	v->a[40219] = anon_sym_while;
	small_parse_table_2011(v);
}

void	small_parse_table_2011(t_small_parse_table_array *v)
{
	v->a[40220] = anon_sym_until;
	v->a[40221] = anon_sym_if;
	v->a[40222] = anon_sym_case;
	v->a[40223] = anon_sym_esac;
	v->a[40224] = anon_sym_LPAREN;
	v->a[40225] = anon_sym_SEMI_SEMI;
	v->a[40226] = anon_sym_LBRACE;
	v->a[40227] = anon_sym_BANG;
	v->a[40228] = anon_sym_LT;
	v->a[40229] = anon_sym_GT;
	v->a[40230] = anon_sym_GT_GT;
	v->a[40231] = anon_sym_LT_AMP;
	v->a[40232] = anon_sym_GT_AMP;
	v->a[40233] = anon_sym_GT_PIPE;
	v->a[40234] = anon_sym_LT_GT;
	v->a[40235] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40236] = anon_sym_DOLLAR;
	v->a[40237] = anon_sym_DQUOTE;
	v->a[40238] = sym_raw_string;
	v->a[40239] = sym_number;
	small_parse_table_2012(v);
}

void	small_parse_table_2012(t_small_parse_table_array *v)
{
	v->a[40240] = anon_sym_DOLLAR_LBRACE;
	v->a[40241] = anon_sym_DOLLAR_LPAREN;
	v->a[40242] = anon_sym_BQUOTE;
	v->a[40243] = sym_word;
	v->a[40244] = 3;
	v->a[40245] = actions(3);
	v->a[40246] = 1;
	v->a[40247] = sym_comment;
	v->a[40248] = actions(1110);
	v->a[40249] = 3;
	v->a[40250] = sym_file_descriptor;
	v->a[40251] = sym__concat;
	v->a[40252] = ts_builtin_sym_end;
	v->a[40253] = actions(1105);
	v->a[40254] = 25;
	v->a[40255] = anon_sym_PIPE;
	v->a[40256] = anon_sym_SEMI_SEMI;
	v->a[40257] = anon_sym_AMP_AMP;
	v->a[40258] = anon_sym_PIPE_PIPE;
	v->a[40259] = anon_sym_LT;
	small_parse_table_2013(v);
}

void	small_parse_table_2013(t_small_parse_table_array *v)
{
	v->a[40260] = anon_sym_GT;
	v->a[40261] = anon_sym_GT_GT;
	v->a[40262] = anon_sym_LT_AMP;
	v->a[40263] = anon_sym_GT_AMP;
	v->a[40264] = anon_sym_GT_PIPE;
	v->a[40265] = anon_sym_LT_GT;
	v->a[40266] = anon_sym_LT_LT;
	v->a[40267] = anon_sym_LT_LT_DASH;
	v->a[40268] = aux_sym_heredoc_redirect_token1;
	v->a[40269] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40270] = aux_sym_concatenation_token1;
	v->a[40271] = anon_sym_DOLLAR;
	v->a[40272] = anon_sym_DQUOTE;
	v->a[40273] = sym_raw_string;
	v->a[40274] = sym_number;
	v->a[40275] = anon_sym_DOLLAR_LBRACE;
	v->a[40276] = anon_sym_DOLLAR_LPAREN;
	v->a[40277] = anon_sym_BQUOTE;
	v->a[40278] = sym_word;
	v->a[40279] = anon_sym_SEMI;
	small_parse_table_2014(v);
}

void	small_parse_table_2014(t_small_parse_table_array *v)
{
	v->a[40280] = 6;
	v->a[40281] = actions(3);
	v->a[40282] = 1;
	v->a[40283] = sym_comment;
	v->a[40284] = actions(1125);
	v->a[40285] = 1;
	v->a[40286] = aux_sym_concatenation_token1;
	v->a[40287] = actions(1144);
	v->a[40288] = 1;
	v->a[40289] = sym__concat;
	v->a[40290] = state(600);
	v->a[40291] = 1;
	v->a[40292] = aux_sym_concatenation_repeat1;
	v->a[40293] = actions(1132);
	v->a[40294] = 2;
	v->a[40295] = sym_file_descriptor;
	v->a[40296] = sym__bare_dollar;
	v->a[40297] = actions(1134);
	v->a[40298] = 23;
	v->a[40299] = anon_sym_LPAREN;
	small_parse_table_2015(v);
}

/* EOF small_parse_table_402.c */
