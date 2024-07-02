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
	v->a[16800] = aux_sym_command_repeat1;
	v->a[16801] = state(1157);
	v->a[16802] = 1;
	v->a[16803] = aux_sym_redirected_statement_repeat2;
	v->a[16804] = state(1437);
	v->a[16805] = 1;
	v->a[16806] = sym_pipeline;
	v->a[16807] = actions(87);
	v->a[16808] = 2;
	v->a[16809] = anon_sym_while;
	v->a[16810] = anon_sym_until;
	v->a[16811] = actions(109);
	v->a[16812] = 2;
	v->a[16813] = sym_raw_string;
	v->a[16814] = sym_number;
	v->a[16815] = state(348);
	v->a[16816] = 5;
	v->a[16817] = sym_arithmetic_expansion;
	v->a[16818] = sym_string;
	v->a[16819] = sym_simple_expansion;
	small_parse_table_841(v);
}

void	small_parse_table_841(t_small_parse_table_array *v)
{
	v->a[16820] = sym_expansion;
	v->a[16821] = sym_command_substitution;
	v->a[16822] = actions(101);
	v->a[16823] = 7;
	v->a[16824] = anon_sym_LT;
	v->a[16825] = anon_sym_GT;
	v->a[16826] = anon_sym_GT_GT;
	v->a[16827] = anon_sym_LT_AMP;
	v->a[16828] = anon_sym_GT_AMP;
	v->a[16829] = anon_sym_GT_PIPE;
	v->a[16830] = anon_sym_LT_GT;
	v->a[16831] = state(1210);
	v->a[16832] = 13;
	v->a[16833] = sym__statement_not_pipeline;
	v->a[16834] = sym_redirected_statement;
	v->a[16835] = sym_for_statement;
	v->a[16836] = sym_while_statement;
	v->a[16837] = sym_if_statement;
	v->a[16838] = sym_case_statement;
	v->a[16839] = sym_function_definition;
	small_parse_table_842(v);
}

void	small_parse_table_842(t_small_parse_table_array *v)
{
	v->a[16840] = sym_compound_statement;
	v->a[16841] = sym_subshell;
	v->a[16842] = sym_list;
	v->a[16843] = sym_negated_command;
	v->a[16844] = sym_command;
	v->a[16845] = sym__variable_assignments;
	v->a[16846] = 29;
	v->a[16847] = actions(3);
	v->a[16848] = 1;
	v->a[16849] = sym_comment;
	v->a[16850] = actions(83);
	v->a[16851] = 1;
	v->a[16852] = sym_word;
	v->a[16853] = actions(85);
	v->a[16854] = 1;
	v->a[16855] = anon_sym_for;
	v->a[16856] = actions(89);
	v->a[16857] = 1;
	v->a[16858] = anon_sym_if;
	v->a[16859] = actions(91);
	small_parse_table_843(v);
}

void	small_parse_table_843(t_small_parse_table_array *v)
{
	v->a[16860] = 1;
	v->a[16861] = anon_sym_case;
	v->a[16862] = actions(93);
	v->a[16863] = 1;
	v->a[16864] = anon_sym_LPAREN;
	v->a[16865] = actions(97);
	v->a[16866] = 1;
	v->a[16867] = anon_sym_LBRACE;
	v->a[16868] = actions(99);
	v->a[16869] = 1;
	v->a[16870] = anon_sym_BANG;
	v->a[16871] = actions(103);
	v->a[16872] = 1;
	v->a[16873] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16874] = actions(105);
	v->a[16875] = 1;
	v->a[16876] = anon_sym_DOLLAR;
	v->a[16877] = actions(107);
	v->a[16878] = 1;
	v->a[16879] = anon_sym_DQUOTE;
	small_parse_table_844(v);
}

void	small_parse_table_844(t_small_parse_table_array *v)
{
	v->a[16880] = actions(111);
	v->a[16881] = 1;
	v->a[16882] = anon_sym_DOLLAR_LBRACE;
	v->a[16883] = actions(113);
	v->a[16884] = 1;
	v->a[16885] = anon_sym_DOLLAR_LPAREN;
	v->a[16886] = actions(115);
	v->a[16887] = 1;
	v->a[16888] = anon_sym_BQUOTE;
	v->a[16889] = actions(117);
	v->a[16890] = 1;
	v->a[16891] = sym_file_descriptor;
	v->a[16892] = actions(119);
	v->a[16893] = 1;
	v->a[16894] = sym_variable_name;
	v->a[16895] = state(172);
	v->a[16896] = 1;
	v->a[16897] = sym_command_name;
	v->a[16898] = state(329);
	v->a[16899] = 1;
	small_parse_table_845(v);
}

/* EOF small_parse_table_168.c */
