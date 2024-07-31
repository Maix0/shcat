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
	v->a[14200] = 1;
	v->a[14201] = anon_sym_LBRACE;
	v->a[14202] = actions(21);
	v->a[14203] = 1;
	v->a[14204] = anon_sym_BANG;
	v->a[14205] = actions(25);
	v->a[14206] = 1;
	v->a[14207] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14208] = actions(27);
	v->a[14209] = 1;
	v->a[14210] = anon_sym_DOLLAR;
	v->a[14211] = actions(29);
	v->a[14212] = 1;
	v->a[14213] = anon_sym_DQUOTE;
	v->a[14214] = actions(33);
	v->a[14215] = 1;
	v->a[14216] = anon_sym_DOLLAR_LBRACE;
	v->a[14217] = actions(35);
	v->a[14218] = 1;
	v->a[14219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_711(v);
}

void	small_parse_table_711(t_small_parse_table_array *v)
{
	v->a[14220] = actions(37);
	v->a[14221] = 1;
	v->a[14222] = anon_sym_BQUOTE;
	v->a[14223] = actions(39);
	v->a[14224] = 1;
	v->a[14225] = sym_variable_name;
	v->a[14226] = state(213);
	v->a[14227] = 1;
	v->a[14228] = sym_command_name;
	v->a[14229] = state(286);
	v->a[14230] = 1;
	v->a[14231] = sym_variable_assignment;
	v->a[14232] = state(542);
	v->a[14233] = 1;
	v->a[14234] = aux_sym_command_repeat1;
	v->a[14235] = state(566);
	v->a[14236] = 1;
	v->a[14237] = sym_file_redirect;
	v->a[14238] = state(569);
	v->a[14239] = 1;
	small_parse_table_712(v);
}

void	small_parse_table_712(t_small_parse_table_array *v)
{
	v->a[14240] = sym_concatenation;
	v->a[14241] = state(1004);
	v->a[14242] = 1;
	v->a[14243] = aux_sym_redirected_statement_repeat2;
	v->a[14244] = state(1244);
	v->a[14245] = 1;
	v->a[14246] = sym_pipeline;
	v->a[14247] = actions(11);
	v->a[14248] = 2;
	v->a[14249] = anon_sym_while;
	v->a[14250] = anon_sym_until;
	v->a[14251] = actions(31);
	v->a[14252] = 2;
	v->a[14253] = sym_raw_string;
	v->a[14254] = sym_number;
	v->a[14255] = state(329);
	v->a[14256] = 5;
	v->a[14257] = sym_arithmetic_expansion;
	v->a[14258] = sym_string;
	v->a[14259] = sym_simple_expansion;
	small_parse_table_713(v);
}

void	small_parse_table_713(t_small_parse_table_array *v)
{
	v->a[14260] = sym_expansion;
	v->a[14261] = sym_command_substitution;
	v->a[14262] = actions(23);
	v->a[14263] = 7;
	v->a[14264] = anon_sym_LT;
	v->a[14265] = anon_sym_GT;
	v->a[14266] = anon_sym_GT_GT;
	v->a[14267] = anon_sym_LT_AMP;
	v->a[14268] = anon_sym_GT_AMP;
	v->a[14269] = anon_sym_GT_PIPE;
	v->a[14270] = anon_sym_LT_GT;
	v->a[14271] = state(934);
	v->a[14272] = 13;
	v->a[14273] = sym__statement_not_pipeline;
	v->a[14274] = sym_redirected_statement;
	v->a[14275] = sym_for_statement;
	v->a[14276] = sym_while_statement;
	v->a[14277] = sym_if_statement;
	v->a[14278] = sym_case_statement;
	v->a[14279] = sym_function_definition;
	small_parse_table_714(v);
}

void	small_parse_table_714(t_small_parse_table_array *v)
{
	v->a[14280] = sym_compound_statement;
	v->a[14281] = sym_subshell;
	v->a[14282] = sym_list;
	v->a[14283] = sym_negated_command;
	v->a[14284] = sym_command;
	v->a[14285] = sym__variable_assignments;
	v->a[14286] = 28;
	v->a[14287] = actions(3);
	v->a[14288] = 1;
	v->a[14289] = sym_comment;
	v->a[14290] = actions(9);
	v->a[14291] = 1;
	v->a[14292] = anon_sym_for;
	v->a[14293] = actions(13);
	v->a[14294] = 1;
	v->a[14295] = anon_sym_if;
	v->a[14296] = actions(15);
	v->a[14297] = 1;
	v->a[14298] = anon_sym_case;
	v->a[14299] = actions(17);
	small_parse_table_715(v);
}

/* EOF small_parse_table_142.c */
