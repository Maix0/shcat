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
	v->a[105300] = anon_sym_GT;
	v->a[105301] = anon_sym_GT_GT;
	v->a[105302] = anon_sym_AMP_GT;
	v->a[105303] = anon_sym_AMP_GT_GT;
	v->a[105304] = anon_sym_LT_AMP;
	v->a[105305] = anon_sym_GT_AMP;
	v->a[105306] = anon_sym_GT_PIPE;
	v->a[105307] = anon_sym_LT_AMP_DASH;
	v->a[105308] = anon_sym_GT_AMP_DASH;
	v->a[105309] = anon_sym_LT_LT;
	v->a[105310] = anon_sym_LT_LT_DASH;
	v->a[105311] = anon_sym_AMP;
	v->a[105312] = anon_sym_SEMI;
	v->a[105313] = 3;
	v->a[105314] = actions(3);
	v->a[105315] = 1;
	v->a[105316] = sym_comment;
	v->a[105317] = actions(6069);
	v->a[105318] = 2;
	v->a[105319] = sym_file_descriptor;
	small_parse_table_5266(v);
}

void	small_parse_table_5266(t_small_parse_table_array *v)
{
	v->a[105320] = aux_sym_heredoc_redirect_token1;
	v->a[105321] = actions(6067);
	v->a[105322] = 22;
	v->a[105323] = anon_sym_esac;
	v->a[105324] = anon_sym_PIPE;
	v->a[105325] = anon_sym_SEMI_SEMI;
	v->a[105326] = anon_sym_SEMI_AMP;
	v->a[105327] = anon_sym_SEMI_SEMI_AMP;
	v->a[105328] = anon_sym_PIPE_AMP;
	v->a[105329] = anon_sym_AMP_AMP;
	v->a[105330] = anon_sym_PIPE_PIPE;
	v->a[105331] = anon_sym_LT;
	v->a[105332] = anon_sym_GT;
	v->a[105333] = anon_sym_GT_GT;
	v->a[105334] = anon_sym_AMP_GT;
	v->a[105335] = anon_sym_AMP_GT_GT;
	v->a[105336] = anon_sym_LT_AMP;
	v->a[105337] = anon_sym_GT_AMP;
	v->a[105338] = anon_sym_GT_PIPE;
	v->a[105339] = anon_sym_LT_AMP_DASH;
	small_parse_table_5267(v);
}

void	small_parse_table_5267(t_small_parse_table_array *v)
{
	v->a[105340] = anon_sym_GT_AMP_DASH;
	v->a[105341] = anon_sym_LT_LT;
	v->a[105342] = anon_sym_LT_LT_DASH;
	v->a[105343] = anon_sym_AMP;
	v->a[105344] = anon_sym_SEMI;
	v->a[105345] = 17;
	v->a[105346] = actions(57);
	v->a[105347] = 1;
	v->a[105348] = sym_comment;
	v->a[105349] = actions(5814);
	v->a[105350] = 1;
	v->a[105351] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105352] = actions(5816);
	v->a[105353] = 1;
	v->a[105354] = anon_sym_DOLLAR;
	v->a[105355] = actions(5818);
	v->a[105356] = 1;
	v->a[105357] = sym__special_character;
	v->a[105358] = actions(5820);
	v->a[105359] = 1;
	small_parse_table_5268(v);
}

void	small_parse_table_5268(t_small_parse_table_array *v)
{
	v->a[105360] = anon_sym_DQUOTE;
	v->a[105361] = actions(5824);
	v->a[105362] = 1;
	v->a[105363] = aux_sym_number_token1;
	v->a[105364] = actions(5826);
	v->a[105365] = 1;
	v->a[105366] = aux_sym_number_token2;
	v->a[105367] = actions(5828);
	v->a[105368] = 1;
	v->a[105369] = anon_sym_DOLLAR_LBRACE;
	v->a[105370] = actions(5830);
	v->a[105371] = 1;
	v->a[105372] = anon_sym_DOLLAR_LPAREN;
	v->a[105373] = actions(5832);
	v->a[105374] = 1;
	v->a[105375] = anon_sym_BQUOTE;
	v->a[105376] = actions(5834);
	v->a[105377] = 1;
	v->a[105378] = anon_sym_DOLLAR_BQUOTE;
	v->a[105379] = actions(5840);
	small_parse_table_5269(v);
}

void	small_parse_table_5269(t_small_parse_table_array *v)
{
	v->a[105380] = 1;
	v->a[105381] = sym__brace_start;
	v->a[105382] = actions(6071);
	v->a[105383] = 1;
	v->a[105384] = sym_word;
	v->a[105385] = state(1662);
	v->a[105386] = 1;
	v->a[105387] = aux_sym__literal_repeat1;
	v->a[105388] = actions(6073);
	v->a[105389] = 2;
	v->a[105390] = sym_test_operator;
	v->a[105391] = sym_raw_string;
	v->a[105392] = state(534);
	v->a[105393] = 2;
	v->a[105394] = sym_concatenation;
	v->a[105395] = aux_sym_for_statement_repeat1;
	v->a[105396] = state(1461);
	v->a[105397] = 7;
	v->a[105398] = sym_arithmetic_expansion;
	v->a[105399] = sym_brace_expression;
	small_parse_table_5270(v);
}

/* EOF small_parse_table_1053.c */
