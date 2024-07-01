/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_803.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4015(t_small_parse_table_array *v)
{
	v->a[80300] = aux_sym_concatenation_token1;
	v->a[80301] = 10;
	v->a[80302] = actions(3);
	v->a[80303] = 1;
	v->a[80304] = sym_comment;
	v->a[80305] = actions(699);
	v->a[80306] = 1;
	v->a[80307] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80308] = actions(701);
	v->a[80309] = 1;
	v->a[80310] = anon_sym_DOLLAR;
	v->a[80311] = actions(703);
	v->a[80312] = 1;
	v->a[80313] = anon_sym_DQUOTE;
	v->a[80314] = actions(705);
	v->a[80315] = 1;
	v->a[80316] = anon_sym_DOLLAR_LBRACE;
	v->a[80317] = actions(707);
	v->a[80318] = 1;
	v->a[80319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4016(v);
}

void	small_parse_table_4016(t_small_parse_table_array *v)
{
	v->a[80320] = actions(709);
	v->a[80321] = 1;
	v->a[80322] = anon_sym_BQUOTE;
	v->a[80323] = state(289);
	v->a[80324] = 2;
	v->a[80325] = sym_concatenation;
	v->a[80326] = aux_sym_for_statement_repeat1;
	v->a[80327] = actions(1001);
	v->a[80328] = 3;
	v->a[80329] = sym_raw_string;
	v->a[80330] = sym_number;
	v->a[80331] = sym_word;
	v->a[80332] = state(628);
	v->a[80333] = 5;
	v->a[80334] = sym_arithmetic_expansion;
	v->a[80335] = sym_string;
	v->a[80336] = sym_simple_expansion;
	v->a[80337] = sym_expansion;
	v->a[80338] = sym_command_substitution;
	v->a[80339] = 10;
	small_parse_table_4017(v);
}

void	small_parse_table_4017(t_small_parse_table_array *v)
{
	v->a[80340] = actions(3);
	v->a[80341] = 1;
	v->a[80342] = sym_comment;
	v->a[80343] = actions(2587);
	v->a[80344] = 1;
	v->a[80345] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80346] = actions(2591);
	v->a[80347] = 1;
	v->a[80348] = anon_sym_DQUOTE;
	v->a[80349] = actions(2593);
	v->a[80350] = 1;
	v->a[80351] = anon_sym_DOLLAR_LBRACE;
	v->a[80352] = actions(2595);
	v->a[80353] = 1;
	v->a[80354] = anon_sym_DOLLAR_LPAREN;
	v->a[80355] = actions(2597);
	v->a[80356] = 1;
	v->a[80357] = anon_sym_BQUOTE;
	v->a[80358] = actions(2741);
	v->a[80359] = 1;
	small_parse_table_4018(v);
}

void	small_parse_table_4018(t_small_parse_table_array *v)
{
	v->a[80360] = anon_sym_DOLLAR;
	v->a[80361] = state(222);
	v->a[80362] = 2;
	v->a[80363] = sym_concatenation;
	v->a[80364] = aux_sym_for_statement_repeat1;
	v->a[80365] = actions(3114);
	v->a[80366] = 3;
	v->a[80367] = sym_raw_string;
	v->a[80368] = sym_number;
	v->a[80369] = sym_word;
	v->a[80370] = state(507);
	v->a[80371] = 5;
	v->a[80372] = sym_arithmetic_expansion;
	v->a[80373] = sym_string;
	v->a[80374] = sym_simple_expansion;
	v->a[80375] = sym_expansion;
	v->a[80376] = sym_command_substitution;
	v->a[80377] = 8;
	v->a[80378] = actions(870);
	v->a[80379] = 1;
	small_parse_table_4019(v);
}

void	small_parse_table_4019(t_small_parse_table_array *v)
{
	v->a[80380] = sym_comment;
	v->a[80381] = actions(3125);
	v->a[80382] = 1;
	v->a[80383] = sym_file_descriptor;
	v->a[80384] = actions(2247);
	v->a[80385] = 2;
	v->a[80386] = anon_sym_PIPE;
	v->a[80387] = anon_sym_LT_LT;
	v->a[80388] = actions(3119);
	v->a[80389] = 2;
	v->a[80390] = anon_sym_GT_GT;
	v->a[80391] = anon_sym_GT_PIPE;
	v->a[80392] = actions(3122);
	v->a[80393] = 2;
	v->a[80394] = anon_sym_LT_AMP_DASH;
	v->a[80395] = anon_sym_GT_AMP_DASH;
	v->a[80396] = state(1596);
	v->a[80397] = 2;
	v->a[80398] = sym_file_redirect;
	v->a[80399] = aux_sym_redirected_statement_repeat2;
	small_parse_table_4020(v);
}

/* EOF small_parse_table_803.c */
