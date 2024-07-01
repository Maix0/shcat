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
	v->a[14201] = actions(240);
	v->a[14202] = 1;
	v->a[14203] = sym_word;
	v->a[14204] = actions(242);
	v->a[14205] = 1;
	v->a[14206] = anon_sym_BANG;
	v->a[14207] = state(136);
	v->a[14208] = 1;
	v->a[14209] = aux_sym__statements_repeat1;
	v->a[14210] = state(188);
	v->a[14211] = 1;
	v->a[14212] = sym_command_name;
	v->a[14213] = state(297);
	v->a[14214] = 1;
	v->a[14215] = sym_variable_assignment;
	v->a[14216] = state(650);
	v->a[14217] = 1;
	v->a[14218] = sym_concatenation;
	v->a[14219] = state(749);
	small_parse_table_711(v);
}

void	small_parse_table_711(t_small_parse_table_array *v)
{
	v->a[14220] = 1;
	v->a[14221] = aux_sym_command_repeat1;
	v->a[14222] = state(795);
	v->a[14223] = 1;
	v->a[14224] = sym_file_redirect;
	v->a[14225] = state(1154);
	v->a[14226] = 1;
	v->a[14227] = sym_pipeline;
	v->a[14228] = state(1240);
	v->a[14229] = 1;
	v->a[14230] = aux_sym_redirected_statement_repeat2;
	v->a[14231] = state(2119);
	v->a[14232] = 1;
	v->a[14233] = sym__statement_not_pipeline;
	v->a[14234] = state(2294);
	v->a[14235] = 1;
	v->a[14236] = sym__statements;
	v->a[14237] = actions(11);
	v->a[14238] = 2;
	v->a[14239] = anon_sym_while;
	small_parse_table_712(v);
}

void	small_parse_table_712(t_small_parse_table_array *v)
{
	v->a[14240] = anon_sym_until;
	v->a[14241] = actions(57);
	v->a[14242] = 2;
	v->a[14243] = anon_sym_LT_AMP_DASH;
	v->a[14244] = anon_sym_GT_AMP_DASH;
	v->a[14245] = actions(65);
	v->a[14246] = 2;
	v->a[14247] = sym_raw_string;
	v->a[14248] = sym_number;
	v->a[14249] = state(443);
	v->a[14250] = 5;
	v->a[14251] = sym_arithmetic_expansion;
	v->a[14252] = sym_string;
	v->a[14253] = sym_simple_expansion;
	v->a[14254] = sym_expansion;
	v->a[14255] = sym_command_substitution;
	v->a[14256] = actions(55);
	v->a[14257] = 6;
	v->a[14258] = anon_sym_LT;
	v->a[14259] = anon_sym_GT;
	small_parse_table_713(v);
}

void	small_parse_table_713(t_small_parse_table_array *v)
{
	v->a[14260] = anon_sym_GT_GT;
	v->a[14261] = anon_sym_LT_AMP;
	v->a[14262] = anon_sym_GT_AMP;
	v->a[14263] = anon_sym_GT_PIPE;
	v->a[14264] = state(1030);
	v->a[14265] = 12;
	v->a[14266] = sym_redirected_statement;
	v->a[14267] = sym_for_statement;
	v->a[14268] = sym_while_statement;
	v->a[14269] = sym_if_statement;
	v->a[14270] = sym_case_statement;
	v->a[14271] = sym_function_definition;
	v->a[14272] = sym_compound_statement;
	v->a[14273] = sym_subshell;
	v->a[14274] = sym_list;
	v->a[14275] = sym_negated_command;
	v->a[14276] = sym_command;
	v->a[14277] = sym__variable_assignments;
	v->a[14278] = 32;
	v->a[14279] = actions(3);
	small_parse_table_714(v);
}

void	small_parse_table_714(t_small_parse_table_array *v)
{
	v->a[14280] = 1;
	v->a[14281] = sym_comment;
	v->a[14282] = actions(9);
	v->a[14283] = 1;
	v->a[14284] = anon_sym_for;
	v->a[14285] = actions(13);
	v->a[14286] = 1;
	v->a[14287] = anon_sym_if;
	v->a[14288] = actions(15);
	v->a[14289] = 1;
	v->a[14290] = anon_sym_case;
	v->a[14291] = actions(17);
	v->a[14292] = 1;
	v->a[14293] = anon_sym_LPAREN;
	v->a[14294] = actions(19);
	v->a[14295] = 1;
	v->a[14296] = anon_sym_LBRACE;
	v->a[14297] = actions(59);
	v->a[14298] = 1;
	v->a[14299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_715(v);
}

/* EOF small_parse_table_142.c */
