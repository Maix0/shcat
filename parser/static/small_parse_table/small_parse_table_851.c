/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_851.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4255(t_small_parse_table_array *v)
{
	v->a[85100] = 1;
	v->a[85101] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85102] = actions(3363);
	v->a[85103] = 1;
	v->a[85104] = anon_sym_DOLLAR;
	v->a[85105] = actions(3365);
	v->a[85106] = 1;
	v->a[85107] = anon_sym_DQUOTE;
	v->a[85108] = actions(3367);
	v->a[85109] = 1;
	v->a[85110] = anon_sym_DOLLAR_LBRACE;
	v->a[85111] = actions(3369);
	v->a[85112] = 1;
	v->a[85113] = anon_sym_DOLLAR_LPAREN;
	v->a[85114] = actions(3371);
	v->a[85115] = 1;
	v->a[85116] = anon_sym_BQUOTE;
	v->a[85117] = actions(3373);
	v->a[85118] = 1;
	v->a[85119] = sym__bare_dollar;
	small_parse_table_4256(v);
}

void	small_parse_table_4256(t_small_parse_table_array *v)
{
	v->a[85120] = actions(3359);
	v->a[85121] = 5;
	v->a[85122] = aux_sym_concatenation_token1;
	v->a[85123] = sym_raw_string;
	v->a[85124] = sym_number;
	v->a[85125] = sym__comment_word;
	v->a[85126] = sym_word;
	v->a[85127] = state(2131);
	v->a[85128] = 5;
	v->a[85129] = sym_arithmetic_expansion;
	v->a[85130] = sym_string;
	v->a[85131] = sym_simple_expansion;
	v->a[85132] = sym_expansion;
	v->a[85133] = sym_command_substitution;
	v->a[85134] = 12;
	v->a[85135] = actions(3);
	v->a[85136] = 1;
	v->a[85137] = sym_comment;
	v->a[85138] = actions(3377);
	v->a[85139] = 1;
	small_parse_table_4257(v);
}

void	small_parse_table_4257(t_small_parse_table_array *v)
{
	v->a[85140] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85141] = actions(3379);
	v->a[85142] = 1;
	v->a[85143] = anon_sym_DOLLAR;
	v->a[85144] = actions(3381);
	v->a[85145] = 1;
	v->a[85146] = anon_sym_DQUOTE;
	v->a[85147] = actions(3383);
	v->a[85148] = 1;
	v->a[85149] = anon_sym_DOLLAR_LBRACE;
	v->a[85150] = actions(3385);
	v->a[85151] = 1;
	v->a[85152] = anon_sym_DOLLAR_LPAREN;
	v->a[85153] = actions(3387);
	v->a[85154] = 1;
	v->a[85155] = anon_sym_BQUOTE;
	v->a[85156] = actions(3389);
	v->a[85157] = 1;
	v->a[85158] = sym__comment_word;
	v->a[85159] = actions(3391);
	small_parse_table_4258(v);
}

void	small_parse_table_4258(t_small_parse_table_array *v)
{
	v->a[85160] = 1;
	v->a[85161] = sym__empty_value;
	v->a[85162] = state(821);
	v->a[85163] = 1;
	v->a[85164] = sym_concatenation;
	v->a[85165] = actions(3375);
	v->a[85166] = 3;
	v->a[85167] = sym_raw_string;
	v->a[85168] = sym_number;
	v->a[85169] = sym_word;
	v->a[85170] = state(371);
	v->a[85171] = 5;
	v->a[85172] = sym_arithmetic_expansion;
	v->a[85173] = sym_string;
	v->a[85174] = sym_simple_expansion;
	v->a[85175] = sym_expansion;
	v->a[85176] = sym_command_substitution;
	v->a[85177] = 10;
	v->a[85178] = actions(3);
	v->a[85179] = 1;
	small_parse_table_4259(v);
}

void	small_parse_table_4259(t_small_parse_table_array *v)
{
	v->a[85180] = sym_comment;
	v->a[85181] = actions(1011);
	v->a[85182] = 1;
	v->a[85183] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85184] = actions(1015);
	v->a[85185] = 1;
	v->a[85186] = anon_sym_DQUOTE;
	v->a[85187] = actions(1017);
	v->a[85188] = 1;
	v->a[85189] = anon_sym_DOLLAR_LBRACE;
	v->a[85190] = actions(1019);
	v->a[85191] = 1;
	v->a[85192] = anon_sym_DOLLAR_LPAREN;
	v->a[85193] = actions(1021);
	v->a[85194] = 1;
	v->a[85195] = anon_sym_BQUOTE;
	v->a[85196] = actions(3190);
	v->a[85197] = 1;
	v->a[85198] = sym__bare_dollar;
	v->a[85199] = actions(3393);
	small_parse_table_4260(v);
}

/* EOF small_parse_table_851.c */
