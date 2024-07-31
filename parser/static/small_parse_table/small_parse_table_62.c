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
	v->a[6200] = actions(65);
	v->a[6201] = 1;
	v->a[6202] = anon_sym_BQUOTE;
	v->a[6203] = actions(206);
	v->a[6204] = 1;
	v->a[6205] = sym_word;
	v->a[6206] = actions(208);
	v->a[6207] = 1;
	v->a[6208] = anon_sym_BANG;
	v->a[6209] = actions(214);
	v->a[6210] = 1;
	v->a[6211] = sym_variable_name;
	v->a[6212] = state(106);
	v->a[6213] = 1;
	v->a[6214] = aux_sym__statements_repeat1;
	v->a[6215] = state(227);
	v->a[6216] = 1;
	v->a[6217] = sym_command_name;
	v->a[6218] = state(277);
	v->a[6219] = 1;
	small_parse_table_311(v);
}

void	small_parse_table_311(t_small_parse_table_array *v)
{
	v->a[6220] = sym_variable_assignment;
	v->a[6221] = state(506);
	v->a[6222] = 1;
	v->a[6223] = aux_sym_command_repeat1;
	v->a[6224] = state(561);
	v->a[6225] = 1;
	v->a[6226] = sym_file_redirect;
	v->a[6227] = state(602);
	v->a[6228] = 1;
	v->a[6229] = sym_concatenation;
	v->a[6230] = state(911);
	v->a[6231] = 1;
	v->a[6232] = sym_pipeline;
	v->a[6233] = state(1001);
	v->a[6234] = 1;
	v->a[6235] = aux_sym_redirected_statement_repeat2;
	v->a[6236] = state(1606);
	v->a[6237] = 1;
	v->a[6238] = sym__statement_not_pipeline;
	v->a[6239] = state(1662);
	small_parse_table_312(v);
}

void	small_parse_table_312(t_small_parse_table_array *v)
{
	v->a[6240] = 1;
	v->a[6241] = sym__statements;
	v->a[6242] = actions(11);
	v->a[6243] = 2;
	v->a[6244] = anon_sym_while;
	v->a[6245] = anon_sym_until;
	v->a[6246] = actions(212);
	v->a[6247] = 2;
	v->a[6248] = sym_raw_string;
	v->a[6249] = sym_number;
	v->a[6250] = state(327);
	v->a[6251] = 5;
	v->a[6252] = sym_arithmetic_expansion;
	v->a[6253] = sym_string;
	v->a[6254] = sym_simple_expansion;
	v->a[6255] = sym_expansion;
	v->a[6256] = sym_command_substitution;
	v->a[6257] = actions(210);
	v->a[6258] = 7;
	v->a[6259] = anon_sym_LT;
	small_parse_table_313(v);
}

void	small_parse_table_313(t_small_parse_table_array *v)
{
	v->a[6260] = anon_sym_GT;
	v->a[6261] = anon_sym_GT_GT;
	v->a[6262] = anon_sym_LT_AMP;
	v->a[6263] = anon_sym_GT_AMP;
	v->a[6264] = anon_sym_GT_PIPE;
	v->a[6265] = anon_sym_LT_GT;
	v->a[6266] = state(884);
	v->a[6267] = 12;
	v->a[6268] = sym_redirected_statement;
	v->a[6269] = sym_for_statement;
	v->a[6270] = sym_while_statement;
	v->a[6271] = sym_if_statement;
	v->a[6272] = sym_case_statement;
	v->a[6273] = sym_function_definition;
	v->a[6274] = sym_compound_statement;
	v->a[6275] = sym_subshell;
	v->a[6276] = sym_list;
	v->a[6277] = sym_negated_command;
	v->a[6278] = sym_command;
	v->a[6279] = sym__variable_assignments;
	small_parse_table_314(v);
}

void	small_parse_table_314(t_small_parse_table_array *v)
{
	v->a[6280] = 30;
	v->a[6281] = actions(3);
	v->a[6282] = 1;
	v->a[6283] = sym_comment;
	v->a[6284] = actions(9);
	v->a[6285] = 1;
	v->a[6286] = anon_sym_for;
	v->a[6287] = actions(13);
	v->a[6288] = 1;
	v->a[6289] = anon_sym_if;
	v->a[6290] = actions(15);
	v->a[6291] = 1;
	v->a[6292] = anon_sym_case;
	v->a[6293] = actions(17);
	v->a[6294] = 1;
	v->a[6295] = anon_sym_LPAREN;
	v->a[6296] = actions(19);
	v->a[6297] = 1;
	v->a[6298] = anon_sym_LBRACE;
	v->a[6299] = actions(53);
	small_parse_table_315(v);
}

/* EOF small_parse_table_62.c */
