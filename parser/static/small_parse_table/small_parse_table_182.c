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
	v->a[18200] = anon_sym_if;
	v->a[18201] = actions(95);
	v->a[18202] = 1;
	v->a[18203] = anon_sym_case;
	v->a[18204] = actions(97);
	v->a[18205] = 1;
	v->a[18206] = anon_sym_LPAREN;
	v->a[18207] = actions(101);
	v->a[18208] = 1;
	v->a[18209] = anon_sym_LBRACE;
	v->a[18210] = actions(103);
	v->a[18211] = 1;
	v->a[18212] = anon_sym_BANG;
	v->a[18213] = actions(109);
	v->a[18214] = 1;
	v->a[18215] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18216] = actions(111);
	v->a[18217] = 1;
	v->a[18218] = anon_sym_DOLLAR;
	v->a[18219] = actions(113);
	small_parse_table_911(v);
}

void	small_parse_table_911(t_small_parse_table_array *v)
{
	v->a[18220] = 1;
	v->a[18221] = anon_sym_DQUOTE;
	v->a[18222] = actions(117);
	v->a[18223] = 1;
	v->a[18224] = anon_sym_DOLLAR_LBRACE;
	v->a[18225] = actions(119);
	v->a[18226] = 1;
	v->a[18227] = anon_sym_DOLLAR_LPAREN;
	v->a[18228] = actions(121);
	v->a[18229] = 1;
	v->a[18230] = anon_sym_BQUOTE;
	v->a[18231] = actions(123);
	v->a[18232] = 1;
	v->a[18233] = sym_file_descriptor;
	v->a[18234] = actions(125);
	v->a[18235] = 1;
	v->a[18236] = sym_variable_name;
	v->a[18237] = state(184);
	v->a[18238] = 1;
	v->a[18239] = sym_command_name;
	small_parse_table_912(v);
}

void	small_parse_table_912(t_small_parse_table_array *v)
{
	v->a[18240] = state(248);
	v->a[18241] = 1;
	v->a[18242] = sym_variable_assignment;
	v->a[18243] = state(622);
	v->a[18244] = 1;
	v->a[18245] = sym_concatenation;
	v->a[18246] = state(727);
	v->a[18247] = 1;
	v->a[18248] = aux_sym_command_repeat1;
	v->a[18249] = state(744);
	v->a[18250] = 1;
	v->a[18251] = sym_file_redirect;
	v->a[18252] = state(1215);
	v->a[18253] = 1;
	v->a[18254] = aux_sym_redirected_statement_repeat2;
	v->a[18255] = state(1443);
	v->a[18256] = 1;
	v->a[18257] = sym_pipeline;
	v->a[18258] = actions(91);
	v->a[18259] = 2;
	small_parse_table_913(v);
}

void	small_parse_table_913(t_small_parse_table_array *v)
{
	v->a[18260] = anon_sym_while;
	v->a[18261] = anon_sym_until;
	v->a[18262] = actions(107);
	v->a[18263] = 2;
	v->a[18264] = anon_sym_LT_AMP_DASH;
	v->a[18265] = anon_sym_GT_AMP_DASH;
	v->a[18266] = actions(115);
	v->a[18267] = 2;
	v->a[18268] = sym_raw_string;
	v->a[18269] = sym_number;
	v->a[18270] = state(289);
	v->a[18271] = 5;
	v->a[18272] = sym_arithmetic_expansion;
	v->a[18273] = sym_string;
	v->a[18274] = sym_simple_expansion;
	v->a[18275] = sym_expansion;
	v->a[18276] = sym_command_substitution;
	v->a[18277] = actions(105);
	v->a[18278] = 8;
	v->a[18279] = anon_sym_LT;
	small_parse_table_914(v);
}

void	small_parse_table_914(t_small_parse_table_array *v)
{
	v->a[18280] = anon_sym_GT;
	v->a[18281] = anon_sym_GT_GT;
	v->a[18282] = anon_sym_AMP_GT;
	v->a[18283] = anon_sym_AMP_GT_GT;
	v->a[18284] = anon_sym_LT_AMP;
	v->a[18285] = anon_sym_GT_AMP;
	v->a[18286] = anon_sym_GT_PIPE;
	v->a[18287] = state(1317);
	v->a[18288] = 13;
	v->a[18289] = sym__statement_not_pipeline;
	v->a[18290] = sym_redirected_statement;
	v->a[18291] = sym_for_statement;
	v->a[18292] = sym_while_statement;
	v->a[18293] = sym_if_statement;
	v->a[18294] = sym_case_statement;
	v->a[18295] = sym_function_definition;
	v->a[18296] = sym_compound_statement;
	v->a[18297] = sym_subshell;
	v->a[18298] = sym_list;
	v->a[18299] = sym_negated_command;
	small_parse_table_915(v);
}

/* EOF small_parse_table_182.c */
