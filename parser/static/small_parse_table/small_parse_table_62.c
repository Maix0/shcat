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
	v->a[6202] = state(1312);
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
	v->a[6215] = sym_variable_assignments;
	v->a[6216] = 32;
	v->a[6217] = actions(3);
	v->a[6218] = 1;
	v->a[6219] = sym_comment;
	small_parse_table_311(v);
}

void	small_parse_table_311(t_small_parse_table_array *v)
{
	v->a[6220] = actions(143);
	v->a[6221] = 1;
	v->a[6222] = sym_word;
	v->a[6223] = actions(146);
	v->a[6224] = 1;
	v->a[6225] = anon_sym_for;
	v->a[6226] = actions(152);
	v->a[6227] = 1;
	v->a[6228] = anon_sym_if;
	v->a[6229] = actions(155);
	v->a[6230] = 1;
	v->a[6231] = anon_sym_fi;
	v->a[6232] = actions(157);
	v->a[6233] = 1;
	v->a[6234] = anon_sym_case;
	v->a[6235] = actions(160);
	v->a[6236] = 1;
	v->a[6237] = anon_sym_LPAREN;
	v->a[6238] = actions(163);
	v->a[6239] = 1;
	small_parse_table_312(v);
}

void	small_parse_table_312(t_small_parse_table_array *v)
{
	v->a[6240] = anon_sym_LBRACE;
	v->a[6241] = actions(166);
	v->a[6242] = 1;
	v->a[6243] = anon_sym_BANG;
	v->a[6244] = actions(175);
	v->a[6245] = 1;
	v->a[6246] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6247] = actions(178);
	v->a[6248] = 1;
	v->a[6249] = anon_sym_DOLLAR;
	v->a[6250] = actions(181);
	v->a[6251] = 1;
	v->a[6252] = anon_sym_DQUOTE;
	v->a[6253] = actions(187);
	v->a[6254] = 1;
	v->a[6255] = anon_sym_DOLLAR_LBRACE;
	v->a[6256] = actions(190);
	v->a[6257] = 1;
	v->a[6258] = anon_sym_DOLLAR_LPAREN;
	v->a[6259] = actions(193);
	small_parse_table_313(v);
}

void	small_parse_table_313(t_small_parse_table_array *v)
{
	v->a[6260] = 1;
	v->a[6261] = anon_sym_BQUOTE;
	v->a[6262] = actions(196);
	v->a[6263] = 1;
	v->a[6264] = sym_file_descriptor;
	v->a[6265] = actions(199);
	v->a[6266] = 1;
	v->a[6267] = sym_variable_name;
	v->a[6268] = state(51);
	v->a[6269] = 1;
	v->a[6270] = aux_sym__terminated_statement;
	v->a[6271] = state(187);
	v->a[6272] = 1;
	v->a[6273] = sym_command_name;
	v->a[6274] = state(289);
	v->a[6275] = 1;
	v->a[6276] = sym_variable_assignment;
	v->a[6277] = state(647);
	v->a[6278] = 1;
	v->a[6279] = sym_concatenation;
	small_parse_table_314(v);
}

void	small_parse_table_314(t_small_parse_table_array *v)
{
	v->a[6280] = state(736);
	v->a[6281] = 1;
	v->a[6282] = aux_sym_command_repeat1;
	v->a[6283] = state(738);
	v->a[6284] = 1;
	v->a[6285] = sym_file_redirect;
	v->a[6286] = state(1460);
	v->a[6287] = 1;
	v->a[6288] = aux_sym_redirected_statement_repeat2;
	v->a[6289] = state(1462);
	v->a[6290] = 1;
	v->a[6291] = sym_pipeline;
	v->a[6292] = state(2269);
	v->a[6293] = 1;
	v->a[6294] = sym__statement_not_pipeline;
	v->a[6295] = actions(149);
	v->a[6296] = 2;
	v->a[6297] = anon_sym_while;
	v->a[6298] = anon_sym_until;
	v->a[6299] = actions(172);
	small_parse_table_315(v);
}

/* EOF small_parse_table_62.c */
