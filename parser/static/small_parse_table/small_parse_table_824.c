/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_824.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4120(t_small_parse_table_array *v)
{
	v->a[82400] = actions(1193);
	v->a[82401] = 2;
	v->a[82402] = anon_sym_DASH2;
	v->a[82403] = anon_sym_PLUS2;
	v->a[82404] = actions(1199);
	v->a[82405] = 2;
	v->a[82406] = sym_raw_string;
	v->a[82407] = sym_ansi_c_string;
	v->a[82408] = state(2594);
	v->a[82409] = 6;
	v->a[82410] = sym_binary_expression;
	v->a[82411] = sym_ternary_expression;
	v->a[82412] = sym_unary_expression;
	v->a[82413] = sym_postfix_expression;
	v->a[82414] = sym_parenthesized_expression;
	v->a[82415] = sym_concatenation;
	v->a[82416] = state(2503);
	v->a[82417] = 9;
	v->a[82418] = sym_arithmetic_expansion;
	v->a[82419] = sym_brace_expression;
	small_parse_table_4121(v);
}

void	small_parse_table_4121(t_small_parse_table_array *v)
{
	v->a[82420] = sym_string;
	v->a[82421] = sym_translated_string;
	v->a[82422] = sym_number;
	v->a[82423] = sym_simple_expansion;
	v->a[82424] = sym_expansion;
	v->a[82425] = sym_command_substitution;
	v->a[82426] = sym_process_substitution;
	v->a[82427] = 3;
	v->a[82428] = actions(3);
	v->a[82429] = 1;
	v->a[82430] = sym_comment;
	v->a[82431] = actions(5772);
	v->a[82432] = 5;
	v->a[82433] = sym_file_descriptor;
	v->a[82434] = sym_variable_name;
	v->a[82435] = sym_test_operator;
	v->a[82436] = sym__brace_start;
	v->a[82437] = aux_sym_heredoc_redirect_token1;
	v->a[82438] = actions(5770);
	v->a[82439] = 39;
	small_parse_table_4122(v);
}

void	small_parse_table_4122(t_small_parse_table_array *v)
{
	v->a[82440] = anon_sym_LPAREN_LPAREN;
	v->a[82441] = anon_sym_SEMI;
	v->a[82442] = anon_sym_PIPE_PIPE;
	v->a[82443] = anon_sym_AMP_AMP;
	v->a[82444] = anon_sym_PIPE;
	v->a[82445] = anon_sym_AMP;
	v->a[82446] = anon_sym_LT;
	v->a[82447] = anon_sym_GT;
	v->a[82448] = anon_sym_LT_LT;
	v->a[82449] = anon_sym_GT_GT;
	v->a[82450] = anon_sym_SEMI_SEMI;
	v->a[82451] = anon_sym_SEMI_AMP;
	v->a[82452] = anon_sym_SEMI_SEMI_AMP;
	v->a[82453] = anon_sym_PIPE_AMP;
	v->a[82454] = anon_sym_AMP_GT;
	v->a[82455] = anon_sym_AMP_GT_GT;
	v->a[82456] = anon_sym_LT_AMP;
	v->a[82457] = anon_sym_GT_AMP;
	v->a[82458] = anon_sym_GT_PIPE;
	v->a[82459] = anon_sym_LT_AMP_DASH;
	small_parse_table_4123(v);
}

void	small_parse_table_4123(t_small_parse_table_array *v)
{
	v->a[82460] = anon_sym_GT_AMP_DASH;
	v->a[82461] = anon_sym_LT_LT_DASH;
	v->a[82462] = anon_sym_LT_LT_LT;
	v->a[82463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82464] = anon_sym_DOLLAR_LBRACK;
	v->a[82465] = anon_sym_DOLLAR;
	v->a[82466] = sym__special_character;
	v->a[82467] = anon_sym_DQUOTE;
	v->a[82468] = sym_raw_string;
	v->a[82469] = sym_ansi_c_string;
	v->a[82470] = aux_sym_number_token1;
	v->a[82471] = aux_sym_number_token2;
	v->a[82472] = anon_sym_DOLLAR_LBRACE;
	v->a[82473] = anon_sym_DOLLAR_LPAREN;
	v->a[82474] = anon_sym_BQUOTE;
	v->a[82475] = anon_sym_DOLLAR_BQUOTE;
	v->a[82476] = anon_sym_LT_LPAREN;
	v->a[82477] = anon_sym_GT_LPAREN;
	v->a[82478] = sym_word;
	v->a[82479] = 3;
	small_parse_table_4124(v);
}

void	small_parse_table_4124(t_small_parse_table_array *v)
{
	v->a[82480] = actions(3);
	v->a[82481] = 1;
	v->a[82482] = sym_comment;
	v->a[82483] = actions(1298);
	v->a[82484] = 5;
	v->a[82485] = sym_file_descriptor;
	v->a[82486] = sym__concat;
	v->a[82487] = sym_test_operator;
	v->a[82488] = sym__brace_start;
	v->a[82489] = aux_sym_heredoc_redirect_token1;
	v->a[82490] = actions(1296);
	v->a[82491] = 39;
	v->a[82492] = anon_sym_LPAREN_LPAREN;
	v->a[82493] = anon_sym_SEMI;
	v->a[82494] = anon_sym_PIPE_PIPE;
	v->a[82495] = anon_sym_AMP_AMP;
	v->a[82496] = anon_sym_PIPE;
	v->a[82497] = anon_sym_AMP;
	v->a[82498] = anon_sym_LT;
	v->a[82499] = anon_sym_GT;
	small_parse_table_4125(v);
}

/* EOF small_parse_table_824.c */
