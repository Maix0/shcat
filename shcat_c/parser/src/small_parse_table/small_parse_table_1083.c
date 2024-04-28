/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1083.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5415(t_small_parse_table_array *v)
{
	v->a[108300] = aux_sym_number_token1;
	v->a[108301] = aux_sym_number_token2;
	v->a[108302] = anon_sym_DOLLAR_LBRACE;
	v->a[108303] = anon_sym_DOLLAR_LPAREN;
	v->a[108304] = anon_sym_BQUOTE;
	v->a[108305] = anon_sym_DOLLAR_BQUOTE;
	v->a[108306] = anon_sym_LT_LPAREN;
	v->a[108307] = anon_sym_GT_LPAREN;
	v->a[108308] = sym_word;
	v->a[108309] = 5;
	v->a[108310] = actions(3);
	v->a[108311] = 1;
	v->a[108312] = sym_comment;
	v->a[108313] = actions(4261);
	v->a[108314] = 3;
	v->a[108315] = sym_variable_name;
	v->a[108316] = sym_test_operator;
	v->a[108317] = sym__brace_start;
	v->a[108318] = actions(5932);
	v->a[108319] = 3;
	small_parse_table_5416(v);
}

void	small_parse_table_5416(t_small_parse_table_array *v)
{
	v->a[108320] = sym_file_descriptor;
	v->a[108321] = ts_builtin_sym_end;
	v->a[108322] = aux_sym_heredoc_redirect_token1;
	v->a[108323] = actions(4247);
	v->a[108324] = 18;
	v->a[108325] = anon_sym_LPAREN_LPAREN;
	v->a[108326] = anon_sym_LT_LT_LT;
	v->a[108327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108328] = anon_sym_DOLLAR_LBRACK;
	v->a[108329] = anon_sym_DOLLAR;
	v->a[108330] = sym__special_character;
	v->a[108331] = anon_sym_DQUOTE;
	v->a[108332] = sym_raw_string;
	v->a[108333] = sym_ansi_c_string;
	v->a[108334] = aux_sym_number_token1;
	v->a[108335] = aux_sym_number_token2;
	v->a[108336] = anon_sym_DOLLAR_LBRACE;
	v->a[108337] = anon_sym_DOLLAR_LPAREN;
	v->a[108338] = anon_sym_BQUOTE;
	v->a[108339] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5417(v);
}

void	small_parse_table_5417(t_small_parse_table_array *v)
{
	v->a[108340] = anon_sym_LT_LPAREN;
	v->a[108341] = anon_sym_GT_LPAREN;
	v->a[108342] = sym_word;
	v->a[108343] = actions(5930);
	v->a[108344] = 19;
	v->a[108345] = anon_sym_SEMI;
	v->a[108346] = anon_sym_PIPE_PIPE;
	v->a[108347] = anon_sym_AMP_AMP;
	v->a[108348] = anon_sym_PIPE;
	v->a[108349] = anon_sym_AMP;
	v->a[108350] = anon_sym_LT;
	v->a[108351] = anon_sym_GT;
	v->a[108352] = anon_sym_LT_LT;
	v->a[108353] = anon_sym_GT_GT;
	v->a[108354] = anon_sym_SEMI_SEMI;
	v->a[108355] = anon_sym_PIPE_AMP;
	v->a[108356] = anon_sym_AMP_GT;
	v->a[108357] = anon_sym_AMP_GT_GT;
	v->a[108358] = anon_sym_LT_AMP;
	v->a[108359] = anon_sym_GT_AMP;
	small_parse_table_5418(v);
}

void	small_parse_table_5418(t_small_parse_table_array *v)
{
	v->a[108360] = anon_sym_GT_PIPE;
	v->a[108361] = anon_sym_LT_AMP_DASH;
	v->a[108362] = anon_sym_GT_AMP_DASH;
	v->a[108363] = anon_sym_LT_LT_DASH;
	v->a[108364] = 6;
	v->a[108365] = actions(71);
	v->a[108366] = 1;
	v->a[108367] = sym_comment;
	v->a[108368] = state(3541);
	v->a[108369] = 1;
	v->a[108370] = aux_sym__literal_repeat1;
	v->a[108371] = state(3573);
	v->a[108372] = 1;
	v->a[108373] = sym_concatenation;
	v->a[108374] = state(3481);
	v->a[108375] = 9;
	v->a[108376] = sym_arithmetic_expansion;
	v->a[108377] = sym_brace_expression;
	v->a[108378] = sym_string;
	v->a[108379] = sym_translated_string;
	small_parse_table_5419(v);
}

void	small_parse_table_5419(t_small_parse_table_array *v)
{
	v->a[108380] = sym_number;
	v->a[108381] = sym_simple_expansion;
	v->a[108382] = sym_expansion;
	v->a[108383] = sym_command_substitution;
	v->a[108384] = sym_process_substitution;
	v->a[108385] = actions(2498);
	v->a[108386] = 10;
	v->a[108387] = anon_sym_LT;
	v->a[108388] = anon_sym_GT;
	v->a[108389] = anon_sym_AMP_GT;
	v->a[108390] = anon_sym_LT_AMP;
	v->a[108391] = anon_sym_GT_AMP;
	v->a[108392] = anon_sym_DOLLAR;
	v->a[108393] = aux_sym_number_token1;
	v->a[108394] = aux_sym_number_token2;
	v->a[108395] = anon_sym_DOLLAR_LPAREN;
	v->a[108396] = sym_word;
	v->a[108397] = actions(2500);
	v->a[108398] = 22;
	v->a[108399] = sym_file_descriptor;
	small_parse_table_5420(v);
}

/* EOF small_parse_table_1083.c */
