/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2985.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14925(t_small_parse_table_array *v)
{
	v->a[298500] = 1;
	v->a[298501] = anon_sym_DOLLAR_LBRACE;
	v->a[298502] = actions(13070);
	v->a[298503] = 1;
	v->a[298504] = anon_sym_DOLLAR_LPAREN;
	v->a[298505] = actions(13072);
	v->a[298506] = 1;
	v->a[298507] = anon_sym_BQUOTE;
	v->a[298508] = actions(13074);
	v->a[298509] = 1;
	v->a[298510] = anon_sym_DOLLAR_BQUOTE;
	v->a[298511] = actions(13510);
	v->a[298512] = 1;
	v->a[298513] = anon_sym_DOLLAR;
	v->a[298514] = actions(13512);
	v->a[298515] = 1;
	v->a[298516] = anon_sym_DQUOTE;
	v->a[298517] = state(5768);
	v->a[298518] = 1;
	v->a[298519] = aux_sym_string_repeat1;
	small_parse_table_14926(v);
}

void	small_parse_table_14926(t_small_parse_table_array *v)
{
	v->a[298520] = actions(13058);
	v->a[298521] = 2;
	v->a[298522] = anon_sym_LPAREN_LPAREN;
	v->a[298523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[298524] = state(6127);
	v->a[298525] = 4;
	v->a[298526] = sym_arithmetic_expansion;
	v->a[298527] = sym_simple_expansion;
	v->a[298528] = sym_expansion;
	v->a[298529] = sym_command_substitution;
	v->a[298530] = 12;
	v->a[298531] = actions(3);
	v->a[298532] = 1;
	v->a[298533] = sym_comment;
	v->a[298534] = actions(13060);
	v->a[298535] = 1;
	v->a[298536] = anon_sym_DOLLAR_LBRACK;
	v->a[298537] = actions(13066);
	v->a[298538] = 1;
	v->a[298539] = sym_string_content;
	small_parse_table_14927(v);
}

void	small_parse_table_14927(t_small_parse_table_array *v)
{
	v->a[298540] = actions(13068);
	v->a[298541] = 1;
	v->a[298542] = anon_sym_DOLLAR_LBRACE;
	v->a[298543] = actions(13070);
	v->a[298544] = 1;
	v->a[298545] = anon_sym_DOLLAR_LPAREN;
	v->a[298546] = actions(13072);
	v->a[298547] = 1;
	v->a[298548] = anon_sym_BQUOTE;
	v->a[298549] = actions(13074);
	v->a[298550] = 1;
	v->a[298551] = anon_sym_DOLLAR_BQUOTE;
	v->a[298552] = actions(13514);
	v->a[298553] = 1;
	v->a[298554] = anon_sym_DOLLAR;
	v->a[298555] = actions(13516);
	v->a[298556] = 1;
	v->a[298557] = anon_sym_DQUOTE;
	v->a[298558] = state(5810);
	v->a[298559] = 1;
	small_parse_table_14928(v);
}

void	small_parse_table_14928(t_small_parse_table_array *v)
{
	v->a[298560] = aux_sym_string_repeat1;
	v->a[298561] = actions(13058);
	v->a[298562] = 2;
	v->a[298563] = anon_sym_LPAREN_LPAREN;
	v->a[298564] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[298565] = state(6127);
	v->a[298566] = 4;
	v->a[298567] = sym_arithmetic_expansion;
	v->a[298568] = sym_simple_expansion;
	v->a[298569] = sym_expansion;
	v->a[298570] = sym_command_substitution;
	v->a[298571] = 12;
	v->a[298572] = actions(3);
	v->a[298573] = 1;
	v->a[298574] = sym_comment;
	v->a[298575] = actions(13060);
	v->a[298576] = 1;
	v->a[298577] = anon_sym_DOLLAR_LBRACK;
	v->a[298578] = actions(13066);
	v->a[298579] = 1;
	small_parse_table_14929(v);
}

void	small_parse_table_14929(t_small_parse_table_array *v)
{
	v->a[298580] = sym_string_content;
	v->a[298581] = actions(13068);
	v->a[298582] = 1;
	v->a[298583] = anon_sym_DOLLAR_LBRACE;
	v->a[298584] = actions(13070);
	v->a[298585] = 1;
	v->a[298586] = anon_sym_DOLLAR_LPAREN;
	v->a[298587] = actions(13072);
	v->a[298588] = 1;
	v->a[298589] = anon_sym_BQUOTE;
	v->a[298590] = actions(13074);
	v->a[298591] = 1;
	v->a[298592] = anon_sym_DOLLAR_BQUOTE;
	v->a[298593] = actions(13518);
	v->a[298594] = 1;
	v->a[298595] = anon_sym_DOLLAR;
	v->a[298596] = actions(13520);
	v->a[298597] = 1;
	v->a[298598] = anon_sym_DQUOTE;
	v->a[298599] = state(5768);
	small_parse_table_14930(v);
}

/* EOF small_parse_table_2985.c */
