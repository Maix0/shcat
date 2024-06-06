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
	v->a[90601] = aux_sym_number_token2;
	v->a[90602] = actions(4602);
	v->a[90603] = 1;
	v->a[90604] = anon_sym_DOLLAR_LBRACE;
	v->a[90605] = actions(4604);
	v->a[90606] = 1;
	v->a[90607] = anon_sym_DOLLAR_LPAREN;
	v->a[90608] = actions(4606);
	v->a[90609] = 1;
	v->a[90610] = anon_sym_BQUOTE;
	v->a[90611] = actions(4608);
	v->a[90612] = 1;
	v->a[90613] = anon_sym_DOLLAR_BQUOTE;
	v->a[90614] = actions(4997);
	v->a[90615] = 1;
	v->a[90616] = aux_sym__simple_variable_name_token1;
	v->a[90617] = actions(4999);
	v->a[90618] = 1;
	v->a[90619] = sym_variable_name;
	small_parse_table_4531(v);
}

void	small_parse_table_4531(t_small_parse_table_array *v)
{
	v->a[90620] = state(1476);
	v->a[90621] = 1;
	v->a[90622] = sym__arithmetic_postfix_expression;
	v->a[90623] = state(1478);
	v->a[90624] = 1;
	v->a[90625] = sym__arithmetic_unary_expression;
	v->a[90626] = state(1490);
	v->a[90627] = 1;
	v->a[90628] = sym__arithmetic_ternary_expression;
	v->a[90629] = state(1511);
	v->a[90630] = 1;
	v->a[90631] = sym__arithmetic_binary_expression;
	v->a[90632] = actions(4588);
	v->a[90633] = 2;
	v->a[90634] = anon_sym_PLUS_PLUS;
	v->a[90635] = anon_sym_DASH_DASH;
	v->a[90636] = actions(4590);
	v->a[90637] = 2;
	v->a[90638] = anon_sym_DASH2;
	v->a[90639] = anon_sym_PLUS2;
	small_parse_table_4532(v);
}

void	small_parse_table_4532(t_small_parse_table_array *v)
{
	v->a[90640] = state(1443);
	v->a[90641] = 8;
	v->a[90642] = sym__arithmetic_expression;
	v->a[90643] = sym__arithmetic_literal;
	v->a[90644] = sym__arithmetic_parenthesized_expression;
	v->a[90645] = sym_string;
	v->a[90646] = sym_number;
	v->a[90647] = sym_simple_expansion;
	v->a[90648] = sym_expansion;
	v->a[90649] = sym_command_substitution;
	v->a[90650] = 21;
	v->a[90651] = actions(57);
	v->a[90652] = 1;
	v->a[90653] = sym_comment;
	v->a[90654] = actions(4584);
	v->a[90655] = 1;
	v->a[90656] = anon_sym_LPAREN;
	v->a[90657] = actions(4586);
	v->a[90658] = 1;
	v->a[90659] = anon_sym_BANG;
	small_parse_table_4533(v);
}

void	small_parse_table_4533(t_small_parse_table_array *v)
{
	v->a[90660] = actions(4592);
	v->a[90661] = 1;
	v->a[90662] = anon_sym_TILDE;
	v->a[90663] = actions(4594);
	v->a[90664] = 1;
	v->a[90665] = anon_sym_DOLLAR;
	v->a[90666] = actions(4596);
	v->a[90667] = 1;
	v->a[90668] = anon_sym_DQUOTE;
	v->a[90669] = actions(4598);
	v->a[90670] = 1;
	v->a[90671] = aux_sym_number_token1;
	v->a[90672] = actions(4600);
	v->a[90673] = 1;
	v->a[90674] = aux_sym_number_token2;
	v->a[90675] = actions(4602);
	v->a[90676] = 1;
	v->a[90677] = anon_sym_DOLLAR_LBRACE;
	v->a[90678] = actions(4604);
	v->a[90679] = 1;
	small_parse_table_4534(v);
}

void	small_parse_table_4534(t_small_parse_table_array *v)
{
	v->a[90680] = anon_sym_DOLLAR_LPAREN;
	v->a[90681] = actions(4606);
	v->a[90682] = 1;
	v->a[90683] = anon_sym_BQUOTE;
	v->a[90684] = actions(4608);
	v->a[90685] = 1;
	v->a[90686] = anon_sym_DOLLAR_BQUOTE;
	v->a[90687] = actions(5001);
	v->a[90688] = 1;
	v->a[90689] = aux_sym__simple_variable_name_token1;
	v->a[90690] = actions(5003);
	v->a[90691] = 1;
	v->a[90692] = sym_variable_name;
	v->a[90693] = state(1476);
	v->a[90694] = 1;
	v->a[90695] = sym__arithmetic_postfix_expression;
	v->a[90696] = state(1478);
	v->a[90697] = 1;
	v->a[90698] = sym__arithmetic_unary_expression;
	v->a[90699] = state(1490);
	small_parse_table_4535(v);
}

/* EOF small_parse_table_906.c */
