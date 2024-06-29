/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_895.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4475(t_small_parse_table_array *v)
{
	v->a[89500] = anon_sym_POUND;
	v->a[89501] = anon_sym_AT;
	v->a[89502] = anon_sym_0;
	v->a[89503] = anon_sym__;
	v->a[89504] = 10;
	v->a[89505] = actions(3);
	v->a[89506] = 1;
	v->a[89507] = sym_comment;
	v->a[89508] = actions(3414);
	v->a[89509] = 1;
	v->a[89510] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89511] = actions(3420);
	v->a[89512] = 1;
	v->a[89513] = sym_string_content;
	v->a[89514] = actions(3422);
	v->a[89515] = 1;
	v->a[89516] = anon_sym_DOLLAR_LBRACE;
	v->a[89517] = actions(3424);
	v->a[89518] = 1;
	v->a[89519] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4476(v);
}

void	small_parse_table_4476(t_small_parse_table_array *v)
{
	v->a[89520] = actions(3426);
	v->a[89521] = 1;
	v->a[89522] = anon_sym_BQUOTE;
	v->a[89523] = actions(3534);
	v->a[89524] = 1;
	v->a[89525] = anon_sym_DOLLAR;
	v->a[89526] = actions(3536);
	v->a[89527] = 1;
	v->a[89528] = anon_sym_DQUOTE;
	v->a[89529] = state(1863);
	v->a[89530] = 1;
	v->a[89531] = aux_sym_string_repeat1;
	v->a[89532] = state(1963);
	v->a[89533] = 4;
	v->a[89534] = sym_arithmetic_expansion;
	v->a[89535] = sym_simple_expansion;
	v->a[89536] = sym_expansion;
	v->a[89537] = sym_command_substitution;
	v->a[89538] = 10;
	v->a[89539] = actions(3);
	small_parse_table_4477(v);
}

void	small_parse_table_4477(t_small_parse_table_array *v)
{
	v->a[89540] = 1;
	v->a[89541] = sym_comment;
	v->a[89542] = actions(3414);
	v->a[89543] = 1;
	v->a[89544] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89545] = actions(3420);
	v->a[89546] = 1;
	v->a[89547] = sym_string_content;
	v->a[89548] = actions(3422);
	v->a[89549] = 1;
	v->a[89550] = anon_sym_DOLLAR_LBRACE;
	v->a[89551] = actions(3424);
	v->a[89552] = 1;
	v->a[89553] = anon_sym_DOLLAR_LPAREN;
	v->a[89554] = actions(3426);
	v->a[89555] = 1;
	v->a[89556] = anon_sym_BQUOTE;
	v->a[89557] = actions(3538);
	v->a[89558] = 1;
	v->a[89559] = anon_sym_DOLLAR;
	small_parse_table_4478(v);
}

void	small_parse_table_4478(t_small_parse_table_array *v)
{
	v->a[89560] = actions(3540);
	v->a[89561] = 1;
	v->a[89562] = anon_sym_DQUOTE;
	v->a[89563] = state(1838);
	v->a[89564] = 1;
	v->a[89565] = aux_sym_string_repeat1;
	v->a[89566] = state(1963);
	v->a[89567] = 4;
	v->a[89568] = sym_arithmetic_expansion;
	v->a[89569] = sym_simple_expansion;
	v->a[89570] = sym_expansion;
	v->a[89571] = sym_command_substitution;
	v->a[89572] = 4;
	v->a[89573] = actions(3);
	v->a[89574] = 1;
	v->a[89575] = sym_comment;
	v->a[89576] = actions(1306);
	v->a[89577] = 1;
	v->a[89578] = sym_variable_name;
	v->a[89579] = actions(1304);
	small_parse_table_4479(v);
}

void	small_parse_table_4479(t_small_parse_table_array *v)
{
	v->a[89580] = 2;
	v->a[89581] = aux_sym__simple_variable_name_token1;
	v->a[89582] = aux_sym__multiline_variable_name_token1;
	v->a[89583] = actions(1302);
	v->a[89584] = 9;
	v->a[89585] = anon_sym_BANG;
	v->a[89586] = anon_sym_DASH;
	v->a[89587] = anon_sym_STAR;
	v->a[89588] = anon_sym_QMARK;
	v->a[89589] = anon_sym_DOLLAR;
	v->a[89590] = anon_sym_POUND;
	v->a[89591] = anon_sym_AT;
	v->a[89592] = anon_sym_0;
	v->a[89593] = anon_sym__;
	v->a[89594] = 10;
	v->a[89595] = actions(3);
	v->a[89596] = 1;
	v->a[89597] = sym_comment;
	v->a[89598] = actions(3414);
	v->a[89599] = 1;
	small_parse_table_4480(v);
}

/* EOF small_parse_table_895.c */
