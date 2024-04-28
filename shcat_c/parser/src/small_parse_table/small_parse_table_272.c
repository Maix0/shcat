/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_272.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1360(t_small_parse_table_array *v)
{
	v->a[27200] = 2;
	v->a[27201] = sym_file_descriptor;
	v->a[27202] = aux_sym_heredoc_redirect_token1;
	v->a[27203] = state(4237);
	v->a[27204] = 2;
	v->a[27205] = sym_variable_assignment;
	v->a[27206] = aux_sym_variable_assignments_repeat1;
	v->a[27207] = state(4283);
	v->a[27208] = 3;
	v->a[27209] = sym_file_redirect;
	v->a[27210] = sym_heredoc_redirect;
	v->a[27211] = aux_sym_redirected_statement_repeat1;
	v->a[27212] = actions(4247);
	v->a[27213] = 18;
	v->a[27214] = anon_sym_LPAREN_LPAREN;
	v->a[27215] = anon_sym_LT_LT_LT;
	v->a[27216] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27217] = anon_sym_DOLLAR_LBRACK;
	v->a[27218] = anon_sym_DOLLAR;
	v->a[27219] = sym__special_character;
	small_parse_table_1361(v);
}

void	small_parse_table_1361(t_small_parse_table_array *v)
{
	v->a[27220] = anon_sym_DQUOTE;
	v->a[27221] = sym_raw_string;
	v->a[27222] = sym_ansi_c_string;
	v->a[27223] = aux_sym_number_token1;
	v->a[27224] = aux_sym_number_token2;
	v->a[27225] = anon_sym_DOLLAR_LBRACE;
	v->a[27226] = anon_sym_DOLLAR_LPAREN;
	v->a[27227] = anon_sym_BQUOTE;
	v->a[27228] = anon_sym_DOLLAR_BQUOTE;
	v->a[27229] = anon_sym_LT_LPAREN;
	v->a[27230] = anon_sym_GT_LPAREN;
	v->a[27231] = sym_word;
	v->a[27232] = actions(4253);
	v->a[27233] = 22;
	v->a[27234] = anon_sym_SEMI;
	v->a[27235] = anon_sym_PIPE_PIPE;
	v->a[27236] = anon_sym_AMP_AMP;
	v->a[27237] = anon_sym_PIPE;
	v->a[27238] = anon_sym_AMP;
	v->a[27239] = anon_sym_LT;
	small_parse_table_1362(v);
}

void	small_parse_table_1362(t_small_parse_table_array *v)
{
	v->a[27240] = anon_sym_GT;
	v->a[27241] = anon_sym_LT_LT;
	v->a[27242] = anon_sym_GT_GT;
	v->a[27243] = anon_sym_esac;
	v->a[27244] = anon_sym_SEMI_SEMI;
	v->a[27245] = anon_sym_SEMI_AMP;
	v->a[27246] = anon_sym_SEMI_SEMI_AMP;
	v->a[27247] = anon_sym_PIPE_AMP;
	v->a[27248] = anon_sym_AMP_GT;
	v->a[27249] = anon_sym_AMP_GT_GT;
	v->a[27250] = anon_sym_LT_AMP;
	v->a[27251] = anon_sym_GT_AMP;
	v->a[27252] = anon_sym_GT_PIPE;
	v->a[27253] = anon_sym_LT_AMP_DASH;
	v->a[27254] = anon_sym_GT_AMP_DASH;
	v->a[27255] = anon_sym_LT_LT_DASH;
	v->a[27256] = 6;
	v->a[27257] = actions(71);
	v->a[27258] = 1;
	v->a[27259] = sym_comment;
	small_parse_table_1363(v);
}

void	small_parse_table_1363(t_small_parse_table_array *v)
{
	v->a[27260] = state(2457);
	v->a[27261] = 1;
	v->a[27262] = aux_sym__literal_repeat1;
	v->a[27263] = state(817);
	v->a[27264] = 2;
	v->a[27265] = sym_concatenation;
	v->a[27266] = aux_sym_for_statement_repeat1;
	v->a[27267] = state(2271);
	v->a[27268] = 9;
	v->a[27269] = sym_arithmetic_expansion;
	v->a[27270] = sym_brace_expression;
	v->a[27271] = sym_string;
	v->a[27272] = sym_translated_string;
	v->a[27273] = sym_number;
	v->a[27274] = sym_simple_expansion;
	v->a[27275] = sym_expansion;
	v->a[27276] = sym_command_substitution;
	v->a[27277] = sym_process_substitution;
	v->a[27278] = actions(2072);
	v->a[27279] = 13;
	small_parse_table_1364(v);
}

void	small_parse_table_1364(t_small_parse_table_array *v)
{
	v->a[27280] = anon_sym_PIPE;
	v->a[27281] = anon_sym_LT;
	v->a[27282] = anon_sym_GT;
	v->a[27283] = anon_sym_LT_LT;
	v->a[27284] = anon_sym_AMP_GT;
	v->a[27285] = anon_sym_LT_AMP;
	v->a[27286] = anon_sym_GT_AMP;
	v->a[27287] = anon_sym_DOLLAR;
	v->a[27288] = sym__special_character;
	v->a[27289] = aux_sym_number_token1;
	v->a[27290] = aux_sym_number_token2;
	v->a[27291] = anon_sym_DOLLAR_LPAREN;
	v->a[27292] = sym_word;
	v->a[27293] = actions(2074);
	v->a[27294] = 26;
	v->a[27295] = sym_file_descriptor;
	v->a[27296] = sym_variable_name;
	v->a[27297] = sym_test_operator;
	v->a[27298] = sym__brace_start;
	v->a[27299] = anon_sym_LPAREN_LPAREN;
	small_parse_table_1365(v);
}

/* EOF small_parse_table_272.c */
