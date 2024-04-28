/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2002.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10010(t_small_parse_table_array *v)
{
	v->a[200200] = anon_sym_DOLLAR_LBRACE;
	v->a[200201] = actions(9134);
	v->a[200202] = 1;
	v->a[200203] = anon_sym_DOLLAR_LPAREN;
	v->a[200204] = actions(9136);
	v->a[200205] = 1;
	v->a[200206] = anon_sym_BQUOTE;
	v->a[200207] = actions(9138);
	v->a[200208] = 1;
	v->a[200209] = anon_sym_DOLLAR_BQUOTE;
	v->a[200210] = actions(9142);
	v->a[200211] = 1;
	v->a[200212] = sym_test_operator;
	v->a[200213] = actions(9144);
	v->a[200214] = 1;
	v->a[200215] = sym__brace_start;
	v->a[200216] = state(2457);
	v->a[200217] = 1;
	v->a[200218] = aux_sym__literal_repeat1;
	v->a[200219] = actions(9116);
	small_parse_table_10011(v);
}

void	small_parse_table_10011(t_small_parse_table_array *v)
{
	v->a[200220] = 2;
	v->a[200221] = anon_sym_LPAREN_LPAREN;
	v->a[200222] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200223] = actions(9126);
	v->a[200224] = 2;
	v->a[200225] = sym_raw_string;
	v->a[200226] = sym_ansi_c_string;
	v->a[200227] = actions(9140);
	v->a[200228] = 2;
	v->a[200229] = anon_sym_LT_LPAREN;
	v->a[200230] = anon_sym_GT_LPAREN;
	v->a[200231] = state(823);
	v->a[200232] = 2;
	v->a[200233] = sym_concatenation;
	v->a[200234] = aux_sym_for_statement_repeat1;
	v->a[200235] = state(2271);
	v->a[200236] = 9;
	v->a[200237] = sym_arithmetic_expansion;
	v->a[200238] = sym_brace_expression;
	v->a[200239] = sym_string;
	small_parse_table_10012(v);
}

void	small_parse_table_10012(t_small_parse_table_array *v)
{
	v->a[200240] = sym_translated_string;
	v->a[200241] = sym_number;
	v->a[200242] = sym_simple_expansion;
	v->a[200243] = sym_expansion;
	v->a[200244] = sym_command_substitution;
	v->a[200245] = sym_process_substitution;
	v->a[200246] = 19;
	v->a[200247] = actions(3);
	v->a[200248] = 1;
	v->a[200249] = sym_comment;
	v->a[200250] = actions(363);
	v->a[200251] = 1;
	v->a[200252] = anon_sym_DOLLAR_LBRACK;
	v->a[200253] = actions(367);
	v->a[200254] = 1;
	v->a[200255] = anon_sym_DOLLAR;
	v->a[200256] = actions(371);
	v->a[200257] = 1;
	v->a[200258] = anon_sym_DQUOTE;
	v->a[200259] = actions(375);
	small_parse_table_10013(v);
}

void	small_parse_table_10013(t_small_parse_table_array *v)
{
	v->a[200260] = 1;
	v->a[200261] = aux_sym_number_token1;
	v->a[200262] = actions(377);
	v->a[200263] = 1;
	v->a[200264] = aux_sym_number_token2;
	v->a[200265] = actions(379);
	v->a[200266] = 1;
	v->a[200267] = anon_sym_DOLLAR_LBRACE;
	v->a[200268] = actions(381);
	v->a[200269] = 1;
	v->a[200270] = anon_sym_DOLLAR_LPAREN;
	v->a[200271] = actions(385);
	v->a[200272] = 1;
	v->a[200273] = anon_sym_DOLLAR_BQUOTE;
	v->a[200274] = actions(391);
	v->a[200275] = 1;
	v->a[200276] = sym__brace_start;
	v->a[200277] = actions(5809);
	v->a[200278] = 1;
	v->a[200279] = anon_sym_BQUOTE;
	small_parse_table_10014(v);
}

void	small_parse_table_10014(t_small_parse_table_array *v)
{
	v->a[200280] = actions(8836);
	v->a[200281] = 1;
	v->a[200282] = sym_word;
	v->a[200283] = actions(8844);
	v->a[200284] = 1;
	v->a[200285] = sym_test_operator;
	v->a[200286] = actions(9146);
	v->a[200287] = 1;
	v->a[200288] = anon_sym_RBRACK;
	v->a[200289] = actions(352);
	v->a[200290] = 2;
	v->a[200291] = anon_sym_LPAREN_LPAREN;
	v->a[200292] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200293] = actions(387);
	v->a[200294] = 2;
	v->a[200295] = anon_sym_LT_LPAREN;
	v->a[200296] = anon_sym_GT_LPAREN;
	v->a[200297] = actions(8840);
	v->a[200298] = 2;
	v->a[200299] = sym__special_character;
	small_parse_table_10015(v);
}

/* EOF small_parse_table_2002.c */
