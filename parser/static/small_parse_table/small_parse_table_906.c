/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_906.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4530(t_small_parse_table_array *v)
{
	v->a[90600] = 1;
	v->a[90601] = anon_sym_DQUOTE;
	v->a[90602] = actions(3712);
	v->a[90603] = 1;
	v->a[90604] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90605] = actions(3716);
	v->a[90606] = 1;
	v->a[90607] = sym_string_content;
	v->a[90608] = actions(3718);
	v->a[90609] = 1;
	v->a[90610] = anon_sym_DOLLAR_LBRACE;
	v->a[90611] = actions(3720);
	v->a[90612] = 1;
	v->a[90613] = anon_sym_DOLLAR_LPAREN;
	v->a[90614] = actions(3722);
	v->a[90615] = 1;
	v->a[90616] = anon_sym_BQUOTE;
	v->a[90617] = actions(3998);
	v->a[90618] = 1;
	v->a[90619] = anon_sym_DOLLAR;
	small_parse_table_4531(v);
}

void	small_parse_table_4531(t_small_parse_table_array *v)
{
	v->a[90620] = state(1738);
	v->a[90621] = 1;
	v->a[90622] = aux_sym_string_repeat1;
	v->a[90623] = state(1869);
	v->a[90624] = 4;
	v->a[90625] = sym_arithmetic_expansion;
	v->a[90626] = sym_simple_expansion;
	v->a[90627] = sym_expansion;
	v->a[90628] = sym_command_substitution;
	v->a[90629] = 10;
	v->a[90630] = actions(3);
	v->a[90631] = 1;
	v->a[90632] = sym_comment;
	v->a[90633] = actions(3560);
	v->a[90634] = 1;
	v->a[90635] = anon_sym_DQUOTE;
	v->a[90636] = actions(3712);
	v->a[90637] = 1;
	v->a[90638] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90639] = actions(3716);
	small_parse_table_4532(v);
}

void	small_parse_table_4532(t_small_parse_table_array *v)
{
	v->a[90640] = 1;
	v->a[90641] = sym_string_content;
	v->a[90642] = actions(3718);
	v->a[90643] = 1;
	v->a[90644] = anon_sym_DOLLAR_LBRACE;
	v->a[90645] = actions(3720);
	v->a[90646] = 1;
	v->a[90647] = anon_sym_DOLLAR_LPAREN;
	v->a[90648] = actions(3722);
	v->a[90649] = 1;
	v->a[90650] = anon_sym_BQUOTE;
	v->a[90651] = actions(4000);
	v->a[90652] = 1;
	v->a[90653] = anon_sym_DOLLAR;
	v->a[90654] = state(1738);
	v->a[90655] = 1;
	v->a[90656] = aux_sym_string_repeat1;
	v->a[90657] = state(1869);
	v->a[90658] = 4;
	v->a[90659] = sym_arithmetic_expansion;
	small_parse_table_4533(v);
}

void	small_parse_table_4533(t_small_parse_table_array *v)
{
	v->a[90660] = sym_simple_expansion;
	v->a[90661] = sym_expansion;
	v->a[90662] = sym_command_substitution;
	v->a[90663] = 10;
	v->a[90664] = actions(3);
	v->a[90665] = 1;
	v->a[90666] = sym_comment;
	v->a[90667] = actions(3712);
	v->a[90668] = 1;
	v->a[90669] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90670] = actions(3716);
	v->a[90671] = 1;
	v->a[90672] = sym_string_content;
	v->a[90673] = actions(3718);
	v->a[90674] = 1;
	v->a[90675] = anon_sym_DOLLAR_LBRACE;
	v->a[90676] = actions(3720);
	v->a[90677] = 1;
	v->a[90678] = anon_sym_DOLLAR_LPAREN;
	v->a[90679] = actions(3722);
	small_parse_table_4534(v);
}

void	small_parse_table_4534(t_small_parse_table_array *v)
{
	v->a[90680] = 1;
	v->a[90681] = anon_sym_BQUOTE;
	v->a[90682] = actions(4002);
	v->a[90683] = 1;
	v->a[90684] = anon_sym_DOLLAR;
	v->a[90685] = actions(4004);
	v->a[90686] = 1;
	v->a[90687] = anon_sym_DQUOTE;
	v->a[90688] = state(1831);
	v->a[90689] = 1;
	v->a[90690] = aux_sym_string_repeat1;
	v->a[90691] = state(1869);
	v->a[90692] = 4;
	v->a[90693] = sym_arithmetic_expansion;
	v->a[90694] = sym_simple_expansion;
	v->a[90695] = sym_expansion;
	v->a[90696] = sym_command_substitution;
	v->a[90697] = 10;
	v->a[90698] = actions(3);
	v->a[90699] = 1;
	small_parse_table_4535(v);
}

/* EOF small_parse_table_906.c */
