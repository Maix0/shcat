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
	v->a[85100] = sym_number;
	v->a[85101] = sym_word;
	v->a[85102] = state(458);
	v->a[85103] = 5;
	v->a[85104] = sym_arithmetic_expansion;
	v->a[85105] = sym_string;
	v->a[85106] = sym_simple_expansion;
	v->a[85107] = sym_expansion;
	v->a[85108] = sym_command_substitution;
	v->a[85109] = 10;
	v->a[85110] = actions(3);
	v->a[85111] = 1;
	v->a[85112] = sym_comment;
	v->a[85113] = actions(2789);
	v->a[85114] = 1;
	v->a[85115] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85116] = actions(2791);
	v->a[85117] = 1;
	v->a[85118] = anon_sym_DOLLAR;
	v->a[85119] = actions(2793);
	small_parse_table_4256(v);
}

void	small_parse_table_4256(t_small_parse_table_array *v)
{
	v->a[85120] = 1;
	v->a[85121] = anon_sym_DQUOTE;
	v->a[85122] = actions(2795);
	v->a[85123] = 1;
	v->a[85124] = anon_sym_DOLLAR_LBRACE;
	v->a[85125] = actions(2797);
	v->a[85126] = 1;
	v->a[85127] = anon_sym_DOLLAR_LPAREN;
	v->a[85128] = actions(2799);
	v->a[85129] = 1;
	v->a[85130] = anon_sym_BQUOTE;
	v->a[85131] = state(207);
	v->a[85132] = 2;
	v->a[85133] = sym_concatenation;
	v->a[85134] = aux_sym_for_statement_repeat1;
	v->a[85135] = actions(3164);
	v->a[85136] = 3;
	v->a[85137] = sym_raw_string;
	v->a[85138] = sym_number;
	v->a[85139] = sym_word;
	small_parse_table_4257(v);
}

void	small_parse_table_4257(t_small_parse_table_array *v)
{
	v->a[85140] = state(361);
	v->a[85141] = 5;
	v->a[85142] = sym_arithmetic_expansion;
	v->a[85143] = sym_string;
	v->a[85144] = sym_simple_expansion;
	v->a[85145] = sym_expansion;
	v->a[85146] = sym_command_substitution;
	v->a[85147] = 3;
	v->a[85148] = actions(3);
	v->a[85149] = 1;
	v->a[85150] = sym_comment;
	v->a[85151] = actions(1048);
	v->a[85152] = 1;
	v->a[85153] = sym__concat;
	v->a[85154] = actions(1046);
	v->a[85155] = 14;
	v->a[85156] = anon_sym_SEMI_SEMI;
	v->a[85157] = aux_sym_heredoc_redirect_token1;
	v->a[85158] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85159] = anon_sym_AMP;
	small_parse_table_4258(v);
}

void	small_parse_table_4258(t_small_parse_table_array *v)
{
	v->a[85160] = aux_sym_concatenation_token1;
	v->a[85161] = anon_sym_DOLLAR;
	v->a[85162] = anon_sym_DQUOTE;
	v->a[85163] = sym_raw_string;
	v->a[85164] = sym_number;
	v->a[85165] = anon_sym_DOLLAR_LBRACE;
	v->a[85166] = anon_sym_DOLLAR_LPAREN;
	v->a[85167] = anon_sym_BQUOTE;
	v->a[85168] = sym_word;
	v->a[85169] = anon_sym_SEMI;
	v->a[85170] = 3;
	v->a[85171] = actions(3);
	v->a[85172] = 1;
	v->a[85173] = sym_comment;
	v->a[85174] = actions(1044);
	v->a[85175] = 1;
	v->a[85176] = sym__concat;
	v->a[85177] = actions(1042);
	v->a[85178] = 14;
	v->a[85179] = anon_sym_SEMI_SEMI;
	small_parse_table_4259(v);
}

void	small_parse_table_4259(t_small_parse_table_array *v)
{
	v->a[85180] = aux_sym_heredoc_redirect_token1;
	v->a[85181] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85182] = anon_sym_AMP;
	v->a[85183] = aux_sym_concatenation_token1;
	v->a[85184] = anon_sym_DOLLAR;
	v->a[85185] = anon_sym_DQUOTE;
	v->a[85186] = sym_raw_string;
	v->a[85187] = sym_number;
	v->a[85188] = anon_sym_DOLLAR_LBRACE;
	v->a[85189] = anon_sym_DOLLAR_LPAREN;
	v->a[85190] = anon_sym_BQUOTE;
	v->a[85191] = sym_word;
	v->a[85192] = anon_sym_SEMI;
	v->a[85193] = 3;
	v->a[85194] = actions(3);
	v->a[85195] = 1;
	v->a[85196] = sym_comment;
	v->a[85197] = actions(1126);
	v->a[85198] = 1;
	v->a[85199] = sym__concat;
	small_parse_table_4260(v);
}

/* EOF small_parse_table_851.c */
