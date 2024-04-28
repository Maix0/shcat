/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1096.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5480(t_small_parse_table_array *v)
{
	v->a[109600] = sym_binary_expression;
	v->a[109601] = sym_ternary_expression;
	v->a[109602] = sym_unary_expression;
	v->a[109603] = sym_postfix_expression;
	v->a[109604] = sym_parenthesized_expression;
	v->a[109605] = sym_concatenation;
	v->a[109606] = state(2500);
	v->a[109607] = 9;
	v->a[109608] = sym_arithmetic_expansion;
	v->a[109609] = sym_brace_expression;
	v->a[109610] = sym_string;
	v->a[109611] = sym_translated_string;
	v->a[109612] = sym_number;
	v->a[109613] = sym_simple_expansion;
	v->a[109614] = sym_expansion;
	v->a[109615] = sym_command_substitution;
	v->a[109616] = sym_process_substitution;
	v->a[109617] = 8;
	v->a[109618] = actions(3);
	v->a[109619] = 1;
	small_parse_table_5481(v);
}

void	small_parse_table_5481(t_small_parse_table_array *v)
{
	v->a[109620] = sym_comment;
	v->a[109621] = actions(5826);
	v->a[109622] = 1;
	v->a[109623] = aux_sym_heredoc_redirect_token1;
	v->a[109624] = actions(5828);
	v->a[109625] = 1;
	v->a[109626] = sym_file_descriptor;
	v->a[109627] = actions(6239);
	v->a[109628] = 1;
	v->a[109629] = anon_sym_RPAREN;
	v->a[109630] = actions(5831);
	v->a[109631] = 3;
	v->a[109632] = sym_variable_name;
	v->a[109633] = sym_test_operator;
	v->a[109634] = sym__brace_start;
	v->a[109635] = actions(5821);
	v->a[109636] = 9;
	v->a[109637] = anon_sym_SEMI;
	v->a[109638] = anon_sym_PIPE_PIPE;
	v->a[109639] = anon_sym_AMP_AMP;
	small_parse_table_5482(v);
}

void	small_parse_table_5482(t_small_parse_table_array *v)
{
	v->a[109640] = anon_sym_PIPE;
	v->a[109641] = anon_sym_AMP;
	v->a[109642] = anon_sym_LT_LT;
	v->a[109643] = anon_sym_SEMI_SEMI;
	v->a[109644] = anon_sym_PIPE_AMP;
	v->a[109645] = anon_sym_LT_LT_DASH;
	v->a[109646] = actions(5823);
	v->a[109647] = 11;
	v->a[109648] = anon_sym_LT;
	v->a[109649] = anon_sym_GT;
	v->a[109650] = anon_sym_GT_GT;
	v->a[109651] = anon_sym_AMP_GT;
	v->a[109652] = anon_sym_AMP_GT_GT;
	v->a[109653] = anon_sym_LT_AMP;
	v->a[109654] = anon_sym_GT_AMP;
	v->a[109655] = anon_sym_GT_PIPE;
	v->a[109656] = anon_sym_LT_AMP_DASH;
	v->a[109657] = anon_sym_GT_AMP_DASH;
	v->a[109658] = anon_sym_LT_LT_LT;
	v->a[109659] = actions(5819);
	small_parse_table_5483(v);
}

void	small_parse_table_5483(t_small_parse_table_array *v)
{
	v->a[109660] = 17;
	v->a[109661] = anon_sym_LPAREN_LPAREN;
	v->a[109662] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109663] = anon_sym_DOLLAR_LBRACK;
	v->a[109664] = anon_sym_DOLLAR;
	v->a[109665] = sym__special_character;
	v->a[109666] = anon_sym_DQUOTE;
	v->a[109667] = sym_raw_string;
	v->a[109668] = sym_ansi_c_string;
	v->a[109669] = aux_sym_number_token1;
	v->a[109670] = aux_sym_number_token2;
	v->a[109671] = anon_sym_DOLLAR_LBRACE;
	v->a[109672] = anon_sym_DOLLAR_LPAREN;
	v->a[109673] = anon_sym_BQUOTE;
	v->a[109674] = anon_sym_DOLLAR_BQUOTE;
	v->a[109675] = anon_sym_LT_LPAREN;
	v->a[109676] = anon_sym_GT_LPAREN;
	v->a[109677] = sym_word;
	v->a[109678] = 8;
	v->a[109679] = actions(3);
	small_parse_table_5484(v);
}

void	small_parse_table_5484(t_small_parse_table_array *v)
{
	v->a[109680] = 1;
	v->a[109681] = sym_comment;
	v->a[109682] = actions(5826);
	v->a[109683] = 1;
	v->a[109684] = aux_sym_heredoc_redirect_token1;
	v->a[109685] = actions(5828);
	v->a[109686] = 1;
	v->a[109687] = sym_file_descriptor;
	v->a[109688] = actions(6242);
	v->a[109689] = 1;
	v->a[109690] = anon_sym_RPAREN;
	v->a[109691] = actions(5831);
	v->a[109692] = 3;
	v->a[109693] = sym_variable_name;
	v->a[109694] = sym_test_operator;
	v->a[109695] = sym__brace_start;
	v->a[109696] = actions(5821);
	v->a[109697] = 9;
	v->a[109698] = anon_sym_SEMI;
	v->a[109699] = anon_sym_PIPE_PIPE;
	small_parse_table_5485(v);
}

/* EOF small_parse_table_1096.c */
