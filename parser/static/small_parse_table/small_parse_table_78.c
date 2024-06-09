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
	v->a[7800] = actions(15);
	v->a[7801] = 1;
	v->a[7802] = anon_sym_case;
	v->a[7803] = actions(17);
	v->a[7804] = 1;
	v->a[7805] = anon_sym_LPAREN;
	v->a[7806] = actions(19);
	v->a[7807] = 1;
	v->a[7808] = anon_sym_LBRACE;
	v->a[7809] = actions(63);
	v->a[7810] = 1;
	v->a[7811] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7812] = actions(65);
	v->a[7813] = 1;
	v->a[7814] = anon_sym_DOLLAR;
	v->a[7815] = actions(67);
	v->a[7816] = 1;
	v->a[7817] = anon_sym_DQUOTE;
	v->a[7818] = actions(71);
	v->a[7819] = 1;
	small_parse_table_391(v);
}

void	small_parse_table_391(t_small_parse_table_array *v)
{
	v->a[7820] = aux_sym_number_token1;
	v->a[7821] = actions(73);
	v->a[7822] = 1;
	v->a[7823] = aux_sym_number_token2;
	v->a[7824] = actions(75);
	v->a[7825] = 1;
	v->a[7826] = anon_sym_DOLLAR_LBRACE;
	v->a[7827] = actions(77);
	v->a[7828] = 1;
	v->a[7829] = anon_sym_DOLLAR_LPAREN;
	v->a[7830] = actions(79);
	v->a[7831] = 1;
	v->a[7832] = anon_sym_BQUOTE;
	v->a[7833] = actions(248);
	v->a[7834] = 1;
	v->a[7835] = sym_word;
	v->a[7836] = actions(250);
	v->a[7837] = 1;
	v->a[7838] = anon_sym_BANG;
	v->a[7839] = actions(256);
	small_parse_table_392(v);
}

void	small_parse_table_392(t_small_parse_table_array *v)
{
	v->a[7840] = 1;
	v->a[7841] = sym_raw_string;
	v->a[7842] = actions(258);
	v->a[7843] = 1;
	v->a[7844] = sym_file_descriptor;
	v->a[7845] = actions(260);
	v->a[7846] = 1;
	v->a[7847] = sym_variable_name;
	v->a[7848] = state(141);
	v->a[7849] = 1;
	v->a[7850] = aux_sym__statements_repeat1;
	v->a[7851] = state(175);
	v->a[7852] = 1;
	v->a[7853] = sym_command_name;
	v->a[7854] = state(278);
	v->a[7855] = 1;
	v->a[7856] = sym_variable_assignment;
	v->a[7857] = state(567);
	v->a[7858] = 1;
	v->a[7859] = aux_sym_command_repeat1;
	small_parse_table_393(v);
}

void	small_parse_table_393(t_small_parse_table_array *v)
{
	v->a[7860] = state(582);
	v->a[7861] = 1;
	v->a[7862] = sym_concatenation;
	v->a[7863] = state(719);
	v->a[7864] = 1;
	v->a[7865] = sym_file_redirect;
	v->a[7866] = state(1100);
	v->a[7867] = 1;
	v->a[7868] = sym_pipeline;
	v->a[7869] = state(1196);
	v->a[7870] = 1;
	v->a[7871] = aux_sym_redirected_statement_repeat2;
	v->a[7872] = state(2037);
	v->a[7873] = 1;
	v->a[7874] = sym__statement_not_pipeline;
	v->a[7875] = state(2233);
	v->a[7876] = 1;
	v->a[7877] = sym__statements;
	v->a[7878] = actions(11);
	v->a[7879] = 2;
	small_parse_table_394(v);
}

void	small_parse_table_394(t_small_parse_table_array *v)
{
	v->a[7880] = anon_sym_while;
	v->a[7881] = anon_sym_until;
	v->a[7882] = actions(254);
	v->a[7883] = 2;
	v->a[7884] = anon_sym_LT_AMP_DASH;
	v->a[7885] = anon_sym_GT_AMP_DASH;
	v->a[7886] = state(295);
	v->a[7887] = 6;
	v->a[7888] = sym_arithmetic_expansion;
	v->a[7889] = sym_string;
	v->a[7890] = sym_number;
	v->a[7891] = sym_simple_expansion;
	v->a[7892] = sym_expansion;
	v->a[7893] = sym_command_substitution;
	v->a[7894] = actions(252);
	v->a[7895] = 8;
	v->a[7896] = anon_sym_LT;
	v->a[7897] = anon_sym_GT;
	v->a[7898] = anon_sym_GT_GT;
	v->a[7899] = anon_sym_AMP_GT;
	small_parse_table_395(v);
}

/* EOF small_parse_table_78.c */
