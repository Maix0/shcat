/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_393.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1965(t_small_parse_table_array *v)
{
	v->a[39300] = anon_sym_STAR_EQ;
	v->a[39301] = anon_sym_SLASH_EQ;
	v->a[39302] = anon_sym_PERCENT_EQ;
	v->a[39303] = anon_sym_LT_LT_EQ;
	v->a[39304] = anon_sym_GT_GT_EQ;
	v->a[39305] = anon_sym_AMP_EQ;
	v->a[39306] = anon_sym_CARET_EQ;
	v->a[39307] = anon_sym_PIPE_EQ;
	v->a[39308] = 3;
	v->a[39309] = actions(3);
	v->a[39310] = 1;
	v->a[39311] = sym_comment;
	v->a[39312] = actions(1126);
	v->a[39313] = 4;
	v->a[39314] = sym_file_descriptor;
	v->a[39315] = sym__concat;
	v->a[39316] = sym__bare_dollar;
	v->a[39317] = ts_builtin_sym_end;
	v->a[39318] = actions(1124);
	v->a[39319] = 29;
	small_parse_table_1966(v);
}

void	small_parse_table_1966(t_small_parse_table_array *v)
{
	v->a[39320] = anon_sym_PIPE;
	v->a[39321] = anon_sym_SEMI_SEMI;
	v->a[39322] = anon_sym_AMP_AMP;
	v->a[39323] = anon_sym_PIPE_PIPE;
	v->a[39324] = anon_sym_LT;
	v->a[39325] = anon_sym_GT;
	v->a[39326] = anon_sym_GT_GT;
	v->a[39327] = anon_sym_AMP_GT;
	v->a[39328] = anon_sym_AMP_GT_GT;
	v->a[39329] = anon_sym_LT_AMP;
	v->a[39330] = anon_sym_GT_AMP;
	v->a[39331] = anon_sym_GT_PIPE;
	v->a[39332] = anon_sym_LT_AMP_DASH;
	v->a[39333] = anon_sym_GT_AMP_DASH;
	v->a[39334] = anon_sym_LT_LT;
	v->a[39335] = anon_sym_LT_LT_DASH;
	v->a[39336] = aux_sym_heredoc_redirect_token1;
	v->a[39337] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39338] = anon_sym_AMP;
	v->a[39339] = aux_sym_concatenation_token1;
	small_parse_table_1967(v);
}

void	small_parse_table_1967(t_small_parse_table_array *v)
{
	v->a[39340] = anon_sym_DOLLAR;
	v->a[39341] = anon_sym_DQUOTE;
	v->a[39342] = sym_raw_string;
	v->a[39343] = sym_number;
	v->a[39344] = anon_sym_DOLLAR_LBRACE;
	v->a[39345] = anon_sym_DOLLAR_LPAREN;
	v->a[39346] = anon_sym_BQUOTE;
	v->a[39347] = sym_word;
	v->a[39348] = anon_sym_SEMI;
	v->a[39349] = 6;
	v->a[39350] = actions(3);
	v->a[39351] = 1;
	v->a[39352] = sym_comment;
	v->a[39353] = actions(385);
	v->a[39354] = 1;
	v->a[39355] = sym_file_descriptor;
	v->a[39356] = actions(1408);
	v->a[39357] = 1;
	v->a[39358] = sym_variable_name;
	v->a[39359] = actions(1406);
	small_parse_table_1968(v);
}

void	small_parse_table_1968(t_small_parse_table_array *v)
{
	v->a[39360] = 2;
	v->a[39361] = aux_sym__simple_variable_name_token1;
	v->a[39362] = aux_sym__multiline_variable_name_token1;
	v->a[39363] = actions(1404);
	v->a[39364] = 9;
	v->a[39365] = anon_sym_BANG;
	v->a[39366] = anon_sym_DASH;
	v->a[39367] = anon_sym_STAR;
	v->a[39368] = anon_sym_QMARK;
	v->a[39369] = anon_sym_DOLLAR;
	v->a[39370] = anon_sym_POUND;
	v->a[39371] = anon_sym_AT;
	v->a[39372] = anon_sym_0;
	v->a[39373] = anon_sym__;
	v->a[39374] = actions(379);
	v->a[39375] = 20;
	v->a[39376] = anon_sym_esac;
	v->a[39377] = anon_sym_PIPE;
	v->a[39378] = anon_sym_SEMI_SEMI;
	v->a[39379] = anon_sym_AMP_AMP;
	small_parse_table_1969(v);
}

void	small_parse_table_1969(t_small_parse_table_array *v)
{
	v->a[39380] = anon_sym_PIPE_PIPE;
	v->a[39381] = anon_sym_LT;
	v->a[39382] = anon_sym_GT;
	v->a[39383] = anon_sym_GT_GT;
	v->a[39384] = anon_sym_AMP_GT;
	v->a[39385] = anon_sym_AMP_GT_GT;
	v->a[39386] = anon_sym_LT_AMP;
	v->a[39387] = anon_sym_GT_AMP;
	v->a[39388] = anon_sym_GT_PIPE;
	v->a[39389] = anon_sym_LT_AMP_DASH;
	v->a[39390] = anon_sym_GT_AMP_DASH;
	v->a[39391] = anon_sym_LT_LT;
	v->a[39392] = anon_sym_LT_LT_DASH;
	v->a[39393] = aux_sym_heredoc_redirect_token1;
	v->a[39394] = anon_sym_AMP;
	v->a[39395] = anon_sym_SEMI;
	v->a[39396] = 3;
	v->a[39397] = actions(3);
	v->a[39398] = 1;
	v->a[39399] = sym_comment;
	small_parse_table_1970(v);
}

/* EOF small_parse_table_393.c */
