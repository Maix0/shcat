/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2095.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10475(t_small_parse_table_array *v)
{
	v->a[209500] = 1;
	v->a[209501] = anon_sym_TILDE;
	v->a[209502] = actions(9374);
	v->a[209503] = 1;
	v->a[209504] = anon_sym_DOLLAR;
	v->a[209505] = actions(9376);
	v->a[209506] = 1;
	v->a[209507] = anon_sym_DQUOTE;
	v->a[209508] = actions(9378);
	v->a[209509] = 1;
	v->a[209510] = aux_sym_number_token1;
	v->a[209511] = actions(9380);
	v->a[209512] = 1;
	v->a[209513] = aux_sym_number_token2;
	v->a[209514] = actions(9382);
	v->a[209515] = 1;
	v->a[209516] = anon_sym_DOLLAR_LBRACE;
	v->a[209517] = actions(9384);
	v->a[209518] = 1;
	v->a[209519] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_10476(v);
}

void	small_parse_table_10476(t_small_parse_table_array *v)
{
	v->a[209520] = actions(9386);
	v->a[209521] = 1;
	v->a[209522] = anon_sym_BQUOTE;
	v->a[209523] = actions(9388);
	v->a[209524] = 1;
	v->a[209525] = anon_sym_DOLLAR_BQUOTE;
	v->a[209526] = actions(9392);
	v->a[209527] = 1;
	v->a[209528] = sym_variable_name;
	v->a[209529] = actions(9882);
	v->a[209530] = 1;
	v->a[209531] = aux_sym__simple_variable_name_token1;
	v->a[209532] = state(3391);
	v->a[209533] = 1;
	v->a[209534] = sym__arithmetic_binary_expression;
	v->a[209535] = state(3396);
	v->a[209536] = 1;
	v->a[209537] = sym__arithmetic_ternary_expression;
	v->a[209538] = state(3398);
	v->a[209539] = 1;
	small_parse_table_10477(v);
}

void	small_parse_table_10477(t_small_parse_table_array *v)
{
	v->a[209540] = sym__arithmetic_unary_expression;
	v->a[209541] = state(3400);
	v->a[209542] = 1;
	v->a[209543] = sym__arithmetic_postfix_expression;
	v->a[209544] = actions(9368);
	v->a[209545] = 2;
	v->a[209546] = anon_sym_PLUS_PLUS2;
	v->a[209547] = anon_sym_DASH_DASH2;
	v->a[209548] = actions(9370);
	v->a[209549] = 2;
	v->a[209550] = anon_sym_DASH2;
	v->a[209551] = anon_sym_PLUS2;
	v->a[209552] = state(3338);
	v->a[209553] = 9;
	v->a[209554] = sym_subscript;
	v->a[209555] = sym__arithmetic_expression;
	v->a[209556] = sym__arithmetic_literal;
	v->a[209557] = sym__arithmetic_parenthesized_expression;
	v->a[209558] = sym_string;
	v->a[209559] = sym_number;
	small_parse_table_10478(v);
}

void	small_parse_table_10478(t_small_parse_table_array *v)
{
	v->a[209560] = sym_simple_expansion;
	v->a[209561] = sym_expansion;
	v->a[209562] = sym_command_substitution;
	v->a[209563] = 18;
	v->a[209564] = actions(3);
	v->a[209565] = 1;
	v->a[209566] = sym_comment;
	v->a[209567] = actions(3793);
	v->a[209568] = 1;
	v->a[209569] = aux_sym_number_token1;
	v->a[209570] = actions(3795);
	v->a[209571] = 1;
	v->a[209572] = aux_sym_number_token2;
	v->a[209573] = actions(3799);
	v->a[209574] = 1;
	v->a[209575] = anon_sym_DOLLAR_LPAREN;
	v->a[209576] = actions(3809);
	v->a[209577] = 1;
	v->a[209578] = sym__brace_start;
	v->a[209579] = actions(9636);
	small_parse_table_10479(v);
}

void	small_parse_table_10479(t_small_parse_table_array *v)
{
	v->a[209580] = 1;
	v->a[209581] = anon_sym_DOLLAR_LBRACK;
	v->a[209582] = actions(9640);
	v->a[209583] = 1;
	v->a[209584] = anon_sym_DQUOTE;
	v->a[209585] = actions(9644);
	v->a[209586] = 1;
	v->a[209587] = anon_sym_DOLLAR_LBRACE;
	v->a[209588] = actions(9646);
	v->a[209589] = 1;
	v->a[209590] = anon_sym_BQUOTE;
	v->a[209591] = actions(9648);
	v->a[209592] = 1;
	v->a[209593] = anon_sym_DOLLAR_BQUOTE;
	v->a[209594] = actions(9872);
	v->a[209595] = 1;
	v->a[209596] = sym_word;
	v->a[209597] = actions(9880);
	v->a[209598] = 1;
	v->a[209599] = sym__comment_word;
	small_parse_table_10480(v);
}

/* EOF small_parse_table_2095.c */
