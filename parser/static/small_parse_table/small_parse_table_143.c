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
	v->a[14300] = 1;
	v->a[14301] = anon_sym_LPAREN;
	v->a[14302] = actions(19);
	v->a[14303] = 1;
	v->a[14304] = anon_sym_LBRACE;
	v->a[14305] = actions(53);
	v->a[14306] = 1;
	v->a[14307] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14308] = actions(55);
	v->a[14309] = 1;
	v->a[14310] = anon_sym_DOLLAR;
	v->a[14311] = actions(57);
	v->a[14312] = 1;
	v->a[14313] = anon_sym_DQUOTE;
	v->a[14314] = actions(61);
	v->a[14315] = 1;
	v->a[14316] = anon_sym_DOLLAR_LBRACE;
	v->a[14317] = actions(63);
	v->a[14318] = 1;
	v->a[14319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_716(v);
}

void	small_parse_table_716(t_small_parse_table_array *v)
{
	v->a[14320] = actions(65);
	v->a[14321] = 1;
	v->a[14322] = anon_sym_BQUOTE;
	v->a[14323] = actions(297);
	v->a[14324] = 1;
	v->a[14325] = sym_word;
	v->a[14326] = actions(299);
	v->a[14327] = 1;
	v->a[14328] = anon_sym_BANG;
	v->a[14329] = actions(305);
	v->a[14330] = 1;
	v->a[14331] = sym_variable_name;
	v->a[14332] = state(312);
	v->a[14333] = 1;
	v->a[14334] = sym_command_name;
	v->a[14335] = state(402);
	v->a[14336] = 1;
	v->a[14337] = sym_variable_assignment;
	v->a[14338] = state(471);
	v->a[14339] = 1;
	small_parse_table_717(v);
}

void	small_parse_table_717(t_small_parse_table_array *v)
{
	v->a[14340] = aux_sym_command_repeat1;
	v->a[14341] = state(600);
	v->a[14342] = 1;
	v->a[14343] = sym_file_redirect;
	v->a[14344] = state(602);
	v->a[14345] = 1;
	v->a[14346] = sym_concatenation;
	v->a[14347] = state(1191);
	v->a[14348] = 1;
	v->a[14349] = sym_pipeline;
	v->a[14350] = state(1201);
	v->a[14351] = 1;
	v->a[14352] = aux_sym_redirected_statement_repeat2;
	v->a[14353] = state(1603);
	v->a[14354] = 1;
	v->a[14355] = sym__statement_not_pipeline;
	v->a[14356] = actions(11);
	v->a[14357] = 2;
	v->a[14358] = anon_sym_while;
	v->a[14359] = anon_sym_until;
	small_parse_table_718(v);
}

void	small_parse_table_718(t_small_parse_table_array *v)
{
	v->a[14360] = actions(303);
	v->a[14361] = 2;
	v->a[14362] = sym_raw_string;
	v->a[14363] = sym_number;
	v->a[14364] = state(603);
	v->a[14365] = 5;
	v->a[14366] = sym_arithmetic_expansion;
	v->a[14367] = sym_string;
	v->a[14368] = sym_simple_expansion;
	v->a[14369] = sym_expansion;
	v->a[14370] = sym_command_substitution;
	v->a[14371] = actions(301);
	v->a[14372] = 7;
	v->a[14373] = anon_sym_LT;
	v->a[14374] = anon_sym_GT;
	v->a[14375] = anon_sym_GT_GT;
	v->a[14376] = anon_sym_LT_AMP;
	v->a[14377] = anon_sym_GT_AMP;
	v->a[14378] = anon_sym_GT_PIPE;
	v->a[14379] = anon_sym_LT_GT;
	small_parse_table_719(v);
}

void	small_parse_table_719(t_small_parse_table_array *v)
{
	v->a[14380] = state(1189);
	v->a[14381] = 12;
	v->a[14382] = sym_redirected_statement;
	v->a[14383] = sym_for_statement;
	v->a[14384] = sym_while_statement;
	v->a[14385] = sym_if_statement;
	v->a[14386] = sym_case_statement;
	v->a[14387] = sym_function_definition;
	v->a[14388] = sym_compound_statement;
	v->a[14389] = sym_subshell;
	v->a[14390] = sym_list;
	v->a[14391] = sym_negated_command;
	v->a[14392] = sym_command;
	v->a[14393] = sym__variable_assignments;
	v->a[14394] = 28;
	v->a[14395] = actions(3);
	v->a[14396] = 1;
	v->a[14397] = sym_comment;
	v->a[14398] = actions(7);
	v->a[14399] = 1;
	small_parse_table_720(v);
}

/* EOF small_parse_table_143.c */
