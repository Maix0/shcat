/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_693.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3465(t_small_parse_table_array *v)
{
	v->a[69300] = 1;
	v->a[69301] = sym_comment;
	v->a[69302] = actions(1105);
	v->a[69303] = 4;
	v->a[69304] = anon_sym_PIPE;
	v->a[69305] = anon_sym_LT;
	v->a[69306] = anon_sym_GT;
	v->a[69307] = anon_sym_LT_LT;
	v->a[69308] = actions(1110);
	v->a[69309] = 12;
	v->a[69310] = sym_file_descriptor;
	v->a[69311] = sym__concat;
	v->a[69312] = sym_variable_name;
	v->a[69313] = anon_sym_AMP_AMP;
	v->a[69314] = anon_sym_PIPE_PIPE;
	v->a[69315] = anon_sym_GT_GT;
	v->a[69316] = anon_sym_LT_AMP;
	v->a[69317] = anon_sym_GT_AMP;
	v->a[69318] = anon_sym_GT_PIPE;
	v->a[69319] = anon_sym_LT_GT;
	small_parse_table_3466(v);
}

void	small_parse_table_3466(t_small_parse_table_array *v)
{
	v->a[69320] = anon_sym_LT_LT_DASH;
	v->a[69321] = aux_sym_concatenation_token1;
	v->a[69322] = 10;
	v->a[69323] = actions(3);
	v->a[69324] = 1;
	v->a[69325] = sym_comment;
	v->a[69326] = actions(962);
	v->a[69327] = 1;
	v->a[69328] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69329] = actions(964);
	v->a[69330] = 1;
	v->a[69331] = anon_sym_DOLLAR;
	v->a[69332] = actions(966);
	v->a[69333] = 1;
	v->a[69334] = anon_sym_DQUOTE;
	v->a[69335] = actions(968);
	v->a[69336] = 1;
	v->a[69337] = anon_sym_DOLLAR_LBRACE;
	v->a[69338] = actions(970);
	v->a[69339] = 1;
	small_parse_table_3467(v);
}

void	small_parse_table_3467(t_small_parse_table_array *v)
{
	v->a[69340] = anon_sym_DOLLAR_LPAREN;
	v->a[69341] = actions(972);
	v->a[69342] = 1;
	v->a[69343] = anon_sym_BQUOTE;
	v->a[69344] = state(343);
	v->a[69345] = 2;
	v->a[69346] = sym_concatenation;
	v->a[69347] = aux_sym_for_statement_repeat1;
	v->a[69348] = actions(1033);
	v->a[69349] = 3;
	v->a[69350] = sym_raw_string;
	v->a[69351] = sym_number;
	v->a[69352] = sym_word;
	v->a[69353] = state(623);
	v->a[69354] = 5;
	v->a[69355] = sym_arithmetic_expansion;
	v->a[69356] = sym_string;
	v->a[69357] = sym_simple_expansion;
	v->a[69358] = sym_expansion;
	v->a[69359] = sym_command_substitution;
	small_parse_table_3468(v);
}

void	small_parse_table_3468(t_small_parse_table_array *v)
{
	v->a[69360] = 10;
	v->a[69361] = actions(3);
	v->a[69362] = 1;
	v->a[69363] = sym_comment;
	v->a[69364] = actions(962);
	v->a[69365] = 1;
	v->a[69366] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69367] = actions(964);
	v->a[69368] = 1;
	v->a[69369] = anon_sym_DOLLAR;
	v->a[69370] = actions(966);
	v->a[69371] = 1;
	v->a[69372] = anon_sym_DQUOTE;
	v->a[69373] = actions(968);
	v->a[69374] = 1;
	v->a[69375] = anon_sym_DOLLAR_LBRACE;
	v->a[69376] = actions(970);
	v->a[69377] = 1;
	v->a[69378] = anon_sym_DOLLAR_LPAREN;
	v->a[69379] = actions(972);
	small_parse_table_3469(v);
}

void	small_parse_table_3469(t_small_parse_table_array *v)
{
	v->a[69380] = 1;
	v->a[69381] = anon_sym_BQUOTE;
	v->a[69382] = state(341);
	v->a[69383] = 2;
	v->a[69384] = sym_concatenation;
	v->a[69385] = aux_sym_for_statement_repeat1;
	v->a[69386] = actions(1033);
	v->a[69387] = 3;
	v->a[69388] = sym_raw_string;
	v->a[69389] = sym_number;
	v->a[69390] = sym_word;
	v->a[69391] = state(623);
	v->a[69392] = 5;
	v->a[69393] = sym_arithmetic_expansion;
	v->a[69394] = sym_string;
	v->a[69395] = sym_simple_expansion;
	v->a[69396] = sym_expansion;
	v->a[69397] = sym_command_substitution;
	v->a[69398] = 5;
	v->a[69399] = actions(501);
	small_parse_table_3470(v);
}

/* EOF small_parse_table_693.c */
