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
	v->a[16300] = 1;
	v->a[16301] = sym_word;
	v->a[16302] = actions(89);
	v->a[16303] = 1;
	v->a[16304] = anon_sym_for;
	v->a[16305] = actions(93);
	v->a[16306] = 1;
	v->a[16307] = anon_sym_if;
	v->a[16308] = actions(95);
	v->a[16309] = 1;
	v->a[16310] = anon_sym_case;
	v->a[16311] = actions(97);
	v->a[16312] = 1;
	v->a[16313] = anon_sym_LPAREN;
	v->a[16314] = actions(101);
	v->a[16315] = 1;
	v->a[16316] = anon_sym_LBRACE;
	v->a[16317] = actions(103);
	v->a[16318] = 1;
	v->a[16319] = anon_sym_BANG;
	small_parse_table_816(v);
}

void	small_parse_table_816(t_small_parse_table_array *v)
{
	v->a[16320] = actions(107);
	v->a[16321] = 1;
	v->a[16322] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16323] = actions(109);
	v->a[16324] = 1;
	v->a[16325] = anon_sym_DOLLAR;
	v->a[16326] = actions(111);
	v->a[16327] = 1;
	v->a[16328] = anon_sym_DQUOTE;
	v->a[16329] = actions(115);
	v->a[16330] = 1;
	v->a[16331] = anon_sym_DOLLAR_LBRACE;
	v->a[16332] = actions(117);
	v->a[16333] = 1;
	v->a[16334] = anon_sym_DOLLAR_LPAREN;
	v->a[16335] = actions(119);
	v->a[16336] = 1;
	v->a[16337] = anon_sym_BQUOTE;
	v->a[16338] = actions(121);
	v->a[16339] = 1;
	small_parse_table_817(v);
}

void	small_parse_table_817(t_small_parse_table_array *v)
{
	v->a[16340] = sym_file_descriptor;
	v->a[16341] = actions(123);
	v->a[16342] = 1;
	v->a[16343] = sym_variable_name;
	v->a[16344] = state(178);
	v->a[16345] = 1;
	v->a[16346] = sym_command_name;
	v->a[16347] = state(266);
	v->a[16348] = 1;
	v->a[16349] = sym_variable_assignment;
	v->a[16350] = state(592);
	v->a[16351] = 1;
	v->a[16352] = sym_concatenation;
	v->a[16353] = state(641);
	v->a[16354] = 1;
	v->a[16355] = sym_file_redirect;
	v->a[16356] = state(662);
	v->a[16357] = 1;
	v->a[16358] = aux_sym_command_repeat1;
	v->a[16359] = state(1168);
	small_parse_table_818(v);
}

void	small_parse_table_818(t_small_parse_table_array *v)
{
	v->a[16360] = 1;
	v->a[16361] = aux_sym_redirected_statement_repeat2;
	v->a[16362] = state(1437);
	v->a[16363] = 1;
	v->a[16364] = sym_pipeline;
	v->a[16365] = actions(91);
	v->a[16366] = 2;
	v->a[16367] = anon_sym_while;
	v->a[16368] = anon_sym_until;
	v->a[16369] = actions(113);
	v->a[16370] = 2;
	v->a[16371] = sym_raw_string;
	v->a[16372] = sym_number;
	v->a[16373] = state(359);
	v->a[16374] = 5;
	v->a[16375] = sym_arithmetic_expansion;
	v->a[16376] = sym_string;
	v->a[16377] = sym_simple_expansion;
	v->a[16378] = sym_expansion;
	v->a[16379] = sym_command_substitution;
	small_parse_table_819(v);
}

void	small_parse_table_819(t_small_parse_table_array *v)
{
	v->a[16380] = actions(105);
	v->a[16381] = 7;
	v->a[16382] = anon_sym_LT;
	v->a[16383] = anon_sym_GT;
	v->a[16384] = anon_sym_GT_GT;
	v->a[16385] = anon_sym_LT_AMP;
	v->a[16386] = anon_sym_GT_AMP;
	v->a[16387] = anon_sym_GT_PIPE;
	v->a[16388] = anon_sym_LT_GT;
	v->a[16389] = state(1199);
	v->a[16390] = 13;
	v->a[16391] = sym__statement_not_pipeline;
	v->a[16392] = sym_redirected_statement;
	v->a[16393] = sym_for_statement;
	v->a[16394] = sym_while_statement;
	v->a[16395] = sym_if_statement;
	v->a[16396] = sym_case_statement;
	v->a[16397] = sym_function_definition;
	v->a[16398] = sym_compound_statement;
	v->a[16399] = sym_subshell;
	small_parse_table_820(v);
}

/* EOF small_parse_table_163.c */
