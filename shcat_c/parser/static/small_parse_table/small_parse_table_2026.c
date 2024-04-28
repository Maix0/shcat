/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2026.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10130(t_small_parse_table_array *v)
{
	v->a[202600] = sym_number;
	v->a[202601] = sym_simple_expansion;
	v->a[202602] = sym_expansion;
	v->a[202603] = sym_command_substitution;
	v->a[202604] = sym_process_substitution;
	v->a[202605] = 20;
	v->a[202606] = actions(71);
	v->a[202607] = 1;
	v->a[202608] = sym_comment;
	v->a[202609] = actions(3612);
	v->a[202610] = 1;
	v->a[202611] = anon_sym_DOLLAR;
	v->a[202612] = actions(3616);
	v->a[202613] = 1;
	v->a[202614] = aux_sym_number_token1;
	v->a[202615] = actions(3618);
	v->a[202616] = 1;
	v->a[202617] = aux_sym_number_token2;
	v->a[202618] = actions(3622);
	v->a[202619] = 1;
	small_parse_table_10131(v);
}

void	small_parse_table_10131(t_small_parse_table_array *v)
{
	v->a[202620] = anon_sym_DOLLAR_LPAREN;
	v->a[202621] = actions(3632);
	v->a[202622] = 1;
	v->a[202623] = sym__brace_start;
	v->a[202624] = actions(4131);
	v->a[202625] = 1;
	v->a[202626] = sym_word;
	v->a[202627] = actions(4135);
	v->a[202628] = 1;
	v->a[202629] = sym_test_operator;
	v->a[202630] = actions(8850);
	v->a[202631] = 1;
	v->a[202632] = anon_sym_DOLLAR_LBRACK;
	v->a[202633] = actions(8854);
	v->a[202634] = 1;
	v->a[202635] = anon_sym_DQUOTE;
	v->a[202636] = actions(8858);
	v->a[202637] = 1;
	v->a[202638] = anon_sym_DOLLAR_LBRACE;
	v->a[202639] = actions(8860);
	small_parse_table_10132(v);
}

void	small_parse_table_10132(t_small_parse_table_array *v)
{
	v->a[202640] = 1;
	v->a[202641] = anon_sym_BQUOTE;
	v->a[202642] = actions(8862);
	v->a[202643] = 1;
	v->a[202644] = anon_sym_DOLLAR_BQUOTE;
	v->a[202645] = actions(9086);
	v->a[202646] = 1;
	v->a[202647] = sym__special_character;
	v->a[202648] = state(2270);
	v->a[202649] = 1;
	v->a[202650] = aux_sym__literal_repeat1;
	v->a[202651] = actions(8848);
	v->a[202652] = 2;
	v->a[202653] = anon_sym_LPAREN_LPAREN;
	v->a[202654] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[202655] = actions(8864);
	v->a[202656] = 2;
	v->a[202657] = anon_sym_LT_LPAREN;
	v->a[202658] = anon_sym_GT_LPAREN;
	v->a[202659] = actions(9088);
	small_parse_table_10133(v);
}

void	small_parse_table_10133(t_small_parse_table_array *v)
{
	v->a[202660] = 2;
	v->a[202661] = sym_raw_string;
	v->a[202662] = sym_ansi_c_string;
	v->a[202663] = state(789);
	v->a[202664] = 2;
	v->a[202665] = sym_concatenation;
	v->a[202666] = aux_sym_for_statement_repeat1;
	v->a[202667] = state(1968);
	v->a[202668] = 9;
	v->a[202669] = sym_arithmetic_expansion;
	v->a[202670] = sym_brace_expression;
	v->a[202671] = sym_string;
	v->a[202672] = sym_translated_string;
	v->a[202673] = sym_number;
	v->a[202674] = sym_simple_expansion;
	v->a[202675] = sym_expansion;
	v->a[202676] = sym_command_substitution;
	v->a[202677] = sym_process_substitution;
	v->a[202678] = 21;
	v->a[202679] = actions(71);
	small_parse_table_10134(v);
}

void	small_parse_table_10134(t_small_parse_table_array *v)
{
	v->a[202680] = 1;
	v->a[202681] = sym_comment;
	v->a[202682] = actions(1551);
	v->a[202683] = 1;
	v->a[202684] = anon_sym_DOLLAR;
	v->a[202685] = actions(1557);
	v->a[202686] = 1;
	v->a[202687] = aux_sym_number_token1;
	v->a[202688] = actions(1559);
	v->a[202689] = 1;
	v->a[202690] = aux_sym_number_token2;
	v->a[202691] = actions(1563);
	v->a[202692] = 1;
	v->a[202693] = anon_sym_DOLLAR_LPAREN;
	v->a[202694] = actions(1575);
	v->a[202695] = 1;
	v->a[202696] = sym__brace_start;
	v->a[202697] = actions(9198);
	v->a[202698] = 1;
	v->a[202699] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10135(v);
}

/* EOF small_parse_table_2026.c */
