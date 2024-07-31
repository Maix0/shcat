/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_616.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3080(t_small_parse_table_array *v)
{
	v->a[61600] = anon_sym_LT_AMP;
	v->a[61601] = anon_sym_GT_AMP;
	v->a[61602] = anon_sym_GT_PIPE;
	v->a[61603] = anon_sym_LT_GT;
	v->a[61604] = anon_sym_LT_LT_DASH;
	v->a[61605] = 10;
	v->a[61606] = actions(3);
	v->a[61607] = 1;
	v->a[61608] = sym_comment;
	v->a[61609] = actions(2548);
	v->a[61610] = 1;
	v->a[61611] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61612] = actions(2554);
	v->a[61613] = 1;
	v->a[61614] = sym_string_content;
	v->a[61615] = actions(2556);
	v->a[61616] = 1;
	v->a[61617] = anon_sym_DOLLAR_LBRACE;
	v->a[61618] = actions(2558);
	v->a[61619] = 1;
	small_parse_table_3081(v);
}

void	small_parse_table_3081(t_small_parse_table_array *v)
{
	v->a[61620] = anon_sym_DOLLAR_LPAREN;
	v->a[61621] = actions(2560);
	v->a[61622] = 1;
	v->a[61623] = anon_sym_BQUOTE;
	v->a[61624] = actions(2595);
	v->a[61625] = 1;
	v->a[61626] = anon_sym_DOLLAR;
	v->a[61627] = actions(2597);
	v->a[61628] = 1;
	v->a[61629] = anon_sym_DQUOTE;
	v->a[61630] = state(1320);
	v->a[61631] = 1;
	v->a[61632] = aux_sym_string_repeat1;
	v->a[61633] = state(1477);
	v->a[61634] = 4;
	v->a[61635] = sym_arithmetic_expansion;
	v->a[61636] = sym_simple_expansion;
	v->a[61637] = sym_expansion;
	v->a[61638] = sym_command_substitution;
	v->a[61639] = 8;
	small_parse_table_3082(v);
}

void	small_parse_table_3082(t_small_parse_table_array *v)
{
	v->a[61640] = actions(3);
	v->a[61641] = 1;
	v->a[61642] = sym_comment;
	v->a[61643] = actions(2566);
	v->a[61644] = 1;
	v->a[61645] = anon_sym_POUND;
	v->a[61646] = actions(2568);
	v->a[61647] = 1;
	v->a[61648] = aux_sym__simple_variable_name_token1;
	v->a[61649] = actions(2570);
	v->a[61650] = 1;
	v->a[61651] = anon_sym_0;
	v->a[61652] = actions(2572);
	v->a[61653] = 1;
	v->a[61654] = sym_variable_name;
	v->a[61655] = actions(2599);
	v->a[61656] = 1;
	v->a[61657] = anon_sym_RBRACE;
	v->a[61658] = state(1727);
	v->a[61659] = 1;
	small_parse_table_3083(v);
}

void	small_parse_table_3083(t_small_parse_table_array *v)
{
	v->a[61660] = sym__expansion_body;
	v->a[61661] = actions(2564);
	v->a[61662] = 6;
	v->a[61663] = anon_sym_BANG;
	v->a[61664] = anon_sym_DASH;
	v->a[61665] = anon_sym_STAR;
	v->a[61666] = anon_sym_QMARK;
	v->a[61667] = anon_sym_DOLLAR;
	v->a[61668] = anon_sym_AT;
	v->a[61669] = 3;
	v->a[61670] = actions(407);
	v->a[61671] = 1;
	v->a[61672] = sym_comment;
	v->a[61673] = actions(1797);
	v->a[61674] = 4;
	v->a[61675] = anon_sym_PIPE;
	v->a[61676] = anon_sym_LT;
	v->a[61677] = anon_sym_GT;
	v->a[61678] = anon_sym_LT_LT;
	v->a[61679] = actions(1795);
	small_parse_table_3084(v);
}

void	small_parse_table_3084(t_small_parse_table_array *v)
{
	v->a[61680] = 8;
	v->a[61681] = anon_sym_AMP_AMP;
	v->a[61682] = anon_sym_PIPE_PIPE;
	v->a[61683] = anon_sym_GT_GT;
	v->a[61684] = anon_sym_LT_AMP;
	v->a[61685] = anon_sym_GT_AMP;
	v->a[61686] = anon_sym_GT_PIPE;
	v->a[61687] = anon_sym_LT_GT;
	v->a[61688] = anon_sym_LT_LT_DASH;
	v->a[61689] = 10;
	v->a[61690] = actions(3);
	v->a[61691] = 1;
	v->a[61692] = sym_comment;
	v->a[61693] = actions(2548);
	v->a[61694] = 1;
	v->a[61695] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61696] = actions(2554);
	v->a[61697] = 1;
	v->a[61698] = sym_string_content;
	v->a[61699] = actions(2556);
	small_parse_table_3085(v);
}

/* EOF small_parse_table_616.c */
