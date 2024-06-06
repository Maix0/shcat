/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1162.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5810(t_small_parse_table_array *v)
{
	v->a[116200] = state(1527);
	v->a[116201] = 7;
	v->a[116202] = sym_arithmetic_expansion;
	v->a[116203] = sym_brace_expression;
	v->a[116204] = sym_string;
	v->a[116205] = sym_number;
	v->a[116206] = sym_simple_expansion;
	v->a[116207] = sym_expansion;
	v->a[116208] = sym_command_substitution;
	v->a[116209] = 16;
	v->a[116210] = actions(3);
	v->a[116211] = 1;
	v->a[116212] = sym_comment;
	v->a[116213] = actions(5334);
	v->a[116214] = 1;
	v->a[116215] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116216] = actions(5340);
	v->a[116217] = 1;
	v->a[116218] = anon_sym_DQUOTE;
	v->a[116219] = actions(5344);
	small_parse_table_5811(v);
}

void	small_parse_table_5811(t_small_parse_table_array *v)
{
	v->a[116220] = 1;
	v->a[116221] = aux_sym_number_token1;
	v->a[116222] = actions(5346);
	v->a[116223] = 1;
	v->a[116224] = aux_sym_number_token2;
	v->a[116225] = actions(5348);
	v->a[116226] = 1;
	v->a[116227] = anon_sym_DOLLAR_LBRACE;
	v->a[116228] = actions(5350);
	v->a[116229] = 1;
	v->a[116230] = anon_sym_DOLLAR_LPAREN;
	v->a[116231] = actions(5352);
	v->a[116232] = 1;
	v->a[116233] = anon_sym_BQUOTE;
	v->a[116234] = actions(5354);
	v->a[116235] = 1;
	v->a[116236] = anon_sym_DOLLAR_BQUOTE;
	v->a[116237] = actions(5360);
	v->a[116238] = 1;
	v->a[116239] = sym__brace_start;
	small_parse_table_5812(v);
}

void	small_parse_table_5812(t_small_parse_table_array *v)
{
	v->a[116240] = actions(6833);
	v->a[116241] = 1;
	v->a[116242] = sym_word;
	v->a[116243] = actions(6835);
	v->a[116244] = 1;
	v->a[116245] = anon_sym_DOLLAR;
	v->a[116246] = actions(6837);
	v->a[116247] = 1;
	v->a[116248] = sym__special_character;
	v->a[116249] = actions(6841);
	v->a[116250] = 1;
	v->a[116251] = sym__comment_word;
	v->a[116252] = actions(6839);
	v->a[116253] = 3;
	v->a[116254] = sym_test_operator;
	v->a[116255] = sym__bare_dollar;
	v->a[116256] = sym_raw_string;
	v->a[116257] = state(1070);
	v->a[116258] = 7;
	v->a[116259] = sym_arithmetic_expansion;
	small_parse_table_5813(v);
}

void	small_parse_table_5813(t_small_parse_table_array *v)
{
	v->a[116260] = sym_brace_expression;
	v->a[116261] = sym_string;
	v->a[116262] = sym_number;
	v->a[116263] = sym_simple_expansion;
	v->a[116264] = sym_expansion;
	v->a[116265] = sym_command_substitution;
	v->a[116266] = 3;
	v->a[116267] = actions(3);
	v->a[116268] = 1;
	v->a[116269] = sym_comment;
	v->a[116270] = actions(6069);
	v->a[116271] = 2;
	v->a[116272] = sym_file_descriptor;
	v->a[116273] = aux_sym_heredoc_redirect_token1;
	v->a[116274] = actions(6067);
	v->a[116275] = 21;
	v->a[116276] = anon_sym_PIPE;
	v->a[116277] = anon_sym_SEMI_SEMI;
	v->a[116278] = anon_sym_SEMI_AMP;
	v->a[116279] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_5814(v);
}

void	small_parse_table_5814(t_small_parse_table_array *v)
{
	v->a[116280] = anon_sym_PIPE_AMP;
	v->a[116281] = anon_sym_AMP_AMP;
	v->a[116282] = anon_sym_PIPE_PIPE;
	v->a[116283] = anon_sym_LT;
	v->a[116284] = anon_sym_GT;
	v->a[116285] = anon_sym_GT_GT;
	v->a[116286] = anon_sym_AMP_GT;
	v->a[116287] = anon_sym_AMP_GT_GT;
	v->a[116288] = anon_sym_LT_AMP;
	v->a[116289] = anon_sym_GT_AMP;
	v->a[116290] = anon_sym_GT_PIPE;
	v->a[116291] = anon_sym_LT_AMP_DASH;
	v->a[116292] = anon_sym_GT_AMP_DASH;
	v->a[116293] = anon_sym_LT_LT;
	v->a[116294] = anon_sym_LT_LT_DASH;
	v->a[116295] = anon_sym_AMP;
	v->a[116296] = anon_sym_SEMI;
	v->a[116297] = 16;
	v->a[116298] = actions(3);
	v->a[116299] = 1;
	small_parse_table_5815(v);
}

/* EOF small_parse_table_1162.c */
