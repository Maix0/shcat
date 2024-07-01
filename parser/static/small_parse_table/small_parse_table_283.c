/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_283.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1415(t_small_parse_table_array *v)
{
	v->a[28300] = aux_sym_heredoc_redirect_token1;
	v->a[28301] = anon_sym_AMP;
	v->a[28302] = anon_sym_BQUOTE;
	v->a[28303] = anon_sym_SEMI;
	v->a[28304] = 17;
	v->a[28305] = actions(842);
	v->a[28306] = 1;
	v->a[28307] = anon_sym_PIPE;
	v->a[28308] = actions(844);
	v->a[28309] = 1;
	v->a[28310] = anon_sym_AMP_AMP;
	v->a[28311] = actions(846);
	v->a[28312] = 1;
	v->a[28313] = anon_sym_PIPE_PIPE;
	v->a[28314] = actions(856);
	v->a[28315] = 1;
	v->a[28316] = anon_sym_CARET;
	v->a[28317] = actions(858);
	v->a[28318] = 1;
	v->a[28319] = anon_sym_AMP;
	small_parse_table_1416(v);
}

void	small_parse_table_1416(t_small_parse_table_array *v)
{
	v->a[28320] = actions(870);
	v->a[28321] = 1;
	v->a[28322] = sym_comment;
	v->a[28323] = actions(1021);
	v->a[28324] = 1;
	v->a[28325] = anon_sym_EQ;
	v->a[28326] = actions(1023);
	v->a[28327] = 1;
	v->a[28328] = anon_sym_QMARK;
	v->a[28329] = actions(1089);
	v->a[28330] = 1;
	v->a[28331] = anon_sym_COLON;
	v->a[28332] = actions(850);
	v->a[28333] = 2;
	v->a[28334] = anon_sym_LT;
	v->a[28335] = anon_sym_GT;
	v->a[28336] = actions(852);
	v->a[28337] = 2;
	v->a[28338] = anon_sym_GT_GT;
	v->a[28339] = anon_sym_LT_LT;
	small_parse_table_1417(v);
}

void	small_parse_table_1417(t_small_parse_table_array *v)
{
	v->a[28340] = actions(860);
	v->a[28341] = 2;
	v->a[28342] = anon_sym_EQ_EQ;
	v->a[28343] = anon_sym_BANG_EQ;
	v->a[28344] = actions(862);
	v->a[28345] = 2;
	v->a[28346] = anon_sym_LT_EQ;
	v->a[28347] = anon_sym_GT_EQ;
	v->a[28348] = actions(864);
	v->a[28349] = 2;
	v->a[28350] = anon_sym_PLUS;
	v->a[28351] = anon_sym_DASH;
	v->a[28352] = actions(868);
	v->a[28353] = 2;
	v->a[28354] = anon_sym_PLUS_PLUS2;
	v->a[28355] = anon_sym_DASH_DASH2;
	v->a[28356] = actions(866);
	v->a[28357] = 3;
	v->a[28358] = anon_sym_STAR;
	v->a[28359] = anon_sym_SLASH;
	small_parse_table_1418(v);
}

void	small_parse_table_1418(t_small_parse_table_array *v)
{
	v->a[28360] = anon_sym_PERCENT;
	v->a[28361] = actions(1079);
	v->a[28362] = 10;
	v->a[28363] = anon_sym_PLUS_EQ;
	v->a[28364] = anon_sym_DASH_EQ;
	v->a[28365] = anon_sym_STAR_EQ;
	v->a[28366] = anon_sym_SLASH_EQ;
	v->a[28367] = anon_sym_PERCENT_EQ;
	v->a[28368] = anon_sym_LT_LT_EQ;
	v->a[28369] = anon_sym_GT_GT_EQ;
	v->a[28370] = anon_sym_AMP_EQ;
	v->a[28371] = anon_sym_CARET_EQ;
	v->a[28372] = anon_sym_PIPE_EQ;
	v->a[28373] = 3;
	v->a[28374] = actions(870);
	v->a[28375] = 1;
	v->a[28376] = sym_comment;
	v->a[28377] = actions(1035);
	v->a[28378] = 13;
	v->a[28379] = anon_sym_PIPE;
	small_parse_table_1419(v);
}

void	small_parse_table_1419(t_small_parse_table_array *v)
{
	v->a[28380] = anon_sym_EQ;
	v->a[28381] = anon_sym_LT;
	v->a[28382] = anon_sym_GT;
	v->a[28383] = anon_sym_GT_GT;
	v->a[28384] = anon_sym_LT_LT;
	v->a[28385] = anon_sym_CARET;
	v->a[28386] = anon_sym_AMP;
	v->a[28387] = anon_sym_PLUS;
	v->a[28388] = anon_sym_DASH;
	v->a[28389] = anon_sym_STAR;
	v->a[28390] = anon_sym_SLASH;
	v->a[28391] = anon_sym_PERCENT;
	v->a[28392] = actions(1037);
	v->a[28393] = 20;
	v->a[28394] = anon_sym_RPAREN;
	v->a[28395] = anon_sym_AMP_AMP;
	v->a[28396] = anon_sym_PIPE_PIPE;
	v->a[28397] = anon_sym_PLUS_EQ;
	v->a[28398] = anon_sym_DASH_EQ;
	v->a[28399] = anon_sym_STAR_EQ;
	small_parse_table_1420(v);
}

/* EOF small_parse_table_283.c */
