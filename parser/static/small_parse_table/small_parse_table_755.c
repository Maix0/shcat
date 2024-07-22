/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_755.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3775(t_small_parse_table_array *v)
{
	v->a[75500] = actions(3146);
	v->a[75501] = 1;
	v->a[75502] = anon_sym_DQUOTE;
	v->a[75503] = state(1602);
	v->a[75504] = 1;
	v->a[75505] = aux_sym_string_repeat1;
	v->a[75506] = state(1748);
	v->a[75507] = 4;
	v->a[75508] = sym_arithmetic_expansion;
	v->a[75509] = sym_simple_expansion;
	v->a[75510] = sym_expansion;
	v->a[75511] = sym_command_substitution;
	v->a[75512] = 8;
	v->a[75513] = actions(3);
	v->a[75514] = 1;
	v->a[75515] = sym_comment;
	v->a[75516] = actions(3040);
	v->a[75517] = 1;
	v->a[75518] = anon_sym_POUND;
	v->a[75519] = actions(3042);
	small_parse_table_3776(v);
}

void	small_parse_table_3776(t_small_parse_table_array *v)
{
	v->a[75520] = 1;
	v->a[75521] = aux_sym__simple_variable_name_token1;
	v->a[75522] = actions(3044);
	v->a[75523] = 1;
	v->a[75524] = anon_sym_0;
	v->a[75525] = actions(3046);
	v->a[75526] = 1;
	v->a[75527] = sym_variable_name;
	v->a[75528] = actions(3148);
	v->a[75529] = 1;
	v->a[75530] = anon_sym_RBRACE;
	v->a[75531] = state(2094);
	v->a[75532] = 1;
	v->a[75533] = sym__expansion_body;
	v->a[75534] = actions(3038);
	v->a[75535] = 6;
	v->a[75536] = anon_sym_BANG;
	v->a[75537] = anon_sym_DASH;
	v->a[75538] = anon_sym_STAR;
	v->a[75539] = anon_sym_QMARK;
	small_parse_table_3777(v);
}

void	small_parse_table_3777(t_small_parse_table_array *v)
{
	v->a[75540] = anon_sym_DOLLAR;
	v->a[75541] = anon_sym_AT;
	v->a[75542] = 10;
	v->a[75543] = actions(3);
	v->a[75544] = 1;
	v->a[75545] = sym_comment;
	v->a[75546] = actions(3150);
	v->a[75547] = 1;
	v->a[75548] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75549] = actions(3153);
	v->a[75550] = 1;
	v->a[75551] = anon_sym_DOLLAR;
	v->a[75552] = actions(3156);
	v->a[75553] = 1;
	v->a[75554] = anon_sym_DQUOTE;
	v->a[75555] = actions(3158);
	v->a[75556] = 1;
	v->a[75557] = sym_string_content;
	v->a[75558] = actions(3161);
	v->a[75559] = 1;
	small_parse_table_3778(v);
}

void	small_parse_table_3778(t_small_parse_table_array *v)
{
	v->a[75560] = anon_sym_DOLLAR_LBRACE;
	v->a[75561] = actions(3164);
	v->a[75562] = 1;
	v->a[75563] = anon_sym_DOLLAR_LPAREN;
	v->a[75564] = actions(3167);
	v->a[75565] = 1;
	v->a[75566] = anon_sym_BQUOTE;
	v->a[75567] = state(1610);
	v->a[75568] = 1;
	v->a[75569] = aux_sym_string_repeat1;
	v->a[75570] = state(1748);
	v->a[75571] = 4;
	v->a[75572] = sym_arithmetic_expansion;
	v->a[75573] = sym_simple_expansion;
	v->a[75574] = sym_expansion;
	v->a[75575] = sym_command_substitution;
	v->a[75576] = 10;
	v->a[75577] = actions(3);
	v->a[75578] = 1;
	v->a[75579] = sym_comment;
	small_parse_table_3779(v);
}

void	small_parse_table_3779(t_small_parse_table_array *v)
{
	v->a[75580] = actions(3058);
	v->a[75581] = 1;
	v->a[75582] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75583] = actions(3064);
	v->a[75584] = 1;
	v->a[75585] = sym_string_content;
	v->a[75586] = actions(3066);
	v->a[75587] = 1;
	v->a[75588] = anon_sym_DOLLAR_LBRACE;
	v->a[75589] = actions(3068);
	v->a[75590] = 1;
	v->a[75591] = anon_sym_DOLLAR_LPAREN;
	v->a[75592] = actions(3070);
	v->a[75593] = 1;
	v->a[75594] = anon_sym_BQUOTE;
	v->a[75595] = actions(3170);
	v->a[75596] = 1;
	v->a[75597] = anon_sym_DOLLAR;
	v->a[75598] = actions(3172);
	v->a[75599] = 1;
	small_parse_table_3780(v);
}

/* EOF small_parse_table_755.c */
