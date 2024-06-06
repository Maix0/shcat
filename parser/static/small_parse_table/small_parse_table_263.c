/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_263.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1315(t_small_parse_table_array *v)
{
	v->a[26300] = 6;
	v->a[26301] = actions(3);
	v->a[26302] = 1;
	v->a[26303] = sym_comment;
	v->a[26304] = actions(3175);
	v->a[26305] = 1;
	v->a[26306] = aux_sym_concatenation_token1;
	v->a[26307] = actions(3244);
	v->a[26308] = 1;
	v->a[26309] = sym__concat;
	v->a[26310] = state(667);
	v->a[26311] = 1;
	v->a[26312] = aux_sym_concatenation_repeat1;
	v->a[26313] = actions(3121);
	v->a[26314] = 4;
	v->a[26315] = sym_file_descriptor;
	v->a[26316] = sym_test_operator;
	v->a[26317] = sym__brace_start;
	v->a[26318] = aux_sym_heredoc_redirect_token1;
	v->a[26319] = actions(3119);
	small_parse_table_1316(v);
}

void	small_parse_table_1316(t_small_parse_table_array *v)
{
	v->a[26320] = 34;
	v->a[26321] = anon_sym_esac;
	v->a[26322] = anon_sym_PIPE;
	v->a[26323] = anon_sym_SEMI_SEMI;
	v->a[26324] = anon_sym_SEMI_AMP;
	v->a[26325] = anon_sym_SEMI_SEMI_AMP;
	v->a[26326] = anon_sym_PIPE_AMP;
	v->a[26327] = anon_sym_AMP_AMP;
	v->a[26328] = anon_sym_PIPE_PIPE;
	v->a[26329] = anon_sym_LT;
	v->a[26330] = anon_sym_GT;
	v->a[26331] = anon_sym_GT_GT;
	v->a[26332] = anon_sym_AMP_GT;
	v->a[26333] = anon_sym_AMP_GT_GT;
	v->a[26334] = anon_sym_LT_AMP;
	v->a[26335] = anon_sym_GT_AMP;
	v->a[26336] = anon_sym_GT_PIPE;
	v->a[26337] = anon_sym_LT_AMP_DASH;
	v->a[26338] = anon_sym_GT_AMP_DASH;
	v->a[26339] = anon_sym_LT_LT;
	small_parse_table_1317(v);
}

void	small_parse_table_1317(t_small_parse_table_array *v)
{
	v->a[26340] = anon_sym_LT_LT_DASH;
	v->a[26341] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26342] = anon_sym_AMP;
	v->a[26343] = anon_sym_DOLLAR;
	v->a[26344] = sym__special_character;
	v->a[26345] = anon_sym_DQUOTE;
	v->a[26346] = sym_raw_string;
	v->a[26347] = aux_sym_number_token1;
	v->a[26348] = aux_sym_number_token2;
	v->a[26349] = anon_sym_DOLLAR_LBRACE;
	v->a[26350] = anon_sym_DOLLAR_LPAREN;
	v->a[26351] = anon_sym_BQUOTE;
	v->a[26352] = anon_sym_DOLLAR_BQUOTE;
	v->a[26353] = sym_word;
	v->a[26354] = anon_sym_SEMI;
	v->a[26355] = 9;
	v->a[26356] = actions(3);
	v->a[26357] = 1;
	v->a[26358] = sym_comment;
	v->a[26359] = actions(2632);
	small_parse_table_1318(v);
}

void	small_parse_table_1318(t_small_parse_table_array *v)
{
	v->a[26360] = 1;
	v->a[26361] = aux_sym_heredoc_redirect_token1;
	v->a[26362] = actions(3241);
	v->a[26363] = 1;
	v->a[26364] = sym_variable_name;
	v->a[26365] = actions(2516);
	v->a[26366] = 2;
	v->a[26367] = anon_sym_PIPE;
	v->a[26368] = anon_sym_PIPE_AMP;
	v->a[26369] = state(2166);
	v->a[26370] = 2;
	v->a[26371] = sym_variable_assignment;
	v->a[26372] = aux_sym_variable_assignments_repeat1;
	v->a[26373] = actions(2526);
	v->a[26374] = 3;
	v->a[26375] = sym_file_descriptor;
	v->a[26376] = sym_test_operator;
	v->a[26377] = sym__brace_start;
	v->a[26378] = state(2295);
	v->a[26379] = 3;
	small_parse_table_1319(v);
}

void	small_parse_table_1319(t_small_parse_table_array *v)
{
	v->a[26380] = sym_file_redirect;
	v->a[26381] = sym_heredoc_redirect;
	v->a[26382] = aux_sym_redirected_statement_repeat1;
	v->a[26383] = actions(2630);
	v->a[26384] = 7;
	v->a[26385] = anon_sym_SEMI_SEMI;
	v->a[26386] = anon_sym_AMP_AMP;
	v->a[26387] = anon_sym_PIPE_PIPE;
	v->a[26388] = anon_sym_LT_LT;
	v->a[26389] = anon_sym_LT_LT_DASH;
	v->a[26390] = anon_sym_AMP;
	v->a[26391] = anon_sym_SEMI;
	v->a[26392] = actions(2512);
	v->a[26393] = 22;
	v->a[26394] = anon_sym_LT;
	v->a[26395] = anon_sym_GT;
	v->a[26396] = anon_sym_GT_GT;
	v->a[26397] = anon_sym_AMP_GT;
	v->a[26398] = anon_sym_AMP_GT_GT;
	v->a[26399] = anon_sym_LT_AMP;
	small_parse_table_1320(v);
}

/* EOF small_parse_table_263.c */
