/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_768.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3840(t_small_parse_table_array *v)
{
	v->a[76800] = sym_number;
	v->a[76801] = anon_sym_DOLLAR_LBRACE;
	v->a[76802] = anon_sym_DOLLAR_LPAREN;
	v->a[76803] = anon_sym_BQUOTE;
	v->a[76804] = sym_word;
	v->a[76805] = 4;
	v->a[76806] = actions(3);
	v->a[76807] = 1;
	v->a[76808] = sym_comment;
	v->a[76809] = actions(381);
	v->a[76810] = 1;
	v->a[76811] = sym_variable_name;
	v->a[76812] = actions(379);
	v->a[76813] = 2;
	v->a[76814] = aux_sym__simple_variable_name_token1;
	v->a[76815] = aux_sym__multiline_variable_name_token1;
	v->a[76816] = actions(377);
	v->a[76817] = 9;
	v->a[76818] = anon_sym_BANG;
	v->a[76819] = anon_sym_DASH;
	small_parse_table_3841(v);
}

void	small_parse_table_3841(t_small_parse_table_array *v)
{
	v->a[76820] = anon_sym_STAR;
	v->a[76821] = anon_sym_QMARK;
	v->a[76822] = anon_sym_DOLLAR;
	v->a[76823] = anon_sym_POUND;
	v->a[76824] = anon_sym_AT;
	v->a[76825] = anon_sym_0;
	v->a[76826] = anon_sym__;
	v->a[76827] = 10;
	v->a[76828] = actions(3);
	v->a[76829] = 1;
	v->a[76830] = sym_comment;
	v->a[76831] = actions(3071);
	v->a[76832] = 1;
	v->a[76833] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76834] = actions(3077);
	v->a[76835] = 1;
	v->a[76836] = sym_string_content;
	v->a[76837] = actions(3079);
	v->a[76838] = 1;
	v->a[76839] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3842(v);
}

void	small_parse_table_3842(t_small_parse_table_array *v)
{
	v->a[76840] = actions(3081);
	v->a[76841] = 1;
	v->a[76842] = anon_sym_DOLLAR_LPAREN;
	v->a[76843] = actions(3083);
	v->a[76844] = 1;
	v->a[76845] = anon_sym_BQUOTE;
	v->a[76846] = actions(3157);
	v->a[76847] = 1;
	v->a[76848] = anon_sym_DOLLAR;
	v->a[76849] = actions(3159);
	v->a[76850] = 1;
	v->a[76851] = anon_sym_DQUOTE;
	v->a[76852] = state(1618);
	v->a[76853] = 1;
	v->a[76854] = aux_sym_string_repeat1;
	v->a[76855] = state(1739);
	v->a[76856] = 4;
	v->a[76857] = sym_arithmetic_expansion;
	v->a[76858] = sym_simple_expansion;
	v->a[76859] = sym_expansion;
	small_parse_table_3843(v);
}

void	small_parse_table_3843(t_small_parse_table_array *v)
{
	v->a[76860] = sym_command_substitution;
	v->a[76861] = 4;
	v->a[76862] = actions(3);
	v->a[76863] = 1;
	v->a[76864] = sym_comment;
	v->a[76865] = actions(429);
	v->a[76866] = 1;
	v->a[76867] = sym_variable_name;
	v->a[76868] = actions(427);
	v->a[76869] = 2;
	v->a[76870] = aux_sym__simple_variable_name_token1;
	v->a[76871] = aux_sym__multiline_variable_name_token1;
	v->a[76872] = actions(425);
	v->a[76873] = 9;
	v->a[76874] = anon_sym_BANG;
	v->a[76875] = anon_sym_DASH;
	v->a[76876] = anon_sym_STAR;
	v->a[76877] = anon_sym_QMARK;
	v->a[76878] = anon_sym_DOLLAR;
	v->a[76879] = anon_sym_POUND;
	small_parse_table_3844(v);
}

void	small_parse_table_3844(t_small_parse_table_array *v)
{
	v->a[76880] = anon_sym_AT;
	v->a[76881] = anon_sym_0;
	v->a[76882] = anon_sym__;
	v->a[76883] = 4;
	v->a[76884] = actions(3);
	v->a[76885] = 1;
	v->a[76886] = sym_comment;
	v->a[76887] = actions(375);
	v->a[76888] = 1;
	v->a[76889] = sym_variable_name;
	v->a[76890] = actions(373);
	v->a[76891] = 2;
	v->a[76892] = aux_sym__simple_variable_name_token1;
	v->a[76893] = aux_sym__multiline_variable_name_token1;
	v->a[76894] = actions(371);
	v->a[76895] = 9;
	v->a[76896] = anon_sym_BANG;
	v->a[76897] = anon_sym_DASH;
	v->a[76898] = anon_sym_STAR;
	v->a[76899] = anon_sym_QMARK;
	small_parse_table_3845(v);
}

/* EOF small_parse_table_768.c */
