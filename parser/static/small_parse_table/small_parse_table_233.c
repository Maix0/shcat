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
	v->a[23300] = anon_sym_AMP_AMP;
	v->a[23301] = anon_sym_PIPE_PIPE;
	v->a[23302] = anon_sym_LT;
	v->a[23303] = anon_sym_GT;
	v->a[23304] = anon_sym_GT_GT;
	v->a[23305] = anon_sym_LT_AMP;
	v->a[23306] = anon_sym_GT_AMP;
	v->a[23307] = anon_sym_GT_PIPE;
	v->a[23308] = anon_sym_LT_GT;
	v->a[23309] = anon_sym_LT_LT;
	v->a[23310] = anon_sym_LT_LT_DASH;
	v->a[23311] = aux_sym_heredoc_redirect_token1;
	v->a[23312] = anon_sym_AMP;
	v->a[23313] = anon_sym_SEMI;
	v->a[23314] = 12;
	v->a[23315] = actions(3);
	v->a[23316] = 1;
	v->a[23317] = sym_comment;
	v->a[23318] = actions(692);
	v->a[23319] = 1;
	small_parse_table_1166(v);
}

void	small_parse_table_1166(t_small_parse_table_array *v)
{
	v->a[23320] = anon_sym_PIPE;
	v->a[23321] = actions(702);
	v->a[23322] = 1;
	v->a[23323] = sym_file_descriptor;
	v->a[23324] = actions(721);
	v->a[23325] = 1;
	v->a[23326] = sym_variable_name;
	v->a[23327] = actions(862);
	v->a[23328] = 1;
	v->a[23329] = ts_builtin_sym_end;
	v->a[23330] = state(736);
	v->a[23331] = 1;
	v->a[23332] = sym_terminator;
	v->a[23333] = actions(700);
	v->a[23334] = 2;
	v->a[23335] = anon_sym_LT_LT;
	v->a[23336] = anon_sym_LT_LT_DASH;
	v->a[23337] = actions(719);
	v->a[23338] = 2;
	v->a[23339] = anon_sym_AMP_AMP;
	small_parse_table_1167(v);
}

void	small_parse_table_1167(t_small_parse_table_array *v)
{
	v->a[23340] = anon_sym_PIPE_PIPE;
	v->a[23341] = state(1047);
	v->a[23342] = 2;
	v->a[23343] = sym_variable_assignment;
	v->a[23344] = aux_sym__variable_assignments_repeat1;
	v->a[23345] = state(1086);
	v->a[23346] = 3;
	v->a[23347] = sym_file_redirect;
	v->a[23348] = sym_heredoc_redirect;
	v->a[23349] = aux_sym_redirected_statement_repeat1;
	v->a[23350] = actions(717);
	v->a[23351] = 4;
	v->a[23352] = anon_sym_SEMI_SEMI;
	v->a[23353] = aux_sym_heredoc_redirect_token1;
	v->a[23354] = anon_sym_AMP;
	v->a[23355] = anon_sym_SEMI;
	v->a[23356] = actions(690);
	v->a[23357] = 16;
	v->a[23358] = anon_sym_LT;
	v->a[23359] = anon_sym_GT;
	small_parse_table_1168(v);
}

void	small_parse_table_1168(t_small_parse_table_array *v)
{
	v->a[23360] = anon_sym_GT_GT;
	v->a[23361] = anon_sym_LT_AMP;
	v->a[23362] = anon_sym_GT_AMP;
	v->a[23363] = anon_sym_GT_PIPE;
	v->a[23364] = anon_sym_LT_GT;
	v->a[23365] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23366] = anon_sym_DOLLAR;
	v->a[23367] = anon_sym_DQUOTE;
	v->a[23368] = sym_raw_string;
	v->a[23369] = sym_number;
	v->a[23370] = anon_sym_DOLLAR_LBRACE;
	v->a[23371] = anon_sym_DOLLAR_LPAREN;
	v->a[23372] = anon_sym_BQUOTE;
	v->a[23373] = sym_word;
	v->a[23374] = 12;
	v->a[23375] = actions(3);
	v->a[23376] = 1;
	v->a[23377] = sym_comment;
	v->a[23378] = actions(770);
	v->a[23379] = 1;
	small_parse_table_1169(v);
}

void	small_parse_table_1169(t_small_parse_table_array *v)
{
	v->a[23380] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23381] = actions(772);
	v->a[23382] = 1;
	v->a[23383] = anon_sym_DOLLAR;
	v->a[23384] = actions(774);
	v->a[23385] = 1;
	v->a[23386] = anon_sym_DQUOTE;
	v->a[23387] = actions(776);
	v->a[23388] = 1;
	v->a[23389] = anon_sym_DOLLAR_LBRACE;
	v->a[23390] = actions(778);
	v->a[23391] = 1;
	v->a[23392] = anon_sym_DOLLAR_LPAREN;
	v->a[23393] = actions(780);
	v->a[23394] = 1;
	v->a[23395] = anon_sym_BQUOTE;
	v->a[23396] = actions(515);
	v->a[23397] = 2;
	v->a[23398] = sym_file_descriptor;
	v->a[23399] = ts_builtin_sym_end;
	small_parse_table_1170(v);
}

/* EOF small_parse_table_233.c */
