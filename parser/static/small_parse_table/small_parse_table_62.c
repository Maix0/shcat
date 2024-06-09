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
	v->a[6200] = 1;
	v->a[6201] = sym_file_redirect;
	v->a[6202] = state(1133);
	v->a[6203] = 1;
	v->a[6204] = aux_sym_redirected_statement_repeat2;
	v->a[6205] = state(1142);
	v->a[6206] = 1;
	v->a[6207] = sym_pipeline;
	v->a[6208] = state(2041);
	v->a[6209] = 1;
	v->a[6210] = sym__statement_not_pipeline;
	v->a[6211] = state(2093);
	v->a[6212] = 1;
	v->a[6213] = sym__statements;
	v->a[6214] = actions(11);
	v->a[6215] = 2;
	v->a[6216] = anon_sym_while;
	v->a[6217] = anon_sym_until;
	v->a[6218] = actions(61);
	v->a[6219] = 2;
	small_parse_table_311(v);
}

void	small_parse_table_311(t_small_parse_table_array *v)
{
	v->a[6220] = anon_sym_LT_AMP_DASH;
	v->a[6221] = anon_sym_GT_AMP_DASH;
	v->a[6222] = state(397);
	v->a[6223] = 6;
	v->a[6224] = sym_arithmetic_expansion;
	v->a[6225] = sym_string;
	v->a[6226] = sym_number;
	v->a[6227] = sym_simple_expansion;
	v->a[6228] = sym_expansion;
	v->a[6229] = sym_command_substitution;
	v->a[6230] = actions(59);
	v->a[6231] = 8;
	v->a[6232] = anon_sym_LT;
	v->a[6233] = anon_sym_GT;
	v->a[6234] = anon_sym_GT_GT;
	v->a[6235] = anon_sym_AMP_GT;
	v->a[6236] = anon_sym_AMP_GT_GT;
	v->a[6237] = anon_sym_LT_AMP;
	v->a[6238] = anon_sym_GT_AMP;
	v->a[6239] = anon_sym_GT_PIPE;
	small_parse_table_312(v);
}

void	small_parse_table_312(t_small_parse_table_array *v)
{
	v->a[6240] = state(1071);
	v->a[6241] = 12;
	v->a[6242] = sym_redirected_statement;
	v->a[6243] = sym_for_statement;
	v->a[6244] = sym_while_statement;
	v->a[6245] = sym_if_statement;
	v->a[6246] = sym_case_statement;
	v->a[6247] = sym_function_definition;
	v->a[6248] = sym_compound_statement;
	v->a[6249] = sym_subshell;
	v->a[6250] = sym_list;
	v->a[6251] = sym_negated_command;
	v->a[6252] = sym_command;
	v->a[6253] = sym_variable_assignments;
	v->a[6254] = 34;
	v->a[6255] = actions(3);
	v->a[6256] = 1;
	v->a[6257] = sym_comment;
	v->a[6258] = actions(9);
	v->a[6259] = 1;
	small_parse_table_313(v);
}

void	small_parse_table_313(t_small_parse_table_array *v)
{
	v->a[6260] = anon_sym_for;
	v->a[6261] = actions(13);
	v->a[6262] = 1;
	v->a[6263] = anon_sym_if;
	v->a[6264] = actions(15);
	v->a[6265] = 1;
	v->a[6266] = anon_sym_case;
	v->a[6267] = actions(17);
	v->a[6268] = 1;
	v->a[6269] = anon_sym_LPAREN;
	v->a[6270] = actions(19);
	v->a[6271] = 1;
	v->a[6272] = anon_sym_LBRACE;
	v->a[6273] = actions(49);
	v->a[6274] = 1;
	v->a[6275] = sym_word;
	v->a[6276] = actions(57);
	v->a[6277] = 1;
	v->a[6278] = anon_sym_BANG;
	v->a[6279] = actions(63);
	small_parse_table_314(v);
}

void	small_parse_table_314(t_small_parse_table_array *v)
{
	v->a[6280] = 1;
	v->a[6281] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6282] = actions(65);
	v->a[6283] = 1;
	v->a[6284] = anon_sym_DOLLAR;
	v->a[6285] = actions(67);
	v->a[6286] = 1;
	v->a[6287] = anon_sym_DQUOTE;
	v->a[6288] = actions(69);
	v->a[6289] = 1;
	v->a[6290] = sym_raw_string;
	v->a[6291] = actions(71);
	v->a[6292] = 1;
	v->a[6293] = aux_sym_number_token1;
	v->a[6294] = actions(73);
	v->a[6295] = 1;
	v->a[6296] = aux_sym_number_token2;
	v->a[6297] = actions(75);
	v->a[6298] = 1;
	v->a[6299] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_315(v);
}

/* EOF small_parse_table_62.c */
