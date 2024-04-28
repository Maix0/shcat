/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_176.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_880(t_small_parse_table_array *v)
{
	v->a[17600] = sym_command_substitution;
	v->a[17601] = state(2690);
	v->a[17602] = 1;
	v->a[17603] = aux_sym__literal_repeat1;
	v->a[17604] = state(3100);
	v->a[17605] = 1;
	v->a[17606] = sym__expression;
	v->a[17607] = state(3359);
	v->a[17608] = 1;
	v->a[17609] = sym__arithmetic_postfix_expression;
	v->a[17610] = state(3361);
	v->a[17611] = 1;
	v->a[17612] = sym__arithmetic_unary_expression;
	v->a[17613] = state(3367);
	v->a[17614] = 1;
	v->a[17615] = sym__arithmetic_ternary_expression;
	v->a[17616] = state(3375);
	v->a[17617] = 1;
	v->a[17618] = sym__arithmetic_binary_expression;
	v->a[17619] = actions(1073);
	small_parse_table_881(v);
}

void	small_parse_table_881(t_small_parse_table_array *v)
{
	v->a[17620] = 2;
	v->a[17621] = anon_sym_LPAREN_LPAREN;
	v->a[17622] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17623] = actions(1083);
	v->a[17624] = 2;
	v->a[17625] = sym_raw_string;
	v->a[17626] = sym_ansi_c_string;
	v->a[17627] = actions(1089);
	v->a[17628] = 2;
	v->a[17629] = anon_sym_LT_LPAREN;
	v->a[17630] = anon_sym_GT_LPAREN;
	v->a[17631] = actions(3592);
	v->a[17632] = 2;
	v->a[17633] = anon_sym_PLUS_PLUS2;
	v->a[17634] = anon_sym_DASH_DASH2;
	v->a[17635] = actions(3594);
	v->a[17636] = 2;
	v->a[17637] = anon_sym_DASH2;
	v->a[17638] = anon_sym_PLUS2;
	v->a[17639] = state(2500);
	small_parse_table_882(v);
}

void	small_parse_table_882(t_small_parse_table_array *v)
{
	v->a[17640] = 4;
	v->a[17641] = sym_arithmetic_expansion;
	v->a[17642] = sym_brace_expression;
	v->a[17643] = sym_translated_string;
	v->a[17644] = sym_process_substitution;
	v->a[17645] = state(2506);
	v->a[17646] = 4;
	v->a[17647] = sym_string;
	v->a[17648] = sym_number;
	v->a[17649] = sym_simple_expansion;
	v->a[17650] = sym_expansion;
	v->a[17651] = state(3283);
	v->a[17652] = 4;
	v->a[17653] = sym_subscript;
	v->a[17654] = sym__arithmetic_expression;
	v->a[17655] = sym__arithmetic_literal;
	v->a[17656] = sym__arithmetic_parenthesized_expression;
	v->a[17657] = state(3053);
	v->a[17658] = 6;
	v->a[17659] = sym_binary_expression;
	small_parse_table_883(v);
}

void	small_parse_table_883(t_small_parse_table_array *v)
{
	v->a[17660] = sym_ternary_expression;
	v->a[17661] = sym_unary_expression;
	v->a[17662] = sym_postfix_expression;
	v->a[17663] = sym_parenthesized_expression;
	v->a[17664] = sym_concatenation;
	v->a[17665] = 21;
	v->a[17666] = actions(3);
	v->a[17667] = 1;
	v->a[17668] = sym_comment;
	v->a[17669] = actions(3580);
	v->a[17670] = 1;
	v->a[17671] = anon_sym_DQUOTE;
	v->a[17672] = actions(3610);
	v->a[17673] = 1;
	v->a[17674] = anon_sym_DOLLAR_LBRACK;
	v->a[17675] = actions(3612);
	v->a[17676] = 1;
	v->a[17677] = anon_sym_DOLLAR;
	v->a[17678] = actions(3614);
	v->a[17679] = 1;
	small_parse_table_884(v);
}

void	small_parse_table_884(t_small_parse_table_array *v)
{
	v->a[17680] = sym__special_character;
	v->a[17681] = actions(3616);
	v->a[17682] = 1;
	v->a[17683] = aux_sym_number_token1;
	v->a[17684] = actions(3618);
	v->a[17685] = 1;
	v->a[17686] = aux_sym_number_token2;
	v->a[17687] = actions(3620);
	v->a[17688] = 1;
	v->a[17689] = anon_sym_DOLLAR_LBRACE;
	v->a[17690] = actions(3622);
	v->a[17691] = 1;
	v->a[17692] = anon_sym_DOLLAR_LPAREN;
	v->a[17693] = actions(3624);
	v->a[17694] = 1;
	v->a[17695] = anon_sym_BQUOTE;
	v->a[17696] = actions(3626);
	v->a[17697] = 1;
	v->a[17698] = anon_sym_DOLLAR_BQUOTE;
	v->a[17699] = actions(3630);
	small_parse_table_885(v);
}

/* EOF small_parse_table_176.c */
