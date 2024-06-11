/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_968.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4840(t_small_parse_table_array *v)
{
	v->a[96800] = 1;
	v->a[96801] = aux_sym_string_repeat1;
	v->a[96802] = state(2107);
	v->a[96803] = 4;
	v->a[96804] = sym_arithmetic_expansion;
	v->a[96805] = sym_simple_expansion;
	v->a[96806] = sym_expansion;
	v->a[96807] = sym_command_substitution;
	v->a[96808] = 10;
	v->a[96809] = actions(3);
	v->a[96810] = 1;
	v->a[96811] = sym_comment;
	v->a[96812] = actions(3856);
	v->a[96813] = 1;
	v->a[96814] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96815] = actions(3862);
	v->a[96816] = 1;
	v->a[96817] = sym_string_content;
	v->a[96818] = actions(3864);
	v->a[96819] = 1;
	small_parse_table_4841(v);
}

void	small_parse_table_4841(t_small_parse_table_array *v)
{
	v->a[96820] = anon_sym_DOLLAR_LBRACE;
	v->a[96821] = actions(3866);
	v->a[96822] = 1;
	v->a[96823] = anon_sym_DOLLAR_LPAREN;
	v->a[96824] = actions(3868);
	v->a[96825] = 1;
	v->a[96826] = anon_sym_BQUOTE;
	v->a[96827] = actions(4170);
	v->a[96828] = 1;
	v->a[96829] = anon_sym_DOLLAR;
	v->a[96830] = actions(4172);
	v->a[96831] = 1;
	v->a[96832] = anon_sym_DQUOTE;
	v->a[96833] = state(1987);
	v->a[96834] = 1;
	v->a[96835] = aux_sym_string_repeat1;
	v->a[96836] = state(2107);
	v->a[96837] = 4;
	v->a[96838] = sym_arithmetic_expansion;
	v->a[96839] = sym_simple_expansion;
	small_parse_table_4842(v);
}

void	small_parse_table_4842(t_small_parse_table_array *v)
{
	v->a[96840] = sym_expansion;
	v->a[96841] = sym_command_substitution;
	v->a[96842] = 4;
	v->a[96843] = actions(3);
	v->a[96844] = 1;
	v->a[96845] = sym_comment;
	v->a[96846] = actions(399);
	v->a[96847] = 1;
	v->a[96848] = sym_variable_name;
	v->a[96849] = actions(397);
	v->a[96850] = 2;
	v->a[96851] = aux_sym__simple_variable_name_token1;
	v->a[96852] = aux_sym__multiline_variable_name_token1;
	v->a[96853] = actions(395);
	v->a[96854] = 9;
	v->a[96855] = anon_sym_BANG;
	v->a[96856] = anon_sym_DASH;
	v->a[96857] = anon_sym_STAR;
	v->a[96858] = anon_sym_QMARK;
	v->a[96859] = anon_sym_DOLLAR;
	small_parse_table_4843(v);
}

void	small_parse_table_4843(t_small_parse_table_array *v)
{
	v->a[96860] = anon_sym_POUND;
	v->a[96861] = anon_sym_AT;
	v->a[96862] = anon_sym_0;
	v->a[96863] = anon_sym__;
	v->a[96864] = 10;
	v->a[96865] = actions(3);
	v->a[96866] = 1;
	v->a[96867] = sym_comment;
	v->a[96868] = actions(3856);
	v->a[96869] = 1;
	v->a[96870] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96871] = actions(3862);
	v->a[96872] = 1;
	v->a[96873] = sym_string_content;
	v->a[96874] = actions(3864);
	v->a[96875] = 1;
	v->a[96876] = anon_sym_DOLLAR_LBRACE;
	v->a[96877] = actions(3866);
	v->a[96878] = 1;
	v->a[96879] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4844(v);
}

void	small_parse_table_4844(t_small_parse_table_array *v)
{
	v->a[96880] = actions(3868);
	v->a[96881] = 1;
	v->a[96882] = anon_sym_BQUOTE;
	v->a[96883] = actions(4174);
	v->a[96884] = 1;
	v->a[96885] = anon_sym_DOLLAR;
	v->a[96886] = actions(4176);
	v->a[96887] = 1;
	v->a[96888] = anon_sym_DQUOTE;
	v->a[96889] = state(2042);
	v->a[96890] = 1;
	v->a[96891] = aux_sym_string_repeat1;
	v->a[96892] = state(2107);
	v->a[96893] = 4;
	v->a[96894] = sym_arithmetic_expansion;
	v->a[96895] = sym_simple_expansion;
	v->a[96896] = sym_expansion;
	v->a[96897] = sym_command_substitution;
	v->a[96898] = 4;
	v->a[96899] = actions(3);
	small_parse_table_4845(v);
}

/* EOF small_parse_table_968.c */
