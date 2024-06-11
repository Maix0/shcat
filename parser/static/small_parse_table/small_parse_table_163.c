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
	v->a[16300] = sym_variable_assignment;
	v->a[16301] = state(647);
	v->a[16302] = 1;
	v->a[16303] = sym_concatenation;
	v->a[16304] = state(736);
	v->a[16305] = 1;
	v->a[16306] = aux_sym_command_repeat1;
	v->a[16307] = state(738);
	v->a[16308] = 1;
	v->a[16309] = sym_file_redirect;
	v->a[16310] = state(1451);
	v->a[16311] = 1;
	v->a[16312] = sym_pipeline;
	v->a[16313] = state(1460);
	v->a[16314] = 1;
	v->a[16315] = aux_sym_redirected_statement_repeat2;
	v->a[16316] = state(2269);
	v->a[16317] = 1;
	v->a[16318] = sym__statement_not_pipeline;
	v->a[16319] = actions(274);
	small_parse_table_816(v);
}

void	small_parse_table_816(t_small_parse_table_array *v)
{
	v->a[16320] = 2;
	v->a[16321] = anon_sym_while;
	v->a[16322] = anon_sym_until;
	v->a[16323] = actions(295);
	v->a[16324] = 2;
	v->a[16325] = anon_sym_LT_AMP_DASH;
	v->a[16326] = anon_sym_GT_AMP_DASH;
	v->a[16327] = actions(307);
	v->a[16328] = 2;
	v->a[16329] = sym_raw_string;
	v->a[16330] = sym_number;
	v->a[16331] = state(394);
	v->a[16332] = 5;
	v->a[16333] = sym_arithmetic_expansion;
	v->a[16334] = sym_string;
	v->a[16335] = sym_simple_expansion;
	v->a[16336] = sym_expansion;
	v->a[16337] = sym_command_substitution;
	v->a[16338] = actions(292);
	v->a[16339] = 8;
	small_parse_table_817(v);
}

void	small_parse_table_817(t_small_parse_table_array *v)
{
	v->a[16340] = anon_sym_LT;
	v->a[16341] = anon_sym_GT;
	v->a[16342] = anon_sym_GT_GT;
	v->a[16343] = anon_sym_AMP_GT;
	v->a[16344] = anon_sym_AMP_GT_GT;
	v->a[16345] = anon_sym_LT_AMP;
	v->a[16346] = anon_sym_GT_AMP;
	v->a[16347] = anon_sym_GT_PIPE;
	v->a[16348] = state(1425);
	v->a[16349] = 12;
	v->a[16350] = sym_redirected_statement;
	v->a[16351] = sym_for_statement;
	v->a[16352] = sym_while_statement;
	v->a[16353] = sym_if_statement;
	v->a[16354] = sym_case_statement;
	v->a[16355] = sym_function_definition;
	v->a[16356] = sym_compound_statement;
	v->a[16357] = sym_subshell;
	v->a[16358] = sym_list;
	v->a[16359] = sym_negated_command;
	small_parse_table_818(v);
}

void	small_parse_table_818(t_small_parse_table_array *v)
{
	v->a[16360] = sym_command;
	v->a[16361] = sym_variable_assignments;
	v->a[16362] = 31;
	v->a[16363] = actions(3);
	v->a[16364] = 1;
	v->a[16365] = sym_comment;
	v->a[16366] = actions(9);
	v->a[16367] = 1;
	v->a[16368] = anon_sym_for;
	v->a[16369] = actions(13);
	v->a[16370] = 1;
	v->a[16371] = anon_sym_if;
	v->a[16372] = actions(15);
	v->a[16373] = 1;
	v->a[16374] = anon_sym_case;
	v->a[16375] = actions(17);
	v->a[16376] = 1;
	v->a[16377] = anon_sym_LPAREN;
	v->a[16378] = actions(19);
	v->a[16379] = 1;
	small_parse_table_819(v);
}

void	small_parse_table_819(t_small_parse_table_array *v)
{
	v->a[16380] = anon_sym_LBRACE;
	v->a[16381] = actions(45);
	v->a[16382] = 1;
	v->a[16383] = sym_word;
	v->a[16384] = actions(53);
	v->a[16385] = 1;
	v->a[16386] = anon_sym_BANG;
	v->a[16387] = actions(59);
	v->a[16388] = 1;
	v->a[16389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16390] = actions(61);
	v->a[16391] = 1;
	v->a[16392] = anon_sym_DOLLAR;
	v->a[16393] = actions(63);
	v->a[16394] = 1;
	v->a[16395] = anon_sym_DQUOTE;
	v->a[16396] = actions(67);
	v->a[16397] = 1;
	v->a[16398] = anon_sym_DOLLAR_LBRACE;
	v->a[16399] = actions(69);
	small_parse_table_820(v);
}

/* EOF small_parse_table_163.c */
