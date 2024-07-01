/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_686.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3430(t_small_parse_table_array *v)
{
	v->a[68600] = state(584);
	v->a[68601] = 5;
	v->a[68602] = sym_arithmetic_expansion;
	v->a[68603] = sym_string;
	v->a[68604] = sym_simple_expansion;
	v->a[68605] = sym_expansion;
	v->a[68606] = sym_command_substitution;
	v->a[68607] = 12;
	v->a[68608] = actions(3);
	v->a[68609] = 1;
	v->a[68610] = sym_comment;
	v->a[68611] = actions(2324);
	v->a[68612] = 1;
	v->a[68613] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68614] = actions(2328);
	v->a[68615] = 1;
	v->a[68616] = anon_sym_DQUOTE;
	v->a[68617] = actions(2330);
	v->a[68618] = 1;
	v->a[68619] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3431(v);
}

void	small_parse_table_3431(t_small_parse_table_array *v)
{
	v->a[68620] = actions(2332);
	v->a[68621] = 1;
	v->a[68622] = anon_sym_DOLLAR_LPAREN;
	v->a[68623] = actions(2334);
	v->a[68624] = 1;
	v->a[68625] = anon_sym_BQUOTE;
	v->a[68626] = actions(2360);
	v->a[68627] = 1;
	v->a[68628] = anon_sym_DOLLAR;
	v->a[68629] = actions(2480);
	v->a[68630] = 1;
	v->a[68631] = sym__comment_word;
	v->a[68632] = actions(2482);
	v->a[68633] = 1;
	v->a[68634] = sym__empty_value;
	v->a[68635] = state(1078);
	v->a[68636] = 1;
	v->a[68637] = sym_concatenation;
	v->a[68638] = actions(2687);
	v->a[68639] = 3;
	small_parse_table_3432(v);
}

void	small_parse_table_3432(t_small_parse_table_array *v)
{
	v->a[68640] = sym_raw_string;
	v->a[68641] = sym_number;
	v->a[68642] = sym_word;
	v->a[68643] = state(989);
	v->a[68644] = 5;
	v->a[68645] = sym_arithmetic_expansion;
	v->a[68646] = sym_string;
	v->a[68647] = sym_simple_expansion;
	v->a[68648] = sym_expansion;
	v->a[68649] = sym_command_substitution;
	v->a[68650] = 10;
	v->a[68651] = actions(3);
	v->a[68652] = 1;
	v->a[68653] = sym_comment;
	v->a[68654] = actions(1074);
	v->a[68655] = 1;
	v->a[68656] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68657] = actions(1078);
	v->a[68658] = 1;
	v->a[68659] = anon_sym_DQUOTE;
	small_parse_table_3433(v);
}

void	small_parse_table_3433(t_small_parse_table_array *v)
{
	v->a[68660] = actions(1080);
	v->a[68661] = 1;
	v->a[68662] = anon_sym_DOLLAR_LBRACE;
	v->a[68663] = actions(1082);
	v->a[68664] = 1;
	v->a[68665] = anon_sym_DOLLAR_LPAREN;
	v->a[68666] = actions(1084);
	v->a[68667] = 1;
	v->a[68668] = anon_sym_BQUOTE;
	v->a[68669] = actions(2640);
	v->a[68670] = 1;
	v->a[68671] = sym__bare_dollar;
	v->a[68672] = actions(2689);
	v->a[68673] = 1;
	v->a[68674] = anon_sym_DOLLAR;
	v->a[68675] = actions(2636);
	v->a[68676] = 5;
	v->a[68677] = aux_sym_concatenation_token1;
	v->a[68678] = sym_raw_string;
	v->a[68679] = sym_number;
	small_parse_table_3434(v);
}

void	small_parse_table_3434(t_small_parse_table_array *v)
{
	v->a[68680] = sym__comment_word;
	v->a[68681] = sym_word;
	v->a[68682] = state(1450);
	v->a[68683] = 5;
	v->a[68684] = sym_arithmetic_expansion;
	v->a[68685] = sym_string;
	v->a[68686] = sym_simple_expansion;
	v->a[68687] = sym_expansion;
	v->a[68688] = sym_command_substitution;
	v->a[68689] = 10;
	v->a[68690] = actions(3);
	v->a[68691] = 1;
	v->a[68692] = sym_comment;
	v->a[68693] = actions(2490);
	v->a[68694] = 1;
	v->a[68695] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68696] = actions(2494);
	v->a[68697] = 1;
	v->a[68698] = anon_sym_DQUOTE;
	v->a[68699] = actions(2496);
	small_parse_table_3435(v);
}

/* EOF small_parse_table_686.c */
