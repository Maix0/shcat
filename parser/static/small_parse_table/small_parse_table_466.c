/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_466.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2330(t_small_parse_table_array *v)
{
	v->a[46600] = anon_sym_PIPE_PIPE;
	v->a[46601] = anon_sym_LT;
	v->a[46602] = anon_sym_GT;
	v->a[46603] = anon_sym_GT_GT;
	v->a[46604] = anon_sym_LT_AMP;
	v->a[46605] = anon_sym_GT_AMP;
	v->a[46606] = anon_sym_GT_PIPE;
	v->a[46607] = anon_sym_LT_GT;
	v->a[46608] = anon_sym_LT_LT;
	v->a[46609] = anon_sym_LT_LT_DASH;
	v->a[46610] = aux_sym_heredoc_redirect_token1;
	v->a[46611] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46612] = anon_sym_DOLLAR;
	v->a[46613] = anon_sym_DQUOTE;
	v->a[46614] = sym_raw_string;
	v->a[46615] = sym_number;
	v->a[46616] = anon_sym_DOLLAR_LBRACE;
	v->a[46617] = anon_sym_DOLLAR_LPAREN;
	v->a[46618] = anon_sym_BQUOTE;
	v->a[46619] = sym_word;
	small_parse_table_2331(v);
}

void	small_parse_table_2331(t_small_parse_table_array *v)
{
	v->a[46620] = 16;
	v->a[46621] = actions(501);
	v->a[46622] = 1;
	v->a[46623] = sym_comment;
	v->a[46624] = actions(1469);
	v->a[46625] = 1;
	v->a[46626] = anon_sym_LPAREN;
	v->a[46627] = actions(1471);
	v->a[46628] = 1;
	v->a[46629] = anon_sym_BANG;
	v->a[46630] = actions(1479);
	v->a[46631] = 1;
	v->a[46632] = anon_sym_TILDE;
	v->a[46633] = actions(1481);
	v->a[46634] = 1;
	v->a[46635] = anon_sym_DOLLAR;
	v->a[46636] = actions(1483);
	v->a[46637] = 1;
	v->a[46638] = anon_sym_DQUOTE;
	v->a[46639] = actions(1487);
	small_parse_table_2332(v);
}

void	small_parse_table_2332(t_small_parse_table_array *v)
{
	v->a[46640] = 1;
	v->a[46641] = anon_sym_DOLLAR_LBRACE;
	v->a[46642] = actions(1489);
	v->a[46643] = 1;
	v->a[46644] = anon_sym_DOLLAR_LPAREN;
	v->a[46645] = actions(1491);
	v->a[46646] = 1;
	v->a[46647] = anon_sym_BQUOTE;
	v->a[46648] = actions(1493);
	v->a[46649] = 1;
	v->a[46650] = sym_variable_name;
	v->a[46651] = actions(1690);
	v->a[46652] = 1;
	v->a[46653] = anon_sym_RPAREN_RPAREN;
	v->a[46654] = actions(1475);
	v->a[46655] = 2;
	v->a[46656] = anon_sym_PLUS_PLUS;
	v->a[46657] = anon_sym_DASH_DASH;
	v->a[46658] = actions(1477);
	v->a[46659] = 2;
	small_parse_table_2333(v);
}

void	small_parse_table_2333(t_small_parse_table_array *v)
{
	v->a[46660] = anon_sym_DASH2;
	v->a[46661] = anon_sym_PLUS2;
	v->a[46662] = actions(1485);
	v->a[46663] = 2;
	v->a[46664] = sym_number;
	v->a[46665] = aux_sym__simple_variable_name_token1;
	v->a[46666] = state(194);
	v->a[46667] = 3;
	v->a[46668] = sym_string;
	v->a[46669] = sym_simple_expansion;
	v->a[46670] = sym_expansion;
	v->a[46671] = state(320);
	v->a[46672] = 8;
	v->a[46673] = sym__arithmetic_expression;
	v->a[46674] = sym_arithmetic_literal;
	v->a[46675] = sym_arithmetic_binary_expression;
	v->a[46676] = sym_arithmetic_ternary_expression;
	v->a[46677] = sym_arithmetic_unary_expression;
	v->a[46678] = sym_arithmetic_postfix_expression;
	v->a[46679] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2334(v);
}

void	small_parse_table_2334(t_small_parse_table_array *v)
{
	v->a[46680] = sym_command_substitution;
	v->a[46681] = 4;
	v->a[46682] = actions(3);
	v->a[46683] = 1;
	v->a[46684] = sym_comment;
	v->a[46685] = actions(1410);
	v->a[46686] = 1;
	v->a[46687] = anon_sym_BQUOTE;
	v->a[46688] = actions(1412);
	v->a[46689] = 2;
	v->a[46690] = sym_file_descriptor;
	v->a[46691] = sym_variable_name;
	v->a[46692] = actions(1408);
	v->a[46693] = 23;
	v->a[46694] = anon_sym_for;
	v->a[46695] = anon_sym_while;
	v->a[46696] = anon_sym_until;
	v->a[46697] = anon_sym_if;
	v->a[46698] = anon_sym_case;
	v->a[46699] = anon_sym_LPAREN;
	small_parse_table_2335(v);
}

/* EOF small_parse_table_466.c */
