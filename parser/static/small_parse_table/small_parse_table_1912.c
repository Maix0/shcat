/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1912.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9560(t_small_parse_table_array *v)
{
	v->a[191200] = sym_ansi_c_string;
	v->a[191201] = actions(8496);
	v->a[191202] = 2;
	v->a[191203] = anon_sym_LT_LPAREN;
	v->a[191204] = anon_sym_GT_LPAREN;
	v->a[191205] = state(2103);
	v->a[191206] = 2;
	v->a[191207] = sym_concatenation;
	v->a[191208] = sym_array;
	v->a[191209] = state(1391);
	v->a[191210] = 9;
	v->a[191211] = sym_arithmetic_expansion;
	v->a[191212] = sym_brace_expression;
	v->a[191213] = sym_string;
	v->a[191214] = sym_translated_string;
	v->a[191215] = sym_number;
	v->a[191216] = sym_simple_expansion;
	v->a[191217] = sym_expansion;
	v->a[191218] = sym_command_substitution;
	v->a[191219] = sym_process_substitution;
	small_parse_table_9561(v);
}

void	small_parse_table_9561(t_small_parse_table_array *v)
{
	v->a[191220] = 3;
	v->a[191221] = actions(71);
	v->a[191222] = 1;
	v->a[191223] = sym_comment;
	v->a[191224] = actions(1340);
	v->a[191225] = 11;
	v->a[191226] = anon_sym_LT;
	v->a[191227] = anon_sym_GT;
	v->a[191228] = anon_sym_AMP_GT;
	v->a[191229] = anon_sym_LT_AMP;
	v->a[191230] = anon_sym_GT_AMP;
	v->a[191231] = anon_sym_DOLLAR;
	v->a[191232] = aux_sym_number_token1;
	v->a[191233] = aux_sym_number_token2;
	v->a[191234] = anon_sym_DOLLAR_LPAREN;
	v->a[191235] = anon_sym_BQUOTE;
	v->a[191236] = sym_word;
	v->a[191237] = actions(1342);
	v->a[191238] = 23;
	v->a[191239] = sym_file_descriptor;
	small_parse_table_9562(v);
}

void	small_parse_table_9562(t_small_parse_table_array *v)
{
	v->a[191240] = sym__concat;
	v->a[191241] = sym_variable_name;
	v->a[191242] = sym_test_operator;
	v->a[191243] = sym__brace_start;
	v->a[191244] = anon_sym_LPAREN_LPAREN;
	v->a[191245] = anon_sym_GT_GT;
	v->a[191246] = anon_sym_AMP_GT_GT;
	v->a[191247] = anon_sym_GT_PIPE;
	v->a[191248] = anon_sym_LT_AMP_DASH;
	v->a[191249] = anon_sym_GT_AMP_DASH;
	v->a[191250] = anon_sym_LT_LT_LT;
	v->a[191251] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[191252] = anon_sym_DOLLAR_LBRACK;
	v->a[191253] = aux_sym_concatenation_token1;
	v->a[191254] = sym__special_character;
	v->a[191255] = anon_sym_DQUOTE;
	v->a[191256] = sym_raw_string;
	v->a[191257] = sym_ansi_c_string;
	v->a[191258] = anon_sym_DOLLAR_LBRACE;
	v->a[191259] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9563(v);
}

void	small_parse_table_9563(t_small_parse_table_array *v)
{
	v->a[191260] = anon_sym_LT_LPAREN;
	v->a[191261] = anon_sym_GT_LPAREN;
	v->a[191262] = 3;
	v->a[191263] = actions(71);
	v->a[191264] = 1;
	v->a[191265] = sym_comment;
	v->a[191266] = actions(1328);
	v->a[191267] = 11;
	v->a[191268] = anon_sym_LT;
	v->a[191269] = anon_sym_GT;
	v->a[191270] = anon_sym_AMP_GT;
	v->a[191271] = anon_sym_LT_AMP;
	v->a[191272] = anon_sym_GT_AMP;
	v->a[191273] = anon_sym_DOLLAR;
	v->a[191274] = aux_sym_number_token1;
	v->a[191275] = aux_sym_number_token2;
	v->a[191276] = anon_sym_DOLLAR_LPAREN;
	v->a[191277] = anon_sym_BQUOTE;
	v->a[191278] = sym_word;
	v->a[191279] = actions(1330);
	small_parse_table_9564(v);
}

void	small_parse_table_9564(t_small_parse_table_array *v)
{
	v->a[191280] = 23;
	v->a[191281] = sym_file_descriptor;
	v->a[191282] = sym__concat;
	v->a[191283] = sym_variable_name;
	v->a[191284] = sym_test_operator;
	v->a[191285] = sym__brace_start;
	v->a[191286] = anon_sym_LPAREN_LPAREN;
	v->a[191287] = anon_sym_GT_GT;
	v->a[191288] = anon_sym_AMP_GT_GT;
	v->a[191289] = anon_sym_GT_PIPE;
	v->a[191290] = anon_sym_LT_AMP_DASH;
	v->a[191291] = anon_sym_GT_AMP_DASH;
	v->a[191292] = anon_sym_LT_LT_LT;
	v->a[191293] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[191294] = anon_sym_DOLLAR_LBRACK;
	v->a[191295] = aux_sym_concatenation_token1;
	v->a[191296] = sym__special_character;
	v->a[191297] = anon_sym_DQUOTE;
	v->a[191298] = sym_raw_string;
	v->a[191299] = sym_ansi_c_string;
	small_parse_table_9565(v);
}

/* EOF small_parse_table_1912.c */
