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
	v->a[52500] = anon_sym_DASH_DASH;
	v->a[52501] = actions(1752);
	v->a[52502] = 2;
	v->a[52503] = anon_sym_DASH2;
	v->a[52504] = anon_sym_PLUS2;
	v->a[52505] = actions(1760);
	v->a[52506] = 2;
	v->a[52507] = sym_number;
	v->a[52508] = aux_sym__simple_variable_name_token1;
	v->a[52509] = state(271);
	v->a[52510] = 3;
	v->a[52511] = sym_string;
	v->a[52512] = sym_simple_expansion;
	v->a[52513] = sym_expansion;
	v->a[52514] = state(314);
	v->a[52515] = 8;
	v->a[52516] = sym__arithmetic_expression;
	v->a[52517] = sym_arithmetic_literal;
	v->a[52518] = sym_arithmetic_binary_expression;
	v->a[52519] = sym_arithmetic_ternary_expression;
	small_parse_table_2626(v);
}

void	small_parse_table_2626(t_small_parse_table_array *v)
{
	v->a[52520] = sym_arithmetic_unary_expression;
	v->a[52521] = sym_arithmetic_postfix_expression;
	v->a[52522] = sym_arithmetic_parenthesized_expression;
	v->a[52523] = sym_command_substitution;
	v->a[52524] = 18;
	v->a[52525] = actions(3);
	v->a[52526] = 1;
	v->a[52527] = sym_comment;
	v->a[52528] = actions(1774);
	v->a[52529] = 1;
	v->a[52530] = anon_sym_LPAREN;
	v->a[52531] = actions(1778);
	v->a[52532] = 1;
	v->a[52533] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52534] = actions(1780);
	v->a[52535] = 1;
	v->a[52536] = anon_sym_DOLLAR;
	v->a[52537] = actions(1782);
	v->a[52538] = 1;
	v->a[52539] = anon_sym_DQUOTE;
	small_parse_table_2627(v);
}

void	small_parse_table_2627(t_small_parse_table_array *v)
{
	v->a[52540] = actions(1784);
	v->a[52541] = 1;
	v->a[52542] = anon_sym_DOLLAR_LBRACE;
	v->a[52543] = actions(1786);
	v->a[52544] = 1;
	v->a[52545] = anon_sym_DOLLAR_LPAREN;
	v->a[52546] = actions(1788);
	v->a[52547] = 1;
	v->a[52548] = anon_sym_BQUOTE;
	v->a[52549] = actions(1790);
	v->a[52550] = 1;
	v->a[52551] = sym_extglob_pattern;
	v->a[52552] = actions(1846);
	v->a[52553] = 1;
	v->a[52554] = anon_sym_esac;
	v->a[52555] = state(1175);
	v->a[52556] = 1;
	v->a[52557] = sym_terminator;
	v->a[52558] = state(1238);
	v->a[52559] = 1;
	small_parse_table_2628(v);
}

void	small_parse_table_2628(t_small_parse_table_array *v)
{
	v->a[52560] = aux_sym_case_statement_repeat1;
	v->a[52561] = state(1920);
	v->a[52562] = 1;
	v->a[52563] = sym_case_item;
	v->a[52564] = state(2157);
	v->a[52565] = 1;
	v->a[52566] = sym__case_item_last;
	v->a[52567] = state(2096);
	v->a[52568] = 2;
	v->a[52569] = sym_concatenation;
	v->a[52570] = sym__extglob_blob;
	v->a[52571] = actions(1770);
	v->a[52572] = 3;
	v->a[52573] = sym_raw_string;
	v->a[52574] = sym_number;
	v->a[52575] = sym_word;
	v->a[52576] = actions(1776);
	v->a[52577] = 4;
	v->a[52578] = anon_sym_SEMI_SEMI;
	v->a[52579] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2629(v);
}

void	small_parse_table_2629(t_small_parse_table_array *v)
{
	v->a[52580] = anon_sym_AMP;
	v->a[52581] = anon_sym_SEMI;
	v->a[52582] = state(2001);
	v->a[52583] = 5;
	v->a[52584] = sym_arithmetic_expansion;
	v->a[52585] = sym_string;
	v->a[52586] = sym_simple_expansion;
	v->a[52587] = sym_expansion;
	v->a[52588] = sym_command_substitution;
	v->a[52589] = 16;
	v->a[52590] = actions(870);
	v->a[52591] = 1;
	v->a[52592] = sym_comment;
	v->a[52593] = actions(1744);
	v->a[52594] = 1;
	v->a[52595] = anon_sym_LPAREN;
	v->a[52596] = actions(1746);
	v->a[52597] = 1;
	v->a[52598] = anon_sym_BANG;
	v->a[52599] = actions(1754);
	small_parse_table_2630(v);
}

/* EOF small_parse_table_525.c */
