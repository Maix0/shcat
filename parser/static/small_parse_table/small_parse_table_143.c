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
	v->a[14301] = anon_sym_DOLLAR;
	v->a[14302] = actions(181);
	v->a[14303] = 1;
	v->a[14304] = anon_sym_DQUOTE;
	v->a[14305] = actions(187);
	v->a[14306] = 1;
	v->a[14307] = anon_sym_DOLLAR_LBRACE;
	v->a[14308] = actions(190);
	v->a[14309] = 1;
	v->a[14310] = anon_sym_DOLLAR_LPAREN;
	v->a[14311] = actions(193);
	v->a[14312] = 1;
	v->a[14313] = anon_sym_BQUOTE;
	v->a[14314] = actions(196);
	v->a[14315] = 1;
	v->a[14316] = sym_file_descriptor;
	v->a[14317] = actions(199);
	v->a[14318] = 1;
	v->a[14319] = sym_variable_name;
	small_parse_table_716(v);
}

void	small_parse_table_716(t_small_parse_table_array *v)
{
	v->a[14320] = state(117);
	v->a[14321] = 1;
	v->a[14322] = aux_sym__terminated_statement;
	v->a[14323] = state(187);
	v->a[14324] = 1;
	v->a[14325] = sym_command_name;
	v->a[14326] = state(300);
	v->a[14327] = 1;
	v->a[14328] = sym_variable_assignment;
	v->a[14329] = state(647);
	v->a[14330] = 1;
	v->a[14331] = sym_concatenation;
	v->a[14332] = state(736);
	v->a[14333] = 1;
	v->a[14334] = aux_sym_command_repeat1;
	v->a[14335] = state(738);
	v->a[14336] = 1;
	v->a[14337] = sym_file_redirect;
	v->a[14338] = state(1455);
	v->a[14339] = 1;
	small_parse_table_717(v);
}

void	small_parse_table_717(t_small_parse_table_array *v)
{
	v->a[14340] = sym_pipeline;
	v->a[14341] = state(1460);
	v->a[14342] = 1;
	v->a[14343] = aux_sym_redirected_statement_repeat2;
	v->a[14344] = state(2269);
	v->a[14345] = 1;
	v->a[14346] = sym__statement_not_pipeline;
	v->a[14347] = actions(149);
	v->a[14348] = 2;
	v->a[14349] = anon_sym_while;
	v->a[14350] = anon_sym_until;
	v->a[14351] = actions(172);
	v->a[14352] = 2;
	v->a[14353] = anon_sym_LT_AMP_DASH;
	v->a[14354] = anon_sym_GT_AMP_DASH;
	v->a[14355] = actions(184);
	v->a[14356] = 2;
	v->a[14357] = sym_raw_string;
	v->a[14358] = sym_number;
	v->a[14359] = state(394);
	small_parse_table_718(v);
}

void	small_parse_table_718(t_small_parse_table_array *v)
{
	v->a[14360] = 5;
	v->a[14361] = sym_arithmetic_expansion;
	v->a[14362] = sym_string;
	v->a[14363] = sym_simple_expansion;
	v->a[14364] = sym_expansion;
	v->a[14365] = sym_command_substitution;
	v->a[14366] = actions(169);
	v->a[14367] = 8;
	v->a[14368] = anon_sym_LT;
	v->a[14369] = anon_sym_GT;
	v->a[14370] = anon_sym_GT_GT;
	v->a[14371] = anon_sym_AMP_GT;
	v->a[14372] = anon_sym_AMP_GT_GT;
	v->a[14373] = anon_sym_LT_AMP;
	v->a[14374] = anon_sym_GT_AMP;
	v->a[14375] = anon_sym_GT_PIPE;
	v->a[14376] = state(1359);
	v->a[14377] = 12;
	v->a[14378] = sym_redirected_statement;
	v->a[14379] = sym_for_statement;
	small_parse_table_719(v);
}

void	small_parse_table_719(t_small_parse_table_array *v)
{
	v->a[14380] = sym_while_statement;
	v->a[14381] = sym_if_statement;
	v->a[14382] = sym_case_statement;
	v->a[14383] = sym_function_definition;
	v->a[14384] = sym_compound_statement;
	v->a[14385] = sym_subshell;
	v->a[14386] = sym_list;
	v->a[14387] = sym_negated_command;
	v->a[14388] = sym_command;
	v->a[14389] = sym__variable_assignments;
	v->a[14390] = 32;
	v->a[14391] = actions(3);
	v->a[14392] = 1;
	v->a[14393] = sym_comment;
	v->a[14394] = actions(9);
	v->a[14395] = 1;
	v->a[14396] = anon_sym_for;
	v->a[14397] = actions(13);
	v->a[14398] = 1;
	v->a[14399] = anon_sym_if;
	small_parse_table_720(v);
}

/* EOF small_parse_table_143.c */
