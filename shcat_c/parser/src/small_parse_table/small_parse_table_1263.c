/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1263.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6315(t_small_parse_table_array *v)
{
	v->a[126300] = anon_sym_LT;
	v->a[126301] = anon_sym_GT;
	v->a[126302] = anon_sym_LT_LT;
	v->a[126303] = anon_sym_AMP_GT;
	v->a[126304] = anon_sym_LT_AMP;
	v->a[126305] = anon_sym_GT_AMP;
	v->a[126306] = anon_sym_DOLLAR;
	v->a[126307] = aux_sym_number_token1;
	v->a[126308] = aux_sym_number_token2;
	v->a[126309] = anon_sym_DOLLAR_LPAREN;
	v->a[126310] = anon_sym_BQUOTE;
	v->a[126311] = aux_sym__simple_variable_name_token1;
	v->a[126312] = sym_word;
	v->a[126313] = actions(5069);
	v->a[126314] = 24;
	v->a[126315] = sym_file_descriptor;
	v->a[126316] = sym_variable_name;
	v->a[126317] = sym_test_operator;
	v->a[126318] = sym__brace_start;
	v->a[126319] = anon_sym_LPAREN_LPAREN;
	small_parse_table_6316(v);
}

void	small_parse_table_6316(t_small_parse_table_array *v)
{
	v->a[126320] = anon_sym_PIPE_PIPE;
	v->a[126321] = anon_sym_AMP_AMP;
	v->a[126322] = anon_sym_GT_GT;
	v->a[126323] = anon_sym_PIPE_AMP;
	v->a[126324] = anon_sym_AMP_GT_GT;
	v->a[126325] = anon_sym_GT_PIPE;
	v->a[126326] = anon_sym_LT_AMP_DASH;
	v->a[126327] = anon_sym_GT_AMP_DASH;
	v->a[126328] = anon_sym_LT_LT_DASH;
	v->a[126329] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126330] = anon_sym_DOLLAR_LBRACK;
	v->a[126331] = sym__special_character;
	v->a[126332] = anon_sym_DQUOTE;
	v->a[126333] = sym_raw_string;
	v->a[126334] = sym_ansi_c_string;
	v->a[126335] = anon_sym_DOLLAR_LBRACE;
	v->a[126336] = anon_sym_DOLLAR_BQUOTE;
	v->a[126337] = anon_sym_LT_LPAREN;
	v->a[126338] = anon_sym_GT_LPAREN;
	v->a[126339] = 5;
	small_parse_table_6317(v);
}

void	small_parse_table_6317(t_small_parse_table_array *v)
{
	v->a[126340] = actions(71);
	v->a[126341] = 1;
	v->a[126342] = sym_comment;
	v->a[126343] = state(2426);
	v->a[126344] = 1;
	v->a[126345] = aux_sym_concatenation_repeat1;
	v->a[126346] = actions(6564);
	v->a[126347] = 2;
	v->a[126348] = sym__concat;
	v->a[126349] = aux_sym_concatenation_token1;
	v->a[126350] = actions(5373);
	v->a[126351] = 14;
	v->a[126352] = anon_sym_PIPE;
	v->a[126353] = anon_sym_LT;
	v->a[126354] = anon_sym_GT;
	v->a[126355] = anon_sym_LT_LT;
	v->a[126356] = anon_sym_AMP_GT;
	v->a[126357] = anon_sym_LT_AMP;
	v->a[126358] = anon_sym_GT_AMP;
	v->a[126359] = anon_sym_DOLLAR;
	small_parse_table_6318(v);
}

void	small_parse_table_6318(t_small_parse_table_array *v)
{
	v->a[126360] = aux_sym_number_token1;
	v->a[126361] = aux_sym_number_token2;
	v->a[126362] = anon_sym_DOLLAR_LPAREN;
	v->a[126363] = anon_sym_BQUOTE;
	v->a[126364] = aux_sym__simple_variable_name_token1;
	v->a[126365] = sym_word;
	v->a[126366] = actions(5375);
	v->a[126367] = 24;
	v->a[126368] = sym_file_descriptor;
	v->a[126369] = sym_variable_name;
	v->a[126370] = sym_test_operator;
	v->a[126371] = sym__brace_start;
	v->a[126372] = anon_sym_LPAREN_LPAREN;
	v->a[126373] = anon_sym_PIPE_PIPE;
	v->a[126374] = anon_sym_AMP_AMP;
	v->a[126375] = anon_sym_GT_GT;
	v->a[126376] = anon_sym_PIPE_AMP;
	v->a[126377] = anon_sym_AMP_GT_GT;
	v->a[126378] = anon_sym_GT_PIPE;
	v->a[126379] = anon_sym_LT_AMP_DASH;
	small_parse_table_6319(v);
}

void	small_parse_table_6319(t_small_parse_table_array *v)
{
	v->a[126380] = anon_sym_GT_AMP_DASH;
	v->a[126381] = anon_sym_LT_LT_DASH;
	v->a[126382] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126383] = anon_sym_DOLLAR_LBRACK;
	v->a[126384] = sym__special_character;
	v->a[126385] = anon_sym_DQUOTE;
	v->a[126386] = sym_raw_string;
	v->a[126387] = sym_ansi_c_string;
	v->a[126388] = anon_sym_DOLLAR_LBRACE;
	v->a[126389] = anon_sym_DOLLAR_BQUOTE;
	v->a[126390] = anon_sym_LT_LPAREN;
	v->a[126391] = anon_sym_GT_LPAREN;
	v->a[126392] = 6;
	v->a[126393] = actions(71);
	v->a[126394] = 1;
	v->a[126395] = sym_comment;
	v->a[126396] = actions(6564);
	v->a[126397] = 1;
	v->a[126398] = aux_sym_concatenation_token1;
	v->a[126399] = actions(6606);
	small_parse_table_6320(v);
}

/* EOF small_parse_table_1263.c */
