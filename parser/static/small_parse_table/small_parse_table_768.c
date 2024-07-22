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
	v->a[76800] = anon_sym_DOLLAR_LBRACE;
	v->a[76801] = actions(3068);
	v->a[76802] = 1;
	v->a[76803] = anon_sym_DOLLAR_LPAREN;
	v->a[76804] = actions(3070);
	v->a[76805] = 1;
	v->a[76806] = anon_sym_BQUOTE;
	v->a[76807] = actions(3300);
	v->a[76808] = 1;
	v->a[76809] = anon_sym_DOLLAR;
	v->a[76810] = actions(3302);
	v->a[76811] = 1;
	v->a[76812] = anon_sym_DQUOTE;
	v->a[76813] = state(1653);
	v->a[76814] = 1;
	v->a[76815] = aux_sym_string_repeat1;
	v->a[76816] = state(1748);
	v->a[76817] = 4;
	v->a[76818] = sym_arithmetic_expansion;
	v->a[76819] = sym_simple_expansion;
	small_parse_table_3841(v);
}

void	small_parse_table_3841(t_small_parse_table_array *v)
{
	v->a[76820] = sym_expansion;
	v->a[76821] = sym_command_substitution;
	v->a[76822] = 8;
	v->a[76823] = actions(3);
	v->a[76824] = 1;
	v->a[76825] = sym_comment;
	v->a[76826] = actions(3040);
	v->a[76827] = 1;
	v->a[76828] = anon_sym_POUND;
	v->a[76829] = actions(3042);
	v->a[76830] = 1;
	v->a[76831] = aux_sym__simple_variable_name_token1;
	v->a[76832] = actions(3044);
	v->a[76833] = 1;
	v->a[76834] = anon_sym_0;
	v->a[76835] = actions(3046);
	v->a[76836] = 1;
	v->a[76837] = sym_variable_name;
	v->a[76838] = actions(3304);
	v->a[76839] = 1;
	small_parse_table_3842(v);
}

void	small_parse_table_3842(t_small_parse_table_array *v)
{
	v->a[76840] = anon_sym_RBRACE;
	v->a[76841] = state(2133);
	v->a[76842] = 1;
	v->a[76843] = sym__expansion_body;
	v->a[76844] = actions(3038);
	v->a[76845] = 6;
	v->a[76846] = anon_sym_BANG;
	v->a[76847] = anon_sym_DASH;
	v->a[76848] = anon_sym_STAR;
	v->a[76849] = anon_sym_QMARK;
	v->a[76850] = anon_sym_DOLLAR;
	v->a[76851] = anon_sym_AT;
	v->a[76852] = 10;
	v->a[76853] = actions(3);
	v->a[76854] = 1;
	v->a[76855] = sym_comment;
	v->a[76856] = actions(3058);
	v->a[76857] = 1;
	v->a[76858] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76859] = actions(3064);
	small_parse_table_3843(v);
}

void	small_parse_table_3843(t_small_parse_table_array *v)
{
	v->a[76860] = 1;
	v->a[76861] = sym_string_content;
	v->a[76862] = actions(3066);
	v->a[76863] = 1;
	v->a[76864] = anon_sym_DOLLAR_LBRACE;
	v->a[76865] = actions(3068);
	v->a[76866] = 1;
	v->a[76867] = anon_sym_DOLLAR_LPAREN;
	v->a[76868] = actions(3070);
	v->a[76869] = 1;
	v->a[76870] = anon_sym_BQUOTE;
	v->a[76871] = actions(3306);
	v->a[76872] = 1;
	v->a[76873] = anon_sym_DOLLAR;
	v->a[76874] = actions(3308);
	v->a[76875] = 1;
	v->a[76876] = anon_sym_DQUOTE;
	v->a[76877] = state(1610);
	v->a[76878] = 1;
	v->a[76879] = aux_sym_string_repeat1;
	small_parse_table_3844(v);
}

void	small_parse_table_3844(t_small_parse_table_array *v)
{
	v->a[76880] = state(1748);
	v->a[76881] = 4;
	v->a[76882] = sym_arithmetic_expansion;
	v->a[76883] = sym_simple_expansion;
	v->a[76884] = sym_expansion;
	v->a[76885] = sym_command_substitution;
	v->a[76886] = 8;
	v->a[76887] = actions(3);
	v->a[76888] = 1;
	v->a[76889] = sym_comment;
	v->a[76890] = actions(3040);
	v->a[76891] = 1;
	v->a[76892] = anon_sym_POUND;
	v->a[76893] = actions(3042);
	v->a[76894] = 1;
	v->a[76895] = aux_sym__simple_variable_name_token1;
	v->a[76896] = actions(3044);
	v->a[76897] = 1;
	v->a[76898] = anon_sym_0;
	v->a[76899] = actions(3046);
	small_parse_table_3845(v);
}

/* EOF small_parse_table_768.c */
