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
	v->a[14300] = anon_sym_if;
	v->a[14301] = actions(91);
	v->a[14302] = 1;
	v->a[14303] = anon_sym_case;
	v->a[14304] = actions(93);
	v->a[14305] = 1;
	v->a[14306] = anon_sym_LPAREN;
	v->a[14307] = actions(97);
	v->a[14308] = 1;
	v->a[14309] = anon_sym_LBRACE;
	v->a[14310] = actions(99);
	v->a[14311] = 1;
	v->a[14312] = anon_sym_BANG;
	v->a[14313] = actions(103);
	v->a[14314] = 1;
	v->a[14315] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14316] = actions(105);
	v->a[14317] = 1;
	v->a[14318] = anon_sym_DOLLAR;
	v->a[14319] = actions(107);
	small_parse_table_716(v);
}

void	small_parse_table_716(t_small_parse_table_array *v)
{
	v->a[14320] = 1;
	v->a[14321] = anon_sym_DQUOTE;
	v->a[14322] = actions(111);
	v->a[14323] = 1;
	v->a[14324] = anon_sym_DOLLAR_LBRACE;
	v->a[14325] = actions(113);
	v->a[14326] = 1;
	v->a[14327] = anon_sym_DOLLAR_LPAREN;
	v->a[14328] = actions(115);
	v->a[14329] = 1;
	v->a[14330] = anon_sym_BQUOTE;
	v->a[14331] = actions(117);
	v->a[14332] = 1;
	v->a[14333] = sym_file_descriptor;
	v->a[14334] = actions(119);
	v->a[14335] = 1;
	v->a[14336] = sym_variable_name;
	v->a[14337] = state(127);
	v->a[14338] = 1;
	v->a[14339] = aux_sym__statements_repeat1;
	small_parse_table_717(v);
}

void	small_parse_table_717(t_small_parse_table_array *v)
{
	v->a[14340] = state(172);
	v->a[14341] = 1;
	v->a[14342] = sym_command_name;
	v->a[14343] = state(256);
	v->a[14344] = 1;
	v->a[14345] = sym_variable_assignment;
	v->a[14346] = state(567);
	v->a[14347] = 1;
	v->a[14348] = sym_concatenation;
	v->a[14349] = state(634);
	v->a[14350] = 1;
	v->a[14351] = sym_file_redirect;
	v->a[14352] = state(670);
	v->a[14353] = 1;
	v->a[14354] = aux_sym_command_repeat1;
	v->a[14355] = state(968);
	v->a[14356] = 1;
	v->a[14357] = sym_redirected_statement;
	v->a[14358] = state(969);
	v->a[14359] = 1;
	small_parse_table_718(v);
}

void	small_parse_table_718(t_small_parse_table_array *v)
{
	v->a[14360] = sym_for_statement;
	v->a[14361] = state(974);
	v->a[14362] = 1;
	v->a[14363] = sym_while_statement;
	v->a[14364] = state(975);
	v->a[14365] = 1;
	v->a[14366] = sym_if_statement;
	v->a[14367] = state(977);
	v->a[14368] = 1;
	v->a[14369] = sym_case_statement;
	v->a[14370] = state(978);
	v->a[14371] = 1;
	v->a[14372] = sym_function_definition;
	v->a[14373] = state(979);
	v->a[14374] = 1;
	v->a[14375] = sym_compound_statement;
	v->a[14376] = state(980);
	v->a[14377] = 1;
	v->a[14378] = sym_subshell;
	v->a[14379] = state(981);
	small_parse_table_719(v);
}

void	small_parse_table_719(t_small_parse_table_array *v)
{
	v->a[14380] = 1;
	v->a[14381] = sym_list;
	v->a[14382] = state(982);
	v->a[14383] = 1;
	v->a[14384] = sym_negated_command;
	v->a[14385] = state(984);
	v->a[14386] = 1;
	v->a[14387] = sym_command;
	v->a[14388] = state(985);
	v->a[14389] = 1;
	v->a[14390] = sym__variable_assignments;
	v->a[14391] = state(1032);
	v->a[14392] = 1;
	v->a[14393] = sym_pipeline;
	v->a[14394] = state(1157);
	v->a[14395] = 1;
	v->a[14396] = aux_sym_redirected_statement_repeat2;
	v->a[14397] = state(1901);
	v->a[14398] = 1;
	v->a[14399] = sym__statement_not_pipeline;
	small_parse_table_720(v);
}

/* EOF small_parse_table_143.c */
