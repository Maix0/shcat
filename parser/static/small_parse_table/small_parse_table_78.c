/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_78.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_390(t_small_parse_table_array *v)
{
	v->a[7800] = 1;
	v->a[7801] = sym_variable_name;
	v->a[7802] = actions(202);
	v->a[7803] = 1;
	v->a[7804] = sym_word;
	v->a[7805] = actions(204);
	v->a[7806] = 1;
	v->a[7807] = anon_sym_BANG;
	v->a[7808] = state(119);
	v->a[7809] = 1;
	v->a[7810] = aux_sym__statements_repeat1;
	v->a[7811] = state(272);
	v->a[7812] = 1;
	v->a[7813] = sym_command_name;
	v->a[7814] = state(283);
	v->a[7815] = 1;
	v->a[7816] = sym_variable_assignment;
	v->a[7817] = state(486);
	v->a[7818] = 1;
	v->a[7819] = aux_sym_command_repeat1;
	small_parse_table_391(v);
}

void	small_parse_table_391(t_small_parse_table_array *v)
{
	v->a[7820] = state(602);
	v->a[7821] = 1;
	v->a[7822] = sym_concatenation;
	v->a[7823] = state(636);
	v->a[7824] = 1;
	v->a[7825] = sym_file_redirect;
	v->a[7826] = state(951);
	v->a[7827] = 1;
	v->a[7828] = sym_pipeline;
	v->a[7829] = state(1006);
	v->a[7830] = 1;
	v->a[7831] = aux_sym_redirected_statement_repeat2;
	v->a[7832] = state(1605);
	v->a[7833] = 1;
	v->a[7834] = sym__statement_not_pipeline;
	v->a[7835] = state(1686);
	v->a[7836] = 1;
	v->a[7837] = sym__statements;
	v->a[7838] = actions(11);
	v->a[7839] = 2;
	small_parse_table_392(v);
}

void	small_parse_table_392(t_small_parse_table_array *v)
{
	v->a[7840] = anon_sym_while;
	v->a[7841] = anon_sym_until;
	v->a[7842] = actions(59);
	v->a[7843] = 2;
	v->a[7844] = sym_raw_string;
	v->a[7845] = sym_number;
	v->a[7846] = state(425);
	v->a[7847] = 5;
	v->a[7848] = sym_arithmetic_expansion;
	v->a[7849] = sym_string;
	v->a[7850] = sym_simple_expansion;
	v->a[7851] = sym_expansion;
	v->a[7852] = sym_command_substitution;
	v->a[7853] = actions(51);
	v->a[7854] = 7;
	v->a[7855] = anon_sym_LT;
	v->a[7856] = anon_sym_GT;
	v->a[7857] = anon_sym_GT_GT;
	v->a[7858] = anon_sym_LT_AMP;
	v->a[7859] = anon_sym_GT_AMP;
	small_parse_table_393(v);
}

void	small_parse_table_393(t_small_parse_table_array *v)
{
	v->a[7860] = anon_sym_GT_PIPE;
	v->a[7861] = anon_sym_LT_GT;
	v->a[7862] = state(849);
	v->a[7863] = 12;
	v->a[7864] = sym_redirected_statement;
	v->a[7865] = sym_for_statement;
	v->a[7866] = sym_while_statement;
	v->a[7867] = sym_if_statement;
	v->a[7868] = sym_case_statement;
	v->a[7869] = sym_function_definition;
	v->a[7870] = sym_compound_statement;
	v->a[7871] = sym_subshell;
	v->a[7872] = sym_list;
	v->a[7873] = sym_negated_command;
	v->a[7874] = sym_command;
	v->a[7875] = sym__variable_assignments;
	v->a[7876] = 30;
	v->a[7877] = actions(3);
	v->a[7878] = 1;
	v->a[7879] = sym_comment;
	small_parse_table_394(v);
}

void	small_parse_table_394(t_small_parse_table_array *v)
{
	v->a[7880] = actions(9);
	v->a[7881] = 1;
	v->a[7882] = anon_sym_for;
	v->a[7883] = actions(13);
	v->a[7884] = 1;
	v->a[7885] = anon_sym_if;
	v->a[7886] = actions(15);
	v->a[7887] = 1;
	v->a[7888] = anon_sym_case;
	v->a[7889] = actions(17);
	v->a[7890] = 1;
	v->a[7891] = anon_sym_LPAREN;
	v->a[7892] = actions(19);
	v->a[7893] = 1;
	v->a[7894] = anon_sym_LBRACE;
	v->a[7895] = actions(53);
	v->a[7896] = 1;
	v->a[7897] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7898] = actions(55);
	v->a[7899] = 1;
	small_parse_table_395(v);
}

/* EOF small_parse_table_78.c */
