/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_491.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2455(t_small_parse_table_array *v)
{
	v->a[49100] = actions(2281);
	v->a[49101] = 1;
	v->a[49102] = anon_sym_0;
	v->a[49103] = actions(2283);
	v->a[49104] = 1;
	v->a[49105] = sym_variable_name;
	v->a[49106] = actions(2345);
	v->a[49107] = 1;
	v->a[49108] = anon_sym_RBRACE;
	v->a[49109] = state(1700);
	v->a[49110] = 1;
	v->a[49111] = sym__expansion_body;
	v->a[49112] = actions(2275);
	v->a[49113] = 6;
	v->a[49114] = anon_sym_BANG;
	v->a[49115] = anon_sym_DASH;
	v->a[49116] = anon_sym_STAR;
	v->a[49117] = anon_sym_QMARK;
	v->a[49118] = anon_sym_DOLLAR;
	v->a[49119] = anon_sym_AT;
	small_parse_table_2456(v);
}

void	small_parse_table_2456(t_small_parse_table_array *v)
{
	v->a[49120] = 8;
	v->a[49121] = actions(3);
	v->a[49122] = 1;
	v->a[49123] = sym_comment;
	v->a[49124] = actions(2277);
	v->a[49125] = 1;
	v->a[49126] = anon_sym_POUND;
	v->a[49127] = actions(2279);
	v->a[49128] = 1;
	v->a[49129] = aux_sym__simple_variable_name_token1;
	v->a[49130] = actions(2281);
	v->a[49131] = 1;
	v->a[49132] = anon_sym_0;
	v->a[49133] = actions(2283);
	v->a[49134] = 1;
	v->a[49135] = sym_variable_name;
	v->a[49136] = actions(2347);
	v->a[49137] = 1;
	v->a[49138] = anon_sym_RBRACE;
	v->a[49139] = state(1601);
	small_parse_table_2457(v);
}

void	small_parse_table_2457(t_small_parse_table_array *v)
{
	v->a[49140] = 1;
	v->a[49141] = sym__expansion_body;
	v->a[49142] = actions(2275);
	v->a[49143] = 6;
	v->a[49144] = anon_sym_BANG;
	v->a[49145] = anon_sym_DASH;
	v->a[49146] = anon_sym_STAR;
	v->a[49147] = anon_sym_QMARK;
	v->a[49148] = anon_sym_DOLLAR;
	v->a[49149] = anon_sym_AT;
	v->a[49150] = 10;
	v->a[49151] = actions(3);
	v->a[49152] = 1;
	v->a[49153] = sym_comment;
	v->a[49154] = actions(2293);
	v->a[49155] = 1;
	v->a[49156] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49157] = actions(2299);
	v->a[49158] = 1;
	v->a[49159] = sym_string_content;
	small_parse_table_2458(v);
}

void	small_parse_table_2458(t_small_parse_table_array *v)
{
	v->a[49160] = actions(2301);
	v->a[49161] = 1;
	v->a[49162] = anon_sym_DOLLAR_LBRACE;
	v->a[49163] = actions(2303);
	v->a[49164] = 1;
	v->a[49165] = anon_sym_DOLLAR_LPAREN;
	v->a[49166] = actions(2305);
	v->a[49167] = 1;
	v->a[49168] = anon_sym_BQUOTE;
	v->a[49169] = actions(2349);
	v->a[49170] = 1;
	v->a[49171] = anon_sym_DOLLAR;
	v->a[49172] = actions(2351);
	v->a[49173] = 1;
	v->a[49174] = anon_sym_DQUOTE;
	v->a[49175] = state(1112);
	v->a[49176] = 1;
	v->a[49177] = aux_sym_string_repeat1;
	v->a[49178] = state(1394);
	v->a[49179] = 4;
	small_parse_table_2459(v);
}

void	small_parse_table_2459(t_small_parse_table_array *v)
{
	v->a[49180] = sym_arithmetic_expansion;
	v->a[49181] = sym_simple_expansion;
	v->a[49182] = sym_expansion;
	v->a[49183] = sym_command_substitution;
	v->a[49184] = 5;
	v->a[49185] = actions(3);
	v->a[49186] = 1;
	v->a[49187] = sym_comment;
	v->a[49188] = actions(2355);
	v->a[49189] = 1;
	v->a[49190] = anon_sym_PIPE;
	v->a[49191] = actions(2357);
	v->a[49192] = 1;
	v->a[49193] = aux_sym_heredoc_redirect_token1;
	v->a[49194] = state(1165);
	v->a[49195] = 1;
	v->a[49196] = aux_sym_pipeline_repeat1;
	v->a[49197] = actions(2353);
	v->a[49198] = 9;
	v->a[49199] = anon_sym_esac;
	small_parse_table_2460(v);
}

/* EOF small_parse_table_491.c */
