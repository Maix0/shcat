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
	v->a[6200] = actions(49);
	v->a[6201] = 1;
	v->a[6202] = anon_sym_BANG;
	v->a[6203] = actions(53);
	v->a[6204] = 1;
	v->a[6205] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6206] = actions(55);
	v->a[6207] = 1;
	v->a[6208] = anon_sym_DOLLAR;
	v->a[6209] = actions(57);
	v->a[6210] = 1;
	v->a[6211] = anon_sym_DQUOTE;
	v->a[6212] = actions(61);
	v->a[6213] = 1;
	v->a[6214] = anon_sym_DOLLAR_LBRACE;
	v->a[6215] = actions(63);
	v->a[6216] = 1;
	v->a[6217] = anon_sym_DOLLAR_LPAREN;
	v->a[6218] = actions(65);
	v->a[6219] = 1;
	small_parse_table_311(v);
}

void	small_parse_table_311(t_small_parse_table_array *v)
{
	v->a[6220] = anon_sym_BQUOTE;
	v->a[6221] = actions(67);
	v->a[6222] = 1;
	v->a[6223] = sym_variable_name;
	v->a[6224] = actions(222);
	v->a[6225] = 1;
	v->a[6226] = anon_sym_RBRACE;
	v->a[6227] = state(42);
	v->a[6228] = 1;
	v->a[6229] = aux_sym__terminated_statement;
	v->a[6230] = state(185);
	v->a[6231] = 1;
	v->a[6232] = sym_command_name;
	v->a[6233] = state(209);
	v->a[6234] = 1;
	v->a[6235] = sym_variable_assignment;
	v->a[6236] = state(411);
	v->a[6237] = 1;
	v->a[6238] = aux_sym_command_repeat1;
	v->a[6239] = state(551);
	small_parse_table_312(v);
}

void	small_parse_table_312(t_small_parse_table_array *v)
{
	v->a[6240] = 1;
	v->a[6241] = sym_file_redirect;
	v->a[6242] = state(555);
	v->a[6243] = 1;
	v->a[6244] = sym_concatenation;
	v->a[6245] = state(974);
	v->a[6246] = 1;
	v->a[6247] = sym_pipeline;
	v->a[6248] = state(1126);
	v->a[6249] = 1;
	v->a[6250] = aux_sym_redirected_statement_repeat2;
	v->a[6251] = state(1561);
	v->a[6252] = 1;
	v->a[6253] = sym__statement_not_pipeline;
	v->a[6254] = actions(11);
	v->a[6255] = 2;
	v->a[6256] = anon_sym_while;
	v->a[6257] = anon_sym_until;
	v->a[6258] = actions(59);
	v->a[6259] = 2;
	small_parse_table_313(v);
}

void	small_parse_table_313(t_small_parse_table_array *v)
{
	v->a[6260] = sym_raw_string;
	v->a[6261] = sym_number;
	v->a[6262] = actions(51);
	v->a[6263] = 3;
	v->a[6264] = anon_sym_LT;
	v->a[6265] = anon_sym_GT;
	v->a[6266] = anon_sym_GT_GT;
	v->a[6267] = state(401);
	v->a[6268] = 5;
	v->a[6269] = sym_arithmetic_expansion;
	v->a[6270] = sym_string;
	v->a[6271] = sym_simple_expansion;
	v->a[6272] = sym_expansion;
	v->a[6273] = sym_command_substitution;
	v->a[6274] = state(955);
	v->a[6275] = 12;
	v->a[6276] = sym_redirected_statement;
	v->a[6277] = sym_for_statement;
	v->a[6278] = sym_while_statement;
	v->a[6279] = sym_if_statement;
	small_parse_table_314(v);
}

void	small_parse_table_314(t_small_parse_table_array *v)
{
	v->a[6280] = sym_case_statement;
	v->a[6281] = sym_function_definition;
	v->a[6282] = sym_compound_statement;
	v->a[6283] = sym_subshell;
	v->a[6284] = sym_list;
	v->a[6285] = sym_negated_command;
	v->a[6286] = sym_command;
	v->a[6287] = sym__variable_assignments;
	v->a[6288] = 30;
	v->a[6289] = actions(3);
	v->a[6290] = 1;
	v->a[6291] = sym_comment;
	v->a[6292] = actions(9);
	v->a[6293] = 1;
	v->a[6294] = anon_sym_for;
	v->a[6295] = actions(13);
	v->a[6296] = 1;
	v->a[6297] = anon_sym_if;
	v->a[6298] = actions(15);
	v->a[6299] = 1;
	small_parse_table_315(v);
}

/* EOF small_parse_table_62.c */
