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
	v->a[18200] = sym_number;
	v->a[18201] = state(323);
	v->a[18202] = 5;
	v->a[18203] = sym_arithmetic_expansion;
	v->a[18204] = sym_string;
	v->a[18205] = sym_simple_expansion;
	v->a[18206] = sym_expansion;
	v->a[18207] = sym_command_substitution;
	v->a[18208] = actions(23);
	v->a[18209] = 6;
	v->a[18210] = anon_sym_LT;
	v->a[18211] = anon_sym_GT;
	v->a[18212] = anon_sym_GT_GT;
	v->a[18213] = anon_sym_LT_AMP;
	v->a[18214] = anon_sym_GT_AMP;
	v->a[18215] = anon_sym_GT_PIPE;
	v->a[18216] = state(1105);
	v->a[18217] = 12;
	v->a[18218] = sym_redirected_statement;
	v->a[18219] = sym_for_statement;
	small_parse_table_911(v);
}

void	small_parse_table_911(t_small_parse_table_array *v)
{
	v->a[18220] = sym_while_statement;
	v->a[18221] = sym_if_statement;
	v->a[18222] = sym_case_statement;
	v->a[18223] = sym_function_definition;
	v->a[18224] = sym_compound_statement;
	v->a[18225] = sym_subshell;
	v->a[18226] = sym_list;
	v->a[18227] = sym_negated_command;
	v->a[18228] = sym_command;
	v->a[18229] = sym__variable_assignments;
	v->a[18230] = 30;
	v->a[18231] = actions(3);
	v->a[18232] = 1;
	v->a[18233] = sym_comment;
	v->a[18234] = actions(156);
	v->a[18235] = 1;
	v->a[18236] = sym_word;
	v->a[18237] = actions(158);
	v->a[18238] = 1;
	v->a[18239] = anon_sym_for;
	small_parse_table_912(v);
}

void	small_parse_table_912(t_small_parse_table_array *v)
{
	v->a[18240] = actions(162);
	v->a[18241] = 1;
	v->a[18242] = anon_sym_if;
	v->a[18243] = actions(164);
	v->a[18244] = 1;
	v->a[18245] = anon_sym_case;
	v->a[18246] = actions(166);
	v->a[18247] = 1;
	v->a[18248] = anon_sym_LPAREN;
	v->a[18249] = actions(168);
	v->a[18250] = 1;
	v->a[18251] = anon_sym_LBRACE;
	v->a[18252] = actions(170);
	v->a[18253] = 1;
	v->a[18254] = anon_sym_BANG;
	v->a[18255] = actions(176);
	v->a[18256] = 1;
	v->a[18257] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18258] = actions(178);
	v->a[18259] = 1;
	small_parse_table_913(v);
}

void	small_parse_table_913(t_small_parse_table_array *v)
{
	v->a[18260] = anon_sym_DOLLAR;
	v->a[18261] = actions(180);
	v->a[18262] = 1;
	v->a[18263] = anon_sym_DQUOTE;
	v->a[18264] = actions(184);
	v->a[18265] = 1;
	v->a[18266] = anon_sym_DOLLAR_LBRACE;
	v->a[18267] = actions(186);
	v->a[18268] = 1;
	v->a[18269] = anon_sym_DOLLAR_LPAREN;
	v->a[18270] = actions(188);
	v->a[18271] = 1;
	v->a[18272] = anon_sym_BQUOTE;
	v->a[18273] = actions(190);
	v->a[18274] = 1;
	v->a[18275] = sym_file_descriptor;
	v->a[18276] = actions(192);
	v->a[18277] = 1;
	v->a[18278] = sym_variable_name;
	v->a[18279] = state(186);
	small_parse_table_914(v);
}

void	small_parse_table_914(t_small_parse_table_array *v)
{
	v->a[18280] = 1;
	v->a[18281] = sym_command_name;
	v->a[18282] = state(274);
	v->a[18283] = 1;
	v->a[18284] = sym_variable_assignment;
	v->a[18285] = state(636);
	v->a[18286] = 1;
	v->a[18287] = sym_concatenation;
	v->a[18288] = state(677);
	v->a[18289] = 1;
	v->a[18290] = sym_file_redirect;
	v->a[18291] = state(752);
	v->a[18292] = 1;
	v->a[18293] = aux_sym_command_repeat1;
	v->a[18294] = state(1161);
	v->a[18295] = 1;
	v->a[18296] = sym_pipeline;
	v->a[18297] = state(1226);
	v->a[18298] = 1;
	v->a[18299] = aux_sym_redirected_statement_repeat2;
	small_parse_table_915(v);
}

/* EOF small_parse_table_182.c */
