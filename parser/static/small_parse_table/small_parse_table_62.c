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
	v->a[6200] = sym_subshell;
	v->a[6201] = sym_list;
	v->a[6202] = sym_negated_command;
	v->a[6203] = sym_command;
	v->a[6204] = sym__variable_assignments;
	v->a[6205] = 31;
	v->a[6206] = actions(3);
	v->a[6207] = 1;
	v->a[6208] = sym_comment;
	v->a[6209] = actions(9);
	v->a[6210] = 1;
	v->a[6211] = anon_sym_for;
	v->a[6212] = actions(13);
	v->a[6213] = 1;
	v->a[6214] = anon_sym_if;
	v->a[6215] = actions(15);
	v->a[6216] = 1;
	v->a[6217] = anon_sym_case;
	v->a[6218] = actions(17);
	v->a[6219] = 1;
	small_parse_table_311(v);
}

void	small_parse_table_311(t_small_parse_table_array *v)
{
	v->a[6220] = anon_sym_LPAREN;
	v->a[6221] = actions(19);
	v->a[6222] = 1;
	v->a[6223] = anon_sym_LBRACE;
	v->a[6224] = actions(55);
	v->a[6225] = 1;
	v->a[6226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6227] = actions(57);
	v->a[6228] = 1;
	v->a[6229] = anon_sym_DOLLAR;
	v->a[6230] = actions(59);
	v->a[6231] = 1;
	v->a[6232] = anon_sym_DQUOTE;
	v->a[6233] = actions(63);
	v->a[6234] = 1;
	v->a[6235] = anon_sym_DOLLAR_LBRACE;
	v->a[6236] = actions(65);
	v->a[6237] = 1;
	v->a[6238] = anon_sym_DOLLAR_LPAREN;
	v->a[6239] = actions(67);
	small_parse_table_312(v);
}

void	small_parse_table_312(t_small_parse_table_array *v)
{
	v->a[6240] = 1;
	v->a[6241] = anon_sym_BQUOTE;
	v->a[6242] = actions(69);
	v->a[6243] = 1;
	v->a[6244] = sym_file_descriptor;
	v->a[6245] = actions(71);
	v->a[6246] = 1;
	v->a[6247] = sym_variable_name;
	v->a[6248] = actions(223);
	v->a[6249] = 1;
	v->a[6250] = sym_word;
	v->a[6251] = actions(225);
	v->a[6252] = 1;
	v->a[6253] = anon_sym_BANG;
	v->a[6254] = state(129);
	v->a[6255] = 1;
	v->a[6256] = aux_sym__statements_repeat1;
	v->a[6257] = state(178);
	v->a[6258] = 1;
	v->a[6259] = sym_command_name;
	small_parse_table_313(v);
}

void	small_parse_table_313(t_small_parse_table_array *v)
{
	v->a[6260] = state(339);
	v->a[6261] = 1;
	v->a[6262] = sym_variable_assignment;
	v->a[6263] = state(585);
	v->a[6264] = 1;
	v->a[6265] = aux_sym_command_repeat1;
	v->a[6266] = state(661);
	v->a[6267] = 1;
	v->a[6268] = sym_concatenation;
	v->a[6269] = state(774);
	v->a[6270] = 1;
	v->a[6271] = sym_file_redirect;
	v->a[6272] = state(1089);
	v->a[6273] = 1;
	v->a[6274] = sym_pipeline;
	v->a[6275] = state(1149);
	v->a[6276] = 1;
	v->a[6277] = aux_sym_redirected_statement_repeat2;
	v->a[6278] = state(1922);
	v->a[6279] = 1;
	small_parse_table_314(v);
}

void	small_parse_table_314(t_small_parse_table_array *v)
{
	v->a[6280] = sym__statement_not_pipeline;
	v->a[6281] = state(2127);
	v->a[6282] = 1;
	v->a[6283] = sym__statements;
	v->a[6284] = actions(11);
	v->a[6285] = 2;
	v->a[6286] = anon_sym_while;
	v->a[6287] = anon_sym_until;
	v->a[6288] = actions(61);
	v->a[6289] = 2;
	v->a[6290] = sym_raw_string;
	v->a[6291] = sym_number;
	v->a[6292] = state(455);
	v->a[6293] = 5;
	v->a[6294] = sym_arithmetic_expansion;
	v->a[6295] = sym_string;
	v->a[6296] = sym_simple_expansion;
	v->a[6297] = sym_expansion;
	v->a[6298] = sym_command_substitution;
	v->a[6299] = actions(53);
	small_parse_table_315(v);
}

/* EOF small_parse_table_62.c */
