/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2773.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13865(t_small_parse_table_array *v)
{
	v->a[277300] = anon_sym_LT_LT_LT;
	v->a[277301] = state(5679);
	v->a[277302] = 1;
	v->a[277303] = sym_herestring_redirect;
	v->a[277304] = state(5436);
	v->a[277305] = 3;
	v->a[277306] = sym_file_redirect;
	v->a[277307] = sym_heredoc_redirect;
	v->a[277308] = aux_sym_redirected_statement_repeat1;
	v->a[277309] = actions(4270);
	v->a[277310] = 6;
	v->a[277311] = anon_sym_LT;
	v->a[277312] = anon_sym_GT;
	v->a[277313] = anon_sym_LT_LT;
	v->a[277314] = anon_sym_AMP_GT;
	v->a[277315] = anon_sym_LT_AMP;
	v->a[277316] = anon_sym_GT_AMP;
	v->a[277317] = actions(4272);
	v->a[277318] = 9;
	v->a[277319] = sym_file_descriptor;
	small_parse_table_13866(v);
}

void	small_parse_table_13866(t_small_parse_table_array *v)
{
	v->a[277320] = anon_sym_PIPE_PIPE;
	v->a[277321] = anon_sym_AMP_AMP;
	v->a[277322] = anon_sym_GT_GT;
	v->a[277323] = anon_sym_AMP_GT_GT;
	v->a[277324] = anon_sym_GT_PIPE;
	v->a[277325] = anon_sym_LT_AMP_DASH;
	v->a[277326] = anon_sym_GT_AMP_DASH;
	v->a[277327] = anon_sym_LT_LT_DASH;
	v->a[277328] = 16;
	v->a[277329] = actions(71);
	v->a[277330] = 1;
	v->a[277331] = sym_comment;
	v->a[277332] = actions(12167);
	v->a[277333] = 1;
	v->a[277334] = anon_sym_LPAREN;
	v->a[277335] = actions(12171);
	v->a[277336] = 1;
	v->a[277337] = anon_sym_DOLLAR;
	v->a[277338] = actions(12173);
	v->a[277339] = 1;
	small_parse_table_13867(v);
}

void	small_parse_table_13867(t_small_parse_table_array *v)
{
	v->a[277340] = anon_sym_DQUOTE;
	v->a[277341] = actions(12175);
	v->a[277342] = 1;
	v->a[277343] = aux_sym_number_token1;
	v->a[277344] = actions(12177);
	v->a[277345] = 1;
	v->a[277346] = aux_sym_number_token2;
	v->a[277347] = actions(12179);
	v->a[277348] = 1;
	v->a[277349] = anon_sym_DOLLAR_LBRACE;
	v->a[277350] = actions(12181);
	v->a[277351] = 1;
	v->a[277352] = anon_sym_DOLLAR_LPAREN;
	v->a[277353] = actions(12183);
	v->a[277354] = 1;
	v->a[277355] = anon_sym_BQUOTE;
	v->a[277356] = actions(12185);
	v->a[277357] = 1;
	v->a[277358] = anon_sym_DOLLAR_BQUOTE;
	v->a[277359] = actions(12475);
	small_parse_table_13868(v);
}

void	small_parse_table_13868(t_small_parse_table_array *v)
{
	v->a[277360] = 1;
	v->a[277361] = aux_sym__c_word_token1;
	v->a[277362] = state(3442);
	v->a[277363] = 1;
	v->a[277364] = sym__c_unary_expression;
	v->a[277365] = state(3443);
	v->a[277366] = 1;
	v->a[277367] = sym__c_binary_expression;
	v->a[277368] = state(3444);
	v->a[277369] = 1;
	v->a[277370] = sym__c_postfix_expression;
	v->a[277371] = actions(12165);
	v->a[277372] = 2;
	v->a[277373] = anon_sym_PLUS_PLUS;
	v->a[277374] = anon_sym_DASH_DASH;
	v->a[277375] = state(3405);
	v->a[277376] = 7;
	v->a[277377] = sym__c_expression_not_assignment;
	v->a[277378] = sym__c_parenthesized_expression;
	v->a[277379] = sym_string;
	small_parse_table_13869(v);
}

void	small_parse_table_13869(t_small_parse_table_array *v)
{
	v->a[277380] = sym_number;
	v->a[277381] = sym_simple_expansion;
	v->a[277382] = sym_expansion;
	v->a[277383] = sym_command_substitution;
	v->a[277384] = 16;
	v->a[277385] = actions(71);
	v->a[277386] = 1;
	v->a[277387] = sym_comment;
	v->a[277388] = actions(12167);
	v->a[277389] = 1;
	v->a[277390] = anon_sym_LPAREN;
	v->a[277391] = actions(12171);
	v->a[277392] = 1;
	v->a[277393] = anon_sym_DOLLAR;
	v->a[277394] = actions(12173);
	v->a[277395] = 1;
	v->a[277396] = anon_sym_DQUOTE;
	v->a[277397] = actions(12175);
	v->a[277398] = 1;
	v->a[277399] = aux_sym_number_token1;
	small_parse_table_13870(v);
}

/* EOF small_parse_table_2773.c */
