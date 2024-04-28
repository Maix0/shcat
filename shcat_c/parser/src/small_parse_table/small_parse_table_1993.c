/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1993.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9965(t_small_parse_table_array *v)
{
	v->a[199300] = sym_process_substitution;
	v->a[199301] = 20;
	v->a[199302] = actions(71);
	v->a[199303] = 1;
	v->a[199304] = sym_comment;
	v->a[199305] = actions(3606);
	v->a[199306] = 1;
	v->a[199307] = sym_word;
	v->a[199308] = actions(3612);
	v->a[199309] = 1;
	v->a[199310] = anon_sym_DOLLAR;
	v->a[199311] = actions(3616);
	v->a[199312] = 1;
	v->a[199313] = aux_sym_number_token1;
	v->a[199314] = actions(3618);
	v->a[199315] = 1;
	v->a[199316] = aux_sym_number_token2;
	v->a[199317] = actions(3622);
	v->a[199318] = 1;
	v->a[199319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9966(v);
}

void	small_parse_table_9966(t_small_parse_table_array *v)
{
	v->a[199320] = actions(3630);
	v->a[199321] = 1;
	v->a[199322] = sym_test_operator;
	v->a[199323] = actions(3632);
	v->a[199324] = 1;
	v->a[199325] = sym__brace_start;
	v->a[199326] = actions(8850);
	v->a[199327] = 1;
	v->a[199328] = anon_sym_DOLLAR_LBRACK;
	v->a[199329] = actions(8854);
	v->a[199330] = 1;
	v->a[199331] = anon_sym_DQUOTE;
	v->a[199332] = actions(8858);
	v->a[199333] = 1;
	v->a[199334] = anon_sym_DOLLAR_LBRACE;
	v->a[199335] = actions(8860);
	v->a[199336] = 1;
	v->a[199337] = anon_sym_BQUOTE;
	v->a[199338] = actions(8862);
	v->a[199339] = 1;
	small_parse_table_9967(v);
}

void	small_parse_table_9967(t_small_parse_table_array *v)
{
	v->a[199340] = anon_sym_DOLLAR_BQUOTE;
	v->a[199341] = actions(9030);
	v->a[199342] = 1;
	v->a[199343] = sym__special_character;
	v->a[199344] = state(2270);
	v->a[199345] = 1;
	v->a[199346] = aux_sym__literal_repeat1;
	v->a[199347] = actions(8848);
	v->a[199348] = 2;
	v->a[199349] = anon_sym_LPAREN_LPAREN;
	v->a[199350] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199351] = actions(8864);
	v->a[199352] = 2;
	v->a[199353] = anon_sym_LT_LPAREN;
	v->a[199354] = anon_sym_GT_LPAREN;
	v->a[199355] = actions(9032);
	v->a[199356] = 2;
	v->a[199357] = sym_raw_string;
	v->a[199358] = sym_ansi_c_string;
	v->a[199359] = state(714);
	small_parse_table_9968(v);
}

void	small_parse_table_9968(t_small_parse_table_array *v)
{
	v->a[199360] = 2;
	v->a[199361] = sym_concatenation;
	v->a[199362] = aux_sym_for_statement_repeat1;
	v->a[199363] = state(1839);
	v->a[199364] = 9;
	v->a[199365] = sym_arithmetic_expansion;
	v->a[199366] = sym_brace_expression;
	v->a[199367] = sym_string;
	v->a[199368] = sym_translated_string;
	v->a[199369] = sym_number;
	v->a[199370] = sym_simple_expansion;
	v->a[199371] = sym_expansion;
	v->a[199372] = sym_command_substitution;
	v->a[199373] = sym_process_substitution;
	v->a[199374] = 20;
	v->a[199375] = actions(71);
	v->a[199376] = 1;
	v->a[199377] = sym_comment;
	v->a[199378] = actions(8268);
	v->a[199379] = 1;
	small_parse_table_9969(v);
}

void	small_parse_table_9969(t_small_parse_table_array *v)
{
	v->a[199380] = anon_sym_DOLLAR_LBRACK;
	v->a[199381] = actions(8270);
	v->a[199382] = 1;
	v->a[199383] = anon_sym_DOLLAR;
	v->a[199384] = actions(8272);
	v->a[199385] = 1;
	v->a[199386] = sym__special_character;
	v->a[199387] = actions(8274);
	v->a[199388] = 1;
	v->a[199389] = anon_sym_DQUOTE;
	v->a[199390] = actions(8278);
	v->a[199391] = 1;
	v->a[199392] = aux_sym_number_token1;
	v->a[199393] = actions(8280);
	v->a[199394] = 1;
	v->a[199395] = aux_sym_number_token2;
	v->a[199396] = actions(8282);
	v->a[199397] = 1;
	v->a[199398] = anon_sym_DOLLAR_LBRACE;
	v->a[199399] = actions(8284);
	small_parse_table_9970(v);
}

/* EOF small_parse_table_1993.c */
