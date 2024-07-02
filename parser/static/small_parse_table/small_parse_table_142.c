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
	v->a[14201] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14202] = actions(57);
	v->a[14203] = 1;
	v->a[14204] = anon_sym_DOLLAR;
	v->a[14205] = actions(59);
	v->a[14206] = 1;
	v->a[14207] = anon_sym_DQUOTE;
	v->a[14208] = actions(63);
	v->a[14209] = 1;
	v->a[14210] = anon_sym_DOLLAR_LBRACE;
	v->a[14211] = actions(65);
	v->a[14212] = 1;
	v->a[14213] = anon_sym_DOLLAR_LPAREN;
	v->a[14214] = actions(67);
	v->a[14215] = 1;
	v->a[14216] = anon_sym_BQUOTE;
	v->a[14217] = actions(69);
	v->a[14218] = 1;
	v->a[14219] = sym_file_descriptor;
	small_parse_table_711(v);
}

void	small_parse_table_711(t_small_parse_table_array *v)
{
	v->a[14220] = actions(71);
	v->a[14221] = 1;
	v->a[14222] = sym_variable_name;
	v->a[14223] = state(93);
	v->a[14224] = 1;
	v->a[14225] = aux_sym__terminated_statement;
	v->a[14226] = state(182);
	v->a[14227] = 1;
	v->a[14228] = sym_command_name;
	v->a[14229] = state(305);
	v->a[14230] = 1;
	v->a[14231] = sym_variable_assignment;
	v->a[14232] = state(584);
	v->a[14233] = 1;
	v->a[14234] = sym_concatenation;
	v->a[14235] = state(620);
	v->a[14236] = 1;
	v->a[14237] = sym_file_redirect;
	v->a[14238] = state(623);
	v->a[14239] = 1;
	small_parse_table_712(v);
}

void	small_parse_table_712(t_small_parse_table_array *v)
{
	v->a[14240] = aux_sym_command_repeat1;
	v->a[14241] = state(1118);
	v->a[14242] = 1;
	v->a[14243] = sym_pipeline;
	v->a[14244] = state(1201);
	v->a[14245] = 1;
	v->a[14246] = aux_sym_redirected_statement_repeat2;
	v->a[14247] = state(1911);
	v->a[14248] = 1;
	v->a[14249] = sym__statement_not_pipeline;
	v->a[14250] = actions(11);
	v->a[14251] = 2;
	v->a[14252] = anon_sym_while;
	v->a[14253] = anon_sym_until;
	v->a[14254] = actions(61);
	v->a[14255] = 2;
	v->a[14256] = sym_raw_string;
	v->a[14257] = sym_number;
	v->a[14258] = state(433);
	v->a[14259] = 5;
	small_parse_table_713(v);
}

void	small_parse_table_713(t_small_parse_table_array *v)
{
	v->a[14260] = sym_arithmetic_expansion;
	v->a[14261] = sym_string;
	v->a[14262] = sym_simple_expansion;
	v->a[14263] = sym_expansion;
	v->a[14264] = sym_command_substitution;
	v->a[14265] = actions(53);
	v->a[14266] = 7;
	v->a[14267] = anon_sym_LT;
	v->a[14268] = anon_sym_GT;
	v->a[14269] = anon_sym_GT_GT;
	v->a[14270] = anon_sym_LT_AMP;
	v->a[14271] = anon_sym_GT_AMP;
	v->a[14272] = anon_sym_GT_PIPE;
	v->a[14273] = anon_sym_LT_GT;
	v->a[14274] = state(1077);
	v->a[14275] = 12;
	v->a[14276] = sym_redirected_statement;
	v->a[14277] = sym_for_statement;
	v->a[14278] = sym_while_statement;
	v->a[14279] = sym_if_statement;
	small_parse_table_714(v);
}

void	small_parse_table_714(t_small_parse_table_array *v)
{
	v->a[14280] = sym_case_statement;
	v->a[14281] = sym_function_definition;
	v->a[14282] = sym_compound_statement;
	v->a[14283] = sym_subshell;
	v->a[14284] = sym_list;
	v->a[14285] = sym_negated_command;
	v->a[14286] = sym_command;
	v->a[14287] = sym__variable_assignments;
	v->a[14288] = 41;
	v->a[14289] = actions(3);
	v->a[14290] = 1;
	v->a[14291] = sym_comment;
	v->a[14292] = actions(83);
	v->a[14293] = 1;
	v->a[14294] = sym_word;
	v->a[14295] = actions(85);
	v->a[14296] = 1;
	v->a[14297] = anon_sym_for;
	v->a[14298] = actions(89);
	v->a[14299] = 1;
	small_parse_table_715(v);
}

/* EOF small_parse_table_142.c */
