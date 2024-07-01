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
	v->a[16301] = aux_sym_redirected_statement_repeat2;
	v->a[16302] = state(2103);
	v->a[16303] = 1;
	v->a[16304] = sym__statement_not_pipeline;
	v->a[16305] = actions(11);
	v->a[16306] = 2;
	v->a[16307] = anon_sym_while;
	v->a[16308] = anon_sym_until;
	v->a[16309] = actions(57);
	v->a[16310] = 2;
	v->a[16311] = anon_sym_LT_AMP_DASH;
	v->a[16312] = anon_sym_GT_AMP_DASH;
	v->a[16313] = actions(65);
	v->a[16314] = 2;
	v->a[16315] = sym_raw_string;
	v->a[16316] = sym_number;
	v->a[16317] = state(443);
	v->a[16318] = 5;
	v->a[16319] = sym_arithmetic_expansion;
	small_parse_table_816(v);
}

void	small_parse_table_816(t_small_parse_table_array *v)
{
	v->a[16320] = sym_string;
	v->a[16321] = sym_simple_expansion;
	v->a[16322] = sym_expansion;
	v->a[16323] = sym_command_substitution;
	v->a[16324] = actions(55);
	v->a[16325] = 6;
	v->a[16326] = anon_sym_LT;
	v->a[16327] = anon_sym_GT;
	v->a[16328] = anon_sym_GT_GT;
	v->a[16329] = anon_sym_LT_AMP;
	v->a[16330] = anon_sym_GT_AMP;
	v->a[16331] = anon_sym_GT_PIPE;
	v->a[16332] = 42;
	v->a[16333] = actions(3);
	v->a[16334] = 1;
	v->a[16335] = sym_comment;
	v->a[16336] = actions(9);
	v->a[16337] = 1;
	v->a[16338] = anon_sym_for;
	v->a[16339] = actions(13);
	small_parse_table_817(v);
}

void	small_parse_table_817(t_small_parse_table_array *v)
{
	v->a[16340] = 1;
	v->a[16341] = anon_sym_if;
	v->a[16342] = actions(15);
	v->a[16343] = 1;
	v->a[16344] = anon_sym_case;
	v->a[16345] = actions(17);
	v->a[16346] = 1;
	v->a[16347] = anon_sym_LPAREN;
	v->a[16348] = actions(19);
	v->a[16349] = 1;
	v->a[16350] = anon_sym_LBRACE;
	v->a[16351] = actions(59);
	v->a[16352] = 1;
	v->a[16353] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16354] = actions(61);
	v->a[16355] = 1;
	v->a[16356] = anon_sym_DOLLAR;
	v->a[16357] = actions(63);
	v->a[16358] = 1;
	v->a[16359] = anon_sym_DQUOTE;
	small_parse_table_818(v);
}

void	small_parse_table_818(t_small_parse_table_array *v)
{
	v->a[16360] = actions(67);
	v->a[16361] = 1;
	v->a[16362] = anon_sym_DOLLAR_LBRACE;
	v->a[16363] = actions(69);
	v->a[16364] = 1;
	v->a[16365] = anon_sym_DOLLAR_LPAREN;
	v->a[16366] = actions(71);
	v->a[16367] = 1;
	v->a[16368] = anon_sym_BQUOTE;
	v->a[16369] = actions(73);
	v->a[16370] = 1;
	v->a[16371] = sym_file_descriptor;
	v->a[16372] = actions(75);
	v->a[16373] = 1;
	v->a[16374] = sym_variable_name;
	v->a[16375] = actions(240);
	v->a[16376] = 1;
	v->a[16377] = sym_word;
	v->a[16378] = actions(242);
	v->a[16379] = 1;
	small_parse_table_819(v);
}

void	small_parse_table_819(t_small_parse_table_array *v)
{
	v->a[16380] = anon_sym_BANG;
	v->a[16381] = state(131);
	v->a[16382] = 1;
	v->a[16383] = aux_sym__statements_repeat1;
	v->a[16384] = state(188);
	v->a[16385] = 1;
	v->a[16386] = sym_command_name;
	v->a[16387] = state(260);
	v->a[16388] = 1;
	v->a[16389] = sym_variable_assignment;
	v->a[16390] = state(650);
	v->a[16391] = 1;
	v->a[16392] = sym_concatenation;
	v->a[16393] = state(749);
	v->a[16394] = 1;
	v->a[16395] = aux_sym_command_repeat1;
	v->a[16396] = state(795);
	v->a[16397] = 1;
	v->a[16398] = sym_file_redirect;
	v->a[16399] = state(1039);
	small_parse_table_820(v);
}

/* EOF small_parse_table_163.c */
