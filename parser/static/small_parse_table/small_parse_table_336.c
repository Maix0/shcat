/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_336.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1680(t_small_parse_table_array *v)
{
	v->a[33600] = actions(1060);
	v->a[33601] = 1;
	v->a[33602] = sym__concat;
	v->a[33603] = actions(1058);
	v->a[33604] = 18;
	v->a[33605] = anon_sym_SEMI_SEMI;
	v->a[33606] = anon_sym_AMP_AMP;
	v->a[33607] = anon_sym_PIPE_PIPE;
	v->a[33608] = anon_sym_LT;
	v->a[33609] = anon_sym_GT;
	v->a[33610] = anon_sym_GT_GT;
	v->a[33611] = aux_sym_heredoc_redirect_token1;
	v->a[33612] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33613] = aux_sym_concatenation_token1;
	v->a[33614] = anon_sym_DOLLAR;
	v->a[33615] = anon_sym_DQUOTE;
	v->a[33616] = sym_raw_string;
	v->a[33617] = sym_number;
	v->a[33618] = anon_sym_DOLLAR_LBRACE;
	v->a[33619] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1681(v);
}

void	small_parse_table_1681(t_small_parse_table_array *v)
{
	v->a[33620] = anon_sym_BQUOTE;
	v->a[33621] = sym_word;
	v->a[33622] = anon_sym_SEMI;
	v->a[33623] = 3;
	v->a[33624] = actions(3);
	v->a[33625] = 1;
	v->a[33626] = sym_comment;
	v->a[33627] = actions(981);
	v->a[33628] = 1;
	v->a[33629] = sym__concat;
	v->a[33630] = actions(973);
	v->a[33631] = 18;
	v->a[33632] = anon_sym_SEMI_SEMI;
	v->a[33633] = anon_sym_AMP_AMP;
	v->a[33634] = anon_sym_PIPE_PIPE;
	v->a[33635] = anon_sym_LT;
	v->a[33636] = anon_sym_GT;
	v->a[33637] = anon_sym_GT_GT;
	v->a[33638] = aux_sym_heredoc_redirect_token1;
	v->a[33639] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1682(v);
}

void	small_parse_table_1682(t_small_parse_table_array *v)
{
	v->a[33640] = aux_sym_concatenation_token1;
	v->a[33641] = anon_sym_DOLLAR;
	v->a[33642] = anon_sym_DQUOTE;
	v->a[33643] = sym_raw_string;
	v->a[33644] = sym_number;
	v->a[33645] = anon_sym_DOLLAR_LBRACE;
	v->a[33646] = anon_sym_DOLLAR_LPAREN;
	v->a[33647] = anon_sym_BQUOTE;
	v->a[33648] = sym_word;
	v->a[33649] = anon_sym_SEMI;
	v->a[33650] = 10;
	v->a[33651] = actions(1424);
	v->a[33652] = 1;
	v->a[33653] = anon_sym_LPAREN;
	v->a[33654] = actions(1428);
	v->a[33655] = 1;
	v->a[33656] = anon_sym_DOLLAR;
	v->a[33657] = actions(1430);
	v->a[33658] = 1;
	v->a[33659] = anon_sym_DQUOTE;
	small_parse_table_1683(v);
}

void	small_parse_table_1683(t_small_parse_table_array *v)
{
	v->a[33660] = actions(1434);
	v->a[33661] = 1;
	v->a[33662] = anon_sym_DOLLAR_LBRACE;
	v->a[33663] = actions(1436);
	v->a[33664] = 1;
	v->a[33665] = sym_comment;
	v->a[33666] = actions(1438);
	v->a[33667] = 1;
	v->a[33668] = sym_variable_name;
	v->a[33669] = actions(1426);
	v->a[33670] = 2;
	v->a[33671] = anon_sym_DASH2;
	v->a[33672] = anon_sym_PLUS2;
	v->a[33673] = actions(1432);
	v->a[33674] = 2;
	v->a[33675] = sym_number;
	v->a[33676] = aux_sym__simple_variable_name_token1;
	v->a[33677] = state(1312);
	v->a[33678] = 3;
	v->a[33679] = sym_string;
	small_parse_table_1684(v);
}

void	small_parse_table_1684(t_small_parse_table_array *v)
{
	v->a[33680] = sym_simple_expansion;
	v->a[33681] = sym_expansion;
	v->a[33682] = state(1344);
	v->a[33683] = 7;
	v->a[33684] = sym__arithmetic_expression;
	v->a[33685] = sym_arithmetic_literal;
	v->a[33686] = sym_arithmetic_binary_expression;
	v->a[33687] = sym_arithmetic_ternary_expression;
	v->a[33688] = sym_arithmetic_unary_expression;
	v->a[33689] = sym_arithmetic_postfix_expression;
	v->a[33690] = sym_arithmetic_parenthesized_expression;
	v->a[33691] = 10;
	v->a[33692] = actions(1436);
	v->a[33693] = 1;
	v->a[33694] = sym_comment;
	v->a[33695] = actions(1440);
	v->a[33696] = 1;
	v->a[33697] = anon_sym_LPAREN;
	v->a[33698] = actions(1444);
	v->a[33699] = 1;
	small_parse_table_1685(v);
}

/* EOF small_parse_table_336.c */
