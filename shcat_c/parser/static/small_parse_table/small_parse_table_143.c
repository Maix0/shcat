/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_143.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_715(t_small_parse_table_array *v)
{
	v->a[14300] = 1;
	v->a[14301] = sym_test_operator;
	v->a[14302] = actions(3330);
	v->a[14303] = 1;
	v->a[14304] = sym__brace_start;
	v->a[14305] = state(2024);
	v->a[14306] = 1;
	v->a[14307] = aux_sym__literal_repeat1;
	v->a[14308] = actions(3291);
	v->a[14309] = 2;
	v->a[14310] = anon_sym_LPAREN_LPAREN;
	v->a[14311] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14312] = actions(3324);
	v->a[14313] = 2;
	v->a[14314] = anon_sym_LT_LPAREN;
	v->a[14315] = anon_sym_GT_LPAREN;
	v->a[14316] = state(678);
	v->a[14317] = 2;
	v->a[14318] = sym_concatenation;
	v->a[14319] = aux_sym_for_statement_repeat1;
	small_parse_table_716(v);
}

void	small_parse_table_716(t_small_parse_table_array *v)
{
	v->a[14320] = actions(2216);
	v->a[14321] = 3;
	v->a[14322] = sym_file_descriptor;
	v->a[14323] = ts_builtin_sym_end;
	v->a[14324] = aux_sym_heredoc_redirect_token1;
	v->a[14325] = actions(3288);
	v->a[14326] = 3;
	v->a[14327] = sym_raw_string;
	v->a[14328] = sym_ansi_c_string;
	v->a[14329] = sym_word;
	v->a[14330] = state(1630);
	v->a[14331] = 9;
	v->a[14332] = sym_arithmetic_expansion;
	v->a[14333] = sym_brace_expression;
	v->a[14334] = sym_string;
	v->a[14335] = sym_translated_string;
	v->a[14336] = sym_number;
	v->a[14337] = sym_simple_expansion;
	v->a[14338] = sym_expansion;
	v->a[14339] = sym_command_substitution;
	small_parse_table_717(v);
}

void	small_parse_table_717(t_small_parse_table_array *v)
{
	v->a[14340] = sym_process_substitution;
	v->a[14341] = actions(2214);
	v->a[14342] = 20;
	v->a[14343] = anon_sym_SEMI;
	v->a[14344] = anon_sym_PIPE_PIPE;
	v->a[14345] = anon_sym_AMP_AMP;
	v->a[14346] = anon_sym_PIPE;
	v->a[14347] = anon_sym_AMP;
	v->a[14348] = anon_sym_LT;
	v->a[14349] = anon_sym_GT;
	v->a[14350] = anon_sym_LT_LT;
	v->a[14351] = anon_sym_GT_GT;
	v->a[14352] = anon_sym_SEMI_SEMI;
	v->a[14353] = anon_sym_PIPE_AMP;
	v->a[14354] = anon_sym_AMP_GT;
	v->a[14355] = anon_sym_AMP_GT_GT;
	v->a[14356] = anon_sym_LT_AMP;
	v->a[14357] = anon_sym_GT_AMP;
	v->a[14358] = anon_sym_GT_PIPE;
	v->a[14359] = anon_sym_LT_AMP_DASH;
	small_parse_table_718(v);
}

void	small_parse_table_718(t_small_parse_table_array *v)
{
	v->a[14360] = anon_sym_GT_AMP_DASH;
	v->a[14361] = anon_sym_LT_LT_DASH;
	v->a[14362] = anon_sym_LT_LT_LT;
	v->a[14363] = 8;
	v->a[14364] = actions(3);
	v->a[14365] = 1;
	v->a[14366] = sym_comment;
	v->a[14367] = actions(3274);
	v->a[14368] = 1;
	v->a[14369] = anon_sym_DQUOTE;
	v->a[14370] = actions(3278);
	v->a[14371] = 1;
	v->a[14372] = sym_variable_name;
	v->a[14373] = state(1825);
	v->a[14374] = 1;
	v->a[14375] = sym_string;
	v->a[14376] = actions(3276);
	v->a[14377] = 2;
	v->a[14378] = aux_sym__simple_variable_name_token1;
	v->a[14379] = aux_sym__multiline_variable_name_token1;
	small_parse_table_719(v);
}

void	small_parse_table_719(t_small_parse_table_array *v)
{
	v->a[14380] = actions(1235);
	v->a[14381] = 3;
	v->a[14382] = sym_file_descriptor;
	v->a[14383] = sym_test_operator;
	v->a[14384] = sym__brace_start;
	v->a[14385] = actions(3272);
	v->a[14386] = 9;
	v->a[14387] = anon_sym_DASH;
	v->a[14388] = anon_sym_STAR;
	v->a[14389] = anon_sym_BANG;
	v->a[14390] = anon_sym_QMARK;
	v->a[14391] = anon_sym_DOLLAR;
	v->a[14392] = anon_sym_POUND;
	v->a[14393] = anon_sym_AT2;
	v->a[14394] = anon_sym_0;
	v->a[14395] = anon_sym__;
	v->a[14396] = actions(1227);
	v->a[14397] = 37;
	v->a[14398] = anon_sym_LPAREN_LPAREN;
	v->a[14399] = anon_sym_SEMI;
	small_parse_table_720(v);
}

/* EOF small_parse_table_143.c */
