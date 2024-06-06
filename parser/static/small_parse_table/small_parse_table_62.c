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
	v->a[6200] = sym_command_substitution;
	v->a[6201] = actions(1180);
	v->a[6202] = 33;
	v->a[6203] = anon_sym_PIPE;
	v->a[6204] = anon_sym_SEMI_SEMI;
	v->a[6205] = anon_sym_SEMI_AMP;
	v->a[6206] = anon_sym_SEMI_SEMI_AMP;
	v->a[6207] = anon_sym_PIPE_AMP;
	v->a[6208] = anon_sym_AMP_AMP;
	v->a[6209] = anon_sym_PIPE_PIPE;
	v->a[6210] = anon_sym_LT;
	v->a[6211] = anon_sym_GT;
	v->a[6212] = anon_sym_GT_GT;
	v->a[6213] = anon_sym_AMP_GT;
	v->a[6214] = anon_sym_AMP_GT_GT;
	v->a[6215] = anon_sym_LT_AMP;
	v->a[6216] = anon_sym_GT_AMP;
	v->a[6217] = anon_sym_GT_PIPE;
	v->a[6218] = anon_sym_LT_AMP_DASH;
	v->a[6219] = anon_sym_GT_AMP_DASH;
	small_parse_table_311(v);
}

void	small_parse_table_311(t_small_parse_table_array *v)
{
	v->a[6220] = anon_sym_LT_LT;
	v->a[6221] = anon_sym_LT_LT_DASH;
	v->a[6222] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6223] = anon_sym_AMP;
	v->a[6224] = anon_sym_DOLLAR;
	v->a[6225] = sym__special_character;
	v->a[6226] = anon_sym_DQUOTE;
	v->a[6227] = sym_raw_string;
	v->a[6228] = aux_sym_number_token1;
	v->a[6229] = aux_sym_number_token2;
	v->a[6230] = anon_sym_DOLLAR_LBRACE;
	v->a[6231] = anon_sym_DOLLAR_LPAREN;
	v->a[6232] = anon_sym_BQUOTE;
	v->a[6233] = anon_sym_DOLLAR_BQUOTE;
	v->a[6234] = sym_word;
	v->a[6235] = anon_sym_SEMI;
	v->a[6236] = 21;
	v->a[6237] = actions(3);
	v->a[6238] = 1;
	v->a[6239] = sym_comment;
	small_parse_table_312(v);
}

void	small_parse_table_312(t_small_parse_table_array *v)
{
	v->a[6240] = actions(1009);
	v->a[6241] = 1;
	v->a[6242] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6243] = actions(1011);
	v->a[6244] = 1;
	v->a[6245] = anon_sym_DOLLAR;
	v->a[6246] = actions(1015);
	v->a[6247] = 1;
	v->a[6248] = anon_sym_DQUOTE;
	v->a[6249] = actions(1017);
	v->a[6250] = 1;
	v->a[6251] = aux_sym_number_token1;
	v->a[6252] = actions(1019);
	v->a[6253] = 1;
	v->a[6254] = aux_sym_number_token2;
	v->a[6255] = actions(1021);
	v->a[6256] = 1;
	v->a[6257] = anon_sym_DOLLAR_LBRACE;
	v->a[6258] = actions(1023);
	v->a[6259] = 1;
	small_parse_table_313(v);
}

void	small_parse_table_313(t_small_parse_table_array *v)
{
	v->a[6260] = anon_sym_DOLLAR_LPAREN;
	v->a[6261] = actions(1025);
	v->a[6262] = 1;
	v->a[6263] = anon_sym_BQUOTE;
	v->a[6264] = actions(1027);
	v->a[6265] = 1;
	v->a[6266] = anon_sym_DOLLAR_BQUOTE;
	v->a[6267] = actions(1035);
	v->a[6268] = 1;
	v->a[6269] = sym__brace_start;
	v->a[6270] = actions(1564);
	v->a[6271] = 1;
	v->a[6272] = sym__special_character;
	v->a[6273] = actions(1568);
	v->a[6274] = 1;
	v->a[6275] = sym_variable_name;
	v->a[6276] = actions(1570);
	v->a[6277] = 1;
	v->a[6278] = sym_test_operator;
	v->a[6279] = actions(1589);
	small_parse_table_314(v);
}

void	small_parse_table_314(t_small_parse_table_array *v)
{
	v->a[6280] = 1;
	v->a[6281] = aux_sym__simple_variable_name_token1;
	v->a[6282] = state(1024);
	v->a[6283] = 1;
	v->a[6284] = aux_sym__literal_repeat1;
	v->a[6285] = actions(727);
	v->a[6286] = 2;
	v->a[6287] = sym_file_descriptor;
	v->a[6288] = aux_sym_heredoc_redirect_token1;
	v->a[6289] = actions(1562);
	v->a[6290] = 2;
	v->a[6291] = sym_raw_string;
	v->a[6292] = sym_word;
	v->a[6293] = state(328);
	v->a[6294] = 3;
	v->a[6295] = sym_variable_assignment;
	v->a[6296] = sym_concatenation;
	v->a[6297] = aux_sym_declaration_command_repeat1;
	v->a[6298] = state(906);
	v->a[6299] = 7;
	small_parse_table_315(v);
}

/* EOF small_parse_table_62.c */
