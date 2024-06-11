/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_632.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3160(t_small_parse_table_array *v)
{
	v->a[63200] = anon_sym_DOLLAR_LPAREN;
	v->a[63201] = anon_sym_BQUOTE;
	v->a[63202] = sym_word;
	v->a[63203] = 15;
	v->a[63204] = actions(1094);
	v->a[63205] = 1;
	v->a[63206] = sym_comment;
	v->a[63207] = actions(1869);
	v->a[63208] = 1;
	v->a[63209] = anon_sym_LPAREN;
	v->a[63210] = actions(1871);
	v->a[63211] = 1;
	v->a[63212] = anon_sym_BANG;
	v->a[63213] = actions(1879);
	v->a[63214] = 1;
	v->a[63215] = anon_sym_TILDE;
	v->a[63216] = actions(1881);
	v->a[63217] = 1;
	v->a[63218] = anon_sym_DOLLAR;
	v->a[63219] = actions(1883);
	small_parse_table_3161(v);
}

void	small_parse_table_3161(t_small_parse_table_array *v)
{
	v->a[63220] = 1;
	v->a[63221] = anon_sym_DQUOTE;
	v->a[63222] = actions(1887);
	v->a[63223] = 1;
	v->a[63224] = anon_sym_DOLLAR_LBRACE;
	v->a[63225] = actions(1889);
	v->a[63226] = 1;
	v->a[63227] = anon_sym_DOLLAR_LPAREN;
	v->a[63228] = actions(1891);
	v->a[63229] = 1;
	v->a[63230] = anon_sym_BQUOTE;
	v->a[63231] = actions(1893);
	v->a[63232] = 1;
	v->a[63233] = sym_variable_name;
	v->a[63234] = actions(1875);
	v->a[63235] = 2;
	v->a[63236] = anon_sym_PLUS_PLUS;
	v->a[63237] = anon_sym_DASH_DASH;
	v->a[63238] = actions(1877);
	v->a[63239] = 2;
	small_parse_table_3162(v);
}

void	small_parse_table_3162(t_small_parse_table_array *v)
{
	v->a[63240] = anon_sym_DASH2;
	v->a[63241] = anon_sym_PLUS2;
	v->a[63242] = actions(1885);
	v->a[63243] = 2;
	v->a[63244] = sym_number;
	v->a[63245] = aux_sym__simple_variable_name_token1;
	v->a[63246] = state(365);
	v->a[63247] = 3;
	v->a[63248] = sym_string;
	v->a[63249] = sym_simple_expansion;
	v->a[63250] = sym_expansion;
	v->a[63251] = state(419);
	v->a[63252] = 8;
	v->a[63253] = sym__arithmetic_expression;
	v->a[63254] = sym_arithmetic_literal;
	v->a[63255] = sym_arithmetic_binary_expression;
	v->a[63256] = sym_arithmetic_ternary_expression;
	v->a[63257] = sym_arithmetic_unary_expression;
	v->a[63258] = sym_arithmetic_postfix_expression;
	v->a[63259] = sym_arithmetic_parenthesized_expression;
	small_parse_table_3163(v);
}

void	small_parse_table_3163(t_small_parse_table_array *v)
{
	v->a[63260] = sym_command_substitution;
	v->a[63261] = 3;
	v->a[63262] = actions(3);
	v->a[63263] = 1;
	v->a[63264] = sym_comment;
	v->a[63265] = actions(1205);
	v->a[63266] = 5;
	v->a[63267] = sym_file_descriptor;
	v->a[63268] = sym__concat;
	v->a[63269] = sym_variable_name;
	v->a[63270] = ts_builtin_sym_end;
	v->a[63271] = aux_sym_heredoc_redirect_token1;
	v->a[63272] = actions(1203);
	v->a[63273] = 21;
	v->a[63274] = anon_sym_PIPE;
	v->a[63275] = anon_sym_RPAREN;
	v->a[63276] = anon_sym_SEMI_SEMI;
	v->a[63277] = anon_sym_AMP_AMP;
	v->a[63278] = anon_sym_PIPE_PIPE;
	v->a[63279] = anon_sym_LT;
	small_parse_table_3164(v);
}

void	small_parse_table_3164(t_small_parse_table_array *v)
{
	v->a[63280] = anon_sym_GT;
	v->a[63281] = anon_sym_GT_GT;
	v->a[63282] = anon_sym_AMP_GT;
	v->a[63283] = anon_sym_AMP_GT_GT;
	v->a[63284] = anon_sym_LT_AMP;
	v->a[63285] = anon_sym_GT_AMP;
	v->a[63286] = anon_sym_GT_PIPE;
	v->a[63287] = anon_sym_LT_AMP_DASH;
	v->a[63288] = anon_sym_GT_AMP_DASH;
	v->a[63289] = anon_sym_LT_LT;
	v->a[63290] = anon_sym_LT_LT_DASH;
	v->a[63291] = anon_sym_AMP;
	v->a[63292] = aux_sym_concatenation_token1;
	v->a[63293] = anon_sym_BQUOTE;
	v->a[63294] = anon_sym_SEMI;
	v->a[63295] = 6;
	v->a[63296] = actions(3);
	v->a[63297] = 1;
	v->a[63298] = sym_comment;
	v->a[63299] = actions(1219);
	small_parse_table_3165(v);
}

/* EOF small_parse_table_632.c */
