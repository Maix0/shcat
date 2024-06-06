/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_522.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2610(t_small_parse_table_array *v)
{
	v->a[52200] = aux_sym_number_token2;
	v->a[52201] = anon_sym_DOLLAR_LBRACE;
	v->a[52202] = anon_sym_DOLLAR_LPAREN;
	v->a[52203] = anon_sym_BQUOTE;
	v->a[52204] = anon_sym_DOLLAR_BQUOTE;
	v->a[52205] = sym_word;
	v->a[52206] = anon_sym_SEMI;
	v->a[52207] = 3;
	v->a[52208] = actions(3);
	v->a[52209] = 1;
	v->a[52210] = sym_comment;
	v->a[52211] = actions(3117);
	v->a[52212] = 7;
	v->a[52213] = sym_file_descriptor;
	v->a[52214] = sym__concat;
	v->a[52215] = sym_test_operator;
	v->a[52216] = sym__bare_dollar;
	v->a[52217] = sym__brace_start;
	v->a[52218] = ts_builtin_sym_end;
	v->a[52219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2611(v);
}

void	small_parse_table_2611(t_small_parse_table_array *v)
{
	v->a[52220] = actions(3115);
	v->a[52221] = 32;
	v->a[52222] = anon_sym_PIPE;
	v->a[52223] = anon_sym_SEMI_SEMI;
	v->a[52224] = anon_sym_PIPE_AMP;
	v->a[52225] = anon_sym_AMP_AMP;
	v->a[52226] = anon_sym_PIPE_PIPE;
	v->a[52227] = anon_sym_LT;
	v->a[52228] = anon_sym_GT;
	v->a[52229] = anon_sym_GT_GT;
	v->a[52230] = anon_sym_AMP_GT;
	v->a[52231] = anon_sym_AMP_GT_GT;
	v->a[52232] = anon_sym_LT_AMP;
	v->a[52233] = anon_sym_GT_AMP;
	v->a[52234] = anon_sym_GT_PIPE;
	v->a[52235] = anon_sym_LT_AMP_DASH;
	v->a[52236] = anon_sym_GT_AMP_DASH;
	v->a[52237] = anon_sym_LT_LT;
	v->a[52238] = anon_sym_LT_LT_DASH;
	v->a[52239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2612(v);
}

void	small_parse_table_2612(t_small_parse_table_array *v)
{
	v->a[52240] = anon_sym_AMP;
	v->a[52241] = aux_sym_concatenation_token1;
	v->a[52242] = anon_sym_DOLLAR;
	v->a[52243] = sym__special_character;
	v->a[52244] = anon_sym_DQUOTE;
	v->a[52245] = sym_raw_string;
	v->a[52246] = aux_sym_number_token1;
	v->a[52247] = aux_sym_number_token2;
	v->a[52248] = anon_sym_DOLLAR_LBRACE;
	v->a[52249] = anon_sym_DOLLAR_LPAREN;
	v->a[52250] = anon_sym_BQUOTE;
	v->a[52251] = anon_sym_DOLLAR_BQUOTE;
	v->a[52252] = sym_word;
	v->a[52253] = anon_sym_SEMI;
	v->a[52254] = 3;
	v->a[52255] = actions(3);
	v->a[52256] = 1;
	v->a[52257] = sym_comment;
	v->a[52258] = actions(2908);
	v->a[52259] = 7;
	small_parse_table_2613(v);
}

void	small_parse_table_2613(t_small_parse_table_array *v)
{
	v->a[52260] = sym_file_descriptor;
	v->a[52261] = sym__concat;
	v->a[52262] = sym_test_operator;
	v->a[52263] = sym__bare_dollar;
	v->a[52264] = sym__brace_start;
	v->a[52265] = ts_builtin_sym_end;
	v->a[52266] = aux_sym_heredoc_redirect_token1;
	v->a[52267] = actions(2906);
	v->a[52268] = 32;
	v->a[52269] = anon_sym_PIPE;
	v->a[52270] = anon_sym_SEMI_SEMI;
	v->a[52271] = anon_sym_PIPE_AMP;
	v->a[52272] = anon_sym_AMP_AMP;
	v->a[52273] = anon_sym_PIPE_PIPE;
	v->a[52274] = anon_sym_LT;
	v->a[52275] = anon_sym_GT;
	v->a[52276] = anon_sym_GT_GT;
	v->a[52277] = anon_sym_AMP_GT;
	v->a[52278] = anon_sym_AMP_GT_GT;
	v->a[52279] = anon_sym_LT_AMP;
	small_parse_table_2614(v);
}

void	small_parse_table_2614(t_small_parse_table_array *v)
{
	v->a[52280] = anon_sym_GT_AMP;
	v->a[52281] = anon_sym_GT_PIPE;
	v->a[52282] = anon_sym_LT_AMP_DASH;
	v->a[52283] = anon_sym_GT_AMP_DASH;
	v->a[52284] = anon_sym_LT_LT;
	v->a[52285] = anon_sym_LT_LT_DASH;
	v->a[52286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52287] = anon_sym_AMP;
	v->a[52288] = aux_sym_concatenation_token1;
	v->a[52289] = anon_sym_DOLLAR;
	v->a[52290] = sym__special_character;
	v->a[52291] = anon_sym_DQUOTE;
	v->a[52292] = sym_raw_string;
	v->a[52293] = aux_sym_number_token1;
	v->a[52294] = aux_sym_number_token2;
	v->a[52295] = anon_sym_DOLLAR_LBRACE;
	v->a[52296] = anon_sym_DOLLAR_LPAREN;
	v->a[52297] = anon_sym_BQUOTE;
	v->a[52298] = anon_sym_DOLLAR_BQUOTE;
	v->a[52299] = sym_word;
	small_parse_table_2615(v);
}

/* EOF small_parse_table_522.c */
