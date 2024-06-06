/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1175.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5875(t_small_parse_table_array *v)
{
	v->a[117500] = state(2035);
	v->a[117501] = 7;
	v->a[117502] = sym_arithmetic_expansion;
	v->a[117503] = sym_brace_expression;
	v->a[117504] = sym_string;
	v->a[117505] = sym_number;
	v->a[117506] = sym_simple_expansion;
	v->a[117507] = sym_expansion;
	v->a[117508] = sym_command_substitution;
	v->a[117509] = 16;
	v->a[117510] = actions(3);
	v->a[117511] = 1;
	v->a[117512] = sym_comment;
	v->a[117513] = actions(2362);
	v->a[117514] = 1;
	v->a[117515] = aux_sym_number_token1;
	v->a[117516] = actions(2364);
	v->a[117517] = 1;
	v->a[117518] = aux_sym_number_token2;
	v->a[117519] = actions(2368);
	small_parse_table_5876(v);
}

void	small_parse_table_5876(t_small_parse_table_array *v)
{
	v->a[117520] = 1;
	v->a[117521] = anon_sym_DOLLAR_LPAREN;
	v->a[117522] = actions(2376);
	v->a[117523] = 1;
	v->a[117524] = sym__brace_start;
	v->a[117525] = actions(6811);
	v->a[117526] = 1;
	v->a[117527] = sym_word;
	v->a[117528] = actions(6813);
	v->a[117529] = 1;
	v->a[117530] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117531] = actions(6815);
	v->a[117532] = 1;
	v->a[117533] = sym__special_character;
	v->a[117534] = actions(6817);
	v->a[117535] = 1;
	v->a[117536] = anon_sym_DQUOTE;
	v->a[117537] = actions(6821);
	v->a[117538] = 1;
	v->a[117539] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5877(v);
}

void	small_parse_table_5877(t_small_parse_table_array *v)
{
	v->a[117540] = actions(6823);
	v->a[117541] = 1;
	v->a[117542] = anon_sym_BQUOTE;
	v->a[117543] = actions(6825);
	v->a[117544] = 1;
	v->a[117545] = anon_sym_DOLLAR_BQUOTE;
	v->a[117546] = actions(6827);
	v->a[117547] = 1;
	v->a[117548] = sym__comment_word;
	v->a[117549] = actions(6909);
	v->a[117550] = 1;
	v->a[117551] = anon_sym_DOLLAR;
	v->a[117552] = actions(6819);
	v->a[117553] = 3;
	v->a[117554] = sym_test_operator;
	v->a[117555] = sym__bare_dollar;
	v->a[117556] = sym_raw_string;
	v->a[117557] = state(2035);
	v->a[117558] = 7;
	v->a[117559] = sym_arithmetic_expansion;
	small_parse_table_5878(v);
}

void	small_parse_table_5878(t_small_parse_table_array *v)
{
	v->a[117560] = sym_brace_expression;
	v->a[117561] = sym_string;
	v->a[117562] = sym_number;
	v->a[117563] = sym_simple_expansion;
	v->a[117564] = sym_expansion;
	v->a[117565] = sym_command_substitution;
	v->a[117566] = 16;
	v->a[117567] = actions(3);
	v->a[117568] = 1;
	v->a[117569] = sym_comment;
	v->a[117570] = actions(2466);
	v->a[117571] = 1;
	v->a[117572] = aux_sym_number_token1;
	v->a[117573] = actions(2468);
	v->a[117574] = 1;
	v->a[117575] = aux_sym_number_token2;
	v->a[117576] = actions(2472);
	v->a[117577] = 1;
	v->a[117578] = anon_sym_DOLLAR_LPAREN;
	v->a[117579] = actions(2482);
	small_parse_table_5879(v);
}

void	small_parse_table_5879(t_small_parse_table_array *v)
{
	v->a[117580] = 1;
	v->a[117581] = sym__brace_start;
	v->a[117582] = actions(6051);
	v->a[117583] = 1;
	v->a[117584] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117585] = actions(6055);
	v->a[117586] = 1;
	v->a[117587] = anon_sym_DQUOTE;
	v->a[117588] = actions(6057);
	v->a[117589] = 1;
	v->a[117590] = anon_sym_DOLLAR_LBRACE;
	v->a[117591] = actions(6059);
	v->a[117592] = 1;
	v->a[117593] = anon_sym_BQUOTE;
	v->a[117594] = actions(6061);
	v->a[117595] = 1;
	v->a[117596] = anon_sym_DOLLAR_BQUOTE;
	v->a[117597] = actions(6779);
	v->a[117598] = 1;
	v->a[117599] = sym_word;
	small_parse_table_5880(v);
}

/* EOF small_parse_table_1175.c */
