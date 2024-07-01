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
	v->a[14300] = actions(67);
	v->a[14301] = 1;
	v->a[14302] = anon_sym_BQUOTE;
	v->a[14303] = actions(69);
	v->a[14304] = 1;
	v->a[14305] = sym_file_descriptor;
	v->a[14306] = actions(71);
	v->a[14307] = 1;
	v->a[14308] = sym_variable_name;
	v->a[14309] = actions(229);
	v->a[14310] = 1;
	v->a[14311] = sym_word;
	v->a[14312] = actions(231);
	v->a[14313] = 1;
	v->a[14314] = anon_sym_BANG;
	v->a[14315] = state(118);
	v->a[14316] = 1;
	v->a[14317] = aux_sym__statements_repeat1;
	v->a[14318] = state(179);
	v->a[14319] = 1;
	small_parse_table_716(v);
}

void	small_parse_table_716(t_small_parse_table_array *v)
{
	v->a[14320] = sym_command_name;
	v->a[14321] = state(299);
	v->a[14322] = 1;
	v->a[14323] = sym_variable_assignment;
	v->a[14324] = state(603);
	v->a[14325] = 1;
	v->a[14326] = sym_concatenation;
	v->a[14327] = state(658);
	v->a[14328] = 1;
	v->a[14329] = aux_sym_command_repeat1;
	v->a[14330] = state(764);
	v->a[14331] = 1;
	v->a[14332] = sym_file_redirect;
	v->a[14333] = state(969);
	v->a[14334] = 1;
	v->a[14335] = sym__variable_assignments;
	v->a[14336] = state(970);
	v->a[14337] = 1;
	v->a[14338] = sym_command;
	v->a[14339] = state(971);
	small_parse_table_717(v);
}

void	small_parse_table_717(t_small_parse_table_array *v)
{
	v->a[14340] = 1;
	v->a[14341] = sym_negated_command;
	v->a[14342] = state(973);
	v->a[14343] = 1;
	v->a[14344] = sym_list;
	v->a[14345] = state(975);
	v->a[14346] = 1;
	v->a[14347] = sym_subshell;
	v->a[14348] = state(977);
	v->a[14349] = 1;
	v->a[14350] = sym_compound_statement;
	v->a[14351] = state(978);
	v->a[14352] = 1;
	v->a[14353] = sym_function_definition;
	v->a[14354] = state(981);
	v->a[14355] = 1;
	v->a[14356] = sym_case_statement;
	v->a[14357] = state(984);
	v->a[14358] = 1;
	v->a[14359] = sym_if_statement;
	small_parse_table_718(v);
}

void	small_parse_table_718(t_small_parse_table_array *v)
{
	v->a[14360] = state(985);
	v->a[14361] = 1;
	v->a[14362] = sym_while_statement;
	v->a[14363] = state(986);
	v->a[14364] = 1;
	v->a[14365] = sym_for_statement;
	v->a[14366] = state(987);
	v->a[14367] = 1;
	v->a[14368] = sym_redirected_statement;
	v->a[14369] = state(1049);
	v->a[14370] = 1;
	v->a[14371] = sym_pipeline;
	v->a[14372] = state(1190);
	v->a[14373] = 1;
	v->a[14374] = aux_sym_redirected_statement_repeat2;
	v->a[14375] = state(1890);
	v->a[14376] = 1;
	v->a[14377] = sym__statement_not_pipeline;
	v->a[14378] = actions(11);
	v->a[14379] = 2;
	small_parse_table_719(v);
}

void	small_parse_table_719(t_small_parse_table_array *v)
{
	v->a[14380] = anon_sym_while;
	v->a[14381] = anon_sym_until;
	v->a[14382] = actions(61);
	v->a[14383] = 2;
	v->a[14384] = sym_raw_string;
	v->a[14385] = sym_number;
	v->a[14386] = state(436);
	v->a[14387] = 5;
	v->a[14388] = sym_arithmetic_expansion;
	v->a[14389] = sym_string;
	v->a[14390] = sym_simple_expansion;
	v->a[14391] = sym_expansion;
	v->a[14392] = sym_command_substitution;
	v->a[14393] = actions(53);
	v->a[14394] = 7;
	v->a[14395] = anon_sym_LT;
	v->a[14396] = anon_sym_GT;
	v->a[14397] = anon_sym_GT_GT;
	v->a[14398] = anon_sym_LT_AMP;
	v->a[14399] = anon_sym_GT_AMP;
	small_parse_table_720(v);
}

/* EOF small_parse_table_143.c */
