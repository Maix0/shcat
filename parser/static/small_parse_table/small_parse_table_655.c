/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_655.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3275(t_small_parse_table_array *v)
{
	v->a[65500] = sym_simple_expansion;
	v->a[65501] = sym_expansion;
	v->a[65502] = sym_command_substitution;
	v->a[65503] = 11;
	v->a[65504] = actions(3);
	v->a[65505] = 1;
	v->a[65506] = sym_comment;
	v->a[65507] = actions(1724);
	v->a[65508] = 1;
	v->a[65509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65510] = actions(1726);
	v->a[65511] = 1;
	v->a[65512] = anon_sym_DOLLAR;
	v->a[65513] = actions(1728);
	v->a[65514] = 1;
	v->a[65515] = anon_sym_DQUOTE;
	v->a[65516] = actions(1730);
	v->a[65517] = 1;
	v->a[65518] = anon_sym_DOLLAR_LBRACE;
	v->a[65519] = actions(1732);
	small_parse_table_3276(v);
}

void	small_parse_table_3276(t_small_parse_table_array *v)
{
	v->a[65520] = 1;
	v->a[65521] = anon_sym_DOLLAR_LPAREN;
	v->a[65522] = actions(1734);
	v->a[65523] = 1;
	v->a[65524] = anon_sym_BQUOTE;
	v->a[65525] = actions(1736);
	v->a[65526] = 1;
	v->a[65527] = sym_extglob_pattern;
	v->a[65528] = state(1876);
	v->a[65529] = 2;
	v->a[65530] = sym_concatenation;
	v->a[65531] = sym__extglob_blob;
	v->a[65532] = actions(2581);
	v->a[65533] = 3;
	v->a[65534] = sym_raw_string;
	v->a[65535] = sym_number;
	v->a[65536] = sym_word;
	v->a[65537] = state(1779);
	v->a[65538] = 5;
	v->a[65539] = sym_arithmetic_expansion;
	small_parse_table_3277(v);
}

void	small_parse_table_3277(t_small_parse_table_array *v)
{
	v->a[65540] = sym_string;
	v->a[65541] = sym_simple_expansion;
	v->a[65542] = sym_expansion;
	v->a[65543] = sym_command_substitution;
	v->a[65544] = 10;
	v->a[65545] = actions(3);
	v->a[65546] = 1;
	v->a[65547] = sym_comment;
	v->a[65548] = actions(2371);
	v->a[65549] = 1;
	v->a[65550] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65551] = actions(2375);
	v->a[65552] = 1;
	v->a[65553] = anon_sym_DQUOTE;
	v->a[65554] = actions(2377);
	v->a[65555] = 1;
	v->a[65556] = anon_sym_DOLLAR_LBRACE;
	v->a[65557] = actions(2379);
	v->a[65558] = 1;
	v->a[65559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3278(v);
}

void	small_parse_table_3278(t_small_parse_table_array *v)
{
	v->a[65560] = actions(2381);
	v->a[65561] = 1;
	v->a[65562] = anon_sym_BQUOTE;
	v->a[65563] = actions(2454);
	v->a[65564] = 1;
	v->a[65565] = sym__bare_dollar;
	v->a[65566] = actions(2583);
	v->a[65567] = 1;
	v->a[65568] = anon_sym_DOLLAR;
	v->a[65569] = actions(2452);
	v->a[65570] = 5;
	v->a[65571] = aux_sym_concatenation_token1;
	v->a[65572] = sym_raw_string;
	v->a[65573] = sym_number;
	v->a[65574] = sym__comment_word;
	v->a[65575] = sym_word;
	v->a[65576] = state(934);
	v->a[65577] = 5;
	v->a[65578] = sym_arithmetic_expansion;
	v->a[65579] = sym_string;
	small_parse_table_3279(v);
}

void	small_parse_table_3279(t_small_parse_table_array *v)
{
	v->a[65580] = sym_simple_expansion;
	v->a[65581] = sym_expansion;
	v->a[65582] = sym_command_substitution;
	v->a[65583] = 10;
	v->a[65584] = actions(3);
	v->a[65585] = 1;
	v->a[65586] = sym_comment;
	v->a[65587] = actions(819);
	v->a[65588] = 1;
	v->a[65589] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65590] = actions(823);
	v->a[65591] = 1;
	v->a[65592] = anon_sym_DQUOTE;
	v->a[65593] = actions(825);
	v->a[65594] = 1;
	v->a[65595] = anon_sym_DOLLAR_LBRACE;
	v->a[65596] = actions(827);
	v->a[65597] = 1;
	v->a[65598] = anon_sym_DOLLAR_LPAREN;
	v->a[65599] = actions(829);
	small_parse_table_3280(v);
}

/* EOF small_parse_table_655.c */
