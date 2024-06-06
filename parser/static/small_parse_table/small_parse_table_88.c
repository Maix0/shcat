/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_88.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_440(t_small_parse_table_array *v)
{
	v->a[8800] = actions(1180);
	v->a[8801] = 21;
	v->a[8802] = anon_sym_PIPE;
	v->a[8803] = anon_sym_SEMI_SEMI;
	v->a[8804] = anon_sym_SEMI_AMP;
	v->a[8805] = anon_sym_SEMI_SEMI_AMP;
	v->a[8806] = anon_sym_PIPE_AMP;
	v->a[8807] = anon_sym_AMP_AMP;
	v->a[8808] = anon_sym_PIPE_PIPE;
	v->a[8809] = anon_sym_LT;
	v->a[8810] = anon_sym_GT;
	v->a[8811] = anon_sym_GT_GT;
	v->a[8812] = anon_sym_AMP_GT;
	v->a[8813] = anon_sym_AMP_GT_GT;
	v->a[8814] = anon_sym_LT_AMP;
	v->a[8815] = anon_sym_GT_AMP;
	v->a[8816] = anon_sym_GT_PIPE;
	v->a[8817] = anon_sym_LT_AMP_DASH;
	v->a[8818] = anon_sym_GT_AMP_DASH;
	v->a[8819] = anon_sym_LT_LT;
	small_parse_table_441(v);
}

void	small_parse_table_441(t_small_parse_table_array *v)
{
	v->a[8820] = anon_sym_LT_LT_DASH;
	v->a[8821] = anon_sym_AMP;
	v->a[8822] = anon_sym_SEMI;
	v->a[8823] = 21;
	v->a[8824] = actions(3);
	v->a[8825] = 1;
	v->a[8826] = sym_comment;
	v->a[8827] = actions(1148);
	v->a[8828] = 1;
	v->a[8829] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8830] = actions(1150);
	v->a[8831] = 1;
	v->a[8832] = anon_sym_DOLLAR;
	v->a[8833] = actions(1152);
	v->a[8834] = 1;
	v->a[8835] = sym__special_character;
	v->a[8836] = actions(1154);
	v->a[8837] = 1;
	v->a[8838] = anon_sym_DQUOTE;
	v->a[8839] = actions(1156);
	small_parse_table_442(v);
}

void	small_parse_table_442(t_small_parse_table_array *v)
{
	v->a[8840] = 1;
	v->a[8841] = aux_sym_number_token1;
	v->a[8842] = actions(1158);
	v->a[8843] = 1;
	v->a[8844] = aux_sym_number_token2;
	v->a[8845] = actions(1160);
	v->a[8846] = 1;
	v->a[8847] = anon_sym_DOLLAR_LBRACE;
	v->a[8848] = actions(1162);
	v->a[8849] = 1;
	v->a[8850] = anon_sym_DOLLAR_LPAREN;
	v->a[8851] = actions(1164);
	v->a[8852] = 1;
	v->a[8853] = anon_sym_BQUOTE;
	v->a[8854] = actions(1166);
	v->a[8855] = 1;
	v->a[8856] = anon_sym_DOLLAR_BQUOTE;
	v->a[8857] = actions(1168);
	v->a[8858] = 1;
	v->a[8859] = sym_test_operator;
	small_parse_table_443(v);
}

void	small_parse_table_443(t_small_parse_table_array *v)
{
	v->a[8860] = actions(1170);
	v->a[8861] = 1;
	v->a[8862] = sym__bare_dollar;
	v->a[8863] = actions(1172);
	v->a[8864] = 1;
	v->a[8865] = sym__brace_start;
	v->a[8866] = state(366);
	v->a[8867] = 1;
	v->a[8868] = aux_sym_command_repeat2;
	v->a[8869] = state(1233);
	v->a[8870] = 1;
	v->a[8871] = aux_sym__literal_repeat1;
	v->a[8872] = state(1281);
	v->a[8873] = 1;
	v->a[8874] = sym_concatenation;
	v->a[8875] = actions(1144);
	v->a[8876] = 2;
	v->a[8877] = sym_raw_string;
	v->a[8878] = sym_word;
	v->a[8879] = actions(1280);
	small_parse_table_444(v);
}

void	small_parse_table_444(t_small_parse_table_array *v)
{
	v->a[8880] = 3;
	v->a[8881] = sym_file_descriptor;
	v->a[8882] = ts_builtin_sym_end;
	v->a[8883] = aux_sym_heredoc_redirect_token1;
	v->a[8884] = state(790);
	v->a[8885] = 7;
	v->a[8886] = sym_arithmetic_expansion;
	v->a[8887] = sym_brace_expression;
	v->a[8888] = sym_string;
	v->a[8889] = sym_number;
	v->a[8890] = sym_simple_expansion;
	v->a[8891] = sym_expansion;
	v->a[8892] = sym_command_substitution;
	v->a[8893] = actions(1278);
	v->a[8894] = 19;
	v->a[8895] = anon_sym_PIPE;
	v->a[8896] = anon_sym_SEMI_SEMI;
	v->a[8897] = anon_sym_PIPE_AMP;
	v->a[8898] = anon_sym_AMP_AMP;
	v->a[8899] = anon_sym_PIPE_PIPE;
	small_parse_table_445(v);
}

/* EOF small_parse_table_88.c */
