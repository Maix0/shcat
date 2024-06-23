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
	v->a[7800] = sym_command;
	v->a[7801] = sym__variable_assignments;
	v->a[7802] = 32;
	v->a[7803] = actions(3);
	v->a[7804] = 1;
	v->a[7805] = sym_comment;
	v->a[7806] = actions(9);
	v->a[7807] = 1;
	v->a[7808] = anon_sym_for;
	v->a[7809] = actions(13);
	v->a[7810] = 1;
	v->a[7811] = anon_sym_if;
	v->a[7812] = actions(15);
	v->a[7813] = 1;
	v->a[7814] = anon_sym_case;
	v->a[7815] = actions(17);
	v->a[7816] = 1;
	v->a[7817] = anon_sym_LPAREN;
	v->a[7818] = actions(19);
	v->a[7819] = 1;
	small_parse_table_391(v);
}

void	small_parse_table_391(t_small_parse_table_array *v)
{
	v->a[7820] = anon_sym_LBRACE;
	v->a[7821] = actions(59);
	v->a[7822] = 1;
	v->a[7823] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7824] = actions(61);
	v->a[7825] = 1;
	v->a[7826] = anon_sym_DOLLAR;
	v->a[7827] = actions(63);
	v->a[7828] = 1;
	v->a[7829] = anon_sym_DQUOTE;
	v->a[7830] = actions(67);
	v->a[7831] = 1;
	v->a[7832] = anon_sym_DOLLAR_LBRACE;
	v->a[7833] = actions(69);
	v->a[7834] = 1;
	v->a[7835] = anon_sym_DOLLAR_LPAREN;
	v->a[7836] = actions(71);
	v->a[7837] = 1;
	v->a[7838] = anon_sym_BQUOTE;
	v->a[7839] = actions(220);
	small_parse_table_392(v);
}

void	small_parse_table_392(t_small_parse_table_array *v)
{
	v->a[7840] = 1;
	v->a[7841] = sym_word;
	v->a[7842] = actions(222);
	v->a[7843] = 1;
	v->a[7844] = anon_sym_BANG;
	v->a[7845] = actions(230);
	v->a[7846] = 1;
	v->a[7847] = sym_file_descriptor;
	v->a[7848] = actions(232);
	v->a[7849] = 1;
	v->a[7850] = sym_variable_name;
	v->a[7851] = state(126);
	v->a[7852] = 1;
	v->a[7853] = aux_sym__statements_repeat1;
	v->a[7854] = state(184);
	v->a[7855] = 1;
	v->a[7856] = sym_command_name;
	v->a[7857] = state(268);
	v->a[7858] = 1;
	v->a[7859] = sym_variable_assignment;
	small_parse_table_393(v);
}

void	small_parse_table_393(t_small_parse_table_array *v)
{
	v->a[7860] = state(647);
	v->a[7861] = 1;
	v->a[7862] = sym_concatenation;
	v->a[7863] = state(763);
	v->a[7864] = 1;
	v->a[7865] = sym_file_redirect;
	v->a[7866] = state(828);
	v->a[7867] = 1;
	v->a[7868] = aux_sym_command_repeat1;
	v->a[7869] = state(1314);
	v->a[7870] = 1;
	v->a[7871] = sym_pipeline;
	v->a[7872] = state(1331);
	v->a[7873] = 1;
	v->a[7874] = aux_sym_redirected_statement_repeat2;
	v->a[7875] = state(2252);
	v->a[7876] = 1;
	v->a[7877] = sym__statement_not_pipeline;
	v->a[7878] = state(2307);
	v->a[7879] = 1;
	small_parse_table_394(v);
}

void	small_parse_table_394(t_small_parse_table_array *v)
{
	v->a[7880] = sym__statements;
	v->a[7881] = actions(11);
	v->a[7882] = 2;
	v->a[7883] = anon_sym_while;
	v->a[7884] = anon_sym_until;
	v->a[7885] = actions(226);
	v->a[7886] = 2;
	v->a[7887] = anon_sym_LT_AMP_DASH;
	v->a[7888] = anon_sym_GT_AMP_DASH;
	v->a[7889] = actions(228);
	v->a[7890] = 2;
	v->a[7891] = sym_raw_string;
	v->a[7892] = sym_number;
	v->a[7893] = state(294);
	v->a[7894] = 5;
	v->a[7895] = sym_arithmetic_expansion;
	v->a[7896] = sym_string;
	v->a[7897] = sym_simple_expansion;
	v->a[7898] = sym_expansion;
	v->a[7899] = sym_command_substitution;
	small_parse_table_395(v);
}

/* EOF small_parse_table_78.c */
