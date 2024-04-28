/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2133.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10665(t_small_parse_table_array *v)
{
	v->a[213300] = sym_raw_string;
	v->a[213301] = sym_ansi_c_string;
	v->a[213302] = state(4337);
	v->a[213303] = 9;
	v->a[213304] = sym_arithmetic_expansion;
	v->a[213305] = sym_brace_expression;
	v->a[213306] = sym_string;
	v->a[213307] = sym_translated_string;
	v->a[213308] = sym_number;
	v->a[213309] = sym_simple_expansion;
	v->a[213310] = sym_expansion;
	v->a[213311] = sym_command_substitution;
	v->a[213312] = sym_process_substitution;
	v->a[213313] = 18;
	v->a[213314] = actions(3);
	v->a[213315] = 1;
	v->a[213316] = sym_comment;
	v->a[213317] = actions(3793);
	v->a[213318] = 1;
	v->a[213319] = aux_sym_number_token1;
	small_parse_table_10666(v);
}

void	small_parse_table_10666(t_small_parse_table_array *v)
{
	v->a[213320] = actions(3795);
	v->a[213321] = 1;
	v->a[213322] = aux_sym_number_token2;
	v->a[213323] = actions(3799);
	v->a[213324] = 1;
	v->a[213325] = anon_sym_DOLLAR_LPAREN;
	v->a[213326] = actions(3809);
	v->a[213327] = 1;
	v->a[213328] = sym__brace_start;
	v->a[213329] = actions(9636);
	v->a[213330] = 1;
	v->a[213331] = anon_sym_DOLLAR_LBRACK;
	v->a[213332] = actions(9640);
	v->a[213333] = 1;
	v->a[213334] = anon_sym_DQUOTE;
	v->a[213335] = actions(9644);
	v->a[213336] = 1;
	v->a[213337] = anon_sym_DOLLAR_LBRACE;
	v->a[213338] = actions(9646);
	v->a[213339] = 1;
	small_parse_table_10667(v);
}

void	small_parse_table_10667(t_small_parse_table_array *v)
{
	v->a[213340] = anon_sym_BQUOTE;
	v->a[213341] = actions(9648);
	v->a[213342] = 1;
	v->a[213343] = anon_sym_DOLLAR_BQUOTE;
	v->a[213344] = actions(9872);
	v->a[213345] = 1;
	v->a[213346] = sym_word;
	v->a[213347] = actions(9880);
	v->a[213348] = 1;
	v->a[213349] = sym__comment_word;
	v->a[213350] = actions(10164);
	v->a[213351] = 1;
	v->a[213352] = anon_sym_DOLLAR;
	v->a[213353] = actions(9634);
	v->a[213354] = 2;
	v->a[213355] = anon_sym_LPAREN_LPAREN;
	v->a[213356] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[213357] = actions(9650);
	v->a[213358] = 2;
	v->a[213359] = anon_sym_LT_LPAREN;
	small_parse_table_10668(v);
}

void	small_parse_table_10668(t_small_parse_table_array *v)
{
	v->a[213360] = anon_sym_GT_LPAREN;
	v->a[213361] = actions(9876);
	v->a[213362] = 2;
	v->a[213363] = sym_test_operator;
	v->a[213364] = sym__special_character;
	v->a[213365] = actions(9878);
	v->a[213366] = 3;
	v->a[213367] = sym__bare_dollar;
	v->a[213368] = sym_raw_string;
	v->a[213369] = sym_ansi_c_string;
	v->a[213370] = state(4337);
	v->a[213371] = 9;
	v->a[213372] = sym_arithmetic_expansion;
	v->a[213373] = sym_brace_expression;
	v->a[213374] = sym_string;
	v->a[213375] = sym_translated_string;
	v->a[213376] = sym_number;
	v->a[213377] = sym_simple_expansion;
	v->a[213378] = sym_expansion;
	v->a[213379] = sym_command_substitution;
	small_parse_table_10669(v);
}

void	small_parse_table_10669(t_small_parse_table_array *v)
{
	v->a[213380] = sym_process_substitution;
	v->a[213381] = 18;
	v->a[213382] = actions(3);
	v->a[213383] = 1;
	v->a[213384] = sym_comment;
	v->a[213385] = actions(4086);
	v->a[213386] = 1;
	v->a[213387] = aux_sym_number_token1;
	v->a[213388] = actions(4088);
	v->a[213389] = 1;
	v->a[213390] = aux_sym_number_token2;
	v->a[213391] = actions(4092);
	v->a[213392] = 1;
	v->a[213393] = anon_sym_DOLLAR_LPAREN;
	v->a[213394] = actions(4102);
	v->a[213395] = 1;
	v->a[213396] = sym__brace_start;
	v->a[213397] = actions(9306);
	v->a[213398] = 1;
	v->a[213399] = sym_word;
	small_parse_table_10670(v);
}

/* EOF small_parse_table_2133.c */
