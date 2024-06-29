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
	v->a[80300] = 1;
	v->a[80301] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80302] = actions(706);
	v->a[80303] = 1;
	v->a[80304] = anon_sym_DOLLAR;
	v->a[80305] = actions(708);
	v->a[80306] = 1;
	v->a[80307] = anon_sym_DQUOTE;
	v->a[80308] = actions(710);
	v->a[80309] = 1;
	v->a[80310] = anon_sym_DOLLAR_LBRACE;
	v->a[80311] = actions(712);
	v->a[80312] = 1;
	v->a[80313] = anon_sym_DOLLAR_LPAREN;
	v->a[80314] = actions(714);
	v->a[80315] = 1;
	v->a[80316] = anon_sym_BQUOTE;
	v->a[80317] = actions(2901);
	v->a[80318] = 1;
	v->a[80319] = sym__bare_dollar;
	small_parse_table_4016(v);
}

void	small_parse_table_4016(t_small_parse_table_array *v)
{
	v->a[80320] = actions(2897);
	v->a[80321] = 5;
	v->a[80322] = aux_sym_concatenation_token1;
	v->a[80323] = sym_raw_string;
	v->a[80324] = sym_number;
	v->a[80325] = sym__comment_word;
	v->a[80326] = sym_word;
	v->a[80327] = state(662);
	v->a[80328] = 5;
	v->a[80329] = sym_arithmetic_expansion;
	v->a[80330] = sym_string;
	v->a[80331] = sym_simple_expansion;
	v->a[80332] = sym_expansion;
	v->a[80333] = sym_command_substitution;
	v->a[80334] = 12;
	v->a[80335] = actions(3);
	v->a[80336] = 1;
	v->a[80337] = sym_comment;
	v->a[80338] = actions(2737);
	v->a[80339] = 1;
	small_parse_table_4017(v);
}

void	small_parse_table_4017(t_small_parse_table_array *v)
{
	v->a[80340] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80341] = actions(2741);
	v->a[80342] = 1;
	v->a[80343] = anon_sym_DQUOTE;
	v->a[80344] = actions(2743);
	v->a[80345] = 1;
	v->a[80346] = anon_sym_DOLLAR_LBRACE;
	v->a[80347] = actions(2745);
	v->a[80348] = 1;
	v->a[80349] = anon_sym_DOLLAR_LPAREN;
	v->a[80350] = actions(2747);
	v->a[80351] = 1;
	v->a[80352] = anon_sym_BQUOTE;
	v->a[80353] = actions(2837);
	v->a[80354] = 1;
	v->a[80355] = anon_sym_DOLLAR;
	v->a[80356] = actions(2993);
	v->a[80357] = 1;
	v->a[80358] = sym__comment_word;
	v->a[80359] = actions(2995);
	small_parse_table_4018(v);
}

void	small_parse_table_4018(t_small_parse_table_array *v)
{
	v->a[80360] = 1;
	v->a[80361] = sym__empty_value;
	v->a[80362] = state(1305);
	v->a[80363] = 1;
	v->a[80364] = sym_concatenation;
	v->a[80365] = actions(2991);
	v->a[80366] = 3;
	v->a[80367] = sym_raw_string;
	v->a[80368] = sym_number;
	v->a[80369] = sym_word;
	v->a[80370] = state(1007);
	v->a[80371] = 5;
	v->a[80372] = sym_arithmetic_expansion;
	v->a[80373] = sym_string;
	v->a[80374] = sym_simple_expansion;
	v->a[80375] = sym_expansion;
	v->a[80376] = sym_command_substitution;
	v->a[80377] = 12;
	v->a[80378] = actions(3);
	v->a[80379] = 1;
	small_parse_table_4019(v);
}

void	small_parse_table_4019(t_small_parse_table_array *v)
{
	v->a[80380] = sym_comment;
	v->a[80381] = actions(859);
	v->a[80382] = 1;
	v->a[80383] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80384] = actions(861);
	v->a[80385] = 1;
	v->a[80386] = anon_sym_DOLLAR;
	v->a[80387] = actions(863);
	v->a[80388] = 1;
	v->a[80389] = anon_sym_DQUOTE;
	v->a[80390] = actions(865);
	v->a[80391] = 1;
	v->a[80392] = anon_sym_DOLLAR_LBRACE;
	v->a[80393] = actions(867);
	v->a[80394] = 1;
	v->a[80395] = anon_sym_DOLLAR_LPAREN;
	v->a[80396] = actions(869);
	v->a[80397] = 1;
	v->a[80398] = anon_sym_BQUOTE;
	v->a[80399] = actions(2997);
	small_parse_table_4020(v);
}

/* EOF small_parse_table_803.c */
