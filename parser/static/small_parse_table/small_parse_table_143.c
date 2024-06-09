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
	v->a[14300] = anon_sym_AMP_GT_GT;
	v->a[14301] = anon_sym_LT_AMP;
	v->a[14302] = anon_sym_GT_AMP;
	v->a[14303] = anon_sym_GT_PIPE;
	v->a[14304] = state(1071);
	v->a[14305] = 12;
	v->a[14306] = sym_redirected_statement;
	v->a[14307] = sym_for_statement;
	v->a[14308] = sym_while_statement;
	v->a[14309] = sym_if_statement;
	v->a[14310] = sym_case_statement;
	v->a[14311] = sym_function_definition;
	v->a[14312] = sym_compound_statement;
	v->a[14313] = sym_subshell;
	v->a[14314] = sym_list;
	v->a[14315] = sym_negated_command;
	v->a[14316] = sym_command;
	v->a[14317] = sym_variable_assignments;
	v->a[14318] = 34;
	v->a[14319] = actions(3);
	small_parse_table_716(v);
}

void	small_parse_table_716(t_small_parse_table_array *v)
{
	v->a[14320] = 1;
	v->a[14321] = sym_comment;
	v->a[14322] = actions(9);
	v->a[14323] = 1;
	v->a[14324] = anon_sym_for;
	v->a[14325] = actions(13);
	v->a[14326] = 1;
	v->a[14327] = anon_sym_if;
	v->a[14328] = actions(15);
	v->a[14329] = 1;
	v->a[14330] = anon_sym_case;
	v->a[14331] = actions(17);
	v->a[14332] = 1;
	v->a[14333] = anon_sym_LPAREN;
	v->a[14334] = actions(19);
	v->a[14335] = 1;
	v->a[14336] = anon_sym_LBRACE;
	v->a[14337] = actions(63);
	v->a[14338] = 1;
	v->a[14339] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_717(v);
}

void	small_parse_table_717(t_small_parse_table_array *v)
{
	v->a[14340] = actions(65);
	v->a[14341] = 1;
	v->a[14342] = anon_sym_DOLLAR;
	v->a[14343] = actions(67);
	v->a[14344] = 1;
	v->a[14345] = anon_sym_DQUOTE;
	v->a[14346] = actions(71);
	v->a[14347] = 1;
	v->a[14348] = aux_sym_number_token1;
	v->a[14349] = actions(73);
	v->a[14350] = 1;
	v->a[14351] = aux_sym_number_token2;
	v->a[14352] = actions(75);
	v->a[14353] = 1;
	v->a[14354] = anon_sym_DOLLAR_LBRACE;
	v->a[14355] = actions(77);
	v->a[14356] = 1;
	v->a[14357] = anon_sym_DOLLAR_LPAREN;
	v->a[14358] = actions(79);
	v->a[14359] = 1;
	small_parse_table_718(v);
}

void	small_parse_table_718(t_small_parse_table_array *v)
{
	v->a[14360] = anon_sym_BQUOTE;
	v->a[14361] = actions(248);
	v->a[14362] = 1;
	v->a[14363] = sym_word;
	v->a[14364] = actions(250);
	v->a[14365] = 1;
	v->a[14366] = anon_sym_BANG;
	v->a[14367] = actions(256);
	v->a[14368] = 1;
	v->a[14369] = sym_raw_string;
	v->a[14370] = actions(258);
	v->a[14371] = 1;
	v->a[14372] = sym_file_descriptor;
	v->a[14373] = actions(260);
	v->a[14374] = 1;
	v->a[14375] = sym_variable_name;
	v->a[14376] = state(141);
	v->a[14377] = 1;
	v->a[14378] = aux_sym__statements_repeat1;
	v->a[14379] = state(175);
	small_parse_table_719(v);
}

void	small_parse_table_719(t_small_parse_table_array *v)
{
	v->a[14380] = 1;
	v->a[14381] = sym_command_name;
	v->a[14382] = state(278);
	v->a[14383] = 1;
	v->a[14384] = sym_variable_assignment;
	v->a[14385] = state(567);
	v->a[14386] = 1;
	v->a[14387] = aux_sym_command_repeat1;
	v->a[14388] = state(582);
	v->a[14389] = 1;
	v->a[14390] = sym_concatenation;
	v->a[14391] = state(735);
	v->a[14392] = 1;
	v->a[14393] = sym_file_redirect;
	v->a[14394] = state(1100);
	v->a[14395] = 1;
	v->a[14396] = sym_pipeline;
	v->a[14397] = state(1196);
	v->a[14398] = 1;
	v->a[14399] = aux_sym_redirected_statement_repeat2;
	small_parse_table_720(v);
}

/* EOF small_parse_table_143.c */
