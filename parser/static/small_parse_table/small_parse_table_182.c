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
	v->a[18200] = state(686);
	v->a[18201] = 6;
	v->a[18202] = sym_arithmetic_expansion;
	v->a[18203] = sym_string;
	v->a[18204] = sym_number;
	v->a[18205] = sym_simple_expansion;
	v->a[18206] = sym_expansion;
	v->a[18207] = sym_command_substitution;
	v->a[18208] = actions(353);
	v->a[18209] = 8;
	v->a[18210] = anon_sym_LT;
	v->a[18211] = anon_sym_GT;
	v->a[18212] = anon_sym_GT_GT;
	v->a[18213] = anon_sym_AMP_GT;
	v->a[18214] = anon_sym_AMP_GT_GT;
	v->a[18215] = anon_sym_LT_AMP;
	v->a[18216] = anon_sym_GT_AMP;
	v->a[18217] = anon_sym_GT_PIPE;
	v->a[18218] = state(1299);
	v->a[18219] = 12;
	small_parse_table_911(v);
}

void	small_parse_table_911(t_small_parse_table_array *v)
{
	v->a[18220] = sym_redirected_statement;
	v->a[18221] = sym_for_statement;
	v->a[18222] = sym_while_statement;
	v->a[18223] = sym_if_statement;
	v->a[18224] = sym_case_statement;
	v->a[18225] = sym_function_definition;
	v->a[18226] = sym_compound_statement;
	v->a[18227] = sym_subshell;
	v->a[18228] = sym_list;
	v->a[18229] = sym_negated_command;
	v->a[18230] = sym_command;
	v->a[18231] = sym_variable_assignments;
	v->a[18232] = 31;
	v->a[18233] = actions(3);
	v->a[18234] = 1;
	v->a[18235] = sym_comment;
	v->a[18236] = actions(9);
	v->a[18237] = 1;
	v->a[18238] = anon_sym_for;
	v->a[18239] = actions(13);
	small_parse_table_912(v);
}

void	small_parse_table_912(t_small_parse_table_array *v)
{
	v->a[18240] = 1;
	v->a[18241] = anon_sym_if;
	v->a[18242] = actions(15);
	v->a[18243] = 1;
	v->a[18244] = anon_sym_case;
	v->a[18245] = actions(17);
	v->a[18246] = 1;
	v->a[18247] = anon_sym_LPAREN;
	v->a[18248] = actions(19);
	v->a[18249] = 1;
	v->a[18250] = anon_sym_LBRACE;
	v->a[18251] = actions(63);
	v->a[18252] = 1;
	v->a[18253] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18254] = actions(65);
	v->a[18255] = 1;
	v->a[18256] = anon_sym_DOLLAR;
	v->a[18257] = actions(67);
	v->a[18258] = 1;
	v->a[18259] = anon_sym_DQUOTE;
	small_parse_table_913(v);
}

void	small_parse_table_913(t_small_parse_table_array *v)
{
	v->a[18260] = actions(71);
	v->a[18261] = 1;
	v->a[18262] = aux_sym_number_token1;
	v->a[18263] = actions(73);
	v->a[18264] = 1;
	v->a[18265] = aux_sym_number_token2;
	v->a[18266] = actions(75);
	v->a[18267] = 1;
	v->a[18268] = anon_sym_DOLLAR_LBRACE;
	v->a[18269] = actions(77);
	v->a[18270] = 1;
	v->a[18271] = anon_sym_DOLLAR_LPAREN;
	v->a[18272] = actions(79);
	v->a[18273] = 1;
	v->a[18274] = anon_sym_BQUOTE;
	v->a[18275] = actions(248);
	v->a[18276] = 1;
	v->a[18277] = sym_word;
	v->a[18278] = actions(250);
	v->a[18279] = 1;
	small_parse_table_914(v);
}

void	small_parse_table_914(t_small_parse_table_array *v)
{
	v->a[18280] = anon_sym_BANG;
	v->a[18281] = actions(256);
	v->a[18282] = 1;
	v->a[18283] = sym_raw_string;
	v->a[18284] = actions(258);
	v->a[18285] = 1;
	v->a[18286] = sym_file_descriptor;
	v->a[18287] = actions(260);
	v->a[18288] = 1;
	v->a[18289] = sym_variable_name;
	v->a[18290] = state(175);
	v->a[18291] = 1;
	v->a[18292] = sym_command_name;
	v->a[18293] = state(277);
	v->a[18294] = 1;
	v->a[18295] = sym_variable_assignment;
	v->a[18296] = state(567);
	v->a[18297] = 1;
	v->a[18298] = aux_sym_command_repeat1;
	v->a[18299] = state(582);
	small_parse_table_915(v);
}

/* EOF small_parse_table_182.c */
