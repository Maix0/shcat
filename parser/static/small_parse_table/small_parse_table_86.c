/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_86.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_430(t_small_parse_table_array *v)
{
	v->a[8600] = actions(2612);
	v->a[8601] = 1;
	v->a[8602] = aux_sym_number_token2;
	v->a[8603] = actions(2614);
	v->a[8604] = 1;
	v->a[8605] = anon_sym_DOLLAR_LBRACE;
	v->a[8606] = actions(2616);
	v->a[8607] = 1;
	v->a[8608] = anon_sym_DOLLAR_LPAREN;
	v->a[8609] = actions(2618);
	v->a[8610] = 1;
	v->a[8611] = anon_sym_BQUOTE;
	v->a[8612] = actions(2620);
	v->a[8613] = 1;
	v->a[8614] = anon_sym_DOLLAR_BQUOTE;
	v->a[8615] = actions(2624);
	v->a[8616] = 1;
	v->a[8617] = sym_test_operator;
	v->a[8618] = actions(2626);
	v->a[8619] = 1;
	small_parse_table_431(v);
}

void	small_parse_table_431(t_small_parse_table_array *v)
{
	v->a[8620] = sym__brace_start;
	v->a[8621] = state(1803);
	v->a[8622] = 1;
	v->a[8623] = aux_sym__literal_repeat1;
	v->a[8624] = actions(2074);
	v->a[8625] = 2;
	v->a[8626] = sym_file_descriptor;
	v->a[8627] = aux_sym_heredoc_redirect_token1;
	v->a[8628] = actions(2600);
	v->a[8629] = 2;
	v->a[8630] = anon_sym_LPAREN_LPAREN;
	v->a[8631] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8632] = actions(2622);
	v->a[8633] = 2;
	v->a[8634] = anon_sym_LT_LPAREN;
	v->a[8635] = anon_sym_GT_LPAREN;
	v->a[8636] = state(630);
	v->a[8637] = 2;
	v->a[8638] = sym_concatenation;
	v->a[8639] = aux_sym_for_statement_repeat1;
	small_parse_table_432(v);
}

void	small_parse_table_432(t_small_parse_table_array *v)
{
	v->a[8640] = actions(2598);
	v->a[8641] = 3;
	v->a[8642] = sym_raw_string;
	v->a[8643] = sym_ansi_c_string;
	v->a[8644] = sym_word;
	v->a[8645] = state(1381);
	v->a[8646] = 9;
	v->a[8647] = sym_arithmetic_expansion;
	v->a[8648] = sym_brace_expression;
	v->a[8649] = sym_string;
	v->a[8650] = sym_translated_string;
	v->a[8651] = sym_number;
	v->a[8652] = sym_simple_expansion;
	v->a[8653] = sym_expansion;
	v->a[8654] = sym_command_substitution;
	v->a[8655] = sym_process_substitution;
	v->a[8656] = actions(2072);
	v->a[8657] = 22;
	v->a[8658] = anon_sym_SEMI;
	v->a[8659] = anon_sym_PIPE_PIPE;
	small_parse_table_433(v);
}

void	small_parse_table_433(t_small_parse_table_array *v)
{
	v->a[8660] = anon_sym_AMP_AMP;
	v->a[8661] = anon_sym_PIPE;
	v->a[8662] = anon_sym_AMP;
	v->a[8663] = anon_sym_LT;
	v->a[8664] = anon_sym_GT;
	v->a[8665] = anon_sym_LT_LT;
	v->a[8666] = anon_sym_GT_GT;
	v->a[8667] = anon_sym_esac;
	v->a[8668] = anon_sym_SEMI_SEMI;
	v->a[8669] = anon_sym_SEMI_AMP;
	v->a[8670] = anon_sym_SEMI_SEMI_AMP;
	v->a[8671] = anon_sym_PIPE_AMP;
	v->a[8672] = anon_sym_AMP_GT;
	v->a[8673] = anon_sym_AMP_GT_GT;
	v->a[8674] = anon_sym_LT_AMP;
	v->a[8675] = anon_sym_GT_AMP;
	v->a[8676] = anon_sym_GT_PIPE;
	v->a[8677] = anon_sym_LT_AMP_DASH;
	v->a[8678] = anon_sym_GT_AMP_DASH;
	v->a[8679] = anon_sym_LT_LT_DASH;
	small_parse_table_434(v);
}

void	small_parse_table_434(t_small_parse_table_array *v)
{
	v->a[8680] = 29;
	v->a[8681] = actions(71);
	v->a[8682] = 1;
	v->a[8683] = sym_comment;
	v->a[8684] = actions(1033);
	v->a[8685] = 1;
	v->a[8686] = anon_sym_LPAREN;
	v->a[8687] = actions(2628);
	v->a[8688] = 1;
	v->a[8689] = sym_word;
	v->a[8690] = actions(2634);
	v->a[8691] = 1;
	v->a[8692] = anon_sym_LT_LT_LT;
	v->a[8693] = actions(2636);
	v->a[8694] = 1;
	v->a[8695] = anon_sym_DOLLAR_LBRACK;
	v->a[8696] = actions(2638);
	v->a[8697] = 1;
	v->a[8698] = anon_sym_DOLLAR;
	v->a[8699] = actions(2640);
	small_parse_table_435(v);
}

/* EOF small_parse_table_86.c */
