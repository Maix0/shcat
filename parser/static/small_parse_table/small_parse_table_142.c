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
	v->a[14200] = sym_variable_name;
	v->a[14201] = state(115);
	v->a[14202] = 1;
	v->a[14203] = aux_sym__terminated_statement;
	v->a[14204] = state(183);
	v->a[14205] = 1;
	v->a[14206] = sym_command_name;
	v->a[14207] = state(341);
	v->a[14208] = 1;
	v->a[14209] = sym_variable_assignment;
	v->a[14210] = state(603);
	v->a[14211] = 1;
	v->a[14212] = sym_concatenation;
	v->a[14213] = state(639);
	v->a[14214] = 1;
	v->a[14215] = aux_sym_command_repeat1;
	v->a[14216] = state(644);
	v->a[14217] = 1;
	v->a[14218] = sym_file_redirect;
	v->a[14219] = state(1122);
	small_parse_table_711(v);
}

void	small_parse_table_711(t_small_parse_table_array *v)
{
	v->a[14220] = 1;
	v->a[14221] = sym_pipeline;
	v->a[14222] = state(1196);
	v->a[14223] = 1;
	v->a[14224] = aux_sym_redirected_statement_repeat2;
	v->a[14225] = state(1910);
	v->a[14226] = 1;
	v->a[14227] = sym__statement_not_pipeline;
	v->a[14228] = actions(11);
	v->a[14229] = 2;
	v->a[14230] = anon_sym_while;
	v->a[14231] = anon_sym_until;
	v->a[14232] = actions(61);
	v->a[14233] = 2;
	v->a[14234] = sym_raw_string;
	v->a[14235] = sym_number;
	v->a[14236] = state(436);
	v->a[14237] = 5;
	v->a[14238] = sym_arithmetic_expansion;
	v->a[14239] = sym_string;
	small_parse_table_712(v);
}

void	small_parse_table_712(t_small_parse_table_array *v)
{
	v->a[14240] = sym_simple_expansion;
	v->a[14241] = sym_expansion;
	v->a[14242] = sym_command_substitution;
	v->a[14243] = actions(53);
	v->a[14244] = 7;
	v->a[14245] = anon_sym_LT;
	v->a[14246] = anon_sym_GT;
	v->a[14247] = anon_sym_GT_GT;
	v->a[14248] = anon_sym_LT_AMP;
	v->a[14249] = anon_sym_GT_AMP;
	v->a[14250] = anon_sym_GT_PIPE;
	v->a[14251] = anon_sym_LT_GT;
	v->a[14252] = state(1021);
	v->a[14253] = 12;
	v->a[14254] = sym_redirected_statement;
	v->a[14255] = sym_for_statement;
	v->a[14256] = sym_while_statement;
	v->a[14257] = sym_if_statement;
	v->a[14258] = sym_case_statement;
	v->a[14259] = sym_function_definition;
	small_parse_table_713(v);
}

void	small_parse_table_713(t_small_parse_table_array *v)
{
	v->a[14260] = sym_compound_statement;
	v->a[14261] = sym_subshell;
	v->a[14262] = sym_list;
	v->a[14263] = sym_negated_command;
	v->a[14264] = sym_command;
	v->a[14265] = sym__variable_assignments;
	v->a[14266] = 41;
	v->a[14267] = actions(3);
	v->a[14268] = 1;
	v->a[14269] = sym_comment;
	v->a[14270] = actions(9);
	v->a[14271] = 1;
	v->a[14272] = anon_sym_for;
	v->a[14273] = actions(13);
	v->a[14274] = 1;
	v->a[14275] = anon_sym_if;
	v->a[14276] = actions(15);
	v->a[14277] = 1;
	v->a[14278] = anon_sym_case;
	v->a[14279] = actions(17);
	small_parse_table_714(v);
}

void	small_parse_table_714(t_small_parse_table_array *v)
{
	v->a[14280] = 1;
	v->a[14281] = anon_sym_LPAREN;
	v->a[14282] = actions(19);
	v->a[14283] = 1;
	v->a[14284] = anon_sym_LBRACE;
	v->a[14285] = actions(55);
	v->a[14286] = 1;
	v->a[14287] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14288] = actions(57);
	v->a[14289] = 1;
	v->a[14290] = anon_sym_DOLLAR;
	v->a[14291] = actions(59);
	v->a[14292] = 1;
	v->a[14293] = anon_sym_DQUOTE;
	v->a[14294] = actions(63);
	v->a[14295] = 1;
	v->a[14296] = anon_sym_DOLLAR_LBRACE;
	v->a[14297] = actions(65);
	v->a[14298] = 1;
	v->a[14299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_715(v);
}

/* EOF small_parse_table_142.c */
