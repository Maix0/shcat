/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_873.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4365(t_small_parse_table_array *v)
{
	v->a[87300] = sym_command_substitution;
	v->a[87301] = 6;
	v->a[87302] = actions(3);
	v->a[87303] = 1;
	v->a[87304] = sym_comment;
	v->a[87305] = actions(3234);
	v->a[87306] = 1;
	v->a[87307] = aux_sym_concatenation_token1;
	v->a[87308] = actions(3541);
	v->a[87309] = 1;
	v->a[87310] = sym__concat;
	v->a[87311] = state(1625);
	v->a[87312] = 1;
	v->a[87313] = aux_sym_concatenation_repeat1;
	v->a[87314] = actions(543);
	v->a[87315] = 2;
	v->a[87316] = sym_file_descriptor;
	v->a[87317] = aux_sym_heredoc_redirect_token1;
	v->a[87318] = actions(541);
	v->a[87319] = 12;
	small_parse_table_4366(v);
}

void	small_parse_table_4366(t_small_parse_table_array *v)
{
	v->a[87320] = anon_sym_AMP_AMP;
	v->a[87321] = anon_sym_PIPE_PIPE;
	v->a[87322] = anon_sym_LT;
	v->a[87323] = anon_sym_GT;
	v->a[87324] = anon_sym_GT_GT;
	v->a[87325] = anon_sym_AMP_GT;
	v->a[87326] = anon_sym_AMP_GT_GT;
	v->a[87327] = anon_sym_LT_AMP;
	v->a[87328] = anon_sym_GT_AMP;
	v->a[87329] = anon_sym_GT_PIPE;
	v->a[87330] = anon_sym_LT_AMP_DASH;
	v->a[87331] = anon_sym_GT_AMP_DASH;
	v->a[87332] = 12;
	v->a[87333] = actions(3);
	v->a[87334] = 1;
	v->a[87335] = sym_comment;
	v->a[87336] = actions(884);
	v->a[87337] = 1;
	v->a[87338] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87339] = actions(886);
	small_parse_table_4367(v);
}

void	small_parse_table_4367(t_small_parse_table_array *v)
{
	v->a[87340] = 1;
	v->a[87341] = anon_sym_DOLLAR;
	v->a[87342] = actions(888);
	v->a[87343] = 1;
	v->a[87344] = anon_sym_DQUOTE;
	v->a[87345] = actions(890);
	v->a[87346] = 1;
	v->a[87347] = anon_sym_DOLLAR_LBRACE;
	v->a[87348] = actions(892);
	v->a[87349] = 1;
	v->a[87350] = anon_sym_DOLLAR_LPAREN;
	v->a[87351] = actions(894);
	v->a[87352] = 1;
	v->a[87353] = anon_sym_BQUOTE;
	v->a[87354] = actions(3543);
	v->a[87355] = 1;
	v->a[87356] = aux_sym_heredoc_redirect_token1;
	v->a[87357] = state(1613);
	v->a[87358] = 1;
	v->a[87359] = aux_sym__heredoc_command;
	small_parse_table_4368(v);
}

void	small_parse_table_4368(t_small_parse_table_array *v)
{
	v->a[87360] = state(2098);
	v->a[87361] = 1;
	v->a[87362] = sym_concatenation;
	v->a[87363] = actions(872);
	v->a[87364] = 3;
	v->a[87365] = sym_raw_string;
	v->a[87366] = sym_number;
	v->a[87367] = sym_word;
	v->a[87368] = state(1944);
	v->a[87369] = 5;
	v->a[87370] = sym_arithmetic_expansion;
	v->a[87371] = sym_string;
	v->a[87372] = sym_simple_expansion;
	v->a[87373] = sym_expansion;
	v->a[87374] = sym_command_substitution;
	v->a[87375] = 10;
	v->a[87376] = actions(3);
	v->a[87377] = 1;
	v->a[87378] = sym_comment;
	v->a[87379] = actions(477);
	small_parse_table_4369(v);
}

void	small_parse_table_4369(t_small_parse_table_array *v)
{
	v->a[87380] = 1;
	v->a[87381] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87382] = actions(481);
	v->a[87383] = 1;
	v->a[87384] = anon_sym_DQUOTE;
	v->a[87385] = actions(483);
	v->a[87386] = 1;
	v->a[87387] = anon_sym_DOLLAR_LBRACE;
	v->a[87388] = actions(485);
	v->a[87389] = 1;
	v->a[87390] = anon_sym_DOLLAR_LPAREN;
	v->a[87391] = actions(487);
	v->a[87392] = 1;
	v->a[87393] = anon_sym_BQUOTE;
	v->a[87394] = actions(3455);
	v->a[87395] = 1;
	v->a[87396] = sym__bare_dollar;
	v->a[87397] = actions(3545);
	v->a[87398] = 1;
	v->a[87399] = anon_sym_DOLLAR;
	small_parse_table_4370(v);
}

/* EOF small_parse_table_873.c */
