/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1653.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8265(t_small_parse_table_array *v)
{
	v->a[165300] = sym_translated_string;
	v->a[165301] = sym_number;
	v->a[165302] = sym_simple_expansion;
	v->a[165303] = sym_expansion;
	v->a[165304] = sym_command_substitution;
	v->a[165305] = sym_process_substitution;
	v->a[165306] = 25;
	v->a[165307] = actions(71);
	v->a[165308] = 1;
	v->a[165309] = sym_comment;
	v->a[165310] = actions(6474);
	v->a[165311] = 1;
	v->a[165312] = sym_word;
	v->a[165313] = actions(6480);
	v->a[165314] = 1;
	v->a[165315] = anon_sym_LPAREN;
	v->a[165316] = actions(6488);
	v->a[165317] = 1;
	v->a[165318] = anon_sym_DOLLAR;
	v->a[165319] = actions(6494);
	small_parse_table_8266(v);
}

void	small_parse_table_8266(t_small_parse_table_array *v)
{
	v->a[165320] = 1;
	v->a[165321] = aux_sym_number_token1;
	v->a[165322] = actions(6496);
	v->a[165323] = 1;
	v->a[165324] = aux_sym_number_token2;
	v->a[165325] = actions(6500);
	v->a[165326] = 1;
	v->a[165327] = anon_sym_DOLLAR_LPAREN;
	v->a[165328] = actions(6508);
	v->a[165329] = 1;
	v->a[165330] = sym_test_operator;
	v->a[165331] = actions(6510);
	v->a[165332] = 1;
	v->a[165333] = sym_extglob_pattern;
	v->a[165334] = actions(6512);
	v->a[165335] = 1;
	v->a[165336] = sym__brace_start;
	v->a[165337] = actions(6610);
	v->a[165338] = 1;
	v->a[165339] = anon_sym_esac;
	small_parse_table_8267(v);
}

void	small_parse_table_8267(t_small_parse_table_array *v)
{
	v->a[165340] = actions(7226);
	v->a[165341] = 1;
	v->a[165342] = anon_sym_DOLLAR_LBRACK;
	v->a[165343] = actions(7228);
	v->a[165344] = 1;
	v->a[165345] = sym__special_character;
	v->a[165346] = actions(7230);
	v->a[165347] = 1;
	v->a[165348] = anon_sym_DQUOTE;
	v->a[165349] = actions(7234);
	v->a[165350] = 1;
	v->a[165351] = anon_sym_DOLLAR_LBRACE;
	v->a[165352] = actions(7236);
	v->a[165353] = 1;
	v->a[165354] = anon_sym_BQUOTE;
	v->a[165355] = actions(7238);
	v->a[165356] = 1;
	v->a[165357] = anon_sym_DOLLAR_BQUOTE;
	v->a[165358] = state(6426);
	v->a[165359] = 1;
	small_parse_table_8268(v);
}

void	small_parse_table_8268(t_small_parse_table_array *v)
{
	v->a[165360] = aux_sym__literal_repeat1;
	v->a[165361] = state(7451);
	v->a[165362] = 1;
	v->a[165363] = sym_last_case_item;
	v->a[165364] = actions(7224);
	v->a[165365] = 2;
	v->a[165366] = anon_sym_LPAREN_LPAREN;
	v->a[165367] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[165368] = actions(7232);
	v->a[165369] = 2;
	v->a[165370] = sym_raw_string;
	v->a[165371] = sym_ansi_c_string;
	v->a[165372] = actions(7240);
	v->a[165373] = 2;
	v->a[165374] = anon_sym_LT_LPAREN;
	v->a[165375] = anon_sym_GT_LPAREN;
	v->a[165376] = state(3420);
	v->a[165377] = 2;
	v->a[165378] = sym_case_item;
	v->a[165379] = aux_sym_case_statement_repeat1;
	small_parse_table_8269(v);
}

void	small_parse_table_8269(t_small_parse_table_array *v)
{
	v->a[165380] = state(6695);
	v->a[165381] = 2;
	v->a[165382] = sym_concatenation;
	v->a[165383] = sym__extglob_blob;
	v->a[165384] = state(6303);
	v->a[165385] = 9;
	v->a[165386] = sym_arithmetic_expansion;
	v->a[165387] = sym_brace_expression;
	v->a[165388] = sym_string;
	v->a[165389] = sym_translated_string;
	v->a[165390] = sym_number;
	v->a[165391] = sym_simple_expansion;
	v->a[165392] = sym_expansion;
	v->a[165393] = sym_command_substitution;
	v->a[165394] = sym_process_substitution;
	v->a[165395] = 8;
	v->a[165396] = actions(71);
	v->a[165397] = 1;
	v->a[165398] = sym_comment;
	v->a[165399] = actions(7430);
	small_parse_table_8270(v);
}

/* EOF small_parse_table_1653.c */
