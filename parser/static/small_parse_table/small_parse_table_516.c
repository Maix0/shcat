/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_516.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2580(t_small_parse_table_array *v)
{
	v->a[51600] = actions(177);
	v->a[51601] = 1;
	v->a[51602] = anon_sym_DOLLAR_LBRACE;
	v->a[51603] = actions(179);
	v->a[51604] = 1;
	v->a[51605] = anon_sym_DOLLAR_LPAREN;
	v->a[51606] = actions(181);
	v->a[51607] = 1;
	v->a[51608] = anon_sym_BQUOTE;
	v->a[51609] = actions(183);
	v->a[51610] = 1;
	v->a[51611] = anon_sym_DOLLAR_BQUOTE;
	v->a[51612] = actions(189);
	v->a[51613] = 1;
	v->a[51614] = sym__brace_start;
	v->a[51615] = actions(2900);
	v->a[51616] = 1;
	v->a[51617] = sym_file_descriptor;
	v->a[51618] = actions(3141);
	v->a[51619] = 1;
	small_parse_table_2581(v);
}

void	small_parse_table_2581(t_small_parse_table_array *v)
{
	v->a[51620] = sym_word;
	v->a[51621] = actions(3143);
	v->a[51622] = 1;
	v->a[51623] = sym__special_character;
	v->a[51624] = actions(3621);
	v->a[51625] = 1;
	v->a[51626] = sym_variable_name;
	v->a[51627] = state(259);
	v->a[51628] = 1;
	v->a[51629] = sym_command_name;
	v->a[51630] = state(678);
	v->a[51631] = 1;
	v->a[51632] = aux_sym__literal_repeat1;
	v->a[51633] = state(862);
	v->a[51634] = 1;
	v->a[51635] = sym_concatenation;
	v->a[51636] = state(1995);
	v->a[51637] = 1;
	v->a[51638] = sym_file_redirect;
	v->a[51639] = actions(171);
	small_parse_table_2582(v);
}

void	small_parse_table_2582(t_small_parse_table_array *v)
{
	v->a[51640] = 2;
	v->a[51641] = sym_test_operator;
	v->a[51642] = sym_raw_string;
	v->a[51643] = actions(2896);
	v->a[51644] = 2;
	v->a[51645] = anon_sym_LT_AMP_DASH;
	v->a[51646] = anon_sym_GT_AMP_DASH;
	v->a[51647] = state(1776);
	v->a[51648] = 2;
	v->a[51649] = sym_variable_assignment;
	v->a[51650] = aux_sym_command_repeat1;
	v->a[51651] = actions(2894);
	v->a[51652] = 3;
	v->a[51653] = anon_sym_GT_GT;
	v->a[51654] = anon_sym_AMP_GT_GT;
	v->a[51655] = anon_sym_GT_PIPE;
	v->a[51656] = actions(2892);
	v->a[51657] = 5;
	v->a[51658] = anon_sym_LT;
	v->a[51659] = anon_sym_GT;
	small_parse_table_2583(v);
}

void	small_parse_table_2583(t_small_parse_table_array *v)
{
	v->a[51660] = anon_sym_AMP_GT;
	v->a[51661] = anon_sym_LT_AMP;
	v->a[51662] = anon_sym_GT_AMP;
	v->a[51663] = state(508);
	v->a[51664] = 7;
	v->a[51665] = sym_arithmetic_expansion;
	v->a[51666] = sym_brace_expression;
	v->a[51667] = sym_string;
	v->a[51668] = sym_number;
	v->a[51669] = sym_simple_expansion;
	v->a[51670] = sym_expansion;
	v->a[51671] = sym_command_substitution;
	v->a[51672] = 3;
	v->a[51673] = actions(3);
	v->a[51674] = 1;
	v->a[51675] = sym_comment;
	v->a[51676] = actions(2778);
	v->a[51677] = 6;
	v->a[51678] = sym_file_descriptor;
	v->a[51679] = sym__concat;
	small_parse_table_2584(v);
}

void	small_parse_table_2584(t_small_parse_table_array *v)
{
	v->a[51680] = sym_test_operator;
	v->a[51681] = sym__bare_dollar;
	v->a[51682] = sym__brace_start;
	v->a[51683] = aux_sym_heredoc_redirect_token1;
	v->a[51684] = actions(2776);
	v->a[51685] = 33;
	v->a[51686] = anon_sym_PIPE;
	v->a[51687] = anon_sym_RPAREN;
	v->a[51688] = anon_sym_SEMI_SEMI;
	v->a[51689] = anon_sym_PIPE_AMP;
	v->a[51690] = anon_sym_AMP_AMP;
	v->a[51691] = anon_sym_PIPE_PIPE;
	v->a[51692] = anon_sym_LT;
	v->a[51693] = anon_sym_GT;
	v->a[51694] = anon_sym_GT_GT;
	v->a[51695] = anon_sym_AMP_GT;
	v->a[51696] = anon_sym_AMP_GT_GT;
	v->a[51697] = anon_sym_LT_AMP;
	v->a[51698] = anon_sym_GT_AMP;
	v->a[51699] = anon_sym_GT_PIPE;
	small_parse_table_2585(v);
}

/* EOF small_parse_table_516.c */
