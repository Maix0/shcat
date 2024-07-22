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
	v->a[14300] = sym_command_substitution;
	v->a[14301] = actions(23);
	v->a[14302] = 7;
	v->a[14303] = anon_sym_LT;
	v->a[14304] = anon_sym_GT;
	v->a[14305] = anon_sym_GT_GT;
	v->a[14306] = anon_sym_LT_AMP;
	v->a[14307] = anon_sym_GT_AMP;
	v->a[14308] = anon_sym_GT_PIPE;
	v->a[14309] = anon_sym_LT_GT;
	v->a[14310] = 30;
	v->a[14311] = actions(3);
	v->a[14312] = 1;
	v->a[14313] = sym_comment;
	v->a[14314] = actions(9);
	v->a[14315] = 1;
	v->a[14316] = anon_sym_for;
	v->a[14317] = actions(13);
	v->a[14318] = 1;
	v->a[14319] = anon_sym_if;
	small_parse_table_716(v);
}

void	small_parse_table_716(t_small_parse_table_array *v)
{
	v->a[14320] = actions(15);
	v->a[14321] = 1;
	v->a[14322] = anon_sym_case;
	v->a[14323] = actions(17);
	v->a[14324] = 1;
	v->a[14325] = anon_sym_LPAREN;
	v->a[14326] = actions(19);
	v->a[14327] = 1;
	v->a[14328] = anon_sym_LBRACE;
	v->a[14329] = actions(43);
	v->a[14330] = 1;
	v->a[14331] = sym_word;
	v->a[14332] = actions(51);
	v->a[14333] = 1;
	v->a[14334] = anon_sym_BANG;
	v->a[14335] = actions(55);
	v->a[14336] = 1;
	v->a[14337] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14338] = actions(57);
	v->a[14339] = 1;
	small_parse_table_717(v);
}

void	small_parse_table_717(t_small_parse_table_array *v)
{
	v->a[14340] = anon_sym_DOLLAR;
	v->a[14341] = actions(59);
	v->a[14342] = 1;
	v->a[14343] = anon_sym_DQUOTE;
	v->a[14344] = actions(63);
	v->a[14345] = 1;
	v->a[14346] = anon_sym_DOLLAR_LBRACE;
	v->a[14347] = actions(65);
	v->a[14348] = 1;
	v->a[14349] = anon_sym_DOLLAR_LPAREN;
	v->a[14350] = actions(67);
	v->a[14351] = 1;
	v->a[14352] = anon_sym_BQUOTE;
	v->a[14353] = actions(69);
	v->a[14354] = 1;
	v->a[14355] = sym_file_descriptor;
	v->a[14356] = actions(71);
	v->a[14357] = 1;
	v->a[14358] = sym_variable_name;
	v->a[14359] = state(87);
	small_parse_table_718(v);
}

void	small_parse_table_718(t_small_parse_table_array *v)
{
	v->a[14360] = 1;
	v->a[14361] = aux_sym__terminated_statement;
	v->a[14362] = state(183);
	v->a[14363] = 1;
	v->a[14364] = sym_command_name;
	v->a[14365] = state(327);
	v->a[14366] = 1;
	v->a[14367] = sym_variable_assignment;
	v->a[14368] = state(655);
	v->a[14369] = 1;
	v->a[14370] = aux_sym_command_repeat1;
	v->a[14371] = state(661);
	v->a[14372] = 1;
	v->a[14373] = sym_concatenation;
	v->a[14374] = state(665);
	v->a[14375] = 1;
	v->a[14376] = sym_file_redirect;
	v->a[14377] = state(1142);
	v->a[14378] = 1;
	v->a[14379] = sym_pipeline;
	small_parse_table_719(v);
}

void	small_parse_table_719(t_small_parse_table_array *v)
{
	v->a[14380] = state(1198);
	v->a[14381] = 1;
	v->a[14382] = aux_sym_redirected_statement_repeat2;
	v->a[14383] = state(1901);
	v->a[14384] = 1;
	v->a[14385] = sym__statement_not_pipeline;
	v->a[14386] = actions(11);
	v->a[14387] = 2;
	v->a[14388] = anon_sym_while;
	v->a[14389] = anon_sym_until;
	v->a[14390] = actions(61);
	v->a[14391] = 2;
	v->a[14392] = sym_raw_string;
	v->a[14393] = sym_number;
	v->a[14394] = state(455);
	v->a[14395] = 5;
	v->a[14396] = sym_arithmetic_expansion;
	v->a[14397] = sym_string;
	v->a[14398] = sym_simple_expansion;
	v->a[14399] = sym_expansion;
	small_parse_table_720(v);
}

/* EOF small_parse_table_143.c */
