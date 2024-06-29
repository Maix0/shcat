/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_383.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1915(t_small_parse_table_array *v)
{
	v->a[38300] = anon_sym_PIPE;
	v->a[38301] = actions(1138);
	v->a[38302] = 1;
	v->a[38303] = anon_sym_AMP_AMP;
	v->a[38304] = actions(1140);
	v->a[38305] = 1;
	v->a[38306] = anon_sym_PIPE_PIPE;
	v->a[38307] = actions(1150);
	v->a[38308] = 1;
	v->a[38309] = anon_sym_CARET;
	v->a[38310] = actions(1152);
	v->a[38311] = 1;
	v->a[38312] = anon_sym_AMP;
	v->a[38313] = actions(1239);
	v->a[38314] = 1;
	v->a[38315] = anon_sym_EQ;
	v->a[38316] = actions(1241);
	v->a[38317] = 1;
	v->a[38318] = anon_sym_QMARK;
	v->a[38319] = actions(1398);
	small_parse_table_1916(v);
}

void	small_parse_table_1916(t_small_parse_table_array *v)
{
	v->a[38320] = 1;
	v->a[38321] = anon_sym_COLON;
	v->a[38322] = actions(1144);
	v->a[38323] = 2;
	v->a[38324] = anon_sym_LT;
	v->a[38325] = anon_sym_GT;
	v->a[38326] = actions(1146);
	v->a[38327] = 2;
	v->a[38328] = anon_sym_GT_GT;
	v->a[38329] = anon_sym_LT_LT;
	v->a[38330] = actions(1154);
	v->a[38331] = 2;
	v->a[38332] = anon_sym_EQ_EQ;
	v->a[38333] = anon_sym_BANG_EQ;
	v->a[38334] = actions(1156);
	v->a[38335] = 2;
	v->a[38336] = anon_sym_LT_EQ;
	v->a[38337] = anon_sym_GT_EQ;
	v->a[38338] = actions(1158);
	v->a[38339] = 2;
	small_parse_table_1917(v);
}

void	small_parse_table_1917(t_small_parse_table_array *v)
{
	v->a[38340] = anon_sym_PLUS;
	v->a[38341] = anon_sym_DASH;
	v->a[38342] = actions(1162);
	v->a[38343] = 2;
	v->a[38344] = anon_sym_PLUS_PLUS2;
	v->a[38345] = anon_sym_DASH_DASH2;
	v->a[38346] = actions(1160);
	v->a[38347] = 3;
	v->a[38348] = anon_sym_STAR;
	v->a[38349] = anon_sym_SLASH;
	v->a[38350] = anon_sym_PERCENT;
	v->a[38351] = actions(1252);
	v->a[38352] = 10;
	v->a[38353] = anon_sym_PLUS_EQ;
	v->a[38354] = anon_sym_DASH_EQ;
	v->a[38355] = anon_sym_STAR_EQ;
	v->a[38356] = anon_sym_SLASH_EQ;
	v->a[38357] = anon_sym_PERCENT_EQ;
	v->a[38358] = anon_sym_LT_LT_EQ;
	v->a[38359] = anon_sym_GT_GT_EQ;
	small_parse_table_1918(v);
}

void	small_parse_table_1918(t_small_parse_table_array *v)
{
	v->a[38360] = anon_sym_AMP_EQ;
	v->a[38361] = anon_sym_CARET_EQ;
	v->a[38362] = anon_sym_PIPE_EQ;
	v->a[38363] = 3;
	v->a[38364] = actions(3);
	v->a[38365] = 1;
	v->a[38366] = sym_comment;
	v->a[38367] = actions(1195);
	v->a[38368] = 3;
	v->a[38369] = sym_file_descriptor;
	v->a[38370] = sym__concat;
	v->a[38371] = sym__bare_dollar;
	v->a[38372] = actions(1193);
	v->a[38373] = 30;
	v->a[38374] = anon_sym_esac;
	v->a[38375] = anon_sym_PIPE;
	v->a[38376] = anon_sym_SEMI_SEMI;
	v->a[38377] = anon_sym_AMP_AMP;
	v->a[38378] = anon_sym_PIPE_PIPE;
	v->a[38379] = anon_sym_LT;
	small_parse_table_1919(v);
}

void	small_parse_table_1919(t_small_parse_table_array *v)
{
	v->a[38380] = anon_sym_GT;
	v->a[38381] = anon_sym_GT_GT;
	v->a[38382] = anon_sym_AMP_GT;
	v->a[38383] = anon_sym_AMP_GT_GT;
	v->a[38384] = anon_sym_LT_AMP;
	v->a[38385] = anon_sym_GT_AMP;
	v->a[38386] = anon_sym_GT_PIPE;
	v->a[38387] = anon_sym_LT_AMP_DASH;
	v->a[38388] = anon_sym_GT_AMP_DASH;
	v->a[38389] = anon_sym_LT_LT;
	v->a[38390] = anon_sym_LT_LT_DASH;
	v->a[38391] = aux_sym_heredoc_redirect_token1;
	v->a[38392] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38393] = anon_sym_AMP;
	v->a[38394] = aux_sym_concatenation_token1;
	v->a[38395] = anon_sym_DOLLAR;
	v->a[38396] = anon_sym_DQUOTE;
	v->a[38397] = sym_raw_string;
	v->a[38398] = sym_number;
	v->a[38399] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1920(v);
}

/* EOF small_parse_table_383.c */
