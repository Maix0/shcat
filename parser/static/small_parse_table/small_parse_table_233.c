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
	v->a[23300] = sym_comment;
	v->a[23301] = actions(638);
	v->a[23302] = 1;
	v->a[23303] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23304] = actions(641);
	v->a[23305] = 1;
	v->a[23306] = anon_sym_DOLLAR;
	v->a[23307] = actions(644);
	v->a[23308] = 1;
	v->a[23309] = anon_sym_DQUOTE;
	v->a[23310] = actions(647);
	v->a[23311] = 1;
	v->a[23312] = aux_sym_number_token1;
	v->a[23313] = actions(650);
	v->a[23314] = 1;
	v->a[23315] = aux_sym_number_token2;
	v->a[23316] = actions(653);
	v->a[23317] = 1;
	v->a[23318] = anon_sym_DOLLAR_LBRACE;
	v->a[23319] = actions(656);
	small_parse_table_1166(v);
}

void	small_parse_table_1166(t_small_parse_table_array *v)
{
	v->a[23320] = 1;
	v->a[23321] = anon_sym_DOLLAR_LPAREN;
	v->a[23322] = actions(659);
	v->a[23323] = 1;
	v->a[23324] = anon_sym_BQUOTE;
	v->a[23325] = actions(633);
	v->a[23326] = 2;
	v->a[23327] = sym_raw_string;
	v->a[23328] = sym_word;
	v->a[23329] = actions(662);
	v->a[23330] = 2;
	v->a[23331] = sym_file_descriptor;
	v->a[23332] = sym_variable_name;
	v->a[23333] = state(204);
	v->a[23334] = 2;
	v->a[23335] = sym_concatenation;
	v->a[23336] = aux_sym_for_statement_repeat1;
	v->a[23337] = state(324);
	v->a[23338] = 6;
	v->a[23339] = sym_arithmetic_expansion;
	small_parse_table_1167(v);
}

void	small_parse_table_1167(t_small_parse_table_array *v)
{
	v->a[23340] = sym_string;
	v->a[23341] = sym_number;
	v->a[23342] = sym_simple_expansion;
	v->a[23343] = sym_expansion;
	v->a[23344] = sym_command_substitution;
	v->a[23345] = actions(636);
	v->a[23346] = 20;
	v->a[23347] = anon_sym_PIPE;
	v->a[23348] = anon_sym_RPAREN;
	v->a[23349] = anon_sym_SEMI_SEMI;
	v->a[23350] = anon_sym_AMP_AMP;
	v->a[23351] = anon_sym_PIPE_PIPE;
	v->a[23352] = anon_sym_LT;
	v->a[23353] = anon_sym_GT;
	v->a[23354] = anon_sym_GT_GT;
	v->a[23355] = anon_sym_AMP_GT;
	v->a[23356] = anon_sym_AMP_GT_GT;
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
	v->a[23367] = 5;
	v->a[23368] = actions(3);
	v->a[23369] = 1;
	v->a[23370] = sym_comment;
	v->a[23371] = actions(555);
	v->a[23372] = 2;
	v->a[23373] = sym_file_descriptor;
	v->a[23374] = sym_variable_name;
	v->a[23375] = state(204);
	v->a[23376] = 2;
	v->a[23377] = sym_concatenation;
	v->a[23378] = aux_sym_for_statement_repeat1;
	v->a[23379] = state(324);
	small_parse_table_1169(v);
}

void	small_parse_table_1169(t_small_parse_table_array *v)
{
	v->a[23380] = 6;
	v->a[23381] = sym_arithmetic_expansion;
	v->a[23382] = sym_string;
	v->a[23383] = sym_number;
	v->a[23384] = sym_simple_expansion;
	v->a[23385] = sym_expansion;
	v->a[23386] = sym_command_substitution;
	v->a[23387] = actions(553);
	v->a[23388] = 30;
	v->a[23389] = anon_sym_PIPE;
	v->a[23390] = anon_sym_RPAREN;
	v->a[23391] = anon_sym_SEMI_SEMI;
	v->a[23392] = anon_sym_AMP_AMP;
	v->a[23393] = anon_sym_PIPE_PIPE;
	v->a[23394] = anon_sym_LT;
	v->a[23395] = anon_sym_GT;
	v->a[23396] = anon_sym_GT_GT;
	v->a[23397] = anon_sym_AMP_GT;
	v->a[23398] = anon_sym_AMP_GT_GT;
	v->a[23399] = anon_sym_LT_AMP;
	small_parse_table_1170(v);
}

/* EOF small_parse_table_233.c */
