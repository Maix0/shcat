/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_62.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_310(t_small_parse_table_array *v)
{
	v->a[6200] = anon_sym_AMP;
	v->a[6201] = anon_sym_EQ_EQ;
	v->a[6202] = anon_sym_LT;
	v->a[6203] = anon_sym_GT;
	v->a[6204] = anon_sym_LT_LT;
	v->a[6205] = anon_sym_GT_GT;
	v->a[6206] = anon_sym_RPAREN;
	v->a[6207] = anon_sym_SEMI_SEMI;
	v->a[6208] = anon_sym_PIPE_AMP;
	v->a[6209] = anon_sym_EQ_TILDE;
	v->a[6210] = anon_sym_AMP_GT;
	v->a[6211] = anon_sym_AMP_GT_GT;
	v->a[6212] = anon_sym_LT_AMP;
	v->a[6213] = anon_sym_GT_AMP;
	v->a[6214] = anon_sym_GT_PIPE;
	v->a[6215] = anon_sym_LT_AMP_DASH;
	v->a[6216] = anon_sym_GT_AMP_DASH;
	v->a[6217] = anon_sym_LT_LT_DASH;
	v->a[6218] = aux_sym_heredoc_redirect_token1;
	v->a[6219] = anon_sym_LT_LT_LT;
	small_parse_table_311(v);
}

void	small_parse_table_311(t_small_parse_table_array *v)
{
	v->a[6220] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6221] = anon_sym_DOLLAR_LBRACK;
	v->a[6222] = sym__special_character;
	v->a[6223] = sym_raw_string;
	v->a[6224] = sym_ansi_c_string;
	v->a[6225] = aux_sym_number_token1;
	v->a[6226] = aux_sym_number_token2;
	v->a[6227] = anon_sym_DOLLAR_LBRACE;
	v->a[6228] = anon_sym_DOLLAR_LPAREN;
	v->a[6229] = anon_sym_BQUOTE;
	v->a[6230] = anon_sym_DOLLAR_BQUOTE;
	v->a[6231] = anon_sym_LT_LPAREN;
	v->a[6232] = anon_sym_GT_LPAREN;
	v->a[6233] = sym_word;
	v->a[6234] = 22;
	v->a[6235] = actions(3);
	v->a[6236] = 1;
	v->a[6237] = sym_comment;
	v->a[6238] = actions(2301);
	v->a[6239] = 1;
	small_parse_table_312(v);
}

void	small_parse_table_312(t_small_parse_table_array *v)
{
	v->a[6240] = anon_sym_DOLLAR_LBRACK;
	v->a[6241] = actions(2303);
	v->a[6242] = 1;
	v->a[6243] = anon_sym_DOLLAR;
	v->a[6244] = actions(2305);
	v->a[6245] = 1;
	v->a[6246] = sym__special_character;
	v->a[6247] = actions(2307);
	v->a[6248] = 1;
	v->a[6249] = anon_sym_DQUOTE;
	v->a[6250] = actions(2309);
	v->a[6251] = 1;
	v->a[6252] = aux_sym_number_token1;
	v->a[6253] = actions(2311);
	v->a[6254] = 1;
	v->a[6255] = aux_sym_number_token2;
	v->a[6256] = actions(2313);
	v->a[6257] = 1;
	v->a[6258] = anon_sym_DOLLAR_LBRACE;
	v->a[6259] = actions(2315);
	small_parse_table_313(v);
}

void	small_parse_table_313(t_small_parse_table_array *v)
{
	v->a[6260] = 1;
	v->a[6261] = anon_sym_DOLLAR_LPAREN;
	v->a[6262] = actions(2317);
	v->a[6263] = 1;
	v->a[6264] = anon_sym_BQUOTE;
	v->a[6265] = actions(2319);
	v->a[6266] = 1;
	v->a[6267] = anon_sym_DOLLAR_BQUOTE;
	v->a[6268] = actions(2323);
	v->a[6269] = 1;
	v->a[6270] = aux_sym__simple_variable_name_token1;
	v->a[6271] = actions(2325);
	v->a[6272] = 1;
	v->a[6273] = sym_test_operator;
	v->a[6274] = actions(2327);
	v->a[6275] = 1;
	v->a[6276] = sym__brace_start;
	v->a[6277] = state(1631);
	v->a[6278] = 1;
	v->a[6279] = aux_sym__literal_repeat1;
	small_parse_table_314(v);
}

void	small_parse_table_314(t_small_parse_table_array *v)
{
	v->a[6280] = actions(2295);
	v->a[6281] = 2;
	v->a[6282] = anon_sym_LPAREN_LPAREN;
	v->a[6283] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6284] = actions(2299);
	v->a[6285] = 2;
	v->a[6286] = sym_file_descriptor;
	v->a[6287] = aux_sym_heredoc_redirect_token1;
	v->a[6288] = actions(2321);
	v->a[6289] = 2;
	v->a[6290] = anon_sym_LT_LPAREN;
	v->a[6291] = anon_sym_GT_LPAREN;
	v->a[6292] = state(613);
	v->a[6293] = 2;
	v->a[6294] = sym_concatenation;
	v->a[6295] = aux_sym_unset_command_repeat1;
	v->a[6296] = actions(2293);
	v->a[6297] = 3;
	v->a[6298] = sym_raw_string;
	v->a[6299] = sym_ansi_c_string;
	small_parse_table_315(v);
}

/* EOF small_parse_table_62.c */
