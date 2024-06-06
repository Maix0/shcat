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
	v->a[31200] = 6;
	v->a[31201] = actions(57);
	v->a[31202] = 1;
	v->a[31203] = sym_comment;
	v->a[31204] = state(1670);
	v->a[31205] = 1;
	v->a[31206] = aux_sym__literal_repeat1;
	v->a[31207] = state(1680);
	v->a[31208] = 1;
	v->a[31209] = sym_concatenation;
	v->a[31210] = state(1421);
	v->a[31211] = 7;
	v->a[31212] = sym_arithmetic_expansion;
	v->a[31213] = sym_brace_expression;
	v->a[31214] = sym_string;
	v->a[31215] = sym_number;
	v->a[31216] = sym_simple_expansion;
	v->a[31217] = sym_expansion;
	v->a[31218] = sym_command_substitution;
	v->a[31219] = actions(1528);
	small_parse_table_1561(v);
}

void	small_parse_table_1561(t_small_parse_table_array *v)
{
	v->a[31220] = 12;
	v->a[31221] = anon_sym_PIPE;
	v->a[31222] = anon_sym_LT;
	v->a[31223] = anon_sym_GT;
	v->a[31224] = anon_sym_AMP_GT;
	v->a[31225] = anon_sym_LT_AMP;
	v->a[31226] = anon_sym_GT_AMP;
	v->a[31227] = anon_sym_LT_LT;
	v->a[31228] = anon_sym_DOLLAR;
	v->a[31229] = aux_sym_number_token1;
	v->a[31230] = aux_sym_number_token2;
	v->a[31231] = anon_sym_DOLLAR_LPAREN;
	v->a[31232] = sym_word;
	v->a[31233] = actions(1530);
	v->a[31234] = 20;
	v->a[31235] = sym_file_descriptor;
	v->a[31236] = sym_variable_name;
	v->a[31237] = sym_test_operator;
	v->a[31238] = sym__brace_start;
	v->a[31239] = anon_sym_PIPE_AMP;
	small_parse_table_1562(v);
}

void	small_parse_table_1562(t_small_parse_table_array *v)
{
	v->a[31240] = anon_sym_AMP_AMP;
	v->a[31241] = anon_sym_PIPE_PIPE;
	v->a[31242] = anon_sym_GT_GT;
	v->a[31243] = anon_sym_AMP_GT_GT;
	v->a[31244] = anon_sym_GT_PIPE;
	v->a[31245] = anon_sym_LT_AMP_DASH;
	v->a[31246] = anon_sym_GT_AMP_DASH;
	v->a[31247] = anon_sym_LT_LT_DASH;
	v->a[31248] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31249] = sym__special_character;
	v->a[31250] = anon_sym_DQUOTE;
	v->a[31251] = sym_raw_string;
	v->a[31252] = anon_sym_DOLLAR_LBRACE;
	v->a[31253] = anon_sym_BQUOTE;
	v->a[31254] = anon_sym_DOLLAR_BQUOTE;
	v->a[31255] = 3;
	v->a[31256] = actions(3);
	v->a[31257] = 1;
	v->a[31258] = sym_comment;
	v->a[31259] = actions(2778);
	small_parse_table_1563(v);
}

void	small_parse_table_1563(t_small_parse_table_array *v)
{
	v->a[31260] = 6;
	v->a[31261] = sym_file_descriptor;
	v->a[31262] = sym__concat;
	v->a[31263] = sym_variable_name;
	v->a[31264] = sym_test_operator;
	v->a[31265] = sym__brace_start;
	v->a[31266] = aux_sym_heredoc_redirect_token1;
	v->a[31267] = actions(2776);
	v->a[31268] = 35;
	v->a[31269] = anon_sym_PIPE;
	v->a[31270] = anon_sym_SEMI_SEMI;
	v->a[31271] = anon_sym_SEMI_AMP;
	v->a[31272] = anon_sym_SEMI_SEMI_AMP;
	v->a[31273] = anon_sym_PIPE_AMP;
	v->a[31274] = anon_sym_AMP_AMP;
	v->a[31275] = anon_sym_PIPE_PIPE;
	v->a[31276] = anon_sym_LT;
	v->a[31277] = anon_sym_GT;
	v->a[31278] = anon_sym_GT_GT;
	v->a[31279] = anon_sym_AMP_GT;
	small_parse_table_1564(v);
}

void	small_parse_table_1564(t_small_parse_table_array *v)
{
	v->a[31280] = anon_sym_AMP_GT_GT;
	v->a[31281] = anon_sym_LT_AMP;
	v->a[31282] = anon_sym_GT_AMP;
	v->a[31283] = anon_sym_GT_PIPE;
	v->a[31284] = anon_sym_LT_AMP_DASH;
	v->a[31285] = anon_sym_GT_AMP_DASH;
	v->a[31286] = anon_sym_LT_LT;
	v->a[31287] = anon_sym_LT_LT_DASH;
	v->a[31288] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31289] = anon_sym_AMP;
	v->a[31290] = aux_sym_concatenation_token1;
	v->a[31291] = anon_sym_DOLLAR;
	v->a[31292] = sym__special_character;
	v->a[31293] = anon_sym_DQUOTE;
	v->a[31294] = sym_raw_string;
	v->a[31295] = aux_sym_number_token1;
	v->a[31296] = aux_sym_number_token2;
	v->a[31297] = anon_sym_DOLLAR_LBRACE;
	v->a[31298] = anon_sym_DOLLAR_LPAREN;
	v->a[31299] = anon_sym_BQUOTE;
	small_parse_table_1565(v);
}

/* EOF small_parse_table_312.c */
