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
	v->a[40200] = sym__concat;
	v->a[40201] = sym_test_operator;
	v->a[40202] = sym__bare_dollar;
	v->a[40203] = sym__brace_start;
	v->a[40204] = aux_sym_heredoc_redirect_token1;
	v->a[40205] = actions(1332);
	v->a[40206] = 43;
	v->a[40207] = anon_sym_LPAREN_LPAREN;
	v->a[40208] = anon_sym_SEMI;
	v->a[40209] = anon_sym_PIPE_PIPE;
	v->a[40210] = anon_sym_AMP_AMP;
	v->a[40211] = anon_sym_PIPE;
	v->a[40212] = anon_sym_AMP;
	v->a[40213] = anon_sym_EQ_EQ;
	v->a[40214] = anon_sym_LT;
	v->a[40215] = anon_sym_GT;
	v->a[40216] = anon_sym_LT_LT;
	v->a[40217] = anon_sym_GT_GT;
	v->a[40218] = anon_sym_esac;
	v->a[40219] = anon_sym_SEMI_SEMI;
	small_parse_table_2011(v);
}

void	small_parse_table_2011(t_small_parse_table_array *v)
{
	v->a[40220] = anon_sym_SEMI_AMP;
	v->a[40221] = anon_sym_SEMI_SEMI_AMP;
	v->a[40222] = anon_sym_PIPE_AMP;
	v->a[40223] = anon_sym_EQ_TILDE;
	v->a[40224] = anon_sym_AMP_GT;
	v->a[40225] = anon_sym_AMP_GT_GT;
	v->a[40226] = anon_sym_LT_AMP;
	v->a[40227] = anon_sym_GT_AMP;
	v->a[40228] = anon_sym_GT_PIPE;
	v->a[40229] = anon_sym_LT_AMP_DASH;
	v->a[40230] = anon_sym_GT_AMP_DASH;
	v->a[40231] = anon_sym_LT_LT_DASH;
	v->a[40232] = anon_sym_LT_LT_LT;
	v->a[40233] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40234] = anon_sym_DOLLAR_LBRACK;
	v->a[40235] = aux_sym_concatenation_token1;
	v->a[40236] = anon_sym_DOLLAR;
	v->a[40237] = sym__special_character;
	v->a[40238] = anon_sym_DQUOTE;
	v->a[40239] = sym_raw_string;
	small_parse_table_2012(v);
}

void	small_parse_table_2012(t_small_parse_table_array *v)
{
	v->a[40240] = sym_ansi_c_string;
	v->a[40241] = aux_sym_number_token1;
	v->a[40242] = aux_sym_number_token2;
	v->a[40243] = anon_sym_DOLLAR_LBRACE;
	v->a[40244] = anon_sym_DOLLAR_LPAREN;
	v->a[40245] = anon_sym_BQUOTE;
	v->a[40246] = anon_sym_DOLLAR_BQUOTE;
	v->a[40247] = anon_sym_LT_LPAREN;
	v->a[40248] = anon_sym_GT_LPAREN;
	v->a[40249] = sym_word;
	v->a[40250] = 3;
	v->a[40251] = actions(3);
	v->a[40252] = 1;
	v->a[40253] = sym_comment;
	v->a[40254] = actions(1302);
	v->a[40255] = 6;
	v->a[40256] = sym_file_descriptor;
	v->a[40257] = sym__concat;
	v->a[40258] = sym_test_operator;
	v->a[40259] = sym__bare_dollar;
	small_parse_table_2013(v);
}

void	small_parse_table_2013(t_small_parse_table_array *v)
{
	v->a[40260] = sym__brace_start;
	v->a[40261] = aux_sym_heredoc_redirect_token1;
	v->a[40262] = actions(1300);
	v->a[40263] = 43;
	v->a[40264] = anon_sym_LPAREN_LPAREN;
	v->a[40265] = anon_sym_SEMI;
	v->a[40266] = anon_sym_PIPE_PIPE;
	v->a[40267] = anon_sym_AMP_AMP;
	v->a[40268] = anon_sym_PIPE;
	v->a[40269] = anon_sym_AMP;
	v->a[40270] = anon_sym_EQ_EQ;
	v->a[40271] = anon_sym_LT;
	v->a[40272] = anon_sym_GT;
	v->a[40273] = anon_sym_LT_LT;
	v->a[40274] = anon_sym_GT_GT;
	v->a[40275] = anon_sym_esac;
	v->a[40276] = anon_sym_SEMI_SEMI;
	v->a[40277] = anon_sym_SEMI_AMP;
	v->a[40278] = anon_sym_SEMI_SEMI_AMP;
	v->a[40279] = anon_sym_PIPE_AMP;
	small_parse_table_2014(v);
}

void	small_parse_table_2014(t_small_parse_table_array *v)
{
	v->a[40280] = anon_sym_EQ_TILDE;
	v->a[40281] = anon_sym_AMP_GT;
	v->a[40282] = anon_sym_AMP_GT_GT;
	v->a[40283] = anon_sym_LT_AMP;
	v->a[40284] = anon_sym_GT_AMP;
	v->a[40285] = anon_sym_GT_PIPE;
	v->a[40286] = anon_sym_LT_AMP_DASH;
	v->a[40287] = anon_sym_GT_AMP_DASH;
	v->a[40288] = anon_sym_LT_LT_DASH;
	v->a[40289] = anon_sym_LT_LT_LT;
	v->a[40290] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40291] = anon_sym_DOLLAR_LBRACK;
	v->a[40292] = aux_sym_concatenation_token1;
	v->a[40293] = anon_sym_DOLLAR;
	v->a[40294] = sym__special_character;
	v->a[40295] = anon_sym_DQUOTE;
	v->a[40296] = sym_raw_string;
	v->a[40297] = sym_ansi_c_string;
	v->a[40298] = aux_sym_number_token1;
	v->a[40299] = aux_sym_number_token2;
	small_parse_table_2015(v);
}

/* EOF small_parse_table_402.c */
