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
	v->a[16801] = sym_concatenation;
	v->a[16802] = state(745);
	v->a[16803] = 1;
	v->a[16804] = aux_sym_command_repeat1;
	v->a[16805] = state(760);
	v->a[16806] = 1;
	v->a[16807] = sym_file_redirect;
	v->a[16808] = state(1187);
	v->a[16809] = 1;
	v->a[16810] = sym__variable_assignments;
	v->a[16811] = state(1242);
	v->a[16812] = 1;
	v->a[16813] = sym_command;
	v->a[16814] = state(1243);
	v->a[16815] = 1;
	v->a[16816] = sym_negated_command;
	v->a[16817] = state(1244);
	v->a[16818] = 1;
	v->a[16819] = sym_list;
	small_parse_table_841(v);
}

void	small_parse_table_841(t_small_parse_table_array *v)
{
	v->a[16820] = state(1258);
	v->a[16821] = 1;
	v->a[16822] = sym_subshell;
	v->a[16823] = state(1261);
	v->a[16824] = 1;
	v->a[16825] = sym_compound_statement;
	v->a[16826] = state(1263);
	v->a[16827] = 1;
	v->a[16828] = sym_function_definition;
	v->a[16829] = state(1264);
	v->a[16830] = 1;
	v->a[16831] = sym_case_statement;
	v->a[16832] = state(1265);
	v->a[16833] = 1;
	v->a[16834] = sym_if_statement;
	v->a[16835] = state(1266);
	v->a[16836] = 1;
	v->a[16837] = sym_while_statement;
	v->a[16838] = state(1267);
	v->a[16839] = 1;
	small_parse_table_842(v);
}

void	small_parse_table_842(t_small_parse_table_array *v)
{
	v->a[16840] = sym_for_statement;
	v->a[16841] = state(1284);
	v->a[16842] = 1;
	v->a[16843] = sym_redirected_statement;
	v->a[16844] = state(1380);
	v->a[16845] = 1;
	v->a[16846] = sym_pipeline;
	v->a[16847] = state(1419);
	v->a[16848] = 1;
	v->a[16849] = aux_sym_redirected_statement_repeat2;
	v->a[16850] = state(2257);
	v->a[16851] = 1;
	v->a[16852] = sym__statement_not_pipeline;
	v->a[16853] = actions(11);
	v->a[16854] = 2;
	v->a[16855] = anon_sym_while;
	v->a[16856] = anon_sym_until;
	v->a[16857] = actions(25);
	v->a[16858] = 2;
	v->a[16859] = anon_sym_LT_AMP_DASH;
	small_parse_table_843(v);
}

void	small_parse_table_843(t_small_parse_table_array *v)
{
	v->a[16860] = anon_sym_GT_AMP_DASH;
	v->a[16861] = actions(33);
	v->a[16862] = 2;
	v->a[16863] = sym_raw_string;
	v->a[16864] = sym_number;
	v->a[16865] = state(291);
	v->a[16866] = 5;
	v->a[16867] = sym_arithmetic_expansion;
	v->a[16868] = sym_string;
	v->a[16869] = sym_simple_expansion;
	v->a[16870] = sym_expansion;
	v->a[16871] = sym_command_substitution;
	v->a[16872] = actions(23);
	v->a[16873] = 8;
	v->a[16874] = anon_sym_LT;
	v->a[16875] = anon_sym_GT;
	v->a[16876] = anon_sym_GT_GT;
	v->a[16877] = anon_sym_AMP_GT;
	v->a[16878] = anon_sym_AMP_GT_GT;
	v->a[16879] = anon_sym_LT_AMP;
	small_parse_table_844(v);
}

void	small_parse_table_844(t_small_parse_table_array *v)
{
	v->a[16880] = anon_sym_GT_AMP;
	v->a[16881] = anon_sym_GT_PIPE;
	v->a[16882] = 31;
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
