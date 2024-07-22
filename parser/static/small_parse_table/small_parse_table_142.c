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
	v->a[14202] = actions(27);
	v->a[14203] = 1;
	v->a[14204] = anon_sym_DOLLAR;
	v->a[14205] = actions(29);
	v->a[14206] = 1;
	v->a[14207] = anon_sym_DQUOTE;
	v->a[14208] = actions(33);
	v->a[14209] = 1;
	v->a[14210] = anon_sym_DOLLAR_LBRACE;
	v->a[14211] = actions(35);
	v->a[14212] = 1;
	v->a[14213] = anon_sym_DOLLAR_LPAREN;
	v->a[14214] = actions(37);
	v->a[14215] = 1;
	v->a[14216] = anon_sym_BQUOTE;
	v->a[14217] = actions(39);
	v->a[14218] = 1;
	v->a[14219] = sym_file_descriptor;
	small_parse_table_711(v);
}

void	small_parse_table_711(t_small_parse_table_array *v)
{
	v->a[14220] = actions(41);
	v->a[14221] = 1;
	v->a[14222] = sym_variable_name;
	v->a[14223] = state(123);
	v->a[14224] = 1;
	v->a[14225] = aux_sym__statements_repeat1;
	v->a[14226] = state(174);
	v->a[14227] = 1;
	v->a[14228] = sym_command_name;
	v->a[14229] = state(291);
	v->a[14230] = 1;
	v->a[14231] = sym_variable_assignment;
	v->a[14232] = state(625);
	v->a[14233] = 1;
	v->a[14234] = aux_sym_command_repeat1;
	v->a[14235] = state(627);
	v->a[14236] = 1;
	v->a[14237] = sym_concatenation;
	v->a[14238] = state(676);
	v->a[14239] = 1;
	small_parse_table_712(v);
}

void	small_parse_table_712(t_small_parse_table_array *v)
{
	v->a[14240] = sym_file_redirect;
	v->a[14241] = state(948);
	v->a[14242] = 1;
	v->a[14243] = sym__variable_assignments;
	v->a[14244] = state(975);
	v->a[14245] = 1;
	v->a[14246] = sym_command;
	v->a[14247] = state(978);
	v->a[14248] = 1;
	v->a[14249] = sym_negated_command;
	v->a[14250] = state(982);
	v->a[14251] = 1;
	v->a[14252] = sym_list;
	v->a[14253] = state(983);
	v->a[14254] = 1;
	v->a[14255] = sym_subshell;
	v->a[14256] = state(985);
	v->a[14257] = 1;
	v->a[14258] = sym_compound_statement;
	v->a[14259] = state(988);
	small_parse_table_713(v);
}

void	small_parse_table_713(t_small_parse_table_array *v)
{
	v->a[14260] = 1;
	v->a[14261] = sym_function_definition;
	v->a[14262] = state(995);
	v->a[14263] = 1;
	v->a[14264] = sym_case_statement;
	v->a[14265] = state(998);
	v->a[14266] = 1;
	v->a[14267] = sym_if_statement;
	v->a[14268] = state(1008);
	v->a[14269] = 1;
	v->a[14270] = sym_while_statement;
	v->a[14271] = state(1009);
	v->a[14272] = 1;
	v->a[14273] = sym_for_statement;
	v->a[14274] = state(1010);
	v->a[14275] = 1;
	v->a[14276] = sym_redirected_statement;
	v->a[14277] = state(1066);
	v->a[14278] = 1;
	v->a[14279] = sym_pipeline;
	small_parse_table_714(v);
}

void	small_parse_table_714(t_small_parse_table_array *v)
{
	v->a[14280] = state(1175);
	v->a[14281] = 1;
	v->a[14282] = aux_sym_redirected_statement_repeat2;
	v->a[14283] = state(1918);
	v->a[14284] = 1;
	v->a[14285] = sym__statement_not_pipeline;
	v->a[14286] = actions(11);
	v->a[14287] = 2;
	v->a[14288] = anon_sym_while;
	v->a[14289] = anon_sym_until;
	v->a[14290] = actions(31);
	v->a[14291] = 2;
	v->a[14292] = sym_raw_string;
	v->a[14293] = sym_number;
	v->a[14294] = state(373);
	v->a[14295] = 5;
	v->a[14296] = sym_arithmetic_expansion;
	v->a[14297] = sym_string;
	v->a[14298] = sym_simple_expansion;
	v->a[14299] = sym_expansion;
	small_parse_table_715(v);
}

/* EOF small_parse_table_142.c */
