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
	v->a[8600] = 5;
	v->a[8601] = sym_file_descriptor;
	v->a[8602] = sym_variable_name;
	v->a[8603] = sym_test_operator;
	v->a[8604] = sym__brace_start;
	v->a[8605] = aux_sym_heredoc_redirect_token1;
	v->a[8606] = state(768);
	v->a[8607] = 7;
	v->a[8608] = sym_arithmetic_expansion;
	v->a[8609] = sym_brace_expression;
	v->a[8610] = sym_string;
	v->a[8611] = sym_number;
	v->a[8612] = sym_simple_expansion;
	v->a[8613] = sym_expansion;
	v->a[8614] = sym_command_substitution;
	v->a[8615] = actions(1388);
	v->a[8616] = 32;
	v->a[8617] = anon_sym_PIPE;
	v->a[8618] = anon_sym_RPAREN;
	v->a[8619] = anon_sym_SEMI_SEMI;
	small_parse_table_431(v);
}

void	small_parse_table_431(t_small_parse_table_array *v)
{
	v->a[8620] = anon_sym_PIPE_AMP;
	v->a[8621] = anon_sym_AMP_AMP;
	v->a[8622] = anon_sym_PIPE_PIPE;
	v->a[8623] = anon_sym_LT;
	v->a[8624] = anon_sym_GT;
	v->a[8625] = anon_sym_GT_GT;
	v->a[8626] = anon_sym_AMP_GT;
	v->a[8627] = anon_sym_AMP_GT_GT;
	v->a[8628] = anon_sym_LT_AMP;
	v->a[8629] = anon_sym_GT_AMP;
	v->a[8630] = anon_sym_GT_PIPE;
	v->a[8631] = anon_sym_LT_AMP_DASH;
	v->a[8632] = anon_sym_GT_AMP_DASH;
	v->a[8633] = anon_sym_LT_LT;
	v->a[8634] = anon_sym_LT_LT_DASH;
	v->a[8635] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8636] = anon_sym_AMP;
	v->a[8637] = anon_sym_DOLLAR;
	v->a[8638] = sym__special_character;
	v->a[8639] = anon_sym_DQUOTE;
	small_parse_table_432(v);
}

void	small_parse_table_432(t_small_parse_table_array *v)
{
	v->a[8640] = sym_raw_string;
	v->a[8641] = aux_sym_number_token1;
	v->a[8642] = aux_sym_number_token2;
	v->a[8643] = anon_sym_DOLLAR_LBRACE;
	v->a[8644] = anon_sym_DOLLAR_LPAREN;
	v->a[8645] = anon_sym_BQUOTE;
	v->a[8646] = anon_sym_DOLLAR_BQUOTE;
	v->a[8647] = sym_word;
	v->a[8648] = anon_sym_SEMI;
	v->a[8649] = 19;
	v->a[8650] = actions(3);
	v->a[8651] = 1;
	v->a[8652] = sym_comment;
	v->a[8653] = actions(1971);
	v->a[8654] = 1;
	v->a[8655] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8656] = actions(1973);
	v->a[8657] = 1;
	v->a[8658] = anon_sym_DOLLAR;
	v->a[8659] = actions(1975);
	small_parse_table_433(v);
}

void	small_parse_table_433(t_small_parse_table_array *v)
{
	v->a[8660] = 1;
	v->a[8661] = sym__special_character;
	v->a[8662] = actions(1977);
	v->a[8663] = 1;
	v->a[8664] = anon_sym_DQUOTE;
	v->a[8665] = actions(1979);
	v->a[8666] = 1;
	v->a[8667] = aux_sym_number_token1;
	v->a[8668] = actions(1981);
	v->a[8669] = 1;
	v->a[8670] = aux_sym_number_token2;
	v->a[8671] = actions(1983);
	v->a[8672] = 1;
	v->a[8673] = anon_sym_DOLLAR_LBRACE;
	v->a[8674] = actions(1985);
	v->a[8675] = 1;
	v->a[8676] = anon_sym_DOLLAR_LPAREN;
	v->a[8677] = actions(1987);
	v->a[8678] = 1;
	v->a[8679] = anon_sym_BQUOTE;
	small_parse_table_434(v);
}

void	small_parse_table_434(t_small_parse_table_array *v)
{
	v->a[8680] = actions(1989);
	v->a[8681] = 1;
	v->a[8682] = anon_sym_DOLLAR_BQUOTE;
	v->a[8683] = actions(1991);
	v->a[8684] = 1;
	v->a[8685] = sym_test_operator;
	v->a[8686] = actions(1993);
	v->a[8687] = 1;
	v->a[8688] = sym__brace_start;
	v->a[8689] = state(1205);
	v->a[8690] = 1;
	v->a[8691] = aux_sym__literal_repeat1;
	v->a[8692] = actions(1390);
	v->a[8693] = 2;
	v->a[8694] = sym_file_descriptor;
	v->a[8695] = aux_sym_heredoc_redirect_token1;
	v->a[8696] = actions(1969);
	v->a[8697] = 2;
	v->a[8698] = sym_raw_string;
	v->a[8699] = sym_word;
	small_parse_table_435(v);
}

/* EOF small_parse_table_86.c */
