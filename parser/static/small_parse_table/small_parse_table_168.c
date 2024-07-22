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
	v->a[16801] = sym_pipeline;
	v->a[16802] = state(1149);
	v->a[16803] = 1;
	v->a[16804] = aux_sym_redirected_statement_repeat2;
	v->a[16805] = state(1922);
	v->a[16806] = 1;
	v->a[16807] = sym__statement_not_pipeline;
	v->a[16808] = actions(11);
	v->a[16809] = 2;
	v->a[16810] = anon_sym_while;
	v->a[16811] = anon_sym_until;
	v->a[16812] = actions(61);
	v->a[16813] = 2;
	v->a[16814] = sym_raw_string;
	v->a[16815] = sym_number;
	v->a[16816] = state(455);
	v->a[16817] = 5;
	v->a[16818] = sym_arithmetic_expansion;
	v->a[16819] = sym_string;
	small_parse_table_841(v);
}

void	small_parse_table_841(t_small_parse_table_array *v)
{
	v->a[16820] = sym_simple_expansion;
	v->a[16821] = sym_expansion;
	v->a[16822] = sym_command_substitution;
	v->a[16823] = actions(53);
	v->a[16824] = 7;
	v->a[16825] = anon_sym_LT;
	v->a[16826] = anon_sym_GT;
	v->a[16827] = anon_sym_GT_GT;
	v->a[16828] = anon_sym_LT_AMP;
	v->a[16829] = anon_sym_GT_AMP;
	v->a[16830] = anon_sym_GT_PIPE;
	v->a[16831] = anon_sym_LT_GT;
	v->a[16832] = state(1080);
	v->a[16833] = 12;
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
	v->a[16846] = 28;
	v->a[16847] = actions(3);
	v->a[16848] = 1;
	v->a[16849] = sym_comment;
	v->a[16850] = actions(9);
	v->a[16851] = 1;
	v->a[16852] = anon_sym_for;
	v->a[16853] = actions(13);
	v->a[16854] = 1;
	v->a[16855] = anon_sym_if;
	v->a[16856] = actions(15);
	v->a[16857] = 1;
	v->a[16858] = anon_sym_case;
	v->a[16859] = actions(17);
	small_parse_table_843(v);
}

void	small_parse_table_843(t_small_parse_table_array *v)
{
	v->a[16860] = 1;
	v->a[16861] = anon_sym_LPAREN;
	v->a[16862] = actions(19);
	v->a[16863] = 1;
	v->a[16864] = anon_sym_LBRACE;
	v->a[16865] = actions(55);
	v->a[16866] = 1;
	v->a[16867] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16868] = actions(57);
	v->a[16869] = 1;
	v->a[16870] = anon_sym_DOLLAR;
	v->a[16871] = actions(59);
	v->a[16872] = 1;
	v->a[16873] = anon_sym_DQUOTE;
	v->a[16874] = actions(63);
	v->a[16875] = 1;
	v->a[16876] = anon_sym_DOLLAR_LBRACE;
	v->a[16877] = actions(65);
	v->a[16878] = 1;
	v->a[16879] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_844(v);
}

void	small_parse_table_844(t_small_parse_table_array *v)
{
	v->a[16880] = actions(67);
	v->a[16881] = 1;
	v->a[16882] = anon_sym_BQUOTE;
	v->a[16883] = actions(69);
	v->a[16884] = 1;
	v->a[16885] = sym_file_descriptor;
	v->a[16886] = actions(71);
	v->a[16887] = 1;
	v->a[16888] = sym_variable_name;
	v->a[16889] = actions(223);
	v->a[16890] = 1;
	v->a[16891] = sym_word;
	v->a[16892] = actions(225);
	v->a[16893] = 1;
	v->a[16894] = anon_sym_BANG;
	v->a[16895] = state(178);
	v->a[16896] = 1;
	v->a[16897] = sym_command_name;
	v->a[16898] = state(376);
	v->a[16899] = 1;
	small_parse_table_845(v);
}

/* EOF small_parse_table_168.c */
