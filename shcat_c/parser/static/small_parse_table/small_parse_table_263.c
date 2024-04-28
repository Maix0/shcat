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
	v->a[26300] = anon_sym_esac;
	v->a[26301] = anon_sym_SEMI_SEMI;
	v->a[26302] = anon_sym_SEMI_AMP;
	v->a[26303] = anon_sym_SEMI_SEMI_AMP;
	v->a[26304] = anon_sym_LT_LT_DASH;
	v->a[26305] = actions(4247);
	v->a[26306] = 28;
	v->a[26307] = anon_sym_LPAREN_LPAREN;
	v->a[26308] = anon_sym_LT;
	v->a[26309] = anon_sym_GT;
	v->a[26310] = anon_sym_GT_GT;
	v->a[26311] = anon_sym_AMP_GT;
	v->a[26312] = anon_sym_AMP_GT_GT;
	v->a[26313] = anon_sym_LT_AMP;
	v->a[26314] = anon_sym_GT_AMP;
	v->a[26315] = anon_sym_GT_PIPE;
	v->a[26316] = anon_sym_LT_AMP_DASH;
	v->a[26317] = anon_sym_GT_AMP_DASH;
	v->a[26318] = anon_sym_LT_LT_LT;
	v->a[26319] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1316(v);
}

void	small_parse_table_1316(t_small_parse_table_array *v)
{
	v->a[26320] = anon_sym_DOLLAR_LBRACK;
	v->a[26321] = anon_sym_DOLLAR;
	v->a[26322] = sym__special_character;
	v->a[26323] = anon_sym_DQUOTE;
	v->a[26324] = sym_raw_string;
	v->a[26325] = sym_ansi_c_string;
	v->a[26326] = aux_sym_number_token1;
	v->a[26327] = aux_sym_number_token2;
	v->a[26328] = anon_sym_DOLLAR_LBRACE;
	v->a[26329] = anon_sym_DOLLAR_LPAREN;
	v->a[26330] = anon_sym_BQUOTE;
	v->a[26331] = anon_sym_DOLLAR_BQUOTE;
	v->a[26332] = anon_sym_LT_LPAREN;
	v->a[26333] = anon_sym_GT_LPAREN;
	v->a[26334] = sym_word;
	v->a[26335] = 4;
	v->a[26336] = actions(71);
	v->a[26337] = 1;
	v->a[26338] = sym_comment;
	v->a[26339] = actions(2725);
	small_parse_table_1317(v);
}

void	small_parse_table_1317(t_small_parse_table_array *v)
{
	v->a[26340] = 1;
	v->a[26341] = anon_sym_BQUOTE;
	v->a[26342] = actions(2717);
	v->a[26343] = 22;
	v->a[26344] = sym_file_descriptor;
	v->a[26345] = sym_variable_name;
	v->a[26346] = sym_test_operator;
	v->a[26347] = sym__brace_start;
	v->a[26348] = anon_sym_LPAREN_LPAREN;
	v->a[26349] = anon_sym_GT_GT;
	v->a[26350] = anon_sym_LBRACE;
	v->a[26351] = anon_sym_LBRACK_LBRACK;
	v->a[26352] = anon_sym_AMP_GT_GT;
	v->a[26353] = anon_sym_GT_PIPE;
	v->a[26354] = anon_sym_LT_AMP_DASH;
	v->a[26355] = anon_sym_GT_AMP_DASH;
	v->a[26356] = anon_sym_LT_LT_LT;
	v->a[26357] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26358] = anon_sym_DOLLAR_LBRACK;
	v->a[26359] = anon_sym_DQUOTE;
	small_parse_table_1318(v);
}

void	small_parse_table_1318(t_small_parse_table_array *v)
{
	v->a[26360] = sym_raw_string;
	v->a[26361] = sym_ansi_c_string;
	v->a[26362] = anon_sym_DOLLAR_LBRACE;
	v->a[26363] = anon_sym_DOLLAR_BQUOTE;
	v->a[26364] = anon_sym_LT_LPAREN;
	v->a[26365] = anon_sym_GT_LPAREN;
	v->a[26366] = actions(2715);
	v->a[26367] = 28;
	v->a[26368] = anon_sym_for;
	v->a[26369] = anon_sym_select;
	v->a[26370] = anon_sym_LT;
	v->a[26371] = anon_sym_GT;
	v->a[26372] = anon_sym_LPAREN;
	v->a[26373] = anon_sym_while;
	v->a[26374] = anon_sym_until;
	v->a[26375] = anon_sym_if;
	v->a[26376] = anon_sym_case;
	v->a[26377] = anon_sym_function;
	v->a[26378] = anon_sym_BANG;
	v->a[26379] = anon_sym_LBRACK;
	small_parse_table_1319(v);
}

void	small_parse_table_1319(t_small_parse_table_array *v)
{
	v->a[26380] = anon_sym_declare;
	v->a[26381] = anon_sym_typeset;
	v->a[26382] = anon_sym_export;
	v->a[26383] = anon_sym_readonly;
	v->a[26384] = anon_sym_local;
	v->a[26385] = anon_sym_unset;
	v->a[26386] = anon_sym_unsetenv;
	v->a[26387] = anon_sym_AMP_GT;
	v->a[26388] = anon_sym_LT_AMP;
	v->a[26389] = anon_sym_GT_AMP;
	v->a[26390] = anon_sym_DOLLAR;
	v->a[26391] = sym__special_character;
	v->a[26392] = aux_sym_number_token1;
	v->a[26393] = aux_sym_number_token2;
	v->a[26394] = anon_sym_DOLLAR_LPAREN;
	v->a[26395] = sym_word;
	v->a[26396] = 21;
	v->a[26397] = actions(3);
	v->a[26398] = 1;
	v->a[26399] = sym_comment;
	small_parse_table_1320(v);
}

/* EOF small_parse_table_263.c */
