/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_363.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1815(t_small_parse_table_array *v)
{
	v->a[36300] = 2;
	v->a[36301] = anon_sym_LT;
	v->a[36302] = anon_sym_GT;
	v->a[36303] = actions(1310);
	v->a[36304] = 2;
	v->a[36305] = anon_sym_GT_GT;
	v->a[36306] = anon_sym_LT_LT;
	v->a[36307] = actions(1318);
	v->a[36308] = 2;
	v->a[36309] = anon_sym_EQ_EQ;
	v->a[36310] = anon_sym_BANG_EQ;
	v->a[36311] = actions(1320);
	v->a[36312] = 2;
	v->a[36313] = anon_sym_LT_EQ;
	v->a[36314] = anon_sym_GT_EQ;
	v->a[36315] = actions(1322);
	v->a[36316] = 2;
	v->a[36317] = anon_sym_PLUS;
	v->a[36318] = anon_sym_DASH;
	v->a[36319] = actions(1328);
	small_parse_table_1816(v);
}

void	small_parse_table_1816(t_small_parse_table_array *v)
{
	v->a[36320] = 2;
	v->a[36321] = anon_sym_PLUS_PLUS2;
	v->a[36322] = anon_sym_DASH_DASH2;
	v->a[36323] = actions(1324);
	v->a[36324] = 3;
	v->a[36325] = anon_sym_STAR;
	v->a[36326] = anon_sym_SLASH;
	v->a[36327] = anon_sym_PERCENT;
	v->a[36328] = actions(1312);
	v->a[36329] = 10;
	v->a[36330] = anon_sym_PLUS_EQ;
	v->a[36331] = anon_sym_DASH_EQ;
	v->a[36332] = anon_sym_STAR_EQ;
	v->a[36333] = anon_sym_SLASH_EQ;
	v->a[36334] = anon_sym_PERCENT_EQ;
	v->a[36335] = anon_sym_LT_LT_EQ;
	v->a[36336] = anon_sym_GT_GT_EQ;
	v->a[36337] = anon_sym_AMP_EQ;
	v->a[36338] = anon_sym_CARET_EQ;
	v->a[36339] = anon_sym_PIPE_EQ;
	small_parse_table_1817(v);
}

void	small_parse_table_1817(t_small_parse_table_array *v)
{
	v->a[36340] = 6;
	v->a[36341] = actions(3);
	v->a[36342] = 1;
	v->a[36343] = sym_comment;
	v->a[36344] = actions(1118);
	v->a[36345] = 1;
	v->a[36346] = aux_sym_concatenation_token1;
	v->a[36347] = actions(1356);
	v->a[36348] = 1;
	v->a[36349] = sym__concat;
	v->a[36350] = state(404);
	v->a[36351] = 1;
	v->a[36352] = aux_sym_concatenation_repeat1;
	v->a[36353] = actions(972);
	v->a[36354] = 2;
	v->a[36355] = sym_file_descriptor;
	v->a[36356] = sym_variable_name;
	v->a[36357] = actions(974);
	v->a[36358] = 28;
	v->a[36359] = anon_sym_PIPE;
	small_parse_table_1818(v);
}

void	small_parse_table_1818(t_small_parse_table_array *v)
{
	v->a[36360] = anon_sym_SEMI_SEMI;
	v->a[36361] = anon_sym_AMP_AMP;
	v->a[36362] = anon_sym_PIPE_PIPE;
	v->a[36363] = anon_sym_LT;
	v->a[36364] = anon_sym_GT;
	v->a[36365] = anon_sym_GT_GT;
	v->a[36366] = anon_sym_AMP_GT;
	v->a[36367] = anon_sym_AMP_GT_GT;
	v->a[36368] = anon_sym_LT_AMP;
	v->a[36369] = anon_sym_GT_AMP;
	v->a[36370] = anon_sym_GT_PIPE;
	v->a[36371] = anon_sym_LT_AMP_DASH;
	v->a[36372] = anon_sym_GT_AMP_DASH;
	v->a[36373] = anon_sym_LT_LT;
	v->a[36374] = anon_sym_LT_LT_DASH;
	v->a[36375] = aux_sym_heredoc_redirect_token1;
	v->a[36376] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36377] = anon_sym_AMP;
	v->a[36378] = anon_sym_DOLLAR;
	v->a[36379] = anon_sym_DQUOTE;
	small_parse_table_1819(v);
}

void	small_parse_table_1819(t_small_parse_table_array *v)
{
	v->a[36380] = sym_raw_string;
	v->a[36381] = sym_number;
	v->a[36382] = anon_sym_DOLLAR_LBRACE;
	v->a[36383] = anon_sym_DOLLAR_LPAREN;
	v->a[36384] = anon_sym_BQUOTE;
	v->a[36385] = sym_word;
	v->a[36386] = anon_sym_SEMI;
	v->a[36387] = 3;
	v->a[36388] = actions(3);
	v->a[36389] = 1;
	v->a[36390] = sym_comment;
	v->a[36391] = actions(1187);
	v->a[36392] = 4;
	v->a[36393] = sym_file_descriptor;
	v->a[36394] = sym__concat;
	v->a[36395] = sym__bare_dollar;
	v->a[36396] = ts_builtin_sym_end;
	v->a[36397] = actions(1185);
	v->a[36398] = 29;
	v->a[36399] = anon_sym_PIPE;
	small_parse_table_1820(v);
}

/* EOF small_parse_table_363.c */
