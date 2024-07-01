/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_503.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2515(t_small_parse_table_array *v)
{
	v->a[50300] = anon_sym_LT_AMP_DASH;
	v->a[50301] = anon_sym_GT_AMP_DASH;
	v->a[50302] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50303] = anon_sym_DOLLAR;
	v->a[50304] = anon_sym_DQUOTE;
	v->a[50305] = sym_raw_string;
	v->a[50306] = sym_number;
	v->a[50307] = anon_sym_DOLLAR_LBRACE;
	v->a[50308] = anon_sym_DOLLAR_LPAREN;
	v->a[50309] = anon_sym_BQUOTE;
	v->a[50310] = sym_word;
	v->a[50311] = 3;
	v->a[50312] = actions(3);
	v->a[50313] = 1;
	v->a[50314] = sym_comment;
	v->a[50315] = actions(1015);
	v->a[50316] = 3;
	v->a[50317] = sym_file_descriptor;
	v->a[50318] = sym__concat;
	v->a[50319] = sym__bare_dollar;
	small_parse_table_2516(v);
}

void	small_parse_table_2516(t_small_parse_table_array *v)
{
	v->a[50320] = actions(1013);
	v->a[50321] = 24;
	v->a[50322] = anon_sym_LPAREN;
	v->a[50323] = anon_sym_PIPE;
	v->a[50324] = anon_sym_AMP_AMP;
	v->a[50325] = anon_sym_PIPE_PIPE;
	v->a[50326] = anon_sym_LT;
	v->a[50327] = anon_sym_GT;
	v->a[50328] = anon_sym_GT_GT;
	v->a[50329] = anon_sym_LT_AMP;
	v->a[50330] = anon_sym_GT_AMP;
	v->a[50331] = anon_sym_GT_PIPE;
	v->a[50332] = anon_sym_LT_AMP_DASH;
	v->a[50333] = anon_sym_GT_AMP_DASH;
	v->a[50334] = anon_sym_LT_LT;
	v->a[50335] = anon_sym_LT_LT_DASH;
	v->a[50336] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50337] = aux_sym_concatenation_token1;
	v->a[50338] = anon_sym_DOLLAR;
	v->a[50339] = anon_sym_DQUOTE;
	small_parse_table_2517(v);
}

void	small_parse_table_2517(t_small_parse_table_array *v)
{
	v->a[50340] = sym_raw_string;
	v->a[50341] = sym_number;
	v->a[50342] = anon_sym_DOLLAR_LBRACE;
	v->a[50343] = anon_sym_DOLLAR_LPAREN;
	v->a[50344] = anon_sym_BQUOTE;
	v->a[50345] = sym_word;
	v->a[50346] = 16;
	v->a[50347] = actions(870);
	v->a[50348] = 1;
	v->a[50349] = sym_comment;
	v->a[50350] = actions(1744);
	v->a[50351] = 1;
	v->a[50352] = anon_sym_LPAREN;
	v->a[50353] = actions(1746);
	v->a[50354] = 1;
	v->a[50355] = anon_sym_BANG;
	v->a[50356] = actions(1748);
	v->a[50357] = 1;
	v->a[50358] = anon_sym_RPAREN_RPAREN;
	v->a[50359] = actions(1754);
	small_parse_table_2518(v);
}

void	small_parse_table_2518(t_small_parse_table_array *v)
{
	v->a[50360] = 1;
	v->a[50361] = anon_sym_TILDE;
	v->a[50362] = actions(1756);
	v->a[50363] = 1;
	v->a[50364] = anon_sym_DOLLAR;
	v->a[50365] = actions(1758);
	v->a[50366] = 1;
	v->a[50367] = anon_sym_DQUOTE;
	v->a[50368] = actions(1762);
	v->a[50369] = 1;
	v->a[50370] = anon_sym_DOLLAR_LBRACE;
	v->a[50371] = actions(1764);
	v->a[50372] = 1;
	v->a[50373] = anon_sym_DOLLAR_LPAREN;
	v->a[50374] = actions(1766);
	v->a[50375] = 1;
	v->a[50376] = anon_sym_BQUOTE;
	v->a[50377] = actions(1768);
	v->a[50378] = 1;
	v->a[50379] = sym_variable_name;
	small_parse_table_2519(v);
}

void	small_parse_table_2519(t_small_parse_table_array *v)
{
	v->a[50380] = actions(1750);
	v->a[50381] = 2;
	v->a[50382] = anon_sym_PLUS_PLUS;
	v->a[50383] = anon_sym_DASH_DASH;
	v->a[50384] = actions(1752);
	v->a[50385] = 2;
	v->a[50386] = anon_sym_DASH2;
	v->a[50387] = anon_sym_PLUS2;
	v->a[50388] = actions(1760);
	v->a[50389] = 2;
	v->a[50390] = sym_number;
	v->a[50391] = aux_sym__simple_variable_name_token1;
	v->a[50392] = state(271);
	v->a[50393] = 3;
	v->a[50394] = sym_string;
	v->a[50395] = sym_simple_expansion;
	v->a[50396] = sym_expansion;
	v->a[50397] = state(343);
	v->a[50398] = 8;
	v->a[50399] = sym__arithmetic_expression;
	small_parse_table_2520(v);
}

/* EOF small_parse_table_503.c */
