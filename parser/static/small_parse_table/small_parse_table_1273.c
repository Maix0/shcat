/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1273.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6365(t_small_parse_table_array *v)
{
	v->a[127300] = anon_sym_GT;
	v->a[127301] = anon_sym_LT_LT;
	v->a[127302] = anon_sym_AMP_GT;
	v->a[127303] = anon_sym_LT_AMP;
	v->a[127304] = anon_sym_GT_AMP;
	v->a[127305] = anon_sym_DOLLAR;
	v->a[127306] = sym__special_character;
	v->a[127307] = aux_sym_number_token1;
	v->a[127308] = aux_sym_number_token2;
	v->a[127309] = anon_sym_DOLLAR_LPAREN;
	v->a[127310] = anon_sym_BQUOTE;
	v->a[127311] = sym_word;
	v->a[127312] = actions(1310);
	v->a[127313] = 27;
	v->a[127314] = sym_file_descriptor;
	v->a[127315] = sym__concat;
	v->a[127316] = sym_variable_name;
	v->a[127317] = sym_test_operator;
	v->a[127318] = sym__brace_start;
	v->a[127319] = anon_sym_LPAREN_LPAREN;
	small_parse_table_6366(v);
}

void	small_parse_table_6366(t_small_parse_table_array *v)
{
	v->a[127320] = anon_sym_PIPE_PIPE;
	v->a[127321] = anon_sym_AMP_AMP;
	v->a[127322] = anon_sym_GT_GT;
	v->a[127323] = anon_sym_PIPE_AMP;
	v->a[127324] = anon_sym_RBRACK;
	v->a[127325] = anon_sym_AMP_GT_GT;
	v->a[127326] = anon_sym_GT_PIPE;
	v->a[127327] = anon_sym_LT_AMP_DASH;
	v->a[127328] = anon_sym_GT_AMP_DASH;
	v->a[127329] = anon_sym_LT_LT_DASH;
	v->a[127330] = anon_sym_LT_LT_LT;
	v->a[127331] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[127332] = anon_sym_DOLLAR_LBRACK;
	v->a[127333] = aux_sym_concatenation_token1;
	v->a[127334] = anon_sym_DQUOTE;
	v->a[127335] = sym_raw_string;
	v->a[127336] = sym_ansi_c_string;
	v->a[127337] = anon_sym_DOLLAR_LBRACE;
	v->a[127338] = anon_sym_DOLLAR_BQUOTE;
	v->a[127339] = anon_sym_LT_LPAREN;
	small_parse_table_6367(v);
}

void	small_parse_table_6367(t_small_parse_table_array *v)
{
	v->a[127340] = anon_sym_GT_LPAREN;
	v->a[127341] = 6;
	v->a[127342] = actions(3);
	v->a[127343] = 1;
	v->a[127344] = sym_comment;
	v->a[127345] = actions(5920);
	v->a[127346] = 1;
	v->a[127347] = aux_sym_concatenation_token1;
	v->a[127348] = actions(5946);
	v->a[127349] = 1;
	v->a[127350] = sym__concat;
	v->a[127351] = state(2391);
	v->a[127352] = 1;
	v->a[127353] = aux_sym_concatenation_repeat1;
	v->a[127354] = actions(5391);
	v->a[127355] = 4;
	v->a[127356] = sym_file_descriptor;
	v->a[127357] = sym_test_operator;
	v->a[127358] = sym__brace_start;
	v->a[127359] = aux_sym_heredoc_redirect_token1;
	small_parse_table_6368(v);
}

void	small_parse_table_6368(t_small_parse_table_array *v)
{
	v->a[127360] = actions(5389);
	v->a[127361] = 34;
	v->a[127362] = anon_sym_LPAREN_LPAREN;
	v->a[127363] = anon_sym_PIPE_PIPE;
	v->a[127364] = anon_sym_AMP_AMP;
	v->a[127365] = anon_sym_PIPE;
	v->a[127366] = anon_sym_LT;
	v->a[127367] = anon_sym_GT;
	v->a[127368] = anon_sym_LT_LT;
	v->a[127369] = anon_sym_GT_GT;
	v->a[127370] = anon_sym_PIPE_AMP;
	v->a[127371] = anon_sym_AMP_GT;
	v->a[127372] = anon_sym_AMP_GT_GT;
	v->a[127373] = anon_sym_LT_AMP;
	v->a[127374] = anon_sym_GT_AMP;
	v->a[127375] = anon_sym_GT_PIPE;
	v->a[127376] = anon_sym_LT_AMP_DASH;
	v->a[127377] = anon_sym_GT_AMP_DASH;
	v->a[127378] = anon_sym_LT_LT_DASH;
	v->a[127379] = anon_sym_LT_LT_LT;
	small_parse_table_6369(v);
}

void	small_parse_table_6369(t_small_parse_table_array *v)
{
	v->a[127380] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[127381] = anon_sym_DOLLAR_LBRACK;
	v->a[127382] = anon_sym_DOLLAR;
	v->a[127383] = sym__special_character;
	v->a[127384] = anon_sym_DQUOTE;
	v->a[127385] = sym_raw_string;
	v->a[127386] = sym_ansi_c_string;
	v->a[127387] = aux_sym_number_token1;
	v->a[127388] = aux_sym_number_token2;
	v->a[127389] = anon_sym_DOLLAR_LBRACE;
	v->a[127390] = anon_sym_DOLLAR_LPAREN;
	v->a[127391] = anon_sym_BQUOTE;
	v->a[127392] = anon_sym_DOLLAR_BQUOTE;
	v->a[127393] = anon_sym_LT_LPAREN;
	v->a[127394] = anon_sym_GT_LPAREN;
	v->a[127395] = sym_word;
	v->a[127396] = 3;
	v->a[127397] = actions(71);
	v->a[127398] = 1;
	v->a[127399] = sym_comment;
	small_parse_table_6370(v);
}

/* EOF small_parse_table_1273.c */
