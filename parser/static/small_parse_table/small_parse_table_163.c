/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_163.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_815(t_small_parse_table_array *v)
{
	v->a[16300] = actions(13);
	v->a[16301] = 1;
	v->a[16302] = anon_sym_if;
	v->a[16303] = actions(15);
	v->a[16304] = 1;
	v->a[16305] = anon_sym_case;
	v->a[16306] = actions(17);
	v->a[16307] = 1;
	v->a[16308] = anon_sym_LPAREN;
	v->a[16309] = actions(19);
	v->a[16310] = 1;
	v->a[16311] = anon_sym_LBRACE;
	v->a[16312] = actions(43);
	v->a[16313] = 1;
	v->a[16314] = sym_word;
	v->a[16315] = actions(51);
	v->a[16316] = 1;
	v->a[16317] = anon_sym_BANG;
	v->a[16318] = actions(55);
	v->a[16319] = 1;
	small_parse_table_816(v);
}

void	small_parse_table_816(t_small_parse_table_array *v)
{
	v->a[16320] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16321] = actions(57);
	v->a[16322] = 1;
	v->a[16323] = anon_sym_DOLLAR;
	v->a[16324] = actions(59);
	v->a[16325] = 1;
	v->a[16326] = anon_sym_DQUOTE;
	v->a[16327] = actions(63);
	v->a[16328] = 1;
	v->a[16329] = anon_sym_DOLLAR_LBRACE;
	v->a[16330] = actions(65);
	v->a[16331] = 1;
	v->a[16332] = anon_sym_DOLLAR_LPAREN;
	v->a[16333] = actions(67);
	v->a[16334] = 1;
	v->a[16335] = anon_sym_BQUOTE;
	v->a[16336] = actions(69);
	v->a[16337] = 1;
	v->a[16338] = sym_file_descriptor;
	v->a[16339] = actions(71);
	small_parse_table_817(v);
}

void	small_parse_table_817(t_small_parse_table_array *v)
{
	v->a[16340] = 1;
	v->a[16341] = sym_variable_name;
	v->a[16342] = state(183);
	v->a[16343] = 1;
	v->a[16344] = sym_command_name;
	v->a[16345] = state(357);
	v->a[16346] = 1;
	v->a[16347] = sym_variable_assignment;
	v->a[16348] = state(655);
	v->a[16349] = 1;
	v->a[16350] = aux_sym_command_repeat1;
	v->a[16351] = state(661);
	v->a[16352] = 1;
	v->a[16353] = sym_concatenation;
	v->a[16354] = state(665);
	v->a[16355] = 1;
	v->a[16356] = sym_file_redirect;
	v->a[16357] = state(1198);
	v->a[16358] = 1;
	v->a[16359] = aux_sym_redirected_statement_repeat2;
	small_parse_table_818(v);
}

void	small_parse_table_818(t_small_parse_table_array *v)
{
	v->a[16360] = state(1431);
	v->a[16361] = 1;
	v->a[16362] = sym_pipeline;
	v->a[16363] = actions(11);
	v->a[16364] = 2;
	v->a[16365] = anon_sym_while;
	v->a[16366] = anon_sym_until;
	v->a[16367] = actions(61);
	v->a[16368] = 2;
	v->a[16369] = sym_raw_string;
	v->a[16370] = sym_number;
	v->a[16371] = state(455);
	v->a[16372] = 5;
	v->a[16373] = sym_arithmetic_expansion;
	v->a[16374] = sym_string;
	v->a[16375] = sym_simple_expansion;
	v->a[16376] = sym_expansion;
	v->a[16377] = sym_command_substitution;
	v->a[16378] = actions(53);
	v->a[16379] = 7;
	small_parse_table_819(v);
}

void	small_parse_table_819(t_small_parse_table_array *v)
{
	v->a[16380] = anon_sym_LT;
	v->a[16381] = anon_sym_GT;
	v->a[16382] = anon_sym_GT_GT;
	v->a[16383] = anon_sym_LT_AMP;
	v->a[16384] = anon_sym_GT_AMP;
	v->a[16385] = anon_sym_GT_PIPE;
	v->a[16386] = anon_sym_LT_GT;
	v->a[16387] = state(1096);
	v->a[16388] = 13;
	v->a[16389] = sym__statement_not_pipeline;
	v->a[16390] = sym_redirected_statement;
	v->a[16391] = sym_for_statement;
	v->a[16392] = sym_while_statement;
	v->a[16393] = sym_if_statement;
	v->a[16394] = sym_case_statement;
	v->a[16395] = sym_function_definition;
	v->a[16396] = sym_compound_statement;
	v->a[16397] = sym_subshell;
	v->a[16398] = sym_list;
	v->a[16399] = sym_negated_command;
	small_parse_table_820(v);
}

/* EOF small_parse_table_163.c */
