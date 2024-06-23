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
	v->a[26300] = 2;
	v->a[26301] = sym_file_descriptor;
	v->a[26302] = sym_variable_name;
	v->a[26303] = state(541);
	v->a[26304] = 5;
	v->a[26305] = sym_arithmetic_expansion;
	v->a[26306] = sym_string;
	v->a[26307] = sym_simple_expansion;
	v->a[26308] = sym_expansion;
	v->a[26309] = sym_command_substitution;
	v->a[26310] = actions(715);
	v->a[26311] = 28;
	v->a[26312] = anon_sym_PIPE;
	v->a[26313] = anon_sym_SEMI_SEMI;
	v->a[26314] = anon_sym_AMP_AMP;
	v->a[26315] = anon_sym_PIPE_PIPE;
	v->a[26316] = anon_sym_LT;
	v->a[26317] = anon_sym_GT;
	v->a[26318] = anon_sym_GT_GT;
	v->a[26319] = anon_sym_AMP_GT;
	small_parse_table_1316(v);
}

void	small_parse_table_1316(t_small_parse_table_array *v)
{
	v->a[26320] = anon_sym_AMP_GT_GT;
	v->a[26321] = anon_sym_LT_AMP;
	v->a[26322] = anon_sym_GT_AMP;
	v->a[26323] = anon_sym_GT_PIPE;
	v->a[26324] = anon_sym_LT_AMP_DASH;
	v->a[26325] = anon_sym_GT_AMP_DASH;
	v->a[26326] = anon_sym_LT_LT;
	v->a[26327] = anon_sym_LT_LT_DASH;
	v->a[26328] = aux_sym_heredoc_redirect_token1;
	v->a[26329] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26330] = anon_sym_AMP;
	v->a[26331] = anon_sym_DOLLAR;
	v->a[26332] = anon_sym_DQUOTE;
	v->a[26333] = sym_raw_string;
	v->a[26334] = sym_number;
	v->a[26335] = anon_sym_DOLLAR_LBRACE;
	v->a[26336] = anon_sym_DOLLAR_LPAREN;
	v->a[26337] = anon_sym_BQUOTE;
	v->a[26338] = sym_word;
	v->a[26339] = anon_sym_SEMI;
	small_parse_table_1317(v);
}

void	small_parse_table_1317(t_small_parse_table_array *v)
{
	v->a[26340] = 11;
	v->a[26341] = actions(3);
	v->a[26342] = 1;
	v->a[26343] = sym_comment;
	v->a[26344] = actions(807);
	v->a[26345] = 1;
	v->a[26346] = anon_sym_PIPE;
	v->a[26347] = actions(811);
	v->a[26348] = 1;
	v->a[26349] = sym_file_descriptor;
	v->a[26350] = actions(852);
	v->a[26351] = 1;
	v->a[26352] = sym_variable_name;
	v->a[26353] = actions(842);
	v->a[26354] = 2;
	v->a[26355] = anon_sym_AMP_AMP;
	v->a[26356] = anon_sym_PIPE_PIPE;
	v->a[26357] = actions(844);
	v->a[26358] = 2;
	v->a[26359] = anon_sym_LT_LT;
	small_parse_table_1318(v);
}

void	small_parse_table_1318(t_small_parse_table_array *v)
{
	v->a[26360] = anon_sym_LT_LT_DASH;
	v->a[26361] = actions(943);
	v->a[26362] = 2;
	v->a[26363] = anon_sym_esac;
	v->a[26364] = anon_sym_SEMI_SEMI;
	v->a[26365] = state(1216);
	v->a[26366] = 2;
	v->a[26367] = sym_variable_assignment;
	v->a[26368] = aux_sym__variable_assignments_repeat1;
	v->a[26369] = actions(949);
	v->a[26370] = 3;
	v->a[26371] = aux_sym_heredoc_redirect_token1;
	v->a[26372] = anon_sym_AMP;
	v->a[26373] = anon_sym_SEMI;
	v->a[26374] = state(1214);
	v->a[26375] = 3;
	v->a[26376] = sym_file_redirect;
	v->a[26377] = sym_heredoc_redirect;
	v->a[26378] = aux_sym_redirected_statement_repeat1;
	v->a[26379] = actions(805);
	small_parse_table_1319(v);
}

void	small_parse_table_1319(t_small_parse_table_array *v)
{
	v->a[26380] = 19;
	v->a[26381] = anon_sym_LT;
	v->a[26382] = anon_sym_GT;
	v->a[26383] = anon_sym_GT_GT;
	v->a[26384] = anon_sym_AMP_GT;
	v->a[26385] = anon_sym_AMP_GT_GT;
	v->a[26386] = anon_sym_LT_AMP;
	v->a[26387] = anon_sym_GT_AMP;
	v->a[26388] = anon_sym_GT_PIPE;
	v->a[26389] = anon_sym_LT_AMP_DASH;
	v->a[26390] = anon_sym_GT_AMP_DASH;
	v->a[26391] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26392] = anon_sym_DOLLAR;
	v->a[26393] = anon_sym_DQUOTE;
	v->a[26394] = sym_raw_string;
	v->a[26395] = sym_number;
	v->a[26396] = anon_sym_DOLLAR_LBRACE;
	v->a[26397] = anon_sym_DOLLAR_LPAREN;
	v->a[26398] = anon_sym_BQUOTE;
	v->a[26399] = sym_word;
	small_parse_table_1320(v);
}

/* EOF small_parse_table_263.c */
