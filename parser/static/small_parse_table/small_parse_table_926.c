/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_926.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4630(t_small_parse_table_array *v)
{
	v->a[92600] = anon_sym_DOLLAR_LPAREN;
	v->a[92601] = actions(1163);
	v->a[92602] = 1;
	v->a[92603] = anon_sym_DOLLAR_BQUOTE;
	v->a[92604] = actions(1169);
	v->a[92605] = 1;
	v->a[92606] = sym__brace_start;
	v->a[92607] = actions(1211);
	v->a[92608] = 1;
	v->a[92609] = sym_word;
	v->a[92610] = actions(1213);
	v->a[92611] = 1;
	v->a[92612] = anon_sym_BANG;
	v->a[92613] = actions(1219);
	v->a[92614] = 1;
	v->a[92615] = anon_sym_TILDE;
	v->a[92616] = actions(1221);
	v->a[92617] = 1;
	v->a[92618] = sym__special_character;
	v->a[92619] = actions(1225);
	small_parse_table_4631(v);
}

void	small_parse_table_4631(t_small_parse_table_array *v)
{
	v->a[92620] = 1;
	v->a[92621] = sym_test_operator;
	v->a[92622] = actions(3060);
	v->a[92623] = 1;
	v->a[92624] = anon_sym_BQUOTE;
	v->a[92625] = actions(6025);
	v->a[92626] = 1;
	v->a[92627] = sym__regex_no_space;
	v->a[92628] = state(2484);
	v->a[92629] = 1;
	v->a[92630] = aux_sym__literal_repeat1;
	v->a[92631] = state(3314);
	v->a[92632] = 1;
	v->a[92633] = sym__expression;
	v->a[92634] = actions(1129);
	v->a[92635] = 2;
	v->a[92636] = anon_sym_LPAREN_LPAREN;
	v->a[92637] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92638] = actions(1165);
	v->a[92639] = 2;
	small_parse_table_4632(v);
}

void	small_parse_table_4632(t_small_parse_table_array *v)
{
	v->a[92640] = anon_sym_LT_LPAREN;
	v->a[92641] = anon_sym_GT_LPAREN;
	v->a[92642] = actions(1215);
	v->a[92643] = 2;
	v->a[92644] = anon_sym_PLUS_PLUS2;
	v->a[92645] = anon_sym_DASH_DASH2;
	v->a[92646] = actions(1217);
	v->a[92647] = 2;
	v->a[92648] = anon_sym_DASH2;
	v->a[92649] = anon_sym_PLUS2;
	v->a[92650] = actions(1223);
	v->a[92651] = 2;
	v->a[92652] = sym_raw_string;
	v->a[92653] = sym_ansi_c_string;
	v->a[92654] = state(2594);
	v->a[92655] = 6;
	v->a[92656] = sym_binary_expression;
	v->a[92657] = sym_ternary_expression;
	v->a[92658] = sym_unary_expression;
	v->a[92659] = sym_postfix_expression;
	small_parse_table_4633(v);
}

void	small_parse_table_4633(t_small_parse_table_array *v)
{
	v->a[92660] = sym_parenthesized_expression;
	v->a[92661] = sym_concatenation;
	v->a[92662] = state(2588);
	v->a[92663] = 9;
	v->a[92664] = sym_arithmetic_expansion;
	v->a[92665] = sym_brace_expression;
	v->a[92666] = sym_string;
	v->a[92667] = sym_translated_string;
	v->a[92668] = sym_number;
	v->a[92669] = sym_simple_expansion;
	v->a[92670] = sym_expansion;
	v->a[92671] = sym_command_substitution;
	v->a[92672] = sym_process_substitution;
	v->a[92673] = 9;
	v->a[92674] = actions(71);
	v->a[92675] = 1;
	v->a[92676] = sym_comment;
	v->a[92677] = actions(5998);
	v->a[92678] = 1;
	v->a[92679] = sym_variable_name;
	small_parse_table_4634(v);
}

void	small_parse_table_4634(t_small_parse_table_array *v)
{
	v->a[92680] = state(6737);
	v->a[92681] = 1;
	v->a[92682] = sym_subscript;
	v->a[92683] = state(5360);
	v->a[92684] = 2;
	v->a[92685] = sym_variable_assignment;
	v->a[92686] = aux_sym_variable_assignments_repeat1;
	v->a[92687] = state(5436);
	v->a[92688] = 3;
	v->a[92689] = sym_file_redirect;
	v->a[92690] = sym_heredoc_redirect;
	v->a[92691] = aux_sym_redirected_statement_repeat1;
	v->a[92692] = actions(4247);
	v->a[92693] = 5;
	v->a[92694] = anon_sym_DOLLAR;
	v->a[92695] = aux_sym_number_token1;
	v->a[92696] = aux_sym_number_token2;
	v->a[92697] = anon_sym_DOLLAR_LPAREN;
	v->a[92698] = sym_word;
	v->a[92699] = actions(4253);
	small_parse_table_4635(v);
}

/* EOF small_parse_table_926.c */
