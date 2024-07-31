/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_626.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3130(t_small_parse_table_array *v)
{
	v->a[62600] = state(1343);
	v->a[62601] = 1;
	v->a[62602] = aux_sym_string_repeat1;
	v->a[62603] = state(1477);
	v->a[62604] = 4;
	v->a[62605] = sym_arithmetic_expansion;
	v->a[62606] = sym_simple_expansion;
	v->a[62607] = sym_expansion;
	v->a[62608] = sym_command_substitution;
	v->a[62609] = 10;
	v->a[62610] = actions(3);
	v->a[62611] = 1;
	v->a[62612] = sym_comment;
	v->a[62613] = actions(2548);
	v->a[62614] = 1;
	v->a[62615] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62616] = actions(2554);
	v->a[62617] = 1;
	v->a[62618] = sym_string_content;
	v->a[62619] = actions(2556);
	small_parse_table_3131(v);
}

void	small_parse_table_3131(t_small_parse_table_array *v)
{
	v->a[62620] = 1;
	v->a[62621] = anon_sym_DOLLAR_LBRACE;
	v->a[62622] = actions(2558);
	v->a[62623] = 1;
	v->a[62624] = anon_sym_DOLLAR_LPAREN;
	v->a[62625] = actions(2560);
	v->a[62626] = 1;
	v->a[62627] = anon_sym_BQUOTE;
	v->a[62628] = actions(2701);
	v->a[62629] = 1;
	v->a[62630] = anon_sym_DOLLAR;
	v->a[62631] = actions(2703);
	v->a[62632] = 1;
	v->a[62633] = anon_sym_DQUOTE;
	v->a[62634] = state(1370);
	v->a[62635] = 1;
	v->a[62636] = aux_sym_string_repeat1;
	v->a[62637] = state(1477);
	v->a[62638] = 4;
	v->a[62639] = sym_arithmetic_expansion;
	small_parse_table_3132(v);
}

void	small_parse_table_3132(t_small_parse_table_array *v)
{
	v->a[62640] = sym_simple_expansion;
	v->a[62641] = sym_expansion;
	v->a[62642] = sym_command_substitution;
	v->a[62643] = 8;
	v->a[62644] = actions(3);
	v->a[62645] = 1;
	v->a[62646] = sym_comment;
	v->a[62647] = actions(2566);
	v->a[62648] = 1;
	v->a[62649] = anon_sym_POUND;
	v->a[62650] = actions(2568);
	v->a[62651] = 1;
	v->a[62652] = aux_sym__simple_variable_name_token1;
	v->a[62653] = actions(2570);
	v->a[62654] = 1;
	v->a[62655] = anon_sym_0;
	v->a[62656] = actions(2572);
	v->a[62657] = 1;
	v->a[62658] = sym_variable_name;
	v->a[62659] = actions(2705);
	small_parse_table_3133(v);
}

void	small_parse_table_3133(t_small_parse_table_array *v)
{
	v->a[62660] = 1;
	v->a[62661] = anon_sym_RBRACE;
	v->a[62662] = state(1777);
	v->a[62663] = 1;
	v->a[62664] = sym__expansion_body;
	v->a[62665] = actions(2564);
	v->a[62666] = 6;
	v->a[62667] = anon_sym_BANG;
	v->a[62668] = anon_sym_DASH;
	v->a[62669] = anon_sym_STAR;
	v->a[62670] = anon_sym_QMARK;
	v->a[62671] = anon_sym_DOLLAR;
	v->a[62672] = anon_sym_AT;
	v->a[62673] = 3;
	v->a[62674] = actions(407);
	v->a[62675] = 1;
	v->a[62676] = sym_comment;
	v->a[62677] = actions(1895);
	v->a[62678] = 4;
	v->a[62679] = anon_sym_PIPE;
	small_parse_table_3134(v);
}

void	small_parse_table_3134(t_small_parse_table_array *v)
{
	v->a[62680] = anon_sym_LT;
	v->a[62681] = anon_sym_GT;
	v->a[62682] = anon_sym_LT_LT;
	v->a[62683] = actions(1893);
	v->a[62684] = 8;
	v->a[62685] = anon_sym_AMP_AMP;
	v->a[62686] = anon_sym_PIPE_PIPE;
	v->a[62687] = anon_sym_GT_GT;
	v->a[62688] = anon_sym_LT_AMP;
	v->a[62689] = anon_sym_GT_AMP;
	v->a[62690] = anon_sym_GT_PIPE;
	v->a[62691] = anon_sym_LT_GT;
	v->a[62692] = anon_sym_LT_LT_DASH;
	v->a[62693] = 3;
	v->a[62694] = actions(407);
	v->a[62695] = 1;
	v->a[62696] = sym_comment;
	v->a[62697] = actions(1903);
	v->a[62698] = 4;
	v->a[62699] = anon_sym_PIPE;
	small_parse_table_3135(v);
}

/* EOF small_parse_table_626.c */
