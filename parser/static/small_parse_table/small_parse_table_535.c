/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_535.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2675(t_small_parse_table_array *v)
{
	v->a[53500] = anon_sym_PLUS2;
	v->a[53501] = actions(1760);
	v->a[53502] = 2;
	v->a[53503] = sym_number;
	v->a[53504] = aux_sym__simple_variable_name_token1;
	v->a[53505] = state(271);
	v->a[53506] = 3;
	v->a[53507] = sym_string;
	v->a[53508] = sym_simple_expansion;
	v->a[53509] = sym_expansion;
	v->a[53510] = state(360);
	v->a[53511] = 8;
	v->a[53512] = sym__arithmetic_expression;
	v->a[53513] = sym_arithmetic_literal;
	v->a[53514] = sym_arithmetic_binary_expression;
	v->a[53515] = sym_arithmetic_ternary_expression;
	v->a[53516] = sym_arithmetic_unary_expression;
	v->a[53517] = sym_arithmetic_postfix_expression;
	v->a[53518] = sym_arithmetic_parenthesized_expression;
	v->a[53519] = sym_command_substitution;
	small_parse_table_2676(v);
}

void	small_parse_table_2676(t_small_parse_table_array *v)
{
	v->a[53520] = 6;
	v->a[53521] = actions(3);
	v->a[53522] = 1;
	v->a[53523] = sym_comment;
	v->a[53524] = actions(379);
	v->a[53525] = 1;
	v->a[53526] = sym_file_descriptor;
	v->a[53527] = actions(1435);
	v->a[53528] = 1;
	v->a[53529] = sym_variable_name;
	v->a[53530] = actions(1433);
	v->a[53531] = 2;
	v->a[53532] = aux_sym__simple_variable_name_token1;
	v->a[53533] = aux_sym__multiline_variable_name_token1;
	v->a[53534] = actions(1431);
	v->a[53535] = 9;
	v->a[53536] = anon_sym_BANG;
	v->a[53537] = anon_sym_DASH;
	v->a[53538] = anon_sym_STAR;
	v->a[53539] = anon_sym_QMARK;
	small_parse_table_2677(v);
}

void	small_parse_table_2677(t_small_parse_table_array *v)
{
	v->a[53540] = anon_sym_DOLLAR;
	v->a[53541] = anon_sym_POUND;
	v->a[53542] = anon_sym_AT;
	v->a[53543] = anon_sym_0;
	v->a[53544] = anon_sym__;
	v->a[53545] = actions(381);
	v->a[53546] = 14;
	v->a[53547] = anon_sym_PIPE;
	v->a[53548] = anon_sym_AMP_AMP;
	v->a[53549] = anon_sym_PIPE_PIPE;
	v->a[53550] = anon_sym_LT;
	v->a[53551] = anon_sym_GT;
	v->a[53552] = anon_sym_GT_GT;
	v->a[53553] = anon_sym_LT_AMP;
	v->a[53554] = anon_sym_GT_AMP;
	v->a[53555] = anon_sym_GT_PIPE;
	v->a[53556] = anon_sym_LT_AMP_DASH;
	v->a[53557] = anon_sym_GT_AMP_DASH;
	v->a[53558] = anon_sym_LT_LT;
	v->a[53559] = anon_sym_LT_LT_DASH;
	small_parse_table_2678(v);
}

void	small_parse_table_2678(t_small_parse_table_array *v)
{
	v->a[53560] = aux_sym_heredoc_redirect_token1;
	v->a[53561] = 18;
	v->a[53562] = actions(3);
	v->a[53563] = 1;
	v->a[53564] = sym_comment;
	v->a[53565] = actions(1774);
	v->a[53566] = 1;
	v->a[53567] = anon_sym_LPAREN;
	v->a[53568] = actions(1778);
	v->a[53569] = 1;
	v->a[53570] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53571] = actions(1780);
	v->a[53572] = 1;
	v->a[53573] = anon_sym_DOLLAR;
	v->a[53574] = actions(1782);
	v->a[53575] = 1;
	v->a[53576] = anon_sym_DQUOTE;
	v->a[53577] = actions(1784);
	v->a[53578] = 1;
	v->a[53579] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2679(v);
}

void	small_parse_table_2679(t_small_parse_table_array *v)
{
	v->a[53580] = actions(1786);
	v->a[53581] = 1;
	v->a[53582] = anon_sym_DOLLAR_LPAREN;
	v->a[53583] = actions(1788);
	v->a[53584] = 1;
	v->a[53585] = anon_sym_BQUOTE;
	v->a[53586] = actions(1790);
	v->a[53587] = 1;
	v->a[53588] = sym_extglob_pattern;
	v->a[53589] = actions(1880);
	v->a[53590] = 1;
	v->a[53591] = anon_sym_esac;
	v->a[53592] = state(1120);
	v->a[53593] = 1;
	v->a[53594] = sym_terminator;
	v->a[53595] = state(1245);
	v->a[53596] = 1;
	v->a[53597] = aux_sym_case_statement_repeat1;
	v->a[53598] = state(1920);
	v->a[53599] = 1;
	small_parse_table_2680(v);
}

/* EOF small_parse_table_535.c */
