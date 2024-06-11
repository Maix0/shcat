/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_525.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2625(t_small_parse_table_array *v)
{
	v->a[52500] = anon_sym_DOLLAR_LPAREN;
	v->a[52501] = anon_sym_BQUOTE;
	v->a[52502] = sym_word;
	v->a[52503] = 17;
	v->a[52504] = actions(3);
	v->a[52505] = 1;
	v->a[52506] = sym_comment;
	v->a[52507] = actions(59);
	v->a[52508] = 1;
	v->a[52509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52510] = actions(61);
	v->a[52511] = 1;
	v->a[52512] = anon_sym_DOLLAR;
	v->a[52513] = actions(63);
	v->a[52514] = 1;
	v->a[52515] = anon_sym_DQUOTE;
	v->a[52516] = actions(67);
	v->a[52517] = 1;
	v->a[52518] = anon_sym_DOLLAR_LBRACE;
	v->a[52519] = actions(69);
	small_parse_table_2626(v);
}

void	small_parse_table_2626(t_small_parse_table_array *v)
{
	v->a[52520] = 1;
	v->a[52521] = anon_sym_DOLLAR_LPAREN;
	v->a[52522] = actions(71);
	v->a[52523] = 1;
	v->a[52524] = anon_sym_BQUOTE;
	v->a[52525] = actions(377);
	v->a[52526] = 1;
	v->a[52527] = sym_variable_name;
	v->a[52528] = actions(1201);
	v->a[52529] = 1;
	v->a[52530] = sym_file_descriptor;
	v->a[52531] = state(183);
	v->a[52532] = 1;
	v->a[52533] = sym_command_name;
	v->a[52534] = state(647);
	v->a[52535] = 1;
	v->a[52536] = sym_concatenation;
	v->a[52537] = state(1477);
	v->a[52538] = 1;
	v->a[52539] = sym_file_redirect;
	small_parse_table_2627(v);
}

void	small_parse_table_2627(t_small_parse_table_array *v)
{
	v->a[52540] = actions(1199);
	v->a[52541] = 2;
	v->a[52542] = anon_sym_LT_AMP_DASH;
	v->a[52543] = anon_sym_GT_AMP_DASH;
	v->a[52544] = state(1241);
	v->a[52545] = 2;
	v->a[52546] = sym_variable_assignment;
	v->a[52547] = aux_sym_command_repeat1;
	v->a[52548] = actions(228);
	v->a[52549] = 3;
	v->a[52550] = sym_raw_string;
	v->a[52551] = sym_number;
	v->a[52552] = sym_word;
	v->a[52553] = state(294);
	v->a[52554] = 5;
	v->a[52555] = sym_arithmetic_expansion;
	v->a[52556] = sym_string;
	v->a[52557] = sym_simple_expansion;
	v->a[52558] = sym_expansion;
	v->a[52559] = sym_command_substitution;
	small_parse_table_2628(v);
}

void	small_parse_table_2628(t_small_parse_table_array *v)
{
	v->a[52560] = actions(1197);
	v->a[52561] = 8;
	v->a[52562] = anon_sym_LT;
	v->a[52563] = anon_sym_GT;
	v->a[52564] = anon_sym_GT_GT;
	v->a[52565] = anon_sym_AMP_GT;
	v->a[52566] = anon_sym_AMP_GT_GT;
	v->a[52567] = anon_sym_LT_AMP;
	v->a[52568] = anon_sym_GT_AMP;
	v->a[52569] = anon_sym_GT_PIPE;
	v->a[52570] = 4;
	v->a[52571] = actions(3);
	v->a[52572] = 1;
	v->a[52573] = sym_comment;
	v->a[52574] = actions(1554);
	v->a[52575] = 2;
	v->a[52576] = anon_sym_RPAREN;
	v->a[52577] = anon_sym_SEMI_SEMI;
	v->a[52578] = actions(1556);
	v->a[52579] = 2;
	small_parse_table_2629(v);
}

void	small_parse_table_2629(t_small_parse_table_array *v)
{
	v->a[52580] = sym_file_descriptor;
	v->a[52581] = sym_variable_name;
	v->a[52582] = actions(1552);
	v->a[52583] = 27;
	v->a[52584] = anon_sym_for;
	v->a[52585] = anon_sym_while;
	v->a[52586] = anon_sym_until;
	v->a[52587] = anon_sym_if;
	v->a[52588] = anon_sym_case;
	v->a[52589] = anon_sym_LPAREN;
	v->a[52590] = anon_sym_LBRACE;
	v->a[52591] = anon_sym_BANG;
	v->a[52592] = anon_sym_LT;
	v->a[52593] = anon_sym_GT;
	v->a[52594] = anon_sym_GT_GT;
	v->a[52595] = anon_sym_AMP_GT;
	v->a[52596] = anon_sym_AMP_GT_GT;
	v->a[52597] = anon_sym_LT_AMP;
	v->a[52598] = anon_sym_GT_AMP;
	v->a[52599] = anon_sym_GT_PIPE;
	small_parse_table_2630(v);
}

/* EOF small_parse_table_525.c */
