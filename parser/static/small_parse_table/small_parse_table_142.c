/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_142.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_710(t_small_parse_table_array *v)
{
	v->a[14200] = sym_compound_statement;
	v->a[14201] = sym_subshell;
	v->a[14202] = sym_list;
	v->a[14203] = sym_negated_command;
	v->a[14204] = sym_command;
	v->a[14205] = sym__variable_assignments;
	v->a[14206] = 28;
	v->a[14207] = actions(3);
	v->a[14208] = 1;
	v->a[14209] = sym_comment;
	v->a[14210] = actions(9);
	v->a[14211] = 1;
	v->a[14212] = anon_sym_for;
	v->a[14213] = actions(13);
	v->a[14214] = 1;
	v->a[14215] = anon_sym_if;
	v->a[14216] = actions(15);
	v->a[14217] = 1;
	v->a[14218] = anon_sym_case;
	v->a[14219] = actions(17);
	small_parse_table_711(v);
}

void	small_parse_table_711(t_small_parse_table_array *v)
{
	v->a[14220] = 1;
	v->a[14221] = anon_sym_LPAREN;
	v->a[14222] = actions(19);
	v->a[14223] = 1;
	v->a[14224] = anon_sym_LBRACE;
	v->a[14225] = actions(53);
	v->a[14226] = 1;
	v->a[14227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14228] = actions(55);
	v->a[14229] = 1;
	v->a[14230] = anon_sym_DOLLAR;
	v->a[14231] = actions(57);
	v->a[14232] = 1;
	v->a[14233] = anon_sym_DQUOTE;
	v->a[14234] = actions(61);
	v->a[14235] = 1;
	v->a[14236] = anon_sym_DOLLAR_LBRACE;
	v->a[14237] = actions(63);
	v->a[14238] = 1;
	v->a[14239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_712(v);
}

void	small_parse_table_712(t_small_parse_table_array *v)
{
	v->a[14240] = actions(65);
	v->a[14241] = 1;
	v->a[14242] = anon_sym_BQUOTE;
	v->a[14243] = actions(331);
	v->a[14244] = 1;
	v->a[14245] = sym_word;
	v->a[14246] = actions(333);
	v->a[14247] = 1;
	v->a[14248] = anon_sym_BANG;
	v->a[14249] = actions(339);
	v->a[14250] = 1;
	v->a[14251] = sym_variable_name;
	v->a[14252] = state(252);
	v->a[14253] = 1;
	v->a[14254] = sym_command_name;
	v->a[14255] = state(294);
	v->a[14256] = 1;
	v->a[14257] = sym_variable_assignment;
	v->a[14258] = state(387);
	v->a[14259] = 1;
	small_parse_table_713(v);
}

void	small_parse_table_713(t_small_parse_table_array *v)
{
	v->a[14260] = aux_sym_command_repeat1;
	v->a[14261] = state(551);
	v->a[14262] = 1;
	v->a[14263] = sym_file_redirect;
	v->a[14264] = state(555);
	v->a[14265] = 1;
	v->a[14266] = sym_concatenation;
	v->a[14267] = state(1284);
	v->a[14268] = 1;
	v->a[14269] = sym_pipeline;
	v->a[14270] = state(1309);
	v->a[14271] = 1;
	v->a[14272] = aux_sym_redirected_statement_repeat2;
	v->a[14273] = state(1559);
	v->a[14274] = 1;
	v->a[14275] = sym__statement_not_pipeline;
	v->a[14276] = actions(11);
	v->a[14277] = 2;
	v->a[14278] = anon_sym_while;
	v->a[14279] = anon_sym_until;
	small_parse_table_714(v);
}

void	small_parse_table_714(t_small_parse_table_array *v)
{
	v->a[14280] = actions(337);
	v->a[14281] = 2;
	v->a[14282] = sym_raw_string;
	v->a[14283] = sym_number;
	v->a[14284] = actions(335);
	v->a[14285] = 3;
	v->a[14286] = anon_sym_LT;
	v->a[14287] = anon_sym_GT;
	v->a[14288] = anon_sym_GT_GT;
	v->a[14289] = state(525);
	v->a[14290] = 5;
	v->a[14291] = sym_arithmetic_expansion;
	v->a[14292] = sym_string;
	v->a[14293] = sym_simple_expansion;
	v->a[14294] = sym_expansion;
	v->a[14295] = sym_command_substitution;
	v->a[14296] = state(1222);
	v->a[14297] = 12;
	v->a[14298] = sym_redirected_statement;
	v->a[14299] = sym_for_statement;
	small_parse_table_715(v);
}

/* EOF small_parse_table_142.c */
