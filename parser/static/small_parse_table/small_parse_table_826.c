/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_826.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4130(t_small_parse_table_array *v)
{
	v->a[82600] = anon_sym_AMP_GT_GT;
	v->a[82601] = anon_sym_LT_AMP;
	v->a[82602] = anon_sym_GT_AMP;
	v->a[82603] = anon_sym_GT_PIPE;
	v->a[82604] = anon_sym_LT_AMP_DASH;
	v->a[82605] = anon_sym_GT_AMP_DASH;
	v->a[82606] = aux_sym_concatenation_token1;
	v->a[82607] = 10;
	v->a[82608] = actions(3);
	v->a[82609] = 1;
	v->a[82610] = sym_comment;
	v->a[82611] = actions(1709);
	v->a[82612] = 1;
	v->a[82613] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82614] = actions(1711);
	v->a[82615] = 1;
	v->a[82616] = anon_sym_DOLLAR;
	v->a[82617] = actions(1713);
	v->a[82618] = 1;
	v->a[82619] = anon_sym_DQUOTE;
	small_parse_table_4131(v);
}

void	small_parse_table_4131(t_small_parse_table_array *v)
{
	v->a[82620] = actions(1715);
	v->a[82621] = 1;
	v->a[82622] = anon_sym_DOLLAR_LBRACE;
	v->a[82623] = actions(1717);
	v->a[82624] = 1;
	v->a[82625] = anon_sym_DOLLAR_LPAREN;
	v->a[82626] = actions(1719);
	v->a[82627] = 1;
	v->a[82628] = anon_sym_BQUOTE;
	v->a[82629] = state(803);
	v->a[82630] = 2;
	v->a[82631] = sym_concatenation;
	v->a[82632] = aux_sym_for_statement_repeat1;
	v->a[82633] = actions(1707);
	v->a[82634] = 3;
	v->a[82635] = sym_raw_string;
	v->a[82636] = sym_number;
	v->a[82637] = sym_word;
	v->a[82638] = state(950);
	v->a[82639] = 5;
	small_parse_table_4132(v);
}

void	small_parse_table_4132(t_small_parse_table_array *v)
{
	v->a[82640] = sym_arithmetic_expansion;
	v->a[82641] = sym_string;
	v->a[82642] = sym_simple_expansion;
	v->a[82643] = sym_expansion;
	v->a[82644] = sym_command_substitution;
	v->a[82645] = 10;
	v->a[82646] = actions(3);
	v->a[82647] = 1;
	v->a[82648] = sym_comment;
	v->a[82649] = actions(2719);
	v->a[82650] = 1;
	v->a[82651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82652] = actions(2721);
	v->a[82653] = 1;
	v->a[82654] = anon_sym_DOLLAR;
	v->a[82655] = actions(2723);
	v->a[82656] = 1;
	v->a[82657] = anon_sym_DQUOTE;
	v->a[82658] = actions(2725);
	v->a[82659] = 1;
	small_parse_table_4133(v);
}

void	small_parse_table_4133(t_small_parse_table_array *v)
{
	v->a[82660] = anon_sym_DOLLAR_LBRACE;
	v->a[82661] = actions(2727);
	v->a[82662] = 1;
	v->a[82663] = anon_sym_DOLLAR_LPAREN;
	v->a[82664] = actions(2729);
	v->a[82665] = 1;
	v->a[82666] = anon_sym_BQUOTE;
	v->a[82667] = state(378);
	v->a[82668] = 2;
	v->a[82669] = sym_concatenation;
	v->a[82670] = aux_sym_for_statement_repeat1;
	v->a[82671] = actions(3147);
	v->a[82672] = 3;
	v->a[82673] = sym_raw_string;
	v->a[82674] = sym_number;
	v->a[82675] = sym_word;
	v->a[82676] = state(795);
	v->a[82677] = 5;
	v->a[82678] = sym_arithmetic_expansion;
	v->a[82679] = sym_string;
	small_parse_table_4134(v);
}

void	small_parse_table_4134(t_small_parse_table_array *v)
{
	v->a[82680] = sym_simple_expansion;
	v->a[82681] = sym_expansion;
	v->a[82682] = sym_command_substitution;
	v->a[82683] = 10;
	v->a[82684] = actions(3);
	v->a[82685] = 1;
	v->a[82686] = sym_comment;
	v->a[82687] = actions(2719);
	v->a[82688] = 1;
	v->a[82689] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82690] = actions(2721);
	v->a[82691] = 1;
	v->a[82692] = anon_sym_DOLLAR;
	v->a[82693] = actions(2723);
	v->a[82694] = 1;
	v->a[82695] = anon_sym_DQUOTE;
	v->a[82696] = actions(2725);
	v->a[82697] = 1;
	v->a[82698] = anon_sym_DOLLAR_LBRACE;
	v->a[82699] = actions(2727);
	small_parse_table_4135(v);
}

/* EOF small_parse_table_826.c */
