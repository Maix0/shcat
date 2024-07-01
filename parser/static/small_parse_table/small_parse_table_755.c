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
	v->a[75500] = 10;
	v->a[75501] = actions(3);
	v->a[75502] = 1;
	v->a[75503] = sym_comment;
	v->a[75504] = actions(1504);
	v->a[75505] = 1;
	v->a[75506] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75507] = actions(1506);
	v->a[75508] = 1;
	v->a[75509] = anon_sym_DOLLAR;
	v->a[75510] = actions(1508);
	v->a[75511] = 1;
	v->a[75512] = anon_sym_DQUOTE;
	v->a[75513] = actions(1510);
	v->a[75514] = 1;
	v->a[75515] = anon_sym_DOLLAR_LBRACE;
	v->a[75516] = actions(1512);
	v->a[75517] = 1;
	v->a[75518] = anon_sym_DOLLAR_LPAREN;
	v->a[75519] = actions(1514);
	small_parse_table_3776(v);
}

void	small_parse_table_3776(t_small_parse_table_array *v)
{
	v->a[75520] = 1;
	v->a[75521] = anon_sym_BQUOTE;
	v->a[75522] = actions(2824);
	v->a[75523] = 1;
	v->a[75524] = sym__bare_dollar;
	v->a[75525] = actions(2822);
	v->a[75526] = 5;
	v->a[75527] = aux_sym_concatenation_token1;
	v->a[75528] = sym_raw_string;
	v->a[75529] = sym_number;
	v->a[75530] = sym__comment_word;
	v->a[75531] = sym_word;
	v->a[75532] = state(963);
	v->a[75533] = 5;
	v->a[75534] = sym_arithmetic_expansion;
	v->a[75535] = sym_string;
	v->a[75536] = sym_simple_expansion;
	v->a[75537] = sym_expansion;
	v->a[75538] = sym_command_substitution;
	v->a[75539] = 10;
	small_parse_table_3777(v);
}

void	small_parse_table_3777(t_small_parse_table_array *v)
{
	v->a[75540] = actions(3);
	v->a[75541] = 1;
	v->a[75542] = sym_comment;
	v->a[75543] = actions(1796);
	v->a[75544] = 1;
	v->a[75545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75546] = actions(1800);
	v->a[75547] = 1;
	v->a[75548] = anon_sym_DQUOTE;
	v->a[75549] = actions(1802);
	v->a[75550] = 1;
	v->a[75551] = anon_sym_DOLLAR_LBRACE;
	v->a[75552] = actions(1804);
	v->a[75553] = 1;
	v->a[75554] = anon_sym_DOLLAR_LPAREN;
	v->a[75555] = actions(1806);
	v->a[75556] = 1;
	v->a[75557] = anon_sym_BQUOTE;
	v->a[75558] = actions(2782);
	v->a[75559] = 1;
	small_parse_table_3778(v);
}

void	small_parse_table_3778(t_small_parse_table_array *v)
{
	v->a[75560] = sym__bare_dollar;
	v->a[75561] = actions(2826);
	v->a[75562] = 1;
	v->a[75563] = anon_sym_DOLLAR;
	v->a[75564] = actions(2780);
	v->a[75565] = 5;
	v->a[75566] = aux_sym_concatenation_token1;
	v->a[75567] = sym_raw_string;
	v->a[75568] = sym_number;
	v->a[75569] = sym__comment_word;
	v->a[75570] = sym_word;
	v->a[75571] = state(1656);
	v->a[75572] = 5;
	v->a[75573] = sym_arithmetic_expansion;
	v->a[75574] = sym_string;
	v->a[75575] = sym_simple_expansion;
	v->a[75576] = sym_expansion;
	v->a[75577] = sym_command_substitution;
	v->a[75578] = 12;
	v->a[75579] = actions(3);
	small_parse_table_3779(v);
}

void	small_parse_table_3779(t_small_parse_table_array *v)
{
	v->a[75580] = 1;
	v->a[75581] = sym_comment;
	v->a[75582] = actions(2663);
	v->a[75583] = 1;
	v->a[75584] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75585] = actions(2667);
	v->a[75586] = 1;
	v->a[75587] = anon_sym_DQUOTE;
	v->a[75588] = actions(2669);
	v->a[75589] = 1;
	v->a[75590] = anon_sym_DOLLAR_LBRACE;
	v->a[75591] = actions(2671);
	v->a[75592] = 1;
	v->a[75593] = anon_sym_DOLLAR_LPAREN;
	v->a[75594] = actions(2673);
	v->a[75595] = 1;
	v->a[75596] = anon_sym_BQUOTE;
	v->a[75597] = actions(2830);
	v->a[75598] = 1;
	v->a[75599] = anon_sym_DOLLAR;
	small_parse_table_3780(v);
}

/* EOF small_parse_table_755.c */
