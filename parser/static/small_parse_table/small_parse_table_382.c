/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_382.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1910(t_small_parse_table_array *v)
{
	v->a[38200] = anon_sym_RPAREN;
	v->a[38201] = anon_sym_SEMI_SEMI;
	v->a[38202] = anon_sym_PIPE_AMP;
	v->a[38203] = anon_sym_AMP_AMP;
	v->a[38204] = anon_sym_PIPE_PIPE;
	v->a[38205] = anon_sym_LT;
	v->a[38206] = anon_sym_GT;
	v->a[38207] = anon_sym_GT_GT;
	v->a[38208] = anon_sym_AMP_GT;
	v->a[38209] = anon_sym_AMP_GT_GT;
	v->a[38210] = anon_sym_LT_AMP;
	v->a[38211] = anon_sym_GT_AMP;
	v->a[38212] = anon_sym_GT_PIPE;
	v->a[38213] = anon_sym_LT_AMP_DASH;
	v->a[38214] = anon_sym_GT_AMP_DASH;
	v->a[38215] = anon_sym_LT_LT;
	v->a[38216] = anon_sym_LT_LT_DASH;
	v->a[38217] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38218] = anon_sym_AMP;
	v->a[38219] = aux_sym_concatenation_token1;
	small_parse_table_1911(v);
}

void	small_parse_table_1911(t_small_parse_table_array *v)
{
	v->a[38220] = anon_sym_DOLLAR;
	v->a[38221] = sym__special_character;
	v->a[38222] = anon_sym_DQUOTE;
	v->a[38223] = sym_raw_string;
	v->a[38224] = aux_sym_number_token1;
	v->a[38225] = aux_sym_number_token2;
	v->a[38226] = anon_sym_DOLLAR_LBRACE;
	v->a[38227] = anon_sym_DOLLAR_LPAREN;
	v->a[38228] = anon_sym_BQUOTE;
	v->a[38229] = anon_sym_DOLLAR_BQUOTE;
	v->a[38230] = aux_sym__simple_variable_name_token1;
	v->a[38231] = sym_word;
	v->a[38232] = anon_sym_SEMI;
	v->a[38233] = 5;
	v->a[38234] = actions(3);
	v->a[38235] = 1;
	v->a[38236] = sym_comment;
	v->a[38237] = actions(3521);
	v->a[38238] = 1;
	v->a[38239] = sym__special_character;
	small_parse_table_1912(v);
}

void	small_parse_table_1912(t_small_parse_table_array *v)
{
	v->a[38240] = state(971);
	v->a[38241] = 1;
	v->a[38242] = aux_sym__literal_repeat1;
	v->a[38243] = actions(3519);
	v->a[38244] = 5;
	v->a[38245] = sym_file_descriptor;
	v->a[38246] = sym_variable_name;
	v->a[38247] = sym_test_operator;
	v->a[38248] = sym__brace_start;
	v->a[38249] = aux_sym_heredoc_redirect_token1;
	v->a[38250] = actions(3517);
	v->a[38251] = 33;
	v->a[38252] = anon_sym_esac;
	v->a[38253] = anon_sym_PIPE;
	v->a[38254] = anon_sym_SEMI_SEMI;
	v->a[38255] = anon_sym_SEMI_AMP;
	v->a[38256] = anon_sym_SEMI_SEMI_AMP;
	v->a[38257] = anon_sym_PIPE_AMP;
	v->a[38258] = anon_sym_AMP_AMP;
	v->a[38259] = anon_sym_PIPE_PIPE;
	small_parse_table_1913(v);
}

void	small_parse_table_1913(t_small_parse_table_array *v)
{
	v->a[38260] = anon_sym_LT;
	v->a[38261] = anon_sym_GT;
	v->a[38262] = anon_sym_GT_GT;
	v->a[38263] = anon_sym_AMP_GT;
	v->a[38264] = anon_sym_AMP_GT_GT;
	v->a[38265] = anon_sym_LT_AMP;
	v->a[38266] = anon_sym_GT_AMP;
	v->a[38267] = anon_sym_GT_PIPE;
	v->a[38268] = anon_sym_LT_AMP_DASH;
	v->a[38269] = anon_sym_GT_AMP_DASH;
	v->a[38270] = anon_sym_LT_LT;
	v->a[38271] = anon_sym_LT_LT_DASH;
	v->a[38272] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38273] = anon_sym_AMP;
	v->a[38274] = anon_sym_DOLLAR;
	v->a[38275] = anon_sym_DQUOTE;
	v->a[38276] = sym_raw_string;
	v->a[38277] = aux_sym_number_token1;
	v->a[38278] = aux_sym_number_token2;
	v->a[38279] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1914(v);
}

void	small_parse_table_1914(t_small_parse_table_array *v)
{
	v->a[38280] = anon_sym_DOLLAR_LPAREN;
	v->a[38281] = anon_sym_BQUOTE;
	v->a[38282] = anon_sym_DOLLAR_BQUOTE;
	v->a[38283] = sym_word;
	v->a[38284] = anon_sym_SEMI;
	v->a[38285] = 3;
	v->a[38286] = actions(3);
	v->a[38287] = 1;
	v->a[38288] = sym_comment;
	v->a[38289] = actions(2778);
	v->a[38290] = 7;
	v->a[38291] = sym_file_descriptor;
	v->a[38292] = sym__concat;
	v->a[38293] = sym_test_operator;
	v->a[38294] = sym__bare_dollar;
	v->a[38295] = sym__brace_start;
	v->a[38296] = ts_builtin_sym_end;
	v->a[38297] = aux_sym_heredoc_redirect_token1;
	v->a[38298] = actions(2776);
	v->a[38299] = 33;
	small_parse_table_1915(v);
}

/* EOF small_parse_table_382.c */
