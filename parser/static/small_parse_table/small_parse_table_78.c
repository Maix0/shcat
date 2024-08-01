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
	v->a[7800] = sym_raw_string;
	v->a[7801] = sym_number;
	v->a[7802] = actions(51);
	v->a[7803] = 3;
	v->a[7804] = anon_sym_LT;
	v->a[7805] = anon_sym_GT;
	v->a[7806] = anon_sym_GT_GT;
	v->a[7807] = state(401);
	v->a[7808] = 5;
	v->a[7809] = sym_arithmetic_expansion;
	v->a[7810] = sym_string;
	v->a[7811] = sym_simple_expansion;
	v->a[7812] = sym_expansion;
	v->a[7813] = sym_command_substitution;
	v->a[7814] = state(955);
	v->a[7815] = 12;
	v->a[7816] = sym_redirected_statement;
	v->a[7817] = sym_for_statement;
	v->a[7818] = sym_while_statement;
	v->a[7819] = sym_if_statement;
	small_parse_table_391(v);
}

void	small_parse_table_391(t_small_parse_table_array *v)
{
	v->a[7820] = sym_case_statement;
	v->a[7821] = sym_function_definition;
	v->a[7822] = sym_compound_statement;
	v->a[7823] = sym_subshell;
	v->a[7824] = sym_list;
	v->a[7825] = sym_negated_command;
	v->a[7826] = sym_command;
	v->a[7827] = sym__variable_assignments;
	v->a[7828] = 30;
	v->a[7829] = actions(3);
	v->a[7830] = 1;
	v->a[7831] = sym_comment;
	v->a[7832] = actions(9);
	v->a[7833] = 1;
	v->a[7834] = anon_sym_for;
	v->a[7835] = actions(13);
	v->a[7836] = 1;
	v->a[7837] = anon_sym_if;
	v->a[7838] = actions(15);
	v->a[7839] = 1;
	small_parse_table_392(v);
}

void	small_parse_table_392(t_small_parse_table_array *v)
{
	v->a[7840] = anon_sym_case;
	v->a[7841] = actions(17);
	v->a[7842] = 1;
	v->a[7843] = anon_sym_LPAREN;
	v->a[7844] = actions(19);
	v->a[7845] = 1;
	v->a[7846] = anon_sym_LBRACE;
	v->a[7847] = actions(41);
	v->a[7848] = 1;
	v->a[7849] = sym_word;
	v->a[7850] = actions(49);
	v->a[7851] = 1;
	v->a[7852] = anon_sym_BANG;
	v->a[7853] = actions(53);
	v->a[7854] = 1;
	v->a[7855] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7856] = actions(55);
	v->a[7857] = 1;
	v->a[7858] = anon_sym_DOLLAR;
	v->a[7859] = actions(57);
	small_parse_table_393(v);
}

void	small_parse_table_393(t_small_parse_table_array *v)
{
	v->a[7860] = 1;
	v->a[7861] = anon_sym_DQUOTE;
	v->a[7862] = actions(61);
	v->a[7863] = 1;
	v->a[7864] = anon_sym_DOLLAR_LBRACE;
	v->a[7865] = actions(63);
	v->a[7866] = 1;
	v->a[7867] = anon_sym_DOLLAR_LPAREN;
	v->a[7868] = actions(65);
	v->a[7869] = 1;
	v->a[7870] = anon_sym_BQUOTE;
	v->a[7871] = actions(67);
	v->a[7872] = 1;
	v->a[7873] = sym_variable_name;
	v->a[7874] = actions(232);
	v->a[7875] = 1;
	v->a[7876] = anon_sym_done;
	v->a[7877] = state(72);
	v->a[7878] = 1;
	v->a[7879] = aux_sym__terminated_statement;
	small_parse_table_394(v);
}

void	small_parse_table_394(t_small_parse_table_array *v)
{
	v->a[7880] = state(185);
	v->a[7881] = 1;
	v->a[7882] = sym_command_name;
	v->a[7883] = state(237);
	v->a[7884] = 1;
	v->a[7885] = sym_variable_assignment;
	v->a[7886] = state(411);
	v->a[7887] = 1;
	v->a[7888] = aux_sym_command_repeat1;
	v->a[7889] = state(551);
	v->a[7890] = 1;
	v->a[7891] = sym_file_redirect;
	v->a[7892] = state(555);
	v->a[7893] = 1;
	v->a[7894] = sym_concatenation;
	v->a[7895] = state(1059);
	v->a[7896] = 1;
	v->a[7897] = sym_pipeline;
	v->a[7898] = state(1126);
	v->a[7899] = 1;
	small_parse_table_395(v);
}

/* EOF small_parse_table_78.c */
