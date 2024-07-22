/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_776.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3880(t_small_parse_table_array *v)
{
	v->a[77600] = actions(3382);
	v->a[77601] = 1;
	v->a[77602] = anon_sym_DQUOTE;
	v->a[77603] = state(1663);
	v->a[77604] = 1;
	v->a[77605] = aux_sym_string_repeat1;
	v->a[77606] = state(1748);
	v->a[77607] = 4;
	v->a[77608] = sym_arithmetic_expansion;
	v->a[77609] = sym_simple_expansion;
	v->a[77610] = sym_expansion;
	v->a[77611] = sym_command_substitution;
	v->a[77612] = 4;
	v->a[77613] = actions(3);
	v->a[77614] = 1;
	v->a[77615] = sym_comment;
	v->a[77616] = actions(3386);
	v->a[77617] = 1;
	v->a[77618] = anon_sym_esac;
	v->a[77619] = actions(3388);
	small_parse_table_3881(v);
}

void	small_parse_table_3881(t_small_parse_table_array *v)
{
	v->a[77620] = 1;
	v->a[77621] = sym_extglob_pattern;
	v->a[77622] = actions(3384);
	v->a[77623] = 10;
	v->a[77624] = anon_sym_LPAREN;
	v->a[77625] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77626] = anon_sym_DOLLAR;
	v->a[77627] = anon_sym_DQUOTE;
	v->a[77628] = sym_raw_string;
	v->a[77629] = sym_number;
	v->a[77630] = anon_sym_DOLLAR_LBRACE;
	v->a[77631] = anon_sym_DOLLAR_LPAREN;
	v->a[77632] = anon_sym_BQUOTE;
	v->a[77633] = sym_word;
	v->a[77634] = 4;
	v->a[77635] = actions(3);
	v->a[77636] = 1;
	v->a[77637] = sym_comment;
	v->a[77638] = actions(3386);
	v->a[77639] = 1;
	small_parse_table_3882(v);
}

void	small_parse_table_3882(t_small_parse_table_array *v)
{
	v->a[77640] = anon_sym_esac;
	v->a[77641] = actions(3388);
	v->a[77642] = 1;
	v->a[77643] = sym_extglob_pattern;
	v->a[77644] = actions(3384);
	v->a[77645] = 10;
	v->a[77646] = anon_sym_LPAREN;
	v->a[77647] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77648] = anon_sym_DOLLAR;
	v->a[77649] = anon_sym_DQUOTE;
	v->a[77650] = sym_raw_string;
	v->a[77651] = sym_number;
	v->a[77652] = anon_sym_DOLLAR_LBRACE;
	v->a[77653] = anon_sym_DOLLAR_LPAREN;
	v->a[77654] = anon_sym_BQUOTE;
	v->a[77655] = sym_word;
	v->a[77656] = 10;
	v->a[77657] = actions(3);
	v->a[77658] = 1;
	v->a[77659] = sym_comment;
	small_parse_table_3883(v);
}

void	small_parse_table_3883(t_small_parse_table_array *v)
{
	v->a[77660] = actions(3058);
	v->a[77661] = 1;
	v->a[77662] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77663] = actions(3064);
	v->a[77664] = 1;
	v->a[77665] = sym_string_content;
	v->a[77666] = actions(3066);
	v->a[77667] = 1;
	v->a[77668] = anon_sym_DOLLAR_LBRACE;
	v->a[77669] = actions(3068);
	v->a[77670] = 1;
	v->a[77671] = anon_sym_DOLLAR_LPAREN;
	v->a[77672] = actions(3070);
	v->a[77673] = 1;
	v->a[77674] = anon_sym_BQUOTE;
	v->a[77675] = actions(3390);
	v->a[77676] = 1;
	v->a[77677] = anon_sym_DOLLAR;
	v->a[77678] = actions(3392);
	v->a[77679] = 1;
	small_parse_table_3884(v);
}

void	small_parse_table_3884(t_small_parse_table_array *v)
{
	v->a[77680] = anon_sym_DQUOTE;
	v->a[77681] = state(1681);
	v->a[77682] = 1;
	v->a[77683] = aux_sym_string_repeat1;
	v->a[77684] = state(1748);
	v->a[77685] = 4;
	v->a[77686] = sym_arithmetic_expansion;
	v->a[77687] = sym_simple_expansion;
	v->a[77688] = sym_expansion;
	v->a[77689] = sym_command_substitution;
	v->a[77690] = 8;
	v->a[77691] = actions(3);
	v->a[77692] = 1;
	v->a[77693] = sym_comment;
	v->a[77694] = actions(3040);
	v->a[77695] = 1;
	v->a[77696] = anon_sym_POUND;
	v->a[77697] = actions(3042);
	v->a[77698] = 1;
	v->a[77699] = aux_sym__simple_variable_name_token1;
	small_parse_table_3885(v);
}

/* EOF small_parse_table_776.c */
