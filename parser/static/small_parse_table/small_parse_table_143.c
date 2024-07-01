/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_143.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_715(t_small_parse_table_array *v)
{
	v->a[14300] = actions(61);
	v->a[14301] = 1;
	v->a[14302] = anon_sym_DOLLAR;
	v->a[14303] = actions(63);
	v->a[14304] = 1;
	v->a[14305] = anon_sym_DQUOTE;
	v->a[14306] = actions(67);
	v->a[14307] = 1;
	v->a[14308] = anon_sym_DOLLAR_LBRACE;
	v->a[14309] = actions(69);
	v->a[14310] = 1;
	v->a[14311] = anon_sym_DOLLAR_LPAREN;
	v->a[14312] = actions(71);
	v->a[14313] = 1;
	v->a[14314] = anon_sym_BQUOTE;
	v->a[14315] = actions(220);
	v->a[14316] = 1;
	v->a[14317] = sym_word;
	v->a[14318] = actions(222);
	v->a[14319] = 1;
	small_parse_table_716(v);
}

void	small_parse_table_716(t_small_parse_table_array *v)
{
	v->a[14320] = anon_sym_BANG;
	v->a[14321] = actions(230);
	v->a[14322] = 1;
	v->a[14323] = sym_file_descriptor;
	v->a[14324] = actions(232);
	v->a[14325] = 1;
	v->a[14326] = sym_variable_name;
	v->a[14327] = state(133);
	v->a[14328] = 1;
	v->a[14329] = aux_sym__statements_repeat1;
	v->a[14330] = state(180);
	v->a[14331] = 1;
	v->a[14332] = sym_command_name;
	v->a[14333] = state(231);
	v->a[14334] = 1;
	v->a[14335] = sym_variable_assignment;
	v->a[14336] = state(650);
	v->a[14337] = 1;
	v->a[14338] = sym_concatenation;
	v->a[14339] = state(673);
	small_parse_table_717(v);
}

void	small_parse_table_717(t_small_parse_table_array *v)
{
	v->a[14340] = 1;
	v->a[14341] = sym_file_redirect;
	v->a[14342] = state(710);
	v->a[14343] = 1;
	v->a[14344] = aux_sym_command_repeat1;
	v->a[14345] = state(1095);
	v->a[14346] = 1;
	v->a[14347] = sym_pipeline;
	v->a[14348] = state(1282);
	v->a[14349] = 1;
	v->a[14350] = aux_sym_redirected_statement_repeat2;
	v->a[14351] = state(2127);
	v->a[14352] = 1;
	v->a[14353] = sym__statement_not_pipeline;
	v->a[14354] = state(2296);
	v->a[14355] = 1;
	v->a[14356] = sym__statements;
	v->a[14357] = actions(11);
	v->a[14358] = 2;
	v->a[14359] = anon_sym_while;
	small_parse_table_718(v);
}

void	small_parse_table_718(t_small_parse_table_array *v)
{
	v->a[14360] = anon_sym_until;
	v->a[14361] = actions(226);
	v->a[14362] = 2;
	v->a[14363] = anon_sym_LT_AMP_DASH;
	v->a[14364] = anon_sym_GT_AMP_DASH;
	v->a[14365] = actions(228);
	v->a[14366] = 2;
	v->a[14367] = sym_raw_string;
	v->a[14368] = sym_number;
	v->a[14369] = state(382);
	v->a[14370] = 5;
	v->a[14371] = sym_arithmetic_expansion;
	v->a[14372] = sym_string;
	v->a[14373] = sym_simple_expansion;
	v->a[14374] = sym_expansion;
	v->a[14375] = sym_command_substitution;
	v->a[14376] = actions(224);
	v->a[14377] = 6;
	v->a[14378] = anon_sym_LT;
	v->a[14379] = anon_sym_GT;
	small_parse_table_719(v);
}

void	small_parse_table_719(t_small_parse_table_array *v)
{
	v->a[14380] = anon_sym_GT_GT;
	v->a[14381] = anon_sym_LT_AMP;
	v->a[14382] = anon_sym_GT_AMP;
	v->a[14383] = anon_sym_GT_PIPE;
	v->a[14384] = state(1087);
	v->a[14385] = 12;
	v->a[14386] = sym_redirected_statement;
	v->a[14387] = sym_for_statement;
	v->a[14388] = sym_while_statement;
	v->a[14389] = sym_if_statement;
	v->a[14390] = sym_case_statement;
	v->a[14391] = sym_function_definition;
	v->a[14392] = sym_compound_statement;
	v->a[14393] = sym_subshell;
	v->a[14394] = sym_list;
	v->a[14395] = sym_negated_command;
	v->a[14396] = sym_command;
	v->a[14397] = sym__variable_assignments;
	v->a[14398] = 32;
	v->a[14399] = actions(3);
	small_parse_table_720(v);
}

/* EOF small_parse_table_143.c */
