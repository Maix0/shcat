/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_233.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1165(t_small_parse_table_array *v)
{
	v->a[23300] = anon_sym_AT;
	v->a[23301] = anon_sym_0;
	v->a[23302] = actions(361);
	v->a[23303] = 20;
	v->a[23304] = anon_sym_PIPE;
	v->a[23305] = anon_sym_AMP_AMP;
	v->a[23306] = anon_sym_PIPE_PIPE;
	v->a[23307] = anon_sym_LT;
	v->a[23308] = anon_sym_GT;
	v->a[23309] = anon_sym_GT_GT;
	v->a[23310] = anon_sym_LT_AMP;
	v->a[23311] = anon_sym_GT_AMP;
	v->a[23312] = anon_sym_GT_PIPE;
	v->a[23313] = anon_sym_LT_GT;
	v->a[23314] = anon_sym_LT_LT;
	v->a[23315] = anon_sym_LT_LT_DASH;
	v->a[23316] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23317] = anon_sym_DQUOTE;
	v->a[23318] = sym_raw_string;
	v->a[23319] = sym_number;
	small_parse_table_1166(v);
}

void	small_parse_table_1166(t_small_parse_table_array *v)
{
	v->a[23320] = anon_sym_DOLLAR_LBRACE;
	v->a[23321] = anon_sym_DOLLAR_LPAREN;
	v->a[23322] = anon_sym_BQUOTE;
	v->a[23323] = sym_word;
	v->a[23324] = 14;
	v->a[23325] = actions(3);
	v->a[23326] = 1;
	v->a[23327] = sym_comment;
	v->a[23328] = actions(564);
	v->a[23329] = 1;
	v->a[23330] = sym_file_descriptor;
	v->a[23331] = actions(604);
	v->a[23332] = 1;
	v->a[23333] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23334] = actions(607);
	v->a[23335] = 1;
	v->a[23336] = anon_sym_DOLLAR;
	v->a[23337] = actions(610);
	v->a[23338] = 1;
	v->a[23339] = anon_sym_DQUOTE;
	small_parse_table_1167(v);
}

void	small_parse_table_1167(t_small_parse_table_array *v)
{
	v->a[23340] = actions(613);
	v->a[23341] = 1;
	v->a[23342] = anon_sym_DOLLAR_LBRACE;
	v->a[23343] = actions(616);
	v->a[23344] = 1;
	v->a[23345] = anon_sym_DOLLAR_LPAREN;
	v->a[23346] = actions(619);
	v->a[23347] = 1;
	v->a[23348] = anon_sym_BQUOTE;
	v->a[23349] = actions(622);
	v->a[23350] = 1;
	v->a[23351] = sym__bare_dollar;
	v->a[23352] = state(253);
	v->a[23353] = 1;
	v->a[23354] = aux_sym_command_repeat2;
	v->a[23355] = state(674);
	v->a[23356] = 1;
	v->a[23357] = sym_concatenation;
	v->a[23358] = actions(858);
	v->a[23359] = 3;
	small_parse_table_1168(v);
}

void	small_parse_table_1168(t_small_parse_table_array *v)
{
	v->a[23360] = sym_raw_string;
	v->a[23361] = sym_number;
	v->a[23362] = sym_word;
	v->a[23363] = state(495);
	v->a[23364] = 5;
	v->a[23365] = sym_arithmetic_expansion;
	v->a[23366] = sym_string;
	v->a[23367] = sym_simple_expansion;
	v->a[23368] = sym_expansion;
	v->a[23369] = sym_command_substitution;
	v->a[23370] = actions(544);
	v->a[23371] = 15;
	v->a[23372] = anon_sym_PIPE;
	v->a[23373] = anon_sym_SEMI_SEMI;
	v->a[23374] = anon_sym_AMP_AMP;
	v->a[23375] = anon_sym_PIPE_PIPE;
	v->a[23376] = anon_sym_LT;
	v->a[23377] = anon_sym_GT;
	v->a[23378] = anon_sym_GT_GT;
	v->a[23379] = anon_sym_LT_AMP;
	small_parse_table_1169(v);
}

void	small_parse_table_1169(t_small_parse_table_array *v)
{
	v->a[23380] = anon_sym_GT_AMP;
	v->a[23381] = anon_sym_GT_PIPE;
	v->a[23382] = anon_sym_LT_GT;
	v->a[23383] = anon_sym_LT_LT;
	v->a[23384] = anon_sym_LT_LT_DASH;
	v->a[23385] = aux_sym_heredoc_redirect_token1;
	v->a[23386] = anon_sym_SEMI;
	v->a[23387] = 14;
	v->a[23388] = actions(3);
	v->a[23389] = 1;
	v->a[23390] = sym_comment;
	v->a[23391] = actions(405);
	v->a[23392] = 1;
	v->a[23393] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23394] = actions(407);
	v->a[23395] = 1;
	v->a[23396] = anon_sym_DOLLAR;
	v->a[23397] = actions(409);
	v->a[23398] = 1;
	v->a[23399] = anon_sym_DQUOTE;
	small_parse_table_1170(v);
}

/* EOF small_parse_table_233.c */
