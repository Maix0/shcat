/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1148.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5740(t_small_parse_table_array *v)
{
	v->a[114800] = sym_raw_string;
	v->a[114801] = state(3425);
	v->a[114802] = 7;
	v->a[114803] = sym_arithmetic_expansion;
	v->a[114804] = sym_brace_expression;
	v->a[114805] = sym_string;
	v->a[114806] = sym_number;
	v->a[114807] = sym_simple_expansion;
	v->a[114808] = sym_expansion;
	v->a[114809] = sym_command_substitution;
	v->a[114810] = 16;
	v->a[114811] = actions(3);
	v->a[114812] = 1;
	v->a[114813] = sym_comment;
	v->a[114814] = actions(929);
	v->a[114815] = 1;
	v->a[114816] = aux_sym_number_token1;
	v->a[114817] = actions(931);
	v->a[114818] = 1;
	v->a[114819] = aux_sym_number_token2;
	small_parse_table_5741(v);
}

void	small_parse_table_5741(t_small_parse_table_array *v)
{
	v->a[114820] = actions(935);
	v->a[114821] = 1;
	v->a[114822] = anon_sym_DOLLAR_LPAREN;
	v->a[114823] = actions(945);
	v->a[114824] = 1;
	v->a[114825] = sym__brace_start;
	v->a[114826] = actions(6685);
	v->a[114827] = 1;
	v->a[114828] = sym_word;
	v->a[114829] = actions(6687);
	v->a[114830] = 1;
	v->a[114831] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114832] = actions(6689);
	v->a[114833] = 1;
	v->a[114834] = anon_sym_DOLLAR;
	v->a[114835] = actions(6691);
	v->a[114836] = 1;
	v->a[114837] = sym__special_character;
	v->a[114838] = actions(6693);
	v->a[114839] = 1;
	small_parse_table_5742(v);
}

void	small_parse_table_5742(t_small_parse_table_array *v)
{
	v->a[114840] = anon_sym_DQUOTE;
	v->a[114841] = actions(6697);
	v->a[114842] = 1;
	v->a[114843] = anon_sym_DOLLAR_LBRACE;
	v->a[114844] = actions(6699);
	v->a[114845] = 1;
	v->a[114846] = anon_sym_BQUOTE;
	v->a[114847] = actions(6701);
	v->a[114848] = 1;
	v->a[114849] = anon_sym_DOLLAR_BQUOTE;
	v->a[114850] = actions(6703);
	v->a[114851] = 1;
	v->a[114852] = sym__comment_word;
	v->a[114853] = actions(6695);
	v->a[114854] = 3;
	v->a[114855] = sym_test_operator;
	v->a[114856] = sym__bare_dollar;
	v->a[114857] = sym_raw_string;
	v->a[114858] = state(866);
	v->a[114859] = 7;
	small_parse_table_5743(v);
}

void	small_parse_table_5743(t_small_parse_table_array *v)
{
	v->a[114860] = sym_arithmetic_expansion;
	v->a[114861] = sym_brace_expression;
	v->a[114862] = sym_string;
	v->a[114863] = sym_number;
	v->a[114864] = sym_simple_expansion;
	v->a[114865] = sym_expansion;
	v->a[114866] = sym_command_substitution;
	v->a[114867] = 16;
	v->a[114868] = actions(3);
	v->a[114869] = 1;
	v->a[114870] = sym_comment;
	v->a[114871] = actions(4340);
	v->a[114872] = 1;
	v->a[114873] = anon_sym_DOLLAR;
	v->a[114874] = actions(4346);
	v->a[114875] = 1;
	v->a[114876] = aux_sym_number_token1;
	v->a[114877] = actions(4348);
	v->a[114878] = 1;
	v->a[114879] = aux_sym_number_token2;
	small_parse_table_5744(v);
}

void	small_parse_table_5744(t_small_parse_table_array *v)
{
	v->a[114880] = actions(4352);
	v->a[114881] = 1;
	v->a[114882] = anon_sym_DOLLAR_LPAREN;
	v->a[114883] = actions(4362);
	v->a[114884] = 1;
	v->a[114885] = sym__brace_start;
	v->a[114886] = actions(4550);
	v->a[114887] = 1;
	v->a[114888] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114889] = actions(4554);
	v->a[114890] = 1;
	v->a[114891] = anon_sym_DQUOTE;
	v->a[114892] = actions(4556);
	v->a[114893] = 1;
	v->a[114894] = anon_sym_DOLLAR_LBRACE;
	v->a[114895] = actions(4558);
	v->a[114896] = 1;
	v->a[114897] = anon_sym_BQUOTE;
	v->a[114898] = actions(4560);
	v->a[114899] = 1;
	small_parse_table_5745(v);
}

/* EOF small_parse_table_1148.c */
