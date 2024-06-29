/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_606.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3030(t_small_parse_table_array *v)
{
	v->a[60600] = anon_sym_DOLLAR_LBRACE;
	v->a[60601] = actions(1851);
	v->a[60602] = 1;
	v->a[60603] = anon_sym_DOLLAR_LPAREN;
	v->a[60604] = actions(1853);
	v->a[60605] = 1;
	v->a[60606] = anon_sym_BQUOTE;
	v->a[60607] = actions(1855);
	v->a[60608] = 1;
	v->a[60609] = sym_variable_name;
	v->a[60610] = actions(1837);
	v->a[60611] = 2;
	v->a[60612] = anon_sym_PLUS_PLUS;
	v->a[60613] = anon_sym_DASH_DASH;
	v->a[60614] = actions(1839);
	v->a[60615] = 2;
	v->a[60616] = anon_sym_DASH2;
	v->a[60617] = anon_sym_PLUS2;
	v->a[60618] = actions(1847);
	v->a[60619] = 2;
	small_parse_table_3031(v);
}

void	small_parse_table_3031(t_small_parse_table_array *v)
{
	v->a[60620] = sym_number;
	v->a[60621] = aux_sym__simple_variable_name_token1;
	v->a[60622] = state(370);
	v->a[60623] = 3;
	v->a[60624] = sym_string;
	v->a[60625] = sym_simple_expansion;
	v->a[60626] = sym_expansion;
	v->a[60627] = state(414);
	v->a[60628] = 8;
	v->a[60629] = sym__arithmetic_expression;
	v->a[60630] = sym_arithmetic_literal;
	v->a[60631] = sym_arithmetic_binary_expression;
	v->a[60632] = sym_arithmetic_ternary_expression;
	v->a[60633] = sym_arithmetic_unary_expression;
	v->a[60634] = sym_arithmetic_postfix_expression;
	v->a[60635] = sym_arithmetic_parenthesized_expression;
	v->a[60636] = sym_command_substitution;
	v->a[60637] = 6;
	v->a[60638] = actions(3);
	v->a[60639] = 1;
	small_parse_table_3032(v);
}

void	small_parse_table_3032(t_small_parse_table_array *v)
{
	v->a[60640] = sym_comment;
	v->a[60641] = actions(961);
	v->a[60642] = 1;
	v->a[60643] = sym_file_descriptor;
	v->a[60644] = actions(1987);
	v->a[60645] = 1;
	v->a[60646] = aux_sym_concatenation_token1;
	v->a[60647] = actions(1997);
	v->a[60648] = 1;
	v->a[60649] = sym__concat;
	v->a[60650] = state(947);
	v->a[60651] = 1;
	v->a[60652] = aux_sym_concatenation_repeat1;
	v->a[60653] = actions(957);
	v->a[60654] = 22;
	v->a[60655] = anon_sym_AMP_AMP;
	v->a[60656] = anon_sym_PIPE_PIPE;
	v->a[60657] = anon_sym_LT;
	v->a[60658] = anon_sym_GT;
	v->a[60659] = anon_sym_GT_GT;
	small_parse_table_3033(v);
}

void	small_parse_table_3033(t_small_parse_table_array *v)
{
	v->a[60660] = anon_sym_AMP_GT;
	v->a[60661] = anon_sym_AMP_GT_GT;
	v->a[60662] = anon_sym_LT_AMP;
	v->a[60663] = anon_sym_GT_AMP;
	v->a[60664] = anon_sym_GT_PIPE;
	v->a[60665] = anon_sym_LT_AMP_DASH;
	v->a[60666] = anon_sym_GT_AMP_DASH;
	v->a[60667] = aux_sym_heredoc_redirect_token1;
	v->a[60668] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60669] = anon_sym_DOLLAR;
	v->a[60670] = anon_sym_DQUOTE;
	v->a[60671] = sym_raw_string;
	v->a[60672] = sym_number;
	v->a[60673] = anon_sym_DOLLAR_LBRACE;
	v->a[60674] = anon_sym_DOLLAR_LPAREN;
	v->a[60675] = anon_sym_BQUOTE;
	v->a[60676] = sym_word;
	v->a[60677] = 3;
	v->a[60678] = actions(3);
	v->a[60679] = 1;
	small_parse_table_3034(v);
}

void	small_parse_table_3034(t_small_parse_table_array *v)
{
	v->a[60680] = sym_comment;
	v->a[60681] = actions(1126);
	v->a[60682] = 5;
	v->a[60683] = sym_file_descriptor;
	v->a[60684] = sym__concat;
	v->a[60685] = sym_variable_name;
	v->a[60686] = ts_builtin_sym_end;
	v->a[60687] = aux_sym_heredoc_redirect_token1;
	v->a[60688] = actions(1124);
	v->a[60689] = 21;
	v->a[60690] = anon_sym_PIPE;
	v->a[60691] = anon_sym_RPAREN;
	v->a[60692] = anon_sym_SEMI_SEMI;
	v->a[60693] = anon_sym_AMP_AMP;
	v->a[60694] = anon_sym_PIPE_PIPE;
	v->a[60695] = anon_sym_LT;
	v->a[60696] = anon_sym_GT;
	v->a[60697] = anon_sym_GT_GT;
	v->a[60698] = anon_sym_AMP_GT;
	v->a[60699] = anon_sym_AMP_GT_GT;
	small_parse_table_3035(v);
}

/* EOF small_parse_table_606.c */
