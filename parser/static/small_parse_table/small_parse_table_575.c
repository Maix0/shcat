/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_575.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2875(t_small_parse_table_array *v)
{
	v->a[57500] = actions(870);
	v->a[57501] = 1;
	v->a[57502] = sym_comment;
	v->a[57503] = actions(1744);
	v->a[57504] = 1;
	v->a[57505] = anon_sym_LPAREN;
	v->a[57506] = actions(1746);
	v->a[57507] = 1;
	v->a[57508] = anon_sym_BANG;
	v->a[57509] = actions(1754);
	v->a[57510] = 1;
	v->a[57511] = anon_sym_TILDE;
	v->a[57512] = actions(1756);
	v->a[57513] = 1;
	v->a[57514] = anon_sym_DOLLAR;
	v->a[57515] = actions(1758);
	v->a[57516] = 1;
	v->a[57517] = anon_sym_DQUOTE;
	v->a[57518] = actions(1762);
	v->a[57519] = 1;
	small_parse_table_2876(v);
}

void	small_parse_table_2876(t_small_parse_table_array *v)
{
	v->a[57520] = anon_sym_DOLLAR_LBRACE;
	v->a[57521] = actions(1764);
	v->a[57522] = 1;
	v->a[57523] = anon_sym_DOLLAR_LPAREN;
	v->a[57524] = actions(1766);
	v->a[57525] = 1;
	v->a[57526] = anon_sym_BQUOTE;
	v->a[57527] = actions(1768);
	v->a[57528] = 1;
	v->a[57529] = sym_variable_name;
	v->a[57530] = actions(1750);
	v->a[57531] = 2;
	v->a[57532] = anon_sym_PLUS_PLUS;
	v->a[57533] = anon_sym_DASH_DASH;
	v->a[57534] = actions(1752);
	v->a[57535] = 2;
	v->a[57536] = anon_sym_DASH2;
	v->a[57537] = anon_sym_PLUS2;
	v->a[57538] = actions(1760);
	v->a[57539] = 2;
	small_parse_table_2877(v);
}

void	small_parse_table_2877(t_small_parse_table_array *v)
{
	v->a[57540] = sym_number;
	v->a[57541] = aux_sym__simple_variable_name_token1;
	v->a[57542] = state(271);
	v->a[57543] = 3;
	v->a[57544] = sym_string;
	v->a[57545] = sym_simple_expansion;
	v->a[57546] = sym_expansion;
	v->a[57547] = state(286);
	v->a[57548] = 8;
	v->a[57549] = sym__arithmetic_expression;
	v->a[57550] = sym_arithmetic_literal;
	v->a[57551] = sym_arithmetic_binary_expression;
	v->a[57552] = sym_arithmetic_ternary_expression;
	v->a[57553] = sym_arithmetic_unary_expression;
	v->a[57554] = sym_arithmetic_postfix_expression;
	v->a[57555] = sym_arithmetic_parenthesized_expression;
	v->a[57556] = sym_command_substitution;
	v->a[57557] = 3;
	v->a[57558] = actions(3);
	v->a[57559] = 1;
	small_parse_table_2878(v);
}

void	small_parse_table_2878(t_small_parse_table_array *v)
{
	v->a[57560] = sym_comment;
	v->a[57561] = actions(1264);
	v->a[57562] = 2;
	v->a[57563] = sym_file_descriptor;
	v->a[57564] = sym__concat;
	v->a[57565] = actions(1266);
	v->a[57566] = 23;
	v->a[57567] = anon_sym_PIPE;
	v->a[57568] = anon_sym_AMP_AMP;
	v->a[57569] = anon_sym_PIPE_PIPE;
	v->a[57570] = anon_sym_LT;
	v->a[57571] = anon_sym_GT;
	v->a[57572] = anon_sym_GT_GT;
	v->a[57573] = anon_sym_LT_AMP;
	v->a[57574] = anon_sym_GT_AMP;
	v->a[57575] = anon_sym_GT_PIPE;
	v->a[57576] = anon_sym_LT_AMP_DASH;
	v->a[57577] = anon_sym_GT_AMP_DASH;
	v->a[57578] = anon_sym_LT_LT;
	v->a[57579] = anon_sym_LT_LT_DASH;
	small_parse_table_2879(v);
}

void	small_parse_table_2879(t_small_parse_table_array *v)
{
	v->a[57580] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57581] = aux_sym_concatenation_token1;
	v->a[57582] = anon_sym_DOLLAR;
	v->a[57583] = anon_sym_DQUOTE;
	v->a[57584] = sym_raw_string;
	v->a[57585] = sym_number;
	v->a[57586] = anon_sym_DOLLAR_LBRACE;
	v->a[57587] = anon_sym_DOLLAR_LPAREN;
	v->a[57588] = anon_sym_BQUOTE;
	v->a[57589] = sym_word;
	v->a[57590] = 3;
	v->a[57591] = actions(3);
	v->a[57592] = 1;
	v->a[57593] = sym_comment;
	v->a[57594] = actions(1037);
	v->a[57595] = 2;
	v->a[57596] = sym_file_descriptor;
	v->a[57597] = sym__concat;
	v->a[57598] = actions(1035);
	v->a[57599] = 23;
	small_parse_table_2880(v);
}

/* EOF small_parse_table_575.c */
