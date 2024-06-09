/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_168.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_840(t_small_parse_table_array *v)
{
	v->a[16800] = 1;
	v->a[16801] = sym_variable_assignment;
	v->a[16802] = state(582);
	v->a[16803] = 1;
	v->a[16804] = sym_concatenation;
	v->a[16805] = state(587);
	v->a[16806] = 1;
	v->a[16807] = aux_sym_command_repeat1;
	v->a[16808] = state(718);
	v->a[16809] = 1;
	v->a[16810] = sym_file_redirect;
	v->a[16811] = state(1213);
	v->a[16812] = 1;
	v->a[16813] = aux_sym_redirected_statement_repeat2;
	v->a[16814] = state(1226);
	v->a[16815] = 1;
	v->a[16816] = sym_pipeline;
	v->a[16817] = state(2035);
	v->a[16818] = 1;
	v->a[16819] = sym__statement_not_pipeline;
	small_parse_table_841(v);
}

void	small_parse_table_841(t_small_parse_table_array *v)
{
	v->a[16820] = actions(11);
	v->a[16821] = 2;
	v->a[16822] = anon_sym_while;
	v->a[16823] = anon_sym_until;
	v->a[16824] = actions(61);
	v->a[16825] = 2;
	v->a[16826] = anon_sym_LT_AMP_DASH;
	v->a[16827] = anon_sym_GT_AMP_DASH;
	v->a[16828] = state(397);
	v->a[16829] = 6;
	v->a[16830] = sym_arithmetic_expansion;
	v->a[16831] = sym_string;
	v->a[16832] = sym_number;
	v->a[16833] = sym_simple_expansion;
	v->a[16834] = sym_expansion;
	v->a[16835] = sym_command_substitution;
	v->a[16836] = actions(59);
	v->a[16837] = 8;
	v->a[16838] = anon_sym_LT;
	v->a[16839] = anon_sym_GT;
	small_parse_table_842(v);
}

void	small_parse_table_842(t_small_parse_table_array *v)
{
	v->a[16840] = anon_sym_GT_GT;
	v->a[16841] = anon_sym_AMP_GT;
	v->a[16842] = anon_sym_AMP_GT_GT;
	v->a[16843] = anon_sym_LT_AMP;
	v->a[16844] = anon_sym_GT_AMP;
	v->a[16845] = anon_sym_GT_PIPE;
	v->a[16846] = state(1149);
	v->a[16847] = 12;
	v->a[16848] = sym_redirected_statement;
	v->a[16849] = sym_for_statement;
	v->a[16850] = sym_while_statement;
	v->a[16851] = sym_if_statement;
	v->a[16852] = sym_case_statement;
	v->a[16853] = sym_function_definition;
	v->a[16854] = sym_compound_statement;
	v->a[16855] = sym_subshell;
	v->a[16856] = sym_list;
	v->a[16857] = sym_negated_command;
	v->a[16858] = sym_command;
	v->a[16859] = sym_variable_assignments;
	small_parse_table_843(v);
}

void	small_parse_table_843(t_small_parse_table_array *v)
{
	v->a[16860] = 33;
	v->a[16861] = actions(3);
	v->a[16862] = 1;
	v->a[16863] = sym_comment;
	v->a[16864] = actions(9);
	v->a[16865] = 1;
	v->a[16866] = anon_sym_for;
	v->a[16867] = actions(13);
	v->a[16868] = 1;
	v->a[16869] = anon_sym_if;
	v->a[16870] = actions(15);
	v->a[16871] = 1;
	v->a[16872] = anon_sym_case;
	v->a[16873] = actions(17);
	v->a[16874] = 1;
	v->a[16875] = anon_sym_LPAREN;
	v->a[16876] = actions(19);
	v->a[16877] = 1;
	v->a[16878] = anon_sym_LBRACE;
	v->a[16879] = actions(63);
	small_parse_table_844(v);
}

void	small_parse_table_844(t_small_parse_table_array *v)
{
	v->a[16880] = 1;
	v->a[16881] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16882] = actions(65);
	v->a[16883] = 1;
	v->a[16884] = anon_sym_DOLLAR;
	v->a[16885] = actions(67);
	v->a[16886] = 1;
	v->a[16887] = anon_sym_DQUOTE;
	v->a[16888] = actions(69);
	v->a[16889] = 1;
	v->a[16890] = sym_raw_string;
	v->a[16891] = actions(71);
	v->a[16892] = 1;
	v->a[16893] = aux_sym_number_token1;
	v->a[16894] = actions(73);
	v->a[16895] = 1;
	v->a[16896] = aux_sym_number_token2;
	v->a[16897] = actions(75);
	v->a[16898] = 1;
	v->a[16899] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_845(v);
}

/* EOF small_parse_table_168.c */
