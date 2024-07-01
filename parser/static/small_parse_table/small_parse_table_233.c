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
	v->a[23300] = anon_sym_GT_AMP_DASH;
	v->a[23301] = anon_sym_LT_LT;
	v->a[23302] = anon_sym_LT_LT_DASH;
	v->a[23303] = aux_sym_heredoc_redirect_token1;
	v->a[23304] = anon_sym_AMP;
	v->a[23305] = anon_sym_SEMI;
	v->a[23306] = 12;
	v->a[23307] = actions(3);
	v->a[23308] = 1;
	v->a[23309] = sym_comment;
	v->a[23310] = actions(767);
	v->a[23311] = 1;
	v->a[23312] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23313] = actions(769);
	v->a[23314] = 1;
	v->a[23315] = anon_sym_DOLLAR;
	v->a[23316] = actions(771);
	v->a[23317] = 1;
	v->a[23318] = anon_sym_DQUOTE;
	v->a[23319] = actions(773);
	small_parse_table_1166(v);
}

void	small_parse_table_1166(t_small_parse_table_array *v)
{
	v->a[23320] = 1;
	v->a[23321] = anon_sym_DOLLAR_LBRACE;
	v->a[23322] = actions(775);
	v->a[23323] = 1;
	v->a[23324] = anon_sym_DOLLAR_LPAREN;
	v->a[23325] = actions(777);
	v->a[23326] = 1;
	v->a[23327] = anon_sym_BQUOTE;
	v->a[23328] = actions(602);
	v->a[23329] = 2;
	v->a[23330] = sym_file_descriptor;
	v->a[23331] = ts_builtin_sym_end;
	v->a[23332] = state(236);
	v->a[23333] = 2;
	v->a[23334] = sym_concatenation;
	v->a[23335] = aux_sym_for_statement_repeat1;
	v->a[23336] = actions(765);
	v->a[23337] = 3;
	v->a[23338] = sym_raw_string;
	v->a[23339] = sym_number;
	small_parse_table_1167(v);
}

void	small_parse_table_1167(t_small_parse_table_array *v)
{
	v->a[23340] = sym_word;
	v->a[23341] = state(552);
	v->a[23342] = 5;
	v->a[23343] = sym_arithmetic_expansion;
	v->a[23344] = sym_string;
	v->a[23345] = sym_simple_expansion;
	v->a[23346] = sym_expansion;
	v->a[23347] = sym_command_substitution;
	v->a[23348] = actions(604);
	v->a[23349] = 17;
	v->a[23350] = anon_sym_PIPE;
	v->a[23351] = anon_sym_SEMI_SEMI;
	v->a[23352] = anon_sym_AMP_AMP;
	v->a[23353] = anon_sym_PIPE_PIPE;
	v->a[23354] = anon_sym_LT;
	v->a[23355] = anon_sym_GT;
	v->a[23356] = anon_sym_GT_GT;
	v->a[23357] = anon_sym_LT_AMP;
	v->a[23358] = anon_sym_GT_AMP;
	v->a[23359] = anon_sym_GT_PIPE;
	small_parse_table_1168(v);
}

void	small_parse_table_1168(t_small_parse_table_array *v)
{
	v->a[23360] = anon_sym_LT_AMP_DASH;
	v->a[23361] = anon_sym_GT_AMP_DASH;
	v->a[23362] = anon_sym_LT_LT;
	v->a[23363] = anon_sym_LT_LT_DASH;
	v->a[23364] = aux_sym_heredoc_redirect_token1;
	v->a[23365] = anon_sym_AMP;
	v->a[23366] = anon_sym_SEMI;
	v->a[23367] = 12;
	v->a[23368] = actions(3);
	v->a[23369] = 1;
	v->a[23370] = sym_comment;
	v->a[23371] = actions(682);
	v->a[23372] = 1;
	v->a[23373] = anon_sym_PIPE;
	v->a[23374] = actions(690);
	v->a[23375] = 1;
	v->a[23376] = sym_file_descriptor;
	v->a[23377] = actions(779);
	v->a[23378] = 1;
	v->a[23379] = ts_builtin_sym_end;
	small_parse_table_1169(v);
}

void	small_parse_table_1169(t_small_parse_table_array *v)
{
	v->a[23380] = actions(785);
	v->a[23381] = 1;
	v->a[23382] = sym_variable_name;
	v->a[23383] = state(782);
	v->a[23384] = 1;
	v->a[23385] = sym_terminator;
	v->a[23386] = actions(754);
	v->a[23387] = 2;
	v->a[23388] = anon_sym_LT_LT;
	v->a[23389] = anon_sym_LT_LT_DASH;
	v->a[23390] = actions(783);
	v->a[23391] = 2;
	v->a[23392] = anon_sym_AMP_AMP;
	v->a[23393] = anon_sym_PIPE_PIPE;
	v->a[23394] = state(1155);
	v->a[23395] = 2;
	v->a[23396] = sym_variable_assignment;
	v->a[23397] = aux_sym__variable_assignments_repeat1;
	v->a[23398] = state(1160);
	v->a[23399] = 3;
	small_parse_table_1170(v);
}

/* EOF small_parse_table_233.c */
