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
	v->a[15700] = state(1320);
	v->a[15701] = 9;
	v->a[15702] = sym_arithmetic_expansion;
	v->a[15703] = sym_brace_expression;
	v->a[15704] = sym_string;
	v->a[15705] = sym_translated_string;
	v->a[15706] = sym_number;
	v->a[15707] = sym_simple_expansion;
	v->a[15708] = sym_expansion;
	v->a[15709] = sym_command_substitution;
	v->a[15710] = sym_process_substitution;
	v->a[15711] = actions(2494);
	v->a[15712] = 38;
	v->a[15713] = anon_sym_LPAREN_LPAREN;
	v->a[15714] = anon_sym_SEMI;
	v->a[15715] = anon_sym_PIPE_PIPE;
	v->a[15716] = anon_sym_AMP_AMP;
	v->a[15717] = anon_sym_PIPE;
	v->a[15718] = anon_sym_AMP;
	v->a[15719] = anon_sym_LT;
	small_parse_table_786(v);
}

void	small_parse_table_786(t_small_parse_table_array *v)
{
	v->a[15720] = anon_sym_GT;
	v->a[15721] = anon_sym_LT_LT;
	v->a[15722] = anon_sym_GT_GT;
	v->a[15723] = anon_sym_RPAREN;
	v->a[15724] = anon_sym_SEMI_SEMI;
	v->a[15725] = anon_sym_PIPE_AMP;
	v->a[15726] = anon_sym_AMP_GT;
	v->a[15727] = anon_sym_AMP_GT_GT;
	v->a[15728] = anon_sym_LT_AMP;
	v->a[15729] = anon_sym_GT_AMP;
	v->a[15730] = anon_sym_GT_PIPE;
	v->a[15731] = anon_sym_LT_AMP_DASH;
	v->a[15732] = anon_sym_GT_AMP_DASH;
	v->a[15733] = anon_sym_LT_LT_DASH;
	v->a[15734] = anon_sym_LT_LT_LT;
	v->a[15735] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15736] = anon_sym_DOLLAR_LBRACK;
	v->a[15737] = anon_sym_DOLLAR;
	v->a[15738] = sym__special_character;
	v->a[15739] = anon_sym_DQUOTE;
	small_parse_table_787(v);
}

void	small_parse_table_787(t_small_parse_table_array *v)
{
	v->a[15740] = sym_raw_string;
	v->a[15741] = sym_ansi_c_string;
	v->a[15742] = aux_sym_number_token1;
	v->a[15743] = aux_sym_number_token2;
	v->a[15744] = anon_sym_DOLLAR_LBRACE;
	v->a[15745] = anon_sym_DOLLAR_LPAREN;
	v->a[15746] = anon_sym_BQUOTE;
	v->a[15747] = anon_sym_DOLLAR_BQUOTE;
	v->a[15748] = anon_sym_LT_LPAREN;
	v->a[15749] = anon_sym_GT_LPAREN;
	v->a[15750] = sym_word;
	v->a[15751] = 22;
	v->a[15752] = actions(3);
	v->a[15753] = 1;
	v->a[15754] = sym_comment;
	v->a[15755] = actions(3433);
	v->a[15756] = 1;
	v->a[15757] = anon_sym_DOLLAR_LBRACK;
	v->a[15758] = actions(3435);
	v->a[15759] = 1;
	small_parse_table_788(v);
}

void	small_parse_table_788(t_small_parse_table_array *v)
{
	v->a[15760] = anon_sym_DOLLAR;
	v->a[15761] = actions(3437);
	v->a[15762] = 1;
	v->a[15763] = sym__special_character;
	v->a[15764] = actions(3439);
	v->a[15765] = 1;
	v->a[15766] = anon_sym_DQUOTE;
	v->a[15767] = actions(3441);
	v->a[15768] = 1;
	v->a[15769] = aux_sym_number_token1;
	v->a[15770] = actions(3443);
	v->a[15771] = 1;
	v->a[15772] = aux_sym_number_token2;
	v->a[15773] = actions(3445);
	v->a[15774] = 1;
	v->a[15775] = anon_sym_DOLLAR_LBRACE;
	v->a[15776] = actions(3447);
	v->a[15777] = 1;
	v->a[15778] = anon_sym_DOLLAR_LPAREN;
	v->a[15779] = actions(3449);
	small_parse_table_789(v);
}

void	small_parse_table_789(t_small_parse_table_array *v)
{
	v->a[15780] = 1;
	v->a[15781] = anon_sym_BQUOTE;
	v->a[15782] = actions(3451);
	v->a[15783] = 1;
	v->a[15784] = anon_sym_DOLLAR_BQUOTE;
	v->a[15785] = actions(3457);
	v->a[15786] = 1;
	v->a[15787] = sym_test_operator;
	v->a[15788] = actions(3459);
	v->a[15789] = 1;
	v->a[15790] = sym__brace_start;
	v->a[15791] = actions(3463);
	v->a[15792] = 1;
	v->a[15793] = aux_sym__simple_variable_name_token1;
	v->a[15794] = state(2190);
	v->a[15795] = 1;
	v->a[15796] = aux_sym__literal_repeat1;
	v->a[15797] = actions(3431);
	v->a[15798] = 2;
	v->a[15799] = anon_sym_LPAREN_LPAREN;
	small_parse_table_790(v);
}

/* EOF small_parse_table_157.c */
