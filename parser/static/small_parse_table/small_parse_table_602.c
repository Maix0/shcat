/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_602.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3010(t_small_parse_table_array *v)
{
	v->a[60200] = anon_sym_PIPE;
	v->a[60201] = anon_sym_RPAREN;
	v->a[60202] = anon_sym_SEMI_SEMI;
	v->a[60203] = anon_sym_AMP_AMP;
	v->a[60204] = anon_sym_PIPE_PIPE;
	v->a[60205] = anon_sym_LT;
	v->a[60206] = anon_sym_GT;
	v->a[60207] = anon_sym_GT_GT;
	v->a[60208] = anon_sym_AMP_GT;
	v->a[60209] = anon_sym_AMP_GT_GT;
	v->a[60210] = anon_sym_LT_AMP;
	v->a[60211] = anon_sym_GT_AMP;
	v->a[60212] = anon_sym_GT_PIPE;
	v->a[60213] = anon_sym_LT_AMP_DASH;
	v->a[60214] = anon_sym_GT_AMP_DASH;
	v->a[60215] = anon_sym_LT_LT;
	v->a[60216] = anon_sym_LT_LT_DASH;
	v->a[60217] = anon_sym_AMP;
	v->a[60218] = aux_sym_concatenation_token1;
	v->a[60219] = anon_sym_BQUOTE;
	small_parse_table_3011(v);
}

void	small_parse_table_3011(t_small_parse_table_array *v)
{
	v->a[60220] = anon_sym_SEMI;
	v->a[60221] = 15;
	v->a[60222] = actions(1074);
	v->a[60223] = 1;
	v->a[60224] = sym_comment;
	v->a[60225] = actions(1951);
	v->a[60226] = 1;
	v->a[60227] = anon_sym_LPAREN;
	v->a[60228] = actions(1953);
	v->a[60229] = 1;
	v->a[60230] = anon_sym_BANG;
	v->a[60231] = actions(1959);
	v->a[60232] = 1;
	v->a[60233] = anon_sym_TILDE;
	v->a[60234] = actions(1961);
	v->a[60235] = 1;
	v->a[60236] = anon_sym_DOLLAR;
	v->a[60237] = actions(1963);
	v->a[60238] = 1;
	v->a[60239] = anon_sym_DQUOTE;
	small_parse_table_3012(v);
}

void	small_parse_table_3012(t_small_parse_table_array *v)
{
	v->a[60240] = actions(1967);
	v->a[60241] = 1;
	v->a[60242] = anon_sym_DOLLAR_LBRACE;
	v->a[60243] = actions(1969);
	v->a[60244] = 1;
	v->a[60245] = anon_sym_DOLLAR_LPAREN;
	v->a[60246] = actions(1971);
	v->a[60247] = 1;
	v->a[60248] = anon_sym_BQUOTE;
	v->a[60249] = actions(1973);
	v->a[60250] = 1;
	v->a[60251] = sym_variable_name;
	v->a[60252] = actions(1955);
	v->a[60253] = 2;
	v->a[60254] = anon_sym_PLUS_PLUS;
	v->a[60255] = anon_sym_DASH_DASH;
	v->a[60256] = actions(1957);
	v->a[60257] = 2;
	v->a[60258] = anon_sym_DASH2;
	v->a[60259] = anon_sym_PLUS2;
	small_parse_table_3013(v);
}

void	small_parse_table_3013(t_small_parse_table_array *v)
{
	v->a[60260] = actions(1965);
	v->a[60261] = 2;
	v->a[60262] = sym_number;
	v->a[60263] = aux_sym__simple_variable_name_token1;
	v->a[60264] = state(462);
	v->a[60265] = 3;
	v->a[60266] = sym_string;
	v->a[60267] = sym_simple_expansion;
	v->a[60268] = sym_expansion;
	v->a[60269] = state(601);
	v->a[60270] = 8;
	v->a[60271] = sym__arithmetic_expression;
	v->a[60272] = sym_arithmetic_literal;
	v->a[60273] = sym_arithmetic_binary_expression;
	v->a[60274] = sym_arithmetic_ternary_expression;
	v->a[60275] = sym_arithmetic_unary_expression;
	v->a[60276] = sym_arithmetic_postfix_expression;
	v->a[60277] = sym_arithmetic_parenthesized_expression;
	v->a[60278] = sym_command_substitution;
	v->a[60279] = 3;
	small_parse_table_3014(v);
}

void	small_parse_table_3014(t_small_parse_table_array *v)
{
	v->a[60280] = actions(3);
	v->a[60281] = 1;
	v->a[60282] = sym_comment;
	v->a[60283] = actions(1056);
	v->a[60284] = 5;
	v->a[60285] = sym_file_descriptor;
	v->a[60286] = sym__concat;
	v->a[60287] = sym_variable_name;
	v->a[60288] = ts_builtin_sym_end;
	v->a[60289] = aux_sym_heredoc_redirect_token1;
	v->a[60290] = actions(1058);
	v->a[60291] = 21;
	v->a[60292] = anon_sym_PIPE;
	v->a[60293] = anon_sym_RPAREN;
	v->a[60294] = anon_sym_SEMI_SEMI;
	v->a[60295] = anon_sym_AMP_AMP;
	v->a[60296] = anon_sym_PIPE_PIPE;
	v->a[60297] = anon_sym_LT;
	v->a[60298] = anon_sym_GT;
	v->a[60299] = anon_sym_GT_GT;
	small_parse_table_3015(v);
}

/* EOF small_parse_table_602.c */
