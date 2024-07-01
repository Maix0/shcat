/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_536.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2680(t_small_parse_table_array *v)
{
	v->a[53600] = sym_case_item;
	v->a[53601] = state(2267);
	v->a[53602] = 1;
	v->a[53603] = sym__case_item_last;
	v->a[53604] = state(2096);
	v->a[53605] = 2;
	v->a[53606] = sym_concatenation;
	v->a[53607] = sym__extglob_blob;
	v->a[53608] = actions(1770);
	v->a[53609] = 3;
	v->a[53610] = sym_raw_string;
	v->a[53611] = sym_number;
	v->a[53612] = sym_word;
	v->a[53613] = actions(1776);
	v->a[53614] = 4;
	v->a[53615] = anon_sym_SEMI_SEMI;
	v->a[53616] = aux_sym_heredoc_redirect_token1;
	v->a[53617] = anon_sym_AMP;
	v->a[53618] = anon_sym_SEMI;
	v->a[53619] = state(2001);
	small_parse_table_2681(v);
}

void	small_parse_table_2681(t_small_parse_table_array *v)
{
	v->a[53620] = 5;
	v->a[53621] = sym_arithmetic_expansion;
	v->a[53622] = sym_string;
	v->a[53623] = sym_simple_expansion;
	v->a[53624] = sym_expansion;
	v->a[53625] = sym_command_substitution;
	v->a[53626] = 16;
	v->a[53627] = actions(870);
	v->a[53628] = 1;
	v->a[53629] = sym_comment;
	v->a[53630] = actions(1744);
	v->a[53631] = 1;
	v->a[53632] = anon_sym_LPAREN;
	v->a[53633] = actions(1746);
	v->a[53634] = 1;
	v->a[53635] = anon_sym_BANG;
	v->a[53636] = actions(1754);
	v->a[53637] = 1;
	v->a[53638] = anon_sym_TILDE;
	v->a[53639] = actions(1756);
	small_parse_table_2682(v);
}

void	small_parse_table_2682(t_small_parse_table_array *v)
{
	v->a[53640] = 1;
	v->a[53641] = anon_sym_DOLLAR;
	v->a[53642] = actions(1758);
	v->a[53643] = 1;
	v->a[53644] = anon_sym_DQUOTE;
	v->a[53645] = actions(1762);
	v->a[53646] = 1;
	v->a[53647] = anon_sym_DOLLAR_LBRACE;
	v->a[53648] = actions(1764);
	v->a[53649] = 1;
	v->a[53650] = anon_sym_DOLLAR_LPAREN;
	v->a[53651] = actions(1766);
	v->a[53652] = 1;
	v->a[53653] = anon_sym_BQUOTE;
	v->a[53654] = actions(1768);
	v->a[53655] = 1;
	v->a[53656] = sym_variable_name;
	v->a[53657] = actions(1882);
	v->a[53658] = 1;
	v->a[53659] = anon_sym_RPAREN_RPAREN;
	small_parse_table_2683(v);
}

void	small_parse_table_2683(t_small_parse_table_array *v)
{
	v->a[53660] = actions(1750);
	v->a[53661] = 2;
	v->a[53662] = anon_sym_PLUS_PLUS;
	v->a[53663] = anon_sym_DASH_DASH;
	v->a[53664] = actions(1752);
	v->a[53665] = 2;
	v->a[53666] = anon_sym_DASH2;
	v->a[53667] = anon_sym_PLUS2;
	v->a[53668] = actions(1760);
	v->a[53669] = 2;
	v->a[53670] = sym_number;
	v->a[53671] = aux_sym__simple_variable_name_token1;
	v->a[53672] = state(271);
	v->a[53673] = 3;
	v->a[53674] = sym_string;
	v->a[53675] = sym_simple_expansion;
	v->a[53676] = sym_expansion;
	v->a[53677] = state(330);
	v->a[53678] = 8;
	v->a[53679] = sym__arithmetic_expression;
	small_parse_table_2684(v);
}

void	small_parse_table_2684(t_small_parse_table_array *v)
{
	v->a[53680] = sym_arithmetic_literal;
	v->a[53681] = sym_arithmetic_binary_expression;
	v->a[53682] = sym_arithmetic_ternary_expression;
	v->a[53683] = sym_arithmetic_unary_expression;
	v->a[53684] = sym_arithmetic_postfix_expression;
	v->a[53685] = sym_arithmetic_parenthesized_expression;
	v->a[53686] = sym_command_substitution;
	v->a[53687] = 18;
	v->a[53688] = actions(3);
	v->a[53689] = 1;
	v->a[53690] = sym_comment;
	v->a[53691] = actions(1774);
	v->a[53692] = 1;
	v->a[53693] = anon_sym_LPAREN;
	v->a[53694] = actions(1778);
	v->a[53695] = 1;
	v->a[53696] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53697] = actions(1780);
	v->a[53698] = 1;
	v->a[53699] = anon_sym_DOLLAR;
	small_parse_table_2685(v);
}

/* EOF small_parse_table_536.c */
