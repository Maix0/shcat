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
	v->a[69300] = sym_expansion;
	v->a[69301] = sym_command_substitution;
	v->a[69302] = 10;
	v->a[69303] = actions(3);
	v->a[69304] = 1;
	v->a[69305] = sym_comment;
	v->a[69306] = actions(2400);
	v->a[69307] = 1;
	v->a[69308] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69309] = actions(2404);
	v->a[69310] = 1;
	v->a[69311] = anon_sym_DQUOTE;
	v->a[69312] = actions(2406);
	v->a[69313] = 1;
	v->a[69314] = anon_sym_DOLLAR_LBRACE;
	v->a[69315] = actions(2408);
	v->a[69316] = 1;
	v->a[69317] = anon_sym_DOLLAR_LPAREN;
	v->a[69318] = actions(2410);
	v->a[69319] = 1;
	small_parse_table_3466(v);
}

void	small_parse_table_3466(t_small_parse_table_array *v)
{
	v->a[69320] = anon_sym_BQUOTE;
	v->a[69321] = actions(2532);
	v->a[69322] = 1;
	v->a[69323] = anon_sym_DOLLAR;
	v->a[69324] = state(370);
	v->a[69325] = 2;
	v->a[69326] = sym_concatenation;
	v->a[69327] = aux_sym_for_statement_repeat1;
	v->a[69328] = actions(2714);
	v->a[69329] = 3;
	v->a[69330] = sym_raw_string;
	v->a[69331] = sym_number;
	v->a[69332] = sym_word;
	v->a[69333] = state(751);
	v->a[69334] = 5;
	v->a[69335] = sym_arithmetic_expansion;
	v->a[69336] = sym_string;
	v->a[69337] = sym_simple_expansion;
	v->a[69338] = sym_expansion;
	v->a[69339] = sym_command_substitution;
	small_parse_table_3467(v);
}

void	small_parse_table_3467(t_small_parse_table_array *v)
{
	v->a[69340] = 10;
	v->a[69341] = actions(3);
	v->a[69342] = 1;
	v->a[69343] = sym_comment;
	v->a[69344] = actions(871);
	v->a[69345] = 1;
	v->a[69346] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69347] = actions(873);
	v->a[69348] = 1;
	v->a[69349] = anon_sym_DOLLAR;
	v->a[69350] = actions(875);
	v->a[69351] = 1;
	v->a[69352] = anon_sym_DQUOTE;
	v->a[69353] = actions(877);
	v->a[69354] = 1;
	v->a[69355] = anon_sym_DOLLAR_LBRACE;
	v->a[69356] = actions(879);
	v->a[69357] = 1;
	v->a[69358] = anon_sym_DOLLAR_LPAREN;
	v->a[69359] = actions(881);
	small_parse_table_3468(v);
}

void	small_parse_table_3468(t_small_parse_table_array *v)
{
	v->a[69360] = 1;
	v->a[69361] = anon_sym_BQUOTE;
	v->a[69362] = state(246);
	v->a[69363] = 2;
	v->a[69364] = sym_concatenation;
	v->a[69365] = aux_sym_for_statement_repeat1;
	v->a[69366] = actions(869);
	v->a[69367] = 3;
	v->a[69368] = sym_raw_string;
	v->a[69369] = sym_number;
	v->a[69370] = sym_word;
	v->a[69371] = state(485);
	v->a[69372] = 5;
	v->a[69373] = sym_arithmetic_expansion;
	v->a[69374] = sym_string;
	v->a[69375] = sym_simple_expansion;
	v->a[69376] = sym_expansion;
	v->a[69377] = sym_command_substitution;
	v->a[69378] = 10;
	v->a[69379] = actions(3);
	small_parse_table_3469(v);
}

void	small_parse_table_3469(t_small_parse_table_array *v)
{
	v->a[69380] = 1;
	v->a[69381] = sym_comment;
	v->a[69382] = actions(1074);
	v->a[69383] = 1;
	v->a[69384] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69385] = actions(1076);
	v->a[69386] = 1;
	v->a[69387] = anon_sym_DOLLAR;
	v->a[69388] = actions(1078);
	v->a[69389] = 1;
	v->a[69390] = anon_sym_DQUOTE;
	v->a[69391] = actions(1080);
	v->a[69392] = 1;
	v->a[69393] = anon_sym_DOLLAR_LBRACE;
	v->a[69394] = actions(1082);
	v->a[69395] = 1;
	v->a[69396] = anon_sym_DOLLAR_LPAREN;
	v->a[69397] = actions(1084);
	v->a[69398] = 1;
	v->a[69399] = anon_sym_BQUOTE;
	small_parse_table_3470(v);
}

/* EOF small_parse_table_693.c */
