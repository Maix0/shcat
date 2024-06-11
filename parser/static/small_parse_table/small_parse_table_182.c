/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_182.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_910(t_small_parse_table_array *v)
{
	v->a[18200] = actions(99);
	v->a[18201] = 1;
	v->a[18202] = anon_sym_LPAREN;
	v->a[18203] = actions(101);
	v->a[18204] = 1;
	v->a[18205] = anon_sym_LBRACE;
	v->a[18206] = actions(103);
	v->a[18207] = 1;
	v->a[18208] = anon_sym_BANG;
	v->a[18209] = actions(109);
	v->a[18210] = 1;
	v->a[18211] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18212] = actions(111);
	v->a[18213] = 1;
	v->a[18214] = anon_sym_DOLLAR;
	v->a[18215] = actions(113);
	v->a[18216] = 1;
	v->a[18217] = anon_sym_DQUOTE;
	v->a[18218] = actions(117);
	v->a[18219] = 1;
	small_parse_table_911(v);
}

void	small_parse_table_911(t_small_parse_table_array *v)
{
	v->a[18220] = anon_sym_DOLLAR_LBRACE;
	v->a[18221] = actions(119);
	v->a[18222] = 1;
	v->a[18223] = anon_sym_DOLLAR_LPAREN;
	v->a[18224] = actions(121);
	v->a[18225] = 1;
	v->a[18226] = anon_sym_BQUOTE;
	v->a[18227] = actions(123);
	v->a[18228] = 1;
	v->a[18229] = sym_file_descriptor;
	v->a[18230] = actions(125);
	v->a[18231] = 1;
	v->a[18232] = sym_variable_name;
	v->a[18233] = state(182);
	v->a[18234] = 1;
	v->a[18235] = sym_command_name;
	v->a[18236] = state(267);
	v->a[18237] = 1;
	v->a[18238] = sym_variable_assignment;
	v->a[18239] = state(621);
	small_parse_table_912(v);
}

void	small_parse_table_912(t_small_parse_table_array *v)
{
	v->a[18240] = 1;
	v->a[18241] = sym_concatenation;
	v->a[18242] = state(692);
	v->a[18243] = 1;
	v->a[18244] = sym_file_redirect;
	v->a[18245] = state(810);
	v->a[18246] = 1;
	v->a[18247] = aux_sym_command_repeat1;
	v->a[18248] = state(1271);
	v->a[18249] = 1;
	v->a[18250] = sym_pipeline;
	v->a[18251] = state(1432);
	v->a[18252] = 1;
	v->a[18253] = aux_sym_redirected_statement_repeat2;
	v->a[18254] = state(2254);
	v->a[18255] = 1;
	v->a[18256] = sym__statement_not_pipeline;
	v->a[18257] = actions(93);
	v->a[18258] = 2;
	v->a[18259] = anon_sym_while;
	small_parse_table_913(v);
}

void	small_parse_table_913(t_small_parse_table_array *v)
{
	v->a[18260] = anon_sym_until;
	v->a[18261] = actions(107);
	v->a[18262] = 2;
	v->a[18263] = anon_sym_LT_AMP_DASH;
	v->a[18264] = anon_sym_GT_AMP_DASH;
	v->a[18265] = actions(115);
	v->a[18266] = 2;
	v->a[18267] = sym_raw_string;
	v->a[18268] = sym_number;
	v->a[18269] = state(282);
	v->a[18270] = 5;
	v->a[18271] = sym_arithmetic_expansion;
	v->a[18272] = sym_string;
	v->a[18273] = sym_simple_expansion;
	v->a[18274] = sym_expansion;
	v->a[18275] = sym_command_substitution;
	v->a[18276] = actions(105);
	v->a[18277] = 8;
	v->a[18278] = anon_sym_LT;
	v->a[18279] = anon_sym_GT;
	small_parse_table_914(v);
}

void	small_parse_table_914(t_small_parse_table_array *v)
{
	v->a[18280] = anon_sym_GT_GT;
	v->a[18281] = anon_sym_AMP_GT;
	v->a[18282] = anon_sym_AMP_GT_GT;
	v->a[18283] = anon_sym_LT_AMP;
	v->a[18284] = anon_sym_GT_AMP;
	v->a[18285] = anon_sym_GT_PIPE;
	v->a[18286] = state(1269);
	v->a[18287] = 12;
	v->a[18288] = sym_redirected_statement;
	v->a[18289] = sym_for_statement;
	v->a[18290] = sym_while_statement;
	v->a[18291] = sym_if_statement;
	v->a[18292] = sym_case_statement;
	v->a[18293] = sym_function_definition;
	v->a[18294] = sym_compound_statement;
	v->a[18295] = sym_subshell;
	v->a[18296] = sym_list;
	v->a[18297] = sym_negated_command;
	v->a[18298] = sym_command;
	v->a[18299] = sym_variable_assignments;
	small_parse_table_915(v);
}

/* EOF small_parse_table_182.c */
