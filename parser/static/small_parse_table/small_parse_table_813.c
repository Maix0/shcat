/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_813.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4065(t_small_parse_table_array *v)
{
	v->a[81300] = 1;
	v->a[81301] = aux_sym_number_token1;
	v->a[81302] = actions(941);
	v->a[81303] = 1;
	v->a[81304] = aux_sym_number_token2;
	v->a[81305] = actions(943);
	v->a[81306] = 1;
	v->a[81307] = anon_sym_DOLLAR_LBRACE;
	v->a[81308] = actions(945);
	v->a[81309] = 1;
	v->a[81310] = anon_sym_DOLLAR_LPAREN;
	v->a[81311] = actions(947);
	v->a[81312] = 1;
	v->a[81313] = anon_sym_BQUOTE;
	v->a[81314] = actions(3288);
	v->a[81315] = 1;
	v->a[81316] = sym__bare_dollar;
	v->a[81317] = actions(3284);
	v->a[81318] = 3;
	v->a[81319] = sym_raw_string;
	small_parse_table_4066(v);
}

void	small_parse_table_4066(t_small_parse_table_array *v)
{
	v->a[81320] = sym__comment_word;
	v->a[81321] = sym_word;
	v->a[81322] = state(1552);
	v->a[81323] = 6;
	v->a[81324] = sym_arithmetic_expansion;
	v->a[81325] = sym_string;
	v->a[81326] = sym_number;
	v->a[81327] = sym_simple_expansion;
	v->a[81328] = sym_expansion;
	v->a[81329] = sym_command_substitution;
	v->a[81330] = 12;
	v->a[81331] = actions(3);
	v->a[81332] = 1;
	v->a[81333] = sym_comment;
	v->a[81334] = actions(1749);
	v->a[81335] = 1;
	v->a[81336] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81337] = actions(1751);
	v->a[81338] = 1;
	v->a[81339] = anon_sym_DOLLAR;
	small_parse_table_4067(v);
}

void	small_parse_table_4067(t_small_parse_table_array *v)
{
	v->a[81340] = actions(1753);
	v->a[81341] = 1;
	v->a[81342] = anon_sym_DQUOTE;
	v->a[81343] = actions(1755);
	v->a[81344] = 1;
	v->a[81345] = aux_sym_number_token1;
	v->a[81346] = actions(1757);
	v->a[81347] = 1;
	v->a[81348] = aux_sym_number_token2;
	v->a[81349] = actions(1759);
	v->a[81350] = 1;
	v->a[81351] = anon_sym_DOLLAR_LBRACE;
	v->a[81352] = actions(1761);
	v->a[81353] = 1;
	v->a[81354] = anon_sym_DOLLAR_LPAREN;
	v->a[81355] = actions(1763);
	v->a[81356] = 1;
	v->a[81357] = anon_sym_BQUOTE;
	v->a[81358] = actions(1747);
	v->a[81359] = 2;
	small_parse_table_4068(v);
}

void	small_parse_table_4068(t_small_parse_table_array *v)
{
	v->a[81360] = sym_raw_string;
	v->a[81361] = sym_word;
	v->a[81362] = state(704);
	v->a[81363] = 2;
	v->a[81364] = sym_concatenation;
	v->a[81365] = aux_sym_for_statement_repeat1;
	v->a[81366] = state(936);
	v->a[81367] = 6;
	v->a[81368] = sym_arithmetic_expansion;
	v->a[81369] = sym_string;
	v->a[81370] = sym_number;
	v->a[81371] = sym_simple_expansion;
	v->a[81372] = sym_expansion;
	v->a[81373] = sym_command_substitution;
	v->a[81374] = 12;
	v->a[81375] = actions(3);
	v->a[81376] = 1;
	v->a[81377] = sym_comment;
	v->a[81378] = actions(2905);
	v->a[81379] = 1;
	small_parse_table_4069(v);
}

void	small_parse_table_4069(t_small_parse_table_array *v)
{
	v->a[81380] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81381] = actions(2909);
	v->a[81382] = 1;
	v->a[81383] = anon_sym_DQUOTE;
	v->a[81384] = actions(2911);
	v->a[81385] = 1;
	v->a[81386] = aux_sym_number_token1;
	v->a[81387] = actions(2913);
	v->a[81388] = 1;
	v->a[81389] = aux_sym_number_token2;
	v->a[81390] = actions(2915);
	v->a[81391] = 1;
	v->a[81392] = anon_sym_DOLLAR_LBRACE;
	v->a[81393] = actions(2917);
	v->a[81394] = 1;
	v->a[81395] = anon_sym_DOLLAR_LPAREN;
	v->a[81396] = actions(2919);
	v->a[81397] = 1;
	v->a[81398] = anon_sym_BQUOTE;
	v->a[81399] = actions(3272);
	small_parse_table_4070(v);
}

/* EOF small_parse_table_813.c */
