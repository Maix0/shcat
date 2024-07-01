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
	v->a[16801] = sym_negated_command;
	v->a[16802] = state(1073);
	v->a[16803] = 1;
	v->a[16804] = sym_command;
	v->a[16805] = state(1074);
	v->a[16806] = 1;
	v->a[16807] = sym__variable_assignments;
	v->a[16808] = state(1140);
	v->a[16809] = 1;
	v->a[16810] = sym_pipeline;
	v->a[16811] = state(1206);
	v->a[16812] = 1;
	v->a[16813] = aux_sym_redirected_statement_repeat2;
	v->a[16814] = state(2123);
	v->a[16815] = 1;
	v->a[16816] = sym__statement_not_pipeline;
	v->a[16817] = actions(11);
	v->a[16818] = 2;
	v->a[16819] = anon_sym_while;
	small_parse_table_841(v);
}

void	small_parse_table_841(t_small_parse_table_array *v)
{
	v->a[16820] = anon_sym_until;
	v->a[16821] = actions(25);
	v->a[16822] = 2;
	v->a[16823] = anon_sym_LT_AMP_DASH;
	v->a[16824] = anon_sym_GT_AMP_DASH;
	v->a[16825] = actions(33);
	v->a[16826] = 2;
	v->a[16827] = sym_raw_string;
	v->a[16828] = sym_number;
	v->a[16829] = state(323);
	v->a[16830] = 5;
	v->a[16831] = sym_arithmetic_expansion;
	v->a[16832] = sym_string;
	v->a[16833] = sym_simple_expansion;
	v->a[16834] = sym_expansion;
	v->a[16835] = sym_command_substitution;
	v->a[16836] = actions(23);
	v->a[16837] = 6;
	v->a[16838] = anon_sym_LT;
	v->a[16839] = anon_sym_GT;
	small_parse_table_842(v);
}

void	small_parse_table_842(t_small_parse_table_array *v)
{
	v->a[16840] = anon_sym_GT_GT;
	v->a[16841] = anon_sym_LT_AMP;
	v->a[16842] = anon_sym_GT_AMP;
	v->a[16843] = anon_sym_GT_PIPE;
	v->a[16844] = 42;
	v->a[16845] = actions(3);
	v->a[16846] = 1;
	v->a[16847] = sym_comment;
	v->a[16848] = actions(156);
	v->a[16849] = 1;
	v->a[16850] = sym_word;
	v->a[16851] = actions(158);
	v->a[16852] = 1;
	v->a[16853] = anon_sym_for;
	v->a[16854] = actions(162);
	v->a[16855] = 1;
	v->a[16856] = anon_sym_if;
	v->a[16857] = actions(164);
	v->a[16858] = 1;
	v->a[16859] = anon_sym_case;
	small_parse_table_843(v);
}

void	small_parse_table_843(t_small_parse_table_array *v)
{
	v->a[16860] = actions(166);
	v->a[16861] = 1;
	v->a[16862] = anon_sym_LPAREN;
	v->a[16863] = actions(168);
	v->a[16864] = 1;
	v->a[16865] = anon_sym_LBRACE;
	v->a[16866] = actions(170);
	v->a[16867] = 1;
	v->a[16868] = anon_sym_BANG;
	v->a[16869] = actions(176);
	v->a[16870] = 1;
	v->a[16871] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16872] = actions(178);
	v->a[16873] = 1;
	v->a[16874] = anon_sym_DOLLAR;
	v->a[16875] = actions(180);
	v->a[16876] = 1;
	v->a[16877] = anon_sym_DQUOTE;
	v->a[16878] = actions(184);
	v->a[16879] = 1;
	small_parse_table_844(v);
}

void	small_parse_table_844(t_small_parse_table_array *v)
{
	v->a[16880] = anon_sym_DOLLAR_LBRACE;
	v->a[16881] = actions(186);
	v->a[16882] = 1;
	v->a[16883] = anon_sym_DOLLAR_LPAREN;
	v->a[16884] = actions(188);
	v->a[16885] = 1;
	v->a[16886] = anon_sym_BQUOTE;
	v->a[16887] = actions(190);
	v->a[16888] = 1;
	v->a[16889] = sym_file_descriptor;
	v->a[16890] = actions(192);
	v->a[16891] = 1;
	v->a[16892] = sym_variable_name;
	v->a[16893] = state(131);
	v->a[16894] = 1;
	v->a[16895] = aux_sym__statements_repeat1;
	v->a[16896] = state(186);
	v->a[16897] = 1;
	v->a[16898] = sym_command_name;
	v->a[16899] = state(214);
	small_parse_table_845(v);
}

/* EOF small_parse_table_168.c */
