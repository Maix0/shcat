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
	v->a[15800] = anon_sym_BQUOTE;
	v->a[15801] = anon_sym_DOLLAR_BQUOTE;
	v->a[15802] = sym_word;
	v->a[15803] = 4;
	v->a[15804] = actions(57);
	v->a[15805] = 1;
	v->a[15806] = sym_comment;
	v->a[15807] = actions(1693);
	v->a[15808] = 1;
	v->a[15809] = ts_builtin_sym_end;
	v->a[15810] = actions(1691);
	v->a[15811] = 17;
	v->a[15812] = sym_file_descriptor;
	v->a[15813] = sym_variable_name;
	v->a[15814] = sym_test_operator;
	v->a[15815] = sym__brace_start;
	v->a[15816] = anon_sym_LPAREN;
	v->a[15817] = anon_sym_LBRACE;
	v->a[15818] = anon_sym_GT_GT;
	v->a[15819] = anon_sym_AMP_GT_GT;
	small_parse_table_791(v);
}

void	small_parse_table_791(t_small_parse_table_array *v)
{
	v->a[15820] = anon_sym_GT_PIPE;
	v->a[15821] = anon_sym_LT_AMP_DASH;
	v->a[15822] = anon_sym_GT_AMP_DASH;
	v->a[15823] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15824] = anon_sym_DQUOTE;
	v->a[15825] = sym_raw_string;
	v->a[15826] = anon_sym_DOLLAR_LBRACE;
	v->a[15827] = anon_sym_BQUOTE;
	v->a[15828] = anon_sym_DOLLAR_BQUOTE;
	v->a[15829] = actions(1689);
	v->a[15830] = 26;
	v->a[15831] = anon_sym_for;
	v->a[15832] = anon_sym_select;
	v->a[15833] = anon_sym_while;
	v->a[15834] = anon_sym_until;
	v->a[15835] = anon_sym_if;
	v->a[15836] = anon_sym_case;
	v->a[15837] = anon_sym_function;
	v->a[15838] = anon_sym_BANG;
	v->a[15839] = anon_sym_declare;
	small_parse_table_792(v);
}

void	small_parse_table_792(t_small_parse_table_array *v)
{
	v->a[15840] = anon_sym_typeset;
	v->a[15841] = anon_sym_export;
	v->a[15842] = anon_sym_readonly;
	v->a[15843] = anon_sym_local;
	v->a[15844] = anon_sym_unset;
	v->a[15845] = anon_sym_unsetenv;
	v->a[15846] = anon_sym_LT;
	v->a[15847] = anon_sym_GT;
	v->a[15848] = anon_sym_AMP_GT;
	v->a[15849] = anon_sym_LT_AMP;
	v->a[15850] = anon_sym_GT_AMP;
	v->a[15851] = anon_sym_DOLLAR;
	v->a[15852] = sym__special_character;
	v->a[15853] = aux_sym_number_token1;
	v->a[15854] = aux_sym_number_token2;
	v->a[15855] = anon_sym_DOLLAR_LPAREN;
	v->a[15856] = sym_word;
	v->a[15857] = 8;
	v->a[15858] = actions(3);
	v->a[15859] = 1;
	small_parse_table_793(v);
}

void	small_parse_table_793(t_small_parse_table_array *v)
{
	v->a[15860] = sym_comment;
	v->a[15861] = actions(2528);
	v->a[15862] = 1;
	v->a[15863] = sym_variable_name;
	v->a[15864] = actions(2526);
	v->a[15865] = 2;
	v->a[15866] = sym_test_operator;
	v->a[15867] = sym__brace_start;
	v->a[15868] = actions(2638);
	v->a[15869] = 2;
	v->a[15870] = sym_file_descriptor;
	v->a[15871] = aux_sym_heredoc_redirect_token1;
	v->a[15872] = state(1886);
	v->a[15873] = 2;
	v->a[15874] = sym_variable_assignment;
	v->a[15875] = aux_sym_variable_assignments_repeat1;
	v->a[15876] = state(1894);
	v->a[15877] = 3;
	v->a[15878] = sym_file_redirect;
	v->a[15879] = sym_heredoc_redirect;
	small_parse_table_794(v);
}

void	small_parse_table_794(t_small_parse_table_array *v)
{
	v->a[15880] = aux_sym_redirected_statement_repeat1;
	v->a[15881] = actions(2512);
	v->a[15882] = 12;
	v->a[15883] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15884] = anon_sym_DOLLAR;
	v->a[15885] = sym__special_character;
	v->a[15886] = anon_sym_DQUOTE;
	v->a[15887] = sym_raw_string;
	v->a[15888] = aux_sym_number_token1;
	v->a[15889] = aux_sym_number_token2;
	v->a[15890] = anon_sym_DOLLAR_LBRACE;
	v->a[15891] = anon_sym_DOLLAR_LPAREN;
	v->a[15892] = anon_sym_BQUOTE;
	v->a[15893] = anon_sym_DOLLAR_BQUOTE;
	v->a[15894] = sym_word;
	v->a[15895] = actions(2516);
	v->a[15896] = 22;
	v->a[15897] = anon_sym_esac;
	v->a[15898] = anon_sym_PIPE;
	v->a[15899] = anon_sym_SEMI_SEMI;
	small_parse_table_795(v);
}

/* EOF small_parse_table_158.c */
