/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_515.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2575(t_small_parse_table_array *v)
{
	v->a[51500] = actions(1283);
	v->a[51501] = 3;
	v->a[51502] = sym_file_descriptor;
	v->a[51503] = sym__concat;
	v->a[51504] = sym__bare_dollar;
	v->a[51505] = actions(1285);
	v->a[51506] = 24;
	v->a[51507] = anon_sym_LPAREN;
	v->a[51508] = anon_sym_PIPE;
	v->a[51509] = anon_sym_AMP_AMP;
	v->a[51510] = anon_sym_PIPE_PIPE;
	v->a[51511] = anon_sym_LT;
	v->a[51512] = anon_sym_GT;
	v->a[51513] = anon_sym_GT_GT;
	v->a[51514] = anon_sym_LT_AMP;
	v->a[51515] = anon_sym_GT_AMP;
	v->a[51516] = anon_sym_GT_PIPE;
	v->a[51517] = anon_sym_LT_AMP_DASH;
	v->a[51518] = anon_sym_GT_AMP_DASH;
	v->a[51519] = anon_sym_LT_LT;
	small_parse_table_2576(v);
}

void	small_parse_table_2576(t_small_parse_table_array *v)
{
	v->a[51520] = anon_sym_LT_LT_DASH;
	v->a[51521] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51522] = aux_sym_concatenation_token1;
	v->a[51523] = anon_sym_DOLLAR;
	v->a[51524] = anon_sym_DQUOTE;
	v->a[51525] = sym_raw_string;
	v->a[51526] = sym_number;
	v->a[51527] = anon_sym_DOLLAR_LBRACE;
	v->a[51528] = anon_sym_DOLLAR_LPAREN;
	v->a[51529] = anon_sym_BQUOTE;
	v->a[51530] = sym_word;
	v->a[51531] = 16;
	v->a[51532] = actions(870);
	v->a[51533] = 1;
	v->a[51534] = sym_comment;
	v->a[51535] = actions(1744);
	v->a[51536] = 1;
	v->a[51537] = anon_sym_LPAREN;
	v->a[51538] = actions(1746);
	v->a[51539] = 1;
	small_parse_table_2577(v);
}

void	small_parse_table_2577(t_small_parse_table_array *v)
{
	v->a[51540] = anon_sym_BANG;
	v->a[51541] = actions(1754);
	v->a[51542] = 1;
	v->a[51543] = anon_sym_TILDE;
	v->a[51544] = actions(1756);
	v->a[51545] = 1;
	v->a[51546] = anon_sym_DOLLAR;
	v->a[51547] = actions(1758);
	v->a[51548] = 1;
	v->a[51549] = anon_sym_DQUOTE;
	v->a[51550] = actions(1762);
	v->a[51551] = 1;
	v->a[51552] = anon_sym_DOLLAR_LBRACE;
	v->a[51553] = actions(1764);
	v->a[51554] = 1;
	v->a[51555] = anon_sym_DOLLAR_LPAREN;
	v->a[51556] = actions(1766);
	v->a[51557] = 1;
	v->a[51558] = anon_sym_BQUOTE;
	v->a[51559] = actions(1768);
	small_parse_table_2578(v);
}

void	small_parse_table_2578(t_small_parse_table_array *v)
{
	v->a[51560] = 1;
	v->a[51561] = sym_variable_name;
	v->a[51562] = actions(1820);
	v->a[51563] = 1;
	v->a[51564] = anon_sym_RPAREN_RPAREN;
	v->a[51565] = actions(1750);
	v->a[51566] = 2;
	v->a[51567] = anon_sym_PLUS_PLUS;
	v->a[51568] = anon_sym_DASH_DASH;
	v->a[51569] = actions(1752);
	v->a[51570] = 2;
	v->a[51571] = anon_sym_DASH2;
	v->a[51572] = anon_sym_PLUS2;
	v->a[51573] = actions(1760);
	v->a[51574] = 2;
	v->a[51575] = sym_number;
	v->a[51576] = aux_sym__simple_variable_name_token1;
	v->a[51577] = state(271);
	v->a[51578] = 3;
	v->a[51579] = sym_string;
	small_parse_table_2579(v);
}

void	small_parse_table_2579(t_small_parse_table_array *v)
{
	v->a[51580] = sym_simple_expansion;
	v->a[51581] = sym_expansion;
	v->a[51582] = state(391);
	v->a[51583] = 8;
	v->a[51584] = sym__arithmetic_expression;
	v->a[51585] = sym_arithmetic_literal;
	v->a[51586] = sym_arithmetic_binary_expression;
	v->a[51587] = sym_arithmetic_ternary_expression;
	v->a[51588] = sym_arithmetic_unary_expression;
	v->a[51589] = sym_arithmetic_postfix_expression;
	v->a[51590] = sym_arithmetic_parenthesized_expression;
	v->a[51591] = sym_command_substitution;
	v->a[51592] = 16;
	v->a[51593] = actions(870);
	v->a[51594] = 1;
	v->a[51595] = sym_comment;
	v->a[51596] = actions(1744);
	v->a[51597] = 1;
	v->a[51598] = anon_sym_LPAREN;
	v->a[51599] = actions(1746);
	small_parse_table_2580(v);
}

/* EOF small_parse_table_515.c */
