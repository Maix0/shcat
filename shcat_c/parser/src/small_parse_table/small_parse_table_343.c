/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_343.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1715(t_small_parse_table_array *v)
{
	v->a[34300] = anon_sym_LT_AMP_DASH;
	v->a[34301] = anon_sym_GT_AMP_DASH;
	v->a[34302] = state(3127);
	v->a[34303] = 2;
	v->a[34304] = sym_variable_assignment;
	v->a[34305] = aux_sym_command_repeat1;
	v->a[34306] = state(3581);
	v->a[34307] = 2;
	v->a[34308] = sym_file_redirect;
	v->a[34309] = sym_herestring_redirect;
	v->a[34310] = actions(1390);
	v->a[34311] = 3;
	v->a[34312] = anon_sym_GT_GT;
	v->a[34313] = anon_sym_AMP_GT_GT;
	v->a[34314] = anon_sym_GT_PIPE;
	v->a[34315] = actions(1388);
	v->a[34316] = 5;
	v->a[34317] = anon_sym_LT;
	v->a[34318] = anon_sym_GT;
	v->a[34319] = anon_sym_AMP_GT;
	small_parse_table_1716(v);
}

void	small_parse_table_1716(t_small_parse_table_array *v)
{
	v->a[34320] = anon_sym_LT_AMP;
	v->a[34321] = anon_sym_GT_AMP;
	v->a[34322] = state(815);
	v->a[34323] = 9;
	v->a[34324] = sym_arithmetic_expansion;
	v->a[34325] = sym_brace_expression;
	v->a[34326] = sym_string;
	v->a[34327] = sym_translated_string;
	v->a[34328] = sym_number;
	v->a[34329] = sym_simple_expansion;
	v->a[34330] = sym_expansion;
	v->a[34331] = sym_command_substitution;
	v->a[34332] = sym_process_substitution;
	v->a[34333] = 5;
	v->a[34334] = actions(3);
	v->a[34335] = 1;
	v->a[34336] = sym_comment;
	v->a[34337] = actions(4707);
	v->a[34338] = 1;
	v->a[34339] = sym__special_character;
	small_parse_table_1717(v);
}

void	small_parse_table_1717(t_small_parse_table_array *v)
{
	v->a[34340] = state(952);
	v->a[34341] = 1;
	v->a[34342] = aux_sym__literal_repeat1;
	v->a[34343] = actions(278);
	v->a[34344] = 5;
	v->a[34345] = sym_file_descriptor;
	v->a[34346] = sym_test_operator;
	v->a[34347] = sym__bare_dollar;
	v->a[34348] = sym__brace_start;
	v->a[34349] = aux_sym_heredoc_redirect_token1;
	v->a[34350] = actions(241);
	v->a[34351] = 42;
	v->a[34352] = anon_sym_LPAREN_LPAREN;
	v->a[34353] = anon_sym_SEMI;
	v->a[34354] = anon_sym_PIPE_PIPE;
	v->a[34355] = anon_sym_AMP_AMP;
	v->a[34356] = anon_sym_PIPE;
	v->a[34357] = anon_sym_AMP;
	v->a[34358] = anon_sym_EQ_EQ;
	v->a[34359] = anon_sym_LT;
	small_parse_table_1718(v);
}

void	small_parse_table_1718(t_small_parse_table_array *v)
{
	v->a[34360] = anon_sym_GT;
	v->a[34361] = anon_sym_LT_LT;
	v->a[34362] = anon_sym_GT_GT;
	v->a[34363] = anon_sym_LPAREN;
	v->a[34364] = anon_sym_esac;
	v->a[34365] = anon_sym_SEMI_SEMI;
	v->a[34366] = anon_sym_SEMI_AMP;
	v->a[34367] = anon_sym_SEMI_SEMI_AMP;
	v->a[34368] = anon_sym_PIPE_AMP;
	v->a[34369] = anon_sym_EQ_TILDE;
	v->a[34370] = anon_sym_AMP_GT;
	v->a[34371] = anon_sym_AMP_GT_GT;
	v->a[34372] = anon_sym_LT_AMP;
	v->a[34373] = anon_sym_GT_AMP;
	v->a[34374] = anon_sym_GT_PIPE;
	v->a[34375] = anon_sym_LT_AMP_DASH;
	v->a[34376] = anon_sym_GT_AMP_DASH;
	v->a[34377] = anon_sym_LT_LT_DASH;
	v->a[34378] = anon_sym_LT_LT_LT;
	v->a[34379] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1719(v);
}

void	small_parse_table_1719(t_small_parse_table_array *v)
{
	v->a[34380] = anon_sym_DOLLAR_LBRACK;
	v->a[34381] = anon_sym_DOLLAR;
	v->a[34382] = anon_sym_DQUOTE;
	v->a[34383] = sym_raw_string;
	v->a[34384] = sym_ansi_c_string;
	v->a[34385] = aux_sym_number_token1;
	v->a[34386] = aux_sym_number_token2;
	v->a[34387] = anon_sym_DOLLAR_LBRACE;
	v->a[34388] = anon_sym_DOLLAR_LPAREN;
	v->a[34389] = anon_sym_BQUOTE;
	v->a[34390] = anon_sym_DOLLAR_BQUOTE;
	v->a[34391] = anon_sym_LT_LPAREN;
	v->a[34392] = anon_sym_GT_LPAREN;
	v->a[34393] = sym_word;
	v->a[34394] = 3;
	v->a[34395] = actions(3);
	v->a[34396] = 1;
	v->a[34397] = sym_comment;
	v->a[34398] = actions(1310);
	v->a[34399] = 6;
	small_parse_table_1720(v);
}

/* EOF small_parse_table_343.c */
