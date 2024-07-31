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
	v->a[23300] = state(918);
	v->a[23301] = 3;
	v->a[23302] = sym_file_redirect;
	v->a[23303] = sym_heredoc_redirect;
	v->a[23304] = aux_sym_redirected_statement_repeat1;
	v->a[23305] = actions(742);
	v->a[23306] = 16;
	v->a[23307] = anon_sym_LT;
	v->a[23308] = anon_sym_GT;
	v->a[23309] = anon_sym_GT_GT;
	v->a[23310] = anon_sym_LT_AMP;
	v->a[23311] = anon_sym_GT_AMP;
	v->a[23312] = anon_sym_GT_PIPE;
	v->a[23313] = anon_sym_LT_GT;
	v->a[23314] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23315] = anon_sym_DOLLAR;
	v->a[23316] = anon_sym_DQUOTE;
	v->a[23317] = sym_raw_string;
	v->a[23318] = sym_number;
	v->a[23319] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1166(v);
}

void	small_parse_table_1166(t_small_parse_table_array *v)
{
	v->a[23320] = anon_sym_DOLLAR_LPAREN;
	v->a[23321] = anon_sym_BQUOTE;
	v->a[23322] = sym_word;
	v->a[23323] = 12;
	v->a[23324] = actions(3);
	v->a[23325] = 1;
	v->a[23326] = sym_comment;
	v->a[23327] = actions(53);
	v->a[23328] = 1;
	v->a[23329] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23330] = actions(55);
	v->a[23331] = 1;
	v->a[23332] = anon_sym_DOLLAR;
	v->a[23333] = actions(57);
	v->a[23334] = 1;
	v->a[23335] = anon_sym_DQUOTE;
	v->a[23336] = actions(61);
	v->a[23337] = 1;
	v->a[23338] = anon_sym_DOLLAR_LBRACE;
	v->a[23339] = actions(63);
	small_parse_table_1167(v);
}

void	small_parse_table_1167(t_small_parse_table_array *v)
{
	v->a[23340] = 1;
	v->a[23341] = anon_sym_DOLLAR_LPAREN;
	v->a[23342] = actions(535);
	v->a[23343] = 1;
	v->a[23344] = sym__bare_dollar;
	v->a[23345] = state(268);
	v->a[23346] = 1;
	v->a[23347] = aux_sym_command_repeat2;
	v->a[23348] = state(614);
	v->a[23349] = 1;
	v->a[23350] = sym_concatenation;
	v->a[23351] = actions(778);
	v->a[23352] = 3;
	v->a[23353] = sym_raw_string;
	v->a[23354] = sym_number;
	v->a[23355] = sym_word;
	v->a[23356] = state(449);
	v->a[23357] = 5;
	v->a[23358] = sym_arithmetic_expansion;
	v->a[23359] = sym_string;
	small_parse_table_1168(v);
}

void	small_parse_table_1168(t_small_parse_table_array *v)
{
	v->a[23360] = sym_simple_expansion;
	v->a[23361] = sym_expansion;
	v->a[23362] = sym_command_substitution;
	v->a[23363] = actions(533);
	v->a[23364] = 16;
	v->a[23365] = anon_sym_PIPE;
	v->a[23366] = anon_sym_SEMI_SEMI;
	v->a[23367] = anon_sym_AMP_AMP;
	v->a[23368] = anon_sym_PIPE_PIPE;
	v->a[23369] = anon_sym_LT;
	v->a[23370] = anon_sym_GT;
	v->a[23371] = anon_sym_GT_GT;
	v->a[23372] = anon_sym_LT_AMP;
	v->a[23373] = anon_sym_GT_AMP;
	v->a[23374] = anon_sym_GT_PIPE;
	v->a[23375] = anon_sym_LT_GT;
	v->a[23376] = anon_sym_LT_LT;
	v->a[23377] = anon_sym_LT_LT_DASH;
	v->a[23378] = aux_sym_heredoc_redirect_token1;
	v->a[23379] = anon_sym_BQUOTE;
	small_parse_table_1169(v);
}

void	small_parse_table_1169(t_small_parse_table_array *v)
{
	v->a[23380] = anon_sym_SEMI;
	v->a[23381] = 13;
	v->a[23382] = actions(3);
	v->a[23383] = 1;
	v->a[23384] = sym_comment;
	v->a[23385] = actions(53);
	v->a[23386] = 1;
	v->a[23387] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23388] = actions(55);
	v->a[23389] = 1;
	v->a[23390] = anon_sym_DOLLAR;
	v->a[23391] = actions(57);
	v->a[23392] = 1;
	v->a[23393] = anon_sym_DQUOTE;
	v->a[23394] = actions(61);
	v->a[23395] = 1;
	v->a[23396] = anon_sym_DOLLAR_LBRACE;
	v->a[23397] = actions(63);
	v->a[23398] = 1;
	v->a[23399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1170(v);
}

/* EOF small_parse_table_233.c */
