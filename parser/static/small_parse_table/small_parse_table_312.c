/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_312.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1560(t_small_parse_table_array *v)
{
	v->a[31200] = actions(4516);
	v->a[31201] = 1;
	v->a[31202] = anon_sym_DOLLAR_LBRACE;
	v->a[31203] = actions(4518);
	v->a[31204] = 1;
	v->a[31205] = anon_sym_DOLLAR_LPAREN;
	v->a[31206] = actions(4520);
	v->a[31207] = 1;
	v->a[31208] = anon_sym_BQUOTE;
	v->a[31209] = actions(4522);
	v->a[31210] = 1;
	v->a[31211] = anon_sym_DOLLAR_BQUOTE;
	v->a[31212] = actions(4526);
	v->a[31213] = 1;
	v->a[31214] = sym_test_operator;
	v->a[31215] = actions(4528);
	v->a[31216] = 1;
	v->a[31217] = sym__brace_start;
	v->a[31218] = state(2715);
	v->a[31219] = 1;
	small_parse_table_1561(v);
}

void	small_parse_table_1561(t_small_parse_table_array *v)
{
	v->a[31220] = aux_sym__literal_repeat1;
	v->a[31221] = actions(4500);
	v->a[31222] = 2;
	v->a[31223] = anon_sym_LPAREN_LPAREN;
	v->a[31224] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31225] = actions(4510);
	v->a[31226] = 2;
	v->a[31227] = sym_raw_string;
	v->a[31228] = sym_ansi_c_string;
	v->a[31229] = actions(4524);
	v->a[31230] = 2;
	v->a[31231] = anon_sym_LT_LPAREN;
	v->a[31232] = anon_sym_GT_LPAREN;
	v->a[31233] = state(895);
	v->a[31234] = 2;
	v->a[31235] = sym_concatenation;
	v->a[31236] = aux_sym_for_statement_repeat1;
	v->a[31237] = actions(2094);
	v->a[31238] = 7;
	v->a[31239] = anon_sym_PIPE;
	small_parse_table_1562(v);
}

void	small_parse_table_1562(t_small_parse_table_array *v)
{
	v->a[31240] = anon_sym_LT;
	v->a[31241] = anon_sym_GT;
	v->a[31242] = anon_sym_LT_LT;
	v->a[31243] = anon_sym_AMP_GT;
	v->a[31244] = anon_sym_LT_AMP;
	v->a[31245] = anon_sym_GT_AMP;
	v->a[31246] = state(2438);
	v->a[31247] = 9;
	v->a[31248] = sym_arithmetic_expansion;
	v->a[31249] = sym_brace_expression;
	v->a[31250] = sym_string;
	v->a[31251] = sym_translated_string;
	v->a[31252] = sym_number;
	v->a[31253] = sym_simple_expansion;
	v->a[31254] = sym_expansion;
	v->a[31255] = sym_command_substitution;
	v->a[31256] = sym_process_substitution;
	v->a[31257] = actions(2096);
	v->a[31258] = 12;
	v->a[31259] = sym_file_descriptor;
	small_parse_table_1563(v);
}

void	small_parse_table_1563(t_small_parse_table_array *v)
{
	v->a[31260] = anon_sym_PIPE_PIPE;
	v->a[31261] = anon_sym_AMP_AMP;
	v->a[31262] = anon_sym_GT_GT;
	v->a[31263] = anon_sym_PIPE_AMP;
	v->a[31264] = anon_sym_RBRACK;
	v->a[31265] = anon_sym_AMP_GT_GT;
	v->a[31266] = anon_sym_GT_PIPE;
	v->a[31267] = anon_sym_LT_AMP_DASH;
	v->a[31268] = anon_sym_GT_AMP_DASH;
	v->a[31269] = anon_sym_LT_LT_DASH;
	v->a[31270] = anon_sym_LT_LT_LT;
	v->a[31271] = 6;
	v->a[31272] = actions(3);
	v->a[31273] = 1;
	v->a[31274] = sym_comment;
	v->a[31275] = actions(4374);
	v->a[31276] = 1;
	v->a[31277] = aux_sym_concatenation_token1;
	v->a[31278] = actions(4376);
	v->a[31279] = 1;
	small_parse_table_1564(v);
}

void	small_parse_table_1564(t_small_parse_table_array *v)
{
	v->a[31280] = sym__concat;
	v->a[31281] = state(893);
	v->a[31282] = 1;
	v->a[31283] = aux_sym_concatenation_repeat1;
	v->a[31284] = actions(4554);
	v->a[31285] = 5;
	v->a[31286] = sym_file_descriptor;
	v->a[31287] = sym_test_operator;
	v->a[31288] = sym__bare_dollar;
	v->a[31289] = sym__brace_start;
	v->a[31290] = aux_sym_heredoc_redirect_token1;
	v->a[31291] = actions(4552);
	v->a[31292] = 42;
	v->a[31293] = anon_sym_LPAREN_LPAREN;
	v->a[31294] = anon_sym_SEMI;
	v->a[31295] = anon_sym_PIPE_PIPE;
	v->a[31296] = anon_sym_AMP_AMP;
	v->a[31297] = anon_sym_PIPE;
	v->a[31298] = anon_sym_AMP;
	v->a[31299] = anon_sym_EQ_EQ;
	small_parse_table_1565(v);
}

/* EOF small_parse_table_312.c */
