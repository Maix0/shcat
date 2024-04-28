/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1823.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9115(t_small_parse_table_array *v)
{
	v->a[182300] = 1;
	v->a[182301] = anon_sym_STAR_STAR;
	v->a[182302] = actions(7717);
	v->a[182303] = 2;
	v->a[182304] = anon_sym_PLUS_PLUS;
	v->a[182305] = anon_sym_DASH_DASH;
	v->a[182306] = actions(7248);
	v->a[182307] = 12;
	v->a[182308] = anon_sym_PIPE;
	v->a[182309] = anon_sym_CARET;
	v->a[182310] = anon_sym_AMP;
	v->a[182311] = anon_sym_LT;
	v->a[182312] = anon_sym_GT;
	v->a[182313] = anon_sym_LT_LT;
	v->a[182314] = anon_sym_GT_GT;
	v->a[182315] = anon_sym_PLUS;
	v->a[182316] = anon_sym_DASH;
	v->a[182317] = anon_sym_STAR;
	v->a[182318] = anon_sym_SLASH;
	v->a[182319] = anon_sym_PERCENT;
	small_parse_table_9116(v);
}

void	small_parse_table_9116(t_small_parse_table_array *v)
{
	v->a[182320] = actions(7274);
	v->a[182321] = 21;
	v->a[182322] = anon_sym_COMMA;
	v->a[182323] = anon_sym_PLUS_EQ;
	v->a[182324] = anon_sym_DASH_EQ;
	v->a[182325] = anon_sym_STAR_EQ;
	v->a[182326] = anon_sym_SLASH_EQ;
	v->a[182327] = anon_sym_PERCENT_EQ;
	v->a[182328] = anon_sym_STAR_STAR_EQ;
	v->a[182329] = anon_sym_LT_LT_EQ;
	v->a[182330] = anon_sym_GT_GT_EQ;
	v->a[182331] = anon_sym_AMP_EQ;
	v->a[182332] = anon_sym_CARET_EQ;
	v->a[182333] = anon_sym_PIPE_EQ;
	v->a[182334] = anon_sym_PIPE_PIPE;
	v->a[182335] = anon_sym_DASHo;
	v->a[182336] = anon_sym_AMP_AMP;
	v->a[182337] = anon_sym_DASHa;
	v->a[182338] = anon_sym_EQ_EQ;
	v->a[182339] = anon_sym_BANG_EQ;
	small_parse_table_9117(v);
}

void	small_parse_table_9117(t_small_parse_table_array *v)
{
	v->a[182340] = anon_sym_LT_EQ;
	v->a[182341] = anon_sym_GT_EQ;
	v->a[182342] = anon_sym_RPAREN;
	v->a[182343] = 24;
	v->a[182344] = actions(71);
	v->a[182345] = 1;
	v->a[182346] = sym_comment;
	v->a[182347] = actions(6474);
	v->a[182348] = 1;
	v->a[182349] = sym_word;
	v->a[182350] = actions(6480);
	v->a[182351] = 1;
	v->a[182352] = anon_sym_LPAREN;
	v->a[182353] = actions(6488);
	v->a[182354] = 1;
	v->a[182355] = anon_sym_DOLLAR;
	v->a[182356] = actions(6494);
	v->a[182357] = 1;
	v->a[182358] = aux_sym_number_token1;
	v->a[182359] = actions(6496);
	small_parse_table_9118(v);
}

void	small_parse_table_9118(t_small_parse_table_array *v)
{
	v->a[182360] = 1;
	v->a[182361] = aux_sym_number_token2;
	v->a[182362] = actions(6500);
	v->a[182363] = 1;
	v->a[182364] = anon_sym_DOLLAR_LPAREN;
	v->a[182365] = actions(6508);
	v->a[182366] = 1;
	v->a[182367] = sym_test_operator;
	v->a[182368] = actions(6510);
	v->a[182369] = 1;
	v->a[182370] = sym_extglob_pattern;
	v->a[182371] = actions(6512);
	v->a[182372] = 1;
	v->a[182373] = sym__brace_start;
	v->a[182374] = actions(7226);
	v->a[182375] = 1;
	v->a[182376] = anon_sym_DOLLAR_LBRACK;
	v->a[182377] = actions(7228);
	v->a[182378] = 1;
	v->a[182379] = sym__special_character;
	small_parse_table_9119(v);
}

void	small_parse_table_9119(t_small_parse_table_array *v)
{
	v->a[182380] = actions(7230);
	v->a[182381] = 1;
	v->a[182382] = anon_sym_DQUOTE;
	v->a[182383] = actions(7234);
	v->a[182384] = 1;
	v->a[182385] = anon_sym_DOLLAR_LBRACE;
	v->a[182386] = actions(7236);
	v->a[182387] = 1;
	v->a[182388] = anon_sym_BQUOTE;
	v->a[182389] = actions(7238);
	v->a[182390] = 1;
	v->a[182391] = anon_sym_DOLLAR_BQUOTE;
	v->a[182392] = state(6426);
	v->a[182393] = 1;
	v->a[182394] = aux_sym__literal_repeat1;
	v->a[182395] = state(7013);
	v->a[182396] = 1;
	v->a[182397] = sym_last_case_item;
	v->a[182398] = actions(7224);
	v->a[182399] = 2;
	small_parse_table_9120(v);
}

/* EOF small_parse_table_1823.c */
