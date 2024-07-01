/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_593.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2965(t_small_parse_table_array *v)
{
	v->a[59300] = state(1036);
	v->a[59301] = 2;
	v->a[59302] = sym_variable_assignment;
	v->a[59303] = aux_sym__variable_assignments_repeat1;
	v->a[59304] = actions(1908);
	v->a[59305] = 3;
	v->a[59306] = sym_file_descriptor;
	v->a[59307] = ts_builtin_sym_end;
	v->a[59308] = aux_sym_heredoc_redirect_token1;
	v->a[59309] = actions(1906);
	v->a[59310] = 15;
	v->a[59311] = anon_sym_PIPE;
	v->a[59312] = anon_sym_SEMI_SEMI;
	v->a[59313] = anon_sym_AMP_AMP;
	v->a[59314] = anon_sym_PIPE_PIPE;
	v->a[59315] = anon_sym_LT;
	v->a[59316] = anon_sym_GT;
	v->a[59317] = anon_sym_GT_GT;
	v->a[59318] = anon_sym_LT_AMP;
	v->a[59319] = anon_sym_GT_AMP;
	small_parse_table_2966(v);
}

void	small_parse_table_2966(t_small_parse_table_array *v)
{
	v->a[59320] = anon_sym_GT_PIPE;
	v->a[59321] = anon_sym_LT_GT;
	v->a[59322] = anon_sym_LT_LT;
	v->a[59323] = anon_sym_LT_LT_DASH;
	v->a[59324] = anon_sym_AMP;
	v->a[59325] = anon_sym_SEMI;
	v->a[59326] = 15;
	v->a[59327] = actions(3);
	v->a[59328] = 1;
	v->a[59329] = sym_comment;
	v->a[59330] = actions(1634);
	v->a[59331] = 1;
	v->a[59332] = anon_sym_LPAREN;
	v->a[59333] = actions(1638);
	v->a[59334] = 1;
	v->a[59335] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59336] = actions(1640);
	v->a[59337] = 1;
	v->a[59338] = anon_sym_DOLLAR;
	v->a[59339] = actions(1642);
	small_parse_table_2967(v);
}

void	small_parse_table_2967(t_small_parse_table_array *v)
{
	v->a[59340] = 1;
	v->a[59341] = anon_sym_DQUOTE;
	v->a[59342] = actions(1644);
	v->a[59343] = 1;
	v->a[59344] = anon_sym_DOLLAR_LBRACE;
	v->a[59345] = actions(1646);
	v->a[59346] = 1;
	v->a[59347] = anon_sym_DOLLAR_LPAREN;
	v->a[59348] = actions(1648);
	v->a[59349] = 1;
	v->a[59350] = anon_sym_BQUOTE;
	v->a[59351] = actions(1650);
	v->a[59352] = 1;
	v->a[59353] = sym_extglob_pattern;
	v->a[59354] = state(1139);
	v->a[59355] = 1;
	v->a[59356] = aux_sym_case_statement_repeat1;
	v->a[59357] = state(1713);
	v->a[59358] = 1;
	v->a[59359] = sym_case_item;
	small_parse_table_2968(v);
}

void	small_parse_table_2968(t_small_parse_table_array *v)
{
	v->a[59360] = state(1930);
	v->a[59361] = 1;
	v->a[59362] = sym__case_item_last;
	v->a[59363] = state(1871);
	v->a[59364] = 2;
	v->a[59365] = sym_concatenation;
	v->a[59366] = sym__extglob_blob;
	v->a[59367] = actions(1630);
	v->a[59368] = 3;
	v->a[59369] = sym_raw_string;
	v->a[59370] = sym_number;
	v->a[59371] = sym_word;
	v->a[59372] = state(1804);
	v->a[59373] = 5;
	v->a[59374] = sym_arithmetic_expansion;
	v->a[59375] = sym_string;
	v->a[59376] = sym_simple_expansion;
	v->a[59377] = sym_expansion;
	v->a[59378] = sym_command_substitution;
	v->a[59379] = 12;
	small_parse_table_2969(v);
}

void	small_parse_table_2969(t_small_parse_table_array *v)
{
	v->a[59380] = actions(3);
	v->a[59381] = 1;
	v->a[59382] = sym_comment;
	v->a[59383] = actions(1074);
	v->a[59384] = 1;
	v->a[59385] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59386] = actions(1076);
	v->a[59387] = 1;
	v->a[59388] = anon_sym_DOLLAR;
	v->a[59389] = actions(1078);
	v->a[59390] = 1;
	v->a[59391] = anon_sym_DQUOTE;
	v->a[59392] = actions(1080);
	v->a[59393] = 1;
	v->a[59394] = anon_sym_DOLLAR_LBRACE;
	v->a[59395] = actions(1082);
	v->a[59396] = 1;
	v->a[59397] = anon_sym_DOLLAR_LPAREN;
	v->a[59398] = actions(1084);
	v->a[59399] = 1;
	small_parse_table_2970(v);
}

/* EOF small_parse_table_593.c */
