/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_758.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3790(t_small_parse_table_array *v)
{
	v->a[75800] = anon_sym_BANG;
	v->a[75801] = anon_sym_DASH;
	v->a[75802] = anon_sym_STAR;
	v->a[75803] = anon_sym_QMARK;
	v->a[75804] = anon_sym_DOLLAR;
	v->a[75805] = anon_sym_AT;
	v->a[75806] = 10;
	v->a[75807] = actions(3);
	v->a[75808] = 1;
	v->a[75809] = sym_comment;
	v->a[75810] = actions(3058);
	v->a[75811] = 1;
	v->a[75812] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75813] = actions(3064);
	v->a[75814] = 1;
	v->a[75815] = sym_string_content;
	v->a[75816] = actions(3066);
	v->a[75817] = 1;
	v->a[75818] = anon_sym_DOLLAR_LBRACE;
	v->a[75819] = actions(3068);
	small_parse_table_3791(v);
}

void	small_parse_table_3791(t_small_parse_table_array *v)
{
	v->a[75820] = 1;
	v->a[75821] = anon_sym_DOLLAR_LPAREN;
	v->a[75822] = actions(3070);
	v->a[75823] = 1;
	v->a[75824] = anon_sym_BQUOTE;
	v->a[75825] = actions(3194);
	v->a[75826] = 1;
	v->a[75827] = anon_sym_DOLLAR;
	v->a[75828] = actions(3196);
	v->a[75829] = 1;
	v->a[75830] = anon_sym_DQUOTE;
	v->a[75831] = state(1610);
	v->a[75832] = 1;
	v->a[75833] = aux_sym_string_repeat1;
	v->a[75834] = state(1748);
	v->a[75835] = 4;
	v->a[75836] = sym_arithmetic_expansion;
	v->a[75837] = sym_simple_expansion;
	v->a[75838] = sym_expansion;
	v->a[75839] = sym_command_substitution;
	small_parse_table_3792(v);
}

void	small_parse_table_3792(t_small_parse_table_array *v)
{
	v->a[75840] = 8;
	v->a[75841] = actions(3);
	v->a[75842] = 1;
	v->a[75843] = sym_comment;
	v->a[75844] = actions(3040);
	v->a[75845] = 1;
	v->a[75846] = anon_sym_POUND;
	v->a[75847] = actions(3042);
	v->a[75848] = 1;
	v->a[75849] = aux_sym__simple_variable_name_token1;
	v->a[75850] = actions(3044);
	v->a[75851] = 1;
	v->a[75852] = anon_sym_0;
	v->a[75853] = actions(3046);
	v->a[75854] = 1;
	v->a[75855] = sym_variable_name;
	v->a[75856] = actions(3198);
	v->a[75857] = 1;
	v->a[75858] = anon_sym_RBRACE;
	v->a[75859] = state(2086);
	small_parse_table_3793(v);
}

void	small_parse_table_3793(t_small_parse_table_array *v)
{
	v->a[75860] = 1;
	v->a[75861] = sym__expansion_body;
	v->a[75862] = actions(3038);
	v->a[75863] = 6;
	v->a[75864] = anon_sym_BANG;
	v->a[75865] = anon_sym_DASH;
	v->a[75866] = anon_sym_STAR;
	v->a[75867] = anon_sym_QMARK;
	v->a[75868] = anon_sym_DOLLAR;
	v->a[75869] = anon_sym_AT;
	v->a[75870] = 8;
	v->a[75871] = actions(3);
	v->a[75872] = 1;
	v->a[75873] = sym_comment;
	v->a[75874] = actions(3040);
	v->a[75875] = 1;
	v->a[75876] = anon_sym_POUND;
	v->a[75877] = actions(3042);
	v->a[75878] = 1;
	v->a[75879] = aux_sym__simple_variable_name_token1;
	small_parse_table_3794(v);
}

void	small_parse_table_3794(t_small_parse_table_array *v)
{
	v->a[75880] = actions(3044);
	v->a[75881] = 1;
	v->a[75882] = anon_sym_0;
	v->a[75883] = actions(3046);
	v->a[75884] = 1;
	v->a[75885] = sym_variable_name;
	v->a[75886] = actions(3200);
	v->a[75887] = 1;
	v->a[75888] = anon_sym_RBRACE;
	v->a[75889] = state(2029);
	v->a[75890] = 1;
	v->a[75891] = sym__expansion_body;
	v->a[75892] = actions(3038);
	v->a[75893] = 6;
	v->a[75894] = anon_sym_BANG;
	v->a[75895] = anon_sym_DASH;
	v->a[75896] = anon_sym_STAR;
	v->a[75897] = anon_sym_QMARK;
	v->a[75898] = anon_sym_DOLLAR;
	v->a[75899] = anon_sym_AT;
	small_parse_table_3795(v);
}

/* EOF small_parse_table_758.c */
