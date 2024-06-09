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
	v->a[16301] = sym_variable_assignment;
	v->a[16302] = state(582);
	v->a[16303] = 1;
	v->a[16304] = sym_concatenation;
	v->a[16305] = state(587);
	v->a[16306] = 1;
	v->a[16307] = aux_sym_command_repeat1;
	v->a[16308] = state(718);
	v->a[16309] = 1;
	v->a[16310] = sym_file_redirect;
	v->a[16311] = state(1213);
	v->a[16312] = 1;
	v->a[16313] = aux_sym_redirected_statement_repeat2;
	v->a[16314] = state(1233);
	v->a[16315] = 1;
	v->a[16316] = sym_pipeline;
	v->a[16317] = state(2035);
	v->a[16318] = 1;
	v->a[16319] = sym__statement_not_pipeline;
	small_parse_table_816(v);
}

void	small_parse_table_816(t_small_parse_table_array *v)
{
	v->a[16320] = actions(11);
	v->a[16321] = 2;
	v->a[16322] = anon_sym_while;
	v->a[16323] = anon_sym_until;
	v->a[16324] = actions(61);
	v->a[16325] = 2;
	v->a[16326] = anon_sym_LT_AMP_DASH;
	v->a[16327] = anon_sym_GT_AMP_DASH;
	v->a[16328] = state(397);
	v->a[16329] = 6;
	v->a[16330] = sym_arithmetic_expansion;
	v->a[16331] = sym_string;
	v->a[16332] = sym_number;
	v->a[16333] = sym_simple_expansion;
	v->a[16334] = sym_expansion;
	v->a[16335] = sym_command_substitution;
	v->a[16336] = actions(59);
	v->a[16337] = 8;
	v->a[16338] = anon_sym_LT;
	v->a[16339] = anon_sym_GT;
	small_parse_table_817(v);
}

void	small_parse_table_817(t_small_parse_table_array *v)
{
	v->a[16340] = anon_sym_GT_GT;
	v->a[16341] = anon_sym_AMP_GT;
	v->a[16342] = anon_sym_AMP_GT_GT;
	v->a[16343] = anon_sym_LT_AMP;
	v->a[16344] = anon_sym_GT_AMP;
	v->a[16345] = anon_sym_GT_PIPE;
	v->a[16346] = state(1172);
	v->a[16347] = 12;
	v->a[16348] = sym_redirected_statement;
	v->a[16349] = sym_for_statement;
	v->a[16350] = sym_while_statement;
	v->a[16351] = sym_if_statement;
	v->a[16352] = sym_case_statement;
	v->a[16353] = sym_function_definition;
	v->a[16354] = sym_compound_statement;
	v->a[16355] = sym_subshell;
	v->a[16356] = sym_list;
	v->a[16357] = sym_negated_command;
	v->a[16358] = sym_command;
	v->a[16359] = sym_variable_assignments;
	small_parse_table_818(v);
}

void	small_parse_table_818(t_small_parse_table_array *v)
{
	v->a[16360] = 33;
	v->a[16361] = actions(3);
	v->a[16362] = 1;
	v->a[16363] = sym_comment;
	v->a[16364] = actions(9);
	v->a[16365] = 1;
	v->a[16366] = anon_sym_for;
	v->a[16367] = actions(13);
	v->a[16368] = 1;
	v->a[16369] = anon_sym_if;
	v->a[16370] = actions(15);
	v->a[16371] = 1;
	v->a[16372] = anon_sym_case;
	v->a[16373] = actions(17);
	v->a[16374] = 1;
	v->a[16375] = anon_sym_LPAREN;
	v->a[16376] = actions(19);
	v->a[16377] = 1;
	v->a[16378] = anon_sym_LBRACE;
	v->a[16379] = actions(49);
	small_parse_table_819(v);
}

void	small_parse_table_819(t_small_parse_table_array *v)
{
	v->a[16380] = 1;
	v->a[16381] = sym_word;
	v->a[16382] = actions(57);
	v->a[16383] = 1;
	v->a[16384] = anon_sym_BANG;
	v->a[16385] = actions(63);
	v->a[16386] = 1;
	v->a[16387] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16388] = actions(65);
	v->a[16389] = 1;
	v->a[16390] = anon_sym_DOLLAR;
	v->a[16391] = actions(67);
	v->a[16392] = 1;
	v->a[16393] = anon_sym_DQUOTE;
	v->a[16394] = actions(69);
	v->a[16395] = 1;
	v->a[16396] = sym_raw_string;
	v->a[16397] = actions(71);
	v->a[16398] = 1;
	v->a[16399] = aux_sym_number_token1;
	small_parse_table_820(v);
}

/* EOF small_parse_table_163.c */
