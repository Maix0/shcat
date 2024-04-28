/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_158.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_790(t_small_parse_table_array *v)
{
	v->a[15800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15801] = actions(3453);
	v->a[15802] = 2;
	v->a[15803] = anon_sym_LT_LPAREN;
	v->a[15804] = anon_sym_GT_LPAREN;
	v->a[15805] = state(664);
	v->a[15806] = 2;
	v->a[15807] = sym_concatenation;
	v->a[15808] = aux_sym_unset_command_repeat1;
	v->a[15809] = actions(2564);
	v->a[15810] = 3;
	v->a[15811] = sym_file_descriptor;
	v->a[15812] = ts_builtin_sym_end;
	v->a[15813] = aux_sym_heredoc_redirect_token1;
	v->a[15814] = actions(3429);
	v->a[15815] = 3;
	v->a[15816] = sym_raw_string;
	v->a[15817] = sym_ansi_c_string;
	v->a[15818] = sym_word;
	v->a[15819] = state(1681);
	small_parse_table_791(v);
}

void	small_parse_table_791(t_small_parse_table_array *v)
{
	v->a[15820] = 9;
	v->a[15821] = sym_arithmetic_expansion;
	v->a[15822] = sym_brace_expression;
	v->a[15823] = sym_string;
	v->a[15824] = sym_translated_string;
	v->a[15825] = sym_number;
	v->a[15826] = sym_simple_expansion;
	v->a[15827] = sym_expansion;
	v->a[15828] = sym_command_substitution;
	v->a[15829] = sym_process_substitution;
	v->a[15830] = actions(2562);
	v->a[15831] = 19;
	v->a[15832] = anon_sym_SEMI;
	v->a[15833] = anon_sym_PIPE_PIPE;
	v->a[15834] = anon_sym_AMP_AMP;
	v->a[15835] = anon_sym_PIPE;
	v->a[15836] = anon_sym_AMP;
	v->a[15837] = anon_sym_LT;
	v->a[15838] = anon_sym_GT;
	v->a[15839] = anon_sym_LT_LT;
	small_parse_table_792(v);
}

void	small_parse_table_792(t_small_parse_table_array *v)
{
	v->a[15840] = anon_sym_GT_GT;
	v->a[15841] = anon_sym_SEMI_SEMI;
	v->a[15842] = anon_sym_PIPE_AMP;
	v->a[15843] = anon_sym_AMP_GT;
	v->a[15844] = anon_sym_AMP_GT_GT;
	v->a[15845] = anon_sym_LT_AMP;
	v->a[15846] = anon_sym_GT_AMP;
	v->a[15847] = anon_sym_GT_PIPE;
	v->a[15848] = anon_sym_LT_AMP_DASH;
	v->a[15849] = anon_sym_GT_AMP_DASH;
	v->a[15850] = anon_sym_LT_LT_DASH;
	v->a[15851] = 8;
	v->a[15852] = actions(3);
	v->a[15853] = 1;
	v->a[15854] = sym_comment;
	v->a[15855] = actions(1811);
	v->a[15856] = 1;
	v->a[15857] = anon_sym_DQUOTE;
	v->a[15858] = actions(1815);
	v->a[15859] = 1;
	small_parse_table_793(v);
}

void	small_parse_table_793(t_small_parse_table_array *v)
{
	v->a[15860] = sym_variable_name;
	v->a[15861] = state(1061);
	v->a[15862] = 1;
	v->a[15863] = sym_string;
	v->a[15864] = actions(1813);
	v->a[15865] = 2;
	v->a[15866] = aux_sym__simple_variable_name_token1;
	v->a[15867] = aux_sym__multiline_variable_name_token1;
	v->a[15868] = actions(1241);
	v->a[15869] = 4;
	v->a[15870] = sym_file_descriptor;
	v->a[15871] = sym_test_operator;
	v->a[15872] = sym__bare_dollar;
	v->a[15873] = sym__brace_start;
	v->a[15874] = actions(1809);
	v->a[15875] = 9;
	v->a[15876] = anon_sym_DASH;
	v->a[15877] = anon_sym_STAR;
	v->a[15878] = anon_sym_BANG;
	v->a[15879] = anon_sym_QMARK;
	small_parse_table_794(v);
}

void	small_parse_table_794(t_small_parse_table_array *v)
{
	v->a[15880] = anon_sym_DOLLAR;
	v->a[15881] = anon_sym_POUND;
	v->a[15882] = anon_sym_AT2;
	v->a[15883] = anon_sym_0;
	v->a[15884] = anon_sym__;
	v->a[15885] = actions(1239);
	v->a[15886] = 36;
	v->a[15887] = anon_sym_LPAREN_LPAREN;
	v->a[15888] = anon_sym_PIPE_PIPE;
	v->a[15889] = anon_sym_AMP_AMP;
	v->a[15890] = anon_sym_PIPE;
	v->a[15891] = anon_sym_EQ_EQ;
	v->a[15892] = anon_sym_LT;
	v->a[15893] = anon_sym_GT;
	v->a[15894] = anon_sym_LT_LT;
	v->a[15895] = anon_sym_GT_GT;
	v->a[15896] = anon_sym_LPAREN;
	v->a[15897] = anon_sym_PIPE_AMP;
	v->a[15898] = anon_sym_EQ_TILDE;
	v->a[15899] = anon_sym_AMP_GT;
	small_parse_table_795(v);
}

/* EOF small_parse_table_158.c */
