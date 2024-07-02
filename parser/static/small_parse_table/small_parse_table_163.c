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
	v->a[16301] = anon_sym_for;
	v->a[16302] = actions(13);
	v->a[16303] = 1;
	v->a[16304] = anon_sym_if;
	v->a[16305] = actions(15);
	v->a[16306] = 1;
	v->a[16307] = anon_sym_case;
	v->a[16308] = actions(17);
	v->a[16309] = 1;
	v->a[16310] = anon_sym_LPAREN;
	v->a[16311] = actions(19);
	v->a[16312] = 1;
	v->a[16313] = anon_sym_LBRACE;
	v->a[16314] = actions(55);
	v->a[16315] = 1;
	v->a[16316] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16317] = actions(57);
	v->a[16318] = 1;
	v->a[16319] = anon_sym_DOLLAR;
	small_parse_table_816(v);
}

void	small_parse_table_816(t_small_parse_table_array *v)
{
	v->a[16320] = actions(59);
	v->a[16321] = 1;
	v->a[16322] = anon_sym_DQUOTE;
	v->a[16323] = actions(63);
	v->a[16324] = 1;
	v->a[16325] = anon_sym_DOLLAR_LBRACE;
	v->a[16326] = actions(65);
	v->a[16327] = 1;
	v->a[16328] = anon_sym_DOLLAR_LPAREN;
	v->a[16329] = actions(67);
	v->a[16330] = 1;
	v->a[16331] = anon_sym_BQUOTE;
	v->a[16332] = actions(347);
	v->a[16333] = 1;
	v->a[16334] = sym_word;
	v->a[16335] = actions(349);
	v->a[16336] = 1;
	v->a[16337] = anon_sym_BANG;
	v->a[16338] = actions(355);
	v->a[16339] = 1;
	small_parse_table_817(v);
}

void	small_parse_table_817(t_small_parse_table_array *v)
{
	v->a[16340] = sym_file_descriptor;
	v->a[16341] = actions(357);
	v->a[16342] = 1;
	v->a[16343] = sym_variable_name;
	v->a[16344] = state(322);
	v->a[16345] = 1;
	v->a[16346] = sym_command_name;
	v->a[16347] = state(584);
	v->a[16348] = 1;
	v->a[16349] = sym_concatenation;
	v->a[16350] = state(601);
	v->a[16351] = 1;
	v->a[16352] = sym_variable_assignment;
	v->a[16353] = state(620);
	v->a[16354] = 1;
	v->a[16355] = sym_file_redirect;
	v->a[16356] = state(625);
	v->a[16357] = 1;
	v->a[16358] = aux_sym_command_repeat1;
	v->a[16359] = state(1399);
	small_parse_table_818(v);
}

void	small_parse_table_818(t_small_parse_table_array *v)
{
	v->a[16360] = 1;
	v->a[16361] = aux_sym_redirected_statement_repeat2;
	v->a[16362] = state(1426);
	v->a[16363] = 1;
	v->a[16364] = sym_pipeline;
	v->a[16365] = state(1916);
	v->a[16366] = 1;
	v->a[16367] = sym__statement_not_pipeline;
	v->a[16368] = actions(11);
	v->a[16369] = 2;
	v->a[16370] = anon_sym_while;
	v->a[16371] = anon_sym_until;
	v->a[16372] = actions(353);
	v->a[16373] = 2;
	v->a[16374] = sym_raw_string;
	v->a[16375] = sym_number;
	v->a[16376] = state(628);
	v->a[16377] = 5;
	v->a[16378] = sym_arithmetic_expansion;
	v->a[16379] = sym_string;
	small_parse_table_819(v);
}

void	small_parse_table_819(t_small_parse_table_array *v)
{
	v->a[16380] = sym_simple_expansion;
	v->a[16381] = sym_expansion;
	v->a[16382] = sym_command_substitution;
	v->a[16383] = actions(351);
	v->a[16384] = 7;
	v->a[16385] = anon_sym_LT;
	v->a[16386] = anon_sym_GT;
	v->a[16387] = anon_sym_GT_GT;
	v->a[16388] = anon_sym_LT_AMP;
	v->a[16389] = anon_sym_GT_AMP;
	v->a[16390] = anon_sym_GT_PIPE;
	v->a[16391] = anon_sym_LT_GT;
	v->a[16392] = state(1315);
	v->a[16393] = 12;
	v->a[16394] = sym_redirected_statement;
	v->a[16395] = sym_for_statement;
	v->a[16396] = sym_while_statement;
	v->a[16397] = sym_if_statement;
	v->a[16398] = sym_case_statement;
	v->a[16399] = sym_function_definition;
	small_parse_table_820(v);
}

/* EOF small_parse_table_163.c */
