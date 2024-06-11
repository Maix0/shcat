/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_975.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4875(t_small_parse_table_array *v)
{
	v->a[97500] = sym_expansion;
	v->a[97501] = sym_command_substitution;
	v->a[97502] = 4;
	v->a[97503] = actions(3);
	v->a[97504] = 1;
	v->a[97505] = sym_comment;
	v->a[97506] = actions(405);
	v->a[97507] = 1;
	v->a[97508] = sym_variable_name;
	v->a[97509] = actions(403);
	v->a[97510] = 2;
	v->a[97511] = aux_sym__simple_variable_name_token1;
	v->a[97512] = aux_sym__multiline_variable_name_token1;
	v->a[97513] = actions(401);
	v->a[97514] = 9;
	v->a[97515] = anon_sym_BANG;
	v->a[97516] = anon_sym_DASH;
	v->a[97517] = anon_sym_STAR;
	v->a[97518] = anon_sym_QMARK;
	v->a[97519] = anon_sym_DOLLAR;
	small_parse_table_4876(v);
}

void	small_parse_table_4876(t_small_parse_table_array *v)
{
	v->a[97520] = anon_sym_POUND;
	v->a[97521] = anon_sym_AT;
	v->a[97522] = anon_sym_0;
	v->a[97523] = anon_sym__;
	v->a[97524] = 4;
	v->a[97525] = actions(3);
	v->a[97526] = 1;
	v->a[97527] = sym_comment;
	v->a[97528] = actions(447);
	v->a[97529] = 1;
	v->a[97530] = sym_variable_name;
	v->a[97531] = actions(445);
	v->a[97532] = 2;
	v->a[97533] = aux_sym__simple_variable_name_token1;
	v->a[97534] = aux_sym__multiline_variable_name_token1;
	v->a[97535] = actions(443);
	v->a[97536] = 9;
	v->a[97537] = anon_sym_BANG;
	v->a[97538] = anon_sym_DASH;
	v->a[97539] = anon_sym_STAR;
	small_parse_table_4877(v);
}

void	small_parse_table_4877(t_small_parse_table_array *v)
{
	v->a[97540] = anon_sym_QMARK;
	v->a[97541] = anon_sym_DOLLAR;
	v->a[97542] = anon_sym_POUND;
	v->a[97543] = anon_sym_AT;
	v->a[97544] = anon_sym_0;
	v->a[97545] = anon_sym__;
	v->a[97546] = 10;
	v->a[97547] = actions(3);
	v->a[97548] = 1;
	v->a[97549] = sym_comment;
	v->a[97550] = actions(3856);
	v->a[97551] = 1;
	v->a[97552] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97553] = actions(3862);
	v->a[97554] = 1;
	v->a[97555] = sym_string_content;
	v->a[97556] = actions(3864);
	v->a[97557] = 1;
	v->a[97558] = anon_sym_DOLLAR_LBRACE;
	v->a[97559] = actions(3866);
	small_parse_table_4878(v);
}

void	small_parse_table_4878(t_small_parse_table_array *v)
{
	v->a[97560] = 1;
	v->a[97561] = anon_sym_DOLLAR_LPAREN;
	v->a[97562] = actions(3868);
	v->a[97563] = 1;
	v->a[97564] = anon_sym_BQUOTE;
	v->a[97565] = actions(4242);
	v->a[97566] = 1;
	v->a[97567] = anon_sym_DOLLAR;
	v->a[97568] = actions(4244);
	v->a[97569] = 1;
	v->a[97570] = anon_sym_DQUOTE;
	v->a[97571] = state(1987);
	v->a[97572] = 1;
	v->a[97573] = aux_sym_string_repeat1;
	v->a[97574] = state(2107);
	v->a[97575] = 4;
	v->a[97576] = sym_arithmetic_expansion;
	v->a[97577] = sym_simple_expansion;
	v->a[97578] = sym_expansion;
	v->a[97579] = sym_command_substitution;
	small_parse_table_4879(v);
}

void	small_parse_table_4879(t_small_parse_table_array *v)
{
	v->a[97580] = 10;
	v->a[97581] = actions(3);
	v->a[97582] = 1;
	v->a[97583] = sym_comment;
	v->a[97584] = actions(3856);
	v->a[97585] = 1;
	v->a[97586] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97587] = actions(3862);
	v->a[97588] = 1;
	v->a[97589] = sym_string_content;
	v->a[97590] = actions(3864);
	v->a[97591] = 1;
	v->a[97592] = anon_sym_DOLLAR_LBRACE;
	v->a[97593] = actions(3866);
	v->a[97594] = 1;
	v->a[97595] = anon_sym_DOLLAR_LPAREN;
	v->a[97596] = actions(3868);
	v->a[97597] = 1;
	v->a[97598] = anon_sym_BQUOTE;
	v->a[97599] = actions(4246);
	small_parse_table_4880(v);
}

/* EOF small_parse_table_975.c */
