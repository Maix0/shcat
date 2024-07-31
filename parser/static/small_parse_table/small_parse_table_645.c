/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_645.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3225(t_small_parse_table_array *v)
{
	v->a[64500] = anon_sym_DOLLAR;
	v->a[64501] = actions(2853);
	v->a[64502] = 1;
	v->a[64503] = anon_sym_DQUOTE;
	v->a[64504] = state(1370);
	v->a[64505] = 1;
	v->a[64506] = aux_sym_string_repeat1;
	v->a[64507] = state(1477);
	v->a[64508] = 4;
	v->a[64509] = sym_arithmetic_expansion;
	v->a[64510] = sym_simple_expansion;
	v->a[64511] = sym_expansion;
	v->a[64512] = sym_command_substitution;
	v->a[64513] = 3;
	v->a[64514] = actions(407);
	v->a[64515] = 1;
	v->a[64516] = sym_comment;
	v->a[64517] = actions(1770);
	v->a[64518] = 4;
	v->a[64519] = anon_sym_PIPE;
	small_parse_table_3226(v);
}

void	small_parse_table_3226(t_small_parse_table_array *v)
{
	v->a[64520] = anon_sym_LT;
	v->a[64521] = anon_sym_GT;
	v->a[64522] = anon_sym_LT_LT;
	v->a[64523] = actions(1768);
	v->a[64524] = 8;
	v->a[64525] = anon_sym_AMP_AMP;
	v->a[64526] = anon_sym_PIPE_PIPE;
	v->a[64527] = anon_sym_GT_GT;
	v->a[64528] = anon_sym_LT_AMP;
	v->a[64529] = anon_sym_GT_AMP;
	v->a[64530] = anon_sym_GT_PIPE;
	v->a[64531] = anon_sym_LT_GT;
	v->a[64532] = anon_sym_LT_LT_DASH;
	v->a[64533] = 8;
	v->a[64534] = actions(3);
	v->a[64535] = 1;
	v->a[64536] = sym_comment;
	v->a[64537] = actions(2566);
	v->a[64538] = 1;
	v->a[64539] = anon_sym_POUND;
	small_parse_table_3227(v);
}

void	small_parse_table_3227(t_small_parse_table_array *v)
{
	v->a[64540] = actions(2568);
	v->a[64541] = 1;
	v->a[64542] = aux_sym__simple_variable_name_token1;
	v->a[64543] = actions(2570);
	v->a[64544] = 1;
	v->a[64545] = anon_sym_0;
	v->a[64546] = actions(2572);
	v->a[64547] = 1;
	v->a[64548] = sym_variable_name;
	v->a[64549] = actions(2855);
	v->a[64550] = 1;
	v->a[64551] = anon_sym_RBRACE;
	v->a[64552] = state(1675);
	v->a[64553] = 1;
	v->a[64554] = sym__expansion_body;
	v->a[64555] = actions(2564);
	v->a[64556] = 6;
	v->a[64557] = anon_sym_BANG;
	v->a[64558] = anon_sym_DASH;
	v->a[64559] = anon_sym_STAR;
	small_parse_table_3228(v);
}

void	small_parse_table_3228(t_small_parse_table_array *v)
{
	v->a[64560] = anon_sym_QMARK;
	v->a[64561] = anon_sym_DOLLAR;
	v->a[64562] = anon_sym_AT;
	v->a[64563] = 10;
	v->a[64564] = actions(3);
	v->a[64565] = 1;
	v->a[64566] = sym_comment;
	v->a[64567] = actions(2548);
	v->a[64568] = 1;
	v->a[64569] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64570] = actions(2554);
	v->a[64571] = 1;
	v->a[64572] = sym_string_content;
	v->a[64573] = actions(2556);
	v->a[64574] = 1;
	v->a[64575] = anon_sym_DOLLAR_LBRACE;
	v->a[64576] = actions(2558);
	v->a[64577] = 1;
	v->a[64578] = anon_sym_DOLLAR_LPAREN;
	v->a[64579] = actions(2560);
	small_parse_table_3229(v);
}

void	small_parse_table_3229(t_small_parse_table_array *v)
{
	v->a[64580] = 1;
	v->a[64581] = anon_sym_BQUOTE;
	v->a[64582] = actions(2857);
	v->a[64583] = 1;
	v->a[64584] = anon_sym_DOLLAR;
	v->a[64585] = actions(2859);
	v->a[64586] = 1;
	v->a[64587] = anon_sym_DQUOTE;
	v->a[64588] = state(1419);
	v->a[64589] = 1;
	v->a[64590] = aux_sym_string_repeat1;
	v->a[64591] = state(1477);
	v->a[64592] = 4;
	v->a[64593] = sym_arithmetic_expansion;
	v->a[64594] = sym_simple_expansion;
	v->a[64595] = sym_expansion;
	v->a[64596] = sym_command_substitution;
	v->a[64597] = 3;
	v->a[64598] = actions(407);
	v->a[64599] = 1;
	small_parse_table_3230(v);
}

/* EOF small_parse_table_645.c */
