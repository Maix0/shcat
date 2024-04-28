/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1933.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9665(t_small_parse_table_array *v)
{
	v->a[193300] = anon_sym_LT_LPAREN;
	v->a[193301] = anon_sym_GT_LPAREN;
	v->a[193302] = sym_word;
	v->a[193303] = 21;
	v->a[193304] = actions(71);
	v->a[193305] = 1;
	v->a[193306] = sym_comment;
	v->a[193307] = actions(8565);
	v->a[193308] = 1;
	v->a[193309] = sym_word;
	v->a[193310] = actions(8571);
	v->a[193311] = 1;
	v->a[193312] = anon_sym_DOLLAR_LBRACK;
	v->a[193313] = actions(8573);
	v->a[193314] = 1;
	v->a[193315] = anon_sym_DOLLAR;
	v->a[193316] = actions(8575);
	v->a[193317] = 1;
	v->a[193318] = sym__special_character;
	v->a[193319] = actions(8577);
	small_parse_table_9666(v);
}

void	small_parse_table_9666(t_small_parse_table_array *v)
{
	v->a[193320] = 1;
	v->a[193321] = anon_sym_DQUOTE;
	v->a[193322] = actions(8581);
	v->a[193323] = 1;
	v->a[193324] = aux_sym_number_token1;
	v->a[193325] = actions(8583);
	v->a[193326] = 1;
	v->a[193327] = aux_sym_number_token2;
	v->a[193328] = actions(8585);
	v->a[193329] = 1;
	v->a[193330] = anon_sym_DOLLAR_LBRACE;
	v->a[193331] = actions(8587);
	v->a[193332] = 1;
	v->a[193333] = anon_sym_DOLLAR_LPAREN;
	v->a[193334] = actions(8589);
	v->a[193335] = 1;
	v->a[193336] = anon_sym_BQUOTE;
	v->a[193337] = actions(8591);
	v->a[193338] = 1;
	v->a[193339] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9667(v);
}

void	small_parse_table_9667(t_small_parse_table_array *v)
{
	v->a[193340] = actions(8595);
	v->a[193341] = 1;
	v->a[193342] = sym_test_operator;
	v->a[193343] = actions(8597);
	v->a[193344] = 1;
	v->a[193345] = sym__brace_start;
	v->a[193346] = actions(8631);
	v->a[193347] = 1;
	v->a[193348] = anon_sym_RPAREN;
	v->a[193349] = state(5365);
	v->a[193350] = 1;
	v->a[193351] = aux_sym__literal_repeat1;
	v->a[193352] = actions(8567);
	v->a[193353] = 2;
	v->a[193354] = anon_sym_LPAREN_LPAREN;
	v->a[193355] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193356] = actions(8579);
	v->a[193357] = 2;
	v->a[193358] = sym_raw_string;
	v->a[193359] = sym_ansi_c_string;
	small_parse_table_9668(v);
}

void	small_parse_table_9668(t_small_parse_table_array *v)
{
	v->a[193360] = actions(8593);
	v->a[193361] = 2;
	v->a[193362] = anon_sym_LT_LPAREN;
	v->a[193363] = anon_sym_GT_LPAREN;
	v->a[193364] = state(3564);
	v->a[193365] = 2;
	v->a[193366] = sym_concatenation;
	v->a[193367] = aux_sym_for_statement_repeat1;
	v->a[193368] = state(5045);
	v->a[193369] = 9;
	v->a[193370] = sym_arithmetic_expansion;
	v->a[193371] = sym_brace_expression;
	v->a[193372] = sym_string;
	v->a[193373] = sym_translated_string;
	v->a[193374] = sym_number;
	v->a[193375] = sym_simple_expansion;
	v->a[193376] = sym_expansion;
	v->a[193377] = sym_command_substitution;
	v->a[193378] = sym_process_substitution;
	v->a[193379] = 21;
	small_parse_table_9669(v);
}

void	small_parse_table_9669(t_small_parse_table_array *v)
{
	v->a[193380] = actions(71);
	v->a[193381] = 1;
	v->a[193382] = sym_comment;
	v->a[193383] = actions(8565);
	v->a[193384] = 1;
	v->a[193385] = sym_word;
	v->a[193386] = actions(8571);
	v->a[193387] = 1;
	v->a[193388] = anon_sym_DOLLAR_LBRACK;
	v->a[193389] = actions(8573);
	v->a[193390] = 1;
	v->a[193391] = anon_sym_DOLLAR;
	v->a[193392] = actions(8575);
	v->a[193393] = 1;
	v->a[193394] = sym__special_character;
	v->a[193395] = actions(8577);
	v->a[193396] = 1;
	v->a[193397] = anon_sym_DQUOTE;
	v->a[193398] = actions(8581);
	v->a[193399] = 1;
	small_parse_table_9670(v);
}

/* EOF small_parse_table_1933.c */
