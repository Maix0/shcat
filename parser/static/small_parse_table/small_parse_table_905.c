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
	v->a[90500] = anon_sym_DOLLAR;
	v->a[90501] = actions(3982);
	v->a[90502] = 1;
	v->a[90503] = anon_sym_DQUOTE;
	v->a[90504] = state(1828);
	v->a[90505] = 1;
	v->a[90506] = aux_sym_string_repeat1;
	v->a[90507] = state(1869);
	v->a[90508] = 4;
	v->a[90509] = sym_arithmetic_expansion;
	v->a[90510] = sym_simple_expansion;
	v->a[90511] = sym_expansion;
	v->a[90512] = sym_command_substitution;
	v->a[90513] = 10;
	v->a[90514] = actions(3);
	v->a[90515] = 1;
	v->a[90516] = sym_comment;
	v->a[90517] = actions(3574);
	v->a[90518] = 1;
	v->a[90519] = anon_sym_DQUOTE;
	small_parse_table_4526(v);
}

void	small_parse_table_4526(t_small_parse_table_array *v)
{
	v->a[90520] = actions(3712);
	v->a[90521] = 1;
	v->a[90522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90523] = actions(3716);
	v->a[90524] = 1;
	v->a[90525] = sym_string_content;
	v->a[90526] = actions(3718);
	v->a[90527] = 1;
	v->a[90528] = anon_sym_DOLLAR_LBRACE;
	v->a[90529] = actions(3720);
	v->a[90530] = 1;
	v->a[90531] = anon_sym_DOLLAR_LPAREN;
	v->a[90532] = actions(3722);
	v->a[90533] = 1;
	v->a[90534] = anon_sym_BQUOTE;
	v->a[90535] = actions(3984);
	v->a[90536] = 1;
	v->a[90537] = anon_sym_DOLLAR;
	v->a[90538] = state(1738);
	v->a[90539] = 1;
	small_parse_table_4527(v);
}

void	small_parse_table_4527(t_small_parse_table_array *v)
{
	v->a[90540] = aux_sym_string_repeat1;
	v->a[90541] = state(1869);
	v->a[90542] = 4;
	v->a[90543] = sym_arithmetic_expansion;
	v->a[90544] = sym_simple_expansion;
	v->a[90545] = sym_expansion;
	v->a[90546] = sym_command_substitution;
	v->a[90547] = 6;
	v->a[90548] = actions(1404);
	v->a[90549] = 1;
	v->a[90550] = sym_comment;
	v->a[90551] = actions(3752);
	v->a[90552] = 1;
	v->a[90553] = anon_sym_LT_LT;
	v->a[90554] = actions(3754);
	v->a[90555] = 1;
	v->a[90556] = anon_sym_LT_LT_DASH;
	v->a[90557] = actions(3990);
	v->a[90558] = 2;
	v->a[90559] = anon_sym_LT_AMP_DASH;
	small_parse_table_4528(v);
}

void	small_parse_table_4528(t_small_parse_table_array *v)
{
	v->a[90560] = anon_sym_GT_AMP_DASH;
	v->a[90561] = actions(3988);
	v->a[90562] = 3;
	v->a[90563] = anon_sym_GT_GT;
	v->a[90564] = anon_sym_AMP_GT_GT;
	v->a[90565] = anon_sym_GT_PIPE;
	v->a[90566] = actions(3986);
	v->a[90567] = 5;
	v->a[90568] = anon_sym_LT;
	v->a[90569] = anon_sym_GT;
	v->a[90570] = anon_sym_AMP_GT;
	v->a[90571] = anon_sym_LT_AMP;
	v->a[90572] = anon_sym_GT_AMP;
	v->a[90573] = 4;
	v->a[90574] = actions(3);
	v->a[90575] = 1;
	v->a[90576] = sym_comment;
	v->a[90577] = actions(3996);
	v->a[90578] = 1;
	v->a[90579] = sym_variable_name;
	small_parse_table_4529(v);
}

void	small_parse_table_4529(t_small_parse_table_array *v)
{
	v->a[90580] = actions(3994);
	v->a[90581] = 2;
	v->a[90582] = aux_sym__simple_variable_name_token1;
	v->a[90583] = aux_sym__multiline_variable_name_token1;
	v->a[90584] = actions(3992);
	v->a[90585] = 9;
	v->a[90586] = anon_sym_BANG;
	v->a[90587] = anon_sym_DASH;
	v->a[90588] = anon_sym_STAR;
	v->a[90589] = anon_sym_QMARK;
	v->a[90590] = anon_sym_DOLLAR;
	v->a[90591] = anon_sym_POUND;
	v->a[90592] = anon_sym_AT;
	v->a[90593] = anon_sym_0;
	v->a[90594] = anon_sym__;
	v->a[90595] = 10;
	v->a[90596] = actions(3);
	v->a[90597] = 1;
	v->a[90598] = sym_comment;
	v->a[90599] = actions(3528);
	small_parse_table_4530(v);
}

/* EOF small_parse_table_905.c */
