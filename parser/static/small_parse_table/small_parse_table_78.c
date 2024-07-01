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
	v->a[7801] = sym_comment;
	v->a[7802] = actions(9);
	v->a[7803] = 1;
	v->a[7804] = anon_sym_for;
	v->a[7805] = actions(13);
	v->a[7806] = 1;
	v->a[7807] = anon_sym_if;
	v->a[7808] = actions(15);
	v->a[7809] = 1;
	v->a[7810] = anon_sym_case;
	v->a[7811] = actions(17);
	v->a[7812] = 1;
	v->a[7813] = anon_sym_LPAREN;
	v->a[7814] = actions(19);
	v->a[7815] = 1;
	v->a[7816] = anon_sym_LBRACE;
	v->a[7817] = actions(59);
	v->a[7818] = 1;
	v->a[7819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_391(v);
}

void	small_parse_table_391(t_small_parse_table_array *v)
{
	v->a[7820] = actions(61);
	v->a[7821] = 1;
	v->a[7822] = anon_sym_DOLLAR;
	v->a[7823] = actions(63);
	v->a[7824] = 1;
	v->a[7825] = anon_sym_DQUOTE;
	v->a[7826] = actions(67);
	v->a[7827] = 1;
	v->a[7828] = anon_sym_DOLLAR_LBRACE;
	v->a[7829] = actions(69);
	v->a[7830] = 1;
	v->a[7831] = anon_sym_DOLLAR_LPAREN;
	v->a[7832] = actions(71);
	v->a[7833] = 1;
	v->a[7834] = anon_sym_BQUOTE;
	v->a[7835] = actions(73);
	v->a[7836] = 1;
	v->a[7837] = sym_file_descriptor;
	v->a[7838] = actions(75);
	v->a[7839] = 1;
	small_parse_table_392(v);
}

void	small_parse_table_392(t_small_parse_table_array *v)
{
	v->a[7840] = sym_variable_name;
	v->a[7841] = actions(240);
	v->a[7842] = 1;
	v->a[7843] = sym_word;
	v->a[7844] = actions(242);
	v->a[7845] = 1;
	v->a[7846] = anon_sym_BANG;
	v->a[7847] = state(136);
	v->a[7848] = 1;
	v->a[7849] = aux_sym__statements_repeat1;
	v->a[7850] = state(188);
	v->a[7851] = 1;
	v->a[7852] = sym_command_name;
	v->a[7853] = state(297);
	v->a[7854] = 1;
	v->a[7855] = sym_variable_assignment;
	v->a[7856] = state(650);
	v->a[7857] = 1;
	v->a[7858] = sym_concatenation;
	v->a[7859] = state(749);
	small_parse_table_393(v);
}

void	small_parse_table_393(t_small_parse_table_array *v)
{
	v->a[7860] = 1;
	v->a[7861] = aux_sym_command_repeat1;
	v->a[7862] = state(795);
	v->a[7863] = 1;
	v->a[7864] = sym_file_redirect;
	v->a[7865] = state(1154);
	v->a[7866] = 1;
	v->a[7867] = sym_pipeline;
	v->a[7868] = state(1240);
	v->a[7869] = 1;
	v->a[7870] = aux_sym_redirected_statement_repeat2;
	v->a[7871] = state(2119);
	v->a[7872] = 1;
	v->a[7873] = sym__statement_not_pipeline;
	v->a[7874] = state(2171);
	v->a[7875] = 1;
	v->a[7876] = sym__statements;
	v->a[7877] = actions(11);
	v->a[7878] = 2;
	v->a[7879] = anon_sym_while;
	small_parse_table_394(v);
}

void	small_parse_table_394(t_small_parse_table_array *v)
{
	v->a[7880] = anon_sym_until;
	v->a[7881] = actions(57);
	v->a[7882] = 2;
	v->a[7883] = anon_sym_LT_AMP_DASH;
	v->a[7884] = anon_sym_GT_AMP_DASH;
	v->a[7885] = actions(65);
	v->a[7886] = 2;
	v->a[7887] = sym_raw_string;
	v->a[7888] = sym_number;
	v->a[7889] = state(443);
	v->a[7890] = 5;
	v->a[7891] = sym_arithmetic_expansion;
	v->a[7892] = sym_string;
	v->a[7893] = sym_simple_expansion;
	v->a[7894] = sym_expansion;
	v->a[7895] = sym_command_substitution;
	v->a[7896] = actions(55);
	v->a[7897] = 6;
	v->a[7898] = anon_sym_LT;
	v->a[7899] = anon_sym_GT;
	small_parse_table_395(v);
}

/* EOF small_parse_table_78.c */
