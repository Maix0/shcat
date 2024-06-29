/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_905.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4525(t_small_parse_table_array *v)
{
	v->a[90500] = actions(3414);
	v->a[90501] = 1;
	v->a[90502] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90503] = actions(3420);
	v->a[90504] = 1;
	v->a[90505] = sym_string_content;
	v->a[90506] = actions(3422);
	v->a[90507] = 1;
	v->a[90508] = anon_sym_DOLLAR_LBRACE;
	v->a[90509] = actions(3424);
	v->a[90510] = 1;
	v->a[90511] = anon_sym_DOLLAR_LPAREN;
	v->a[90512] = actions(3426);
	v->a[90513] = 1;
	v->a[90514] = anon_sym_BQUOTE;
	v->a[90515] = actions(3656);
	v->a[90516] = 1;
	v->a[90517] = anon_sym_DOLLAR;
	v->a[90518] = actions(3658);
	v->a[90519] = 1;
	small_parse_table_4526(v);
}

void	small_parse_table_4526(t_small_parse_table_array *v)
{
	v->a[90520] = anon_sym_DQUOTE;
	v->a[90521] = state(1863);
	v->a[90522] = 1;
	v->a[90523] = aux_sym_string_repeat1;
	v->a[90524] = state(1963);
	v->a[90525] = 4;
	v->a[90526] = sym_arithmetic_expansion;
	v->a[90527] = sym_simple_expansion;
	v->a[90528] = sym_expansion;
	v->a[90529] = sym_command_substitution;
	v->a[90530] = 6;
	v->a[90531] = actions(1074);
	v->a[90532] = 1;
	v->a[90533] = sym_comment;
	v->a[90534] = actions(3440);
	v->a[90535] = 1;
	v->a[90536] = anon_sym_LT_LT;
	v->a[90537] = actions(3442);
	v->a[90538] = 1;
	v->a[90539] = anon_sym_LT_LT_DASH;
	small_parse_table_4527(v);
}

void	small_parse_table_4527(t_small_parse_table_array *v)
{
	v->a[90540] = actions(3664);
	v->a[90541] = 2;
	v->a[90542] = anon_sym_LT_AMP_DASH;
	v->a[90543] = anon_sym_GT_AMP_DASH;
	v->a[90544] = actions(3662);
	v->a[90545] = 3;
	v->a[90546] = anon_sym_GT_GT;
	v->a[90547] = anon_sym_AMP_GT_GT;
	v->a[90548] = anon_sym_GT_PIPE;
	v->a[90549] = actions(3660);
	v->a[90550] = 5;
	v->a[90551] = anon_sym_LT;
	v->a[90552] = anon_sym_GT;
	v->a[90553] = anon_sym_AMP_GT;
	v->a[90554] = anon_sym_LT_AMP;
	v->a[90555] = anon_sym_GT_AMP;
	v->a[90556] = 4;
	v->a[90557] = actions(3);
	v->a[90558] = 1;
	v->a[90559] = sym_comment;
	small_parse_table_4528(v);
}

void	small_parse_table_4528(t_small_parse_table_array *v)
{
	v->a[90560] = actions(2755);
	v->a[90561] = 1;
	v->a[90562] = sym_variable_name;
	v->a[90563] = actions(2753);
	v->a[90564] = 2;
	v->a[90565] = aux_sym__simple_variable_name_token1;
	v->a[90566] = aux_sym__multiline_variable_name_token1;
	v->a[90567] = actions(2751);
	v->a[90568] = 9;
	v->a[90569] = anon_sym_BANG;
	v->a[90570] = anon_sym_DASH;
	v->a[90571] = anon_sym_STAR;
	v->a[90572] = anon_sym_QMARK;
	v->a[90573] = anon_sym_DOLLAR;
	v->a[90574] = anon_sym_POUND;
	v->a[90575] = anon_sym_AT;
	v->a[90576] = anon_sym_0;
	v->a[90577] = anon_sym__;
	v->a[90578] = 10;
	v->a[90579] = actions(3);
	small_parse_table_4529(v);
}

void	small_parse_table_4529(t_small_parse_table_array *v)
{
	v->a[90580] = 1;
	v->a[90581] = sym_comment;
	v->a[90582] = actions(3414);
	v->a[90583] = 1;
	v->a[90584] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90585] = actions(3420);
	v->a[90586] = 1;
	v->a[90587] = sym_string_content;
	v->a[90588] = actions(3422);
	v->a[90589] = 1;
	v->a[90590] = anon_sym_DOLLAR_LBRACE;
	v->a[90591] = actions(3424);
	v->a[90592] = 1;
	v->a[90593] = anon_sym_DOLLAR_LPAREN;
	v->a[90594] = actions(3426);
	v->a[90595] = 1;
	v->a[90596] = anon_sym_BQUOTE;
	v->a[90597] = actions(3666);
	v->a[90598] = 1;
	v->a[90599] = anon_sym_DOLLAR;
	small_parse_table_4530(v);
}

/* EOF small_parse_table_905.c */
