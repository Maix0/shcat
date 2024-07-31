/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_625.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3125(t_small_parse_table_array *v)
{
	v->a[62500] = 1;
	v->a[62501] = anon_sym_POUND;
	v->a[62502] = actions(2568);
	v->a[62503] = 1;
	v->a[62504] = aux_sym__simple_variable_name_token1;
	v->a[62505] = actions(2570);
	v->a[62506] = 1;
	v->a[62507] = anon_sym_0;
	v->a[62508] = actions(2572);
	v->a[62509] = 1;
	v->a[62510] = sym_variable_name;
	v->a[62511] = actions(2693);
	v->a[62512] = 1;
	v->a[62513] = anon_sym_RBRACE;
	v->a[62514] = state(1704);
	v->a[62515] = 1;
	v->a[62516] = sym__expansion_body;
	v->a[62517] = actions(2564);
	v->a[62518] = 6;
	v->a[62519] = anon_sym_BANG;
	small_parse_table_3126(v);
}

void	small_parse_table_3126(t_small_parse_table_array *v)
{
	v->a[62520] = anon_sym_DASH;
	v->a[62521] = anon_sym_STAR;
	v->a[62522] = anon_sym_QMARK;
	v->a[62523] = anon_sym_DOLLAR;
	v->a[62524] = anon_sym_AT;
	v->a[62525] = 3;
	v->a[62526] = actions(407);
	v->a[62527] = 1;
	v->a[62528] = sym_comment;
	v->a[62529] = actions(1887);
	v->a[62530] = 4;
	v->a[62531] = anon_sym_PIPE;
	v->a[62532] = anon_sym_LT;
	v->a[62533] = anon_sym_GT;
	v->a[62534] = anon_sym_LT_LT;
	v->a[62535] = actions(1885);
	v->a[62536] = 8;
	v->a[62537] = anon_sym_AMP_AMP;
	v->a[62538] = anon_sym_PIPE_PIPE;
	v->a[62539] = anon_sym_GT_GT;
	small_parse_table_3127(v);
}

void	small_parse_table_3127(t_small_parse_table_array *v)
{
	v->a[62540] = anon_sym_LT_AMP;
	v->a[62541] = anon_sym_GT_AMP;
	v->a[62542] = anon_sym_GT_PIPE;
	v->a[62543] = anon_sym_LT_GT;
	v->a[62544] = anon_sym_LT_LT_DASH;
	v->a[62545] = 8;
	v->a[62546] = actions(3);
	v->a[62547] = 1;
	v->a[62548] = sym_comment;
	v->a[62549] = actions(2566);
	v->a[62550] = 1;
	v->a[62551] = anon_sym_POUND;
	v->a[62552] = actions(2568);
	v->a[62553] = 1;
	v->a[62554] = aux_sym__simple_variable_name_token1;
	v->a[62555] = actions(2570);
	v->a[62556] = 1;
	v->a[62557] = anon_sym_0;
	v->a[62558] = actions(2572);
	v->a[62559] = 1;
	small_parse_table_3128(v);
}

void	small_parse_table_3128(t_small_parse_table_array *v)
{
	v->a[62560] = sym_variable_name;
	v->a[62561] = actions(2695);
	v->a[62562] = 1;
	v->a[62563] = anon_sym_RBRACE;
	v->a[62564] = state(1647);
	v->a[62565] = 1;
	v->a[62566] = sym__expansion_body;
	v->a[62567] = actions(2564);
	v->a[62568] = 6;
	v->a[62569] = anon_sym_BANG;
	v->a[62570] = anon_sym_DASH;
	v->a[62571] = anon_sym_STAR;
	v->a[62572] = anon_sym_QMARK;
	v->a[62573] = anon_sym_DOLLAR;
	v->a[62574] = anon_sym_AT;
	v->a[62575] = 10;
	v->a[62576] = actions(3);
	v->a[62577] = 1;
	v->a[62578] = sym_comment;
	v->a[62579] = actions(2548);
	small_parse_table_3129(v);
}

void	small_parse_table_3129(t_small_parse_table_array *v)
{
	v->a[62580] = 1;
	v->a[62581] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62582] = actions(2554);
	v->a[62583] = 1;
	v->a[62584] = sym_string_content;
	v->a[62585] = actions(2556);
	v->a[62586] = 1;
	v->a[62587] = anon_sym_DOLLAR_LBRACE;
	v->a[62588] = actions(2558);
	v->a[62589] = 1;
	v->a[62590] = anon_sym_DOLLAR_LPAREN;
	v->a[62591] = actions(2560);
	v->a[62592] = 1;
	v->a[62593] = anon_sym_BQUOTE;
	v->a[62594] = actions(2697);
	v->a[62595] = 1;
	v->a[62596] = anon_sym_DOLLAR;
	v->a[62597] = actions(2699);
	v->a[62598] = 1;
	v->a[62599] = anon_sym_DQUOTE;
	small_parse_table_3130(v);
}

/* EOF small_parse_table_625.c */
