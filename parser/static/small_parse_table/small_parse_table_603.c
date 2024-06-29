/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_603.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3015(t_small_parse_table_array *v)
{
	v->a[60300] = anon_sym_AMP_GT;
	v->a[60301] = anon_sym_AMP_GT_GT;
	v->a[60302] = anon_sym_LT_AMP;
	v->a[60303] = anon_sym_GT_AMP;
	v->a[60304] = anon_sym_GT_PIPE;
	v->a[60305] = anon_sym_LT_AMP_DASH;
	v->a[60306] = anon_sym_GT_AMP_DASH;
	v->a[60307] = anon_sym_LT_LT;
	v->a[60308] = anon_sym_LT_LT_DASH;
	v->a[60309] = anon_sym_AMP;
	v->a[60310] = aux_sym_concatenation_token1;
	v->a[60311] = anon_sym_BQUOTE;
	v->a[60312] = anon_sym_SEMI;
	v->a[60313] = 3;
	v->a[60314] = actions(3);
	v->a[60315] = 1;
	v->a[60316] = sym_comment;
	v->a[60317] = actions(1195);
	v->a[60318] = 5;
	v->a[60319] = sym_file_descriptor;
	small_parse_table_3016(v);
}

void	small_parse_table_3016(t_small_parse_table_array *v)
{
	v->a[60320] = sym__concat;
	v->a[60321] = sym_variable_name;
	v->a[60322] = ts_builtin_sym_end;
	v->a[60323] = aux_sym_heredoc_redirect_token1;
	v->a[60324] = actions(1193);
	v->a[60325] = 21;
	v->a[60326] = anon_sym_PIPE;
	v->a[60327] = anon_sym_RPAREN;
	v->a[60328] = anon_sym_SEMI_SEMI;
	v->a[60329] = anon_sym_AMP_AMP;
	v->a[60330] = anon_sym_PIPE_PIPE;
	v->a[60331] = anon_sym_LT;
	v->a[60332] = anon_sym_GT;
	v->a[60333] = anon_sym_GT_GT;
	v->a[60334] = anon_sym_AMP_GT;
	v->a[60335] = anon_sym_AMP_GT_GT;
	v->a[60336] = anon_sym_LT_AMP;
	v->a[60337] = anon_sym_GT_AMP;
	v->a[60338] = anon_sym_GT_PIPE;
	v->a[60339] = anon_sym_LT_AMP_DASH;
	small_parse_table_3017(v);
}

void	small_parse_table_3017(t_small_parse_table_array *v)
{
	v->a[60340] = anon_sym_GT_AMP_DASH;
	v->a[60341] = anon_sym_LT_LT;
	v->a[60342] = anon_sym_LT_LT_DASH;
	v->a[60343] = anon_sym_AMP;
	v->a[60344] = aux_sym_concatenation_token1;
	v->a[60345] = anon_sym_BQUOTE;
	v->a[60346] = anon_sym_SEMI;
	v->a[60347] = 15;
	v->a[60348] = actions(1074);
	v->a[60349] = 1;
	v->a[60350] = sym_comment;
	v->a[60351] = actions(1831);
	v->a[60352] = 1;
	v->a[60353] = anon_sym_LPAREN;
	v->a[60354] = actions(1833);
	v->a[60355] = 1;
	v->a[60356] = anon_sym_BANG;
	v->a[60357] = actions(1841);
	v->a[60358] = 1;
	v->a[60359] = anon_sym_TILDE;
	small_parse_table_3018(v);
}

void	small_parse_table_3018(t_small_parse_table_array *v)
{
	v->a[60360] = actions(1843);
	v->a[60361] = 1;
	v->a[60362] = anon_sym_DOLLAR;
	v->a[60363] = actions(1845);
	v->a[60364] = 1;
	v->a[60365] = anon_sym_DQUOTE;
	v->a[60366] = actions(1849);
	v->a[60367] = 1;
	v->a[60368] = anon_sym_DOLLAR_LBRACE;
	v->a[60369] = actions(1851);
	v->a[60370] = 1;
	v->a[60371] = anon_sym_DOLLAR_LPAREN;
	v->a[60372] = actions(1853);
	v->a[60373] = 1;
	v->a[60374] = anon_sym_BQUOTE;
	v->a[60375] = actions(1855);
	v->a[60376] = 1;
	v->a[60377] = sym_variable_name;
	v->a[60378] = actions(1837);
	v->a[60379] = 2;
	small_parse_table_3019(v);
}

void	small_parse_table_3019(t_small_parse_table_array *v)
{
	v->a[60380] = anon_sym_PLUS_PLUS;
	v->a[60381] = anon_sym_DASH_DASH;
	v->a[60382] = actions(1839);
	v->a[60383] = 2;
	v->a[60384] = anon_sym_DASH2;
	v->a[60385] = anon_sym_PLUS2;
	v->a[60386] = actions(1847);
	v->a[60387] = 2;
	v->a[60388] = sym_number;
	v->a[60389] = aux_sym__simple_variable_name_token1;
	v->a[60390] = state(370);
	v->a[60391] = 3;
	v->a[60392] = sym_string;
	v->a[60393] = sym_simple_expansion;
	v->a[60394] = sym_expansion;
	v->a[60395] = state(347);
	v->a[60396] = 8;
	v->a[60397] = sym__arithmetic_expression;
	v->a[60398] = sym_arithmetic_literal;
	v->a[60399] = sym_arithmetic_binary_expression;
	small_parse_table_3020(v);
}

/* EOF small_parse_table_603.c */
