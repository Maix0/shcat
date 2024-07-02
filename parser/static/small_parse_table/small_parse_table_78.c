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
	v->a[7801] = aux_sym_redirected_statement_repeat2;
	v->a[7802] = state(1911);
	v->a[7803] = 1;
	v->a[7804] = sym__statement_not_pipeline;
	v->a[7805] = actions(11);
	v->a[7806] = 2;
	v->a[7807] = anon_sym_while;
	v->a[7808] = anon_sym_until;
	v->a[7809] = actions(61);
	v->a[7810] = 2;
	v->a[7811] = sym_raw_string;
	v->a[7812] = sym_number;
	v->a[7813] = state(433);
	v->a[7814] = 5;
	v->a[7815] = sym_arithmetic_expansion;
	v->a[7816] = sym_string;
	v->a[7817] = sym_simple_expansion;
	v->a[7818] = sym_expansion;
	v->a[7819] = sym_command_substitution;
	small_parse_table_391(v);
}

void	small_parse_table_391(t_small_parse_table_array *v)
{
	v->a[7820] = actions(53);
	v->a[7821] = 7;
	v->a[7822] = anon_sym_LT;
	v->a[7823] = anon_sym_GT;
	v->a[7824] = anon_sym_GT_GT;
	v->a[7825] = anon_sym_LT_AMP;
	v->a[7826] = anon_sym_GT_AMP;
	v->a[7827] = anon_sym_GT_PIPE;
	v->a[7828] = anon_sym_LT_GT;
	v->a[7829] = state(1077);
	v->a[7830] = 12;
	v->a[7831] = sym_redirected_statement;
	v->a[7832] = sym_for_statement;
	v->a[7833] = sym_while_statement;
	v->a[7834] = sym_if_statement;
	v->a[7835] = sym_case_statement;
	v->a[7836] = sym_function_definition;
	v->a[7837] = sym_compound_statement;
	v->a[7838] = sym_subshell;
	v->a[7839] = sym_list;
	small_parse_table_392(v);
}

void	small_parse_table_392(t_small_parse_table_array *v)
{
	v->a[7840] = sym_negated_command;
	v->a[7841] = sym_command;
	v->a[7842] = sym__variable_assignments;
	v->a[7843] = 31;
	v->a[7844] = actions(3);
	v->a[7845] = 1;
	v->a[7846] = sym_comment;
	v->a[7847] = actions(9);
	v->a[7848] = 1;
	v->a[7849] = anon_sym_for;
	v->a[7850] = actions(13);
	v->a[7851] = 1;
	v->a[7852] = anon_sym_if;
	v->a[7853] = actions(15);
	v->a[7854] = 1;
	v->a[7855] = anon_sym_case;
	v->a[7856] = actions(17);
	v->a[7857] = 1;
	v->a[7858] = anon_sym_LPAREN;
	v->a[7859] = actions(19);
	small_parse_table_393(v);
}

void	small_parse_table_393(t_small_parse_table_array *v)
{
	v->a[7860] = 1;
	v->a[7861] = anon_sym_LBRACE;
	v->a[7862] = actions(55);
	v->a[7863] = 1;
	v->a[7864] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7865] = actions(57);
	v->a[7866] = 1;
	v->a[7867] = anon_sym_DOLLAR;
	v->a[7868] = actions(59);
	v->a[7869] = 1;
	v->a[7870] = anon_sym_DQUOTE;
	v->a[7871] = actions(63);
	v->a[7872] = 1;
	v->a[7873] = anon_sym_DOLLAR_LBRACE;
	v->a[7874] = actions(65);
	v->a[7875] = 1;
	v->a[7876] = anon_sym_DOLLAR_LPAREN;
	v->a[7877] = actions(67);
	v->a[7878] = 1;
	v->a[7879] = anon_sym_BQUOTE;
	small_parse_table_394(v);
}

void	small_parse_table_394(t_small_parse_table_array *v)
{
	v->a[7880] = actions(211);
	v->a[7881] = 1;
	v->a[7882] = sym_word;
	v->a[7883] = actions(213);
	v->a[7884] = 1;
	v->a[7885] = anon_sym_BANG;
	v->a[7886] = actions(219);
	v->a[7887] = 1;
	v->a[7888] = sym_file_descriptor;
	v->a[7889] = actions(221);
	v->a[7890] = 1;
	v->a[7891] = sym_variable_name;
	v->a[7892] = state(120);
	v->a[7893] = 1;
	v->a[7894] = aux_sym__statements_repeat1;
	v->a[7895] = state(177);
	v->a[7896] = 1;
	v->a[7897] = sym_command_name;
	v->a[7898] = state(208);
	v->a[7899] = 1;
	small_parse_table_395(v);
}

/* EOF small_parse_table_78.c */
