/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_157.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_785(t_small_parse_table_array *v)
{
	v->a[15700] = state(3584);
	v->a[15701] = 1;
	v->a[15702] = sym__heredoc_pipeline;
	v->a[15703] = state(3585);
	v->a[15704] = 1;
	v->a[15705] = sym__heredoc_expression;
	v->a[15706] = actions(2446);
	v->a[15707] = 2;
	v->a[15708] = sym_raw_string;
	v->a[15709] = sym_word;
	v->a[15710] = actions(2448);
	v->a[15711] = 2;
	v->a[15712] = anon_sym_PIPE;
	v->a[15713] = anon_sym_PIPE_AMP;
	v->a[15714] = actions(2450);
	v->a[15715] = 2;
	v->a[15716] = anon_sym_AMP_AMP;
	v->a[15717] = anon_sym_PIPE_PIPE;
	v->a[15718] = actions(2454);
	v->a[15719] = 2;
	small_parse_table_786(v);
}

void	small_parse_table_786(t_small_parse_table_array *v)
{
	v->a[15720] = anon_sym_LT_AMP_DASH;
	v->a[15721] = anon_sym_GT_AMP_DASH;
	v->a[15722] = state(2741);
	v->a[15723] = 2;
	v->a[15724] = sym_file_redirect;
	v->a[15725] = aux_sym_redirected_statement_repeat2;
	v->a[15726] = state(2716);
	v->a[15727] = 7;
	v->a[15728] = sym_arithmetic_expansion;
	v->a[15729] = sym_brace_expression;
	v->a[15730] = sym_string;
	v->a[15731] = sym_number;
	v->a[15732] = sym_simple_expansion;
	v->a[15733] = sym_expansion;
	v->a[15734] = sym_command_substitution;
	v->a[15735] = actions(2452);
	v->a[15736] = 8;
	v->a[15737] = anon_sym_LT;
	v->a[15738] = anon_sym_GT;
	v->a[15739] = anon_sym_GT_GT;
	small_parse_table_787(v);
}

void	small_parse_table_787(t_small_parse_table_array *v)
{
	v->a[15740] = anon_sym_AMP_GT;
	v->a[15741] = anon_sym_AMP_GT_GT;
	v->a[15742] = anon_sym_LT_AMP;
	v->a[15743] = anon_sym_GT_AMP;
	v->a[15744] = anon_sym_GT_PIPE;
	v->a[15745] = 6;
	v->a[15746] = actions(3);
	v->a[15747] = 1;
	v->a[15748] = sym_comment;
	v->a[15749] = actions(2537);
	v->a[15750] = 1;
	v->a[15751] = sym_variable_name;
	v->a[15752] = actions(2535);
	v->a[15753] = 2;
	v->a[15754] = aux_sym__simple_variable_name_token1;
	v->a[15755] = aux_sym__multiline_variable_name_token1;
	v->a[15756] = actions(828);
	v->a[15757] = 4;
	v->a[15758] = sym_file_descriptor;
	v->a[15759] = sym_test_operator;
	small_parse_table_788(v);
}

void	small_parse_table_788(t_small_parse_table_array *v)
{
	v->a[15760] = sym__bare_dollar;
	v->a[15761] = sym__brace_start;
	v->a[15762] = actions(2533);
	v->a[15763] = 9;
	v->a[15764] = anon_sym_BANG;
	v->a[15765] = anon_sym_DASH;
	v->a[15766] = anon_sym_STAR;
	v->a[15767] = anon_sym_QMARK;
	v->a[15768] = anon_sym_DOLLAR;
	v->a[15769] = anon_sym_POUND;
	v->a[15770] = anon_sym_AT;
	v->a[15771] = anon_sym_0;
	v->a[15772] = anon_sym__;
	v->a[15773] = actions(826);
	v->a[15774] = 28;
	v->a[15775] = anon_sym_LPAREN;
	v->a[15776] = anon_sym_PIPE;
	v->a[15777] = anon_sym_PIPE_AMP;
	v->a[15778] = anon_sym_AMP_AMP;
	v->a[15779] = anon_sym_PIPE_PIPE;
	small_parse_table_789(v);
}

void	small_parse_table_789(t_small_parse_table_array *v)
{
	v->a[15780] = anon_sym_LT;
	v->a[15781] = anon_sym_GT;
	v->a[15782] = anon_sym_GT_GT;
	v->a[15783] = anon_sym_AMP_GT;
	v->a[15784] = anon_sym_AMP_GT_GT;
	v->a[15785] = anon_sym_LT_AMP;
	v->a[15786] = anon_sym_GT_AMP;
	v->a[15787] = anon_sym_GT_PIPE;
	v->a[15788] = anon_sym_LT_AMP_DASH;
	v->a[15789] = anon_sym_GT_AMP_DASH;
	v->a[15790] = anon_sym_LT_LT;
	v->a[15791] = anon_sym_LT_LT_DASH;
	v->a[15792] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15793] = sym__special_character;
	v->a[15794] = anon_sym_DQUOTE;
	v->a[15795] = sym_raw_string;
	v->a[15796] = aux_sym_number_token1;
	v->a[15797] = aux_sym_number_token2;
	v->a[15798] = anon_sym_DOLLAR_LBRACE;
	v->a[15799] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_790(v);
}

/* EOF small_parse_table_157.c */
