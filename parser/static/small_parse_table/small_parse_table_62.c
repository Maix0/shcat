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
	v->a[6200] = anon_sym_GT_AMP;
	v->a[6201] = anon_sym_GT_PIPE;
	v->a[6202] = state(1057);
	v->a[6203] = 12;
	v->a[6204] = sym_redirected_statement;
	v->a[6205] = sym_for_statement;
	v->a[6206] = sym_while_statement;
	v->a[6207] = sym_if_statement;
	v->a[6208] = sym_case_statement;
	v->a[6209] = sym_function_definition;
	v->a[6210] = sym_compound_statement;
	v->a[6211] = sym_subshell;
	v->a[6212] = sym_list;
	v->a[6213] = sym_negated_command;
	v->a[6214] = sym_command;
	v->a[6215] = sym__variable_assignments;
	v->a[6216] = 32;
	v->a[6217] = actions(3);
	v->a[6218] = 1;
	v->a[6219] = sym_comment;
	small_parse_table_311(v);
}

void	small_parse_table_311(t_small_parse_table_array *v)
{
	v->a[6220] = actions(9);
	v->a[6221] = 1;
	v->a[6222] = anon_sym_for;
	v->a[6223] = actions(13);
	v->a[6224] = 1;
	v->a[6225] = anon_sym_if;
	v->a[6226] = actions(15);
	v->a[6227] = 1;
	v->a[6228] = anon_sym_case;
	v->a[6229] = actions(17);
	v->a[6230] = 1;
	v->a[6231] = anon_sym_LPAREN;
	v->a[6232] = actions(19);
	v->a[6233] = 1;
	v->a[6234] = anon_sym_LBRACE;
	v->a[6235] = actions(59);
	v->a[6236] = 1;
	v->a[6237] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6238] = actions(61);
	v->a[6239] = 1;
	small_parse_table_312(v);
}

void	small_parse_table_312(t_small_parse_table_array *v)
{
	v->a[6240] = anon_sym_DOLLAR;
	v->a[6241] = actions(63);
	v->a[6242] = 1;
	v->a[6243] = anon_sym_DQUOTE;
	v->a[6244] = actions(67);
	v->a[6245] = 1;
	v->a[6246] = anon_sym_DOLLAR_LBRACE;
	v->a[6247] = actions(69);
	v->a[6248] = 1;
	v->a[6249] = anon_sym_DOLLAR_LPAREN;
	v->a[6250] = actions(71);
	v->a[6251] = 1;
	v->a[6252] = anon_sym_BQUOTE;
	v->a[6253] = actions(73);
	v->a[6254] = 1;
	v->a[6255] = sym_file_descriptor;
	v->a[6256] = actions(75);
	v->a[6257] = 1;
	v->a[6258] = sym_variable_name;
	v->a[6259] = actions(234);
	small_parse_table_313(v);
}

void	small_parse_table_313(t_small_parse_table_array *v)
{
	v->a[6260] = 1;
	v->a[6261] = sym_word;
	v->a[6262] = actions(236);
	v->a[6263] = 1;
	v->a[6264] = anon_sym_BANG;
	v->a[6265] = state(129);
	v->a[6266] = 1;
	v->a[6267] = aux_sym__statements_repeat1;
	v->a[6268] = state(189);
	v->a[6269] = 1;
	v->a[6270] = sym_command_name;
	v->a[6271] = state(244);
	v->a[6272] = 1;
	v->a[6273] = sym_variable_assignment;
	v->a[6274] = state(624);
	v->a[6275] = 1;
	v->a[6276] = sym_concatenation;
	v->a[6277] = state(672);
	v->a[6278] = 1;
	v->a[6279] = aux_sym_command_repeat1;
	small_parse_table_314(v);
}

void	small_parse_table_314(t_small_parse_table_array *v)
{
	v->a[6280] = state(787);
	v->a[6281] = 1;
	v->a[6282] = sym_file_redirect;
	v->a[6283] = state(1176);
	v->a[6284] = 1;
	v->a[6285] = sym_pipeline;
	v->a[6286] = state(1207);
	v->a[6287] = 1;
	v->a[6288] = aux_sym_redirected_statement_repeat2;
	v->a[6289] = state(2116);
	v->a[6290] = 1;
	v->a[6291] = sym__statement_not_pipeline;
	v->a[6292] = state(2327);
	v->a[6293] = 1;
	v->a[6294] = sym__statements;
	v->a[6295] = actions(11);
	v->a[6296] = 2;
	v->a[6297] = anon_sym_while;
	v->a[6298] = anon_sym_until;
	v->a[6299] = actions(57);
	small_parse_table_315(v);
}

/* EOF small_parse_table_62.c */
