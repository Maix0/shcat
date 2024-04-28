/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_966.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4830(t_small_parse_table_array *v)
{
	v->a[96600] = anon_sym_LT_LPAREN;
	v->a[96601] = anon_sym_GT_LPAREN;
	v->a[96602] = actions(1099);
	v->a[96603] = 2;
	v->a[96604] = anon_sym_PLUS_PLUS2;
	v->a[96605] = anon_sym_DASH_DASH2;
	v->a[96606] = actions(1101);
	v->a[96607] = 2;
	v->a[96608] = anon_sym_DASH2;
	v->a[96609] = anon_sym_PLUS2;
	v->a[96610] = actions(1109);
	v->a[96611] = 2;
	v->a[96612] = sym_raw_string;
	v->a[96613] = sym_ansi_c_string;
	v->a[96614] = state(2863);
	v->a[96615] = 6;
	v->a[96616] = sym_binary_expression;
	v->a[96617] = sym_ternary_expression;
	v->a[96618] = sym_unary_expression;
	v->a[96619] = sym_postfix_expression;
	small_parse_table_4831(v);
}

void	small_parse_table_4831(t_small_parse_table_array *v)
{
	v->a[96620] = sym_parenthesized_expression;
	v->a[96621] = sym_concatenation;
	v->a[96622] = state(2451);
	v->a[96623] = 9;
	v->a[96624] = sym_arithmetic_expansion;
	v->a[96625] = sym_brace_expression;
	v->a[96626] = sym_string;
	v->a[96627] = sym_translated_string;
	v->a[96628] = sym_number;
	v->a[96629] = sym_simple_expansion;
	v->a[96630] = sym_expansion;
	v->a[96631] = sym_command_substitution;
	v->a[96632] = sym_process_substitution;
	v->a[96633] = 5;
	v->a[96634] = actions(3);
	v->a[96635] = 1;
	v->a[96636] = sym_comment;
	v->a[96637] = actions(6123);
	v->a[96638] = 1;
	v->a[96639] = sym__special_character;
	small_parse_table_4832(v);
}

void	small_parse_table_4832(t_small_parse_table_array *v)
{
	v->a[96640] = state(1964);
	v->a[96641] = 1;
	v->a[96642] = aux_sym__literal_repeat1;
	v->a[96643] = actions(1364);
	v->a[96644] = 4;
	v->a[96645] = sym_file_descriptor;
	v->a[96646] = sym_test_operator;
	v->a[96647] = sym__brace_start;
	v->a[96648] = aux_sym_heredoc_redirect_token1;
	v->a[96649] = actions(1362);
	v->a[96650] = 37;
	v->a[96651] = anon_sym_LPAREN_LPAREN;
	v->a[96652] = anon_sym_SEMI;
	v->a[96653] = anon_sym_PIPE_PIPE;
	v->a[96654] = anon_sym_AMP_AMP;
	v->a[96655] = anon_sym_PIPE;
	v->a[96656] = anon_sym_AMP;
	v->a[96657] = anon_sym_LT;
	v->a[96658] = anon_sym_GT;
	v->a[96659] = anon_sym_LT_LT;
	small_parse_table_4833(v);
}

void	small_parse_table_4833(t_small_parse_table_array *v)
{
	v->a[96660] = anon_sym_GT_GT;
	v->a[96661] = anon_sym_RPAREN;
	v->a[96662] = anon_sym_SEMI_SEMI;
	v->a[96663] = anon_sym_PIPE_AMP;
	v->a[96664] = anon_sym_AMP_GT;
	v->a[96665] = anon_sym_AMP_GT_GT;
	v->a[96666] = anon_sym_LT_AMP;
	v->a[96667] = anon_sym_GT_AMP;
	v->a[96668] = anon_sym_GT_PIPE;
	v->a[96669] = anon_sym_LT_AMP_DASH;
	v->a[96670] = anon_sym_GT_AMP_DASH;
	v->a[96671] = anon_sym_LT_LT_DASH;
	v->a[96672] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96673] = anon_sym_DOLLAR_LBRACK;
	v->a[96674] = anon_sym_DOLLAR;
	v->a[96675] = anon_sym_DQUOTE;
	v->a[96676] = sym_raw_string;
	v->a[96677] = sym_ansi_c_string;
	v->a[96678] = aux_sym_number_token1;
	v->a[96679] = aux_sym_number_token2;
	small_parse_table_4834(v);
}

void	small_parse_table_4834(t_small_parse_table_array *v)
{
	v->a[96680] = anon_sym_DOLLAR_LBRACE;
	v->a[96681] = anon_sym_DOLLAR_LPAREN;
	v->a[96682] = anon_sym_BQUOTE;
	v->a[96683] = anon_sym_DOLLAR_BQUOTE;
	v->a[96684] = anon_sym_LT_LPAREN;
	v->a[96685] = anon_sym_GT_LPAREN;
	v->a[96686] = aux_sym__simple_variable_name_token1;
	v->a[96687] = sym_word;
	v->a[96688] = 3;
	v->a[96689] = actions(71);
	v->a[96690] = 1;
	v->a[96691] = sym_comment;
	v->a[96692] = actions(1340);
	v->a[96693] = 16;
	v->a[96694] = anon_sym_PIPE;
	v->a[96695] = anon_sym_EQ_EQ;
	v->a[96696] = anon_sym_LT;
	v->a[96697] = anon_sym_GT;
	v->a[96698] = anon_sym_LT_LT;
	v->a[96699] = anon_sym_LPAREN;
	small_parse_table_4835(v);
}

/* EOF small_parse_table_966.c */
