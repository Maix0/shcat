/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_622.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3110(t_small_parse_table_array *v)
{
	v->a[62200] = 1;
	v->a[62201] = anon_sym_BQUOTE;
	v->a[62202] = actions(1893);
	v->a[62203] = 1;
	v->a[62204] = sym_variable_name;
	v->a[62205] = actions(1929);
	v->a[62206] = 1;
	v->a[62207] = anon_sym_RPAREN_RPAREN;
	v->a[62208] = actions(1875);
	v->a[62209] = 2;
	v->a[62210] = anon_sym_PLUS_PLUS;
	v->a[62211] = anon_sym_DASH_DASH;
	v->a[62212] = actions(1877);
	v->a[62213] = 2;
	v->a[62214] = anon_sym_DASH2;
	v->a[62215] = anon_sym_PLUS2;
	v->a[62216] = actions(1885);
	v->a[62217] = 2;
	v->a[62218] = sym_number;
	v->a[62219] = aux_sym__simple_variable_name_token1;
	small_parse_table_3111(v);
}

void	small_parse_table_3111(t_small_parse_table_array *v)
{
	v->a[62220] = state(365);
	v->a[62221] = 3;
	v->a[62222] = sym_string;
	v->a[62223] = sym_simple_expansion;
	v->a[62224] = sym_expansion;
	v->a[62225] = state(524);
	v->a[62226] = 8;
	v->a[62227] = sym__arithmetic_expression;
	v->a[62228] = sym_arithmetic_literal;
	v->a[62229] = sym_arithmetic_binary_expression;
	v->a[62230] = sym_arithmetic_ternary_expression;
	v->a[62231] = sym_arithmetic_unary_expression;
	v->a[62232] = sym_arithmetic_postfix_expression;
	v->a[62233] = sym_arithmetic_parenthesized_expression;
	v->a[62234] = sym_command_substitution;
	v->a[62235] = 3;
	v->a[62236] = actions(3);
	v->a[62237] = 1;
	v->a[62238] = sym_comment;
	v->a[62239] = actions(1159);
	small_parse_table_3112(v);
}

void	small_parse_table_3112(t_small_parse_table_array *v)
{
	v->a[62240] = 2;
	v->a[62241] = sym_file_descriptor;
	v->a[62242] = sym__concat;
	v->a[62243] = actions(1157);
	v->a[62244] = 25;
	v->a[62245] = anon_sym_PIPE;
	v->a[62246] = anon_sym_AMP_AMP;
	v->a[62247] = anon_sym_PIPE_PIPE;
	v->a[62248] = anon_sym_LT;
	v->a[62249] = anon_sym_GT;
	v->a[62250] = anon_sym_GT_GT;
	v->a[62251] = anon_sym_AMP_GT;
	v->a[62252] = anon_sym_AMP_GT_GT;
	v->a[62253] = anon_sym_LT_AMP;
	v->a[62254] = anon_sym_GT_AMP;
	v->a[62255] = anon_sym_GT_PIPE;
	v->a[62256] = anon_sym_LT_AMP_DASH;
	v->a[62257] = anon_sym_GT_AMP_DASH;
	v->a[62258] = anon_sym_LT_LT;
	v->a[62259] = anon_sym_LT_LT_DASH;
	small_parse_table_3113(v);
}

void	small_parse_table_3113(t_small_parse_table_array *v)
{
	v->a[62260] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62261] = aux_sym_concatenation_token1;
	v->a[62262] = anon_sym_DOLLAR;
	v->a[62263] = anon_sym_DQUOTE;
	v->a[62264] = sym_raw_string;
	v->a[62265] = sym_number;
	v->a[62266] = anon_sym_DOLLAR_LBRACE;
	v->a[62267] = anon_sym_DOLLAR_LPAREN;
	v->a[62268] = anon_sym_BQUOTE;
	v->a[62269] = sym_word;
	v->a[62270] = 16;
	v->a[62271] = actions(1094);
	v->a[62272] = 1;
	v->a[62273] = sym_comment;
	v->a[62274] = actions(1869);
	v->a[62275] = 1;
	v->a[62276] = anon_sym_LPAREN;
	v->a[62277] = actions(1871);
	v->a[62278] = 1;
	v->a[62279] = anon_sym_BANG;
	small_parse_table_3114(v);
}

void	small_parse_table_3114(t_small_parse_table_array *v)
{
	v->a[62280] = actions(1879);
	v->a[62281] = 1;
	v->a[62282] = anon_sym_TILDE;
	v->a[62283] = actions(1881);
	v->a[62284] = 1;
	v->a[62285] = anon_sym_DOLLAR;
	v->a[62286] = actions(1883);
	v->a[62287] = 1;
	v->a[62288] = anon_sym_DQUOTE;
	v->a[62289] = actions(1887);
	v->a[62290] = 1;
	v->a[62291] = anon_sym_DOLLAR_LBRACE;
	v->a[62292] = actions(1889);
	v->a[62293] = 1;
	v->a[62294] = anon_sym_DOLLAR_LPAREN;
	v->a[62295] = actions(1891);
	v->a[62296] = 1;
	v->a[62297] = anon_sym_BQUOTE;
	v->a[62298] = actions(1893);
	v->a[62299] = 1;
	small_parse_table_3115(v);
}

/* EOF small_parse_table_622.c */
