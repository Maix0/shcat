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
	v->a[16301] = state(636);
	v->a[16302] = 1;
	v->a[16303] = sym_concatenation;
	v->a[16304] = state(685);
	v->a[16305] = 1;
	v->a[16306] = sym_file_redirect;
	v->a[16307] = state(743);
	v->a[16308] = 1;
	v->a[16309] = aux_sym_command_repeat1;
	v->a[16310] = state(1031);
	v->a[16311] = 1;
	v->a[16312] = sym_list;
	v->a[16313] = state(1035);
	v->a[16314] = 1;
	v->a[16315] = sym_redirected_statement;
	v->a[16316] = state(1037);
	v->a[16317] = 1;
	v->a[16318] = sym_for_statement;
	v->a[16319] = state(1041);
	small_parse_table_816(v);
}

void	small_parse_table_816(t_small_parse_table_array *v)
{
	v->a[16320] = 1;
	v->a[16321] = sym_while_statement;
	v->a[16322] = state(1043);
	v->a[16323] = 1;
	v->a[16324] = sym_if_statement;
	v->a[16325] = state(1051);
	v->a[16326] = 1;
	v->a[16327] = sym_case_statement;
	v->a[16328] = state(1059);
	v->a[16329] = 1;
	v->a[16330] = sym_function_definition;
	v->a[16331] = state(1066);
	v->a[16332] = 1;
	v->a[16333] = sym_compound_statement;
	v->a[16334] = state(1074);
	v->a[16335] = 1;
	v->a[16336] = sym_subshell;
	v->a[16337] = state(1084);
	v->a[16338] = 1;
	v->a[16339] = sym_negated_command;
	small_parse_table_817(v);
}

void	small_parse_table_817(t_small_parse_table_array *v)
{
	v->a[16340] = state(1087);
	v->a[16341] = 1;
	v->a[16342] = sym__variable_assignments;
	v->a[16343] = state(1088);
	v->a[16344] = 1;
	v->a[16345] = sym_command;
	v->a[16346] = state(1107);
	v->a[16347] = 1;
	v->a[16348] = sym_pipeline;
	v->a[16349] = state(1219);
	v->a[16350] = 1;
	v->a[16351] = aux_sym_redirected_statement_repeat2;
	v->a[16352] = state(2125);
	v->a[16353] = 1;
	v->a[16354] = sym__statement_not_pipeline;
	v->a[16355] = actions(11);
	v->a[16356] = 2;
	v->a[16357] = anon_sym_while;
	v->a[16358] = anon_sym_until;
	v->a[16359] = actions(25);
	small_parse_table_818(v);
}

void	small_parse_table_818(t_small_parse_table_array *v)
{
	v->a[16360] = 2;
	v->a[16361] = anon_sym_LT_AMP_DASH;
	v->a[16362] = anon_sym_GT_AMP_DASH;
	v->a[16363] = actions(33);
	v->a[16364] = 2;
	v->a[16365] = sym_raw_string;
	v->a[16366] = sym_number;
	v->a[16367] = state(291);
	v->a[16368] = 5;
	v->a[16369] = sym_arithmetic_expansion;
	v->a[16370] = sym_string;
	v->a[16371] = sym_simple_expansion;
	v->a[16372] = sym_expansion;
	v->a[16373] = sym_command_substitution;
	v->a[16374] = actions(23);
	v->a[16375] = 8;
	v->a[16376] = anon_sym_LT;
	v->a[16377] = anon_sym_GT;
	v->a[16378] = anon_sym_GT_GT;
	v->a[16379] = anon_sym_AMP_GT;
	small_parse_table_819(v);
}

void	small_parse_table_819(t_small_parse_table_array *v)
{
	v->a[16380] = anon_sym_AMP_GT_GT;
	v->a[16381] = anon_sym_LT_AMP;
	v->a[16382] = anon_sym_GT_AMP;
	v->a[16383] = anon_sym_GT_PIPE;
	v->a[16384] = 42;
	v->a[16385] = actions(3);
	v->a[16386] = 1;
	v->a[16387] = sym_comment;
	v->a[16388] = actions(87);
	v->a[16389] = 1;
	v->a[16390] = sym_word;
	v->a[16391] = actions(89);
	v->a[16392] = 1;
	v->a[16393] = anon_sym_for;
	v->a[16394] = actions(93);
	v->a[16395] = 1;
	v->a[16396] = anon_sym_if;
	v->a[16397] = actions(95);
	v->a[16398] = 1;
	v->a[16399] = anon_sym_case;
	small_parse_table_820(v);
}

/* EOF small_parse_table_163.c */
