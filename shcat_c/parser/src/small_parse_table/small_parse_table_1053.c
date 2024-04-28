/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1053.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5265(t_small_parse_table_array *v)
{
	v->a[105300] = 1;
	v->a[105301] = sym_test_operator;
	v->a[105302] = actions(284);
	v->a[105303] = 1;
	v->a[105304] = sym__brace_start;
	v->a[105305] = actions(1075);
	v->a[105306] = 1;
	v->a[105307] = anon_sym_DOLLAR_LBRACK;
	v->a[105308] = actions(1079);
	v->a[105309] = 1;
	v->a[105310] = sym__special_character;
	v->a[105311] = actions(1081);
	v->a[105312] = 1;
	v->a[105313] = anon_sym_DQUOTE;
	v->a[105314] = actions(1085);
	v->a[105315] = 1;
	v->a[105316] = anon_sym_DOLLAR_LBRACE;
	v->a[105317] = actions(1087);
	v->a[105318] = 1;
	v->a[105319] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5266(v);
}

void	small_parse_table_5266(t_small_parse_table_array *v)
{
	v->a[105320] = actions(3598);
	v->a[105321] = 1;
	v->a[105322] = anon_sym_BQUOTE;
	v->a[105323] = state(2690);
	v->a[105324] = 1;
	v->a[105325] = aux_sym__literal_repeat1;
	v->a[105326] = state(3094);
	v->a[105327] = 1;
	v->a[105328] = sym__expression;
	v->a[105329] = actions(103);
	v->a[105330] = 2;
	v->a[105331] = anon_sym_PLUS_PLUS2;
	v->a[105332] = anon_sym_DASH_DASH2;
	v->a[105333] = actions(105);
	v->a[105334] = 2;
	v->a[105335] = anon_sym_DASH2;
	v->a[105336] = anon_sym_PLUS2;
	v->a[105337] = actions(1073);
	v->a[105338] = 2;
	v->a[105339] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5267(v);
}

void	small_parse_table_5267(t_small_parse_table_array *v)
{
	v->a[105340] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105341] = actions(1083);
	v->a[105342] = 2;
	v->a[105343] = sym_raw_string;
	v->a[105344] = sym_ansi_c_string;
	v->a[105345] = actions(1089);
	v->a[105346] = 2;
	v->a[105347] = anon_sym_LT_LPAREN;
	v->a[105348] = anon_sym_GT_LPAREN;
	v->a[105349] = state(3053);
	v->a[105350] = 6;
	v->a[105351] = sym_binary_expression;
	v->a[105352] = sym_ternary_expression;
	v->a[105353] = sym_unary_expression;
	v->a[105354] = sym_postfix_expression;
	v->a[105355] = sym_parenthesized_expression;
	v->a[105356] = sym_concatenation;
	v->a[105357] = state(2500);
	v->a[105358] = 9;
	v->a[105359] = sym_arithmetic_expansion;
	small_parse_table_5268(v);
}

void	small_parse_table_5268(t_small_parse_table_array *v)
{
	v->a[105360] = sym_brace_expression;
	v->a[105361] = sym_string;
	v->a[105362] = sym_translated_string;
	v->a[105363] = sym_number;
	v->a[105364] = sym_simple_expansion;
	v->a[105365] = sym_expansion;
	v->a[105366] = sym_command_substitution;
	v->a[105367] = sym_process_substitution;
	v->a[105368] = 3;
	v->a[105369] = actions(3);
	v->a[105370] = 1;
	v->a[105371] = sym_comment;
	v->a[105372] = actions(1338);
	v->a[105373] = 5;
	v->a[105374] = sym_file_descriptor;
	v->a[105375] = sym__concat;
	v->a[105376] = sym_test_operator;
	v->a[105377] = sym__brace_start;
	v->a[105378] = aux_sym_heredoc_redirect_token1;
	v->a[105379] = actions(1336);
	small_parse_table_5269(v);
}

void	small_parse_table_5269(t_small_parse_table_array *v)
{
	v->a[105380] = 38;
	v->a[105381] = anon_sym_LPAREN_LPAREN;
	v->a[105382] = anon_sym_SEMI;
	v->a[105383] = anon_sym_PIPE_PIPE;
	v->a[105384] = anon_sym_AMP_AMP;
	v->a[105385] = anon_sym_PIPE;
	v->a[105386] = anon_sym_AMP;
	v->a[105387] = anon_sym_LT;
	v->a[105388] = anon_sym_GT;
	v->a[105389] = anon_sym_LT_LT;
	v->a[105390] = anon_sym_GT_GT;
	v->a[105391] = anon_sym_RPAREN;
	v->a[105392] = anon_sym_SEMI_SEMI;
	v->a[105393] = anon_sym_PIPE_AMP;
	v->a[105394] = anon_sym_AMP_GT;
	v->a[105395] = anon_sym_AMP_GT_GT;
	v->a[105396] = anon_sym_LT_AMP;
	v->a[105397] = anon_sym_GT_AMP;
	v->a[105398] = anon_sym_GT_PIPE;
	v->a[105399] = anon_sym_LT_AMP_DASH;
	small_parse_table_5270(v);
}

/* EOF small_parse_table_1053.c */
