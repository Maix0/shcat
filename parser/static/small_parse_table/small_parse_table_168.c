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
	v->a[16800] = actions(313);
	v->a[16801] = 1;
	v->a[16802] = anon_sym_DOLLAR_LPAREN;
	v->a[16803] = actions(316);
	v->a[16804] = 1;
	v->a[16805] = anon_sym_BQUOTE;
	v->a[16806] = actions(319);
	v->a[16807] = 1;
	v->a[16808] = sym_file_descriptor;
	v->a[16809] = actions(322);
	v->a[16810] = 1;
	v->a[16811] = sym_variable_name;
	v->a[16812] = state(137);
	v->a[16813] = 1;
	v->a[16814] = aux_sym__statements_repeat1;
	v->a[16815] = state(191);
	v->a[16816] = 1;
	v->a[16817] = sym_command_name;
	v->a[16818] = state(277);
	v->a[16819] = 1;
	small_parse_table_841(v);
}

void	small_parse_table_841(t_small_parse_table_array *v)
{
	v->a[16820] = sym_variable_assignment;
	v->a[16821] = state(624);
	v->a[16822] = 1;
	v->a[16823] = sym_concatenation;
	v->a[16824] = state(726);
	v->a[16825] = 1;
	v->a[16826] = sym_file_redirect;
	v->a[16827] = state(733);
	v->a[16828] = 1;
	v->a[16829] = aux_sym_command_repeat1;
	v->a[16830] = state(1191);
	v->a[16831] = 1;
	v->a[16832] = sym_pipeline;
	v->a[16833] = state(1307);
	v->a[16834] = 1;
	v->a[16835] = aux_sym_redirected_statement_repeat2;
	v->a[16836] = state(2117);
	v->a[16837] = 1;
	v->a[16838] = sym__statement_not_pipeline;
	v->a[16839] = actions(274);
	small_parse_table_842(v);
}

void	small_parse_table_842(t_small_parse_table_array *v)
{
	v->a[16840] = 2;
	v->a[16841] = anon_sym_while;
	v->a[16842] = anon_sym_until;
	v->a[16843] = actions(295);
	v->a[16844] = 2;
	v->a[16845] = anon_sym_LT_AMP_DASH;
	v->a[16846] = anon_sym_GT_AMP_DASH;
	v->a[16847] = actions(307);
	v->a[16848] = 2;
	v->a[16849] = sym_raw_string;
	v->a[16850] = sym_number;
	v->a[16851] = state(420);
	v->a[16852] = 5;
	v->a[16853] = sym_arithmetic_expansion;
	v->a[16854] = sym_string;
	v->a[16855] = sym_simple_expansion;
	v->a[16856] = sym_expansion;
	v->a[16857] = sym_command_substitution;
	v->a[16858] = actions(292);
	v->a[16859] = 8;
	small_parse_table_843(v);
}

void	small_parse_table_843(t_small_parse_table_array *v)
{
	v->a[16860] = anon_sym_LT;
	v->a[16861] = anon_sym_GT;
	v->a[16862] = anon_sym_GT_GT;
	v->a[16863] = anon_sym_AMP_GT;
	v->a[16864] = anon_sym_AMP_GT_GT;
	v->a[16865] = anon_sym_LT_AMP;
	v->a[16866] = anon_sym_GT_AMP;
	v->a[16867] = anon_sym_GT_PIPE;
	v->a[16868] = state(1162);
	v->a[16869] = 12;
	v->a[16870] = sym_redirected_statement;
	v->a[16871] = sym_for_statement;
	v->a[16872] = sym_while_statement;
	v->a[16873] = sym_if_statement;
	v->a[16874] = sym_case_statement;
	v->a[16875] = sym_function_definition;
	v->a[16876] = sym_compound_statement;
	v->a[16877] = sym_subshell;
	v->a[16878] = sym_list;
	v->a[16879] = sym_negated_command;
	small_parse_table_844(v);
}

void	small_parse_table_844(t_small_parse_table_array *v)
{
	v->a[16880] = sym_command;
	v->a[16881] = sym__variable_assignments;
	v->a[16882] = 42;
	v->a[16883] = actions(3);
	v->a[16884] = 1;
	v->a[16885] = sym_comment;
	v->a[16886] = actions(9);
	v->a[16887] = 1;
	v->a[16888] = anon_sym_for;
	v->a[16889] = actions(13);
	v->a[16890] = 1;
	v->a[16891] = anon_sym_if;
	v->a[16892] = actions(15);
	v->a[16893] = 1;
	v->a[16894] = anon_sym_case;
	v->a[16895] = actions(17);
	v->a[16896] = 1;
	v->a[16897] = anon_sym_LPAREN;
	v->a[16898] = actions(19);
	v->a[16899] = 1;
	small_parse_table_845(v);
}

/* EOF small_parse_table_168.c */
