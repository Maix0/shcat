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
	v->a[46600] = state(335);
	v->a[46601] = 8;
	v->a[46602] = sym__arithmetic_expression;
	v->a[46603] = sym_arithmetic_literal;
	v->a[46604] = sym_arithmetic_binary_expression;
	v->a[46605] = sym_arithmetic_ternary_expression;
	v->a[46606] = sym_arithmetic_unary_expression;
	v->a[46607] = sym_arithmetic_postfix_expression;
	v->a[46608] = sym_arithmetic_parenthesized_expression;
	v->a[46609] = sym_command_substitution;
	v->a[46610] = 4;
	v->a[46611] = actions(3);
	v->a[46612] = 1;
	v->a[46613] = sym_comment;
	v->a[46614] = actions(1612);
	v->a[46615] = 1;
	v->a[46616] = ts_builtin_sym_end;
	v->a[46617] = actions(1441);
	v->a[46618] = 2;
	v->a[46619] = sym_file_descriptor;
	small_parse_table_2331(v);
}

void	small_parse_table_2331(t_small_parse_table_array *v)
{
	v->a[46620] = sym_variable_name;
	v->a[46621] = actions(1437);
	v->a[46622] = 24;
	v->a[46623] = anon_sym_for;
	v->a[46624] = anon_sym_while;
	v->a[46625] = anon_sym_until;
	v->a[46626] = anon_sym_if;
	v->a[46627] = anon_sym_case;
	v->a[46628] = anon_sym_LPAREN;
	v->a[46629] = anon_sym_LBRACE;
	v->a[46630] = anon_sym_BANG;
	v->a[46631] = anon_sym_LT;
	v->a[46632] = anon_sym_GT;
	v->a[46633] = anon_sym_GT_GT;
	v->a[46634] = anon_sym_LT_AMP;
	v->a[46635] = anon_sym_GT_AMP;
	v->a[46636] = anon_sym_GT_PIPE;
	v->a[46637] = anon_sym_LT_GT;
	v->a[46638] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46639] = anon_sym_DOLLAR;
	small_parse_table_2332(v);
}

void	small_parse_table_2332(t_small_parse_table_array *v)
{
	v->a[46640] = anon_sym_DQUOTE;
	v->a[46641] = sym_raw_string;
	v->a[46642] = sym_number;
	v->a[46643] = anon_sym_DOLLAR_LBRACE;
	v->a[46644] = anon_sym_DOLLAR_LPAREN;
	v->a[46645] = anon_sym_BQUOTE;
	v->a[46646] = sym_word;
	v->a[46647] = 5;
	v->a[46648] = actions(3);
	v->a[46649] = 1;
	v->a[46650] = sym_comment;
	v->a[46651] = actions(746);
	v->a[46652] = 1;
	v->a[46653] = sym_variable_name;
	v->a[46654] = actions(1469);
	v->a[46655] = 1;
	v->a[46656] = sym_file_descriptor;
	v->a[46657] = actions(734);
	v->a[46658] = 8;
	v->a[46659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2333(v);
}

void	small_parse_table_2333(t_small_parse_table_array *v)
{
	v->a[46660] = anon_sym_DOLLAR;
	v->a[46661] = anon_sym_DQUOTE;
	v->a[46662] = sym_raw_string;
	v->a[46663] = sym_number;
	v->a[46664] = anon_sym_DOLLAR_LBRACE;
	v->a[46665] = anon_sym_DOLLAR_LPAREN;
	v->a[46666] = sym_word;
	v->a[46667] = actions(1467);
	v->a[46668] = 17;
	v->a[46669] = anon_sym_PIPE;
	v->a[46670] = anon_sym_SEMI_SEMI;
	v->a[46671] = anon_sym_AMP_AMP;
	v->a[46672] = anon_sym_PIPE_PIPE;
	v->a[46673] = anon_sym_LT;
	v->a[46674] = anon_sym_GT;
	v->a[46675] = anon_sym_GT_GT;
	v->a[46676] = anon_sym_LT_AMP;
	v->a[46677] = anon_sym_GT_AMP;
	v->a[46678] = anon_sym_GT_PIPE;
	v->a[46679] = anon_sym_LT_GT;
	small_parse_table_2334(v);
}

void	small_parse_table_2334(t_small_parse_table_array *v)
{
	v->a[46680] = anon_sym_LT_LT;
	v->a[46681] = anon_sym_LT_LT_DASH;
	v->a[46682] = aux_sym_heredoc_redirect_token1;
	v->a[46683] = anon_sym_AMP;
	v->a[46684] = anon_sym_BQUOTE;
	v->a[46685] = anon_sym_SEMI;
	v->a[46686] = 4;
	v->a[46687] = actions(3);
	v->a[46688] = 1;
	v->a[46689] = sym_comment;
	v->a[46690] = actions(1705);
	v->a[46691] = 1;
	v->a[46692] = ts_builtin_sym_end;
	v->a[46693] = actions(1441);
	v->a[46694] = 2;
	v->a[46695] = sym_file_descriptor;
	v->a[46696] = sym_variable_name;
	v->a[46697] = actions(1437);
	v->a[46698] = 24;
	v->a[46699] = anon_sym_for;
	small_parse_table_2335(v);
}

/* EOF small_parse_table_466.c */
