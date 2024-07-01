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
	v->a[6200] = anon_sym_until;
	v->a[6201] = actions(57);
	v->a[6202] = 2;
	v->a[6203] = anon_sym_LT_AMP_DASH;
	v->a[6204] = anon_sym_GT_AMP_DASH;
	v->a[6205] = actions(65);
	v->a[6206] = 2;
	v->a[6207] = sym_raw_string;
	v->a[6208] = sym_number;
	v->a[6209] = state(443);
	v->a[6210] = 5;
	v->a[6211] = sym_arithmetic_expansion;
	v->a[6212] = sym_string;
	v->a[6213] = sym_simple_expansion;
	v->a[6214] = sym_expansion;
	v->a[6215] = sym_command_substitution;
	v->a[6216] = actions(55);
	v->a[6217] = 6;
	v->a[6218] = anon_sym_LT;
	v->a[6219] = anon_sym_GT;
	small_parse_table_311(v);
}

void	small_parse_table_311(t_small_parse_table_array *v)
{
	v->a[6220] = anon_sym_GT_GT;
	v->a[6221] = anon_sym_LT_AMP;
	v->a[6222] = anon_sym_GT_AMP;
	v->a[6223] = anon_sym_GT_PIPE;
	v->a[6224] = state(1030);
	v->a[6225] = 12;
	v->a[6226] = sym_redirected_statement;
	v->a[6227] = sym_for_statement;
	v->a[6228] = sym_while_statement;
	v->a[6229] = sym_if_statement;
	v->a[6230] = sym_case_statement;
	v->a[6231] = sym_function_definition;
	v->a[6232] = sym_compound_statement;
	v->a[6233] = sym_subshell;
	v->a[6234] = sym_list;
	v->a[6235] = sym_negated_command;
	v->a[6236] = sym_command;
	v->a[6237] = sym__variable_assignments;
	v->a[6238] = 32;
	v->a[6239] = actions(3);
	small_parse_table_312(v);
}

void	small_parse_table_312(t_small_parse_table_array *v)
{
	v->a[6240] = 1;
	v->a[6241] = sym_comment;
	v->a[6242] = actions(9);
	v->a[6243] = 1;
	v->a[6244] = anon_sym_for;
	v->a[6245] = actions(13);
	v->a[6246] = 1;
	v->a[6247] = anon_sym_if;
	v->a[6248] = actions(15);
	v->a[6249] = 1;
	v->a[6250] = anon_sym_case;
	v->a[6251] = actions(17);
	v->a[6252] = 1;
	v->a[6253] = anon_sym_LPAREN;
	v->a[6254] = actions(19);
	v->a[6255] = 1;
	v->a[6256] = anon_sym_LBRACE;
	v->a[6257] = actions(59);
	v->a[6258] = 1;
	v->a[6259] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_313(v);
}

void	small_parse_table_313(t_small_parse_table_array *v)
{
	v->a[6260] = actions(61);
	v->a[6261] = 1;
	v->a[6262] = anon_sym_DOLLAR;
	v->a[6263] = actions(63);
	v->a[6264] = 1;
	v->a[6265] = anon_sym_DQUOTE;
	v->a[6266] = actions(67);
	v->a[6267] = 1;
	v->a[6268] = anon_sym_DOLLAR_LBRACE;
	v->a[6269] = actions(69);
	v->a[6270] = 1;
	v->a[6271] = anon_sym_DOLLAR_LPAREN;
	v->a[6272] = actions(71);
	v->a[6273] = 1;
	v->a[6274] = anon_sym_BQUOTE;
	v->a[6275] = actions(73);
	v->a[6276] = 1;
	v->a[6277] = sym_file_descriptor;
	v->a[6278] = actions(75);
	v->a[6279] = 1;
	small_parse_table_314(v);
}

void	small_parse_table_314(t_small_parse_table_array *v)
{
	v->a[6280] = sym_variable_name;
	v->a[6281] = actions(240);
	v->a[6282] = 1;
	v->a[6283] = sym_word;
	v->a[6284] = actions(242);
	v->a[6285] = 1;
	v->a[6286] = anon_sym_BANG;
	v->a[6287] = state(136);
	v->a[6288] = 1;
	v->a[6289] = aux_sym__statements_repeat1;
	v->a[6290] = state(188);
	v->a[6291] = 1;
	v->a[6292] = sym_command_name;
	v->a[6293] = state(297);
	v->a[6294] = 1;
	v->a[6295] = sym_variable_assignment;
	v->a[6296] = state(650);
	v->a[6297] = 1;
	v->a[6298] = sym_concatenation;
	v->a[6299] = state(749);
	small_parse_table_315(v);
}

/* EOF small_parse_table_62.c */
